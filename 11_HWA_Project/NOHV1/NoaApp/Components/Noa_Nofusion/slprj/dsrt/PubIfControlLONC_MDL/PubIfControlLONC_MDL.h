/*
 * Code generation for system model 'PubIfControlLONC_MDL'
 * For more details, see corresponding source file PubIfControlLONC_MDL.c
 *
 */

#ifndef RTW_HEADER_PubIfControlLONC_MDL_h_
#define RTW_HEADER_PubIfControlLONC_MDL_h_
#include <math.h>
#include <string.h>
#ifndef PubIfControlLONC_MDL_COMMON_INCLUDES_
#define PubIfControlLONC_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                               /* PubIfControlLONC_MDL_COMMON_INCLUDES_ */

#include "PubIfControlLONC_MDL_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for model 'PubIfControlLONC_MDL' */
#ifndef PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Product1;                     /* '<S15>/Product1' */
  real_T VlcAxCtrlDevTresAddDC2EC;     /* '<S18>/VlcAxCtrlDevTresAddDC2EC' */
  real_T Sum1;                         /* '<S18>/Sum1' */
  real_T Sum7;                         /* '<S18>/Sum7' */
  real32_T AxTarUplimit;               /* '<S6>/AxTarUplimit' */
  real32_T UnitDelay;                  /* '<S16>/Unit Delay' */
  real32_T DataTypeConversion;         /* '<S6>/Data Type Conversion' */
  real32_T MinMax1;                    /* '<S6>/MinMax1' */
  real32_T Gain1;                      /* '<S6>/Gain1' */
  real32_T Saturation1;                /* '<S6>/Saturation1' */
  real32_T Product5;                   /* '<S6>/Product5' */
  real32_T F_wind;                     /* '<S24>/Product3' */
  real32_T f;                          /* '<S24>/f' */
  real32_T Product;                    /* '<S6>/Product' */
  real32_T TrigonometricFunction;      /* '<S6>/Trigonometric Function' */
  real32_T TrigonometricFunction_l;    /* '<S24>/Trigonometric Function' */
  real32_T F_f;                        /* '<S24>/Product2' */
  real32_T TrigonometricFunction1;     /* '<S24>/Trigonometric Function1' */
  real32_T F_slope;                    /* '<S24>/Product4' */
  real32_T UnitDelay1;                 /* '<S6>/Unit Delay1' */
  real32_T Product1_b;                 /* '<S9>/Product1' */
  real32_T UnitDelay1_b;               /* '<S10>/Unit Delay1' */
  real32_T UnitDelay2;                 /* '<S10>/Unit Delay2' */
  real32_T Gain1_d;                    /* '<S10>/Gain1' */
  real32_T Gain2;                      /* '<S10>/Gain2' */
  real32_T Gain6;                      /* '<S10>/Gain6' */
  real32_T PI_Factor;                  /* '<S10>/PI_Factor ' */
  real32_T UnitDelay3;                 /* '<S14>/Unit Delay3' */
  real32_T Add3;                       /* '<S14>/Add3' */
  real32_T Gain3;                      /* '<S14>/Gain3' */
  real32_T UnitDelay2_e;               /* '<S14>/Unit Delay2' */
  real32_T DataTypeConversion_f;       /* '<S14>/Data Type Conversion' */
  real32_T Add4;                       /* '<S14>/Add4' */
  real32_T Product3;                   /* '<S14>/Product3' */
  real32_T Add5;                       /* '<S14>/Add5' */
  real32_T Merge;                      /* '<S14>/Merge' */
  real32_T CoefKiDiffDtEnlarge;        /* '<S14>/CoefKiDiffDtEnlarge' */
  real32_T P_LongCtrl_VLCcoefKiEnlargeADiffChar;
                              /* '<S14>/P_LongCtrl_VLCcoefKiEnlargeADiffChar' */
  real32_T CoefKiEnable;               /* '<S14>/CoefKiEnable' */
  real32_T MinMax1_f;                  /* '<S14>/MinMax1' */
  real32_T Gain1_b;                    /* '<S14>/Gain1' */
  real32_T Product5_b;                 /* '<S14>/Product5' */
  real32_T UnitDelay1_e;               /* '<S14>/Unit Delay1' */
  real32_T P_VlcAxCtrlDevDeadZoneChar; /* '<S14>/P_VlcAxCtrlDevDeadZoneChar' */
  real32_T Switch;                     /* '<S14>/Switch' */
  real32_T Product1_a;                 /* '<S14>/Product1' */
  real32_T UnitDelay5;                 /* '<S6>/Unit Delay5' */
  real32_T Sum8;                       /* '<S6>/Sum8' */
  real32_T Gain2_m;                    /* '<S6>/Gain2' */
  real32_T UnitDelay_n;                /* '<S12>/Unit Delay' */
  real32_T Sum6;                       /* '<S12>/Sum6' */
  real32_T Product6;                   /* '<S12>/Product6' */
  real32_T Sum7_i;                     /* '<S12>/Sum7' */
  real32_T Abs;                        /* '<S14>/Abs' */
  real32_T uDLookupTable;              /* '<S14>/1-D Lookup Table' */
  real32_T UnitDelay_e;                /* '<S14>/Unit Delay' */
  real32_T I;                          /* '<S14>/I' */
  real32_T Switch1[7];                 /* '<S14>/Switch1' */
  real32_T P_VlcAXCDeadZoneProp;       /* '<S14>/P_VlcAXCDeadZoneProp' */
  real32_T P;                          /* '<S14>/P' */
  real32_T Add1;                       /* '<S14>/Add1' */
  real32_T Product7;                   /* '<S14>/Product7' */
  real32_T Product1_m;                 /* '<S10>/Product1' */
  real32_T Ma_Ratio;                   /* '<S6>/Ma_Ratio' */
  real32_T Gain2_h;                    /* '<S24>/Gain2' */
  real32_T Product5_d;                 /* '<S24>/Product5' */
  real32_T UnitDelay_i;                /* '<S13>/Unit Delay' */
  real32_T Sum6_a;                     /* '<S13>/Sum6' */
  real32_T Product6_k;                 /* '<S13>/Product6' */
  real32_T Sum7_b;                     /* '<S13>/Sum7' */
  real32_T Efficiency;                 /* '<S24>/Efficiency' */
  real32_T Gain;                       /* '<S24>/Gain' */
  real32_T Product_h;                  /* '<S24>/Product' */
  real32_T F_drive;                    /* '<S24>/Product1' */
  real32_T Sum1_l;                     /* '<S24>/Sum1' */
  real32_T Abs1;                       /* '<S23>/Abs1' */
  real32_T FilterTime;                 /* '<S23>/FilterTime' */
  real32_T Product4;                   /* '<S23>/Product4' */
  real32_T Abs4;                       /* '<S19>/Abs4' */
  real32_T UnitDelay1_j;               /* '<S52>/Unit Delay1' */
  real32_T UnitDelay_ir;               /* '<S52>/Unit Delay' */
  real32_T UnitDelay_k;                /* '<S23>/Unit Delay' */
  real32_T Switch1_e;                  /* '<S23>/Switch1' */
  real32_T Switch_m;                   /* '<S56>/Switch' */
  real32_T Switch2;                    /* '<S56>/Switch2' */
  real32_T Sum11;                      /* '<S23>/Sum11' */
  real32_T Product3_a;                 /* '<S23>/Product3' */
  real32_T UnitDelay_n4;               /* '<S22>/Unit Delay' */
  real32_T Sum4;                       /* '<S22>/Sum4' */
  real32_T UnitDelay_e0;               /* '<S55>/Unit Delay' */
  real32_T Sum9;                       /* '<S55>/Sum9' */
  real32_T Product8;                   /* '<S55>/Product8' */
  real32_T Sum14;                      /* '<S55>/Sum14' */
  real32_T Abs_n;                      /* '<S22>/Abs' */
  real32_T tfxvCvFilter1;              /* '<S22>/tfxvCvFilter1 ' */
  real32_T Product_i;                  /* '<S22>/Product' */
  real32_T Abs1_a;                     /* '<S22>/Abs1' */
  real32_T tfxvCvFilter2;              /* '<S22>/tfxvCvFilter2' */
  real32_T Product1_k;                 /* '<S22>/Product1' */
  real32_T MinMax;                     /* '<S22>/MinMax' */
  real32_T Gain2_d;                    /* '<S11>/Gain2' */
  real32_T Product5_c;                 /* '<S11>/Product5' */
  real32_T Product1_j;                 /* '<S11>/Product1' */
  real32_T FilterTime_m;               /* '<S31>/FilterTime' */
  real32_T Product2;                   /* '<S31>/Product2' */
  real32_T UnitDelay_o;                /* '<S31>/Unit Delay' */
  real32_T Sum6_o;                     /* '<S31>/Sum6' */
  real32_T Product6_h;                 /* '<S31>/Product6' */
  real32_T Sum7_g;                     /* '<S31>/Sum7' */
  real32_T Fxv;                        /* '<S11>/Add1' */
  real32_T UnitDelay_b;                /* '<S30>/Unit Delay' */
  real32_T Add2;                       /* '<S30>/Add2' */
  real32_T Product4_b;                 /* '<S30>/Product4' */
  real32_T Add3_c;                     /* '<S30>/Add3' */
  real32_T Add2_d;                     /* '<S11>/Add2' */
  real32_T Product2_a;                 /* '<S11>/Product2' */
  real32_T Product3_k;                 /* '<S11>/Product3' */
  real32_T UnitDelay_oy;               /* '<S6>/Unit Delay' */
  real32_T Add4_h;                     /* '<S11>/Add4' */
  real32_T UnitDelay5_h;               /* '<S10>/Unit Delay5' */
  real32_T Sum6_p;                     /* '<S10>/Sum6' */
  real32_T UnitDelay_e5;               /* '<S28>/Unit Delay' */
  real32_T Sum9_e;                     /* '<S28>/Sum9' */
  real32_T Product8_p;                 /* '<S28>/Product8' */
  real32_T Sum14_m;                    /* '<S28>/Sum14' */
  real32_T UnitDelay3_f;               /* '<S10>/Unit Delay3' */
  real32_T FxIncDelta;                 /* '<S10>/Product5' */
  real32_T P_VlcdFxLimPosChar;         /* '<S10>/P_VlcdFxLimPosChar ' */
  real32_T MinMax_l;                   /* '<S10>/MinMax' */
  real32_T FxDecDelta;                 /* '<S10>/Product6' */
  real32_T MinMax7;                    /* '<S10>/MinMax7' */
  real32_T Product8_l;                 /* '<S10>/Product8' */
  real32_T Product3_h;                 /* '<S10>/Product3' */
  real32_T MinMax1_m;                  /* '<S10>/MinMax1' */
  real32_T Product7_l;                 /* '<S10>/Product7' */
  real32_T Product2_p;                 /* '<S10>/Product2' */
  real32_T Gain1_a;                    /* '<S11>/Gain1' */
  real32_T Add3_n;                     /* '<S11>/Add3' */
  real32_T UnitDelay4;                 /* '<S6>/Unit Delay4' */
  real32_T Add2_c;                     /* '<S17>/Add2' */
  real32_T Switch2_l;                  /* '<S17>/Switch2' */
  real32_T UnitDelay1_f;               /* '<S17>/Unit Delay1' */
  real32_T Add3_m;                     /* '<S17>/Add3' */
  real32_T Saturation;                 /* '<S17>/Saturation' */
  real32_T Gain2_hq;                   /* '<S25>/Gain2' */
  real32_T Product5_i;                 /* '<S25>/Product5' */
  real32_T uDLookupTable_o;            /* '<S25>/1-D Lookup Table' */
  real32_T Product7_c;                 /* '<S25>/Product7' */
  real32_T Efficiency_p;               /* '<S25>/Efficiency' */
  real32_T Gain_g;                     /* '<S25>/Gain' */
  real32_T Product_a;                  /* '<S25>/Product' */
  real32_T F_drive_d;                  /* '<S25>/Product1' */
  real32_T F_wind_m;                   /* '<S25>/Product3' */
  real32_T f_p;                        /* '<S25>/f' */
  real32_T TrigonometricFunction_e;    /* '<S25>/Trigonometric Function' */
  real32_T F_f_c;                      /* '<S25>/Product2' */
  real32_T TrigonometricFunction1_f;   /* '<S25>/Trigonometric Function1' */
  real32_T F_slope_k;                  /* '<S25>/Product4' */
  real32_T Sum1_i;                     /* '<S25>/Sum1' */
  real32_T DataTypeConversion7;        /* '<S17>/Data Type Conversion7' */
  real32_T Sum1_h;                     /* '<S17>/Sum1' */
  real32_T UnitDelay_c;                /* '<S17>/Unit Delay' */
  real32_T Sum3;                       /* '<S17>/Sum3' */
  real32_T Gain1_as;                   /* '<S17>/Gain1' */
  real32_T Gain2_f;                    /* '<S17>/Gain2' */
  real32_T UnitDelay_g;                /* '<S41>/Unit Delay' */
  real32_T Sum4_p;                     /* '<S41>/Sum4' */
  real32_T Product1_jo;                /* '<S41>/Product1' */
  real32_T Sum5;                       /* '<S41>/Sum5' */
  real32_T P_LongCtrl_VLCAxvTracMinDC1FullFill;
                               /* '<S17>/P_LongCtrl_VLCAxvTracMinDC1FullFill' */
  real32_T Sum8_a;                     /* '<S17>/Sum8' */
  real32_T P_LongCtrl_VLCAxCtrlDevTresAddEC2DCChar;
                           /* '<S17>/P_LongCtrl_VLCAxCtrlDevTresAddEC2DCChar' */
  real32_T VlcAxCtrlDevThresAddEC2DC1; /* '<S17>/VlcAxCtrlDevThresAddEC2DC1' */
  real32_T Product_n;                  /* '<S17>/Product' */
  real32_T Sum2;                       /* '<S17>/Sum2' */
  real32_T Sum4_o;                     /* '<S17>/Sum4' */
  real32_T Sum5_b;                     /* '<S17>/Sum5' */
  real32_T Sum6_j;                     /* '<S17>/Sum6' */
  real32_T Sum4_k;                     /* '<S18>/Sum4' */
  real32_T UnitDelay3_h;               /* '<S6>/Unit Delay3' */
  real32_T Product_m;                  /* '<S23>/Product' */
  real32_T Switch2_j;                  /* '<S23>/Switch2' */
  real32_T tDC;                        /* '<S6>/VLC_control_sts' */
  real32_T Timer;                      /* '<S52>/MATLAB Function' */
  real32_T StartTimer;                 /* '<S52>/MATLAB Function' */
  real32_T CounterK1;                  /* '<S16>/MATLAB Function' */
  real32_T I_l;                        /* '<S14>/MATLAB Function' */
  real32_T Limited;                    /* '<S14>/MATLAB Function' */
  real32_T axvFilt;                    /* '<S14>/MATLAB Function' */
  real32_T y;                          /* '<S10>/MATLAB Function' */
  real32_T Up;                         /* '<S10>/FxLimit' */
  real32_T Low;                        /* '<S10>/FxLimit' */
  real32_T Counter;                    /* '<S10>/FxLimit' */
  real32_T Counter2;                   /* '<S10>/FxLimit' */
  uint8_T FixPtSum1;                   /* '<S4>/FixPt Sum1' */
  uint8_T FixPtSwitch;                 /* '<S5>/FixPt Switch' */
  uint8_T TappedDelay2[2];             /* '<S16>/Tapped Delay2' */
  uint8_T TappedDelay5[2];             /* '<S6>/Tapped Delay5' */
  uint8_T TappedDelay[2];              /* '<S9>/Tapped Delay' */
  uint8_T SumofElements1;              /* '<S19>/Sum of Elements1' */
  uint8_T FixPtRelationalOperator;     /* '<S53>/FixPt Relational Operator' */
  uint8_T ACCModeSts;                  /* '<S16>/MATLAB Function' */
  boolean_T Compare;                   /* '<S7>/Compare' */
  boolean_T Compare_l;                 /* '<S8>/Compare' */
  boolean_T RelationalOperator7;       /* '<S15>/Relational Operator7' */
  boolean_T RelationalOperator6;       /* '<S15>/Relational Operator6' */
  boolean_T LogicalOperator3;          /* '<S15>/Logical Operator3' */
  boolean_T RelationalOperator4;       /* '<S15>/Relational Operator4' */
  boolean_T LogicalOperator;           /* '<S15>/Logical Operator' */
  boolean_T RelationalOperator1;       /* '<S15>/Relational Operator1' */
  boolean_T RelationalOperator3;       /* '<S15>/Relational Operator3' */
  boolean_T LogicalOperator2;          /* '<S15>/Logical Operator2' */
  boolean_T RelationalOperator8;       /* '<S15>/Relational Operator8' */
  boolean_T RelationalOperator12;      /* '<S15>/Relational Operator12' */
  boolean_T RelationalOperator11;      /* '<S15>/Relational Operator11' */
  boolean_T RelationalOperator10;      /* '<S15>/Relational Operator10' */
  boolean_T RelationalOperator9;       /* '<S15>/Relational Operator9' */
  boolean_T LogicalOperator4;          /* '<S15>/Logical Operator4' */
  boolean_T LongCtrl_ForwardFlag;      /* '<S15>/Logical Operator8' */
  boolean_T LogicalOperator9;          /* '<S15>/Logical Operator9' */
  boolean_T LogicalOperator1;          /* '<S15>/Logical Operator1' */
  boolean_T LogicalOperator6;          /* '<S15>/Logical Operator6' */
  boolean_T TappedDelay2_f[2];         /* '<S6>/Tapped Delay2' */
  boolean_T TappedDelay3[2];           /* '<S6>/Tapped Delay3' */
  boolean_T TappedDelay4[2];           /* '<S6>/Tapped Delay4' */
  boolean_T UnitDelay_kd;              /* '<S10>/Unit Delay' */
  boolean_T TappedDelay4_g[2];         /* '<S10>/Tapped Delay4' */
  boolean_T TappedDelay1[2];           /* '<S10>/Tapped Delay1' */
  boolean_T Compare_c;                 /* '<S32>/Compare' */
  boolean_T TappedDelay1_g[6];         /* '<S19>/Tapped Delay1' */
  boolean_T Compare_e;                 /* '<S50>/Compare' */
  boolean_T Compare_m;                 /* '<S47>/Compare' */
  boolean_T Compare_n;                 /* '<S48>/Compare' */
  boolean_T Compare_a;                 /* '<S51>/Compare' */
  boolean_T Uk1;                       /* '<S53>/Delay Input1' */
  boolean_T Compare_o;                 /* '<S49>/Compare' */
  boolean_T LowerRelop1;               /* '<S56>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S56>/UpperRelop' */
  boolean_T UnitDelay4_i;              /* '<S10>/Unit Delay4' */
  boolean_T RelationalOperator2;       /* '<S15>/Relational Operator2' */
  boolean_T RelationalOperator5;       /* '<S15>/Relational Operator5' */
  boolean_T Compare_ly;                /* '<S37>/Compare' */
  boolean_T Compare_nq;                /* '<S38>/Compare' */
  boolean_T Compare_i;                 /* '<S39>/Compare' */
  boolean_T RelationalOperator9_b;     /* '<S17>/Relational Operator9' */
  boolean_T LogicalOperator1_c;        /* '<S17>/Logical Operator1' */
  boolean_T RelationalOperator1_f;     /* '<S17>/Relational Operator1' */
  boolean_T RelationalOperator4_d;     /* '<S17>/Relational Operator4' */
  boolean_T RelationalOperator5_d;     /* '<S17>/Relational Operator5' */
  boolean_T Compare_ap;                /* '<S43>/Compare' */
  boolean_T Compare_a5;                /* '<S45>/Compare' */
  boolean_T RelationalOperator5_f;     /* '<S18>/Relational Operator5' */
  boolean_T LogicalOperator_a;         /* '<S18>/Logical Operator' */
  boolean_T y_i;                       /* '<S18>/Switch' */
  boolean_T y_m;                       /* '<S17>/Switch' */
  boolean_T decelReqActive;            /* '<S9>/StandstillAccel2' */
} B_PubIfControlLONC_MDL_c_T;

#endif                               /*PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'PubIfControlLONC_MDL' */
#ifndef PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Sum1_DWORK1;                  /* '<S18>/Sum1' */
  real32_T UnitDelay_DSTATE;           /* '<S16>/Unit Delay' */
  real32_T UnitDelay2_DSTATE;          /* '<S6>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE;          /* '<S6>/Unit Delay1' */
  real32_T UnitDelay1_DSTATE_p;        /* '<S10>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE_c;        /* '<S10>/Unit Delay2' */
  real32_T UnitDelay3_DSTATE;          /* '<S14>/Unit Delay3' */
  real32_T UnitDelay2_DSTATE_n;        /* '<S14>/Unit Delay2' */
  real32_T UnitDelay1_DSTATE_k;        /* '<S14>/Unit Delay1' */
  real32_T UnitDelay5_DSTATE;          /* '<S6>/Unit Delay5' */
  real32_T UnitDelay_DSTATE_f;         /* '<S12>/Unit Delay' */
  real32_T UnitDelay_DSTATE_g;         /* '<S14>/Unit Delay' */
  real32_T UnitDelay_DSTATE_n;         /* '<S13>/Unit Delay' */
  real32_T UnitDelay1_DSTATE_f;        /* '<S52>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_c;         /* '<S52>/Unit Delay' */
  real32_T UnitDelay_DSTATE_fb;        /* '<S23>/Unit Delay' */
  real32_T UnitDelay_DSTATE_m;         /* '<S22>/Unit Delay' */
  real32_T UnitDelay_DSTATE_a;         /* '<S55>/Unit Delay' */
  real32_T UnitDelay_DSTATE_o;         /* '<S31>/Unit Delay' */
  real32_T UnitDelay_DSTATE_h;         /* '<S30>/Unit Delay' */
  real32_T UnitDelay_DSTATE_n1;        /* '<S6>/Unit Delay' */
  real32_T UnitDelay5_DSTATE_e;        /* '<S10>/Unit Delay5' */
  real32_T UnitDelay_DSTATE_l;         /* '<S28>/Unit Delay' */
  real32_T UnitDelay3_DSTATE_m;        /* '<S10>/Unit Delay3' */
  real32_T UnitDelay4_DSTATE;          /* '<S6>/Unit Delay4' */
  real32_T UnitDelay1_DSTATE_j;        /* '<S17>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_nf;        /* '<S17>/Unit Delay' */
  real32_T UnitDelay_DSTATE_o3;        /* '<S41>/Unit Delay' */
  real32_T UnitDelay3_DSTATE_g;        /* '<S6>/Unit Delay3' */
  real32_T timer;                      /* '<S9>/StandstillAccel2' */
  real32_T decelReqK1;                 /* '<S9>/StandstillAccel2' */
  real32_T SlidTimer;                  /* '<S9>/StandstillAccel2' */
  uint32_T SumofElements1_DWORK1;      /* '<S19>/Sum of Elements1' */
  uint8_T Output_DSTATE;               /* '<S2>/Output' */
  uint8_T TappedDelay2_X;              /* '<S16>/Tapped Delay2' */
  uint8_T TappedDelay5_X;              /* '<S6>/Tapped Delay5' */
  uint8_T TappedDelay_X;               /* '<S9>/Tapped Delay' */
  boolean_T UnitDelay7_DSTATE;         /* '<S6>/Unit Delay7' */
  boolean_T UnitDelay6_DSTATE;         /* '<S6>/Unit Delay6' */
  boolean_T TappedDelay2_X_b;          /* '<S6>/Tapped Delay2' */
  boolean_T TappedDelay3_X;            /* '<S6>/Tapped Delay3' */
  boolean_T TappedDelay4_X;            /* '<S6>/Tapped Delay4' */
  boolean_T UnitDelay_DSTATE_k;        /* '<S10>/Unit Delay' */
  boolean_T TappedDelay4_X_h;          /* '<S10>/Tapped Delay4' */
  boolean_T TappedDelay1_X;            /* '<S10>/Tapped Delay1' */
  boolean_T TappedDelay1_X_b[5];       /* '<S19>/Tapped Delay1' */
  boolean_T DelayInput1_DSTATE;        /* '<S53>/Delay Input1' */
  boolean_T UnitDelay4_DSTATE_a;       /* '<S10>/Unit Delay4' */
  uint8_T is_c14_PubIfControlLONC_MDL; /* '<S6>/VLC_control_sts' */
  uint8_T is_Active;                   /* '<S6>/VLC_control_sts' */
  uint8_T is_ECDC;                     /* '<S6>/VLC_control_sts' */
  uint8_T timerFailure;                /* '<S9>/StandstillAccel2' */
} DW_PubIfControlLONC_MDL_f_T;

#endif                               /*PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_*/

/* Invariant block signals for model 'PubIfControlLONC_MDL' */
#ifndef PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  const real32_T Longctrl_HCUTrqReq;   /* '<S3>/Constant' */
  const real32_T Product7;             /* '<S28>/Product7' */
  const real32_T Product2;             /* '<S12>/Product2' */
  const real32_T Product2_j;           /* '<S13>/Product2' */
  const real32_T Product4;             /* '<S14>/Product4' */
  const real32_T Product4_j;           /* '<S41>/Product4' */
  const real32_T Product7_i;           /* '<S55>/Product7' */
  const real32_T Gain1;                /* '<S23>/Gain1' */
  const boolean_T Longctrl_HCUTrqReqActive;/* '<S3>/Constant1' */
} ConstB_PubIfControlLONC_MDL_h_T;

#endif                               /*PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_PubIfControlLONC_MDL_T {
  const char_T **errorStatus;
};

#endif                               /*PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_PubIfControlLONC_MDL_T rtm;
} MdlrefDW_PubIfControlLONC_MDL_T;

#endif                               /*PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_*/

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T LongCtrl_ICEActWheelTrq; /* '<S15>/Product2' */
extern real_T LongCtrl_VLCState;       /* '<S6>/VLC_control_sts' */
extern real_T LongCtrl_tECDC;          /* '<S6>/VLC_control_sts' */
extern uint32_T LongCtrl_SubModel_VERSION;/* '<S1>/Constant' */
extern uint32_T LongCtrl_SubModel_Number;/* '<S1>/Constant1' */
extern real32_T LongCtrl_vxvRefMs;     /* '<S6>/Signal Copy1' */
extern real32_T LongCtrl_axvRoadSlopeMs2;/* '<S6>/Signal Copy' */
extern real32_T LongCtrl_accelHoldMin; /* '<S9>/1-D Lookup Table' */
extern real32_T LongCtrl_jerkHold;     /* '<S9>/1-D Lookup Table1' */
extern real32_T LongCtrl_accelSlidHold;/* '<S9>/1-D Lookup Table2' */
extern real32_T LongCtrl_jerkSlidHold; /* '<S9>/1-D Lookup Table3' */
extern real32_T LongCtrl_OverrideToDC; /* '<S6>/Unit Delay2' */
extern real32_T Longctrl_NetEngTrq;    /* '<S6>/Signal Copy9' */
extern real32_T Longctrl_NetEngTorqNorm;/* '<S6>/Signal Copy10' */
extern real32_T Longctrl_EngSpd;       /* '<S6>/Signal Copy13' */
extern real32_T LongCtrl_Tr_Ratio;     /* '<S6>/Saturation2' */
extern real32_T LongCtrl_Fz;           /* '<S24>/Sum2' */
extern real32_T LongCtrl_ICEFzNm;      /* '<S15>/Product' */
extern real32_T Longctrl_VIE_axRefMs2; /* '<S6>/Signal Copy2' */
extern real32_T Longctrl_ACC_axvCvAim; /* '<S6>/Signal Copy16' */
extern real32_T Longctrl_ACC_AccelerateJerk;/* '<S6>/Signal Copy20' */
extern real32_T Longctrl_ACC_DecelerateJerk;/* '<S6>/Signal Copy19' */
extern real32_T LongCtrl_axvDiff;      /* '<S22>/Sum5' */
extern real32_T LongCtrl_PI_NetEngTorqInc;/* '<S14>/Product8' */
extern real32_T LongCtrl_axvTracActMean;/* '<S24>/Product6' */
extern real32_T LongCtrl_axvModelDiff; /* '<S23>/Sum10' */
extern real32_T Longctrl_VIE_AxRefDt;  /* '<S6>/Signal Copy4' */
extern real32_T LongCtrl_axvModelResidual;/* '<S23>/Sum12' */
extern real32_T LongCtrl_axvClosedLoopControl;/* '<S22>/Sum3' */
extern real32_T LongCtrl_FF_NetEngTorqMax;/* '<S11>/Efficiency' */
extern real32_T LongCtrl_FF_NetEngTorqInc;/* '<S11>/Product6' */
extern real32_T LongCtrl_UpdateLowerValue;/* '<S10>/Sum3' */
extern real32_T LongCtrl_UpdateUpperValue;/* '<S10>/Sum2' */
extern real32_T LongCtrl_ACC_EngTrqReq;/* '<S10>/MinMax2' */
extern real32_T Longctrl_EngTqMinAct;  /* '<S6>/Signal Copy11' */
extern real32_T Longctrl_ACC_axv_ComfortBandLowerValue;/* '<S6>/Signal Copy17' */
extern real32_T Longctrl_ACC_axv_ComfortBandUpperValue;/* '<S6>/Signal Copy18' */
extern real32_T LongCtrl_PI_NetEngTorq;/* '<S6>/Sum1' */
extern real32_T LongCtrl_FF_NetEngTorq;/* '<S6>/Sum2' */
extern real32_T LongCtrl_axvTracMin;   /* '<S25>/Product6' */
extern real32_T LongCtrl_axvModelRef;  /* '<S23>/Sum13' */
extern real32_T Longctrl_VIE_alpSideSlipAngle;/* '<S6>/Signal Copy3' */
extern real32_T Longctrl_EngTqMaxActSpd;/* '<S6>/Signal Copy12' */
extern real32_T Longctrl_tCycleVLC;    /* '<S6>/Signal Copy23' */
extern real32_T LongCtrl_VlcInternalAcc;/* '<S6>/VlcInternalAccCalc' */
extern real32_T LongCtrl_tEC;          /* '<S6>/VLC_control_sts' */
extern real32_T LongCtrl_ACC_Decel_ReqValue;/* '<S9>/StandstillAccel2' */
extern uint8_T LongCtrl_Counter;       /* '<S2>/Output' */
extern uint8_T Longctrl_ACCSts;        /* '<S6>/Signal Copy14' */
extern uint8_T LongCtrl_RRWheelDriveDirection;/* '<S6>/Signal Copy28' */
extern uint8_T LongCtrl_RLWheelDriveDirection;/* '<S6>/Signal Copy27' */
extern uint8_T LongCtrl_FRWheelDriveDirection;/* '<S6>/Signal Copy26' */
extern uint8_T LongCtrl_FLWheelDriveDirection;/* '<S6>/Signal Copy24' */
extern uint8_T Longctrl_CurrentGear;   /* '<S6>/Signal Copy7' */
extern boolean_T Longctrl_VehicleStandStill;/* '<S6>/Signal Copy6' */
extern boolean_T LongCtrl_Sw2EC;       /* '<S6>/Unit Delay7' */
extern boolean_T LongCtrl_Sw2DC;       /* '<S6>/Unit Delay6' */
extern boolean_T LongCtrl_ForwardFlagVxv;/* '<S15>/Logical Operator5' */
extern boolean_T LongCtrl_ForwardFlagTrq;/* '<S15>/Relational Operator13' */
extern boolean_T LongCtrl_SlideFlag;   /* '<S15>/Logical Operator7' */
extern boolean_T LongCtrl_VLC_DriveOffConditonFulfilled;/* '<S6>/Signal Copy25' */
extern boolean_T Longctrl_ACC_DrvOFF_Req;/* '<S6>/Signal Copy15' */
extern boolean_T Longctrl_ShiftinProgress;/* '<S6>/Signal Copy8' */
extern boolean_T Longctrl_NoBrakeForce;/* '<S6>/Signal Copy5' */
extern boolean_T LongCtrl_UpdateEnable_axvModeldiff;/* '<S19>/Logical Operator' */
extern boolean_T Longctrl_ACC_BrakePrefer;/* '<S6>/Signal Copy21' */
extern boolean_T Longctrl_ACC_DecelToStopReq;/* '<S6>/Signal Copy22' */
extern boolean_T LongCtrl_Sw2DC6;      /* '<S40>/Compare' */
extern boolean_T LongCtrl_Sw2DC1;      /* '<S17>/Logical Operator3' */
extern boolean_T LongCtrl_Sw2DC3;      /* '<S17>/Relational Operator2' */
extern boolean_T LongCtrl_Sw2DC5;      /* '<S17>/Relational Operator3' */
extern boolean_T LongCtrl_Sw2DC7;      /* '<S17>/Relational Operator6' */
extern boolean_T LongCtrl_Sw2DC2;      /* '<S17>/Relational Operator7' */
extern boolean_T LongCtrl_Sw2DC4;      /* '<S17>/Relational Operator8' */
extern boolean_T LongCtrl_Sw2EC1;      /* '<S44>/Compare' */
extern boolean_T LongCtrl_Sw2EC3;      /* '<S18>/Relational Operator' */
extern boolean_T LongCtrl_Sw2EC2;      /* '<S18>/Relational Operator2' */
extern boolean_T LongCtrl_Sw2EC5;      /* '<S18>/Relational Operator4' */
extern boolean_T LongCtrl_Sw2EC4;      /* '<S18>/Relational Operator6' */
extern boolean_T LongCtrl_ECEnable;    /* '<S6>/VLC_control_sts' */
extern boolean_T LongCtrl_DCEnable;    /* '<S6>/VLC_control_sts' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real32_T P_Global_TireRadius_m; /* Variable: P_Global_TireRadius_m
                                        * Referenced by:
                                        *   '<S6>/Weight//N2'
                                        *   '<S10>/Weight//N2'
                                        *   '<S11>/Weight//N2'
                                        *   '<S14>/Weight//N2'
                                        *   '<S15>/Weight//N1'
                                        *   '<S24>/Weight//N1'
                                        *   '<S25>/Weight//N1'
                                        */
extern real32_T P_Global_Weight_N;     /* Variable: P_Global_Weight_N
                                        * Referenced by:
                                        *   '<S10>/Weight//N1'
                                        *   '<S10>/Weight//N6'
                                        *   '<S11>/Weight//N6'
                                        *   '<S24>/Weight//N5'
                                        *   '<S24>/Weight//N6'
                                        *   '<S24>/Weight//N7'
                                        *   '<S25>/Weight//N5'
                                        *   '<S25>/Weight//N6'
                                        *   '<S25>/Weight//N7'
                                        */
extern real32_T P_LongCtrl_AxvRoadSlopeThrd;/* Variable: P_LongCtrl_AxvRoadSlopeThrd
                                             * Referenced by: '<S15>/P_LongCtrl_AxvRoadSlopeThrd'
                                             */
extern real32_T P_LongCtrl_TotWheelTrqRatio;/* Variable: P_LongCtrl_TotWheelTrqRatio
                                             * Referenced by: '<S15>/Constant8'
                                             */
extern real32_T P_LongCtrl_VLCAxTarDtThreEnableI;
                                   /* Variable: P_LongCtrl_VLCAxTarDtThreEnableI
                                    * Referenced by: '<S14>/MATLAB Function'
                                    */
extern real32_T P_LongCtrl_VLCAxvTracMinDC1FullFillXAxis[4];
                           /* Variable: P_LongCtrl_VLCAxvTracMinDC1FullFillXAxis
                            * Referenced by: '<S17>/P_LongCtrl_VLCAxvTracMinDC1FullFill'
                            */
extern real32_T P_LongCtrl_VLCAxvTracMinDC1FullFillYAxis[4];
                           /* Variable: P_LongCtrl_VLCAxvTracMinDC1FullFillYAxis
                            * Referenced by: '<S17>/P_LongCtrl_VLCAxvTracMinDC1FullFill'
                            */
extern real32_T P_LongCtrl_VLCCounterAxvTracMinTimeout;
                             /* Variable: P_LongCtrl_VLCCounterAxvTracMinTimeout
                              * Referenced by: '<S38>/Constant'
                              */
extern real32_T P_LongCtrl_VLCCounterDC2ECTorqDelay;
                                /* Variable: P_LongCtrl_VLCCounterDC2ECTorqDelay
                                 * Referenced by: '<S10>/FxLimit'
                                 */
extern real32_T P_LongCtrl_VLCCounterDrvOff2EC;
                                     /* Variable: P_LongCtrl_VLCCounterDrvOff2EC
                                      * Referenced by: '<S10>/FxLimit'
                                      */
extern real32_T P_LongCtrl_VLCDtAxvRef2UpperBandDC5;
                                /* Variable: P_LongCtrl_VLCDtAxvRef2UpperBandDC5
                                 * Referenced by: '<S17>/P_LongCtrl_VLCDtAxvRef2UpperBandDC5'
                                 */
extern real32_T P_LongCtrl_VLCIACompensionNeg;
                                      /* Variable: P_LongCtrl_VLCIACompensionNeg
                                       * Referenced by: '<S14>/MATLAB Function'
                                       */
extern real32_T P_LongCtrl_VLCIACompensionPos;
                                      /* Variable: P_LongCtrl_VLCIACompensionPos
                                       * Referenced by: '<S14>/MATLAB Function'
                                       */
extern real32_T P_LongCtrl_VLCLowerJerkCounterDrvOff2EC;
                            /* Variable: P_LongCtrl_VLCLowerJerkCounterDrvOff2EC
                             * Referenced by: '<S10>/FxLimit'
                             */
extern real32_T P_LongCtrl_VLCMaRatioCharMaYAxis[18];
                                   /* Variable: P_LongCtrl_VLCMaRatioCharMaYAxis
                                    * Referenced by: '<S6>/Ma_Ratio'
                                    */
extern real32_T P_LongCtrl_VLCTorqDiffThreAxvTracMinTimeout;
                        /* Variable: P_LongCtrl_VLCTorqDiffThreAxvTracMinTimeout
                         * Referenced by: '<S37>/Constant'
                         */
extern real32_T P_LongCtrl_VLCTrRatioCharMaXAxis[18];
                                   /* Variable: P_LongCtrl_VLCTrRatioCharMaXAxis
                                    * Referenced by: '<S6>/Ma_Ratio'
                                    */
extern real32_T P_LongCtrl_VLCTrTatioMax;/* Variable: P_LongCtrl_VLCTrTatioMax
                                          * Referenced by: '<S6>/Saturation2'
                                          */
extern real32_T P_LongCtrl_VLCTrTatioMin;/* Variable: P_LongCtrl_VLCTrTatioMin
                                          * Referenced by: '<S6>/Saturation2'
                                          */
extern real32_T P_LongCtrl_VLCUpperJerkCounterDrvOff2EC;
                            /* Variable: P_LongCtrl_VLCUpperJerkCounterDrvOff2EC
                             * Referenced by: '<S10>/FxLimit'
                             */
extern real32_T P_LongCtrl_VLCVlcAccThresAxvTracMinTimeout;
                         /* Variable: P_LongCtrl_VLCVlcAccThresAxvTracMinTimeout
                          * Referenced by: '<S39>/Constant'
                          */
extern real32_T P_LongCtrl_VLC_WindArea;/* Variable: P_LongCtrl_VLC_WindArea
                                         * Referenced by:
                                         *   '<S24>/Weight//N3'
                                         *   '<S25>/Weight//N9'
                                         */
extern real32_T P_LongCtrl_VLC_fRollCoef;/* Variable: P_LongCtrl_VLC_fRollCoef
                                          * Referenced by:
                                          *   '<S24>/Weight//N2'
                                          *   '<S25>/Weight//N8'
                                          */
extern real32_T P_LongCtrl_VLCaDiffCharCoefKiEnableXAxis[6];
                           /* Variable: P_LongCtrl_VLCaDiffCharCoefKiEnableXAxis
                            * Referenced by: '<S14>/CoefKiEnable'
                            */
extern real32_T P_LongCtrl_VLCaDiffCharCoefKiXAxis[11];
                                 /* Variable: P_LongCtrl_VLCaDiffCharCoefKiXAxis
                                  * Referenced by: '<S14>/Weight//N1'
                                  */
extern real32_T P_LongCtrl_VLCaDtThresUpdateTorq;
                                   /* Variable: P_LongCtrl_VLCaDtThresUpdateTorq
                                    * Referenced by: '<S47>/Constant'
                                    */
extern real32_T P_LongCtrl_VLCaXCDeadZoneProp_Y[7];
                                    /* Variable: P_LongCtrl_VLCaXCDeadZoneProp_Y
                                     * Referenced by: '<S6>/Constant5'
                                     */
extern real32_T P_LongCtrl_VLCaccelMinHoldXAxis[2];
                                    /* Variable: P_LongCtrl_VLCaccelMinHoldXAxis
                                     * Referenced by: '<S9>/1-D Lookup Table'
                                     */
extern real32_T P_LongCtrl_VLCaccelMinHoldYAxis[2];
                                    /* Variable: P_LongCtrl_VLCaccelMinHoldYAxis
                                     * Referenced by: '<S9>/1-D Lookup Table'
                                     */
extern real32_T P_LongCtrl_VLCaccelMinSlidHoldXAxis[7];
                                /* Variable: P_LongCtrl_VLCaccelMinSlidHoldXAxis
                                 * Referenced by: '<S9>/1-D Lookup Table2'
                                 */
extern real32_T P_LongCtrl_VLCaccelMinSlidHoldYAxis[7];
                                /* Variable: P_LongCtrl_VLCaccelMinSlidHoldYAxis
                                 * Referenced by: '<S9>/1-D Lookup Table2'
                                 */
extern real32_T P_LongCtrl_VLCaxCtrlDevDeadZoneChar_Y[5];
                              /* Variable: P_LongCtrl_VLCaxCtrlDevDeadZoneChar_Y
                               * Referenced by: '<S6>/P_VlcAxCtrlDevDeadZoneChar_Y'
                               */
extern real32_T P_LongCtrl_VLCaxCtrlDevEC2DCMax;
                                    /* Variable: P_LongCtrl_VLCaxCtrlDevEC2DCMax
                                     * Referenced by: '<S6>/Constant12'
                                     */
extern real32_T P_LongCtrl_VLCaxCtrlDevFastQuitDCMode;
                              /* Variable: P_LongCtrl_VLCaxCtrlDevFastQuitDCMode
                               * Referenced by: '<S6>/Constant10'
                               */
extern real32_T P_LongCtrl_VLCaxCtrlDevThresAddEC2DCCharYAxis[5];
                      /* Variable: P_LongCtrl_VLCaxCtrlDevThresAddEC2DCCharYAxis
                       * Referenced by: '<S6>/Constant11'
                       */
extern real32_T P_LongCtrl_VLCaxCtrlDevTresAddDC2ECYAxis[5];
                           /* Variable: P_LongCtrl_VLCaxCtrlDevTresAddDC2ECYAxis
                            * Referenced by: '<S6>/Constant9'
                            */
extern real32_T P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddDC2ECXAxis[5];
                   /* Variable: P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddDC2ECXAxis
                    * Referenced by: '<S18>/Constant2'
                    */
extern real32_T P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddEC2DCXAxis[5];
                   /* Variable: P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddEC2DCXAxis
                    * Referenced by: '<S17>/Constant1'
                    */
extern real32_T P_LongCtrl_VLCaxvRoadSlopeDC4CharXAxis[5];
                             /* Variable: P_LongCtrl_VLCaxvRoadSlopeDC4CharXAxis
                              * Referenced by: '<S17>/Constant2'
                              */
extern real32_T P_LongCtrl_VLCaxvRoadSlopeDC4CharYAxis[5];
                             /* Variable: P_LongCtrl_VLCaxvRoadSlopeDC4CharYAxis
                              * Referenced by: '<S17>/Constant6'
                              */
extern real32_T P_LongCtrl_VLCcoefFXAxis[10];/* Variable: P_LongCtrl_VLCcoefFXAxis
                                              * Referenced by:
                                              *   '<S24>/f'
                                              *   '<S25>/f'
                                              */
extern real32_T P_LongCtrl_VLCcoefFYAxis[10];/* Variable: P_LongCtrl_VLCcoefFYAxis
                                              * Referenced by:
                                              *   '<S24>/f'
                                              *   '<S25>/f'
                                              */
extern real32_T P_LongCtrl_VLCcoefIFadeOut1Calc;
                                    /* Variable: P_LongCtrl_VLCcoefIFadeOut1Calc
                                     * Referenced by: '<S14>/MATLAB Function'
                                     */
extern real32_T P_LongCtrl_VLCcoefIFadeOut1Condition;
                               /* Variable: P_LongCtrl_VLCcoefIFadeOut1Condition
                                * Referenced by: '<S14>/MATLAB Function'
                                */
extern real32_T P_LongCtrl_VLCcoefIFadeOut2Calc;
                                    /* Variable: P_LongCtrl_VLCcoefIFadeOut2Calc
                                     * Referenced by: '<S14>/MATLAB Function'
                                     */
extern real32_T P_LongCtrl_VLCcoefIFadeOut2Condition;
                               /* Variable: P_LongCtrl_VLCcoefIFadeOut2Condition
                                * Referenced by: '<S14>/MATLAB Function'
                                */
extern real32_T P_LongCtrl_VLCcoefIFadeOut3Calc;
                                    /* Variable: P_LongCtrl_VLCcoefIFadeOut3Calc
                                     * Referenced by: '<S14>/MATLAB Function'
                                     */
extern real32_T P_LongCtrl_VLCcoefIFadeOut3Condition;
                               /* Variable: P_LongCtrl_VLCcoefIFadeOut3Condition
                                * Referenced by: '<S14>/MATLAB Function'
                                */
extern real32_T P_LongCtrl_VLCcoefKiDiffDtEnlargeYAxis[6];
                             /* Variable: P_LongCtrl_VLCcoefKiDiffDtEnlargeYAxis
                              * Referenced by: '<S14>/CoefKiDiffDtEnlarge'
                              */
extern real32_T P_LongCtrl_VLCcoefKiEnableYAxis[6];
                                    /* Variable: P_LongCtrl_VLCcoefKiEnableYAxis
                                     * Referenced by: '<S14>/CoefKiEnable'
                                     */
extern real32_T P_LongCtrl_VLCcoefKiEnlargeADiffYAxis[11];
                              /* Variable: P_LongCtrl_VLCcoefKiEnlargeADiffYAxis
                               * Referenced by: '<S6>/PVLCaXCKiCtrlDevChar_Y'
                               */
extern real32_T P_LongCtrl_VLCcoefPIYAxis[4];/* Variable: P_LongCtrl_VLCcoefPIYAxis
                                              * Referenced by: '<S10>/PI_Factor '
                                              */
extern real32_T P_LongCtrl_VLCdaxTarEC2DCMax;/* Variable: P_LongCtrl_VLCdaxTarEC2DCMax
                                              * Referenced by: '<S6>/Constant13'
                                              */
extern real32_T P_LongCtrl_VLCdiffDtCharCoefKiEnlargeXAxis[6];
                         /* Variable: P_LongCtrl_VLCdiffDtCharCoefKiEnlargeXAxis
                          * Referenced by: '<S14>/CoefKiDiffDtEnlarge'
                          */
extern real32_T P_LongCtrl_VLCdriveOffAxUpLimXAxix[5];
                                 /* Variable: P_LongCtrl_VLCdriveOffAxUpLimXAxix
                                  * Referenced by: '<S6>/Constant3'
                                  */
extern real32_T P_LongCtrl_VLCdriveOffAxUpLimYAxix[5];
                                 /* Variable: P_LongCtrl_VLCdriveOffAxUpLimYAxix
                                  * Referenced by: '<S6>/Constant1'
                                  */
extern real32_T P_LongCtrl_VLCengEfficientCharYAxis[5];
                                /* Variable: P_LongCtrl_VLCengEfficientCharYAxis
                                 * Referenced by:
                                 *   '<S24>/Efficiency'
                                 *   '<S25>/Efficiency'
                                 */
extern real32_T P_LongCtrl_VLCengInverseEfficientYAxis[5];
                             /* Variable: P_LongCtrl_VLCengInverseEfficientYAxis
                              * Referenced by: '<S11>/Efficiency'
                              */
extern real32_T P_LongCtrl_VLCjerkHoldXAxis[2];/* Variable: P_LongCtrl_VLCjerkHoldXAxis
                                                * Referenced by: '<S9>/1-D Lookup Table1'
                                                */
extern real32_T P_LongCtrl_VLCjerkHoldYAxis[2];/* Variable: P_LongCtrl_VLCjerkHoldYAxis
                                                * Referenced by: '<S9>/1-D Lookup Table1'
                                                */
extern real32_T P_LongCtrl_VLCjerkSlidHoldXAxis[7];
                                    /* Variable: P_LongCtrl_VLCjerkSlidHoldXAxis
                                     * Referenced by: '<S9>/1-D Lookup Table3'
                                     */
extern real32_T P_LongCtrl_VLCjerkSlidHoldYAxis[7];
                                    /* Variable: P_LongCtrl_VLCjerkSlidHoldYAxis
                                     * Referenced by: '<S9>/1-D Lookup Table3'
                                     */
extern real32_T P_LongCtrl_VLCki;      /* Variable: P_LongCtrl_VLCki
                                        * Referenced by: '<S6>/Constant4'
                                        */
extern real32_T P_LongCtrl_VLCkp;      /* Variable: P_LongCtrl_VLCkp
                                        * Referenced by: '<S6>/Constant2'
                                        */
extern real32_T P_LongCtrl_VLCks;      /* Variable: P_LongCtrl_VLCks
                                        * Referenced by: '<S6>/Ks'
                                        */
extern real32_T P_LongCtrl_VLCtorqCharEngEfficientXAxis[5];
                            /* Variable: P_LongCtrl_VLCtorqCharEngEfficientXAxis
                             * Referenced by:
                             *   '<S24>/Efficiency'
                             *   '<S25>/Efficiency'
                             */
extern real32_T P_LongCtrl_VLCtorqCharEngInverseEfficientXAxis[5];
                     /* Variable: P_LongCtrl_VLCtorqCharEngInverseEfficientXAxis
                      * Referenced by: '<S11>/Efficiency'
                      */
extern real32_T P_LongCtrl_VLCvelCharAxCtrlDevDeadZoneXAxis[5];
                        /* Variable: P_LongCtrl_VLCvelCharAxCtrlDevDeadZoneXAxis
                         * Referenced by: '<S14>/Constant3'
                         */
extern real32_T P_LongCtrl_VLCvelCharCoefPIXAxis[4];
                                   /* Variable: P_LongCtrl_VLCvelCharCoefPIXAxis
                                    * Referenced by: '<S10>/PI_Factor '
                                    */
extern real32_T P_LongCtrl_VLCvelThresUpdateTorq;
                                   /* Variable: P_LongCtrl_VLCvelThresUpdateTorq
                                    * Referenced by: '<S48>/Constant'
                                    */
extern real32_T P_LongCtrl_VxvRefThrd; /* Variable: P_LongCtrl_VxvRefThrd
                                        * Referenced by: '<S15>/P_LongCtrl_VxvRefThrd'
                                        */
extern boolean_T P_LongCtrl_SlideFlagEnable;/* Variable: P_LongCtrl_SlideFlagEnable
                                             * Referenced by: '<S15>/P_LongCtrl_SlideFlagEnable'
                                             */
extern void PubIfControlLONC_MDL_Init(LONC_Hybrid_CTRL_OUT_BUS
  *rty_LONC_Hybrid_CTRL_OUT);
extern void PubIfControlLONC_MDL_Reset(void);
extern void PubIfControlLONC_MDL_Start(void);
extern void PubIfControlLONC_MDL_Update(const VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL);
extern void PubIfControlLONC_MDL(const real32_T *rtu_vxvRefMs, const real32_T
  *rtu_axvRoadSlopeMs2, const real32_T *rtu_axRefMs2, const real32_T
  *rtu_alpSideSlipAngle, const real32_T *rtu_axRefDt, const VCAN_ESP_MSG_BUS
  *rtu_LONC_VCAN_ESP, const VCAN_DCT_MSG_BUS *rtu_LONC_VCAN_DCT, const
  VCAN_ECM_MSG_BUS *rtu_LONC_VCAN_ECM, const VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL,
  const real32_T *rtu_PLAN_ACCPLAN_ACC_axvCvAim, const real32_T
  *rtu_PLAN_ACCPLAN_ACC_axv_ComfortBandLowerValue, const real32_T
  *rtu_PLAN_ACCPLAN_ACC_axv_ComfortBandUpperValue, const real32_T
  *rtu_PLAN_ACCPLAN_ACC_DecelerateJerk, const real32_T
  *rtu_PLAN_ACCPLAN_ACC_AccelerateJerk, const boolean_T
  *rtu_PLAN_ACCPLAN_ACC_BrakePrefer, const boolean_T
  *rtu_PLAN_Longctrl_DecelToStopReq, const boolean_T
  *rtu_PLAN_DriverOffConditionFulfilled, LONC_CTRL_OUT_BUS *rty_LONC_CTRL_OUT,
  LONC_Hybrid_CTRL_OUT_BUS *rty_LONC_Hybrid_CTRL_OUT);

/* Model reference registration function */
extern void PubIfControlLONC_MDL_initialize(const char_T **rt_errorStatus);

#ifndef PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_

extern MdlrefDW_PubIfControlLONC_MDL_T PubIfControlLONC_MDL_MdlrefDW;

#endif                               /*PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_PubIfControlLONC_MDL_c_T PubIfControlLONC_MDL_B;

/* Block states (default storage) */
extern DW_PubIfControlLONC_MDL_f_T PubIfControlLONC_MDL_DW;

#endif                               /*PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'PubIfControlLONC_MDL'
 * '<S1>'   : 'PubIfControlLONC_MDL/Subsystem'
 * '<S2>'   : 'PubIfControlLONC_MDL/Subsystem/Counter Limited'
 * '<S3>'   : 'PubIfControlLONC_MDL/Subsystem/VLC'
 * '<S4>'   : 'PubIfControlLONC_MDL/Subsystem/Counter Limited/Increment Real World'
 * '<S5>'   : 'PubIfControlLONC_MDL/Subsystem/Counter Limited/Wrap To Zero'
 * '<S6>'   : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc'
 * '<S7>'   : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/Compare To Constant8'
 * '<S8>'   : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/Compare To Zero'
 * '<S9>'   : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/DC'
 * '<S10>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/EC'
 * '<S11>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/FF_Control'
 * '<S12>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/LP'
 * '<S13>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/LP1'
 * '<S14>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/PI_Control'
 * '<S15>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SlidJudge'
 * '<S16>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/Subsystem'
 * '<S17>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToBrakeMode'
 * '<S18>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToDriveMode'
 * '<S19>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc'
 * '<S20>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/VLC_control_sts'
 * '<S21>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/VlcInternalAccCalc'
 * '<S22>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/axvClosedLoopControlCalc'
 * '<S23>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/axvModelResidualCalc'
 * '<S24>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/axvTracActMean_calc'
 * '<S25>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/axvTracMin_calc'
 * '<S26>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/DC/StandstillAccel2'
 * '<S27>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/EC/FxLimit'
 * '<S28>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/EC/LP'
 * '<S29>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/EC/MATLAB Function'
 * '<S30>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/FF_Control/LP'
 * '<S31>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/FF_Control/LP1'
 * '<S32>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/PI_Control/Compare To Constant'
 * '<S33>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/PI_Control/If Action Subsystem'
 * '<S34>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/PI_Control/If Action Subsystem1'
 * '<S35>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/PI_Control/MATLAB Function'
 * '<S36>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/Subsystem/MATLAB Function'
 * '<S37>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToBrakeMode/Compare To Constant'
 * '<S38>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToBrakeMode/Compare To Constant2'
 * '<S39>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToBrakeMode/Compare To Constant3'
 * '<S40>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToBrakeMode/Compare To Constant8'
 * '<S41>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToBrakeMode/LP filter'
 * '<S42>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToBrakeMode/Switch'
 * '<S43>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToDriveMode/Compare To Constant1'
 * '<S44>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToDriveMode/Compare To Constant3'
 * '<S45>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToDriveMode/Compare To Constant5'
 * '<S46>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/SwitchToDriveMode/Switch'
 * '<S47>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc/Compare To Constant1'
 * '<S48>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc/Compare To Constant2'
 * '<S49>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc/Compare To Constant4'
 * '<S50>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc/Compare To Constant7'
 * '<S51>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc/Compare To Constant8'
 * '<S52>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc/Timer'
 * '<S53>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc/Timer/Detect Decrease'
 * '<S54>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/UpdateFlagCalc/Timer/MATLAB Function'
 * '<S55>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/axvClosedLoopControlCalc/LP1'
 * '<S56>'  : 'PubIfControlLONC_MDL/Subsystem/VLC/Vlc/axvModelResidualCalc/Saturation Dynamic'
 */
#endif                                 /* RTW_HEADER_PubIfControlLONC_MDL_h_ */
