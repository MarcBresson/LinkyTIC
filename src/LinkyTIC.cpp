#include "LinkyTIC.h"


LinkyTIC::LinkyTIC(Stream& stream, MODE mode){
    this->_stream = &stream;
    this->_mode = mode;
};


bool LinkyTIC::read(){ // non-blocking function
    readByte();

    return _status == STATUS_OK;
};


void LinkyTIC::readUntil(uint32_t timeout){ // blocking function
    uint32_t start = millis();
    while (millis() - start < timeout){
        readByte();
        if (_status == STATUS_OK) break;
    }
};


char c;
void LinkyTIC::readByte(){
    if(_stream->available()){
        c = _stream->read();

        if (c == 0x02){      // STX start text : start of frame
            _status = STATUS_WAITING;
        }
        else if (c == 0x03){ // ETX end text : end of frame
            // status is okay if every checksums are correct
            if(_status != STATUS_FAILED){
                _status = STATUS_OK;
            }
        }

        else if (c == '\n'){ // new tag group
            _buffer_index = 0;
            _group_recep_in_progress = true;
            _buffer_reference_index = 0;  // next thing will be a tag name

            resetBuffers();
        }
        else if(c == '\r') { // end of tag group
            _checksum = _checksum - _buffer_checksum[0];  // the received checksum is excluded from the checksum calculus
            if(_mode == HISTORIQUE){    // in historique mode the separator between data and checksum is not controled by the checksum
                _checksum = _checksum - 0x20;
            }
            _checksum = (_checksum & 0x3f) + 0x20;
            checksum(_checksum, _buffer_checksum[0]);

            parse(_buffer_tag, _buffer_value);
            _group_recep_in_progress = false;
        }

        else if(_group_recep_in_progress) { // during data reception
            if(c == 0x20 || c == 0x09){     // group separator, either <SP> (0x20) or <HT> (0x09)
                _buffer_reference_index += 1;
            } else {
                #ifdef HAS_HORODATE
                    if(_buffer_reference_index == 2 && _buffer_index == 2){ // if checksum has more than one bytes, the group has a date
                        for(uint8_t i = 0; i < sizeof(_buffer_date); i++){
                            _buffer_date[i] = _buffer_value[i];
                        }
                        _buffer_value[0] = _buffer_checksum[0];
                        _buffer_index = 1;              // the first bytes was in buffer_checksum and is now already in buffer_value
                        _buffer_reference_index = 1;    // we are now reading value
                    }
                #endif
                _buffers[_buffer_reference_index][_buffer_index] = c;
            }
            _buffer_index++;
            _checksum += c;
        }
    }
};


void LinkyTIC::resetBuffers(){ // a priori only needed for _buffer_tag because we do not know its length in advance
    for(uint8 i; i<sizeof(_buffers); i++){
        for(uint8 ii; ii<sizeof(_buffers[i]); ii++){
            _buffers[i][ii] = 0x00;
        }
    }
};


void LinkyTIC::checksum(char received_checksum, char computed_checksum){
    if(received_checksum != computed_checksum){
        _status = STATUS_FAILED;
    }
};
