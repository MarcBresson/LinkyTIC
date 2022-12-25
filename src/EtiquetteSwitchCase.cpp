#include "LinkyTIC.h"


constexpr unsigned int hash(const char* str, int h = 0){
    return !str[h] ? 5381 : (hash(str, h+1) * 33) ^ str[h];
}


void substring(char* str, const char* _buffer_value, const int length){
    for(int i = 0; i < length; i++){
        str[i] = _buffer_value[i];
    }
}

void LinkyTIC::parse(const char* tag_name, const char* buffer_value){
    switch (hash(tag_name)){
        #ifdef ADCO
        case hash("ADCO"):{
            substring(_ADCO, buffer_value, 12);
            break;
        }
        #endif
        
        #ifdef OPTARIF
        case hash("OPTARIF"):{
            substring(_OPTARIF, buffer_value, 4);
            break;
        }
        #endif
        
        #ifdef ISOUSC
        case hash("ISOUSC"):{
            char _tmp[2];
            substring(_tmp, buffer_value, 2);
			_ISOUSC = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef BASE
        case hash("BASE"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_BASE = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef HCHC
        case hash("HCHC"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_HCHC = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef HCHP
        case hash("HCHP"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_HCHP = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EJPHN
        case hash("EJPHN"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EJPHN = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EJPHPM
        case hash("EJPHPM"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EJPHPM = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef BBRHCJB
        case hash("BBRHCJB"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_BBRHCJB = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef BBRHPJB
        case hash("BBRHPJB"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_BBRHPJB = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef BBRHCJW
        case hash("BBRHCJW"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_BBRHCJW = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef BBRHPJW
        case hash("BBRHPJW"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_BBRHPJW = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef BBRHCJR
        case hash("BBRHCJR"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_BBRHCJR = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef BBRHPJR
        case hash("BBRHPJR"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_BBRHPJR = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef PEJP
        case hash("PEJP"):{
            char _tmp[2];
            substring(_tmp, buffer_value, 2);
			_PEJP = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef PTEC
        case hash("PTEC"):{
            substring(_PTEC, buffer_value, 4);
            break;
        }
        #endif
        
        #ifdef DEMAIN
        case hash("DEMAIN"):{
            substring(_DEMAIN, buffer_value, 4);
            break;
        }
        #endif
        
        #ifdef IINST
        case hash("IINST"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IINST = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IINST1
        case hash("IINST1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IINST1 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IINST2
        case hash("IINST2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IINST2 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IINST3
        case hash("IINST3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IINST3 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef ADPS
        case hash("ADPS"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_ADPS = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IMAX
        case hash("IMAX"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IMAX = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IMAX1
        case hash("IMAX1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IMAX1 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IMAX2
        case hash("IMAX2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IMAX2 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IMAX3
        case hash("IMAX3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IMAX3 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef PMAX
        case hash("PMAX"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_PMAX = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef PAPP
        case hash("PAPP"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_PAPP = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef HHPHC
        case hash("HHPHC"):{
            substring(_HHPHC, buffer_value, 1);
            break;
        }
        #endif
        
        #ifdef MOTDETAT
        case hash("MOTDETAT"):{
            substring(_MOTDETAT, buffer_value, 6);
            break;
        }
        #endif
        
        #ifdef PPOT
        case hash("PPOT"):{
            substring(_PPOT, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef ADIR1
        case hash("ADIR1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_ADIR1 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef ADIR2
        case hash("ADIR2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_ADIR2 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef ADIR3
        case hash("ADIR3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_ADIR3 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef ADSC
        case hash("ADSC"):{
            substring(_ADSC, buffer_value, 12);
            break;
        }
        #endif
        
        #ifdef VTIC
        case hash("VTIC"):{
            substring(_VTIC, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef DATE
        case hash("DATE"):{
            substring(_DATE, buffer_value, 0);
            break;
        }
        #endif
        
        #ifdef NGTF
        case hash("NGTF"):{
            substring(_NGTF, buffer_value, 16);
            break;
        }
        #endif
        
        #ifdef LTARF
        case hash("LTARF"):{
            substring(_LTARF, buffer_value, 16);
            break;
        }
        #endif
        
        #ifdef EAST
        case hash("EAST"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EAST = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF01
        case hash("EASF01"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF01 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF02
        case hash("EASF02"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF02 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF03
        case hash("EASF03"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF03 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF04
        case hash("EASF04"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF04 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF05
        case hash("EASF05"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF05 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF06
        case hash("EASF06"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF06 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF07
        case hash("EASF07"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF07 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF08
        case hash("EASF08"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF08 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF09
        case hash("EASF09"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF09 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASF10
        case hash("EASF10"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASF10 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASD01
        case hash("EASD01"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASD01 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASD02
        case hash("EASD02"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASD02 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASD03
        case hash("EASD03"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASD03 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EASD04
        case hash("EASD04"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EASD04 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef EAIT
        case hash("EAIT"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_EAIT = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef ERQ1
        case hash("ERQ1"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_ERQ1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef ERQ2
        case hash("ERQ2"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_ERQ2 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef ERQ3
        case hash("ERQ3"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_ERQ3 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef ERQ4
        case hash("ERQ4"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			_ERQ4 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef IRMS1
        case hash("IRMS1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IRMS1 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IRMS2
        case hash("IRMS2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IRMS2 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef IRMS3
        case hash("IRMS3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_IRMS3 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef URMS1
        case hash("URMS1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_URMS1 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef URMS2
        case hash("URMS2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_URMS2 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef URMS3
        case hash("URMS3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_URMS3 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef PREF
        case hash("PREF"):{
            char _tmp[2];
            substring(_tmp, buffer_value, 2);
			_PREF = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef PCOUP
        case hash("PCOUP"):{
            char _tmp[2];
            substring(_tmp, buffer_value, 2);
			_PCOUP = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef SINSTS
        case hash("SINSTS"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SINSTS = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SINSTS1
        case hash("SINSTS1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SINSTS1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SINSTS2
        case hash("SINSTS2"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SINSTS2 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SINSTS3
        case hash("SINSTS3"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SINSTS3 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXSN
        case hash("SMAXSN"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXSN = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXSN1
        case hash("SMAXSN1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXSN1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXSN2
        case hash("SMAXSN2"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXSN2 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXSN3
        case hash("SMAXSN3"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXSN3 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXSN_1
        case hash("SMAXSN-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXSN_1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXSN1_1
        case hash("SMAXSN1-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXSN1_1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXSN2_1
        case hash("SMAXSN2-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXSN2_1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXSN3_1
        case hash("SMAXSN3-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXSN3_1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SINSTI
        case hash("SINSTI"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SINSTI = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXIN
        case hash("SMAXIN"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXIN = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef SMAXIN_1
        case hash("SMAXIN-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_SMAXIN_1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef CCASN
        case hash("CCASN"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_CCASN = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef CCASN_1
        case hash("CCASN-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_CCASN_1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef CCAIN
        case hash("CCAIN"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_CCAIN = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef CCAIN_1
        case hash("CCAIN-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			_CCAIN_1 = atol(_tmp);
            break;
        }
        #endif
        
        #ifdef UMOY1
        case hash("UMOY1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_UMOY1 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef UMOY2
        case hash("UMOY2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_UMOY2 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef UMOY3
        case hash("UMOY3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			_UMOY3 = atoi(_tmp);
            break;
        }
        #endif
        
        #ifdef STGE
        case hash("STGE"):{
            substring(_STGE, buffer_value, 8);
            break;
        }
        #endif
        
        #ifdef DPM1
        case hash("DPM1"):{
            substring(_DPM1, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef FPM1
        case hash("FPM1"):{
            substring(_FPM1, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef DPM2
        case hash("DPM2"):{
            substring(_DPM2, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef FPM2
        case hash("FPM2"):{
            substring(_FPM2, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef DPM3
        case hash("DPM3"):{
            substring(_DPM3, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef FPM3
        case hash("FPM3"):{
            substring(_FPM3, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef MSG1
        case hash("MSG1"):{
            substring(_MSG1, buffer_value, 32);
            break;
        }
        #endif
        
        #ifdef MSG2
        case hash("MSG2"):{
            substring(_MSG2, buffer_value, 16);
            break;
        }
        #endif
        
        #ifdef PRM
        case hash("PRM"):{
            substring(_PRM, buffer_value, 14);
            break;
        }
        #endif
        
        #ifdef RELAIS
        case hash("RELAIS"):{
            substring(_RELAIS, buffer_value, 3);
            break;
        }
        #endif
        
        #ifdef NTARF
        case hash("NTARF"):{
            substring(_NTARF, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef NJOURF
        case hash("NJOURF"):{
            substring(_NJOURF, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef NJOURF1
        case hash("NJOURF+1"):{
            substring(_NJOURF1, buffer_value, 2);
            break;
        }
        #endif
        
        #ifdef PJOURF1
        case hash("PJOURF+1"):{
            substring(_PJOURF1, buffer_value, 98);
            break;
        }
        #endif
        
        #ifdef PPOINTE
        case hash("PPOINTE"):{
            substring(_PPOINTE, buffer_value, 98);
            break;
        }
        #endif
           }}
