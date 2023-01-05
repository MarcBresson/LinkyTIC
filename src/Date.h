#ifndef _LINKYDATE
#define _LINKYDATE

class Date {
    public:
        enum MODE {NORMAL, DEGRADE};
        char saison;
        uint8_t annee;
        uint8_t mois;
        uint8_t jours;
        uint8_t heures;
        uint8_t minutes;
        uint8_t secondes;

        void parse(const char* horodate);
};
#endif
