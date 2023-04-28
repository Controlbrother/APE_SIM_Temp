/*
 * Code generation for system model 'PubIfCommonVIE_MDL'
 * For more details, see corresponding source file PubIfCommonVIE_MDL.c
 *
 */

#ifndef RTW_HEADER_PubIfCommonVIE_MDL_h_
#define RTW_HEADER_PubIfCommonVIE_MDL_h_
#include <math.h>
#include <string.h>
#ifndef PubIfCommonVIE_MDL_COMMON_INCLUDES_
#define PubIfCommonVIE_MDL_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* PubIfCommonVIE_MDL_COMMON_INCLUDES_ */

#include "PubIfCommonVIE_MDL_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'PubIfCommonVIE_MDL' */
#ifndef PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T DataTypeConversion;           /* '<S19>/Data Type Conversion' */
  real_T TappedDelay4[10];             /* '<S19>/Tapped Delay4' */
  real_T SumofElements5;               /* '<S19>/Sum of Elements5' */
  real_T UnitDelay;                    /* '<S8>/Unit Delay' */
  real_T Add;                          /* '<S8>/Add' */
  real_T Saturation;                   /* '<S8>/Saturation' */
  real_T Memory31;                     /* '<S8>/Memory31' */
  real_T Memory2;                      /* '<S10>/Memory2' */
  real_T Sum4;                         /* '<S10>/Sum4' */
  real_T Product1;                     /* '<S10>/Product1' */
  real_T Sum5;                         /* '<S10>/Sum5' */
  real_T Memory30;                     /* '<S8>/Memory30' */
  real_T Sum10;                        /* '<S8>/Sum10' */
  real_T Gain12;                       /* '<S8>/Gain12' */
  real_T Sum11;                        /* '<S8>/Sum11' */
  uint32_T VIE_SubModel_Version;       /* '<S2>/Constant1' */
  uint32_T VIE_SubModel_Number;        /* '<S2>/Constant2' */
  real32_T Memory1;                    /* '<S8>/Memory1' */
  real32_T Merge;                      /* '<S18>/Merge' */
  real32_T Product4;                   /* '<S8>/Product4' */
  real32_T Gain3;                      /* '<S8>/Gain3' */
  real32_T Merge_n;                    /* '<S17>/Merge' */
  real32_T Product3;                   /* '<S8>/Product3' */
  real32_T Gain2;                      /* '<S8>/Gain2' */
  real32_T Merge_c;                    /* '<S16>/Merge' */
  real32_T Product2;                   /* '<S8>/Product2' */
  real32_T Gain1;                      /* '<S8>/Gain1' */
  real32_T Merge_d;                    /* '<S15>/Merge' */
  real32_T Product1_a;                 /* '<S8>/Product1' */
  real32_T Gain;                       /* '<S8>/Gain' */
  real32_T Sum15;                      /* '<S8>/Sum15' */
  real32_T Gain13;                     /* '<S8>/Gain13' */
  real32_T TappedDelay[5];             /* '<S8>/Tapped Delay' */
  real32_T SumofElements;              /* '<S8>/Sum of Elements' */
  real32_T Gain4;                      /* '<S8>/Gain4' */
  real32_T TappedDelay1[5];            /* '<S8>/Tapped Delay1' */
  real32_T SumofElements1;             /* '<S8>/Sum of Elements1' */
  real32_T Gain5;                      /* '<S8>/Gain5' */
  real32_T TappedDelay2[5];            /* '<S8>/Tapped Delay2' */
  real32_T SumofElements2;             /* '<S8>/Sum of Elements2' */
  real32_T Gain6;                      /* '<S8>/Gain6' */
  real32_T TappedDelay3[5];            /* '<S8>/Tapped Delay3' */
  real32_T SumofElements3;             /* '<S8>/Sum of Elements3' */
  real32_T Gain7;                      /* '<S8>/Gain7' */
  real32_T TappedDelay_d[5];           /* '<S6>/Tapped Delay' */
  real32_T SumofElements_h;            /* '<S6>/Sum of Elements' */
  real32_T PsiDtInF;                   /* '<S6>/Gain' */
  real32_T PsiDtStandstill;            /* '<S3>/Memory2' */
  real32_T Memory2_f;                  /* '<S8>/Memory2' */
  real32_T Memory34;                   /* '<S8>/Memory34' */
  real32_T Memory35;                   /* '<S8>/Memory35' */
  real32_T Memory36;                   /* '<S8>/Memory36' */
  real32_T MinMax3;                    /* '<S8>/MinMax3' */
  real32_T MinMax4;                    /* '<S8>/MinMax4' */
  real32_T Sum6;                       /* '<S8>/Sum6' */
  real32_T Gain17;                     /* '<S8>/Gain17' */
  real32_T Memory37;                   /* '<S8>/Memory37' */
  real32_T Memory39;                   /* '<S8>/Memory39' */
  real32_T Memory38;                   /* '<S8>/Memory38' */
  real32_T Memory23;                   /* '<S8>/Memory23' */
  real32_T TappedDelay8[5];            /* '<S8>/Tapped Delay8' */
  real32_T SumofElements4;             /* '<S8>/Sum of Elements4' */
  real32_T Gain8;                      /* '<S8>/Gain8' */
  real32_T Memory22;                   /* '<S8>/Memory22' */
  real32_T Memory21;                   /* '<S8>/Memory21' */
  real32_T Sum7;                       /* '<S8>/Sum7' */
  real32_T Gain10;                     /* '<S8>/Gain10' */
  real32_T Memory29;                   /* '<S8>/Memory29' */
  real32_T Sum8;                       /* '<S8>/Sum8' */
  real32_T Gain11;                     /* '<S8>/Gain11' */
  real32_T Sum9;                       /* '<S8>/Sum9' */
  real32_T Sum12;                      /* '<S8>/Sum12' */
  real32_T Abs;                        /* '<S8>/Abs' */
  real32_T t_tauAxvRef;                /* '<S8>/t_tauAxvRef' */
  real32_T filter;                     /* '<S8>/Product6' */
  real32_T Sum13;                      /* '<S8>/Sum13' */
  real32_T Product7;                   /* '<S8>/Product7' */
  real32_T Sum14;                      /* '<S8>/Sum14' */
  real32_T Memory33;                   /* '<S8>/Memory33' */
  real32_T Product8;                   /* '<S8>/Product8' */
  real32_T Abs2;                       /* '<S19>/Abs2' */
  real32_T Product5;                   /* '<S8>/Product5' */
  real32_T Abs3;                       /* '<S19>/Abs3' */
  real32_T UnitDelay1;                 /* '<S19>/Unit Delay1' */
  real32_T Sum1;                       /* '<S19>/Sum1' */
  real32_T Gain9;                      /* '<S19>/Gain9' */
  real32_T FilterTime6;                /* '<S19>/FilterTime6' */
  real32_T FilterTime2;                /* '<S19>/FilterTime2' */
  real32_T Memory52;                   /* '<S19>/Memory52' */
  real32_T Sum;                        /* '<S19>/Sum' */
  real32_T UnitDelay_d;                /* '<S19>/Unit Delay' */
  real32_T Product5_a;                 /* '<S12>/Product5' */
  real32_T Offset;                     /* '<S12>/Sum7' */
  real32_T Product3_o;                 /* '<S12>/Product3' */
  real32_T Memory2_j;                  /* '<S13>/Memory2' */
  real32_T Sum4_k;                     /* '<S13>/Sum4' */
  real32_T Product1_k;                 /* '<S13>/Product1' */
  real32_T Sum5_a;                     /* '<S13>/Sum5' */
  real32_T TappedDelay_e[5];           /* '<S12>/Tapped Delay' */
  real32_T SumofElements_o;            /* '<S12>/Sum of Elements' */
  real32_T AxvSensorMean;              /* '<S12>/Gain16' */
  real32_T t_axvSensorRA;              /* '<S12>/Sum1' */
  real32_T t_FiltaxvRoadSlope;         /* '<S12>/t_FiltaxvRoadSlope' */
  real32_T Product1_f;                 /* '<S12>/Product1' */
  real32_T Memory;                     /* '<S12>/Memory' */
  real32_T Sum_m;                      /* '<S12>/Sum' */
  real32_T Gain1_g;                    /* '<S12>/Gain1' */
  real32_T Sum2;                       /* '<S12>/Sum2' */
  real32_T Memory1_h;                  /* '<S12>/Memory1' */
  real32_T Sum3;                       /* '<S12>/Sum3' */
  real32_T Product2_d;                 /* '<S12>/Product2' */
  real32_T Sum4_l;                     /* '<S12>/Sum4' */
  real32_T Memory2_m;                  /* '<S12>/Memory2' */
  real32_T Sum5_l;                     /* '<S12>/Sum5' */
  real32_T Product4_n;                 /* '<S12>/Product4' */
  real32_T Sum13_k;                    /* '<S4>/Sum13' */
  real32_T Memory3;                    /* '<S4>/Memory3' */
  real32_T Memory2_i;                  /* '<S4>/Memory2' */
  real32_T Sum6_m;                     /* '<S4>/Sum6' */
  real32_T Gain2_n;                    /* '<S4>/Gain2' */
  real32_T Memory1_c;                  /* '<S4>/Memory1' */
  real32_T Sum4_kj;                    /* '<S4>/Sum4' */
  real32_T Product4_i;                 /* '<S4>/Product4' */
  real32_T Gain2_e;                    /* '<S12>/Gain2' */
  real32_T TrigonometricFunction;      /* '<S12>/Trigonometric Function' */
  real32_T Gain3_p;                    /* '<S12>/Gain3' */
  real32_T Memory_h;                   /* '<S3>/Memory' */
  real32_T Sum_g;                      /* '<S3>/Sum' */
  real32_T PsiDtDt;                    /* '<S3>/Gain1' */
  real32_T Memory1_a;                  /* '<S3>/Memory1' */
  real32_T Sum1_c;                     /* '<S3>/Sum1' */
  real32_T FilterTime1;                /* '<S3>/FilterTime1' */
  real32_T Saturation_e;               /* '<S3>/Saturation' */
  real32_T K_yawrate;                  /* '<S3>/FilterTime3' */
  real32_T W;                          /* '<S3>/W' */
  real32_T Sum4_kt;                    /* '<S19>/Sum4' */
  real32_T FilterTime3;                /* '<S19>/FilterTime3' */
  real32_T TrigonometricFunction_j;    /* '<S3>/Trigonometric Function' */
  real32_T K_wheelAngle;               /* '<S3>/t_KapByWheelAngle' */
  real32_T FilterTime4;                /* '<S3>/FilterTime4' */
  real32_T Sum4_h;                     /* '<S3>/Sum4' */
  real32_T FilterTime5;                /* '<S3>/FilterTime5' */
  real32_T Gain13_c;                   /* '<S3>/Gain13' */
  real32_T Memory3_m;                  /* '<S3>/Memory3' */
  real32_T Memory4;                    /* '<S3>/Memory4' */
  real32_T Sum2_f;                     /* '<S3>/Sum2' */
  real32_T Sum8_o;                     /* '<S3>/Sum8' */
  real32_T Memory24;                   /* '<S8>/Memory24' */
  real32_T Memory25;                   /* '<S8>/Memory25' */
  real32_T Memory26;                   /* '<S8>/Memory26' */
  real32_T Memory27;                   /* '<S8>/Memory27' */
  real32_T Memory28;                   /* '<S8>/Memory28' */
  real32_T vxvRefRaw;                  /* '<S8>/vsp_filtVxvRefRaw' */
  real32_T vxvRef;                     /* '<S8>/vsp_calcNoCali_v' */
  real32_T axvRef;                     /* '<S8>/vsp_calcNoCali_v' */
  real32_T l_tTransBrakeToDrive;       /* '<S8>/transBrakeToDrive' */
  real32_T l_tTransDriveToBrake;       /* '<S8>/transBrakeToDrive' */
  real32_T l_tHysARefDriveToBrakeOutput;/* '<S8>/transBrakeToDrive' */
  real32_T l_tHysARefBrakeToDriveOutput;/* '<S8>/transBrakeToDrive' */
  real32_T l_vxwMin_aswFR;             /* '<S8>/detErrorBandMin' */
  real32_T l_vxwMin_aswRL;             /* '<S8>/detErrorBandMin' */
  real32_T l_vxwMin_aswRR;             /* '<S8>/detErrorBandMin' */
  real32_T l_vxwMin_aswFL;             /* '<S8>/detErrorBandMin' */
  real32_T l_vxwMax_aswFL;             /* '<S8>/detErrorBandMax' */
  real32_T l_vxwMax_aswFR;             /* '<S8>/detErrorBandMax' */
  real32_T l_vxwMax_aswRL;             /* '<S8>/detErrorBandMax' */
  real32_T l_vxwMax_aswRR;             /* '<S8>/detErrorBandMax' */
  real32_T t_vxwCorrMax;               /* '<S8>/calcVxwDiffAndModErr_v' */
  real32_T t_vxwCorrMin;               /* '<S8>/calcVxwDiffAndModErr_v' */
  real32_T t_SlipDrive;                /* '<S8>/calcBrakeDriveState' */
  real32_T t_SlipBrake;                /* '<S8>/calcBrakeDriveState' */
  real32_T vxwCorrFL;                  /* '<S8>/VxwCorr' */
  real32_T vxwCorrFR;                  /* '<S8>/VxwCorr' */
  real32_T vxwCorrRL;                  /* '<S8>/VxwCorr' */
  real32_T vxwCorrRR;                  /* '<S8>/VxwCorr' */
  real32_T AckConst;                   /* '<S19>/YOD_Ackman' */
  real32_T PsiDtAck;                   /* '<S19>/YOD_Ackman' */
  real32_T y;                          /* '<S19>/MATLAB Function2' */
  real32_T FilterTime2_m;              /* '<S51>/FilterTime2' */
  real32_T Sum6_f;                     /* '<S51>/Sum6' */
  real32_T Product6;                   /* '<S51>/Product6' */
  real32_T Memory2_k;                  /* '<S7>/Memory2' */
  real32_T Memory3_c;                  /* '<S7>/Memory3' */
  real32_T PsiDtLP;                    /* '<S7>/MATLAB Function' */
  real32_T PsiDtStandstill_o;          /* '<S7>/MATLAB Function' */
  uint8_T DataTypeConversion19;        /* '<S2>/Data Type Conversion19' */
  uint8_T DataTypeConversion_l;        /* '<S8>/Data Type Conversion' */
  uint8_T ErrWheel_FL;                 /* '<S8>/calcVxwDiffAndModErr_v' */
  uint8_T ErrWheel_FR;                 /* '<S8>/calcVxwDiffAndModErr_v' */
  uint8_T ErrWheel_RL;                 /* '<S8>/calcVxwDiffAndModErr_v' */
  uint8_T ErrWheel_RR;                 /* '<S8>/calcVxwDiffAndModErr_v' */
  uint8_T l_CaseDrive;                 /* '<S8>/calcBrakeDriveState' */
  uint8_T l_CaseBrake;                 /* '<S8>/calcBrakeDriveState' */
  boolean_T Compare;                   /* '<S45>/Compare' */
  boolean_T Compare_h;                 /* '<S46>/Compare' */
  boolean_T Compare_d;                 /* '<S5>/Compare' */
  boolean_T Compare_c;                 /* '<S49>/Compare' */
  boolean_T Compare_a;                 /* '<S48>/Compare' */
  boolean_T Compare_i;                 /* '<S47>/Compare' */
  boolean_T AND;                       /* '<S19>/AND' */
  boolean_T Compare_ha;                /* '<S50>/Compare' */
  boolean_T LogicalOperator;           /* '<S19>/Logical Operator' */
} B_PubIfCommonVIE_MDL_c_T;

#endif                                 /*PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'PubIfCommonVIE_MDL' */
#ifndef PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  real_T TappedDelay4_X[9];            /* '<S19>/Tapped Delay4' */
  real_T UnitDelay_DSTATE;             /* '<S8>/Unit Delay' */
  real_T Memory31_PreviousInput;       /* '<S8>/Memory31' */
  real_T Memory2_PreviousInput;        /* '<S10>/Memory2' */
  real_T Sum4_DWORK1;                  /* '<S10>/Sum4' */
  real_T Memory30_PreviousInput;       /* '<S8>/Memory30' */
  real32_T TappedDelay_X[4];           /* '<S8>/Tapped Delay' */
  real32_T TappedDelay1_X[4];          /* '<S8>/Tapped Delay1' */
  real32_T TappedDelay2_X[4];          /* '<S8>/Tapped Delay2' */
  real32_T TappedDelay3_X[4];          /* '<S8>/Tapped Delay3' */
  real32_T TappedDelay_X_g[4];         /* '<S6>/Tapped Delay' */
  real32_T TappedDelay8_X[4];          /* '<S8>/Tapped Delay8' */
  real32_T UnitDelay1_DSTATE;          /* '<S19>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_f;         /* '<S19>/Unit Delay' */
  real32_T TappedDelay_X_b[4];         /* '<S12>/Tapped Delay' */
  real32_T Memory1_PreviousInput;      /* '<S8>/Memory1' */
  real32_T Memory2_PreviousInput_n;    /* '<S3>/Memory2' */
  real32_T Memory2_PreviousInput_i;    /* '<S8>/Memory2' */
  real32_T Memory34_PreviousInput;     /* '<S8>/Memory34' */
  real32_T Memory35_PreviousInput;     /* '<S8>/Memory35' */
  real32_T Memory36_PreviousInput;     /* '<S8>/Memory36' */
  real32_T Memory37_PreviousInput;     /* '<S8>/Memory37' */
  real32_T Memory39_PreviousInput;     /* '<S8>/Memory39' */
  real32_T Memory38_PreviousInput;     /* '<S8>/Memory38' */
  real32_T Memory23_PreviousInput;     /* '<S8>/Memory23' */
  real32_T Memory22_PreviousInput;     /* '<S8>/Memory22' */
  real32_T Memory21_PreviousInput;     /* '<S8>/Memory21' */
  real32_T Memory29_PreviousInput;     /* '<S8>/Memory29' */
  real32_T Memory33_PreviousInput;     /* '<S8>/Memory33' */
  real32_T Sum1_DWORK1;                /* '<S19>/Sum1' */
  real32_T Memory52_PreviousInput;     /* '<S19>/Memory52' */
  real32_T Memory2_PreviousInput_k;    /* '<S13>/Memory2' */
  real32_T Memory_PreviousInput;       /* '<S12>/Memory' */
  real32_T Memory1_PreviousInput_f;    /* '<S12>/Memory1' */
  real32_T Memory2_PreviousInput_j;    /* '<S12>/Memory2' */
  real32_T Memory3_PreviousInput;      /* '<S4>/Memory3' */
  real32_T Memory2_PreviousInput_a;    /* '<S4>/Memory2' */
  real32_T Memory1_PreviousInput_n;    /* '<S4>/Memory1' */
  real32_T Memory_PreviousInput_p;     /* '<S3>/Memory' */
  real32_T Memory1_PreviousInput_p;    /* '<S3>/Memory1' */
  real32_T Memory3_PreviousInput_j;    /* '<S3>/Memory3' */
  real32_T Memory4_PreviousInput;      /* '<S3>/Memory4' */
  real32_T Memory24_PreviousInput;     /* '<S8>/Memory24' */
  real32_T Memory25_PreviousInput;     /* '<S8>/Memory25' */
  real32_T Memory26_PreviousInput;     /* '<S8>/Memory26' */
  real32_T Memory27_PreviousInput;     /* '<S8>/Memory27' */
  real32_T Memory28_PreviousInput;     /* '<S8>/Memory28' */
  real32_T T;                          /* '<S19>/MATLAB Function2' */
  real32_T Memory2_PreviousInput_o;    /* '<S7>/Memory2' */
  real32_T Memory3_PreviousInput_n;    /* '<S7>/Memory3' */
} DW_PubIfCommonVIE_MDL_f_T;

#endif                                 /*PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_*/

/* Invariant block signals for model 'PubIfCommonVIE_MDL' */
#ifndef PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  const real_T Product4;               /* '<S10>/Product4' */
  const real32_T Product3;             /* '<S4>/Product3' */
  const real32_T Product4_p;           /* '<S13>/Product4' */
  const real32_T FilterTime;           /* '<S3>/FilterTime' */
  const real32_T Product2;             /* '<S51>/Product2' */
  const boolean_T Compare;             /* '<S44>/Compare' */
} ConstB_PubIfCommonVIE_MDL_h_T;

#endif                                 /*PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_PubIfCommonVIE_MDL_T {
  const char_T **errorStatus;
};

#endif                                 /*PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_PubIfCommonVIE_MDL_T rtm;
} MdlrefDW_PubIfCommonVIE_MDL_T;

#endif                                 /*PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_*/

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint32_T VIE_SW_VERSION;        /* '<Root>/Constant' */
extern real32_T VSM_SteerAngOffsetInit;/* '<S2>/Signal Conversion' */
extern real32_T VSM_SteerAngleOffset_deg;/* '<S19>/Merge' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real32_T P_Global_CharSpd_ms;   /* Variable: P_Global_CharSpd_ms
                                        * Referenced by: '<S19>/Constant4'
                                        */
extern real32_T P_Global_FrontAxleToCenter_m;/* Variable: P_Global_FrontAxleToCenter_m
                                              * Referenced by: '<S8>/Constant'
                                              */
extern real32_T P_Global_RearAxleToCenter_m;/* Variable: P_Global_RearAxleToCenter_m
                                             * Referenced by: '<S8>/Constant2'
                                             */
extern real32_T P_Global_SideSlipAnglefactor;/* Variable: P_Global_SideSlipAnglefactor
                                              * Referenced by: '<S12>/K'
                                              */
extern real32_T P_Global_SteeringAngleRatio;/* Variable: P_Global_SteeringAngleRatio
                                             * Referenced by:
                                             *   '<S19>/Constant1'
                                             *   '<S19>/Constant9'
                                             *   '<S51>/Constant7'
                                             */
extern real32_T P_Global_WheelBase_m;  /* Variable: P_Global_WheelBase_m
                                        * Referenced by:
                                        *   '<S3>/Constant6'
                                        *   '<S19>/Constant5'
                                        */
extern real32_T P_Global_WheelTrack_m; /* Variable: P_Global_WheelTrack_m
                                        * Referenced by: '<S8>/Constant3'
                                        */
extern void PubIfCommonVIE_MDL_Init(real32_T *rty_SteerAngleOffset_deg);
extern void PubIfCommonVIE_MDL_Reset(void);
extern void PubIfCommonVIE_MDL_Start(void);
extern void PubIfCommonVIE_MDL_Update(const VCAN_ABM_MSG_BUS *rtu_VIE_VCAN_ABM,
  real32_T *rty_axvRefMs2, real32_T *rty_vxvRefMs, real32_T *rty_axvRoadSlopeMs2,
  real32_T *rty_axRefMs2, real32_T *rty_axRefDt, real32_T
  *rty_alpSumSlideCurveness);
extern void PubIfCommonVIE_MDL(const VCAN_ESP_MSG_BUS *rtu_VIE_VCAN_ESP, const
  VCAN_CSA_MSG_BUS *rtu_VIE_VCAN_CSA, const VCAN_ABM_MSG_BUS *rtu_VIE_VCAN_ABM,
  const real32_T *rtu_SteerAngOffsetInit, real32_T *rty_axvRefMs2, real32_T
  *rty_vxvRefMs, real32_T *rty_axvRoadSlopeMs2, real32_T *rty_axRefMs2, real32_T
  *rty_axRefDt, real32_T *rty_psiDtOpt, real32_T *rty_ayvRefMs2, real32_T
  *rty_alpSideSlipAngle, real32_T *rty_kapTraj, real32_T
  *rty_alpSumSlideCurveness, real32_T *rty_SteerAngleOffset_deg);

/* Model reference registration function */
extern void PubIfCommonVIE_MDL_initialize(const char_T **rt_errorStatus);

#ifndef PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_

extern void PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(real32_T rtu_In1,
  real32_T *rty_Out1);

#endif                                 /*PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_

extern MdlrefDW_PubIfCommonVIE_MDL_T PubIfCommonVIE_MDL_MdlrefDW;

#endif                                 /*PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_*/

#ifndef PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_PubIfCommonVIE_MDL_c_T PubIfCommonVIE_MDL_B;

/* Block states (default storage) */
extern DW_PubIfCommonVIE_MDL_f_T PubIfCommonVIE_MDL_DW;

#endif                                 /*PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'PubIfCommonVIE_MDL'
 * '<S1>'   : 'PubIfCommonVIE_MDL/Subsystem Reference'
 * '<S2>'   : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE'
 * '<S3>'   : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE'
 * '<S4>'   : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/AxRef'
 * '<S5>'   : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/Compare To Constant1'
 * '<S6>'   : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/FloatMeanValue'
 * '<S7>'   : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/PsiDtStandstillCalc'
 * '<S8>'   : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc'
 * '<S9>'   : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/alpSumSlideCurveness'
 * '<S10>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/AxRef/LP filter'
 * '<S11>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/AxRef/MATLAB Function'
 * '<S12>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/AxRef/axvRoadSlope_calc'
 * '<S13>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/AxRef/axvRoadSlope_calc/LP filter'
 * '<S14>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/PsiDtStandstillCalc/MATLAB Function'
 * '<S15>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection'
 * '<S16>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection1'
 * '<S17>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection2'
 * '<S18>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection3'
 * '<S19>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc'
 * '<S20>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxwCorr'
 * '<S21>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/calcBrakeDriveState'
 * '<S22>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/calcVxwDiffAndModErr_v'
 * '<S23>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/detErrorBandMax'
 * '<S24>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/detErrorBandMin'
 * '<S25>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/transBrakeToDrive'
 * '<S26>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/vsp_calcNoCali_v'
 * '<S27>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/vsp_filtVxvRefRaw'
 * '<S28>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection/Switch Case Action Subsystem'
 * '<S29>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection/Switch Case Action Subsystem1'
 * '<S30>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection/Switch Case Action Subsystem2'
 * '<S31>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection/Switch Case Action Subsystem3'
 * '<S32>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection1/Switch Case Action Subsystem'
 * '<S33>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection1/Switch Case Action Subsystem1'
 * '<S34>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection1/Switch Case Action Subsystem2'
 * '<S35>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection1/Switch Case Action Subsystem3'
 * '<S36>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection2/Switch Case Action Subsystem'
 * '<S37>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection2/Switch Case Action Subsystem1'
 * '<S38>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection2/Switch Case Action Subsystem2'
 * '<S39>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection2/Switch Case Action Subsystem3'
 * '<S40>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection3/Switch Case Action Subsystem'
 * '<S41>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection3/Switch Case Action Subsystem1'
 * '<S42>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection3/Switch Case Action Subsystem2'
 * '<S43>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/DriveDirection3/Switch Case Action Subsystem3'
 * '<S44>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/Compare To Constant1'
 * '<S45>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/Compare To Constant2'
 * '<S46>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/Compare To Constant3'
 * '<S47>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/Compare To Constant4'
 * '<S48>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/Compare To Constant5'
 * '<S49>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/Compare To Constant6'
 * '<S50>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/Compare To Constant7'
 * '<S51>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/If Action Subsystem'
 * '<S52>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/If Action Subsystem1'
 * '<S53>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/MATLAB Function2'
 * '<S54>'  : 'PubIfCommonVIE_MDL/Subsystem Reference/VIE/VIE/VxvRef_Calc/VxvRef_Calc/YOD_Ackman'
 */
#endif                                 /* RTW_HEADER_PubIfCommonVIE_MDL_h_ */
