/*********************** dSPACE target specific header file ********************
   Include file Noa_Nofusion_dsmpb_bd.h:

   Type definitions used for bus access points

   Wed Mar  9 12:18:59 2022

   (c) Copyright 2020, dSPACE GmbH. All rights reserved.

 *******************************************************************************/

#ifndef _DSMPB_Noa_Nofusion_BD_HEADER_
#define _DSMPB_Noa_Nofusion_BD_HEADER_
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

#ifndef DATA_PORT_ACCESS_POINT_API_VERSION
#error The data port access point API version is undefined.
#elif (DATA_PORT_ACCESS_POINT_API_VERSION > 2) || (DATA_PORT_ACCESS_POINT_API_VERSION < 1)
#error The defined data port access point API version is unsupported.
#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)
#include "Noa_Nofusion_types.h"

typedef struct {
  uint8_T BusElement_1;
  real_T BusElement_2;
  real_T BusElement_3;
  real_T BusElement_4;
  real_T BusElement_5;
  real_T BusElement_6;
  real_T BusElement_7;
  real_T BusElement_8;
  real_T BusElement_9;
  real_T BusElement_10;
  real_T BusElement_11;
  real_T BusElement_12;
  real_T BusElement_13;
  real_T BusElement_14;
  real_T BusElement_15;
  real_T BusElement_16;
  real_T BusElement_17;
  uint8_T BusElement_18;
  real_T BusElement_19;
  real_T BusElement_20;
  real_T BusElement_21;
  real_T BusElement_22;
  real_T BusElement_23;
  real_T BusElement_24;
  real_T BusElement_25;
  real_T BusElement_26;
  real_T BusElement_27;
  real_T BusElement_28;
  real_T BusElement_29;
  real_T BusElement_30;
  real_T BusElement_31;
  real_T BusElement_32;
  real_T BusElement_33;
  real_T BusElement_34;
  uint8_T BusElement_35;
  real_T BusElement_36;
  real_T BusElement_37;
  real_T BusElement_38;
  real_T BusElement_39;
  real_T BusElement_40;
  real_T BusElement_41;
  real_T BusElement_42;
  real_T BusElement_43;
  real_T BusElement_44;
  real_T BusElement_45;
  real_T BusElement_46;
  real_T BusElement_47;
  real_T BusElement_48;
  real_T BusElement_49;
  real_T BusElement_50;
  real_T BusElement_51;
  uint8_T BusElement_52;
  real_T BusElement_53;
  real_T BusElement_54;
  real_T BusElement_55;
  real_T BusElement_56;
  real_T BusElement_57;
  real_T BusElement_58;
  real_T BusElement_59;
  real_T BusElement_60;
  real_T BusElement_61;
  real_T BusElement_62;
  real_T BusElement_63;
  real_T BusElement_64;
  real_T BusElement_65;
  real_T BusElement_66;
  real_T BusElement_67;
  real_T BusElement_68;
  uint8_T BusElement_69;
  real_T BusElement_70;
  real_T BusElement_71;
  real_T BusElement_72;
  real_T BusElement_73;
  real_T BusElement_74;
  real_T BusElement_75;
  real_T BusElement_76;
  real_T BusElement_77;
  real_T BusElement_78;
  real_T BusElement_79;
  real_T BusElement_80;
  real_T BusElement_81;
  real_T BusElement_82;
  real_T BusElement_83;
  real_T BusElement_84;
  real_T BusElement_85;
  uint8_T BusElement_86;
  real_T BusElement_87;
  real_T BusElement_88;
  real_T BusElement_89;
  real_T BusElement_90;
  real_T BusElement_91;
  real_T BusElement_92;
  real_T BusElement_93;
  real_T BusElement_94;
  real_T BusElement_95;
  real_T BusElement_96;
  real_T BusElement_97;
  real_T BusElement_98;
  real_T BusElement_99;
  real_T BusElement_100;
  real_T BusElement_101;
  real_T BusElement_102;
} read_Noa_Nofusion_DataInport4_P1;

typedef struct {
  uint8_T BusElement_1;
  real_T BusElement_2;
  real_T BusElement_3;
  real_T BusElement_4;
  real_T BusElement_5;
  real_T BusElement_6;
  real_T BusElement_7;
  real_T BusElement_8;
  real_T BusElement_9;
  real_T BusElement_10;
  real_T BusElement_11;
  real_T BusElement_12;
  real_T BusElement_13;
  real_T BusElement_14;
  real_T BusElement_15;
  real_T BusElement_16;
  real_T BusElement_17;
  uint8_T BusElement_18;
  real_T BusElement_19;
  real_T BusElement_20;
  real_T BusElement_21;
  real_T BusElement_22;
  real_T BusElement_23;
  real_T BusElement_24;
  real_T BusElement_25;
  real_T BusElement_26;
  real_T BusElement_27;
  real_T BusElement_28;
  real_T BusElement_29;
  real_T BusElement_30;
  real_T BusElement_31;
  real_T BusElement_32;
  real_T BusElement_33;
  real_T BusElement_34;
  uint8_T BusElement_35;
  real_T BusElement_36;
  real_T BusElement_37;
  real_T BusElement_38;
  real_T BusElement_39;
  real_T BusElement_40;
  real_T BusElement_41;
  real_T BusElement_42;
  real_T BusElement_43;
  real_T BusElement_44;
  real_T BusElement_45;
  real_T BusElement_46;
  real_T BusElement_47;
  real_T BusElement_48;
  real_T BusElement_49;
  real_T BusElement_50;
  real_T BusElement_51;
  uint8_T BusElement_52;
  real_T BusElement_53;
  real_T BusElement_54;
  real_T BusElement_55;
  real_T BusElement_56;
  real_T BusElement_57;
  real_T BusElement_58;
  real_T BusElement_59;
  real_T BusElement_60;
  real_T BusElement_61;
  real_T BusElement_62;
  real_T BusElement_63;
  real_T BusElement_64;
  real_T BusElement_65;
  real_T BusElement_66;
  real_T BusElement_67;
  real_T BusElement_68;
  uint8_T BusElement_69;
  real_T BusElement_70;
  real_T BusElement_71;
  real_T BusElement_72;
  real_T BusElement_73;
  real_T BusElement_74;
  real_T BusElement_75;
  real_T BusElement_76;
  real_T BusElement_77;
  real_T BusElement_78;
  real_T BusElement_79;
  real_T BusElement_80;
  real_T BusElement_81;
  real_T BusElement_82;
  real_T BusElement_83;
  real_T BusElement_84;
  real_T BusElement_85;
  uint8_T BusElement_86;
  real_T BusElement_87;
  real_T BusElement_88;
  real_T BusElement_89;
  real_T BusElement_90;
  real_T BusElement_91;
  real_T BusElement_92;
  real_T BusElement_93;
  real_T BusElement_94;
  real_T BusElement_95;
  real_T BusElement_96;
  real_T BusElement_97;
  real_T BusElement_98;
  real_T BusElement_99;
  real_T BusElement_100;
  real_T BusElement_101;
  real_T BusElement_102;
} read_Noa_Nofusion_DataInport6_P1;

typedef struct {
  uint8_T BusElement_1;
  real_T BusElement_2;
  real_T BusElement_3;
  real_T BusElement_4;
  real_T BusElement_5;
  real_T BusElement_6;
  real_T BusElement_7;
  real_T BusElement_8;
  real_T BusElement_9;
  real_T BusElement_10;
  real_T BusElement_11;
  real_T BusElement_12;
  real_T BusElement_13;
  real_T BusElement_14;
  real_T BusElement_15;
  real_T BusElement_16;
  real_T BusElement_17;
  uint8_T BusElement_18;
  real_T BusElement_19;
  real_T BusElement_20;
  real_T BusElement_21;
  real_T BusElement_22;
  real_T BusElement_23;
  real_T BusElement_24;
  real_T BusElement_25;
  real_T BusElement_26;
  real_T BusElement_27;
  real_T BusElement_28;
  real_T BusElement_29;
  real_T BusElement_30;
  real_T BusElement_31;
  real_T BusElement_32;
  real_T BusElement_33;
  real_T BusElement_34;
  uint8_T BusElement_35;
  real_T BusElement_36;
  real_T BusElement_37;
  real_T BusElement_38;
  real_T BusElement_39;
  real_T BusElement_40;
  real_T BusElement_41;
  real_T BusElement_42;
  real_T BusElement_43;
  real_T BusElement_44;
  real_T BusElement_45;
  real_T BusElement_46;
  real_T BusElement_47;
  real_T BusElement_48;
  real_T BusElement_49;
  real_T BusElement_50;
  real_T BusElement_51;
  uint8_T BusElement_52;
  real_T BusElement_53;
  real_T BusElement_54;
  real_T BusElement_55;
  real_T BusElement_56;
  real_T BusElement_57;
  real_T BusElement_58;
  real_T BusElement_59;
  real_T BusElement_60;
  real_T BusElement_61;
  real_T BusElement_62;
  real_T BusElement_63;
  real_T BusElement_64;
  real_T BusElement_65;
  real_T BusElement_66;
  real_T BusElement_67;
  real_T BusElement_68;
  uint8_T BusElement_69;
  real_T BusElement_70;
  real_T BusElement_71;
  real_T BusElement_72;
  real_T BusElement_73;
  real_T BusElement_74;
  real_T BusElement_75;
  real_T BusElement_76;
  real_T BusElement_77;
  real_T BusElement_78;
  real_T BusElement_79;
  real_T BusElement_80;
  real_T BusElement_81;
  real_T BusElement_82;
  real_T BusElement_83;
  real_T BusElement_84;
  real_T BusElement_85;
  uint8_T BusElement_86;
  real_T BusElement_87;
  real_T BusElement_88;
  real_T BusElement_89;
  real_T BusElement_90;
  real_T BusElement_91;
  real_T BusElement_92;
  real_T BusElement_93;
  real_T BusElement_94;
  real_T BusElement_95;
  real_T BusElement_96;
  real_T BusElement_97;
  real_T BusElement_98;
  real_T BusElement_99;
  real_T BusElement_100;
  real_T BusElement_101;
  real_T BusElement_102;
} read_Noa_Nofusion_DataInport8_P1;

typedef struct {
  uint8_T BusElement_1;
  real_T BusElement_2;
  real_T BusElement_3;
  real_T BusElement_4;
  real_T BusElement_5;
  real_T BusElement_6;
  real_T BusElement_7;
  real_T BusElement_8;
  real_T BusElement_9;
  real_T BusElement_10;
  real_T BusElement_11;
  real_T BusElement_12;
  real_T BusElement_13;
  real_T BusElement_14;
  real_T BusElement_15;
  real_T BusElement_16;
  real_T BusElement_17;
  uint8_T BusElement_18;
  real_T BusElement_19;
  real_T BusElement_20;
  real_T BusElement_21;
  real_T BusElement_22;
  real_T BusElement_23;
  real_T BusElement_24;
  real_T BusElement_25;
  real_T BusElement_26;
  real_T BusElement_27;
  real_T BusElement_28;
  real_T BusElement_29;
  real_T BusElement_30;
  real_T BusElement_31;
  real_T BusElement_32;
  real_T BusElement_33;
  real_T BusElement_34;
  uint8_T BusElement_35;
  real_T BusElement_36;
  real_T BusElement_37;
  real_T BusElement_38;
  real_T BusElement_39;
  real_T BusElement_40;
  real_T BusElement_41;
  real_T BusElement_42;
  real_T BusElement_43;
  real_T BusElement_44;
  real_T BusElement_45;
  real_T BusElement_46;
  real_T BusElement_47;
  real_T BusElement_48;
  real_T BusElement_49;
  real_T BusElement_50;
  real_T BusElement_51;
  uint8_T BusElement_52;
  real_T BusElement_53;
  real_T BusElement_54;
  real_T BusElement_55;
  real_T BusElement_56;
  real_T BusElement_57;
  real_T BusElement_58;
  real_T BusElement_59;
  real_T BusElement_60;
  real_T BusElement_61;
  real_T BusElement_62;
  real_T BusElement_63;
  real_T BusElement_64;
  real_T BusElement_65;
  real_T BusElement_66;
  real_T BusElement_67;
  real_T BusElement_68;
  uint8_T BusElement_69;
  real_T BusElement_70;
  real_T BusElement_71;
  real_T BusElement_72;
  real_T BusElement_73;
  real_T BusElement_74;
  real_T BusElement_75;
  real_T BusElement_76;
  real_T BusElement_77;
  real_T BusElement_78;
  real_T BusElement_79;
  real_T BusElement_80;
  real_T BusElement_81;
  real_T BusElement_82;
  real_T BusElement_83;
  real_T BusElement_84;
  real_T BusElement_85;
  uint8_T BusElement_86;
  real_T BusElement_87;
  real_T BusElement_88;
  real_T BusElement_89;
  real_T BusElement_90;
  real_T BusElement_91;
  real_T BusElement_92;
  real_T BusElement_93;
  real_T BusElement_94;
  real_T BusElement_95;
  real_T BusElement_96;
  real_T BusElement_97;
  real_T BusElement_98;
  real_T BusElement_99;
  real_T BusElement_100;
  real_T BusElement_101;
  real_T BusElement_102;
} read_Noa_Nofusion_DataInport10_P1;

typedef struct {
  real32_T BusElement_1;
  real32_T BusElement_2;
  real32_T BusElement_3;
  real32_T BusElement_4;
  real32_T BusElement_5;
  real32_T BusElement_6;
  real32_T BusElement_7;
  real32_T BusElement_8;
  real32_T BusElement_9;
  real32_T BusElement_10;
  real32_T BusElement_11;
} write_Noa_Nofusion_DataOutport1_P1;

typedef struct {
  uint8_T BusElement_1;
  uint8_T BusElement_2;
  uint8_T BusElement_3;
} write_Noa_Nofusion_DataOutport2_P1;

typedef struct {
  uint8_T BusElement_1;
  uint8_T BusElement_2;
  real32_T BusElement_3;
  real32_T BusElement_4;
  real32_T BusElement_5;
  uint8_T BusElement_6;
  real32_T BusElement_7;
  uint8_T BusElement_8;
  real32_T BusElement_9;
  uint8_T BusElement_10;
  real32_T BusElement_11;
  uint8_T BusElement_12;
  real32_T BusElement_13;
  uint8_T BusElement_14;
  real32_T BusElement_15;
  uint8_T BusElement_16;
  real32_T BusElement_17;
  uint8_T BusElement_18;
  real32_T BusElement_19;
  uint8_T BusElement_20;
  real32_T BusElement_21;
  uint8_T BusElement_22;
  uint8_T BusElement_23;
  uint8_T BusElement_24;
  real32_T BusElement_25;
  real32_T BusElement_26;
  uint16_T BusElement_27;
  real32_T BusElement_28[10];
  uint16_T BusElement_29[10];
  uint8_T BusElement_30;
  uint8_T BusElement_31;
  uint32_T BusElement_32;
  uint16_T BusElement_33;
  uint8_T BusElement_34;
  uint8_T BusElement_35;
  uint8_T BusElement_36;
  uint16_T BusElement_37;
  uint8_T BusElement_38;
  uint8_T BusElement_39;
  uint8_T BusElement_40;
  uint8_T BusElement_41;
  uint8_T BusElement_42;
  real32_T BusElement_43;
  uint8_T BusElement_44;
  real32_T BusElement_45;
  uint8_T BusElement_46;
  uint8_T BusElement_47;
  uint8_T BusElement_48;
  uint8_T BusElement_49;
  uint8_T BusElement_50;
  uint8_T BusElement_51;
  real32_T BusElement_52;
  uint8_T BusElement_53;
  uint8_T BusElement_54;
  uint8_T BusElement_55;
  uint8_T BusElement_56;
  uint32_T BusElement_57;
  real32_T BusElement_58;
  uint32_T BusElement_59;
} read_Noa_Nofusion_DataInport12_P1;

typedef struct {
  uint8_T BusElement_1;
  real32_T BusElement_2;
  real32_T BusElement_3;
  real32_T BusElement_4;
  real32_T BusElement_5;
  real32_T BusElement_6;
  uint8_T BusElement_7;
  real32_T BusElement_8;
  real32_T BusElement_9;
  real32_T BusElement_10;
  uint8_T BusElement_11;
  uint8_T BusElement_12;
  uint8_T BusElement_13;
  uint8_T BusElement_14;
  real32_T BusElement_15;
  real32_T BusElement_16;
  real32_T BusElement_17;
  real32_T BusElement_18;
  real32_T BusElement_19;
  uint8_T BusElement_20;
  real32_T BusElement_21;
  real32_T BusElement_22;
  real32_T BusElement_23;
  uint8_T BusElement_24;
  uint8_T BusElement_25;
  uint8_T BusElement_26;
  uint8_T BusElement_27;
  real32_T BusElement_28;
  real32_T BusElement_29;
  real32_T BusElement_30;
  real32_T BusElement_31;
  real32_T BusElement_32;
  uint8_T BusElement_33;
  real32_T BusElement_34;
  real32_T BusElement_35;
  real32_T BusElement_36;
  uint8_T BusElement_37;
  uint8_T BusElement_38;
  uint8_T BusElement_39;
  uint8_T BusElement_40;
  real32_T BusElement_41;
  real32_T BusElement_42;
  real32_T BusElement_43;
  real32_T BusElement_44;
  real32_T BusElement_45;
  uint8_T BusElement_46;
  real32_T BusElement_47;
  real32_T BusElement_48;
  real32_T BusElement_49;
  uint8_T BusElement_50;
  uint8_T BusElement_51;
  uint8_T BusElement_52;
  uint8_T BusElement_53;
  real32_T BusElement_54;
  real32_T BusElement_55;
  real32_T BusElement_56;
  real32_T BusElement_57;
  real32_T BusElement_58;
  uint8_T BusElement_59;
  real32_T BusElement_60;
  real32_T BusElement_61;
  real32_T BusElement_62;
  uint8_T BusElement_63;
  uint8_T BusElement_64;
  uint8_T BusElement_65;
  uint8_T BusElement_66;
  real32_T BusElement_67;
  real32_T BusElement_68;
  real32_T BusElement_69;
  real32_T BusElement_70;
  real32_T BusElement_71;
  uint8_T BusElement_72;
  real32_T BusElement_73;
  real32_T BusElement_74;
  real32_T BusElement_75;
  uint8_T BusElement_76;
  uint8_T BusElement_77;
  uint8_T BusElement_78;
  uint8_T BusElement_79;
  real32_T BusElement_80;
  real32_T BusElement_81;
  real32_T BusElement_82;
  real32_T BusElement_83;
  real32_T BusElement_84;
  uint8_T BusElement_85;
  real32_T BusElement_86;
  real32_T BusElement_87;
  real32_T BusElement_88;
  uint8_T BusElement_89;
  uint8_T BusElement_90;
  uint8_T BusElement_91;
  uint8_T BusElement_92;
  real32_T BusElement_93;
  real32_T BusElement_94;
  real32_T BusElement_95;
  real32_T BusElement_96;
  real32_T BusElement_97;
  uint8_T BusElement_98;
  real32_T BusElement_99;
  real32_T BusElement_100;
  real32_T BusElement_101;
  uint8_T BusElement_102;
  uint8_T BusElement_103;
  uint8_T BusElement_104;
  uint8_T BusElement_105;
  real32_T BusElement_106;
  real32_T BusElement_107;
  real32_T BusElement_108;
  real32_T BusElement_109;
  real32_T BusElement_110;
  uint8_T BusElement_111;
  real32_T BusElement_112;
  real32_T BusElement_113;
  real32_T BusElement_114;
  uint8_T BusElement_115;
  uint8_T BusElement_116;
  uint8_T BusElement_117;
  uint8_T BusElement_118;
  real32_T BusElement_119;
  real32_T BusElement_120;
  real32_T BusElement_121;
  real32_T BusElement_122;
  real32_T BusElement_123;
  uint8_T BusElement_124;
  real32_T BusElement_125;
  real32_T BusElement_126;
  real32_T BusElement_127;
  uint8_T BusElement_128;
  uint8_T BusElement_129;
  uint8_T BusElement_130;
  uint8_T BusElement_131;
  real32_T BusElement_132;
  real32_T BusElement_133;
  real32_T BusElement_134;
  real32_T BusElement_135;
  real32_T BusElement_136;
  uint8_T BusElement_137;
  real32_T BusElement_138;
  real32_T BusElement_139;
  real32_T BusElement_140;
  uint8_T BusElement_141;
  uint8_T BusElement_142;
  uint8_T BusElement_143;
  uint8_T BusElement_144;
  real32_T BusElement_145;
  real32_T BusElement_146;
  real32_T BusElement_147;
  real32_T BusElement_148;
  real32_T BusElement_149;
  uint8_T BusElement_150;
  real32_T BusElement_151;
  real32_T BusElement_152;
  real32_T BusElement_153;
  uint8_T BusElement_154;
  uint8_T BusElement_155;
  uint8_T BusElement_156;
  uint8_T BusElement_157;
  real32_T BusElement_158;
  real32_T BusElement_159;
  real32_T BusElement_160;
  real32_T BusElement_161;
  real32_T BusElement_162;
  uint8_T BusElement_163;
  real32_T BusElement_164;
  real32_T BusElement_165;
  real32_T BusElement_166;
  uint8_T BusElement_167;
  uint8_T BusElement_168;
  uint8_T BusElement_169;
  uint8_T BusElement_170;
  real32_T BusElement_171;
  real32_T BusElement_172;
  real32_T BusElement_173;
  real32_T BusElement_174;
  real32_T BusElement_175;
  uint8_T BusElement_176;
  real32_T BusElement_177;
  real32_T BusElement_178;
  real32_T BusElement_179;
  uint8_T BusElement_180;
  uint8_T BusElement_181;
  uint8_T BusElement_182;
} read_Noa_Nofusion_DataInport13_P1;

typedef struct {
  uint8_T BusElement_1;
  uint8_T BusElement_2;
  uint8_T BusElement_3;
  real32_T BusElement_4;
  uint8_T BusElement_5;
  real32_T BusElement_6;
  uint8_T BusElement_7;
  real32_T BusElement_8;
  uint8_T BusElement_9;
  uint8_T BusElement_10;
  uint8_T BusElement_11;
  real32_T BusElement_12;
  uint8_T BusElement_13;
  real32_T BusElement_14;
  uint8_T BusElement_15;
  real32_T BusElement_16;
  uint8_T BusElement_17;
  uint8_T BusElement_18;
  uint8_T BusElement_19;
  real32_T BusElement_20;
  uint8_T BusElement_21;
  real32_T BusElement_22;
  uint8_T BusElement_23;
  real32_T BusElement_24;
  uint8_T BusElement_25;
  uint8_T BusElement_26;
  uint8_T BusElement_27;
  real32_T BusElement_28;
  uint8_T BusElement_29;
  real32_T BusElement_30;
  uint8_T BusElement_31;
  real32_T BusElement_32;
  uint8_T BusElement_33;
  real32_T BusElement_34;
  real32_T BusElement_35;
  uint8_T BusElement_36;
  uint8_T BusElement_37;
  uint8_T BusElement_38;
  real32_T BusElement_39;
  uint8_T BusElement_40;
  uint8_T BusElement_41;
  uint8_T BusElement_42[8];
} read_Noa_Nofusion_DataInport14_P1;

/* Definition of bus struct for block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj, Port:  1 */
EXTERN_C read_Noa_Nofusion_DataInport4_P1 Bus_read_Noa_Nofusion_DataInport4_P1;

/* Definition of bus struct for block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj, Port:  1 */
EXTERN_C read_Noa_Nofusion_DataInport6_P1 Bus_read_Noa_Nofusion_DataInport6_P1;

/* Definition of bus struct for block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj, Port:  1 */
EXTERN_C read_Noa_Nofusion_DataInport8_P1 Bus_read_Noa_Nofusion_DataInport8_P1;

/* Definition of bus struct for block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj, Port:  1 */
EXTERN_C read_Noa_Nofusion_DataInport10_P1 Bus_read_Noa_Nofusion_DataInport10_P1;

/* Definition of bus struct for block Noa_Nofusion/Common/Data Outport, Port:  1 */
EXTERN_C write_Noa_Nofusion_DataOutport1_P1
  Bus_write_Noa_Nofusion_DataOutport1_P1;

/* Definition of bus struct for block Noa_Nofusion/Common/Data Outport1, Port:  1 */
EXTERN_C write_Noa_Nofusion_DataOutport2_P1
  Bus_write_Noa_Nofusion_DataOutport2_P1;

/* Definition of bus struct for block Noa_Nofusion/RFM_Road, Port:  1 */
EXTERN_C read_Noa_Nofusion_DataInport12_P1 Bus_read_Noa_Nofusion_DataInport12_P1;

/* Definition of bus struct for block Noa_Nofusion/ifLaneBus_out_In, Port:  1 */
EXTERN_C read_Noa_Nofusion_DataInport13_P1 Bus_read_Noa_Nofusion_DataInport13_P1;

/* Definition of bus struct for block Noa_Nofusion/IfRFM_LANES_In, Port:  1 */
EXTERN_C read_Noa_Nofusion_DataInport14_P1 Bus_read_Noa_Nofusion_DataInport14_P1;

/* InitializeBusStructs() is called in init phase of model code */
EXTERN_C void InitializeBusStructs(void);

#define DATA_PORT_MUST_INITIALIZE_BUSSTRUCTS
#endif
#endif