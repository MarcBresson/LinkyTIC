// #ifndef P1
// #define P1(name) const char name[] PROGMEM
// #endif

#include <string.h>
#include "LinkyTIC.h"

/************************* Defines and const  **************************/

uint8_t _max_buffer_length 20
char _buffer[_max_buffer_length];
char *_buffer_pointer;
uint8_t _buffer_index;
bool _tag_recep_in_progress;

/*************** Constructor, methods and properties ******************/
LinkyTIC::LinkyTIC(uint8_t pin_Rx){
    _buffer_pointer = _buffer;
    _pin_Rx = pin_Rx;
};

LinkyTIC::read(){ // non-blocking function
    readByte()

    return _status == STATUS_OK 
}

LinkyTIC::readUntil(uint16_t timeout){ // blocking function
    uint32_t start = millis();
    while (millis() - start < timeout){
        readByte();
        if (_status == STATUS_OK) break;
    }
}

LinkyTIC::readByte(){
    if(_stream.available()){
        c = _LRx.read();
        if (c == 0x02){ // STX start text : start of frame
            _status = STATUS_WAITING
        }
        else if (c == 0x03){ // ETX end text : end of frame
            // status is okay if this character is received
            // and if every checksums are correct
            if(_status != STATUS_FAILED){
                _status = STATUS_OK
            }
        }
        else if (c == '\n'){ // new tag group
            _buffer_index = 0;
            _tag_recep_in_progress = true;
        }
        else if(c == '\r') { // end of tag group
            _tag_recep_in_progress = false;
            parseBuffer(_buffer)
        }
        else if(_tag_recep_in_progress) { // during data reception
            *(_buffer_pointer + _buffer_index) = c
        }
    }
}

LinkyTIC::parseBuffer(char[] buffer){
    // must extract tag name, tag value, and optional date
    // <LF> (0x0A) | tag name | <HT> (0x09) | value (int8, int16 or str) | <HT> (0x09) | Checksum | <CR> (0x0D)
    // <LF> (0x0A) | tag name | <HT> (0x09) | date | <HT> (0x09) | value (int8, int16 or str) | <HT> (0x09) | Checksum | <CR> (0x0D)
    setData()
}

LinkyTIC::setData(char[] tag_name, uncertain_type value, optional date){
    // associate the value in the structure to the
    // value extracted in the parseBuffer function.
    // when we have an instance of this class, we
    // should be able to get a tag property using
    // the LinkyTIC.tag_name
}

LinkyTIC::TramesDispo(){
    // read everything and report all frames that
    // exist and that have been received
}
