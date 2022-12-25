#ifndef _LINKYTIC
#define _LINKYTIC

#include "Stream.h"

#define MaximumLength 0
#ifdef ADCO
	#if MaximumLength < 12
		#undef MaximumLength
		#define MaximumLength 12
	#endif
#endif
#ifdef OPTARIF
	#if MaximumLength < 4
		#undef MaximumLength
		#define MaximumLength 4
	#endif
#endif
#ifdef ISOUSC
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef BASE
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef HCHC
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef HCHP
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EJPHN
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EJPHPM
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef BBRHCJB
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef BBRHPJB
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef BBRHCJW
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef BBRHPJW
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef BBRHCJR
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef BBRHPJR
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef PEJP
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef PTEC
	#if MaximumLength < 4
		#undef MaximumLength
		#define MaximumLength 4
	#endif
#endif
#ifdef DEMAIN
	#if MaximumLength < 4
		#undef MaximumLength
		#define MaximumLength 4
	#endif
#endif
#ifdef IINST
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IINST1
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IINST2
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IINST3
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef ADPS
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IMAX
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IMAX1
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IMAX2
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IMAX3
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef PMAX
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
#endif
#ifdef PAPP
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
#endif
#ifdef HHPHC
	#if MaximumLength < 1
		#undef MaximumLength
		#define MaximumLength 1
	#endif
#endif
#ifdef MOTDETAT
	#if MaximumLength < 6
		#undef MaximumLength
		#define MaximumLength 6
	#endif
#endif
#ifdef PPOT
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef ADIR1
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef ADIR2
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef ADIR3
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef ADSC
	#if MaximumLength < 12
		#undef MaximumLength
		#define MaximumLength 12
	#endif
#endif
#ifdef VTIC
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef DATE
	#if MaximumLength < 0
		#undef MaximumLength
		#define MaximumLength 0
	#endif
	#define HAS_HORODATE
#endif
#ifdef NGTF
	#if MaximumLength < 16
		#undef MaximumLength
		#define MaximumLength 16
	#endif
#endif
#ifdef LTARF
	#if MaximumLength < 16
		#undef MaximumLength
		#define MaximumLength 16
	#endif
#endif
#ifdef EAST
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF01
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF02
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF03
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF04
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF05
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF06
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF07
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF08
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF09
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASF10
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASD01
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASD02
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASD03
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EASD04
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef EAIT
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef ERQ1
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef ERQ2
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef ERQ3
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef ERQ4
	#if MaximumLength < 9
		#undef MaximumLength
		#define MaximumLength 9
	#endif
#endif
#ifdef IRMS1
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IRMS2
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef IRMS3
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef URMS1
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef URMS2
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef URMS3
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef PREF
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef PCOUP
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef SINSTS
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
#endif
#ifdef SINSTS1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
#endif
#ifdef SINSTS2
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
#endif
#ifdef SINSTS3
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
#endif
#ifdef SMAXSN
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SMAXSN1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SMAXSN2
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SMAXSN3
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SMAXSN_1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SMAXSN1_1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SMAXSN2_1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SMAXSN3_1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SINSTI
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
#endif
#ifdef SMAXIN
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef SMAXIN_1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef CCASN
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef CCASN_1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef CCAIN
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef CCAIN_1
	#if MaximumLength < 5
		#undef MaximumLength
		#define MaximumLength 5
	#endif
	#define HAS_HORODATE
#endif
#ifdef UMOY1
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
	#define HAS_HORODATE
#endif
#ifdef UMOY2
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
	#define HAS_HORODATE
#endif
#ifdef UMOY3
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
	#define HAS_HORODATE
#endif
#ifdef STGE
	#if MaximumLength < 8
		#undef MaximumLength
		#define MaximumLength 8
	#endif
#endif
#ifdef DPM1
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
	#define HAS_HORODATE
#endif
#ifdef FPM1
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
	#define HAS_HORODATE
#endif
#ifdef DPM2
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
	#define HAS_HORODATE
#endif
#ifdef FPM2
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
	#define HAS_HORODATE
#endif
#ifdef DPM3
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
	#define HAS_HORODATE
#endif
#ifdef FPM3
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
	#define HAS_HORODATE
#endif
#ifdef MSG1
	#if MaximumLength < 32
		#undef MaximumLength
		#define MaximumLength 32
	#endif
#endif
#ifdef MSG2
	#if MaximumLength < 16
		#undef MaximumLength
		#define MaximumLength 16
	#endif
#endif
#ifdef PRM
	#if MaximumLength < 14
		#undef MaximumLength
		#define MaximumLength 14
	#endif
#endif
#ifdef RELAIS
	#if MaximumLength < 3
		#undef MaximumLength
		#define MaximumLength 3
	#endif
#endif
#ifdef NTARF
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef NJOURF
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef NJOURF1
	#if MaximumLength < 2
		#undef MaximumLength
		#define MaximumLength 2
	#endif
#endif
#ifdef PJOURF1
	#if MaximumLength < 98
		#undef MaximumLength
		#define MaximumLength 98
	#endif
#endif
#ifdef PPOINTE
	#if MaximumLength < 98
		#undef MaximumLength
		#define MaximumLength 98
	#endif
#endif

class LinkyTIC {
    public:
        bool read();                // non-blocking way of reading new value. Return true when a frame is complete
        void readUntil(uint32_t timeout);           // blocking reading function

		enum MODE {HISTORIQUE, STANDARD};

        LinkyTIC(Stream&, MODE);   /* Constructor */
    private:
		MODE _mode;

        enum STATUS {STATUS_WAITING, STATUS_OK, STATUS_FAILED};
        STATUS _status;

        char _checksum;                 // calculus of the group checksum

        char _buffer_tag[8];            // buffer for the tag name
        char _buffer_value[MaximumLength];         // buffer for the tag value
        char _buffer_checksum[1];       // buffer for the tag checksum
		char _buffer_date[9];          // buffer for the (optional) tag date. Must be the same length as value because we can't know in advance if it s going to be a date or a value

		#ifdef HAS_HORODATE
        	char* _buffers[4] = {_buffer_tag, _buffer_value, _buffer_checksum, _buffer_date};   // reference to each buffer
		#else
        	char* _buffers[3] = {_buffer_tag, _buffer_value, _buffer_checksum};   // reference to each buffer
		#endif

        uint8_t _buffer_reference_index;// define which pointer to use
        uint8_t _buffer_index;          // current buffer index
        bool _group_recep_in_progress;

        void readByte();                // read one new serial byte and happen it to the buffer
        void checksum(char received_checksum, char computed_checksum);    // verify that the two checksums match
        void parse(const char* tag_name, const char* buffer_value);       // set the value of the tag in the structure to the desired value
        void resetBuffers();

        Stream* _stream;                 // Serial stream

	#ifdef ADCO
		public: char* GetADCO(){return _ADCO;};
		private: char _ADCO[12];
	#endif
	#ifdef OPTARIF
		public: char* GetOPTARIF(){return _OPTARIF;};
		private: char _OPTARIF[4];
	#endif
	#ifdef ISOUSC
		public: uint8_t GetISOUSC(){return _ISOUSC;};
		private: uint8_t _ISOUSC;
	#endif
	#ifdef BASE
		public: uint32_t GetBASE(){return _BASE;};
		private: uint32_t _BASE;
	#endif
	#ifdef HCHC
		public: uint32_t GetHCHC(){return _HCHC;};
		private: uint32_t _HCHC;
	#endif
	#ifdef HCHP
		public: uint32_t GetHCHP(){return _HCHP;};
		private: uint32_t _HCHP;
	#endif
	#ifdef EJPHN
		public: uint32_t GetEJPHN(){return _EJPHN;};
		private: uint32_t _EJPHN;
	#endif
	#ifdef EJPHPM
		public: uint32_t GetEJPHPM(){return _EJPHPM;};
		private: uint32_t _EJPHPM;
	#endif
	#ifdef BBRHCJB
		public: uint32_t GetBBRHCJB(){return _BBRHCJB;};
		private: uint32_t _BBRHCJB;
	#endif
	#ifdef BBRHPJB
		public: uint32_t GetBBRHPJB(){return _BBRHPJB;};
		private: uint32_t _BBRHPJB;
	#endif
	#ifdef BBRHCJW
		public: uint32_t GetBBRHCJW(){return _BBRHCJW;};
		private: uint32_t _BBRHCJW;
	#endif
	#ifdef BBRHPJW
		public: uint32_t GetBBRHPJW(){return _BBRHPJW;};
		private: uint32_t _BBRHPJW;
	#endif
	#ifdef BBRHCJR
		public: uint32_t GetBBRHCJR(){return _BBRHCJR;};
		private: uint32_t _BBRHCJR;
	#endif
	#ifdef BBRHPJR
		public: uint32_t GetBBRHPJR(){return _BBRHPJR;};
		private: uint32_t _BBRHPJR;
	#endif
	#ifdef PEJP
		public: uint8_t GetPEJP(){return _PEJP;};
		private: uint8_t _PEJP;
	#endif
	#ifdef PTEC
		public: char* GetPTEC(){return _PTEC;};
		private: char _PTEC[4];
	#endif
	#ifdef DEMAIN
		public: char* GetDEMAIN(){return _DEMAIN;};
		private: char _DEMAIN[4];
	#endif
	#ifdef IINST
		public: uint16_t GetIINST(){return _IINST;};
		private: uint16_t _IINST;
	#endif
	#ifdef IINST1
		public: uint16_t GetIINST1(){return _IINST1;};
		private: uint16_t _IINST1;
	#endif
	#ifdef IINST2
		public: uint16_t GetIINST2(){return _IINST2;};
		private: uint16_t _IINST2;
	#endif
	#ifdef IINST3
		public: uint16_t GetIINST3(){return _IINST3;};
		private: uint16_t _IINST3;
	#endif
	#ifdef ADPS
		public: uint16_t GetADPS(){return _ADPS;};
		private: uint16_t _ADPS;
	#endif
	#ifdef IMAX
		public: uint16_t GetIMAX(){return _IMAX;};
		private: uint16_t _IMAX;
	#endif
	#ifdef IMAX1
		public: uint16_t GetIMAX1(){return _IMAX1;};
		private: uint16_t _IMAX1;
	#endif
	#ifdef IMAX2
		public: uint16_t GetIMAX2(){return _IMAX2;};
		private: uint16_t _IMAX2;
	#endif
	#ifdef IMAX3
		public: uint32_t GetIMAX3(){return _IMAX3;};
		private: uint32_t _IMAX3;
	#endif
	#ifdef PMAX
		public: uint32_t GetPMAX(){return _PMAX;};
		private: uint32_t _PMAX;
	#endif
	#ifdef PAPP
		public: uint32_t GetPAPP(){return _PAPP;};
		private: uint32_t _PAPP;
	#endif
	#ifdef HHPHC
		public: char* GetHHPHC(){return _HHPHC;};
		private: char _HHPHC[1];
	#endif
	#ifdef MOTDETAT
		public: char* GetMOTDETAT(){return _MOTDETAT;};
		private: char _MOTDETAT[6];
	#endif
	#ifdef PPOT
		public: char* GetPPOT(){return _PPOT;};
		private: char _PPOT[2];
	#endif
	#ifdef ADIR1
		public: uint16_t GetADIR1(){return _ADIR1;};
		private: uint16_t _ADIR1;
	#endif
	#ifdef ADIR2
		public: uint16_t GetADIR2(){return _ADIR2;};
		private: uint16_t _ADIR2;
	#endif
	#ifdef ADIR3
		public: uint16_t GetADIR3(){return _ADIR3;};
		private: uint16_t _ADIR3;
	#endif
	#ifdef ADSC
		public: char* GetADSC(){return _ADSC;};
		private: char _ADSC[12];
	#endif
	#ifdef VTIC
		public: char* GetVTIC(){return _VTIC;};
		private: char _VTIC[2];
	#endif
	#ifdef DATE
		public: char* GetDATE(){return _DATE;};
		private: char _DATE[0];
	#endif
	#ifdef NGTF
		public: char* GetNGTF(){return _NGTF;};
		private: char _NGTF[16];
	#endif
	#ifdef LTARF
		public: char* GetLTARF(){return _LTARF;};
		private: char _LTARF[16];
	#endif
	#ifdef EAST
		public: uint32_t GetEAST(){return _EAST;};
		private: uint32_t _EAST;
	#endif
	#ifdef EASF01
		public: uint32_t GetEASF01(){return _EASF01;};
		private: uint32_t _EASF01;
	#endif
	#ifdef EASF02
		public: uint32_t GetEASF02(){return _EASF02;};
		private: uint32_t _EASF02;
	#endif
	#ifdef EASF03
		public: uint32_t GetEASF03(){return _EASF03;};
		private: uint32_t _EASF03;
	#endif
	#ifdef EASF04
		public: uint32_t GetEASF04(){return _EASF04;};
		private: uint32_t _EASF04;
	#endif
	#ifdef EASF05
		public: uint32_t GetEASF05(){return _EASF05;};
		private: uint32_t _EASF05;
	#endif
	#ifdef EASF06
		public: uint32_t GetEASF06(){return _EASF06;};
		private: uint32_t _EASF06;
	#endif
	#ifdef EASF07
		public: uint32_t GetEASF07(){return _EASF07;};
		private: uint32_t _EASF07;
	#endif
	#ifdef EASF08
		public: uint32_t GetEASF08(){return _EASF08;};
		private: uint32_t _EASF08;
	#endif
	#ifdef EASF09
		public: uint32_t GetEASF09(){return _EASF09;};
		private: uint32_t _EASF09;
	#endif
	#ifdef EASF10
		public: uint32_t GetEASF10(){return _EASF10;};
		private: uint32_t _EASF10;
	#endif
	#ifdef EASD01
		public: uint32_t GetEASD01(){return _EASD01;};
		private: uint32_t _EASD01;
	#endif
	#ifdef EASD02
		public: uint32_t GetEASD02(){return _EASD02;};
		private: uint32_t _EASD02;
	#endif
	#ifdef EASD03
		public: uint32_t GetEASD03(){return _EASD03;};
		private: uint32_t _EASD03;
	#endif
	#ifdef EASD04
		public: uint32_t GetEASD04(){return _EASD04;};
		private: uint32_t _EASD04;
	#endif
	#ifdef EAIT
		public: uint32_t GetEAIT(){return _EAIT;};
		private: uint32_t _EAIT;
	#endif
	#ifdef ERQ1
		public: uint32_t GetERQ1(){return _ERQ1;};
		private: uint32_t _ERQ1;
	#endif
	#ifdef ERQ2
		public: uint32_t GetERQ2(){return _ERQ2;};
		private: uint32_t _ERQ2;
	#endif
	#ifdef ERQ3
		public: uint32_t GetERQ3(){return _ERQ3;};
		private: uint32_t _ERQ3;
	#endif
	#ifdef ERQ4
		public: uint32_t GetERQ4(){return _ERQ4;};
		private: uint32_t _ERQ4;
	#endif
	#ifdef IRMS1
		public: uint16_t GetIRMS1(){return _IRMS1;};
		private: uint16_t _IRMS1;
	#endif
	#ifdef IRMS2
		public: uint16_t GetIRMS2(){return _IRMS2;};
		private: uint16_t _IRMS2;
	#endif
	#ifdef IRMS3
		public: uint16_t GetIRMS3(){return _IRMS3;};
		private: uint16_t _IRMS3;
	#endif
	#ifdef URMS1
		public: uint16_t GetURMS1(){return _URMS1;};
		private: uint16_t _URMS1;
	#endif
	#ifdef URMS2
		public: uint16_t GetURMS2(){return _URMS2;};
		private: uint16_t _URMS2;
	#endif
	#ifdef URMS3
		public: uint16_t GetURMS3(){return _URMS3;};
		private: uint16_t _URMS3;
	#endif
	#ifdef PREF
		public: uint8_t GetPREF(){return _PREF;};
		private: uint8_t _PREF;
	#endif
	#ifdef PCOUP
		public: uint8_t GetPCOUP(){return _PCOUP;};
		private: uint8_t _PCOUP;
	#endif
	#ifdef SINSTS
		public: uint32_t GetSINSTS(){return _SINSTS;};
		private: uint32_t _SINSTS;
	#endif
	#ifdef SINSTS1
		public: uint32_t GetSINSTS1(){return _SINSTS1;};
		private: uint32_t _SINSTS1;
	#endif
	#ifdef SINSTS2
		public: uint32_t GetSINSTS2(){return _SINSTS2;};
		private: uint32_t _SINSTS2;
	#endif
	#ifdef SINSTS3
		public: uint32_t GetSINSTS3(){return _SINSTS3;};
		private: uint32_t _SINSTS3;
	#endif
	#ifdef SMAXSN
		public: uint32_t GetSMAXSN(){return _SMAXSN;};
		private: uint32_t _SMAXSN;
	#endif
	#ifdef SMAXSN1
		public: uint32_t GetSMAXSN1(){return _SMAXSN1;};
		private: uint32_t _SMAXSN1;
	#endif
	#ifdef SMAXSN2
		public: uint32_t GetSMAXSN2(){return _SMAXSN2;};
		private: uint32_t _SMAXSN2;
	#endif
	#ifdef SMAXSN3
		public: uint32_t GetSMAXSN3(){return _SMAXSN3;};
		private: uint32_t _SMAXSN3;
	#endif
	#ifdef SMAXSN_1
		public: uint32_t GetSMAXSN_1(){return _SMAXSN_1;};
		private: uint32_t _SMAXSN_1;
	#endif
	#ifdef SMAXSN1_1
		public: uint32_t GetSMAXSN1_1(){return _SMAXSN1_1;};
		private: uint32_t _SMAXSN1_1;
	#endif
	#ifdef SMAXSN2_1
		public: uint32_t GetSMAXSN2_1(){return _SMAXSN2_1;};
		private: uint32_t _SMAXSN2_1;
	#endif
	#ifdef SMAXSN3_1
		public: uint32_t GetSMAXSN3_1(){return _SMAXSN3_1;};
		private: uint32_t _SMAXSN3_1;
	#endif
	#ifdef SINSTI
		public: uint32_t GetSINSTI(){return _SINSTI;};
		private: uint32_t _SINSTI;
	#endif
	#ifdef SMAXIN
		public: uint32_t GetSMAXIN(){return _SMAXIN;};
		private: uint32_t _SMAXIN;
	#endif
	#ifdef SMAXIN_1
		public: uint32_t GetSMAXIN_1(){return _SMAXIN_1;};
		private: uint32_t _SMAXIN_1;
	#endif
	#ifdef CCASN
		public: uint32_t GetCCASN(){return _CCASN;};
		private: uint32_t _CCASN;
	#endif
	#ifdef CCASN_1
		public: uint32_t GetCCASN_1(){return _CCASN_1;};
		private: uint32_t _CCASN_1;
	#endif
	#ifdef CCAIN
		public: uint32_t GetCCAIN(){return _CCAIN;};
		private: uint32_t _CCAIN;
	#endif
	#ifdef CCAIN_1
		public: uint32_t GetCCAIN_1(){return _CCAIN_1;};
		private: uint32_t _CCAIN_1;
	#endif
	#ifdef UMOY1
		public: uint16_t GetUMOY1(){return _UMOY1;};
		private: uint16_t _UMOY1;
	#endif
	#ifdef UMOY2
		public: uint16_t GetUMOY2(){return _UMOY2;};
		private: uint16_t _UMOY2;
	#endif
	#ifdef UMOY3
		public: uint16_t GetUMOY3(){return _UMOY3;};
		private: uint16_t _UMOY3;
	#endif
	#ifdef STGE
		public: char* GetSTGE(){return _STGE;};
		private: char _STGE[8];
	#endif
	#ifdef DPM1
		public: char* GetDPM1(){return _DPM1;};
		private: char _DPM1[2];
	#endif
	#ifdef FPM1
		public: char* GetFPM1(){return _FPM1;};
		private: char _FPM1[2];
	#endif
	#ifdef DPM2
		public: char* GetDPM2(){return _DPM2;};
		private: char _DPM2[2];
	#endif
	#ifdef FPM2
		public: char* GetFPM2(){return _FPM2;};
		private: char _FPM2[2];
	#endif
	#ifdef DPM3
		public: char* GetDPM3(){return _DPM3;};
		private: char _DPM3[2];
	#endif
	#ifdef FPM3
		public: char* GetFPM3(){return _FPM3;};
		private: char _FPM3[2];
	#endif
	#ifdef MSG1
		public: char* GetMSG1(){return _MSG1;};
		private: char _MSG1[32];
	#endif
	#ifdef MSG2
		public: char* GetMSG2(){return _MSG2;};
		private: char _MSG2[16];
	#endif
	#ifdef PRM
		public: char* GetPRM(){return _PRM;};
		private: char _PRM[14];
	#endif
	#ifdef RELAIS
		public: char* GetRELAIS(){return _RELAIS;};
		private: char _RELAIS[3];
	#endif
	#ifdef NTARF
		public: char* GetNTARF(){return _NTARF;};
		private: char _NTARF[2];
	#endif
	#ifdef NJOURF
		public: char* GetNJOURF(){return _NJOURF;};
		private: char _NJOURF[2];
	#endif
	#ifdef NJOURF1
		public: char* GetNJOURF1(){return _NJOURF1;};
		private: char _NJOURF1[2];
	#endif
	#ifdef PJOURF1
		public: char* GetPJOURF1(){return _PJOURF1;};
		private: char _PJOURF1[98];
	#endif
	#ifdef PPOINTE
		public: char* GetPPOINTE(){return _PPOINTE;};
		private: char _PPOINTE[98];
	#endif
};

#endif
