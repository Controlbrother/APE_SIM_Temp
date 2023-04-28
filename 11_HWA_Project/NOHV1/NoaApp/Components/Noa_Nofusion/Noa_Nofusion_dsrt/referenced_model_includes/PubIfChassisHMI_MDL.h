/*
 * Code generation for system model 'PubIfChassisHMI_MDL'
 * For more details, see corresponding source file PubIfChassisHMI_MDL.c
 *
 */

#ifndef RTW_HEADER_PubIfChassisHMI_MDL_h_
#define RTW_HEADER_PubIfChassisHMI_MDL_h_
#include <math.h>
#include <string.h>
#ifndef PubIfChassisHMI_MDL_COMMON_INCLUDES_
#define PubIfChassisHMI_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                /* PubIfChassisHMI_MDL_COMMON_INCLUDES_ */

#include "PubIfChassisHMI_MDL_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for system '<S7>/MATLAB Function4' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T Angle;                      /* '<S7>/MATLAB Function4' */
} B_MATLABFunction4_PubIfChassisHMI_MDL_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S46>/If Action Subsystem' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint16_T Add;                        /* '<S47>/Add' */
} B_IfActionSubsystem_PubIfChassisHMI_MDL_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S8>/MATLAB Function1' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T Type;                        /* '<S8>/MATLAB Function1' */
} B_MATLABFunction1_PubIfChassisHMI_MDL_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S8>/MATLAB Function7' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T Intervention;                /* '<S8>/MATLAB Function7' */
  uint8_T State;                       /* '<S8>/MATLAB Function7' */
} B_MATLABFunction7_PubIfChassisHMI_MDL_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S97>/MATLAB Function1' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T out;                         /* '<S97>/MATLAB Function1' */
  uint8_T recorder;                    /* '<S97>/MATLAB Function1' */
} B_MATLABFunction1_PubIfChassisHMI_MDL_a_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S98>/MATLAB Function1' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T out;                        /* '<S98>/MATLAB Function1' */
  real32_T recorder;                   /* '<S98>/MATLAB Function1' */
} B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for system '<S123>/MATLAB Function1' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  uint8_T out;                         /* '<S123>/MATLAB Function1' */
  uint8_T recorder;                    /* '<S123>/MATLAB Function1' */
} B_MATLABFunction1_PubIfChassisHMI_MDL_e_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'PubIfChassisHMI_MDL' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T UnitDelay1;                   /* '<S8>/Unit Delay1' */
  real_T UnitDelay2;                   /* '<S8>/Unit Delay2' */
  real_T UnitDelay;                    /* '<S8>/Unit Delay' */
  real_T DataTypeConversion;           /* '<S96>/Data Type Conversion' */
  real_T DataTypeConversion5;          /* '<S96>/Data Type Conversion5' */
  real_T DataTypeConversion6;          /* '<S96>/Data Type Conversion6' */
  real_T DataTypeConversion7;          /* '<S96>/Data Type Conversion7' */
  real_T DataTypeConversion_c;         /* '<S95>/Data Type Conversion' */
  real_T DataTypeConversion5_b;        /* '<S95>/Data Type Conversion5' */
  real_T DataTypeConversion6_c;        /* '<S95>/Data Type Conversion6' */
  real_T DataTypeConversion7_d;        /* '<S95>/Data Type Conversion7' */
  real_T Switch4;                      /* '<S7>/Switch4' */
  real_T LaneAvailability;             /* '<S96>/MATLAB Function2' */
  real_T Lcount;                       /* '<S8>/MATLAB Function3' */
  real_T Rcount;                       /* '<S8>/MATLAB Function3' */
  real_T count;                        /* '<S8>/MATLAB Function11' */
  real_T y;                            /* '<S8>/MATLAB Function10' */
  real32_T Product;                    /* '<S51>/Product' */
  real32_T Gain4;                      /* '<S7>/Gain4' */
  real32_T Product_d;                  /* '<S56>/Product' */
  real32_T Gain5;                      /* '<S7>/Gain5' */
  real32_T Product_i;                  /* '<S61>/Product' */
  real32_T Gain6;                      /* '<S7>/Gain6' */
  real32_T UnitDelay7;                 /* '<S7>/Unit Delay7' */
  real32_T Product_m;                  /* '<S46>/Product' */
  real32_T Gain9;                      /* '<S7>/Gain9' */
  real32_T Gain;                       /* '<S7>/Gain' */
  real32_T Gain1;                      /* '<S7>/Gain1' */
  real32_T Gain2;                      /* '<S7>/Gain2' */
  real32_T Gain3;                      /* '<S7>/Gain3' */
  real32_T Product_f;                  /* '<S66>/Product' */
  real32_T Product_o;                  /* '<S71>/Product' */
  real32_T dC0V;                       /* '<S1>/Bus Selector11' */
  real32_T dC0V_j;                     /* '<S1>/Bus Selector15' */
  real32_T Add1;                       /* '<S96>/Add1' */
  real32_T Add4;                       /* '<S96>/Add4' */
  real32_T A0;                         /* '<S96>/Merge' */
  real32_T A1;                         /* '<S96>/Merge' */
  real32_T A2;                         /* '<S96>/Merge' */
  real32_T A3;                         /* '<S96>/Merge' */
  real32_T dC0V_jv;                    /* '<S1>/Bus Selector12' */
  real32_T dC0V_jvm;                   /* '<S1>/Bus Selector16' */
  real32_T Add5;                       /* '<S96>/Add5' */
  real32_T Add6;                       /* '<S96>/Add6' */
  real32_T A0_k;                       /* '<S96>/Merge1' */
  real32_T A1_m;                       /* '<S96>/Merge1' */
  real32_T A2_h;                       /* '<S96>/Merge1' */
  real32_T A3_m;                       /* '<S96>/Merge1' */
  real32_T dC0V_jvmz;                  /* '<S1>/Bus Selector13' */
  real32_T Add1_o;                     /* '<S95>/Add1' */
  real32_T Add4_e;                     /* '<S95>/Add4' */
  real32_T dC0V_jvmz0;                 /* '<S1>/Bus Selector14' */
  real32_T Add5_d;                     /* '<S95>/Add5' */
  real32_T Add6_f;                     /* '<S95>/Add6' */
  real32_T Gain25;                     /* '<S8>/Gain25' */
  real32_T Gain26;                     /* '<S8>/Gain26' */
  real32_T Subtract;                   /* '<S8>/Subtract' */
  real32_T Divide2;                    /* '<S8>/Divide2' */
  real32_T MultiportSwitch;            /* '<S8>/Multiport Switch' */
  real32_T UnitDelay_m;                /* '<S143>/Unit Delay' */
  real32_T Gain29;                     /* '<S8>/Gain29' */
  real32_T UnitDelay_p;                /* '<S144>/Unit Delay' */
  real32_T Gain30;                     /* '<S8>/Gain30' */
  real32_T UnitDelay_f;                /* '<S145>/Unit Delay' */
  real32_T A0_i;                       /* '<S95>/Merge' */
  real32_T Gain31;                     /* '<S8>/Gain31' */
  real32_T UnitDelay_k;                /* '<S102>/Unit Delay' */
  real32_T A0_f;                       /* '<S95>/Merge1' */
  real32_T Gain32;                     /* '<S8>/Gain32' */
  real32_T UnitDelay_c;                /* '<S103>/Unit Delay' */
  real32_T Gain_b;                     /* '<S8>/Gain' */
  real32_T Switch;                     /* '<S8>/Switch' */
  real32_T UnitDelay_i;                /* '<S104>/Unit Delay' */
  real32_T Gain23;                     /* '<S8>/Gain23' */
  real32_T UnitDelay_iw;               /* '<S98>/Unit Delay' */
  real32_T Gain4_h;                    /* '<S8>/Gain4' */
  real32_T UnitDelay_e;                /* '<S108>/Unit Delay' */
  real32_T Gain1_b;                    /* '<S8>/Gain1' */
  real32_T Switch1;                    /* '<S8>/Switch1' */
  real32_T UnitDelay_ep;               /* '<S105>/Unit Delay' */
  real32_T Gain22;                     /* '<S8>/Gain22' */
  real32_T UnitDelay_j;                /* '<S99>/Unit Delay' */
  real32_T Gain6_g;                    /* '<S8>/Gain6' */
  real32_T UnitDelay_fr;               /* '<S110>/Unit Delay' */
  real32_T Gain2_p;                    /* '<S8>/Gain2' */
  real32_T Switch2;                    /* '<S8>/Switch2' */
  real32_T UnitDelay_mj;               /* '<S106>/Unit Delay' */
  real32_T Gain8_c;                    /* '<S8>/Gain8' */
  real32_T UnitDelay_o;                /* '<S112>/Unit Delay' */
  real32_T Gain9_d;                    /* '<S8>/Gain9' */
  real32_T UnitDelay_if;               /* '<S113>/Unit Delay' */
  real32_T Gain3_d;                    /* '<S8>/Gain3' */
  real32_T Switch3;                    /* '<S8>/Switch3' */
  real32_T UnitDelay_h;                /* '<S107>/Unit Delay' */
  real32_T Gain11_m;                   /* '<S8>/Gain11' */
  real32_T UnitDelay_ez;               /* '<S116>/Unit Delay' */
  real32_T Gain12;                     /* '<S8>/Gain12' */
  real32_T UnitDelay_f4;               /* '<S115>/Unit Delay' */
  real32_T Gain14;                     /* '<S8>/Gain14' */
  real32_T Switch6;                    /* '<S8>/Switch6' */
  real32_T UnitDelay_hj;               /* '<S119>/Unit Delay' */
  real32_T Gain16;                     /* '<S8>/Gain16' */
  real32_T Switch4_g;                  /* '<S8>/Switch4' */
  real32_T UnitDelay_mjl;              /* '<S120>/Unit Delay' */
  real32_T Gain17;                     /* '<S8>/Gain17' */
  real32_T Switch14;                   /* '<S8>/Switch14' */
  real32_T UnitDelay_b;                /* '<S122>/Unit Delay' */
  real32_T Gain19;                     /* '<S8>/Gain19' */
  real32_T Switch7;                    /* '<S8>/Switch7' */
  real32_T UnitDelay_pc;               /* '<S124>/Unit Delay' */
  real32_T Gain20;                     /* '<S8>/Gain20' */
  real32_T Switch17;                   /* '<S8>/Switch17' */
  real32_T UnitDelay_d;                /* '<S125>/Unit Delay' */
  real32_T Gain21;                     /* '<S8>/Gain21' */
  real32_T Switch23;                   /* '<S8>/Switch23' */
  real32_T UnitDelay_po;               /* '<S127>/Unit Delay' */
  real32_T Gain5_p;                    /* '<S8>/Gain5' */
  real32_T UnitDelay_bt;               /* '<S109>/Unit Delay' */
  real32_T Gain7_o;                    /* '<S8>/Gain7' */
  real32_T UnitDelay_hi;               /* '<S111>/Unit Delay' */
  real32_T Gain10_g;                   /* '<S8>/Gain10' */
  real32_T UnitDelay_a;                /* '<S114>/Unit Delay' */
  real32_T Gain13;                     /* '<S8>/Gain13' */
  real32_T UnitDelay_m0;               /* '<S118>/Unit Delay' */
  real32_T Gain15;                     /* '<S8>/Gain15' */
  real32_T Switch9;                    /* '<S8>/Switch9' */
  real32_T UnitDelay_da;               /* '<S121>/Unit Delay' */
  real32_T Gain18;                     /* '<S8>/Gain18' */
  real32_T Switch20;                   /* '<S8>/Switch20' */
  real32_T UnitDelay_n;                /* '<S126>/Unit Delay' */
  real32_T IFC_Line01_DxStart;         /* '<S8>/Data Type Conversion6' */
  real32_T UnitDelay_np;               /* '<S130>/Unit Delay' */
  real32_T IFC_Line01_DxEnd;           /* '<S8>/Data Type Conversion5' */
  real32_T UnitDelay_ku;               /* '<S131>/Unit Delay' */
  real32_T IFC_Line02_DxStart;         /* '<S8>/Data Type Conversion8' */
  real32_T UnitDelay_ev;               /* '<S132>/Unit Delay' */
  real32_T IFC_Line02_DxEnd;           /* '<S8>/Data Type Conversion7' */
  real32_T UnitDelay_dw;               /* '<S133>/Unit Delay' */
  real32_T IFC_Line03_DxStart;         /* '<S8>/Data Type Conversion10' */
  real32_T UnitDelay_bp;               /* '<S134>/Unit Delay' */
  real32_T IFC_Line03_DxEnd;           /* '<S8>/Data Type Conversion9' */
  real32_T UnitDelay_pq;               /* '<S135>/Unit Delay' */
  real32_T IFC_Line04_DxStart;         /* '<S8>/Data Type Conversion13' */
  real32_T UnitDelay_ko;               /* '<S136>/Unit Delay' */
  real32_T IFC_Line04_DxEnd;           /* '<S8>/Data Type Conversion12' */
  real32_T UnitDelay_cp;               /* '<S137>/Unit Delay' */
  real32_T IFC_Roadedge01_DxStart;     /* '<S8>/Data Type Conversion15' */
  real32_T UnitDelay_l;                /* '<S138>/Unit Delay' */
  real32_T IFC_Roadedge01_DxEnd;       /* '<S8>/Data Type Conversion14' */
  real32_T UnitDelay_ew;               /* '<S140>/Unit Delay' */
  real32_T IFC_Roadedge02_DxStart;     /* '<S8>/Data Type Conversion11' */
  real32_T UnitDelay_frq;              /* '<S141>/Unit Delay' */
  real32_T IFC_Roadedge02_DxEnd;       /* '<S8>/Data Type Conversion16' */
  real32_T UnitDelay_l1;               /* '<S142>/Unit Delay' */
  real32_T UnitDelay_oo;               /* '<S149>/Unit Delay' */
  real32_T A1_a;                       /* '<S1>/MATLAB Function1' */
  real32_T A2_m;                       /* '<S1>/MATLAB Function1' */
  real32_T A3_mm;                      /* '<S1>/MATLAB Function1' */
  real32_T L_A0;                       /* '<S96>/MATLAB Function3' */
  real32_T L_A1;                       /* '<S96>/MATLAB Function3' */
  real32_T L_A2;                       /* '<S96>/MATLAB Function3' */
  real32_T L_A3;                       /* '<S96>/MATLAB Function3' */
  real32_T R_A0;                       /* '<S96>/MATLAB Function3' */
  real32_T R_A1;                       /* '<S96>/MATLAB Function3' */
  real32_T R_A2;                       /* '<S96>/MATLAB Function3' */
  real32_T R_A3;                       /* '<S96>/MATLAB Function3' */
  real32_T count_d;                    /* '<S7>/MATLAB Function9' */
  uint16_T UnitDelay1_d;               /* '<S51>/Unit Delay1' */
  uint16_T Merge;                      /* '<S51>/Merge' */
  uint16_T UnitDelay1_l;               /* '<S56>/Unit Delay1' */
  uint16_T Merge_f;                    /* '<S56>/Merge' */
  uint16_T UnitDelay1_e;               /* '<S61>/Unit Delay1' */
  uint16_T Merge_h;                    /* '<S61>/Merge' */
  uint16_T UnitDelay1_dz;              /* '<S46>/Unit Delay1' */
  uint16_T Merge_i;                    /* '<S46>/Merge' */
  uint16_T UnitDelay_jh;               /* '<S25>/Unit Delay' */
  uint16_T UnitDelay1_eq;              /* '<S66>/Unit Delay1' */
  uint16_T Merge_g;                    /* '<S66>/Merge' */
  uint16_T UnitDelay1_o;               /* '<S71>/Unit Delay1' */
  uint16_T Merge_p;                    /* '<S71>/Merge' */
  uint16_T Cnt;                        /* '<S25>/MATLAB Function' */
  uint8_T UnitDelay5;                  /* '<S7>/Unit Delay5' */
  uint8_T UnitDelay4;                  /* '<S7>/Unit Delay4' */
  uint8_T DataTypeConversion_p;        /* '<S7>/Data Type Conversion' */
  uint8_T DataTypeConversion12;        /* '<S7>/Data Type Conversion12' */
  uint8_T UnitDelay3;                  /* '<S7>/Unit Delay3' */
  uint8_T UnitDelay2_p;                /* '<S7>/Unit Delay2' */
  uint8_T UnitDelay_eg;                /* '<S36>/Unit Delay' */
  uint8_T UnitDelay2_j;                /* '<S36>/Unit Delay2' */
  uint8_T UnitDelay3_g;                /* '<S36>/Unit Delay3' */
  uint8_T Switch6_e;                   /* '<S36>/Switch6' */
  uint8_T Switch_h;                    /* '<S36>/Switch' */
  uint8_T Switch1_g;                   /* '<S36>/Switch1' */
  uint8_T UnitDelay1_f;                /* '<S7>/Unit Delay1' */
  uint8_T UnitDelay_pt;                /* '<S37>/Unit Delay' */
  uint8_T UnitDelay2_pu;               /* '<S37>/Unit Delay2' */
  uint8_T UnitDelay3_a;                /* '<S37>/Unit Delay3' */
  uint8_T Switch6_j;                   /* '<S37>/Switch6' */
  uint8_T Switch_l;                    /* '<S37>/Switch' */
  uint8_T Switch1_j;                   /* '<S37>/Switch1' */
  uint8_T UnitDelay_iu;                /* '<S7>/Unit Delay' */
  uint8_T UnitDelay_dwv;               /* '<S38>/Unit Delay' */
  uint8_T UnitDelay2_i;                /* '<S38>/Unit Delay2' */
  uint8_T UnitDelay3_d;                /* '<S38>/Unit Delay3' */
  uint8_T Switch6_c;                   /* '<S38>/Switch6' */
  uint8_T Switch_hh;                   /* '<S38>/Switch' */
  uint8_T Switch1_m;                   /* '<S38>/Switch1' */
  uint8_T UnitDelay6;                  /* '<S7>/Unit Delay6' */
  uint8_T UnitDelay_fj;                /* '<S35>/Unit Delay' */
  uint8_T UnitDelay2_i4;               /* '<S35>/Unit Delay2' */
  uint8_T UnitDelay3_go;               /* '<S35>/Unit Delay3' */
  uint8_T Switch6_a;                   /* '<S35>/Switch6' */
  uint8_T Switch_b;                    /* '<S35>/Switch' */
  uint8_T Switch1_d;                   /* '<S35>/Switch1' */
  uint8_T UnitDelay2_d;                /* '<S25>/Unit Delay2' */
  uint8_T Switch20_o;                  /* '<S25>/Switch20' */
  uint8_T UnitDelay2_f;                /* '<S39>/Unit Delay2' */
  uint8_T UnitDelay3_h;                /* '<S39>/Unit Delay3' */
  uint8_T Switch6_ek;                  /* '<S39>/Switch6' */
  uint8_T Switch1_gw;                  /* '<S39>/Switch1' */
  uint8_T UnitDelay2_h;                /* '<S40>/Unit Delay2' */
  uint8_T UnitDelay3_i;                /* '<S40>/Unit Delay3' */
  uint8_T Switch6_ag;                  /* '<S40>/Switch6' */
  uint8_T Switch1_e;                   /* '<S40>/Switch1' */
  uint8_T DirectLookupTablenD5;        /* '<S7>/Direct Lookup Table (n-D)5' */
  uint8_T DirectLookupTablenD10;       /* '<S7>/Direct Lookup Table (n-D)10' */
  uint8_T Switch1_f;                   /* '<S7>/Switch1' */
  uint8_T Switch_p;                    /* '<S7>/Switch' */
  uint8_T bIsLineExist;                /* '<S1>/Bus Selector11' */
  uint8_T bIsLineExist_c;              /* '<S1>/Bus Selector15' */
  uint8_T bIsLineExist_ck;             /* '<S1>/Bus Selector12' */
  uint8_T bIsLineExist_ckl;            /* '<S1>/Bus Selector16' */
  uint8_T DirectLookupTablenD_k;       /* '<S8>/Direct Lookup Table (n-D)' */
  uint8_T UnitDelay_ni;                /* '<S128>/Unit Delay' */
  uint8_T Type;                        /* '<S96>/Merge' */
  uint8_T Valid;                       /* '<S96>/Merge' */
  uint8_T DirectLookupTablenD3_m;      /* '<S8>/Direct Lookup Table (n-D)3' */
  uint8_T UnitDelay_lk;                /* '<S150>/Unit Delay' */
  uint8_T Type_e;                      /* '<S96>/Merge1' */
  uint8_T Valid_f;                     /* '<S96>/Merge1' */
  uint8_T UnitDelay_ov;                /* '<S146>/Unit Delay' */
  uint8_T UnitDelay_dn;                /* '<S147>/Unit Delay' */
  uint8_T DirectLookupTablenD4_n;      /* '<S8>/Direct Lookup Table (n-D)4' */
  uint8_T UnitDelay_fi;                /* '<S152>/Unit Delay' */
  uint8_T Type_m;                      /* '<S95>/Merge' */
  uint8_T UnitDelay_l5;                /* '<S100>/Unit Delay' */
  uint8_T DirectLookupTablenD1_e;      /* '<S8>/Direct Lookup Table (n-D)1' */
  uint8_T UnitDelay_m4;                /* '<S97>/Unit Delay' */
  uint8_T Type_d;                      /* '<S95>/Merge1' */
  uint8_T UnitDelay_g;                 /* '<S101>/Unit Delay' */
  uint8_T UnitDelay_mp;                /* '<S117>/Unit Delay' */
  uint8_T UnitDelay_ao;                /* '<S139>/Unit Delay' */
  uint8_T UnitDelay_jy;                /* '<S151>/Unit Delay' */
  uint8_T UnitDelay_kp;                /* '<S153>/Unit Delay' */
  uint8_T UnitDelay_do;                /* '<S123>/Unit Delay' */
  uint8_T UnitDelay_mq;                /* '<S129>/Unit Delay' */
  uint8_T Uk1;                         /* '<S42>/Delay Input1' */
  uint8_T UnitDelay_d5;                /* '<S148>/Unit Delay' */
  uint8_T FixPtSum1;                   /* '<S5>/FixPt Sum1' */
  uint8_T FixPtSwitch;                 /* '<S6>/FixPt Switch' */
  uint8_T L_Type;                      /* '<S96>/MATLAB Function3' */
  uint8_T L_Valid;                     /* '<S96>/MATLAB Function3' */
  uint8_T R_Type;                      /* '<S96>/MATLAB Function3' */
  uint8_T R_Valid;                     /* '<S96>/MATLAB Function3' */
  uint8_T LSSIntervention;             /* '<S8>/MATLAB Function3' */
  uint8_T y_g;                         /* '<S7>/MATLAB Function9' */
  uint8_T LaneChange;                  /* '<S7>/MATLAB Function8' */
  uint8_T Longctrl_ModSts;             /* '<S7>/MATLAB Function' */
  uint8_T Cnt_f;                       /* '<S7>/MATLAB Function' */
  boolean_T Compare;                   /* '<S13>/Compare' */
  boolean_T RelationalOperator4;       /* '<S7>/Relational Operator4' */
  boolean_T UnitDelay1_ln;             /* '<S12>/Unit Delay1' */
  boolean_T UnitDelay2_dt;             /* '<S12>/Unit Delay2' */
  boolean_T UnitDelay3_k;              /* '<S12>/Unit Delay3' */
  boolean_T UnitDelay4_f;              /* '<S12>/Unit Delay4' */
  boolean_T LogicalOperator;           /* '<S12>/Logical Operator' */
  boolean_T Switch8;                   /* '<S7>/Switch8' */
  boolean_T RelationalOperator3;       /* '<S7>/Relational Operator3' */
  boolean_T UnitDelay1_fj;             /* '<S11>/Unit Delay1' */
  boolean_T UnitDelay2_g;              /* '<S11>/Unit Delay2' */
  boolean_T UnitDelay3_c;              /* '<S11>/Unit Delay3' */
  boolean_T UnitDelay4_i;              /* '<S11>/Unit Delay4' */
  boolean_T LogicalOperator_p;         /* '<S11>/Logical Operator' */
  boolean_T Switch7_h;                 /* '<S7>/Switch7' */
  boolean_T Compare_m;                 /* '<S50>/Compare' */
  boolean_T RelationalOperator;        /* '<S36>/Relational Operator' */
  boolean_T UnitDelay2_l;              /* '<S51>/Unit Delay2' */
  boolean_T RelationalOperator1;       /* '<S36>/Relational Operator1' */
  boolean_T Compare_g;                 /* '<S49>/Compare' */
  boolean_T RelationalOperator2;       /* '<S7>/Relational Operator2' */
  boolean_T UnitDelay1_ef;             /* '<S10>/Unit Delay1' */
  boolean_T UnitDelay2_gw;             /* '<S10>/Unit Delay2' */
  boolean_T UnitDelay3_kr;             /* '<S10>/Unit Delay3' */
  boolean_T UnitDelay4_a;              /* '<S10>/Unit Delay4' */
  boolean_T LogicalOperator_a;         /* '<S10>/Logical Operator' */
  boolean_T Switch6_d;                 /* '<S7>/Switch6' */
  boolean_T Compare_ga;                /* '<S55>/Compare' */
  boolean_T RelationalOperator_j;      /* '<S37>/Relational Operator' */
  boolean_T UnitDelay2_hi;             /* '<S56>/Unit Delay2' */
  boolean_T RelationalOperator1_k;     /* '<S37>/Relational Operator1' */
  boolean_T Compare_e;                 /* '<S54>/Compare' */
  boolean_T RelationalOperator1_o;     /* '<S7>/Relational Operator1' */
  boolean_T UnitDelay1_o1;             /* '<S9>/Unit Delay1' */
  boolean_T UnitDelay2_p1;             /* '<S9>/Unit Delay2' */
  boolean_T UnitDelay3_n;              /* '<S9>/Unit Delay3' */
  boolean_T UnitDelay4_iw;             /* '<S9>/Unit Delay4' */
  boolean_T LogicalOperator_d;         /* '<S9>/Logical Operator' */
  boolean_T Switch5;                   /* '<S7>/Switch5' */
  boolean_T Compare_j;                 /* '<S60>/Compare' */
  boolean_T RelationalOperator_h;      /* '<S38>/Relational Operator' */
  boolean_T UnitDelay2_db;             /* '<S61>/Unit Delay2' */
  boolean_T RelationalOperator1_f;     /* '<S38>/Relational Operator1' */
  boolean_T Compare_i;                 /* '<S59>/Compare' */
  boolean_T Uk1_n;                     /* '<S24>/Delay Input1' */
  boolean_T FixPtRelationalOperator;   /* '<S24>/FixPt Relational Operator' */
  boolean_T Compare_h;                 /* '<S45>/Compare' */
  boolean_T RelationalOperator_b;      /* '<S35>/Relational Operator' */
  boolean_T UnitDelay2_n;              /* '<S46>/Unit Delay2' */
  boolean_T RelationalOperator1_f4;    /* '<S35>/Relational Operator1' */
  boolean_T Compare_p;                 /* '<S44>/Compare' */
  boolean_T Compare_hv;                /* '<S15>/Compare' */
  boolean_T UnitDelay3_ga;             /* '<S25>/Unit Delay3' */
  boolean_T Compare_l;                 /* '<S41>/Compare' */
  boolean_T Compare_b;                 /* '<S65>/Compare' */
  boolean_T UnitDelay2_lk;             /* '<S66>/Unit Delay2' */
  boolean_T RelationalOperator1_j;     /* '<S39>/Relational Operator1' */
  boolean_T Compare_b3;                /* '<S64>/Compare' */
  boolean_T Compare_lz;                /* '<S70>/Compare' */
  boolean_T UnitDelay2_gi;             /* '<S71>/Unit Delay2' */
  boolean_T RelationalOperator1_a;     /* '<S40>/Relational Operator1' */
  boolean_T Compare_f;                 /* '<S69>/Compare' */
  boolean_T Compare_ox;                /* '<S14>/Compare' */
  boolean_T Compare_a;                 /* '<S16>/Compare' */
  boolean_T RelationalOperator_m;      /* '<S7>/Relational Operator' */
  boolean_T Compare_e4;                /* '<S75>/Compare' */
  boolean_T LogicalOperator7;          /* '<S8>/Logical Operator7' */
  boolean_T Compare_it;                /* '<S181>/Compare' */
  boolean_T Compare_gm;                /* '<S191>/Compare' */
  boolean_T LogicalOperator29;         /* '<S96>/Logical Operator29' */
  boolean_T Compare_jb;                /* '<S199>/Compare' */
  boolean_T Compare_ec;                /* '<S189>/Compare' */
  boolean_T Compare_pb;                /* '<S192>/Compare' */
  boolean_T LogicalOperator24;         /* '<S96>/Logical Operator24' */
  boolean_T LogicalOperator25;         /* '<S96>/Logical Operator25' */
  boolean_T Compare_hb;                /* '<S180>/Compare' */
  boolean_T Compare_ic;                /* '<S187>/Compare' */
  boolean_T LogicalOperator28;         /* '<S96>/Logical Operator28' */
  boolean_T Compare_d;                 /* '<S198>/Compare' */
  boolean_T Compare_if;                /* '<S193>/Compare' */
  boolean_T Compare_n;                 /* '<S194>/Compare' */
  boolean_T LogicalOperator30;         /* '<S96>/Logical Operator30' */
  boolean_T LogicalOperator27;         /* '<S96>/Logical Operator27' */
  boolean_T UnitDelay3_hq;             /* '<S128>/Unit Delay3' */
  boolean_T Compare_lp;                /* '<S304>/Compare' */
  boolean_T Compare_dm;                /* '<S303>/Compare' */
  boolean_T LogicalOperator8;          /* '<S128>/Logical Operator8' */
  boolean_T Compare_aa;                /* '<S195>/Compare' */
  boolean_T Compare_fl;                /* '<S188>/Compare' */
  boolean_T LogicalOperator35;         /* '<S96>/Logical Operator35' */
  boolean_T Compare_ol;                /* '<S201>/Compare' */
  boolean_T Compare_aq;                /* '<S196>/Compare' */
  boolean_T Compare_nt;                /* '<S197>/Compare' */
  boolean_T LogicalOperator31;         /* '<S96>/Logical Operator31' */
  boolean_T LogicalOperator32;         /* '<S96>/Logical Operator32' */
  boolean_T Compare_aj;                /* '<S190>/Compare' */
  boolean_T Compare_mw;                /* '<S182>/Compare' */
  boolean_T LogicalOperator34;         /* '<S96>/Logical Operator34' */
  boolean_T Compare_hbm;               /* '<S200>/Compare' */
  boolean_T Compare_nx;                /* '<S183>/Compare' */
  boolean_T Compare_ds;                /* '<S184>/Compare' */
  boolean_T LogicalOperator36;         /* '<S96>/Logical Operator36' */
  boolean_T LogicalOperator33;         /* '<S96>/Logical Operator33' */
  boolean_T UnitDelay3_p;              /* '<S150>/Unit Delay3' */
  boolean_T Compare_i0;                /* '<S370>/Compare' */
  boolean_T Compare_pl;                /* '<S369>/Compare' */
  boolean_T LogicalOperator8_n;        /* '<S150>/Logical Operator8' */
  boolean_T Compare_eg;                /* '<S185>/Compare' */
  boolean_T Compare_lk;                /* '<S186>/Compare' */
  boolean_T UnitDelay3_j;              /* '<S146>/Unit Delay3' */
  boolean_T Compare_in;                /* '<S358>/Compare' */
  boolean_T Compare_nf;                /* '<S357>/Compare' */
  boolean_T LogicalOperator8_i;        /* '<S146>/Logical Operator8' */
  boolean_T UnitDelay3_m;              /* '<S147>/Unit Delay3' */
  boolean_T Compare_nts;               /* '<S361>/Compare' */
  boolean_T Compare_bu;                /* '<S360>/Compare' */
  boolean_T LogicalOperator8_m;        /* '<S147>/Logical Operator8' */
  boolean_T Compare_k;                 /* '<S155>/Compare' */
  boolean_T Compare_au;                /* '<S163>/Compare' */
  boolean_T LogicalOperator29_p;       /* '<S95>/Logical Operator29' */
  boolean_T Compare_bh;                /* '<S171>/Compare' */
  boolean_T Compare_hn;                /* '<S161>/Compare' */
  boolean_T Compare_iw;                /* '<S164>/Compare' */
  boolean_T LogicalOperator24_c;       /* '<S95>/Logical Operator24' */
  boolean_T LogicalOperator25_l;       /* '<S95>/Logical Operator25' */
  boolean_T Compare_ita;               /* '<S154>/Compare' */
  boolean_T Compare_dw;                /* '<S159>/Compare' */
  boolean_T LogicalOperator28_o;       /* '<S95>/Logical Operator28' */
  boolean_T Compare_lu;                /* '<S170>/Compare' */
  boolean_T Compare_bc;                /* '<S165>/Compare' */
  boolean_T Compare_jy;                /* '<S166>/Compare' */
  boolean_T LogicalOperator30_a;       /* '<S95>/Logical Operator30' */
  boolean_T LogicalOperator27_p;       /* '<S95>/Logical Operator27' */
  boolean_T UnitDelay3_b;              /* '<S152>/Unit Delay3' */
  boolean_T Compare_ap;                /* '<S376>/Compare' */
  boolean_T Compare_c;                 /* '<S375>/Compare' */
  boolean_T LogicalOperator8_a;        /* '<S152>/Logical Operator8' */
  boolean_T UnitDelay3_jx;             /* '<S100>/Unit Delay3' */
  boolean_T Compare_kx;                /* '<S220>/Compare' */
  boolean_T Compare_ph;                /* '<S219>/Compare' */
  boolean_T LogicalOperator8_p;        /* '<S100>/Logical Operator8' */
  boolean_T Compare_d2;                /* '<S167>/Compare' */
  boolean_T Compare_pi;                /* '<S160>/Compare' */
  boolean_T LogicalOperator35_k;       /* '<S95>/Logical Operator35' */
  boolean_T Compare_bo;                /* '<S173>/Compare' */
  boolean_T Compare_pk;                /* '<S168>/Compare' */
  boolean_T Compare_lh;                /* '<S169>/Compare' */
  boolean_T LogicalOperator31_k;       /* '<S95>/Logical Operator31' */
  boolean_T LogicalOperator32_l;       /* '<S95>/Logical Operator32' */
  boolean_T Compare_e4q;               /* '<S162>/Compare' */
  boolean_T Compare_l3;                /* '<S156>/Compare' */
  boolean_T LogicalOperator34_p;       /* '<S95>/Logical Operator34' */
  boolean_T Compare_pr;                /* '<S172>/Compare' */
  boolean_T Compare_ht;                /* '<S157>/Compare' */
  boolean_T Compare_ou;                /* '<S158>/Compare' */
  boolean_T LogicalOperator36_l;       /* '<S95>/Logical Operator36' */
  boolean_T LogicalOperator33_k;       /* '<S95>/Logical Operator33' */
  boolean_T UnitDelay3_f;              /* '<S97>/Unit Delay3' */
  boolean_T Compare_ly;                /* '<S211>/Compare' */
  boolean_T Compare_eo;                /* '<S210>/Compare' */
  boolean_T LogicalOperator8_g;        /* '<S97>/Logical Operator8' */
  boolean_T UnitDelay3_it;             /* '<S101>/Unit Delay3' */
  boolean_T Compare_hl;                /* '<S223>/Compare' */
  boolean_T Compare_kg;                /* '<S222>/Compare' */
  boolean_T LogicalOperator8_e;        /* '<S101>/Logical Operator8' */
  boolean_T UnitDelay3_g4;             /* '<S143>/Unit Delay3' */
  boolean_T Compare_ho;                /* '<S349>/Compare' */
  boolean_T Compare_lhn;               /* '<S348>/Compare' */
  boolean_T LogicalOperator8_ab;       /* '<S143>/Logical Operator8' */
  boolean_T UnitDelay3_hw;             /* '<S144>/Unit Delay3' */
  boolean_T Compare_br;                /* '<S352>/Compare' */
  boolean_T Compare_ek;                /* '<S351>/Compare' */
  boolean_T LogicalOperator8_eq;       /* '<S144>/Logical Operator8' */
  boolean_T UnitDelay3_m5;             /* '<S145>/Unit Delay3' */
  boolean_T Compare_oh;                /* '<S355>/Compare' */
  boolean_T Compare_dd;                /* '<S354>/Compare' */
  boolean_T LogicalOperator8_gb;       /* '<S145>/Logical Operator8' */
  boolean_T UnitDelay3_pz;             /* '<S102>/Unit Delay3' */
  boolean_T Compare_n0;                /* '<S226>/Compare' */
  boolean_T Compare_j2;                /* '<S225>/Compare' */
  boolean_T LogicalOperator8_c;        /* '<S102>/Logical Operator8' */
  boolean_T UnitDelay3_pc;             /* '<S103>/Unit Delay3' */
  boolean_T Compare_o1;                /* '<S229>/Compare' */
  boolean_T Compare_jk;                /* '<S228>/Compare' */
  boolean_T LogicalOperator8_h;        /* '<S103>/Logical Operator8' */
  boolean_T Compare_nk;                /* '<S74>/Compare' */
  boolean_T UnitDelay3_e;              /* '<S104>/Unit Delay3' */
  boolean_T Compare_ekf;               /* '<S232>/Compare' */
  boolean_T Compare_ca;                /* '<S231>/Compare' */
  boolean_T LogicalOperator8_pg;       /* '<S104>/Logical Operator8' */
  boolean_T UnitDelay3_ch;             /* '<S98>/Unit Delay3' */
  boolean_T Compare_gf;                /* '<S214>/Compare' */
  boolean_T Compare_hvb;               /* '<S213>/Compare' */
  boolean_T LogicalOperator8_j;        /* '<S98>/Logical Operator8' */
  boolean_T UnitDelay3_hp;             /* '<S108>/Unit Delay3' */
  boolean_T Compare_ei;                /* '<S244>/Compare' */
  boolean_T Compare_n1;                /* '<S243>/Compare' */
  boolean_T LogicalOperator8_jw;       /* '<S108>/Logical Operator8' */
  boolean_T UnitDelay3_i0;             /* '<S117>/Unit Delay3' */
  boolean_T Compare_ba;                /* '<S271>/Compare' */
  boolean_T Compare_gq;                /* '<S270>/Compare' */
  boolean_T LogicalOperator8_hy;       /* '<S117>/Logical Operator8' */
  boolean_T Compare_ny;                /* '<S76>/Compare' */
  boolean_T UnitDelay3_e5;             /* '<S105>/Unit Delay3' */
  boolean_T Compare_cm;                /* '<S235>/Compare' */
  boolean_T Compare_itu;               /* '<S234>/Compare' */
  boolean_T LogicalOperator8_gp;       /* '<S105>/Logical Operator8' */
  boolean_T UnitDelay3_fl;             /* '<S99>/Unit Delay3' */
  boolean_T Compare_mk;                /* '<S217>/Compare' */
  boolean_T Compare_jq;                /* '<S216>/Compare' */
  boolean_T LogicalOperator8_b;        /* '<S99>/Logical Operator8' */
  boolean_T UnitDelay3_hb;             /* '<S110>/Unit Delay3' */
  boolean_T Compare_ip;                /* '<S250>/Compare' */
  boolean_T Compare_ks;                /* '<S249>/Compare' */
  boolean_T LogicalOperator8_pu;       /* '<S110>/Logical Operator8' */
  boolean_T UnitDelay3_dm;             /* '<S139>/Unit Delay3' */
  boolean_T Compare_bul;               /* '<S337>/Compare' */
  boolean_T Compare_ka;                /* '<S336>/Compare' */
  boolean_T LogicalOperator8_d;        /* '<S139>/Logical Operator8' */
  boolean_T Compare_cr;                /* '<S77>/Compare' */
  boolean_T UnitDelay3_ix;             /* '<S106>/Unit Delay3' */
  boolean_T Compare_bb;                /* '<S238>/Compare' */
  boolean_T Compare_pf;                /* '<S237>/Compare' */
  boolean_T LogicalOperator8_bp;       /* '<S106>/Logical Operator8' */
  boolean_T UnitDelay3_ev;             /* '<S112>/Unit Delay3' */
  boolean_T Compare_n3;                /* '<S256>/Compare' */
  boolean_T Compare_i5;                /* '<S255>/Compare' */
  boolean_T LogicalOperator8_gbf;      /* '<S112>/Logical Operator8' */
  boolean_T UnitDelay3_k4;             /* '<S113>/Unit Delay3' */
  boolean_T Compare_g2;                /* '<S259>/Compare' */
  boolean_T Compare_mz;                /* '<S258>/Compare' */
  boolean_T LogicalOperator8_o;        /* '<S113>/Logical Operator8' */
  boolean_T UnitDelay3_pe;             /* '<S151>/Unit Delay3' */
  boolean_T Compare_gp;                /* '<S373>/Compare' */
  boolean_T Compare_bm;                /* '<S372>/Compare' */
  boolean_T LogicalOperator8_bt;       /* '<S151>/Logical Operator8' */
  boolean_T Compare_ce;                /* '<S78>/Compare' */
  boolean_T UnitDelay3_fi;             /* '<S107>/Unit Delay3' */
  boolean_T Compare_gmc;               /* '<S241>/Compare' */
  boolean_T Compare_l5;                /* '<S240>/Compare' */
  boolean_T LogicalOperator8_ac;       /* '<S107>/Logical Operator8' */
  boolean_T UnitDelay3_hd;             /* '<S116>/Unit Delay3' */
  boolean_T Compare_jd;                /* '<S268>/Compare' */
  boolean_T Compare_k0;                /* '<S267>/Compare' */
  boolean_T LogicalOperator8_hk;       /* '<S116>/Logical Operator8' */
  boolean_T UnitDelay3_is;             /* '<S115>/Unit Delay3' */
  boolean_T Compare_bmx;               /* '<S265>/Compare' */
  boolean_T Compare_co;                /* '<S264>/Compare' */
  boolean_T LogicalOperator8_ix;       /* '<S115>/Logical Operator8' */
  boolean_T UnitDelay3_kp;             /* '<S153>/Unit Delay3' */
  boolean_T Compare_n2;                /* '<S379>/Compare' */
  boolean_T Compare_mm;                /* '<S378>/Compare' */
  boolean_T LogicalOperator8_et;       /* '<S153>/Logical Operator8' */
  boolean_T Compare_how;               /* '<S79>/Compare' */
  boolean_T UnitDelay3_po;             /* '<S119>/Unit Delay3' */
  boolean_T Compare_bcz;               /* '<S277>/Compare' */
  boolean_T Compare_p0;                /* '<S276>/Compare' */
  boolean_T LogicalOperator8_ik;       /* '<S119>/Logical Operator8' */
  boolean_T LogicalOperator_b;         /* '<S8>/Logical Operator' */
  boolean_T UnitDelay3_mw;             /* '<S120>/Unit Delay3' */
  boolean_T Compare_gr;                /* '<S280>/Compare' */
  boolean_T Compare_cp;                /* '<S279>/Compare' */
  boolean_T LogicalOperator8_iw;       /* '<S120>/Logical Operator8' */
  boolean_T LogicalOperator2;          /* '<S8>/Logical Operator2' */
  boolean_T UnitDelay3_gw;             /* '<S122>/Unit Delay3' */
  boolean_T Compare_mc;                /* '<S286>/Compare' */
  boolean_T Compare_fs;                /* '<S285>/Compare' */
  boolean_T LogicalOperator8_ap;       /* '<S122>/Logical Operator8' */
  boolean_T UnitDelay3_b2;             /* '<S123>/Unit Delay3' */
  boolean_T Compare_id;                /* '<S289>/Compare' */
  boolean_T Compare_pm;                /* '<S288>/Compare' */
  boolean_T LogicalOperator8_f;        /* '<S123>/Logical Operator8' */
  boolean_T Compare_n0a;               /* '<S80>/Compare' */
  boolean_T UnitDelay3_bl;             /* '<S124>/Unit Delay3' */
  boolean_T Compare_pp;                /* '<S292>/Compare' */
  boolean_T Compare_i3;                /* '<S291>/Compare' */
  boolean_T LogicalOperator8_pn;       /* '<S124>/Logical Operator8' */
  boolean_T LogicalOperator3;          /* '<S8>/Logical Operator3' */
  boolean_T UnitDelay3_o;              /* '<S125>/Unit Delay3' */
  boolean_T Compare_lw;                /* '<S295>/Compare' */
  boolean_T Compare_c5;                /* '<S294>/Compare' */
  boolean_T LogicalOperator8_j3;       /* '<S125>/Logical Operator8' */
  boolean_T LogicalOperator5;          /* '<S8>/Logical Operator5' */
  boolean_T UnitDelay3_nc;             /* '<S127>/Unit Delay3' */
  boolean_T Compare_h5;                /* '<S301>/Compare' */
  boolean_T Compare_oz;                /* '<S300>/Compare' */
  boolean_T LogicalOperator8_nn;       /* '<S127>/Logical Operator8' */
  boolean_T UnitDelay3_nw;             /* '<S129>/Unit Delay3' */
  boolean_T Compare_it2;               /* '<S307>/Compare' */
  boolean_T Compare_gs;                /* '<S306>/Compare' */
  boolean_T LogicalOperator8_l;        /* '<S129>/Logical Operator8' */
  boolean_T UnitDelay3_pq;             /* '<S109>/Unit Delay3' */
  boolean_T Compare_c2;                /* '<S247>/Compare' */
  boolean_T Compare_j4;                /* '<S246>/Compare' */
  boolean_T LogicalOperator8_mt;       /* '<S109>/Logical Operator8' */
  boolean_T UnitDelay3_cg;             /* '<S111>/Unit Delay3' */
  boolean_T Compare_o1o;               /* '<S253>/Compare' */
  boolean_T Compare_gp0;               /* '<S252>/Compare' */
  boolean_T LogicalOperator8_m4;       /* '<S111>/Logical Operator8' */
  boolean_T UnitDelay3_l;              /* '<S114>/Unit Delay3' */
  boolean_T Compare_i2;                /* '<S262>/Compare' */
  boolean_T Compare_ft;                /* '<S261>/Compare' */
  boolean_T LogicalOperator8_o2;       /* '<S114>/Logical Operator8' */
  boolean_T UnitDelay3_ef;             /* '<S118>/Unit Delay3' */
  boolean_T Compare_lm;                /* '<S274>/Compare' */
  boolean_T Compare_aw;                /* '<S273>/Compare' */
  boolean_T LogicalOperator8_n3;       /* '<S118>/Logical Operator8' */
  boolean_T LogicalOperator1;          /* '<S8>/Logical Operator1' */
  boolean_T UnitDelay3_hk;             /* '<S121>/Unit Delay3' */
  boolean_T Compare_jo;                /* '<S283>/Compare' */
  boolean_T Compare_dl;                /* '<S282>/Compare' */
  boolean_T LogicalOperator8_m5;       /* '<S121>/Logical Operator8' */
  boolean_T LogicalOperator4;          /* '<S8>/Logical Operator4' */
  boolean_T UnitDelay3_pm;             /* '<S126>/Unit Delay3' */
  boolean_T Compare_pa;                /* '<S298>/Compare' */
  boolean_T Compare_mma;               /* '<S297>/Compare' */
  boolean_T LogicalOperator8_oe;       /* '<S126>/Logical Operator8' */
  boolean_T UnitDelay3_ir;             /* '<S130>/Unit Delay3' */
  boolean_T Compare_bv;                /* '<S310>/Compare' */
  boolean_T Compare_li;                /* '<S309>/Compare' */
  boolean_T LogicalOperator8_gf;       /* '<S130>/Logical Operator8' */
  boolean_T UnitDelay3_ko;             /* '<S131>/Unit Delay3' */
  boolean_T Compare_ne;                /* '<S313>/Compare' */
  boolean_T Compare_pu;                /* '<S312>/Compare' */
  boolean_T LogicalOperator8_ag;       /* '<S131>/Logical Operator8' */
  boolean_T UnitDelay3_nh;             /* '<S132>/Unit Delay3' */
  boolean_T Compare_bbr;               /* '<S316>/Compare' */
  boolean_T Compare_fy;                /* '<S315>/Compare' */
  boolean_T LogicalOperator8_k;        /* '<S132>/Logical Operator8' */
  boolean_T UnitDelay3_jn;             /* '<S133>/Unit Delay3' */
  boolean_T Compare_hta;               /* '<S319>/Compare' */
  boolean_T Compare_kq;                /* '<S318>/Compare' */
  boolean_T LogicalOperator8_ox;       /* '<S133>/Logical Operator8' */
  boolean_T UnitDelay3_ns;             /* '<S134>/Unit Delay3' */
  boolean_T Compare_j0;                /* '<S322>/Compare' */
  boolean_T Compare_fz;                /* '<S321>/Compare' */
  boolean_T LogicalOperator8_io;       /* '<S134>/Logical Operator8' */
  boolean_T UnitDelay3_jd;             /* '<S135>/Unit Delay3' */
  boolean_T Compare_at;                /* '<S325>/Compare' */
  boolean_T Compare_j41;               /* '<S324>/Compare' */
  boolean_T LogicalOperator8_jx;       /* '<S135>/Logical Operator8' */
  boolean_T UnitDelay3_k4b;            /* '<S136>/Unit Delay3' */
  boolean_T Compare_a2;                /* '<S328>/Compare' */
  boolean_T Compare_jw;                /* '<S327>/Compare' */
  boolean_T LogicalOperator8_fb;       /* '<S136>/Logical Operator8' */
  boolean_T UnitDelay3_me;             /* '<S137>/Unit Delay3' */
  boolean_T Compare_gd;                /* '<S331>/Compare' */
  boolean_T Compare_m1;                /* '<S330>/Compare' */
  boolean_T LogicalOperator8_cp;       /* '<S137>/Logical Operator8' */
  boolean_T UnitDelay3_ic;             /* '<S138>/Unit Delay3' */
  boolean_T Compare_ir;                /* '<S334>/Compare' */
  boolean_T Compare_nn;                /* '<S333>/Compare' */
  boolean_T LogicalOperator8_m1;       /* '<S138>/Logical Operator8' */
  boolean_T UnitDelay3_bd;             /* '<S140>/Unit Delay3' */
  boolean_T Compare_a0;                /* '<S340>/Compare' */
  boolean_T Compare_hk;                /* '<S339>/Compare' */
  boolean_T LogicalOperator8_o0;       /* '<S140>/Logical Operator8' */
  boolean_T UnitDelay3_ij;             /* '<S141>/Unit Delay3' */
  boolean_T Compare_iy;                /* '<S343>/Compare' */
  boolean_T Compare_bad;               /* '<S342>/Compare' */
  boolean_T LogicalOperator8_j3v;      /* '<S141>/Logical Operator8' */
  boolean_T UnitDelay3_g0;             /* '<S142>/Unit Delay3' */
  boolean_T Compare_d1;                /* '<S346>/Compare' */
  boolean_T Compare_e1;                /* '<S345>/Compare' */
  boolean_T LogicalOperator8_i1;       /* '<S142>/Logical Operator8' */
  boolean_T Compare_jbl;               /* '<S21>/Compare' */
  boolean_T Compare_m5;                /* '<S22>/Compare' */
  boolean_T Compare_fi;                /* '<S23>/Compare' */
  boolean_T LogicalOperator_c;         /* '<S7>/Logical Operator' */
  boolean_T FixPtRelationalOperator_o; /* '<S42>/FixPt Relational Operator' */
  boolean_T Compare_jz;                /* '<S81>/Compare' */
  boolean_T Compare_iz;                /* '<S82>/Compare' */
  boolean_T LogicalOperator6;          /* '<S8>/Logical Operator6' */
  boolean_T Compare_f4;                /* '<S363>/Compare' */
  boolean_T UnitDelay3_kg;             /* '<S148>/Unit Delay3' */
  boolean_T Compare_da;                /* '<S364>/Compare' */
  boolean_T LogicalOperator8_ca;       /* '<S148>/Logical Operator8' */
  boolean_T Compare_g1;                /* '<S366>/Compare' */
  boolean_T UnitDelay3_bj;             /* '<S149>/Unit Delay3' */
  boolean_T Compare_jl;                /* '<S367>/Compare' */
  boolean_T LogicalOperator8_lf;       /* '<S149>/Logical Operator8' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_p1;/* '<S153>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_mn;/* '<S152>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_m1;/* '<S151>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_ej;/* '<S150>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_mi;/* '<S149>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_bq;/* '<S148>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_oq;/* '<S147>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_lb;/* '<S146>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_k3;/* '<S145>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_go;/* '<S144>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_i3;/* '<S143>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_ig;/* '<S142>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_mv;/* '<S141>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_cxx;/* '<S140>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_mb;/* '<S139>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_le;/* '<S138>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_m4;/* '<S137>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_jq;/* '<S136>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_ju;/* '<S135>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_ih;/* '<S134>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_cx;/* '<S133>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_cw;/* '<S132>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_n;/* '<S131>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_id;/* '<S130>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_e_T sf_MATLABFunction1_iab;/* '<S129>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_om;/* '<S128>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_cn;/* '<S127>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_b;/* '<S126>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_jy;/* '<S125>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_gif;/* '<S124>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_e_T sf_MATLABFunction1_ia;/* '<S123>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_c;/* '<S122>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_my;/* '<S121>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_e3;/* '<S120>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_pi;/* '<S119>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_h;/* '<S118>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_ez;/* '<S117>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_ok;/* '<S116>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_kj;/* '<S115>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_j;/* '<S114>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_gi;/* '<S113>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_o;/* '<S112>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_ao;/* '<S111>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_an;/* '<S110>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_d;/* '<S109>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_g;/* '<S108>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_l;/* '<S107>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_e5;/* '<S106>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_pl;/* '<S105>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_kyo;/* '<S104>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_ky;/* '<S103>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_ip;/* '<S102>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_p;/* '<S101>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_m;/* '<S100>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_a;/* '<S99>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T sf_MATLABFunction1_k;/* '<S98>/MATLAB Function1' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T sf_MATLABFunction1_e;/* '<S97>/MATLAB Function1' */
  B_MATLABFunction7_PubIfChassisHMI_MDL_T sf_MATLABFunction9_i;/* '<S8>/MATLAB Function9' */
  B_MATLABFunction7_PubIfChassisHMI_MDL_T sf_MATLABFunction7_e;/* '<S8>/MATLAB Function7' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_T sf_MATLABFunction5_b;/* '<S8>/MATLAB Function5' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_T sf_MATLABFunction4_i;/* '<S8>/MATLAB Function4' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_T sf_MATLABFunction13;/* '<S8>/MATLAB Function13' */
  B_MATLABFunction1_PubIfChassisHMI_MDL_T sf_MATLABFunction1_i;/* '<S8>/MATLAB Function1' */
  B_IfActionSubsystem_PubIfChassisHMI_MDL_T IfActionSubsystem_o;/* '<S71>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfChassisHMI_MDL_T IfActionSubsystem_g;/* '<S66>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfChassisHMI_MDL_T IfActionSubsystem_f;/* '<S61>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfChassisHMI_MDL_T IfActionSubsystem_k;/* '<S56>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfChassisHMI_MDL_T IfActionSubsystem_c;/* '<S51>/If Action Subsystem' */
  B_IfActionSubsystem_PubIfChassisHMI_MDL_T IfActionSubsystem;/* '<S46>/If Action Subsystem' */
  B_MATLABFunction4_PubIfChassisHMI_MDL_T sf_MATLABFunction7;/* '<S7>/MATLAB Function7' */
  B_MATLABFunction4_PubIfChassisHMI_MDL_T sf_MATLABFunction6;/* '<S7>/MATLAB Function6' */
  B_MATLABFunction4_PubIfChassisHMI_MDL_T sf_MATLABFunction5;/* '<S7>/MATLAB Function5' */
  B_MATLABFunction4_PubIfChassisHMI_MDL_T sf_MATLABFunction4;/* '<S7>/MATLAB Function4' */
} B_PubIfChassisHMI_MDL_c_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'PubIfChassisHMI_MDL' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T UnitDelay1_DSTATE;            /* '<S8>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S8>/Unit Delay2' */
  real_T UnitDelay_DSTATE;             /* '<S8>/Unit Delay' */
  real32_T UnitDelay7_DSTATE;          /* '<S7>/Unit Delay7' */
  real32_T UnitDelay_DSTATE_i;         /* '<S143>/Unit Delay' */
  real32_T UnitDelay_DSTATE_b;         /* '<S144>/Unit Delay' */
  real32_T UnitDelay_DSTATE_il;        /* '<S145>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m;         /* '<S102>/Unit Delay' */
  real32_T UnitDelay_DSTATE_j;         /* '<S103>/Unit Delay' */
  real32_T UnitDelay_DSTATE_a;         /* '<S104>/Unit Delay' */
  real32_T UnitDelay_DSTATE_k;         /* '<S98>/Unit Delay' */
  real32_T UnitDelay_DSTATE_d;         /* '<S108>/Unit Delay' */
  real32_T UnitDelay_DSTATE_mp;        /* '<S105>/Unit Delay' */
  real32_T UnitDelay_DSTATE_ai;        /* '<S99>/Unit Delay' */
  real32_T UnitDelay_DSTATE_bs;        /* '<S110>/Unit Delay' */
  real32_T UnitDelay_DSTATE_o;         /* '<S106>/Unit Delay' */
  real32_T UnitDelay_DSTATE_p;         /* '<S112>/Unit Delay' */
  real32_T UnitDelay_DSTATE_bk;        /* '<S113>/Unit Delay' */
  real32_T UnitDelay_DSTATE_b2;        /* '<S107>/Unit Delay' */
  real32_T UnitDelay_DSTATE_dv;        /* '<S116>/Unit Delay' */
  real32_T UnitDelay_DSTATE_ih;        /* '<S115>/Unit Delay' */
  real32_T UnitDelay_DSTATE_g;         /* '<S119>/Unit Delay' */
  real32_T UnitDelay_DSTATE_aa;        /* '<S120>/Unit Delay' */
  real32_T UnitDelay_DSTATE_ou;        /* '<S122>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m4;        /* '<S124>/Unit Delay' */
  real32_T UnitDelay_DSTATE_gr;        /* '<S125>/Unit Delay' */
  real32_T UnitDelay_DSTATE_l;         /* '<S127>/Unit Delay' */
  real32_T UnitDelay_DSTATE_bw;        /* '<S109>/Unit Delay' */
  real32_T UnitDelay_DSTATE_dr;        /* '<S111>/Unit Delay' */
  real32_T UnitDelay_DSTATE_oz;        /* '<S114>/Unit Delay' */
  real32_T UnitDelay_DSTATE_kc;        /* '<S118>/Unit Delay' */
  real32_T UnitDelay_DSTATE_f;         /* '<S121>/Unit Delay' */
  real32_T UnitDelay_DSTATE_i1;        /* '<S126>/Unit Delay' */
  real32_T UnitDelay_DSTATE_c;         /* '<S130>/Unit Delay' */
  real32_T UnitDelay_DSTATE_h;         /* '<S131>/Unit Delay' */
  real32_T UnitDelay_DSTATE_aab;       /* '<S132>/Unit Delay' */
  real32_T UnitDelay_DSTATE_lr;        /* '<S133>/Unit Delay' */
  real32_T UnitDelay_DSTATE_o4;        /* '<S134>/Unit Delay' */
  real32_T UnitDelay_DSTATE_dl;        /* '<S135>/Unit Delay' */
  real32_T UnitDelay_DSTATE_de;        /* '<S136>/Unit Delay' */
  real32_T UnitDelay_DSTATE_ol;        /* '<S137>/Unit Delay' */
  real32_T UnitDelay_DSTATE_fr;        /* '<S138>/Unit Delay' */
  real32_T UnitDelay_DSTATE_e;         /* '<S140>/Unit Delay' */
  real32_T UnitDelay_DSTATE_dp;        /* '<S141>/Unit Delay' */
  real32_T UnitDelay_DSTATE_n;         /* '<S142>/Unit Delay' */
  real32_T UnitDelay_DSTATE_n5;        /* '<S149>/Unit Delay' */
  uint16_T UnitDelay1_DSTATE_j;        /* '<S51>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_h;        /* '<S56>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_d;        /* '<S61>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_e;        /* '<S46>/Unit Delay1' */
  uint16_T UnitDelay_DSTATE_bd;        /* '<S25>/Unit Delay' */
  uint16_T UnitDelay1_DSTATE_h3;       /* '<S66>/Unit Delay1' */
  uint16_T UnitDelay1_DSTATE_eg;       /* '<S71>/Unit Delay1' */
  uint8_T UnitDelay5_DSTATE;           /* '<S7>/Unit Delay5' */
  uint8_T UnitDelay4_DSTATE;           /* '<S7>/Unit Delay4' */
  uint8_T UnitDelay3_DSTATE;           /* '<S7>/Unit Delay3' */
  uint8_T UnitDelay2_DSTATE_d;         /* '<S7>/Unit Delay2' */
  uint8_T UnitDelay_DSTATE_pc;         /* '<S36>/Unit Delay' */
  uint8_T UnitDelay2_DSTATE_j;         /* '<S36>/Unit Delay2' */
  uint8_T UnitDelay3_DSTATE_a;         /* '<S36>/Unit Delay3' */
  uint8_T UnitDelay1_DSTATE_p;         /* '<S7>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_fj;         /* '<S37>/Unit Delay' */
  uint8_T UnitDelay2_DSTATE_b;         /* '<S37>/Unit Delay2' */
  uint8_T UnitDelay3_DSTATE_b;         /* '<S37>/Unit Delay3' */
  uint8_T UnitDelay_DSTATE_dx;         /* '<S7>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_fu;         /* '<S38>/Unit Delay' */
  uint8_T UnitDelay2_DSTATE_jk;        /* '<S38>/Unit Delay2' */
  uint8_T UnitDelay3_DSTATE_h;         /* '<S38>/Unit Delay3' */
  uint8_T UnitDelay6_DSTATE;           /* '<S7>/Unit Delay6' */
  uint8_T UnitDelay_DSTATE_is;         /* '<S35>/Unit Delay' */
  uint8_T UnitDelay2_DSTATE_i;         /* '<S35>/Unit Delay2' */
  uint8_T UnitDelay3_DSTATE_k;         /* '<S35>/Unit Delay3' */
  uint8_T UnitDelay2_DSTATE_in;        /* '<S25>/Unit Delay2' */
  uint8_T UnitDelay2_DSTATE_h;         /* '<S39>/Unit Delay2' */
  uint8_T UnitDelay3_DSTATE_d;         /* '<S39>/Unit Delay3' */
  uint8_T UnitDelay2_DSTATE_m;         /* '<S40>/Unit Delay2' */
  uint8_T UnitDelay3_DSTATE_m;         /* '<S40>/Unit Delay3' */
  uint8_T UnitDelay_DSTATE_fm;         /* '<S128>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_dd;         /* '<S150>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_h0;         /* '<S146>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_lg;         /* '<S147>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_l4;         /* '<S152>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_n2;         /* '<S100>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_o1;         /* '<S97>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_ow;         /* '<S101>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_h3;         /* '<S117>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_e3;         /* '<S139>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_aw;         /* '<S151>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_n4;         /* '<S153>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_do;         /* '<S123>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_mn;         /* '<S129>/Unit Delay' */
  uint8_T DelayInput1_DSTATE;          /* '<S42>/Delay Input1' */
  uint8_T UnitDelay_DSTATE_pj;         /* '<S148>/Unit Delay' */
  uint8_T Output_DSTATE;               /* '<S2>/Output' */
  boolean_T UnitDelay1_DSTATE_k;       /* '<S12>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE_mi;      /* '<S12>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE_g;       /* '<S12>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE_c;       /* '<S12>/Unit Delay4' */
  boolean_T UnitDelay1_DSTATE_b;       /* '<S11>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE_js;      /* '<S11>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE_o;       /* '<S11>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE_n;       /* '<S11>/Unit Delay4' */
  boolean_T UnitDelay2_DSTATE_c;       /* '<S51>/Unit Delay2' */
  boolean_T UnitDelay1_DSTATE_h33;     /* '<S10>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE_f;       /* '<S10>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE_c;       /* '<S10>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE_p;       /* '<S10>/Unit Delay4' */
  boolean_T UnitDelay2_DSTATE_f5;      /* '<S56>/Unit Delay2' */
  boolean_T UnitDelay1_DSTATE_l;       /* '<S9>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE_jh;      /* '<S9>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE_df;      /* '<S9>/Unit Delay3' */
  boolean_T UnitDelay4_DSTATE_o;       /* '<S9>/Unit Delay4' */
  boolean_T UnitDelay2_DSTATE_o;       /* '<S61>/Unit Delay2' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S24>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE_ik;      /* '<S46>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE_oe;      /* '<S25>/Unit Delay3' */
  boolean_T UnitDelay2_DSTATE_n;       /* '<S66>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S71>/Unit Delay2' */
  boolean_T UnitDelay3_DSTATE_hm;      /* '<S128>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_ob;      /* '<S150>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_ks;      /* '<S146>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_j;       /* '<S147>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_bs;      /* '<S152>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_f;       /* '<S100>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_h2;      /* '<S97>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_cd;      /* '<S101>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_fx;      /* '<S143>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_c4;      /* '<S144>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_kq;      /* '<S145>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_hi;      /* '<S102>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_e;       /* '<S103>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_b4;      /* '<S104>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_dc;      /* '<S98>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_ju;      /* '<S108>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_p;       /* '<S117>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_cp;      /* '<S105>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_ml;      /* '<S99>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_dv;      /* '<S110>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_fg;      /* '<S139>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_j5;      /* '<S106>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_dq;      /* '<S112>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_i;       /* '<S113>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_iv;      /* '<S151>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_n;       /* '<S107>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_bv;      /* '<S116>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_gg;      /* '<S115>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_hy;      /* '<S153>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_nq;      /* '<S119>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_jm;      /* '<S120>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_bu;      /* '<S122>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_pm;      /* '<S123>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_du;      /* '<S124>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_eb;      /* '<S125>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_kr;      /* '<S127>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_ed;      /* '<S129>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_pl;      /* '<S109>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_l;       /* '<S111>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_gq;      /* '<S114>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_da;      /* '<S118>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_oc;      /* '<S121>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_fo;      /* '<S126>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_ka;      /* '<S130>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_b4y;     /* '<S131>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_kx;      /* '<S132>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_f1;      /* '<S133>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_aw;      /* '<S134>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_fr;      /* '<S135>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_fc;      /* '<S136>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_co;      /* '<S137>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_n5;      /* '<S138>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_cz;      /* '<S140>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_hig;     /* '<S141>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_hb;      /* '<S142>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_hc;      /* '<S148>/Unit Delay3' */
  boolean_T UnitDelay3_DSTATE_jv;      /* '<S149>/Unit Delay3' */
} DW_PubIfChassisHMI_MDL_f_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/* Invariant block signals for model 'PubIfChassisHMI_MDL' */
#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  const uint32_T HMI_SubModel_VERSION; /* '<S3>/Constant7' */
  const uint16_T HMI_SubModel_Number;  /* '<S3>/Constant8' */
  const boolean_T DataTypeConversion36;/* '<S7>/Data Type Conversion36' */
  const boolean_T IDC_L2_EmgyLightReq; /* '<S3>/Constant' */
} ConstB_PubIfChassisHMI_MDL_h_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_PubIfChassisHMI_MDL_T {
  const char_T **errorStatus;
};

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_PubIfChassisHMI_MDL_T rtm;
} MdlrefDW_PubIfChassisHMI_MDL_T;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint8_T HMI_Counter;            /* '<S2>/Output' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real32_T P_HMI_LDW_LKAWarnTime; /* Variable: P_HMI_LDW_LKAWarnTime
                                        * Referenced by: '<S8>/Constant'
                                        */
extern real32_T P_HMI_ObjectTypeFilter;/* Variable: P_HMI_ObjectTypeFilter
                                        * Referenced by:
                                        *   '<S44>/Constant'
                                        *   '<S49>/Constant'
                                        *   '<S54>/Constant'
                                        *   '<S59>/Constant'
                                        *   '<S64>/Constant'
                                        *   '<S69>/Constant'
                                        */
extern void PubIfChassisHMI_MDL_Init(void);
extern void PubIfChassisHMI_MDL_Reset(void);
extern void PubIfChassisHMI_MDL_Update(const VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL,
  const VSM_HMI_BUS *rtu_VSM_HMI, const PLAN_HMI_BUS *rtu_PLAN_HMI_BUS, const
  TOS_ACCP0_BUS *rtu_TOS_ACCP0, const TOS_ACCP1_BUS *rtu_TOS_ACCP1, const
  TOS_ACCP2_BUS *rtu_TOS_ACCP2, const TOS_ACCP3_BUS *rtu_TOS_ACCP3, const
  TOS_ACCP4_BUS *rtu_TOS_ACCP4, const TOS_ACCP5_BUS *rtu_TOS_ACCP5, const
  boolean_T *rtu_standstill);
extern void PubIfChassisHMI_MDL(const VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL, const
  VSM_HMI_BUS *rtu_VSM_HMI, const VCAN_HUT_MSG_BUS *rtu_HMI_VCAN_HUT, const
  DMON_SENS_ERR_BUS *rtu_DMON_SENS_ERR, const PLAN_HMI_BUS *rtu_PLAN_HMI_BUS,
  const TOS_ACCP0_BUS *rtu_TOS_ACCP0, const TOS_ACCP1_BUS *rtu_TOS_ACCP1, const
  TOS_ACCP2_BUS *rtu_TOS_ACCP2, const TOS_ACCP3_BUS *rtu_TOS_ACCP3, const
  TOS_ACCP4_BUS *rtu_TOS_ACCP4, const TOS_ACCP5_BUS *rtu_TOS_ACCP5, const
  RFM_LINE_BUS *rtu_RFM_LINE_L1, const RFM_LINE_BUS *rtu_RFM_LINE_R1, const
  RFM_LINE_BUS *rtu_RFM_LINE_L2, const RFM_LINE_BUS *rtu_RFM_LINE_R2, const
  RFM_LINE_BUS *rtu_RFM_LINE_LB, const RFM_LINE_BUS *rtu_RFM_LINE_RB, const
  EHRV2_ROAD_INFO_BUS *rtu_EHRV2_ROAD_INFO, const RFM_ROAD_BUS *rtu_RFM_ROAD,
  const RFM_INTERSEC_ALERT_BUS *rtu_RFM_INTERSEC_ALERT, const uint8_T
  *rtu_EHRV2_HutHandshake, const EHRV2_HDR_BUS *rtu_EHRV2_HDR, const uint8_T
  *rtu_DriverSts, const boolean_T *rtu_standstill, HMI_IFC_FD2_BUS
  *rty_HMI_IFC_FD2, uint8_T *rty_HMI_IFCVibrationWarning, boolean_T
  *rty_HMI_ESSErrSts, boolean_T *rty_HMI_AESErrSts, HMI_ACC_FD2_BUS
  *rty_HMI_ACC_FD2, HMI_ACC_FD4_BUS *rty_HMI_ACC_FD4, HMI_ACC_FD1_BUS
  *rty_HMI_ACC_FD1, HMI_IFC_FD5_BUS *rty_HMI_IFC_FD5, HMI_IFC_FD6_BUS
  *rty_HMI_IFC_FD6, HMI_IFC_FD3_BUS *rty_HMI_IFC_FD3);

/* Model reference registration function */
extern void PubIfChassisHMI_MDL_initialize(const char_T **rt_errorStatus);

#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

extern void PubIfChassisHMI_MDL_MATLABFunction4(real32_T rtu_AngRaw,
  B_MATLABFunction4_PubIfChassisHMI_MDL_T *localB);
extern void PubIfChassisHMI_MDL_IfActionSubsystem(uint16_T rtu_In1, uint16_T
  *rty_Out1, B_IfActionSubsystem_PubIfChassisHMI_MDL_T *localB);
extern void PubIfChassisHMI_MDL_IfActionSubsystem1(uint16_T *rty_Out1);
extern void PubIfChassisHMI_MDL_MATLABFunction1(const uint8_T *rtu_fType,
  B_MATLABFunction1_PubIfChassisHMI_MDL_T *localB);
extern void PubIfChassisHMI_MDL_MATLABFunction7(const uint8_T *rtu_ESSSts,
  boolean_T *rty_Error, B_MATLABFunction7_PubIfChassisHMI_MDL_T *localB);
extern void PubIfChassisHMI_MDL_SwitchCaseActionSubsystem1(real32_T rtu_In1,
  real32_T *rty_Out1, uint8_T *rty_Out1_j);
extern void PubIfChassisHMI_MDL_SwitchCaseActionSubsystem4(real32_T *rty_Out1,
  uint8_T *rty_Out1_a);
extern void PubIfChassisHMI_MDL_MATLABFunction1_e(const boolean_T
  *rtu_standstill, uint8_T rtu_in, boolean_T rtu_update, uint8_T rtu_inrecorder,
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T *localB);
extern void PubIfChassisHMI_MDL_MATLABFunction1_k(const boolean_T
  *rtu_standstill, real32_T rtu_in, boolean_T rtu_update, real32_T
  rtu_inrecorder, B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T *localB);
extern void PubIfChassisHMI_MDL_MATLABFunction1_i(const boolean_T
  *rtu_standstill, const uint8_T *rtu_in, boolean_T rtu_update, uint8_T
  rtu_inrecorder, B_MATLABFunction1_PubIfChassisHMI_MDL_e_T *localB);

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

extern MdlrefDW_PubIfChassisHMI_MDL_T PubIfChassisHMI_MDL_MdlrefDW;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_PubIfChassisHMI_MDL_c_T PubIfChassisHMI_MDL_B;

/* Block states (default storage) */
extern DW_PubIfChassisHMI_MDL_f_T PubIfChassisHMI_MDL_DW;

#endif                                /*PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PubIfChassisHMI_MDL'
 * '<S1>'   : 'PubIfChassisHMI_MDL/Subsystem'
 * '<S2>'   : 'PubIfChassisHMI_MDL/Subsystem/Counter Limited'
 * '<S3>'   : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12'
 * '<S4>'   : 'PubIfChassisHMI_MDL/Subsystem/MATLAB Function1'
 * '<S5>'   : 'PubIfChassisHMI_MDL/Subsystem/Counter Limited/Increment Real World'
 * '<S6>'   : 'PubIfChassisHMI_MDL/Subsystem/Counter Limited/Wrap To Zero'
 * '<S7>'   : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1'
 * '<S8>'   : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1'
 * '<S9>'   : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/100ms1'
 * '<S10>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/100ms2'
 * '<S11>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/100ms3'
 * '<S12>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/100ms4'
 * '<S13>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant'
 * '<S14>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant1'
 * '<S15>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant10'
 * '<S16>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant2'
 * '<S17>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant3'
 * '<S18>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant4'
 * '<S19>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant5'
 * '<S20>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant6'
 * '<S21>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant7'
 * '<S22>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant8'
 * '<S23>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Compare To Constant9'
 * '<S24>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Detect Increase23'
 * '<S25>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Enlong3s'
 * '<S26>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function'
 * '<S27>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function1'
 * '<S28>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function2'
 * '<S29>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function4'
 * '<S30>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function5'
 * '<S31>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function6'
 * '<S32>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function7'
 * '<S33>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function8'
 * '<S34>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/MATLAB Function9'
 * '<S35>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem'
 * '<S36>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem1'
 * '<S37>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem2'
 * '<S38>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem3'
 * '<S39>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem4'
 * '<S40>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem5'
 * '<S41>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Enlong3s/Compare To Constant'
 * '<S42>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Enlong3s/Detect Increase3'
 * '<S43>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Enlong3s/MATLAB Function'
 * '<S44>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem/Compare To Constant11'
 * '<S45>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem/Compare To Constant2'
 * '<S46>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem/TrueDurationTime5'
 * '<S47>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem/TrueDurationTime5/If Action Subsystem'
 * '<S48>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem/TrueDurationTime5/If Action Subsystem1'
 * '<S49>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem1/Compare To Constant11'
 * '<S50>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem1/Compare To Constant2'
 * '<S51>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem1/TrueDurationTime5'
 * '<S52>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem1/TrueDurationTime5/If Action Subsystem'
 * '<S53>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem1/TrueDurationTime5/If Action Subsystem1'
 * '<S54>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem2/Compare To Constant11'
 * '<S55>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem2/Compare To Constant2'
 * '<S56>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem2/TrueDurationTime5'
 * '<S57>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem2/TrueDurationTime5/If Action Subsystem'
 * '<S58>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem2/TrueDurationTime5/If Action Subsystem1'
 * '<S59>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem3/Compare To Constant11'
 * '<S60>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem3/Compare To Constant2'
 * '<S61>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem3/TrueDurationTime5'
 * '<S62>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem3/TrueDurationTime5/If Action Subsystem'
 * '<S63>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem3/TrueDurationTime5/If Action Subsystem1'
 * '<S64>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem4/Compare To Constant11'
 * '<S65>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem4/Compare To Constant2'
 * '<S66>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem4/TrueDurationTime5'
 * '<S67>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem4/TrueDurationTime5/If Action Subsystem'
 * '<S68>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem4/TrueDurationTime5/If Action Subsystem1'
 * '<S69>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem5/Compare To Constant11'
 * '<S70>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem5/Compare To Constant2'
 * '<S71>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem5/TrueDurationTime5'
 * '<S72>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem5/TrueDurationTime5/If Action Subsystem'
 * '<S73>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/HWA//ACC//TJA_Signal1/Subsystem5/TrueDurationTime5/If Action Subsystem1'
 * '<S74>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant'
 * '<S75>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant1'
 * '<S76>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant2'
 * '<S77>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant3'
 * '<S78>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant4'
 * '<S79>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant5'
 * '<S80>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant6'
 * '<S81>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant7'
 * '<S82>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Compare To Constant8'
 * '<S83>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function'
 * '<S84>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function1'
 * '<S85>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function10'
 * '<S86>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function11'
 * '<S87>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function12'
 * '<S88>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function13'
 * '<S89>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function3'
 * '<S90>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function4'
 * '<S91>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function5'
 * '<S92>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function7'
 * '<S93>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function8'
 * '<S94>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/MATLAB Function9'
 * '<S95>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem'
 * '<S96>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1'
 * '<S97>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem10'
 * '<S98>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem11'
 * '<S99>'  : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem12'
 * '<S100>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem13'
 * '<S101>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem14'
 * '<S102>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem15'
 * '<S103>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem16'
 * '<S104>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem17'
 * '<S105>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem18'
 * '<S106>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem19'
 * '<S107>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem20'
 * '<S108>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem21'
 * '<S109>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem22'
 * '<S110>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem23'
 * '<S111>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem24'
 * '<S112>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem25'
 * '<S113>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem26'
 * '<S114>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem27'
 * '<S115>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem28'
 * '<S116>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem29'
 * '<S117>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem3'
 * '<S118>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem30'
 * '<S119>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem31'
 * '<S120>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem32'
 * '<S121>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem33'
 * '<S122>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem34'
 * '<S123>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem35'
 * '<S124>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem36'
 * '<S125>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem37'
 * '<S126>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem38'
 * '<S127>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem39'
 * '<S128>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem4'
 * '<S129>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem40'
 * '<S130>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem41'
 * '<S131>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem42'
 * '<S132>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem43'
 * '<S133>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem44'
 * '<S134>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem45'
 * '<S135>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem46'
 * '<S136>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem47'
 * '<S137>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem48'
 * '<S138>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem49'
 * '<S139>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem5'
 * '<S140>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem50'
 * '<S141>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem51'
 * '<S142>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem52'
 * '<S143>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem53'
 * '<S144>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem54'
 * '<S145>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem55'
 * '<S146>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem56'
 * '<S147>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem57'
 * '<S148>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem58'
 * '<S149>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem59'
 * '<S150>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem6'
 * '<S151>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem7'
 * '<S152>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem8'
 * '<S153>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem9'
 * '<S154>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant'
 * '<S155>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant1'
 * '<S156>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant10'
 * '<S157>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant11'
 * '<S158>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant12'
 * '<S159>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant2'
 * '<S160>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant23'
 * '<S161>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant3'
 * '<S162>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant37'
 * '<S163>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant38'
 * '<S164>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant4'
 * '<S165>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant5'
 * '<S166>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant6'
 * '<S167>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant7'
 * '<S168>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant8'
 * '<S169>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Constant9'
 * '<S170>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Zero17'
 * '<S171>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Zero2'
 * '<S172>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Zero23'
 * '<S173>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Compare To Zero26'
 * '<S174>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Switch Case Action Subsystem'
 * '<S175>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Switch Case Action Subsystem1'
 * '<S176>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Switch Case Action Subsystem2'
 * '<S177>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Switch Case Action Subsystem3'
 * '<S178>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Switch Case Action Subsystem4'
 * '<S179>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem/Switch Case Action Subsystem5'
 * '<S180>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant'
 * '<S181>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant1'
 * '<S182>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant10'
 * '<S183>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant11'
 * '<S184>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant12'
 * '<S185>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant13'
 * '<S186>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant14'
 * '<S187>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant2'
 * '<S188>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant23'
 * '<S189>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant3'
 * '<S190>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant37'
 * '<S191>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant38'
 * '<S192>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant4'
 * '<S193>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant5'
 * '<S194>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant6'
 * '<S195>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant7'
 * '<S196>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant8'
 * '<S197>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Constant9'
 * '<S198>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Zero17'
 * '<S199>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Zero2'
 * '<S200>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Zero23'
 * '<S201>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Compare To Zero26'
 * '<S202>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/MATLAB Function2'
 * '<S203>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/MATLAB Function3'
 * '<S204>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Switch Case Action Subsystem'
 * '<S205>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Switch Case Action Subsystem1'
 * '<S206>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Switch Case Action Subsystem2'
 * '<S207>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Switch Case Action Subsystem3'
 * '<S208>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Switch Case Action Subsystem4'
 * '<S209>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem1/Switch Case Action Subsystem5'
 * '<S210>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem10/Compare To Constant10'
 * '<S211>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem10/Compare To Constant9'
 * '<S212>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem10/MATLAB Function1'
 * '<S213>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem11/Compare To Constant10'
 * '<S214>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem11/Compare To Constant9'
 * '<S215>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem11/MATLAB Function1'
 * '<S216>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem12/Compare To Constant10'
 * '<S217>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem12/Compare To Constant9'
 * '<S218>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem12/MATLAB Function1'
 * '<S219>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem13/Compare To Constant10'
 * '<S220>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem13/Compare To Constant9'
 * '<S221>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem13/MATLAB Function1'
 * '<S222>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem14/Compare To Constant10'
 * '<S223>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem14/Compare To Constant9'
 * '<S224>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem14/MATLAB Function1'
 * '<S225>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem15/Compare To Constant10'
 * '<S226>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem15/Compare To Constant9'
 * '<S227>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem15/MATLAB Function1'
 * '<S228>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem16/Compare To Constant10'
 * '<S229>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem16/Compare To Constant9'
 * '<S230>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem16/MATLAB Function1'
 * '<S231>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem17/Compare To Constant10'
 * '<S232>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem17/Compare To Constant9'
 * '<S233>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem17/MATLAB Function1'
 * '<S234>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem18/Compare To Constant10'
 * '<S235>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem18/Compare To Constant9'
 * '<S236>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem18/MATLAB Function1'
 * '<S237>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem19/Compare To Constant10'
 * '<S238>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem19/Compare To Constant9'
 * '<S239>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem19/MATLAB Function1'
 * '<S240>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem20/Compare To Constant10'
 * '<S241>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem20/Compare To Constant9'
 * '<S242>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem20/MATLAB Function1'
 * '<S243>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem21/Compare To Constant10'
 * '<S244>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem21/Compare To Constant9'
 * '<S245>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem21/MATLAB Function1'
 * '<S246>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem22/Compare To Constant10'
 * '<S247>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem22/Compare To Constant9'
 * '<S248>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem22/MATLAB Function1'
 * '<S249>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem23/Compare To Constant10'
 * '<S250>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem23/Compare To Constant9'
 * '<S251>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem23/MATLAB Function1'
 * '<S252>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem24/Compare To Constant10'
 * '<S253>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem24/Compare To Constant9'
 * '<S254>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem24/MATLAB Function1'
 * '<S255>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem25/Compare To Constant10'
 * '<S256>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem25/Compare To Constant9'
 * '<S257>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem25/MATLAB Function1'
 * '<S258>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem26/Compare To Constant10'
 * '<S259>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem26/Compare To Constant9'
 * '<S260>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem26/MATLAB Function1'
 * '<S261>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem27/Compare To Constant10'
 * '<S262>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem27/Compare To Constant9'
 * '<S263>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem27/MATLAB Function1'
 * '<S264>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem28/Compare To Constant10'
 * '<S265>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem28/Compare To Constant9'
 * '<S266>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem28/MATLAB Function1'
 * '<S267>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem29/Compare To Constant10'
 * '<S268>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem29/Compare To Constant9'
 * '<S269>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem29/MATLAB Function1'
 * '<S270>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem3/Compare To Constant10'
 * '<S271>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem3/Compare To Constant9'
 * '<S272>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem3/MATLAB Function1'
 * '<S273>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem30/Compare To Constant10'
 * '<S274>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem30/Compare To Constant9'
 * '<S275>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem30/MATLAB Function1'
 * '<S276>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem31/Compare To Constant10'
 * '<S277>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem31/Compare To Constant9'
 * '<S278>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem31/MATLAB Function1'
 * '<S279>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem32/Compare To Constant10'
 * '<S280>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem32/Compare To Constant9'
 * '<S281>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem32/MATLAB Function1'
 * '<S282>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem33/Compare To Constant10'
 * '<S283>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem33/Compare To Constant9'
 * '<S284>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem33/MATLAB Function1'
 * '<S285>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem34/Compare To Constant10'
 * '<S286>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem34/Compare To Constant9'
 * '<S287>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem34/MATLAB Function1'
 * '<S288>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem35/Compare To Constant10'
 * '<S289>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem35/Compare To Constant9'
 * '<S290>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem35/MATLAB Function1'
 * '<S291>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem36/Compare To Constant10'
 * '<S292>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem36/Compare To Constant9'
 * '<S293>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem36/MATLAB Function1'
 * '<S294>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem37/Compare To Constant10'
 * '<S295>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem37/Compare To Constant9'
 * '<S296>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem37/MATLAB Function1'
 * '<S297>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem38/Compare To Constant10'
 * '<S298>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem38/Compare To Constant9'
 * '<S299>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem38/MATLAB Function1'
 * '<S300>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem39/Compare To Constant10'
 * '<S301>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem39/Compare To Constant9'
 * '<S302>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem39/MATLAB Function1'
 * '<S303>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem4/Compare To Constant10'
 * '<S304>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem4/Compare To Constant9'
 * '<S305>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem4/MATLAB Function1'
 * '<S306>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem40/Compare To Constant10'
 * '<S307>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem40/Compare To Constant9'
 * '<S308>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem40/MATLAB Function1'
 * '<S309>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem41/Compare To Constant10'
 * '<S310>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem41/Compare To Constant9'
 * '<S311>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem41/MATLAB Function1'
 * '<S312>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem42/Compare To Constant10'
 * '<S313>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem42/Compare To Constant9'
 * '<S314>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem42/MATLAB Function1'
 * '<S315>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem43/Compare To Constant10'
 * '<S316>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem43/Compare To Constant9'
 * '<S317>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem43/MATLAB Function1'
 * '<S318>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem44/Compare To Constant10'
 * '<S319>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem44/Compare To Constant9'
 * '<S320>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem44/MATLAB Function1'
 * '<S321>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem45/Compare To Constant10'
 * '<S322>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem45/Compare To Constant9'
 * '<S323>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem45/MATLAB Function1'
 * '<S324>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem46/Compare To Constant10'
 * '<S325>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem46/Compare To Constant9'
 * '<S326>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem46/MATLAB Function1'
 * '<S327>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem47/Compare To Constant10'
 * '<S328>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem47/Compare To Constant9'
 * '<S329>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem47/MATLAB Function1'
 * '<S330>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem48/Compare To Constant10'
 * '<S331>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem48/Compare To Constant9'
 * '<S332>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem48/MATLAB Function1'
 * '<S333>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem49/Compare To Constant10'
 * '<S334>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem49/Compare To Constant9'
 * '<S335>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem49/MATLAB Function1'
 * '<S336>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem5/Compare To Constant10'
 * '<S337>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem5/Compare To Constant9'
 * '<S338>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem5/MATLAB Function1'
 * '<S339>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem50/Compare To Constant10'
 * '<S340>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem50/Compare To Constant9'
 * '<S341>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem50/MATLAB Function1'
 * '<S342>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem51/Compare To Constant10'
 * '<S343>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem51/Compare To Constant9'
 * '<S344>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem51/MATLAB Function1'
 * '<S345>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem52/Compare To Constant10'
 * '<S346>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem52/Compare To Constant9'
 * '<S347>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem52/MATLAB Function1'
 * '<S348>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem53/Compare To Constant10'
 * '<S349>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem53/Compare To Constant9'
 * '<S350>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem53/MATLAB Function1'
 * '<S351>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem54/Compare To Constant10'
 * '<S352>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem54/Compare To Constant9'
 * '<S353>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem54/MATLAB Function1'
 * '<S354>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem55/Compare To Constant10'
 * '<S355>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem55/Compare To Constant9'
 * '<S356>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem55/MATLAB Function1'
 * '<S357>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem56/Compare To Constant10'
 * '<S358>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem56/Compare To Constant9'
 * '<S359>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem56/MATLAB Function1'
 * '<S360>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem57/Compare To Constant10'
 * '<S361>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem57/Compare To Constant9'
 * '<S362>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem57/MATLAB Function1'
 * '<S363>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem58/Compare To Constant10'
 * '<S364>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem58/Compare To Constant9'
 * '<S365>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem58/MATLAB Function1'
 * '<S366>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem59/Compare To Constant10'
 * '<S367>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem59/Compare To Constant9'
 * '<S368>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem59/MATLAB Function1'
 * '<S369>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem6/Compare To Constant10'
 * '<S370>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem6/Compare To Constant9'
 * '<S371>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem6/MATLAB Function1'
 * '<S372>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem7/Compare To Constant10'
 * '<S373>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem7/Compare To Constant9'
 * '<S374>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem7/MATLAB Function1'
 * '<S375>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem8/Compare To Constant10'
 * '<S376>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem8/Compare To Constant9'
 * '<S377>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem8/MATLAB Function1'
 * '<S378>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem9/Compare To Constant10'
 * '<S379>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem9/Compare To Constant9'
 * '<S380>' : 'PubIfChassisHMI_MDL/Subsystem/HMI2.12/IFC_Signal1/Subsystem9/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_PubIfChassisHMI_MDL_h_ */
