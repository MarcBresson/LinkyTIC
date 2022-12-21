#ifndef _LINKYTIC
#define _LINKYTIC

#define max(a,b)             \
({                           \
    __typeof__ (a) _a = (a); \
    __typeof__ (b) _b = (b); \
    _a > _b ? _a : _b;       \
})

#include "Stream.h"

class LinkyTIC {
    public:
        LinkyTIC(Stream&);   /* Constructor */

        void tramesDispo();         // Display every tag names delivered by your electric counter

        bool read();                // non-blocking way of reading new value. Return true when a frame is complete
        void readUntil(uint32_t timeout);           // blocking reading function

        #ifdef ADCO
            char* GetADCO(){return _ADCO;};
        #endif    
        #ifdef OPTARIF
            char* GetOPTARIF(){return _OPTARIF;};
        #endif
        #ifdef ISOUSC
            uint8_t GetISOUSC(){return _ISOUSC;};
        #endif
        #ifdef BASE
            uint32_t GetBASE(){return _BASE;};
        #endif
        #ifdef HCHC
            uint32_t GetHCHC(){return _HCHC;};
        #endif
        #ifdef HCHP
            uint32_t GetHCHP(){return _HCHP;};
        #endif
        #ifdef EJPHN
            uint32_t GetEJPHN(){return _EJPHN;};
        #endif
        #ifdef EJPHPM
            uint32_t GetEJPHPM(){return _EJPHPM;};
        #endif
        #ifdef BBRHCJB
            uint32_t GetBBRHCJB(){return _BBRHCJB;};
        #endif
        #ifdef BBRHPJB
            uint32_t GetBBRHPJB(){return _BBRHPJB;};
        #endif
        #ifdef BBRHCJW
            uint32_t GetBBRHCJW(){return _BBRHCJW;};
        #endif
        #ifdef BBRHPJW
            uint32_t GetBBRHPJW(){return _BBRHPJW;};
        #endif
        #ifdef BBRHCJR
            uint32_t GetBBRHCJR(){return _BBRHCJR;};
        #endif
        #ifdef BBRHPJR
            uint32_t GetBBRHPJR(){return _BBRHPJR;};
        #endif
        #ifdef PEJP
            uint8_t GetPEJP(){return _PEJP;};
        #endif
        #ifdef PTEC
            char* GetPTEC(){return _PTEC;};
        #endif
        #ifdef DEMAIN
            char* GetDEMAIN(){return _DEMAIN;};
        #endif
        #ifdef IINST
            uint16_t GetIINST(){return _IINST;};
        #endif
        #ifdef IINST1
            uint16_t GetIINST1(){return _IINST1;};
        #endif
        #ifdef IINST2
            uint16_t GetIINST2(){return _IINST2;};
        #endif
        #ifdef IINST3
            uint16_t GetIINST3(){return _IINST3;};
        #endif
        #ifdef ADPS
            uint16_t GetADPS(){return _ADPS;};
        #endif
        #ifdef IMAX
            uint16_t GetIMAX(){return _IMAX;};
        #endif
        #ifdef IMAX1
            uint16_t GetIMAX1(){return _IMAX1;};
        #endif
        #ifdef IMAX2
            uint16_t GetIMAX2(){return _IMAX2;};
        #endif
        #ifdef IMAX3
            uint32_t GetIMAX3(){return _IMAX3;};
        #endif
        #ifdef PMAX
            uint32_t GetPMAX(){return _PMAX;};
        #endif
        #ifdef PAPP
            uint32_t GetPAPP(){return _PAPP;};
        #endif
        #ifdef HHPHC
            char* GetHHPHC(){return _HHPHC;};
        #endif
        #ifdef MOTDETAT
            char* GetMOTDETAT(){return _MOTDETAT;};
        #endif
        #ifdef PPOT
            char* GetPPOT(){return _PPOT;};
        #endif
        #ifdef ADIR1
            uint16_t GetADIR1(){return _ADIR1;};
        #endif
        #ifdef ADIR2
            uint16_t GetADIR2(){return _ADIR2;};
        #endif
        #ifdef ADIR3
            uint16_t GetADIR3(){return _ADIR3;};
        #endif
        #ifdef ADSC
            char* GetADSC(){return _ADSC;};
        #endif
        #ifdef VTIC
            char* GetVTIC(){return _VTIC;};
        #endif
        #ifdef DATE
            char* GetDATE(){return _DATE;};
        #endif
        #ifdef NGTF
            char* GetNGTF(){return _NGTF;};
        #endif
        #ifdef LTARF
            char* GetLTARF(){return _LTARF;};
        #endif
        #ifdef EAST
            uint32_t GetEAST(){return _EAST;};
        #endif
        #ifdef EASF01
            uint32_t GetEASF01(){return _EASF01;};
        #endif
        #ifdef EASF02
            uint32_t GetEASF02(){return _EASF02;};
        #endif
        #ifdef EASF03
            uint32_t GetEASF03(){return _EASF03;};
        #endif
        #ifdef EASF04
            uint32_t GetEASF04(){return _EASF04;};
        #endif
        #ifdef EASF05
            uint32_t GetEASF05(){return _EASF05;};
        #endif
        #ifdef EASF06
            uint32_t GetEASF06(){return _EASF06;};
        #endif
        #ifdef EASF07
            uint32_t GetEASF07(){return _EASF07;};
        #endif
        #ifdef EASF08
            uint32_t GetEASF08(){return _EASF08;};
        #endif
        #ifdef EASF09
            uint32_t GetEASF09(){return _EASF09;};
        #endif
        #ifdef EASF10
            uint32_t GetEASF10(){return _EASF10;};
        #endif
        #ifdef EASD01
            uint32_t GetEASD01(){return _EASD01;};
        #endif
        #ifdef EASD02
            uint32_t GetEASD02(){return _EASD02;};
        #endif
        #ifdef EASD03
            uint32_t GetEASD03(){return _EASD03;};
        #endif
        #ifdef EASD04
            uint32_t GetEASD04(){return _EASD04;};
        #endif
        #ifdef EAIT
            uint32_t GetEAIT(){return _EAIT;};
        #endif
        #ifdef ERQ1
            uint32_t GetERQ1(){return _ERQ1;};
        #endif
        #ifdef ERQ2
            uint32_t GetERQ2(){return _ERQ2;};
        #endif
        #ifdef ERQ3
            uint32_t GetERQ3(){return _ERQ3;};
        #endif
        #ifdef ERQ4
            uint32_t GetERQ4(){return _ERQ4;};
        #endif
        #ifdef IRMS1
            uint16_t GetIRMS1(){return _IRMS1;};
        #endif
        #ifdef IRMS2
            uint16_t GetIRMS2(){return _IRMS2;};
        #endif
        #ifdef IRMS3
            uint16_t GetIRMS3(){return _IRMS3;};
        #endif
        #ifdef URMS1
            uint16_t GetURMS1(){return _URMS1;};
        #endif
        #ifdef URMS2
            uint16_t GetURMS2(){return _URMS2;};
        #endif
        #ifdef URMS3
            uint16_t GetURMS3(){return _URMS3;};
        #endif
        #ifdef PREF
            uint8_t GetPREF(){return _PREF;};
        #endif
        #ifdef PCOUP
            uint8_t GetPCOUP(){return _PCOUP;};
        #endif
        #ifdef SINSTS
            uint32_t GetSINSTS(){return _SINSTS;};
        #endif
        #ifdef SINSTS1
            uint32_t GetSINSTS1(){return _SINSTS1;};
        #endif
        #ifdef SINSTS2
            uint32_t GetSINSTS2(){return _SINSTS2;};
        #endif
        #ifdef SINSTS3
            uint32_t GetSINSTS3(){return _SINSTS3;};
        #endif
        #ifdef SMAXSN
            uint32_t GetSMAXSN(){return _SMAXSN;};
        #endif
        #ifdef SMAXSN1
            uint32_t GetSMAXSN1(){return _SMAXSN1;};
        #endif
        #ifdef SMAXSN2
            uint32_t GetSMAXSN2(){return _SMAXSN2;};
        #endif
        #ifdef SMAXSN3
            uint32_t GetSMAXSN3(){return _SMAXSN3;};
        #endif
        #ifdef SMAXSN_1
            uint32_t GetSMAXSN_1(){return _SMAXSN_1;};
        #endif
        #ifdef SMAXSN1_1
            uint32_t GetSMAXSN1_1(){return _SMAXSN1_1;};
        #endif
        #ifdef SMAXSN2_1
            uint32_t GetSMAXSN2_1(){return _SMAXSN2_1;};
        #endif
        #ifdef SMAXSN3_1
            uint32_t GetSMAXSN3_1(){return _SMAXSN3_1;};
        #endif
        #ifdef SINSTI
            uint32_t GetSINSTI(){return _SINSTI;};
        #endif
        #ifdef SMAXIN
            uint32_t GetSMAXIN(){return _SMAXIN;};
        #endif
        #ifdef SMAXIN_1
            uint32_t GetSMAXIN_1(){return _SMAXIN_1;};
        #endif
        #ifdef CCASN
            uint32_t GetCCASN(){return _CCASN;};
        #endif
        #ifdef CCASN_1
            uint32_t GetCCASN_1(){return _CCASN_1;};
        #endif
        #ifdef CCAIN
            uint32_t GetCCAIN(){return _CCAIN;};
        #endif
        #ifdef CCAIN_1
            uint32_t GetCCAIN_1(){return _CCAIN_1;};
        #endif
        #ifdef UMOY1
            uint16_t GetUMOY1(){return _UMOY1;};
        #endif
        #ifdef UMOY2
            uint16_t GetUMOY2(){return _UMOY2;};
        #endif
        #ifdef UMOY3
            uint16_t GetUMOY3(){return _UMOY3;};
        #endif
        #ifdef STGE
            char* GetSTGE(){return _STGE;};
        #endif
        #ifdef DPM1
            char* GetDPM1(){return _DPM1;};
        #endif
        #ifdef FPM1
            char* GetFPM1(){return _FPM1;};
        #endif
        #ifdef DPM2
            char* GetDPM2(){return _DPM2;};
        #endif
        #ifdef FPM2
            char* GetFPM2(){return _FPM2;};
        #endif
        #ifdef DPM3
            char* GetDPM3(){return _DPM3;};
        #endif
        #ifdef FPM3
            char* GetFPM3(){return _FPM3;};
        #endif
        #ifdef MSG1
            char* GetMSG1(){return _MSG1;};
        #endif
        #ifdef MSG2
            char* GetMSG2(){return _MSG2;};
        #endif
        #ifdef PRM
            char* GetPRM(){return _PRM;};
        #endif
        #ifdef RELAIS
            char* GetRELAIS(){return _RELAIS;};
        #endif
        #ifdef NTARF
            char* GetNTARF(){return _NTARF;};
        #endif
        #ifdef NJOURF
            char* GetNJOURF(){return _NJOURF;};
        #endif
        #ifdef NJOURF1
            char* GetNJOURF1(){return _NJOURF1;};
        #endif
        #ifdef PJOURF1
            char* GetPJOURF1(){return _PJOURF1;};
        #endif
        #ifdef PPOINTE
            char* GetPPOINTE(){return _PPOINTE;};
        #endif
    private:
        uint8_t _max_length = 0;
        #ifdef ADCO
            char _ADCO[12];
			_max_lenght = max(_max_lenght, 12);
        #endif
        #ifdef OPTARIF
            char _OPTARIF[4];
			_max_lenght = max(_max_lenght, 4);
        #endif
        #ifdef ISOUSC
            uint8_t _ISOUSC;
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef BASE
            uint32_t _BASE;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef HCHC
            uint32_t _HCHC;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef HCHP
            uint32_t _HCHP;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EJPHN
            uint32_t _EJPHN;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EJPHPM
            uint32_t _EJPHPM;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef BBRHCJB
            uint32_t _BBRHCJB;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef BBRHPJB
            uint32_t _BBRHPJB;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef BBRHCJW
            uint32_t _BBRHCJW;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef BBRHPJW
            uint32_t _BBRHPJW;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef BBRHCJR
            uint32_t _BBRHCJR;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef BBRHPJR
            uint32_t _BBRHPJR;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef PEJP
            uint8_t _PEJP;
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef PTEC
            char _PTEC[4];
			_max_lenght = max(_max_lenght, 4);
        #endif
        #ifdef DEMAIN
            char _DEMAIN[4];
			_max_lenght = max(_max_lenght, 4);
        #endif
        #ifdef IINST
            uint16_t _IINST;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IINST1
            uint16_t _IINST1;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IINST2
            uint16_t _IINST2;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IINST3
            uint16_t _IINST3;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef ADPS
            uint16_t _ADPS;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IMAX
            uint16_t _IMAX;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IMAX1
            uint16_t _IMAX1;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IMAX2
            uint16_t _IMAX2;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IMAX3
            uint32_t _IMAX3;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef PMAX
            uint32_t _PMAX;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef PAPP
            uint32_t _PAPP;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef HHPHC
            char _HHPHC[1];
			_max_lenght = max(_max_lenght, 1);
        #endif
        #ifdef MOTDETAT
            char _MOTDETAT[6];
			_max_lenght = max(_max_lenght, 6);
        #endif
        #ifdef PPOT
            char _PPOT[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef ADIR1
            uint16_t _ADIR1;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef ADIR2
            uint16_t _ADIR2;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef ADIR3
            uint16_t _ADIR3;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef ADSC
            char _ADSC[12];
			_max_lenght = max(_max_lenght, 12);
        #endif
        #ifdef VTIC
            char _VTIC[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef DATE
            char _DATE[0];
			_max_lenght = max(_max_lenght, 0);
        #endif
        #ifdef NGTF
            char _NGTF[16];
			_max_lenght = max(_max_lenght, 16);
        #endif
        #ifdef LTARF
            char _LTARF[16];
			_max_lenght = max(_max_lenght, 16);
        #endif
        #ifdef EAST
            uint32_t _EAST;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF01
            uint32_t _EASF01;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF02
            uint32_t _EASF02;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF03
            uint32_t _EASF03;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF04
            uint32_t _EASF04;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF05
            uint32_t _EASF05;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF06
            uint32_t _EASF06;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF07
            uint32_t _EASF07;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF08
            uint32_t _EASF08;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF09
            uint32_t _EASF09;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASF10
            uint32_t _EASF10;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASD01
            uint32_t _EASD01;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASD02
            uint32_t _EASD02;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASD03
            uint32_t _EASD03;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EASD04
            uint32_t _EASD04;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef EAIT
            uint32_t _EAIT;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef ERQ1
            uint32_t _ERQ1;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef ERQ2
            uint32_t _ERQ2;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef ERQ3
            uint32_t _ERQ3;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef ERQ4
            uint32_t _ERQ4;
			_max_lenght = max(_max_lenght, 9);
        #endif
        #ifdef IRMS1
            uint16_t _IRMS1;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IRMS2
            uint16_t _IRMS2;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef IRMS3
            uint16_t _IRMS3;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef URMS1
            uint16_t _URMS1;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef URMS2
            uint16_t _URMS2;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef URMS3
            uint16_t _URMS3;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef PREF
            uint8_t _PREF;
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef PCOUP
            uint8_t _PCOUP;
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef SINSTS
            uint32_t _SINSTS;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SINSTS1
            uint32_t _SINSTS1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SINSTS2
            uint32_t _SINSTS2;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SINSTS3
            uint32_t _SINSTS3;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXSN
            uint32_t _SMAXSN;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXSN1
            uint32_t _SMAXSN1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXSN2
            uint32_t _SMAXSN2;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXSN3
            uint32_t _SMAXSN3;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXSN_1
            uint32_t _SMAXSN_1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXSN1_1
            uint32_t _SMAXSN1_1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXSN2_1
            uint32_t _SMAXSN2_1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXSN3_1
            uint32_t _SMAXSN3_1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SINSTI
            uint32_t _SINSTI;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXIN
            uint32_t _SMAXIN;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef SMAXIN_1
            uint32_t _SMAXIN_1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef CCASN
            uint32_t _CCASN;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef CCASN_1
            uint32_t _CCASN_1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef CCAIN
            uint32_t _CCAIN;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef CCAIN_1
            uint32_t _CCAIN_1;
			_max_lenght = max(_max_lenght, 5);
        #endif
        #ifdef UMOY1
            uint16_t _UMOY1;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef UMOY2
            uint16_t _UMOY2;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef UMOY3
            uint16_t _UMOY3;
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef STGE
            char _STGE[8];
			_max_lenght = max(_max_lenght, 8);
        #endif
        #ifdef DPM1
            char _DPM1[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef FPM1
            char _FPM1[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef DPM2
            char _DPM2[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef FPM2
            char _FPM2[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef DPM3
            char _DPM3[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef FPM3
            char _FPM3[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef MSG1
            char _MSG1[32];
			_max_lenght = max(_max_lenght, 32);
        #endif
        #ifdef MSG2
            char _MSG2[16];
			_max_lenght = max(_max_lenght, 16);
        #endif
        #ifdef PRM
            char _PRM[14];
			_max_lenght = max(_max_lenght, 14);
        #endif
        #ifdef RELAIS
            char _RELAIS[3];
			_max_lenght = max(_max_lenght, 3);
        #endif
        #ifdef NTARF
            char _NTARF[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef NJOURF
            char _NJOURF[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef NJOURF1
            char _NJOURF1[2];
			_max_lenght = max(_max_lenght, 2);
        #endif
        #ifdef PJOURF1
            char _PJOURF1[98];
			_max_lenght = max(_max_lenght, 98);
        #endif
        #ifdef PPOINTE
            char _PPOINTE[98];
			_max_lenght = max(_max_lenght, 98);
        #endif

        
        enum STATUS {STATUS_WAITING, STATUS_OK, STATUS_FAILED};
        STATUS _status;

        char _buffer_tag[8];            // buffer for the tag name
        char _buffer_date[_max_length];          // buffer for the (optional) tag date. Must be the same length as value because we can't know in advance if it s going to be a date or a value
        char _buffer_value[_max_length];         // buffer for the tag value
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
