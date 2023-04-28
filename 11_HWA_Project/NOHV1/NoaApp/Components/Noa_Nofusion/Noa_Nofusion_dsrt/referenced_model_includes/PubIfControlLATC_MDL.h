/*
 * Code generation for system model 'PubIfControlLATC_MDL'
 * For more details, see corresponding source file PubIfControlLATC_MDL.c
 *
 */

#ifndef RTW_HEADER_PubIfControlLATC_MDL_h_
#define RTW_HEADER_PubIfControlLATC_MDL_h_
#include <math.h>
#include <string.h>
#ifndef PubIfControlLATC_MDL_COMMON_INCLUDES_
#define PubIfControlLATC_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                               /* PubIfControlLATC_MDL_COMMON_INCLUDES_ */

#include "PubIfControlLATC_MDL_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Block signals for model 'PubIfControlLATC_MDL' */
#ifndef PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  VCAN_EPS_MSG_BUS BusAssignment;      /* '<Root>/Bus Assignment' */
  VCAN_CSA_MSG_BUS BusAssignment1;     /* '<Root>/Bus Assignment1' */
  real_T UnitDelay;                    /* '<S32>/Unit Delay' */
  real_T Add;                          /* '<S32>/Add' */
  real_T Switch;                       /* '<S32>/Switch' */
  real_T Max;                          /* '<S32>/Max' */
  real_T UnitDelay_l;                  /* '<S33>/Unit Delay' */
  real_T Add_e;                        /* '<S33>/Add' */
  real_T Switch_d;                     /* '<S33>/Switch' */
  real_T Max_i;                        /* '<S33>/Max' */
  real_T UnitDelay_h;                  /* '<S34>/Unit Delay' */
  real_T Add_c;                        /* '<S34>/Add' */
  real_T Switch_a;                     /* '<S34>/Switch' */
  real_T Max_e;                        /* '<S34>/Max' */
  real_T Add3;                         /* '<S15>/Add3' */
  real_T Gain1;                        /* '<S15>/Gain1' */
  real_T Product1;                     /* '<S15>/Product1' */
  real_T Add2;                         /* '<S15>/Add2' */
  real_T Abs;                          /* '<S15>/Abs' */
  real_T Product1_m;                   /* '<S64>/Product1' */
  real_T UnitDelay_i;                  /* '<S82>/Unit Delay' */
  real_T Add_g;                        /* '<S82>/Add' */
  real_T Switch_o;                     /* '<S82>/Switch' */
  real_T Max_n;                        /* '<S82>/Max' */
  real_T UnitDelay_c;                  /* '<S81>/Unit Delay' */
  real_T Add_b;                        /* '<S81>/Add' */
  real_T Switch_k;                     /* '<S81>/Switch' */
  real_T Max_e4;                       /* '<S81>/Max' */
  uint32_T LATC_SW_VERSION;            /* '<Root>/Constant' */
  real32_T SignalConversion1;          /* '<S4>/Signal Conversion1' */
  real32_T Abs2;                       /* '<S16>/Abs2' */
  real32_T Abs9;                       /* '<S16>/Abs9' */
  real32_T UnitDelay1;                 /* '<S16>/Unit Delay1' */
  real32_T Product1_g;                 /* '<S16>/Product1' */
  real32_T Product4;                   /* '<S30>/Product4' */
  real32_T SignalConversion4;          /* '<S4>/Signal Conversion4' */
  real32_T Memory2;                    /* '<S30>/Memory2' */
  real32_T Sum4;                       /* '<S30>/Sum4' */
  real32_T Product1_p;                 /* '<S30>/Product1' */
  real32_T Product4_n;                 /* '<S29>/Product4' */
  real32_T UnitDelay_n;                /* '<S16>/Unit Delay' */
  real32_T Add3_n;                     /* '<S16>/Add3' */
  real32_T Gain1_g;                    /* '<S16>/Gain1' */
  real32_T Memory2_a;                  /* '<S29>/Memory2' */
  real32_T Sum4_a;                     /* '<S29>/Sum4' */
  real32_T Product1_i;                 /* '<S29>/Product1' */
  real32_T Add1;                       /* '<S16>/Add1' */
  real32_T Gain3;                      /* '<S16>/Gain3' */
  real32_T Gain4;                      /* '<S16>/Gain4' */
  real32_T Sum;                        /* '<S16>/Sum' */
  real32_T ESS_SteerAngleErr;          /* '<S16>/ESS_SteerAngleErr' */
  real32_T UnitDelay3;                 /* '<S31>/Unit Delay3' */
  real32_T Gain3_d;                    /* '<S18>/Gain3' */
  real32_T Gain4_g;                    /* '<S18>/Gain4' */
  real32_T Sum_g;                      /* '<S18>/Sum' */
  real32_T SignalConversion5;          /* '<S4>/Signal Conversion5' */
  real32_T SignalConversion8;          /* '<S4>/Signal Conversion8' */
  real32_T SignalConversion2;          /* '<S4>/Signal Conversion2' */
  real32_T Bias1;                      /* '<S39>/Bias1' */
  real32_T Gain5;                      /* '<S39>/Gain5' */
  real32_T SignalCopy6;                /* '<S4>/Signal Copy6' */
  real32_T Product4_o;                 /* '<S43>/Product4' */
  real32_T Memory2_m;                  /* '<S43>/Memory2' */
  real32_T Sum4_h;                     /* '<S43>/Sum4' */
  real32_T Product1_a;                 /* '<S43>/Product1' */
  real32_T Sum5;                       /* '<S43>/Sum5' */
  real32_T Product4_f;                 /* '<S48>/Product4' */
  real32_T Memory2_h;                  /* '<S48>/Memory2' */
  real32_T Sum4_j;                     /* '<S48>/Sum4' */
  real32_T Product1_p2;                /* '<S48>/Product1' */
  real32_T Sum5_m;                     /* '<S48>/Sum5' */
  real32_T Product4_p;                 /* '<S44>/Product4' */
  real32_T Memory2_f;                  /* '<S44>/Memory2' */
  real32_T Sum4_m;                     /* '<S44>/Sum4' */
  real32_T Product1_gb;                /* '<S44>/Product1' */
  real32_T Sum5_d;                     /* '<S44>/Sum5' */
  real32_T Product4_a;                 /* '<S46>/Product4' */
  real32_T Memory2_i;                  /* '<S46>/Memory2' */
  real32_T Sum4_c;                     /* '<S46>/Sum4' */
  real32_T Product1_l;                 /* '<S46>/Product1' */
  real32_T Sum5_dw;                    /* '<S46>/Sum5' */
  real32_T Gain3_o;                    /* '<S41>/Gain3' */
  real32_T Gain4_i;                    /* '<S41>/Gain4' */
  real32_T MatrixQ1;                   /* '<S42>/MatrixQ1' */
  real32_T MatrixQ2;                   /* '<S42>/MatrixQ2' */
  real32_T MatrixR;                    /* '<S42>/MatrixR' */
  real32_T LCKMaxAy;                   /* '<S51>/LCKMaxAy' */
  real32_T LCKIEMaxAy;                 /* '<S51>/LCKIEMaxAy' */
  real32_T LCNomal_MaxAy;              /* '<S51>/LCNomal_MaxAy' */
  real32_T LKA_MaxAy;                  /* '<S51>/LKA_MaxAy' */
  real32_T ELK_MaxAy;                  /* '<S51>/ELK_MaxAy' */
  real32_T ESSAES_MaxAy;               /* '<S51>/ESS AES_MaxAy' */
  real32_T LC_Eco_MaxAy;               /* '<S51>/LC_Eco_MaxAy' */
  real32_T LC_SportMaxAy;              /* '<S51>/LC_SportMaxAy' */
  real32_T LC_CancelMaxAy;             /* '<S51>/LC_CancelMaxAy' */
  real32_T DataTypeConversion;         /* '<S51>/Data Type Conversion' */
  real32_T NoFunction2LCK;             /* '<S51>/No Function 2 LCK' */
  real32_T LCKIE_Active;               /* '<S51>/LCKIE_Active' */
  real32_T LCKIETOLC_Nomal;            /* '<S51>/LCK//IE TO LC_Nomal' */
  real32_T LKAActive;                  /* '<S51>/LKA Active' */
  real32_T ELKActive;                  /* '<S51>/ELK Active' */
  real32_T ESSAESActive;               /* '<S51>/ESS AES Active' */
  real32_T LCKIETOLC_Eco;              /* '<S51>/LCK//IE TO LC_Eco' */
  real32_T LCKIETOLC_Sport;            /* '<S51>/LCK//IE TO LC_Sport' */
  real32_T LCCancel;                   /* '<S51>/LC Cancel' */
  real32_T Min;                        /* '<S51>/Min' */
  real32_T DataTypeConversion1;        /* '<S51>/Data Type Conversion1' */
  real32_T FilterTime2;                /* '<S53>/FilterTime2' */
  real32_T Memory52;                   /* '<S53>/Memory52' */
  real32_T Sum_b;                      /* '<S53>/Sum' */
  real32_T Product4_au;                /* '<S60>/Product4' */
  real32_T Gain;                       /* '<S53>/Gain' */
  real32_T Abs_o;                      /* '<S53>/Abs' */
  real32_T UnitDelay_m;                /* '<S60>/Unit Delay' */
  real32_T Sum4_n;                     /* '<S60>/Sum4' */
  real32_T Product1_h;                 /* '<S60>/Product1' */
  real32_T Sum5_g;                     /* '<S60>/Sum5' */
  real32_T Saturation;                 /* '<S42>/Saturation' */
  real32_T UnitDelay_f;                /* '<S42>/Unit Delay' */
  real32_T UnitDelay1_d;               /* '<S42>/Unit Delay1' */
  real32_T TappedDelay1[5];            /* '<S50>/Tapped Delay1' */
  real32_T MinMax2;                    /* '<S50>/MinMax2' */
  real32_T MaxofElements1;             /* '<S50>/Max of Elements1' */
  real32_T SumofElements1;             /* '<S50>/Sum of Elements1' */
  real32_T Minus1;                     /* '<S50>/Minus1' */
  real32_T Memory2_ap;                 /* '<S45>/Memory2' */
  real32_T Product4_oh;                /* '<S45>/Product4' */
  real32_T Sum4_cc;                    /* '<S45>/Sum4' */
  real32_T Product1_l2;                /* '<S45>/Product1' */
  real32_T Sum5_e;                     /* '<S45>/Sum5' */
  real32_T Memory2_k;                  /* '<S47>/Memory2' */
  real32_T Product4_b;                 /* '<S47>/Product4' */
  real32_T Sum4_e;                     /* '<S47>/Sum4' */
  real32_T Product1_me;                /* '<S47>/Product1' */
  real32_T Sum5_a;                     /* '<S47>/Sum5' */
  real32_T Constant3;                  /* '<S42>/Constant3' */
  real32_T Product4_od;                /* '<S65>/Product4' */
  real32_T Abs4;                       /* '<S64>/Abs4' */
  real32_T Memory2_o;                  /* '<S65>/Memory2' */
  real32_T Sum4_e1;                    /* '<S65>/Sum4' */
  real32_T Product1_pf;                /* '<S65>/Product1' */
  real32_T Line_Plan_ayLimit11;        /* '<S64>/Line_Plan_ayLimit11' */
  real32_T Line_Plan_ayLimit19;        /* '<S64>/Line_Plan_ayLimit19' */
  real32_T Line_Plan_ayLimit10;        /* '<S64>/Line_Plan_ayLimit10' */
  real32_T Line_Plan_ayLimit12;        /* '<S64>/Line_Plan_ayLimit12' */
  real32_T Line_Plan_ayLimit13;        /* '<S64>/Line_Plan_ayLimit13' */
  real32_T Line_Plan_ayLimit14;        /* '<S64>/Line_Plan_ayLimit14' */
  real32_T Line_Plan_ayLimit15;        /* '<S64>/Line_Plan_ayLimit15' */
  real32_T Line_Plan_ayLimit16;        /* '<S64>/Line_Plan_ayLimit16' */
  real32_T Line_Plan_ayLimit17;        /* '<S64>/Line_Plan_ayLimit17' */
  real32_T DataTypeConversion_m;       /* '<S64>/Data Type Conversion' */
  real32_T Abs1;                       /* '<S64>/Abs1' */
  real32_T LCLKAELK_PreDis;            /* '<S64>/LC//LKA//ELK_PreDis' */
  real32_T Merge2;                     /* '<S68>/Merge2' */
  real32_T Line_Plan_preDis;           /* '<S64>/Line_Plan_preDis' */
  real32_T LCS_Plan_PreDisCurveFac_ratio;/* '<S64>/PreDis_Fac' */
  real32_T Merge;                      /* '<S68>/Merge' */
  real32_T Merge1;                     /* '<S68>/Merge1' */
  real32_T Bias2;                      /* '<S39>/Bias2' */
  real32_T Gain2;                      /* '<S39>/Gain2' */
  real32_T Abs1_o;                     /* '<S40>/Abs1' */
  real32_T MinMax;                     /* '<S40>/MinMax' */
  real32_T MinMax1;                    /* '<S40>/MinMax1' */
  real32_T Abs4_b;                     /* '<S38>/Abs4' */
  real32_T Memory2_c;                  /* '<S80>/Memory2' */
  real32_T DataTypeConversion_j;       /* '<S80>/Data Type Conversion' */
  real32_T Product5;                   /* '<S80>/Product5' */
  real32_T Product3;                   /* '<S80>/Product3' */
  real32_T Sum1;                       /* '<S80>/Sum1' */
  real32_T Switch1;                    /* '<S80>/Switch1' */
  real32_T LCS_EPS_LKATorqOvrlDlvd;    /* '<S4>/Product11' */
  real32_T PreCurve;                   /* '<S64>/MATLAB Function' */
  real32_T Ay[11];                     /* '<S62>/CartesianTrajectory' */
  real32_T break_AyValue;              /* '<S62>/CartesianTrajectory' */
  real32_T break_AyDtValue;            /* '<S62>/CartesianTrajectory' */
  real32_T AckConst;                   /* '<S53>/YOD_Ackman' */
  real32_T PsiDtAck;                   /* '<S53>/YOD_Ackman' */
  real32_T FilterTime2_d;              /* '<S59>/FilterTime2' */
  real32_T predis_ayFac1;              /* '<S59>/predis_ayFac1' */
  real32_T Product2;                   /* '<S59>/Product2' */
  real32_T UnitDelay_fo;               /* '<S59>/Unit Delay' */
  real32_T Sum6;                       /* '<S59>/Sum6' */
  real32_T Product6;                   /* '<S59>/Product6' */
  real32_T U_k;                        /* '<S42>/TarSteerAngleCalc' */
  real32_T delaytime;                  /* '<S31>/MATLAB Function' */
  uint16_T UnitDelay3_j;               /* '<S51>/Unit Delay3' */
  uint16_T UnitDelay3_f;               /* '<S64>/Unit Delay3' */
  uint16_T Cnt;                        /* '<S64>/MATLAB Function3' */
  uint16_T Cnt_o;                      /* '<S51>/MATLAB Function3' */
  uint8_T UnitDelay2;                  /* '<S31>/Unit Delay2' */
  uint8_T Switch1_n;                   /* '<S16>/Switch1' */
  uint8_T Switch3;                     /* '<S4>/Switch3' */
  uint8_T UnitDelay5;                  /* '<S51>/Unit Delay5' */
  uint8_T UnitDelay4;                  /* '<S51>/Unit Delay4' */
  uint8_T UnitDelay4_d;                /* '<S15>/Unit Delay4' */
  uint8_T UnitDelay5_c;                /* '<S64>/Unit Delay5' */
  uint8_T UnitDelay4_p;                /* '<S64>/Unit Delay4' */
  uint8_T Switch_aq;                   /* '<S4>/Switch' */
  uint8_T FixPtSum1;                   /* '<S5>/FixPt Sum1' */
  uint8_T FixPtSwitch;                 /* '<S6>/FixPt Switch' */
  uint8_T FLg;                         /* '<S64>/MATLAB Function3' */
  uint8_T break_Flg;                   /* '<S62>/CartesianTrajectory' */
  uint8_T flg;                         /* '<S31>/MATLAB Function' */
  uint8_T count;                       /* '<S15>/MATLAB Function1' */
  boolean_T Compare;                   /* '<S26>/Compare' */
  boolean_T Compare_m;                 /* '<S24>/Compare' */
  boolean_T Compare_c;                 /* '<S23>/Compare' */
  boolean_T LogicalOperator80;         /* '<S16>/Logical Operator80' */
  boolean_T RelationalOperator;        /* '<S16>/Relational Operator' */
  boolean_T AND1;                      /* '<S16>/AND1' */
  boolean_T Compare_h;                 /* '<S21>/Compare' */
  boolean_T Compare_f;                 /* '<S22>/Compare' */
  boolean_T UnitDelay4_f;              /* '<S31>/Unit Delay4' */
  boolean_T Compare_l;                 /* '<S7>/Compare' */
  boolean_T Compare_i;                 /* '<S12>/Compare' */
  boolean_T Compare_d;                 /* '<S10>/Compare' */
  boolean_T OR;                        /* '<S4>/OR' */
  boolean_T OR1;                       /* '<S4>/OR1' */
  boolean_T Switch7;                   /* '<S4>/Switch7' */
  boolean_T Switch_h;                  /* '<S16>/Switch' */
  boolean_T Compare_d4;                /* '<S8>/Compare' */
  boolean_T Compare_n;                 /* '<S9>/Compare' */
  boolean_T Compare_o;                 /* '<S13>/Compare' */
  boolean_T Compare_i5;                /* '<S14>/Compare' */
  boolean_T DataTypeConversion1_p;     /* '<S4>/Data Type Conversion1' */
  boolean_T SignalConversion6;         /* '<S4>/Signal Conversion6' */
  boolean_T SignalConversion7;         /* '<S4>/Signal Conversion7' */
  boolean_T SignalConversion3;         /* '<S4>/Signal Conversion3' */
  boolean_T Compare_b;                 /* '<S57>/Compare' */
  boolean_T Compare_j;                 /* '<S19>/Compare' */
  boolean_T UnitDelay1_o;              /* '<S15>/Unit Delay1' */
  boolean_T UnitDelay2_o;              /* '<S15>/Unit Delay2' */
  boolean_T LogicalOperator2;          /* '<S15>/Logical Operator2' */
  boolean_T Compare_na;                /* '<S78>/Compare' */
  boolean_T Compare_e;                 /* '<S76>/Compare' */
  boolean_T Compare_k;                 /* '<S79>/Compare' */
  boolean_T Compare_iv;                /* '<S77>/Compare' */
  boolean_T LogicalOperator1;          /* '<S38>/Logical Operator1' */
  boolean_T LogicalOperator;           /* '<S4>/Logical Operator' */
  boolean_T OR2;                       /* '<S4>/OR2' */
  boolean_T Switch4;                   /* '<S4>/Switch4' */
  boolean_T Switch8;                   /* '<S4>/Switch8' */
  boolean_T planValid;                 /* '<S62>/CartesianTrajectory' */
} B_PubIfControlLATC_MDL_c_T;

#endif                               /*PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'PubIfControlLATC_MDL' */
#ifndef PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S32>/Unit Delay' */
  real_T UnitDelay_DSTATE_j;           /* '<S33>/Unit Delay' */
  real_T UnitDelay_DSTATE_n;           /* '<S34>/Unit Delay' */
  real_T UnitDelay_DSTATE_o;           /* '<S82>/Unit Delay' */
  real_T UnitDelay_DSTATE_m;           /* '<S81>/Unit Delay' */
  real_T Add3_DWORK1;                  /* '<S15>/Add3' */
  real32_T UnitDelay1_DSTATE;          /* '<S16>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_k;         /* '<S16>/Unit Delay' */
  real32_T UnitDelay3_DSTATE;          /* '<S31>/Unit Delay3' */
  real32_T UnitDelay_DSTATE_c;         /* '<S60>/Unit Delay' */
  real32_T UnitDelay_DSTATE_i;         /* '<S42>/Unit Delay' */
  real32_T UnitDelay1_DSTATE_b;        /* '<S42>/Unit Delay1' */
  real32_T TappedDelay1_X[4];          /* '<S50>/Tapped Delay1' */
  real32_T UnitDelay_DSTATE_m1;        /* '<S59>/Unit Delay' */
  real32_T Memory2_PreviousInput;      /* '<S30>/Memory2' */
  real32_T Memory2_PreviousInput_m;    /* '<S29>/Memory2' */
  real32_T Memory2_PreviousInput_j;    /* '<S43>/Memory2' */
  real32_T Memory2_PreviousInput_h;    /* '<S48>/Memory2' */
  real32_T Memory2_PreviousInput_k;    /* '<S44>/Memory2' */
  real32_T Memory2_PreviousInput_e;    /* '<S46>/Memory2' */
  real32_T Memory52_PreviousInput;     /* '<S53>/Memory52' */
  real32_T Memory2_PreviousInput_g;    /* '<S45>/Memory2' */
  real32_T Memory2_PreviousInput_a;    /* '<S47>/Memory2' */
  real32_T Memory2_PreviousInput_f;    /* '<S65>/Memory2' */
  real32_T Memory2_PreviousInput_p;    /* '<S80>/Memory2' */
  uint16_T UnitDelay3_DSTATE_k;        /* '<S51>/Unit Delay3' */
  uint16_T UnitDelay3_DSTATE_e;        /* '<S64>/Unit Delay3' */
  uint8_T UnitDelay2_DSTATE;           /* '<S31>/Unit Delay2' */
  uint8_T Delay_DSTATE[2];             /* '<S17>/Delay' */
  uint8_T UnitDelay5_DSTATE;           /* '<S51>/Unit Delay5' */
  uint8_T UnitDelay4_DSTATE;           /* '<S51>/Unit Delay4' */
  uint8_T UnitDelay4_DSTATE_o;         /* '<S15>/Unit Delay4' */
  uint8_T UnitDelay5_DSTATE_p;         /* '<S64>/Unit Delay5' */
  uint8_T UnitDelay4_DSTATE_c;         /* '<S64>/Unit Delay4' */
  uint8_T Output_DSTATE;               /* '<S3>/Output' */
  boolean_T UnitDelay4_DSTATE_m;       /* '<S31>/Unit Delay4' */
  boolean_T UnitDelay1_DSTATE_k;       /* '<S15>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S15>/Unit Delay2' */
  uint8_T is_active_c4_PubIfControlLATC_MDL;/* '<S38>/Chart' */
  uint8_T is_c4_PubIfControlLATC_MDL;  /* '<S38>/Chart' */
} DW_PubIfControlLATC_MDL_f_T;

#endif                               /*PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_*/

/* Invariant block signals for model 'PubIfControlLATC_MDL' */
#ifndef PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  const real_T Abs2;                   /* '<S53>/Abs2' */
  const real32_T HWP_AngCmdReqVal;     /* '<S2>/Constant2' */
  const real32_T HWP_TrqOvlCmdReqValue;/* '<S2>/Constant4' */
  const real32_T Abs;                  /* '<S64>/Abs' */
  const real32_T Product4;             /* '<S80>/Product4' */
  const real32_T Add;                  /* '<S80>/Add' */
  const real32_T Product2;             /* '<S80>/Product2' */
  const real32_T Add1;                 /* '<S80>/Add1' */
  const uint8_T HWP_FuncTrqCmdReqFlag; /* '<S2>/Constant3' */
  const boolean_T HWP_AngCmdReqValVld; /* '<S2>/Constant1' */
  const boolean_T Compare;             /* '<S11>/Compare' */
  const boolean_T Compare_f;           /* '<S58>/Compare' */
  const boolean_T Constant10;          /* '<S4>/Constant10' */
} ConstB_PubIfControlLATC_MDL_h_T;

#endif                               /*PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_PubIfControlLATC_MDL_T {
  const char_T **errorStatus;
};

#endif                               /*PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_PubIfControlLATC_MDL_T rtm;
} MdlrefDW_PubIfControlLATC_MDL_T;

#endif                               /*PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_*/

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T LCS_LATC_HoldTime_s;     /* '<S51>/Product' */
extern real_T LCS_PLAN_Trajectory_NumTraj;/* '<S62>/CartesianTrajectory' */
extern uint32_T LCS_SubModel_Number;   /* '<S2>/SW_Branch' */
extern uint32_T LCS_SubModel_VERSION;  /* '<S2>/SW_VERSION' */
extern real32_T LCS_IN_EPS_DrvInpTrqVal;/* '<S4>/Data Type Conversion5' */
extern real32_T LCS_IN_SteerWheelSpd;  /* '<S4>/Data Type Conversion48' */
extern real32_T LCS_ESS_SteerWheelAngleSpd;/* '<S16>/Abs1' */
extern real32_T LCS_ESS_SteerWheelAngleSpdFilter;/* '<S30>/Sum5' */
extern real32_T LCS_ESS_TarAngleSpd;   /* '<S16>/Abs' */
extern real32_T LCS_ESS_TarAngleSpdFilter;/* '<S29>/Sum5' */
extern real32_T LCS_IN_vxvRefMs;       /* '<S4>/Signal Copy' */
extern real32_T LCS_IN_SteerWheelSpdSign;/* '<S4>/Data Type Conversion3' */
extern real32_T LCS_IN_SteerWheelAngleSign;/* '<S4>/Data Type Conversion4' */
extern real32_T LCS_IN_SteerWheelAng;  /* '<S4>/Data Type Conversion49' */
extern real32_T LCS_IN_CurrentLaneWidth;/* '<S4>/Data Type Conversion50' */
extern real32_T LCS_IN_EPS_LKATorqOvrlDlvd;/* '<S4>/Data Type Conversion6' */
extern real32_T LCS_IN_EPS_LKATorqOvrlDlvdVld;/* '<S4>/Data Type Conversion7' */
extern real32_T LCS_IN_CurSteerAngle_deg;/* '<S39>/Product5' */
extern real32_T LCS_IN_SteerAngOffset_deg;/* '<S4>/Switch1' */
extern real32_T LCS_LATC_CorrectSteerAngle_deg;/* '<S42>/Add' */
extern real32_T LCS_IN_Spd_Kph;        /* '<S41>/Sum' */
extern real32_T LCS_LATC_MaxAy_ms2;    /* '<S51>/Multiport Switch2' */
extern real32_T LCS_LATC_StateActAngleSlope_degs;/* '<S51>/Merge' */
extern real32_T LCS_LATC_StateAngleSlope_degs;/* '<S51>/Multiport Switch1' */
extern real32_T LCS_IN_psiDtOpt;       /* '<S4>/Signal Copy5' */
extern real32_T LCS_IN_desLaneA2;      /* '<S4>/Signal Conversion13' */
extern real32_T LCS_LATC_TarAngleFilter_deg;/* '<S50>/Divide1' */
extern real32_T LCS_LATC_OutTrgSteerAngle;/* '<S42>/Signal Copy' */
extern real32_T LCS_IN_kapTraj;        /* '<S4>/Signal Copy3' */
extern real32_T LCS_IN_axvRefMs2;      /* '<S4>/Signal Copy1' */
extern real32_T LCS_IN_desLaneA3;      /* '<S4>/Signal Conversion12' */
extern real32_T LCS_IN_desLaneA1;      /* '<S4>/Signal Conversion14' */
extern real32_T LCS_IN_desLaneA0;      /* '<S4>/Signal Copy7' */
extern real32_T LCS_PreDisCurve_m;     /* '<S65>/Sum5' */
extern real32_T LCS_Plan_AyDtlimit;    /* '<S64>/Multiport Switch3' */
extern real32_T LCS_Plan_FinalpreDis;  /* '<S64>/Product11' */
extern real32_T LCS_CurSteerAngle_deg; /* '<S39>/Add1' */
extern real32_T LCS_IN_SteerAngleSpd_degs;/* '<S39>/Product4' */
extern real32_T LCS_EqA0;              /* '<S40>/Divide' */
extern real32_T LCS_IN_ayvRefMs2;      /* '<S4>/Signal Copy2' */
extern real32_T LCS_IN_alpSideSlipAngle;/* '<S4>/Signal Copy4' */
extern real32_T LCS_PLAN_TrajectoryX[11];/* '<S62>/CartesianTrajectory' */
extern real32_T LCS_PLAN_Trajectory_PlanY[11];/* '<S62>/CartesianTrajectory' */
extern real32_T LCS_LATC_PlanT;        /* '<S62>/CartesianTrajectory' */
extern real32_T LCS_LATC_PlanLength;   /* '<S62>/CartesianTrajectory' */
extern real32_T LCS_LATC_PlanAyDt[11]; /* '<S62>/CartesianTrajectory' */
extern real32_T LCS_LATC_CurrentSteerAngleOffset_deg;/* '<S59>/Sum7' */
extern real32_T LCS_LATC_SteerAngleCmd_deg;/* '<S42>/TarSteerAngleCalc' */
extern real32_T LCS_LATC_Feedforward_deg;/* '<S42>/TarSteerAngleCalc' */
extern real32_T LCS_LATC_Feedback_deg; /* '<S42>/TarSteerAngleCalc' */
extern real32_T LCS_LATC_SteerAngleLimit_deg;/* '<S42>/TarSteerAngleCalc' */
extern real32_T LCS_LATC_MatrixResult_deg[6];/* '<S42>/TarSteerAngleCalc' */
extern real32_T LCS_LATC_TarAngle_deg; /* '<S42>/TarSteerAngleCalc' */
extern real32_T LCS_LATC_MPCDeltaT_s;  /* '<S42>/MATLAB Function' */
extern uint8_T LCS_Trq_Switch;         /* '<S2>/Constant8' */
extern uint8_T LCS_IN_EPS_FailSts;     /* '<S4>/Signal Conversion11' */
extern uint8_T LCS_IN_EPS_LKATrqOvlDlvdSts;/* '<S4>/Signal Conversion10' */
extern uint8_T LCS_IN_TarDangerlLevel_Delay2Frame;/* '<S17>/Delay' */
extern uint8_T LCS_IN_TarDangerlLevel; /* '<S17>/Signal Copy6' */
extern uint8_T LCS_OUT_AngCmdReqValVld;/* '<S4>/Switch2' */
extern uint8_T LCS_Counter;            /* '<S3>/Output' */
extern uint8_T LCS_IN_EPS_LKAAngDlvdSts;/* '<S4>/Signal Conversion9' */
extern uint8_T LCS_LATC_AngleSlopeFlg_st;/* '<S51>/MATLAB Function3' */
extern uint8_T LCS_EPSFault;           /* '<S15>/MATLAB Function1' */
extern boolean_T LCS_ESS_NotActiveFlg1;/* '<S27>/Compare' */
extern boolean_T LCS_ESS_NotActiveFlg2;/* '<S25>/Compare' */
extern boolean_T LCS_ESS_NotActiveFlg3;/* '<S28>/Compare' */
extern boolean_T LCS_ESS_NotActiveFlgOriginal;/* '<S16>/AND' */
extern boolean_T LCS_ESS_NotActiveFlg; /* '<S16>/Switch2' */
extern boolean_T LCS_IN_desLaneValid;  /* '<S17>/Signal Copy4' */
extern boolean_T LCS_OffSetUpdate_Flg; /* '<S53>/Logical Operator' */
extern boolean_T LCS_OverRideDetect_b; /* '<S38>/Chart' */
extern boolean_T LCS_ESS_NotActiveDelayFlg;/* '<S31>/MATLAB Function' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T P_LCS_ESSOverrideTime1;  /* Variable: P_LCS_ESSOverrideTime1
                                        * Referenced by: '<S25>/Constant'
                                        */
extern real_T P_LCS_ESSOverrideTime2;  /* Variable: P_LCS_ESSOverrideTime2
                                        * Referenced by: '<S27>/Constant'
                                        */
extern real_T P_LCS_ESSOverrideTime3;  /* Variable: P_LCS_ESSOverrideTime3
                                        * Referenced by: '<S28>/Constant'
                                        */
extern real_T P_LCS_LATC_StateActiveHoldTime_TabY_st[15];
                             /* Variable: P_LCS_LATC_StateActiveHoldTime_TabY_st
                              * Referenced by: '<S55>/LC_start_slope'
                              */
extern real_T P_LCS_LATC_TarAngleFliterWindowSize;
                                /* Variable: P_LCS_LATC_TarAngleFliterWindowSize
                                 * Referenced by: '<S50>/Constant11'
                                 */
extern real_T P_LCS_NoOverRideTime_TH_s;/* Variable: P_LCS_NoOverRideTime_TH_s
                                         * Referenced by: '<S77>/Constant'
                                         */
extern real_T P_LCS_OverRideDetect_b;  /* Variable: P_LCS_OverRideDetect_b
                                        * Referenced by: '<S38>/Constant15'
                                        */
extern real_T P_LCS_OverRideTime_TH_s; /* Variable: P_LCS_OverRideTime_TH_s
                                        * Referenced by: '<S76>/Constant'
                                        */
extern real_T P_LCS_PLAN_StateActiveHoldTime_TabY_s[15];
                              /* Variable: P_LCS_PLAN_StateActiveHoldTime_TabY_s
                               * Referenced by:
                               *   '<S69>/LC_start_slope'
                               *   '<S71>/LC_start_slope'
                               *   '<S74>/LC_start_slope'
                               */
extern real32_T P_Global_CharSpd_ms;   /* Variable: P_Global_CharSpd_ms
                                        * Referenced by: '<S53>/Constant4'
                                        */
extern real32_T P_Global_SteeringAngleRatio;/* Variable: P_Global_SteeringAngleRatio
                                             * Referenced by:
                                             *   '<S42>/Constant'
                                             *   '<S53>/Constant1'
                                             *   '<S59>/Constant7'
                                             */
extern real32_T P_Global_WheelBase_m;  /* Variable: P_Global_WheelBase_m
                                        * Referenced by: '<S53>/Constant5'
                                        */
extern real32_T P_LCS_DetNoOverRide_DrvTrq_TH;
                                      /* Variable: P_LCS_DetNoOverRide_DrvTrq_TH
                                       * Referenced by: '<S79>/Constant'
                                       */
extern real32_T P_LCS_DetOverRide_DrvTrq_TH;/* Variable: P_LCS_DetOverRide_DrvTrq_TH
                                             * Referenced by: '<S78>/Constant'
                                             */
extern real32_T P_LCS_ESSOverrideValue1;/* Variable: P_LCS_ESSOverrideValue1
                                         * Referenced by: '<S24>/Constant'
                                         */
extern real32_T P_LCS_ESSOverrideValue2;/* Variable: P_LCS_ESSOverrideValue2
                                         * Referenced by: '<S26>/Constant'
                                         */
extern real32_T P_LCS_ESS_NotActiveFlgDelayTime;
                                    /* Variable: P_LCS_ESS_NotActiveFlgDelayTime
                                     * Referenced by: '<S16>/Constant6'
                                     */
extern real32_T P_LCS_ESS_NotActiveFlgDelayTimeSW;
                                  /* Variable: P_LCS_ESS_NotActiveFlgDelayTimeSW
                                   * Referenced by: '<S16>/Constant5'
                                   */
extern real32_T P_LCS_ESS_SteerAngleErr[12];/* Variable: P_LCS_ESS_SteerAngleErr
                                             * Referenced by: '<S16>/ESS_SteerAngleErr'
                                             */
extern real32_T P_LCS_ESS_SteerAngleFilterTime;
                                     /* Variable: P_LCS_ESS_SteerAngleFilterTime
                                      * Referenced by: '<S16>/Constant1'
                                      */
extern real32_T P_LCS_ESS_TarAngleFilterTime;/* Variable: P_LCS_ESS_TarAngleFilterTime
                                              * Referenced by: '<S16>/Constant4'
                                              */
extern real32_T P_LCS_IN_Offset_Test_Value;/* Variable: P_LCS_IN_Offset_Test_Value
                                            * Referenced by: '<S4>/Constant2'
                                            */
extern real32_T P_LCS_LATC_CurOffsetA2FliterT_s;
                                    /* Variable: P_LCS_LATC_CurOffsetA2FliterT_s
                                     * Referenced by: '<S53>/Constant2'
                                     */
extern real32_T P_LCS_LATC_CurOffsetCurveFliterTime_Tab_s[10];
                          /* Variable: P_LCS_LATC_CurOffsetCurveFliterTime_Tab_s
                           * Referenced by: '<S59>/predis_ayFac1'
                           */
extern real32_T P_LCS_LATC_CurOffsetCurve_TabX_m[10];
                                   /* Variable: P_LCS_LATC_CurOffsetCurve_TabX_m
                                    * Referenced by: '<S59>/predis_ayFac1'
                                    */
extern real32_T P_LCS_LATC_CurOffsetVehicleSpdLimitValue_degs;
                      /* Variable: P_LCS_LATC_CurOffsetVehicleSpdLimitValue_degs
                       * Referenced by: '<S57>/Constant'
                       */
extern real32_T P_LCS_LATC_ELKAngleSlope_ratio[16];
                                     /* Variable: P_LCS_LATC_ELKAngleSlope_ratio
                                      * Referenced by: '<S51>/ELK Active'
                                      */
extern real32_T P_LCS_LATC_ELKMaxLatAcc_ms2[16];/* Variable: P_LCS_LATC_ELKMaxLatAcc_ms2
                                                 * Referenced by: '<S51>/ELK_MaxAy'
                                                 */
extern real32_T P_LCS_LATC_ESSAngleSlope_ratio[16];
                                     /* Variable: P_LCS_LATC_ESSAngleSlope_ratio
                                      * Referenced by: '<S51>/ESS AES Active'
                                      */
extern real32_T P_LCS_LATC_ESSMaxLatAcc_ms2[16];/* Variable: P_LCS_LATC_ESSMaxLatAcc_ms2
                                                 * Referenced by: '<S51>/ESS AES_MaxAy'
                                                 */
extern real32_T P_LCS_LATC_LCAngleSlope_ratio[16];
                                      /* Variable: P_LCS_LATC_LCAngleSlope_ratio
                                       * Referenced by: '<S51>/LC Cancel'
                                       */
extern real32_T P_LCS_LATC_LCCancleMaxLatAcc_ms2[16];
                                   /* Variable: P_LCS_LATC_LCCancleMaxLatAcc_ms2
                                    * Referenced by: '<S51>/LC_CancelMaxAy'
                                    */
extern real32_T P_LCS_LATC_LCEcoAngleSlope_ratio[16];
                                   /* Variable: P_LCS_LATC_LCEcoAngleSlope_ratio
                                    * Referenced by: '<S51>/LCK//IE TO LC_Eco'
                                    */
extern real32_T P_LCS_LATC_LCEcoMaxLatAcc_ms2[16];
                                      /* Variable: P_LCS_LATC_LCEcoMaxLatAcc_ms2
                                       * Referenced by: '<S51>/LC_Eco_MaxAy'
                                       */
extern real32_T P_LCS_LATC_LCKAngleSlope_ratio[16];
                                     /* Variable: P_LCS_LATC_LCKAngleSlope_ratio
                                      * Referenced by: '<S51>/No Function 2 LCK'
                                      */
extern real32_T P_LCS_LATC_LCKIEAngleSlope_ratio[16];
                                   /* Variable: P_LCS_LATC_LCKIEAngleSlope_ratio
                                    * Referenced by: '<S51>/LCKIE_Active'
                                    */
extern real32_T P_LCS_LATC_LCKIEMaxLatAcc_ms2[16];
                                      /* Variable: P_LCS_LATC_LCKIEMaxLatAcc_ms2
                                       * Referenced by: '<S51>/LCKIEMaxAy'
                                       */
extern real32_T P_LCS_LATC_LCKMaxLatAcc_ms2[16];/* Variable: P_LCS_LATC_LCKMaxLatAcc_ms2
                                                 * Referenced by: '<S51>/LCKMaxAy'
                                                 */
extern real32_T P_LCS_LATC_LCNormalAngleSlope_ratio[16];
                                /* Variable: P_LCS_LATC_LCNormalAngleSlope_ratio
                                 * Referenced by: '<S51>/LCK//IE TO LC_Nomal'
                                 */
extern real32_T P_LCS_LATC_LCNormalMaxLatAcc_ms2[16];
                                   /* Variable: P_LCS_LATC_LCNormalMaxLatAcc_ms2
                                    * Referenced by: '<S51>/LCNomal_MaxAy'
                                    */
extern real32_T P_LCS_LATC_LCSportAngleSlope_ratio[16];
                                 /* Variable: P_LCS_LATC_LCSportAngleSlope_ratio
                                  * Referenced by: '<S51>/LCK//IE TO LC_Sport'
                                  */
extern real32_T P_LCS_LATC_LCSportMaxLatAcc_ms2[16];
                                    /* Variable: P_LCS_LATC_LCSportMaxLatAcc_ms2
                                     * Referenced by: '<S51>/LC_SportMaxAy'
                                     */
extern real32_T P_LCS_LATC_LKAAngleSlope_ratio[16];
                                     /* Variable: P_LCS_LATC_LKAAngleSlope_ratio
                                      * Referenced by: '<S51>/LKA Active'
                                      */
extern real32_T P_LCS_LATC_LKAMaxLatAcc_ms2[16];/* Variable: P_LCS_LATC_LKAMaxLatAcc_ms2
                                                 * Referenced by: '<S51>/LKA_MaxAy'
                                                 */
extern real32_T P_LCS_LATC_MPCDeltaT_s;/* Variable: P_LCS_LATC_MPCDeltaT_s
                                        * Referenced by: '<S42>/Constant3'
                                        */
extern real32_T P_LCS_LATC_MPCMatrixQ1_st[16];/* Variable: P_LCS_LATC_MPCMatrixQ1_st
                                               * Referenced by: '<S42>/MatrixQ1'
                                               */
extern real32_T P_LCS_LATC_MPCMatrixQ2_st[16];/* Variable: P_LCS_LATC_MPCMatrixQ2_st
                                               * Referenced by: '<S42>/MatrixQ2'
                                               */
extern real32_T P_LCS_LATC_MPCMatrixR_st[16];/* Variable: P_LCS_LATC_MPCMatrixR_st
                                              * Referenced by: '<S42>/MatrixR'
                                              */
extern real32_T P_LCS_LATC_MPCMaxSterAngleSpd_degs;
                                 /* Variable: P_LCS_LATC_MPCMaxSterAngleSpd_degs
                                  * Referenced by: '<S42>/Constant2'
                                  */
extern real32_T P_LCS_LATC_MPCMaxSterAngle_deg;
                                     /* Variable: P_LCS_LATC_MPCMaxSterAngle_deg
                                      * Referenced by: '<S42>/Constant1'
                                      */
extern real32_T P_LCS_LATC_StateActivAngleSlopeLimit_ratio[75];
                         /* Variable: P_LCS_LATC_StateActivAngleSlopeLimit_ratio
                          * Referenced by: '<S55>/LC_start_slope'
                          */
extern real32_T P_LCS_LATC_VehicleSpd_TabX_Kph[12];
                                     /* Variable: P_LCS_LATC_VehicleSpd_TabX_Kph
                                      * Referenced by: '<S16>/ESS_SteerAngleErr'
                                      */
extern real32_T P_LCS_LCC_HeadingErRrateTime_s;
                                     /* Variable: P_LCS_LCC_HeadingErRrateTime_s
                                      * Referenced by: '<S42>/Constant8'
                                      */
extern real32_T P_LCS_LCC_HeadingErrTime_s;/* Variable: P_LCS_LCC_HeadingErrTime_s
                                            * Referenced by: '<S42>/Constant7'
                                            */
extern real32_T P_LCS_LCC_LaterErrRateTime_s;/* Variable: P_LCS_LCC_LaterErrRateTime_s
                                              * Referenced by: '<S42>/Constant6'
                                              */
extern real32_T P_LCS_LCC_LaterErrTime_s;/* Variable: P_LCS_LCC_LaterErrTime_s
                                          * Referenced by: '<S42>/Constant5'
                                          */
extern real32_T P_LCS_LCC_RefThetaTime_s;/* Variable: P_LCS_LCC_RefThetaTime_s
                                          * Referenced by: '<S42>/Constant9'
                                          */
extern real32_T P_LCS_LCC_RefcurveTime_s;/* Variable: P_LCS_LCC_RefcurveTime_s
                                          * Referenced by: '<S42>/Constant4'
                                          */
extern real32_T P_LCS_PLAN_A2FliterTime_s;/* Variable: P_LCS_PLAN_A2FliterTime_s
                                           * Referenced by: '<S64>/Constant20'
                                           */
extern real32_T P_LCS_PLAN_DesLineA0_TabX_m[7];/* Variable: P_LCS_PLAN_DesLineA0_TabX_m
                                                * Referenced by: '<S64>/PreDis_Fac'
                                                */
extern real32_T P_LCS_PLAN_DesLineA0_TabY_m[7];/* Variable: P_LCS_PLAN_DesLineA0_TabY_m
                                                * Referenced by: '<S64>/LC//LKA//ELK_PreDis'
                                                */
extern real32_T P_LCS_PLAN_DisFac_Tab_ratio;/* Variable: P_LCS_PLAN_DisFac_Tab_ratio
                                             * Referenced by: '<S62>/Constant10'
                                             */
extern real32_T P_LCS_PLAN_LCCompletePreDisFac_Tab_ratio[45];
                           /* Variable: P_LCS_PLAN_LCCompletePreDisFac_Tab_ratio
                            * Referenced by: '<S74>/LC_start_slope'
                            */
extern real32_T P_LCS_PLAN_LCKAyDtLimit_Tab_ms3[208];
                                    /* Variable: P_LCS_PLAN_LCKAyDtLimit_Tab_ms3
                                     * Referenced by: '<S64>/Line_Plan_ayLimit11'
                                     */
extern real32_T P_LCS_PLAN_LCPreDisFac_ratio[21];/* Variable: P_LCS_PLAN_LCPreDisFac_ratio
                                                  * Referenced by: '<S64>/LC//LKA//ELK_PreDis'
                                                  */
extern real32_T P_LCS_PLAN_MinDis_m;   /* Variable: P_LCS_PLAN_MinDis_m
                                        * Referenced by: '<S62>/Constant2'
                                        */
extern real32_T P_LCS_PLAN_PreDisCurve_TabX_m[13];
                                      /* Variable: P_LCS_PLAN_PreDisCurve_TabX_m
                                       * Referenced by:
                                       *   '<S64>/Line_Plan_ayLimit10'
                                       *   '<S64>/Line_Plan_ayLimit11'
                                       *   '<S64>/Line_Plan_ayLimit12'
                                       *   '<S64>/Line_Plan_ayLimit13'
                                       *   '<S64>/Line_Plan_ayLimit14'
                                       *   '<S64>/Line_Plan_ayLimit15'
                                       *   '<S64>/Line_Plan_ayLimit16'
                                       *   '<S64>/Line_Plan_ayLimit17'
                                       *   '<S64>/Line_Plan_ayLimit19'
                                       */
extern real32_T P_LCS_PLAN_PreDis_Tab_m[16];/* Variable: P_LCS_PLAN_PreDis_Tab_m
                                             * Referenced by: '<S64>/Line_Plan_preDis'
                                             */
extern real32_T P_LCS_PLAN_StateActivAngleSlope_Tab_ratio[75];
                          /* Variable: P_LCS_PLAN_StateActivAngleSlope_Tab_ratio
                           * Referenced by: '<S69>/LC_start_slope'
                           */
extern real32_T P_LCS_PLAN_StateCompleteAngleSlope_Tab_ratio[45];
                       /* Variable: P_LCS_PLAN_StateCompleteAngleSlope_Tab_ratio
                        * Referenced by: '<S71>/LC_start_slope'
                        */
extern real32_T P_LCS_PLAN_TarDangerlLevel_Tabx_st[3];
                                 /* Variable: P_LCS_PLAN_TarDangerlLevel_Tabx_st
                                  * Referenced by: '<S64>/LC//LKA//ELK_PreDis'
                                  */
extern real32_T P_LCS_PLAN_VehicleSpd_TabY_Kph[16];
                                     /* Variable: P_LCS_PLAN_VehicleSpd_TabY_Kph
                                      * Referenced by:
                                      *   '<S64>/Line_Plan_ayLimit10'
                                      *   '<S64>/Line_Plan_ayLimit11'
                                      *   '<S64>/Line_Plan_ayLimit12'
                                      *   '<S64>/Line_Plan_ayLimit13'
                                      *   '<S64>/Line_Plan_ayLimit14'
                                      *   '<S64>/Line_Plan_ayLimit15'
                                      *   '<S64>/Line_Plan_ayLimit16'
                                      *   '<S64>/Line_Plan_ayLimit17'
                                      *   '<S64>/Line_Plan_ayLimit19'
                                      */
extern real32_T P_LCS_PlLAN_PreDisFac_Tab_ratio[91];
                                    /* Variable: P_LCS_PlLAN_PreDisFac_Tab_ratio
                                     * Referenced by: '<S64>/PreDis_Fac'
                                     */
extern real32_T P_LCS_Plan_A2Pretime_s;/* Variable: P_LCS_Plan_A2Pretime_s
                                        * Referenced by: '<S64>/Constant13'
                                        */
extern real32_T P_LCS_Plan_ELKAyDtLimit_Tab_ms3[208];
                                    /* Variable: P_LCS_Plan_ELKAyDtLimit_Tab_ms3
                                     * Referenced by: '<S64>/Line_Plan_ayLimit13'
                                     */
extern real32_T P_LCS_Plan_LCAyDtLimit_Tab_ms3[208];
                                     /* Variable: P_LCS_Plan_LCAyDtLimit_Tab_ms3
                                      * Referenced by: '<S64>/Line_Plan_ayLimit17'
                                      */
extern real32_T P_LCS_Plan_LCKIEAyDtLimit_Tab_ms3[208];
                                  /* Variable: P_LCS_Plan_LCKIEAyDtLimit_Tab_ms3
                                   * Referenced by: '<S64>/Line_Plan_ayLimit19'
                                   */
extern real32_T P_LCS_Plan_LCNomalAyDtLimit_Tab_ms3[208];
                                /* Variable: P_LCS_Plan_LCNomalAyDtLimit_Tab_ms3
                                 * Referenced by: '<S64>/Line_Plan_ayLimit10'
                                 */
extern real32_T P_LCS_Plan_LCSportAyDtLimit_Tab_ms3[208];
                                /* Variable: P_LCS_Plan_LCSportAyDtLimit_Tab_ms3
                                 * Referenced by: '<S64>/Line_Plan_ayLimit16'
                                 */
extern real32_T P_LCS_Plan_LKAAyDtLimit_Tab_ms3[208];
                                    /* Variable: P_LCS_Plan_LKAAyDtLimit_Tab_ms3
                                     * Referenced by: '<S64>/Line_Plan_ayLimit12'
                                     */
extern real32_T P_LCS_VehicleSpd_TabX_Kph[16];/* Variable: P_LCS_VehicleSpd_TabX_Kph
                                               * Referenced by:
                                               *   '<S42>/MatrixQ1'
                                               *   '<S42>/MatrixQ2'
                                               *   '<S42>/MatrixR'
                                               *   '<S51>/ELK Active'
                                               *   '<S51>/ELK_MaxAy'
                                               *   '<S51>/ESS AES Active'
                                               *   '<S51>/ESS AES_MaxAy'
                                               *   '<S51>/LC Cancel'
                                               *   '<S51>/LCK//IE TO LC_Eco'
                                               *   '<S51>/LCK//IE TO LC_Nomal'
                                               *   '<S51>/LCK//IE TO LC_Sport'
                                               *   '<S51>/LCKIEMaxAy'
                                               *   '<S51>/LCKIE_Active'
                                               *   '<S51>/LCKMaxAy'
                                               *   '<S51>/LCNomal_MaxAy'
                                               *   '<S51>/LC_CancelMaxAy'
                                               *   '<S51>/LC_Eco_MaxAy'
                                               *   '<S51>/LC_SportMaxAy'
                                               *   '<S51>/LKA Active'
                                               *   '<S51>/LKA_MaxAy'
                                               *   '<S51>/No Function 2 LCK'
                                               */
extern uint16_T P_LCS_LATC_StateHoldTime_st;/* Variable: P_LCS_LATC_StateHoldTime_st
                                             * Referenced by: '<S51>/Constant2'
                                             */
extern uint16_T P_LCS_PLAN_StateHoldTime_st;/* Variable: P_LCS_PLAN_StateHoldTime_st
                                             * Referenced by: '<S64>/Constant1'
                                             */
extern boolean_T P_LCS_ESS_LogicTest_Enable;/* Variable: P_LCS_ESS_LogicTest_Enable
                                             * Referenced by: '<S16>/Constant3'
                                             */
extern uint8_T P_LCS_IN_Offset_Test_SW;/* Variable: P_LCS_IN_Offset_Test_SW
                                        * Referenced by: '<S4>/Constant1'
                                        */
extern uint8_T P_LCS_LATC_StateActiveFlg_TabX_st[5];
                                  /* Variable: P_LCS_LATC_StateActiveFlg_TabX_st
                                   * Referenced by: '<S55>/LC_start_slope'
                                   */
extern uint8_T P_LCS_PLAN_StateActiveFlg_TabX_st[5];
                                  /* Variable: P_LCS_PLAN_StateActiveFlg_TabX_st
                                   * Referenced by: '<S69>/LC_start_slope'
                                   */
extern uint8_T P_LCS_PLAN_StateCompleteFlg_TabX_st[3];
                                /* Variable: P_LCS_PLAN_StateCompleteFlg_TabX_st
                                 * Referenced by:
                                 *   '<S71>/LC_start_slope'
                                 *   '<S74>/LC_start_slope'
                                 */
extern uint8_T P_LCS_Trq_Switch;       /* Variable: P_LCS_Trq_Switch
                                        * Referenced by: '<S2>/Constant8'
                                        */
extern void PubIfControlLATC_MDL_Init(void);
extern void PubIfControlLATC_MDL_Reset(void);
extern void PubIfControlLATC_MDL_Start(void);
extern void PubIfControlLATC_MDL_Update(void);
extern void PubIfControlLATC_MDL(const VSM_LAT_CTRL_BUS *rtu_VSM_LAT_CTRL, const
  real32_T *rtu_vxvRefMs, const real32_T *rtu_axvRefMs2, const real32_T
  *rtu_ayvRefMs2, const real32_T *rtu_kapTraj, const real32_T
  *rtu_alpSideSlipAngle, const real32_T *rtu_psiDtOpt, const real32_T
  *rtu_SteerAngOffset_deg, const LATC_VCAN_EPS_BUS *rtu_LATC_VCAN_EPS, const
  LATC_VCAN_CSA_BUS *rtu_LATC_VCAN_CSA, const RFM_ROAD_BUS *rtu_RFM_ROAD,
  real32_T *rty_IFCTrqOvlCmdReqValue, uint8_T *rty_IFCFuncTrqCmdReqFlag, uint8_T
  *rty_LATC_IFCFuncAngCmdReqFlag, real32_T *rty_LATC_IFCAngCmdReqValue);

/* Model reference registration function */
extern void PubIfControlLATC_MDL_initialize(const char_T **rt_errorStatus);

#ifndef PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_

extern void PubIfControlLATC_MDL_SwitchCaseActionSubsystem1(real32_T *rty_Out1);

#endif                               /*PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_*/

extern const VCAN_EPS_MSG_BUS PubIfControlLATC_MDL_rtZVCAN_EPS_MSG_BUS;/* VCAN_EPS_MSG_BUS ground */
extern const VCAN_CSA_MSG_BUS PubIfControlLATC_MDL_rtZVCAN_CSA_MSG_BUS;/* VCAN_CSA_MSG_BUS ground */

#ifndef PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_

extern MdlrefDW_PubIfControlLATC_MDL_T PubIfControlLATC_MDL_MdlrefDW;

#endif                               /*PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_PubIfControlLATC_MDL_c_T PubIfControlLATC_MDL_B;

/* Block states (default storage) */
extern DW_PubIfControlLATC_MDL_f_T PubIfControlLATC_MDL_DW;

#endif                               /*PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'PubIfControlLATC_MDL'
 * '<S1>'   : 'PubIfControlLATC_MDL/Subsystem Reference'
 * '<S2>'   : 'PubIfControlLATC_MDL/Subsystem Reference/LATC'
 * '<S3>'   : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/Counter Limited'
 * '<S4>'   : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl'
 * '<S5>'   : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/Counter Limited/Increment Real World'
 * '<S6>'   : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/Counter Limited/Wrap To Zero'
 * '<S7>'   : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/Compare To Constant'
 * '<S8>'   : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/Compare To Constant1'
 * '<S9>'   : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/Compare To Constant2'
 * '<S10>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/Compare To Constant3'
 * '<S11>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/Compare To Constant4'
 * '<S12>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/Compare To Constant5'
 * '<S13>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/Compare To Constant6'
 * '<S14>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/Compare To Constant7'
 * '<S15>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/EPSFaultCheck'
 * '<S16>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test'
 * '<S17>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle'
 * '<S18>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/m//s->kph'
 * '<S19>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/EPSFaultCheck/Compare To Constant3'
 * '<S20>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/EPSFaultCheck/MATLAB Function1'
 * '<S21>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Compare To Constant1'
 * '<S22>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Compare To Constant2'
 * '<S23>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Compare To Constant213'
 * '<S24>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Compare To Constant214'
 * '<S25>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Compare To Constant237'
 * '<S26>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Compare To Constant3'
 * '<S27>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Compare To Constant4'
 * '<S28>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Compare To Constant5'
 * '<S29>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/LP filter'
 * '<S30>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/LP filter1'
 * '<S31>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/NotActiveFlgDelayTime'
 * '<S32>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Subsystem1'
 * '<S33>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Subsystem10'
 * '<S34>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/Subsystem2'
 * '<S35>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/ESS_SteerSpd_Test/NotActiveFlgDelayTime/MATLAB Function'
 * '<S36>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control'
 * '<S37>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning'
 * '<S38>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect'
 * '<S39>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/SteerAngleCorrect'
 * '<S40>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Subsystem'
 * '<S41>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Vehicle_Speed'
 * '<S42>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC'
 * '<S43>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/LP filter1'
 * '<S44>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/LP filter2'
 * '<S45>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/LP filter3'
 * '<S46>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/LP filter4'
 * '<S47>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/LP filter5'
 * '<S48>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/LP filter6'
 * '<S49>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/MATLAB Function'
 * '<S50>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/Median_Filter'
 * '<S51>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/SteerAngSlopeCalc'
 * '<S52>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/TarSteerAngleCalc'
 * '<S53>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/Understeer&Offset_Calc'
 * '<S54>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/SteerAngSlopeCalc/MATLAB Function3'
 * '<S55>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/SteerAngSlopeCalc/Switch Case Action Subsystem'
 * '<S56>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/SteerAngSlopeCalc/Switch Case Action Subsystem1'
 * '<S57>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/Understeer&Offset_Calc/Compare To Constant1'
 * '<S58>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/Understeer&Offset_Calc/Compare To Constant6'
 * '<S59>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/Understeer&Offset_Calc/Enabled Subsystem'
 * '<S60>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/Understeer&Offset_Calc/LP filter'
 * '<S61>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Lateral_Control/kinematics_MPC/Understeer&Offset_Calc/YOD_Ackman'
 * '<S62>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC'
 * '<S63>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/CartesianTrajectory'
 * '<S64>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem'
 * '<S65>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/LP filter'
 * '<S66>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/MATLAB Function'
 * '<S67>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/MATLAB Function3'
 * '<S68>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/Subsystem'
 * '<S69>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/Subsystem/Switch Case Action Subsystem'
 * '<S70>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/Subsystem/Switch Case Action Subsystem1'
 * '<S71>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/Subsystem/Switch Case Action Subsystem2'
 * '<S72>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/Subsystem/Switch Case Action Subsystem3'
 * '<S73>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/Subsystem/Switch Case Action Subsystem4'
 * '<S74>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/Motion_Planning/CartesianTrajectory_MPC/Subsystem/Subsystem/Switch Case Action Subsystem5'
 * '<S75>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect/Chart'
 * '<S76>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect/Compare To Constant1'
 * '<S77>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect/Compare To Constant2'
 * '<S78>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect/Compare To Constant3'
 * '<S79>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect/Compare To Constant4'
 * '<S80>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect/LP filter4'
 * '<S81>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect/Subsystem17'
 * '<S82>'  : 'PubIfControlLATC_MDL/Subsystem Reference/LATC/LateralControl/LCS_Angle/OverRideDetect/Subsystem4'
 */
#endif                                 /* RTW_HEADER_PubIfControlLATC_MDL_h_ */
