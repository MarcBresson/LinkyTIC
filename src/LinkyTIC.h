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
        LinkyTIC(uint8_t pin_Rx, uint8_t pin_Tx);   /* Constructor */

        struct DATA {
            // what am I supposed to write ?
            // the type can be different for each group (str, int8, int16)
        }
        
        void Init();        /* Initialisation, call from setup() */
        void Update();      /* Update, call from loop() */

        void TramesDispo();

        bool Read(DATA& data);
        bool ReadUntil(DATA& data);

    private:
        enum STATUS {STATUS_WAITING, STATUS_OK, STATUS_FAILED};
        STATUS _status;

        void ReadByte();
        void parseBuffer();
        void setData();

        Stream* _stream;
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
