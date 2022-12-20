#ifndef _LINKYTIC
#define _LINKYTIC

#include "Stream.h"

class LinkyTIC {
    public:
        LinkyTIC(Stream&);   /* Constructor */

        void tramesDispo();         // Display every tag names delivered by your electric counter

        bool read();                // non-blocking way of reading new value. Return true when a frame is complete
        void readUntil(uint32_t timeout);           // blocking reading function

    private:
        enum STATUS {STATUS_WAITING, STATUS_OK, STATUS_FAILED};
        STATUS _status;

        char _buffer_tag[8];            // buffer for the tag name
        char _buffer_date[16];          // buffer for the (optional) tag date. Must be the same length as value because we can't know in advance if it s going to be a date or a value
        char _buffer_value[16];         // buffer for the tag value
        char _buffer_checksum[1];       // buffer for the tag checksum

        char _checksum;                 // calculus of the group checksum

        char* _buffers[4] = {_buffer_tag, _buffer_date, _buffer_value, _buffer_checksum};   // reference to each buffer
        uint8_t _buffer_reference_index;// define which pointer to use
        uint8_t _buffer_index;          // current buffer index
        bool _group_recep_in_progress;

        void readByte();                // read one new serial byte and happen it to the buffer
        void checksum(char received_checksum, char computed_checksum);    // verify that the two checksums match
        void parse(const char* tag_name, const char* buffer_value);       // set the value of the tag in the structure to the desired value
        void resetBuffers();

        Stream* _stream;                 // Serial stream
};

#endif
