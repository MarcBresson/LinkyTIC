#ifndef _LINKYDATE
#define _LINKYDATE

#include <stdint.h>


class Date {
    public:
        enum MODE {NORMAL, DEGRADE};    //Dans le cas où une horodate a été obtenue avec une horloge temps réel en mode dégradé (cas de fonctionnement du compteur qui a débordé son autonomie de marche de l’horloge et tant que son horloge n’a pas pu être resynchronisée par programmation), alors l'information de saison est codée avec une lettre minuscule. [page 17, notice Enedis-NOI-CPT_54E]
        MODE mode;
        
        char saison;        // P, E, A, H (printemps, été, automne, hiver). Représente la saison en cours.

        uint8_t annee;      // L'année sur 2 caractères (e.g. 18 pour 2018)
        uint8_t mois;       // Le mois (1-12)
        uint8_t jours;      // Le jour dans le mois (1-31)

        uint8_t heures;     // L'heure dans le jour (0-23)
        uint8_t minutes;    // Les minutes dans l'heure (0-59)
        uint8_t secondes;   // Les secondes dans les minutes (0-59)

        void parse(const char* horodate);
};
#endif
