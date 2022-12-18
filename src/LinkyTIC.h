/***********************************************************************
 Objet decodeur de teleinformation client (TIC)
format Linky "historique" ou anciens compteurs
electroniques.
  
Reference : ERDF-NOI-CPT_54E V1

V06 : MicroQuettas mars 2018

***********************************************************************/
#ifndef _LinkyTIC
#define _LinkyTIC true

#include "Stream.h"

class LinkyTIC {
    public:
        LinkyTIC(uint8_t pin_Rx);   /* Constructor */

        struct DATA {
            // what am I supposed to write ?
            // the type can be different for each group (str, int8, int16)
        }
        
        void init();                // Initialisation, call from setup()

        void tramesDispo();         // Display every tag names delivered by your electric counter

        bool read(DATA& data);      // non-blocking way of reading new value. Return true when a frame is complete
        void readUntil(DATA& data); // blocking reading function

    private:
        enum STATUS {STATUS_WAITING, STATUS_OK, STATUS_FAILED};
        STATUS _status;


        char _buffer_tag[8];
        char _buffer_date[13];
        char _buffer_value[16];
        int *_buffer_pointer[4];

        char _buffer_tag[8];            // buffer for the tag name
        char _buffer_date[16];          // buffer for the (optional) tag date. Must be the same length as value because we can't know in advance if it s going to be a date or a value
        char _buffer_value[16];         // buffer for the tag value
        char _buffer_checksum;          // buffer for the tag checksum

        int *_buffers_pointer[4];       // pointer to each buffer
        char _buffer_pointer_index;     // define which pointer to use

        char _checksum;

        char _buffer_index;          // current buffer index
        bool _group_recep_in_progress;

        void readByte();    // read one new serial byte and happen it to the buffer
        void setData();     // set the value of the tag in the structure to the desired value

        Stream* _stream;    // Serial stream
}

#endif

// trames
// <STX> (0x02) | Groupe | Groupe | ... | <ETX> (0x03)

// groupe en mode HIST
// <LF> (0x0A) | Etiquette | <SP> (0x20) | Donnée | <SP> (0x20) | Checksum | <CR> (0x0D)

// longueur maximale en mode historique
// 1           | 8         | 1           | cf Note 1|    1      | 8        | 1          | total : 36

// groupe en mode STANDARD non horodatée
// <LF> (0x0A) | Etiquette | <HT> (0x09) | Donnée | <HT> (0x09) | Checksum | <CR> (0x0D)
// groupe en mode STANDARD horodatée
// <LF> (0x0A) | Etiquette | <HT> (0x09) | Horodate | <HT> (0x09) | Donnée | <HT> (0x09) | Checksum | <CR> (0x0D)

// longueur maximale en mode standard
// 1           | 8         | 1           | 13       | 1           | cf Note 1|    1      | 8        | 1          | total : 50

// note 1 :
// longueur maximale données utiles 16
// longueur message court 32
// longueur Profil du prochain jour 98
