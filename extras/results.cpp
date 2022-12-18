constexpr unsigned int str2int(const char* str, int h = 0)
   {
   return !str[h] ? 5381 : (str2int(str, h+1) * 33) ^ str[h];
}

auto parse(const char* tag_name){
   switch (str2int(tag_name)){
    #ifdef  ADCO
    case str2int(" ADCO"):
        str LinkyTIC:: ADCO = parse(_buffer_value, 12, str)
        break;
    #endif
    
    #ifdef  OPTARIF
    case str2int(" OPTARIF"):
        str LinkyTIC:: OPTARIF = parse(_buffer_value, 4, str)
        break;
    #endif
    
    #ifdef  ISOUSC
    case str2int(" ISOUSC"):
        int8 LinkyTIC:: ISOUSC = parse(_buffer_value, 2, int8)
        break;
    #endif
    
    #ifdef  BASE
    case str2int(" BASE"):
        int32 LinkyTIC:: BASE = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  HCHC
    case str2int(" HCHC"):
        int32 LinkyTIC:: HCHC = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  HCHP
    case str2int(" HCHP"):
        int32 LinkyTIC:: HCHP = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EJPHN
    case str2int(" EJPHN"):
        int32 LinkyTIC:: EJPHN = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EJPHPM
    case str2int(" EJPHPM"):
        int32 LinkyTIC:: EJPHPM = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  BBRHCJB
    case str2int(" BBRHCJB"):
        int32 LinkyTIC:: BBRHCJB = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  BBRHPJB
    case str2int(" BBRHPJB"):
        int32 LinkyTIC:: BBRHPJB = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  BBRHCJW
    case str2int(" BBRHCJW"):
        int32 LinkyTIC:: BBRHCJW = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  BBRHPJW
    case str2int(" BBRHPJW"):
        int32 LinkyTIC:: BBRHPJW = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  BBRHCJR
    case str2int(" BBRHCJR"):
        int32 LinkyTIC:: BBRHCJR = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  BBRHPJR
    case str2int(" BBRHPJR"):
        int32 LinkyTIC:: BBRHPJR = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  PEJP
    case str2int(" PEJP"):
        int8 LinkyTIC:: PEJP = parse(_buffer_value, 2, int8)
        break;
    #endif
    
    #ifdef  PTEC
    case str2int(" PTEC"):
        str LinkyTIC:: PTEC = parse(_buffer_value, 4, str)
        break;
    #endif
    
    #ifdef  DEMAIN
    case str2int(" DEMAIN"):
        str LinkyTIC:: DEMAIN = parse(_buffer_value, 4, str)
        break;
    #endif
    
    #ifdef  IINST
    case str2int(" IINST"):
        int16 LinkyTIC:: IINST = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IINST1
    case str2int(" IINST1"):
        int16 LinkyTIC:: IINST1 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IINST2
    case str2int(" IINST2"):
        int16 LinkyTIC:: IINST2 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IINST3
    case str2int(" IINST3"):
        int16 LinkyTIC:: IINST3 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  ADPS
    case str2int(" ADPS"):
        int16 LinkyTIC:: ADPS = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IMAX
    case str2int(" IMAX"):
        int16 LinkyTIC:: IMAX = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IMAX1
    case str2int(" IMAX1"):
        int16 LinkyTIC:: IMAX1 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IMAX2
    case str2int(" IMAX2"):
        int16 LinkyTIC:: IMAX2 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IMAX3
    case str2int(" IMAX3"):
        int32 LinkyTIC:: IMAX3 = parse(_buffer_value, 3, int32)
        break;
    #endif
    
    #ifdef  PMAX
    case str2int(" PMAX"):
        int32 LinkyTIC:: PMAX = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  PAPP
    case str2int(" PAPP"):
        int32 LinkyTIC:: PAPP = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  HHPHC
    case str2int(" HHPHC"):
        str LinkyTIC:: HHPHC = parse(_buffer_value, 1, str)
        break;
    #endif
    
    #ifdef  MOTDETAT
    case str2int(" MOTDETAT"):
        str LinkyTIC:: MOTDETAT = parse(_buffer_value, 6, str)
        break;
    #endif
    
    #ifdef  PPOT
    case str2int(" PPOT"):
        str LinkyTIC:: PPOT = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  ADIR1
    case str2int(" ADIR1"):
        int16 LinkyTIC:: ADIR1 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  ADIR2
    case str2int(" ADIR2"):
        int16 LinkyTIC:: ADIR2 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  ADIR3
    case str2int(" ADIR3"):
        int16 LinkyTIC:: ADIR3 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  ADSC
    case str2int(" ADSC"):
        str LinkyTIC:: ADSC = parse(_buffer_value, 12, str)
        break;
    #endif
    
    #ifdef  VTIC
    case str2int(" VTIC"):
        str LinkyTIC:: VTIC = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  DATE
    case str2int(" DATE"):
        str LinkyTIC:: DATE = parse(_buffer_value, 0, str)
        break;
    #endif
    
    #ifdef  NGTF
    case str2int(" NGTF"):
        str LinkyTIC:: NGTF = parse(_buffer_value, 16, str)
        break;
    #endif
    
    #ifdef  LTARF
    case str2int(" LTARF"):
        str LinkyTIC:: LTARF = parse(_buffer_value, 16, str)
        break;
    #endif
    
    #ifdef  EAST
    case str2int(" EAST"):
        int32 LinkyTIC:: EAST = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF01
    case str2int(" EASF01"):
        int32 LinkyTIC:: EASF01 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF02
    case str2int(" EASF02"):
        int32 LinkyTIC:: EASF02 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF03
    case str2int(" EASF03"):
        int32 LinkyTIC:: EASF03 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF04
    case str2int(" EASF04"):
        int32 LinkyTIC:: EASF04 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF05
    case str2int(" EASF05"):
        int32 LinkyTIC:: EASF05 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF06
    case str2int(" EASF06"):
        int32 LinkyTIC:: EASF06 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF07
    case str2int(" EASF07"):
        int32 LinkyTIC:: EASF07 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF08
    case str2int(" EASF08"):
        int32 LinkyTIC:: EASF08 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF09
    case str2int(" EASF09"):
        int32 LinkyTIC:: EASF09 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASF10
    case str2int(" EASF10"):
        int32 LinkyTIC:: EASF10 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASD01
    case str2int(" EASD01"):
        int32 LinkyTIC:: EASD01 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASD02
    case str2int(" EASD02"):
        int32 LinkyTIC:: EASD02 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASD03
    case str2int(" EASD03"):
        int32 LinkyTIC:: EASD03 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EASD04
    case str2int(" EASD04"):
        int32 LinkyTIC:: EASD04 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  EAIT
    case str2int(" EAIT"):
        int32 LinkyTIC:: EAIT = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  ERQ1
    case str2int(" ERQ1"):
        int32 LinkyTIC:: ERQ1 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  ERQ2
    case str2int(" ERQ2"):
        int32 LinkyTIC:: ERQ2 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  ERQ3
    case str2int(" ERQ3"):
        int32 LinkyTIC:: ERQ3 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  ERQ4
    case str2int(" ERQ4"):
        int32 LinkyTIC:: ERQ4 = parse(_buffer_value, 9, int32)
        break;
    #endif
    
    #ifdef  IRMS1
    case str2int(" IRMS1"):
        int16 LinkyTIC:: IRMS1 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IRMS2
    case str2int(" IRMS2"):
        int16 LinkyTIC:: IRMS2 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  IRMS3
    case str2int(" IRMS3"):
        int16 LinkyTIC:: IRMS3 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  URMS1
    case str2int(" URMS1"):
        int16 LinkyTIC:: URMS1 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  URMS2
    case str2int(" URMS2"):
        int16 LinkyTIC:: URMS2 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  URMS3
    case str2int(" URMS3"):
        int16 LinkyTIC:: URMS3 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  PREF
    case str2int(" PREF"):
        int8 LinkyTIC:: PREF = parse(_buffer_value, 2, int8)
        break;
    #endif
    
    #ifdef  PCOUP
    case str2int(" PCOUP"):
        int8 LinkyTIC:: PCOUP = parse(_buffer_value, 2, int8)
        break;
    #endif
    
    #ifdef  SINSTS
    case str2int(" SINSTS"):
        int32 LinkyTIC:: SINSTS = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SINSTS1
    case str2int(" SINSTS1"):
        int32 LinkyTIC:: SINSTS1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SINSTS2
    case str2int(" SINSTS2"):
        int32 LinkyTIC:: SINSTS2 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SINSTS3
    case str2int(" SINSTS3"):
        int32 LinkyTIC:: SINSTS3 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXSN
    case str2int(" SMAXSN"):
        int32 LinkyTIC:: SMAXSN = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXSN1
    case str2int(" SMAXSN1"):
        int32 LinkyTIC:: SMAXSN1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXSN2
    case str2int(" SMAXSN2"):
        int32 LinkyTIC:: SMAXSN2 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXSN3
    case str2int(" SMAXSN3"):
        int32 LinkyTIC:: SMAXSN3 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXSN_1
    case str2int(" SMAXSN-1"):
        int32 LinkyTIC:: SMAXSN-1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXSN1_1
    case str2int(" SMAXSN1-1"):
        int32 LinkyTIC:: SMAXSN1-1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXSN2_1
    case str2int(" SMAXSN2-1"):
        int32 LinkyTIC:: SMAXSN2-1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXSN3_1
    case str2int(" SMAXSN3-1"):
        int32 LinkyTIC:: SMAXSN3-1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SINSTI
    case str2int(" SINSTI"):
        int32 LinkyTIC:: SINSTI = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXIN
    case str2int(" SMAXIN"):
        int32 LinkyTIC:: SMAXIN = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  SMAXIN_1
    case str2int(" SMAXIN-1"):
        int32 LinkyTIC:: SMAXIN-1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  CCASN  
    case str2int(" CCASN  "):
        int32 LinkyTIC:: CCASN   = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  CCASN_1
    case str2int(" CCASN-1"):
        int32 LinkyTIC:: CCASN-1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  CCAIN  
    case str2int(" CCAIN  "):
        int32 LinkyTIC:: CCAIN   = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  CCAIN_1
    case str2int(" CCAIN-1"):
        int32 LinkyTIC:: CCAIN-1 = parse(_buffer_value, 5, int32)
        break;
    #endif
    
    #ifdef  UMOY1
    case str2int(" UMOY1"):
        int16 LinkyTIC:: UMOY1 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  UMOY2
    case str2int(" UMOY2"):
        int16 LinkyTIC:: UMOY2 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  UMOY3
    case str2int(" UMOY3"):
        int16 LinkyTIC:: UMOY3 = parse(_buffer_value, 3, int16)
        break;
    #endif
    
    #ifdef  STGE
    case str2int(" STGE"):
        str LinkyTIC:: STGE = parse(_buffer_value, 8, str)
        break;
    #endif
    
    #ifdef  DPM1
    case str2int(" DPM1"):
        str LinkyTIC:: DPM1 = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  FPM1
    case str2int(" FPM1"):
        str LinkyTIC:: FPM1 = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  DPM2
    case str2int(" DPM2"):
        str LinkyTIC:: DPM2 = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  FPM2
    case str2int(" FPM2"):
        str LinkyTIC:: FPM2 = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  DPM3
    case str2int(" DPM3"):
        str LinkyTIC:: DPM3 = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  FPM3
    case str2int(" FPM3"):
        str LinkyTIC:: FPM3 = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  MSG1
    case str2int(" MSG1"):
        str LinkyTIC:: MSG1 = parse(_buffer_value, 32, str)
        break;
    #endif
    
    #ifdef  MSG2
    case str2int(" MSG2"):
        str LinkyTIC:: MSG2 = parse(_buffer_value, 16, str)
        break;
    #endif
    
    #ifdef  PRM
    case str2int(" PRM"):
        str LinkyTIC:: PRM = parse(_buffer_value, 14, str)
        break;
    #endif
    
    #ifdef  RELAIS
    case str2int(" RELAIS"):
        str LinkyTIC:: RELAIS = parse(_buffer_value, 3, str)
        break;
    #endif
    
    #ifdef  NTARF
    case str2int(" NTARF"):
        str LinkyTIC:: NTARF = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  NJOURF
    case str2int(" NJOURF"):
        str LinkyTIC:: NJOURF = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  NJOURF+1
    case str2int(" NJOURF+1"):
        str LinkyTIC:: NJOURF+1 = parse(_buffer_value, 2, str)
        break;
    #endif
    
    #ifdef  PJOURF+1
    case str2int(" PJOURF+1"):
        str LinkyTIC:: PJOURF+1 = parse(_buffer_value, 98, str)
        break;
    #endif
    
    #ifdef  PPOINTE
    case str2int(" PPOINTE"):
        str LinkyTIC:: PPOINTE = parse(_buffer_value, 98, str)
        break;
    #endif
       }}