#include "LinkyTIC.cpp"


constexpr unsigned int hash(const char* str, int h = 0){
    return !str[h] ? 5381 : (hash(str, h+1) * 33) ^ str[h];
}


void substring(char* str, const char* _buffer_value, const int length){
    for(int i = 0; i<length; i++){
        str[i] = _buffer_value[i];
    }
}

void LinkyTIC::parse(const char tag_name[], const char buffer_value[]){
    switch (hash(tag_name)){
        #ifdef ADCO
        case hash("ADCO"):{
            char _ADCO[12];
            substring(_ADCO, buffer_value, 12);
            break;
        }
        #endif
    
        #ifdef OPTARIF
        case hash("OPTARIF"):{
            char _OPTARIF[4];
            substring(_OPTARIF, buffer_value, 4);
            break;
        }
        #endif
    
        #ifdef ISOUSC
        case hash("ISOUSC"):{
            char _tmp[2];
            substring(_tmp, buffer_value, 2);
			uint8_t _ISOUSC = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef BASE
        case hash("BASE"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _BASE = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef HCHC
        case hash("HCHC"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _HCHC = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef HCHP
        case hash("HCHP"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _HCHP = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EJPHN
        case hash("EJPHN"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EJPHN = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EJPHPM
        case hash("EJPHPM"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EJPHPM = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef BBRHCJB
        case hash("BBRHCJB"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _BBRHCJB = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef BBRHPJB
        case hash("BBRHPJB"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _BBRHPJB = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef BBRHCJW
        case hash("BBRHCJW"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _BBRHCJW = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef BBRHPJW
        case hash("BBRHPJW"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _BBRHPJW = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef BBRHCJR
        case hash("BBRHCJR"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _BBRHCJR = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef BBRHPJR
        case hash("BBRHPJR"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _BBRHPJR = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef PEJP
        case hash("PEJP"):{
            char _tmp[2];
            substring(_tmp, buffer_value, 2);
			uint8_t _PEJP = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef PTEC
        case hash("PTEC"):{
            char _PTEC[4];
            substring(_PTEC, buffer_value, 4);
            break;
        }
        #endif
    
        #ifdef DEMAIN
        case hash("DEMAIN"):{
            char _DEMAIN[4];
            substring(_DEMAIN, buffer_value, 4);
            break;
        }
        #endif
    
        #ifdef IINST
        case hash("IINST"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IINST = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IINST1
        case hash("IINST1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IINST1 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IINST2
        case hash("IINST2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IINST2 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IINST3
        case hash("IINST3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IINST3 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef ADPS
        case hash("ADPS"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _ADPS = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IMAX
        case hash("IMAX"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IMAX = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IMAX1
        case hash("IMAX1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IMAX1 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IMAX2
        case hash("IMAX2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IMAX2 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IMAX3
        case hash("IMAX3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint32_t _IMAX3 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef PMAX
        case hash("PMAX"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _PMAX = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef PAPP
        case hash("PAPP"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _PAPP = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef HHPHC
        case hash("HHPHC"):{
            char _HHPHC[1];
            substring(_HHPHC, buffer_value, 1);
            break;
        }
        #endif
    
        #ifdef MOTDETAT
        case hash("MOTDETAT"):{
            char _MOTDETAT[6];
            substring(_MOTDETAT, buffer_value, 6);
            break;
        }
        #endif
    
        #ifdef PPOT
        case hash("PPOT"):{
            char _PPOT[2];
            substring(_PPOT, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef ADIR1
        case hash("ADIR1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _ADIR1 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef ADIR2
        case hash("ADIR2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _ADIR2 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef ADIR3
        case hash("ADIR3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _ADIR3 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef ADSC
        case hash("ADSC"):{
            char _ADSC[12];
            substring(_ADSC, buffer_value, 12);
            break;
        }
        #endif
    
        #ifdef VTIC
        case hash("VTIC"):{
            char _VTIC[2];
            substring(_VTIC, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef DATE
        case hash("DATE"):{
            char _DATE[0];
            substring(_DATE, buffer_value, 0);
            break;
        }
        #endif
    
        #ifdef NGTF
        case hash("NGTF"):{
            char _NGTF[16];
            substring(_NGTF, buffer_value, 16);
            break;
        }
        #endif
    
        #ifdef LTARF
        case hash("LTARF"):{
            char _LTARF[16];
            substring(_LTARF, buffer_value, 16);
            break;
        }
        #endif
    
        #ifdef EAST
        case hash("EAST"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EAST = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF01
        case hash("EASF01"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF01 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF02
        case hash("EASF02"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF02 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF03
        case hash("EASF03"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF03 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF04
        case hash("EASF04"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF04 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF05
        case hash("EASF05"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF05 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF06
        case hash("EASF06"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF06 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF07
        case hash("EASF07"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF07 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF08
        case hash("EASF08"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF08 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF09
        case hash("EASF09"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF09 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASF10
        case hash("EASF10"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASF10 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASD01
        case hash("EASD01"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASD01 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASD02
        case hash("EASD02"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASD02 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASD03
        case hash("EASD03"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASD03 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EASD04
        case hash("EASD04"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EASD04 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef EAIT
        case hash("EAIT"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _EAIT = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef ERQ1
        case hash("ERQ1"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _ERQ1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef ERQ2
        case hash("ERQ2"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _ERQ2 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef ERQ3
        case hash("ERQ3"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _ERQ3 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef ERQ4
        case hash("ERQ4"):{
            char _tmp[9];
            substring(_tmp, buffer_value, 9);
			uint32_t _ERQ4 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef IRMS1
        case hash("IRMS1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IRMS1 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IRMS2
        case hash("IRMS2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IRMS2 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef IRMS3
        case hash("IRMS3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _IRMS3 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef URMS1
        case hash("URMS1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _URMS1 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef URMS2
        case hash("URMS2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _URMS2 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef URMS3
        case hash("URMS3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _URMS3 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef PREF
        case hash("PREF"):{
            char _tmp[2];
            substring(_tmp, buffer_value, 2);
			uint8_t _PREF = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef PCOUP
        case hash("PCOUP"):{
            char _tmp[2];
            substring(_tmp, buffer_value, 2);
			uint8_t _PCOUP = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef SINSTS
        case hash("SINSTS"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SINSTS = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SINSTS1
        case hash("SINSTS1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SINSTS1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SINSTS2
        case hash("SINSTS2"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SINSTS2 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SINSTS3
        case hash("SINSTS3"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SINSTS3 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXSN
        case hash("SMAXSN"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXSN = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXSN1
        case hash("SMAXSN1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXSN1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXSN2
        case hash("SMAXSN2"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXSN2 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXSN3
        case hash("SMAXSN3"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXSN3 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXSN1
        case hash("SMAXSN-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXSN-1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXSN11
        case hash("SMAXSN1-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXSN1-1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXSN21
        case hash("SMAXSN2-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXSN2-1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXSN31
        case hash("SMAXSN3-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXSN3-1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SINSTI
        case hash("SINSTI"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SINSTI = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXIN
        case hash("SMAXIN"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXIN = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef SMAXIN1
        case hash("SMAXIN-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _SMAXIN-1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef CCASN
        case hash("CCASN"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _CCASN = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef CCASN1
        case hash("CCASN-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _CCASN-1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef CCAIN
        case hash("CCAIN"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _CCAIN = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef CCAIN1
        case hash("CCAIN-1"):{
            char _tmp[5];
            substring(_tmp, buffer_value, 5);
			uint32_t _CCAIN-1 = atol(_tmp);
            break;
        }
        #endif
    
        #ifdef UMOY1
        case hash("UMOY1"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _UMOY1 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef UMOY2
        case hash("UMOY2"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _UMOY2 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef UMOY3
        case hash("UMOY3"):{
            char _tmp[3];
            substring(_tmp, buffer_value, 3);
			uint16_t _UMOY3 = atoi(_tmp);
            break;
        }
        #endif
    
        #ifdef STGE
        case hash("STGE"):{
            char _STGE[8];
            substring(_STGE, buffer_value, 8);
            break;
        }
        #endif
    
        #ifdef DPM1
        case hash("DPM1"):{
            char _DPM1[2];
            substring(_DPM1, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef FPM1
        case hash("FPM1"):{
            char _FPM1[2];
            substring(_FPM1, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef DPM2
        case hash("DPM2"):{
            char _DPM2[2];
            substring(_DPM2, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef FPM2
        case hash("FPM2"):{
            char _FPM2[2];
            substring(_FPM2, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef DPM3
        case hash("DPM3"):{
            char _DPM3[2];
            substring(_DPM3, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef FPM3
        case hash("FPM3"):{
            char _FPM3[2];
            substring(_FPM3, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef MSG1
        case hash("MSG1"):{
            char _MSG1[32];
            substring(_MSG1, buffer_value, 32);
            break;
        }
        #endif
    
        #ifdef MSG2
        case hash("MSG2"):{
            char _MSG2[16];
            substring(_MSG2, buffer_value, 16);
            break;
        }
        #endif
    
        #ifdef PRM
        case hash("PRM"):{
            char _PRM[14];
            substring(_PRM, buffer_value, 14);
            break;
        }
        #endif
    
        #ifdef RELAIS
        case hash("RELAIS"):{
            char _RELAIS[3];
            substring(_RELAIS, buffer_value, 3);
            break;
        }
        #endif
    
        #ifdef NTARF
        case hash("NTARF"):{
            char _NTARF[2];
            substring(_NTARF, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef NJOURF
        case hash("NJOURF"):{
            char _NJOURF[2];
            substring(_NJOURF, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef NJOURF1
        case hash("NJOURF+1"):{
            char _NJOURF+1[2];
            substring(_NJOURF+1, buffer_value, 2);
            break;
        }
        #endif
    
        #ifdef PJOURF1
        case hash("PJOURF+1"):{
            char _PJOURF+1[98];
            substring(_PJOURF+1, buffer_value, 98);
            break;
        }
        #endif
    
        #ifdef PPOINTE
        case hash("PPOINTE"):{
            char _PPOINTE[98];
            substring(_PPOINTE, buffer_value, 98);
            break;
        }
        #endif
       }}