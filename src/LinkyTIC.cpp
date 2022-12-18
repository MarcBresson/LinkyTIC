// #ifndef P1
// #define P1(name) const char name[] PROGMEM
// #endif

#include "LinkyTIC.h"

/************************* Defines and const  **************************/

char _buffer_tag[8];            // buffer for the tag name
char _buffer_date[16];          // buffer for the (optional) tag date. Must be the same length as value because we can't know in advance if it s going to be a date or a value
char _buffer_value[16];         // buffer for the tag value
char _buffer_checksum;          // buffer for the tag checksum

int *_buffers_pointer[4];       // pointer to each buffer
char _buffer_pointer_index;     // define which pointer to use

char _checksum;

char _buffer_index;          // current buffer index
bool _group_recep_in_progress;

/*************** Constructor, methods and properties ******************/
LinkyTIC::LinkyTIC(char pin_Rx){
    _buffers_pointer = {*_buffer_tag, *_buffer_date, *_buffer_value, *_buffer_checksum};
    _pin_Rx = pin_Rx;
};

void LinkyTIC::init(){

}

bool LinkyTIC::read(){ // non-blocking function
    readByte()

    return _status == STATUS_OK 
}

void LinkyTIC::readUntil(int timeout){ // blocking function
    uint32_t start = millis();
    while (millis() - start < timeout){
        readByte();
        if (_status == STATUS_OK) break;
    }
}

char c;
void LinkyTIC::readByte(){
    if(_stream.available()){
        c = _LRx.read();

        if (c == 0x02){ // STX start text : start of frame
            _status = STATUS_WAITING
        }
        else if (c == 0x03){ // ETX end text : end of frame
            // status is okay every checksums are correct
            if(_status != STATUS_FAILED){
                _status = STATUS_OK
            }
        }

        else if (c == '\n'){ // new tag group
            _buffer_index = 0;
            _group_recep_in_progress = true;
            _buffer_pointer_index = 0;  // next thing will be a tag name
        }
        else if(c == '\r') { // end of tag group
            if(_buffer_pointer_index == 2){ // There was no date in the group
                _buffer_value = _buffer_date;
                _buffer_checksum = _buffer_value[0];
                _checksum -= _buffer_checksum;  // the received checksum is excluded from the checksum calculus

                _checksum = (_checksum & 0x3f) + 0x20;
            }
            _group_recep_in_progress = false;
            parseBuffer(_buffer)
        }

        else if(_group_recep_in_progress) { // during data reception
            if(c == 0x20 || c == 0x09){     // group separator, either <SP> (0x20) or <HT> (0x09)
                _buffer_pointer_index += 1;
            } else {
                *(_buffers_pointer[_buffer_pointer_index] + _buffer_index) = c
            }
            _checksum += c
        }
    }
}

LinkyTIC::setData(char[] tag_name, uncertain_type value){
    // associate the value in the structure to the
    // value extracted in the parseBuffer function.
    // when we have an instance of this class, we
    // should be able to get a tag property using
    // the LinkyTIC.tag_name
}

LinkyTIC::tramesDispo(){
    // read everything and report all frames that
    // exist and that have been received
}
