#include "Date.h"
#include "Arduino.h"

char* substring(const char* _buffer_value, const int start){
    char str[2];
    int i_buffer = start;
    for(int i_str = 0; i_str < 2; i_str++){
        str[i_str] = _buffer_value[i_buffer + i_str];
        i_str++;
    }

    return str;
};

void Date::parse(const char* horodate){
    saison = horodate[0];
    annee = atoi(substring(horodate, 1));
    mois = atoi(substring(horodate, 3));
    jours = atoi(substring(horodate, 5));
    heures = atoi(substring(horodate, 7));
    minutes = atoi(substring(horodate, 9));
    secondes = atoi(substring(horodate, 11));
};
