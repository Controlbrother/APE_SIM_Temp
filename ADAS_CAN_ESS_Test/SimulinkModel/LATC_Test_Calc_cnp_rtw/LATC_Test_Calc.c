/*
 * LATC_Test_Calc.c
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 3.55
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Fri Dec 31 09:15:34 2021
 *
 * Target selection: cnp.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LATC_Test_Calc.h"
#include "LATC_Test_Calc_private.h"

/* Named constants for Chart: '<S26>/Chart' */
#define LATC_Test_Ca_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define LATC_Test_Calc_IN_IsOverRide   ((uint8_T)1U)
#define LATC_Test_Calc_IN_NoOverRide   ((uint8_T)2U)

/* Exported block signals */
real_T LCS_HoldTime;                   /* '<S20>/Product' */
real_T LCS_DeltaAngle;                 /* '<S28>/TargetSteerAngleCalc' */
real32_T LCS_DisplaySpd_kph;           /* '<S18>/Sum' */
real32_T LCS_IN_SteerAngleSpd_degs;    /* '<S18>/Product4' */
real32_T LCS_IN_CurSteerAngle_deg;     /* '<S18>/Product5' */
real32_T LCS_CurSteerAngle_deg;        /* '<S18>/Add1' */
real32_T LCS_IN_desLaneA0;             /* '<S5>/S-Function' */
real32_T LCS_IN_desLaneA2;             /* '<S3>/S-Function' */
real32_T LCS_IN_desLaneA1;             /* '<S4>/S-Function' */
real32_T LCS_IN_desLaneA3;             /* '<S2>/S-Function' */
real32_T LCS_Predis_BaseDis;           /* '<S18>/preDisMin_TB2' */
real32_T LCS_EqA0;                     /* '<S18>/Divide' */
real32_T LCS_LC_NomalPredisFac;        /* '<S18>/2-D Lookup Table1' */
real32_T LCS_LC_NomalPredis;           /* '<S18>/Product3' */
real32_T LCS_LC_EcoPredisFac;          /* '<S18>/LC_Medium_preDis_Fac_TB' */
real32_T LCS_LC_EcoPredis;             /* '<S18>/Product12' */
real32_T LCS_LC_SportPredisFac;        /* '<S18>/LCS_LC_Emergent_preDis_TB' */
real32_T LCS_LC_SportPredis;           /* '<S18>/Product15' */
real32_T LCS_LC_Complete_PreDisFac;    /* '<S20>/Merge2' */
real32_T LCS_LCKPredisFac;             /* '<S18>/2-D Lookup Table2' */
real32_T LCS_A2_LatAcc;                /* '<S18>/Product1' */
real32_T LCS_A2_LatAccFac;             /* '<S18>/predis_ayFac4' */
real32_T LCS_Predis_Curve;             /* '<S22>/Sum5' */
real32_T LCS_Predis_CurveFac;          /* '<S18>/predis_ayFac1' */
real32_T LCS_LCK_CurveFac;             /* '<S18>/Switch' */
real32_T LCS_LCKPredis;                /* '<S18>/Product2' */
real32_T LCS_LC_ELKPredisFac;          /* '<S18>/LCS_LC_ELK_preDis_TB' */
real32_T LCS_LC_ELKPredis;             /* '<S18>/Product6' */
real32_T LCS_LC_ESSPredisFac;          /* '<S18>/LCS_LC_ESSAES_preDis_TB' */
real32_T LCS_LC_ESSPredis;             /* '<S18>/Product7' */
real32_T LCS_LC_LCPredisFac;           /* '<S18>/LCS_LC_ELK_preDis_TB1' */
real32_T LCS_LC_LCPredis;              /* '<S18>/Product8' */
real32_T LCS_LC_AESPredisFac;          /* '<S18>/LCS_LC_ESSAES_preDis_TB1' */
real32_T LCS_finalPredis;              /* '<S18>/Multiport Switch4' */
real32_T LCS_Q;                        /* '<S28>/Q1' */
real32_T LCS_StateActive_AngleSlope;   /* '<S20>/Merge' */
real32_T LCS_State_AngleSlope;         /* '<S20>/Multiport Switch1' */
real32_T LCS_TarSteerAngleSlope;       /* '<S20>/Min' */
real32_T LCS_ESS_TarAngle2;            /* '<S28>/Add' */
real32_T LCS_TarSteerAngle_Filter;     /* '<S44>/Sum5' */
real32_T LCS_ReqEPSTrgAngle;           /* '<S18>/Add6' */
real32_T LCS_OUT_ReqEPSTrgAngle;       /* '<S18>/Gain' */
real32_T LCS_TarSteerAngle;            /* '<S28>/TargetSteerAngleCalc' */
real32_T LCS_TarSteerAngleEnd;         /* '<S28>/TargetSteerAngleCalc' */
real32_T LCS_TarSteerAngleCalc_Num;    /* '<S28>/TargetSteerAngleCalc' */
uint16_T LCS_AngleSlope_Cnt;           /* '<S20>/MATLAB Function3' */
uint8_T LCS_IN_TarDangerlLevel;        /* '<S6>/S-Function' */
uint8_T LCS_IN_TarDangerLevel;         /* '<S18>/Signal Copy' */
uint8_T LCS_LCType;                    /* '<S18>/Direct Lookup Table (n-D)' */
uint8_T LCS_AngleSlope_Flg;            /* '<S20>/MATLAB Function3' */
boolean_T LCS_IN_desLaneValid;         /* '<S17>/S-Function' */
boolean_T LCS_IsOverRide;              /* '<S26>/Chart' */

/* Exported block parameters */
real_T P_LCS_ESSAngSlope_SW = 0.0;     /* Variable: P_LCS_ESSAngSlope_SW
                                        * Referenced by: '<S28>/Constant2'
                                        */
real_T P_LCS_ESSAngleSW2 = 0.0;        /* Variable: P_LCS_ESSAngleSW2
                                        * Referenced by: '<S28>/Constant4'
                                        */
real_T P_LCS_StateActive_HoldTime_BP[15] = { 0.0, 0.2, 0.4, 0.6, 0.8, 1.0, 1.2,
  1.4, 1.6, 1.8, 2.0, 4.0, 6.0, 8.0, 10.0 } ;
                                      /* Variable: P_LCS_StateActive_HoldTime_BP
                                       * Referenced by:
                                       *   '<S30>/LC_start_slope'
                                       *   '<S32>/LC_Complete_slope'
                                       *   '<S32>/LC_Complete_slope1'
                                       */

real32_T P_LCS_A0_Dis_BP[19] = { 0.0F, 0.2F, 0.4F, 0.6F, 0.8F, 1.0F, 1.2F, 1.4F,
  1.6F, 1.8F, 2.0F, 2.2F, 2.4F, 2.6F, 2.8F, 3.0F, 3.2F, 3.4F, 3.6F } ;/* Variable: P_LCS_A0_Dis_BP
                                                                      * Referenced by:
                                                                      *   '<S18>/2-D Lookup Table1'
                                                                      *   '<S18>/2-D Lookup Table2'
                                                                      *   '<S18>/LCS_LC_ELK_preDis_TB'
                                                                      *   '<S18>/LCS_LC_ELK_preDis_TB1'
                                                                      *   '<S18>/LCS_LC_ESSAES_preDis_TB'
                                                                      *   '<S18>/LCS_LC_ESSAES_preDis_TB1'
                                                                      *   '<S18>/LCS_LC_Emergent_preDis_TB'
                                                                      *   '<S18>/LC_Medium_preDis_Fac_TB'
                                                                      *   '<S20>/ELK Active'
                                                                      *   '<S20>/ESS AES Active'
                                                                      *   '<S20>/LC Cancel'
                                                                      *   '<S20>/LCK//IE TO LC_Eco'
                                                                      *   '<S20>/LCK//IE TO LC_Nomal'
                                                                      *   '<S20>/LCK//IE TO LC_Sport'
                                                                      *   '<S20>/LCK//IE TO LC_Sport1'
                                                                      *   '<S20>/LCKIE_Active'
                                                                      *   '<S20>/LKA Active'
                                                                      *   '<S20>/No Function 2 LCK'
                                                                      *   '<S28>/ESS AES Active'
                                                                      */

real32_T P_LCS_A2S_FliterTime = 0.5F;  /* Variable: P_LCS_A2S_FliterTime
                                        * Referenced by: '<S18>/Constant20'
                                        */
real32_T P_LCS_A2_Curve_BP[10] = { 0.0F, 0.0002F, 0.0003F, 0.0007F, 0.0013F,
  0.0025F, 0.0033F, 0.005F, 0.01F, 0.02F } ;/* Variable: P_LCS_A2_Curve_BP
                                             * Referenced by:
                                             *   '<S18>/predis_ayFac1'
                                             *   '<S20>/LCK_A2_Fac'
                                             */

real32_T P_LCS_A2_LatAcc_BP[5] = { 0.0F, 0.5F, 2.0F, 3.0F, 4.0F } ;/* Variable: P_LCS_A2_LatAcc_BP
                                                                    * Referenced by: '<S18>/predis_ayFac4'
                                                                    */

real32_T P_LCS_A2_Pretime = 0.075F;    /* Variable: P_LCS_A2_Pretime
                                        * Referenced by: '<S18>/Constant21'
                                        */
real32_T P_LCS_AngleFilterTime = 0.1F; /* Variable: P_LCS_AngleFilterTime
                                        * Referenced by: '<S28>/Constant'
                                        */
real32_T P_LCS_AngleSlope_AES_Active[228] = { 0.4F, 0.4F, 0.4F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F,
  0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F,
  0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F } ;                       /* Variable: P_LCS_AngleSlope_AES_Active
                                        * Referenced by: '<S20>/LCK//IE TO LC_Sport1'
                                        */

real32_T P_LCS_AngleSlope_ELK[228] = { 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
  0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.9F, 0.9F, 0.9F,
  0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F,
  0.9F, 0.9F, 0.9F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F,
  0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.6F, 0.6F, 0.6F, 0.6F,
  0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
  0.6F, 0.6F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F }
;                                      /* Variable: P_LCS_AngleSlope_ELK
                                        * Referenced by: '<S20>/ELK Active'
                                        */

real32_T P_LCS_AngleSlope_ESS[228] = { 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 8.0F, 8.0F, 8.0F, 8.0F,
  8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F,
  8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F,
  8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F,
  8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F,
  8.0F, 0.5F, 0.5F, 0.5F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.5F, 0.5F, 0.5F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.5F, 0.5F, 0.5F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.5F, 0.5F, 0.5F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.5F,
  0.5F, 0.5F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F } ;     /* Variable: P_LCS_AngleSlope_ESS
                                        * Referenced by: '<S20>/ESS AES Active'
                                        */

real32_T P_LCS_AngleSlope_ESS_Add[228] = { 1.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F,
  2.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F,
  7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 1.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F,
  7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 7.0F,
  7.0F, 7.0F, 7.0F, 7.0F, 7.0F, 1.0F, 1.0F, 1.0F, 1.0F, 7.5F, 7.5F, 7.5F, 7.5F,
  7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 8.0F, 8.0F, 8.0F, 8.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F,
  8.0F, 8.0F, 8.0F, 8.0F, 1.0F, 1.0F, 1.0F, 1.0F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F,
  7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 8.0F, 8.0F, 8.0F, 8.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 8.0F,
  8.0F, 8.0F, 8.0F, 1.0F, 1.0F, 1.0F, 1.0F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F,
  7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 8.0F, 8.0F, 8.0F, 8.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 8.0F, 8.0F,
  8.0F, 8.0F, 1.0F, 1.0F, 1.0F, 1.0F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F,
  7.5F, 7.5F, 7.5F, 7.5F, 8.0F, 8.0F, 8.0F, 8.0F, 1.0F, 1.0F, 1.0F, 1.0F, 7.5F,
  7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 7.5F, 8.0F, 8.0F, 8.0F,
  8.0F } ;                             /* Variable: P_LCS_AngleSlope_ESS_Add
                                        * Referenced by: '<S28>/ESS AES Active'
                                        */

real32_T P_LCS_AngleSlope_LCK[228] = { 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F }
;                                      /* Variable: P_LCS_AngleSlope_LCK
                                        * Referenced by: '<S20>/No Function 2 LCK'
                                        */

real32_T P_LCS_AngleSlope_LCKIE[228] = { 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F } ;                             /* Variable: P_LCS_AngleSlope_LCKIE
                                        * Referenced by: '<S20>/LCKIE_Active'
                                        */

real32_T P_LCS_AngleSlope_LCK_Curve_Fac[10] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.2F,
  1.4F, 1.4F, 1.5F, 1.5F, 1.6F } ;   /* Variable: P_LCS_AngleSlope_LCK_Curve_Fac
                                      * Referenced by: '<S20>/LCK_A2_Fac'
                                      */

real32_T P_LCS_AngleSlope_LC_Cancel[228] = { 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
  0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.9F, 0.9F,
  0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F,
  0.9F, 0.9F, 0.9F, 0.9F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F,
  0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.6F, 0.6F, 0.6F,
  0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
  0.6F, 0.6F, 0.6F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F,
  0.5F } ;                             /* Variable: P_LCS_AngleSlope_LC_Cancel
                                        * Referenced by: '<S20>/LC Cancel'
                                        */

real32_T P_LCS_AngleSlope_LC_Eco[228] = { 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F,
  0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F,
  0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F } ;                             /* Variable: P_LCS_AngleSlope_LC_Eco
                                        * Referenced by: '<S20>/LCK//IE TO LC_Eco'
                                        */

real32_T P_LCS_AngleSlope_LC_Nomal[228] = { 0.4F, 0.4F, 0.4F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F,
  0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F,
  0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F } ;                       /* Variable: P_LCS_AngleSlope_LC_Nomal
                                        * Referenced by: '<S20>/LCK//IE TO LC_Nomal'
                                        */

real32_T P_LCS_AngleSlope_LC_Sport[228] = { 0.4F, 0.4F, 0.4F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F,
  0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F,
  0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F } ;                       /* Variable: P_LCS_AngleSlope_LC_Sport
                                        * Referenced by: '<S20>/LCK//IE TO LC_Sport'
                                        */

real32_T P_LCS_AngleSlope_LKA[228] = { 0.2F, 0.2F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.2F,
  0.2F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.2F, 0.2F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.2F, 0.2F,
  0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.2F, 0.2F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.2F, 0.2F, 0.3F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.1F, 0.2F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.1F, 0.2F, 0.3F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.1F, 0.2F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.1F, 0.2F, 0.3F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.1F, 0.2F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.1F, 0.2F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F }
;                                      /* Variable: P_LCS_AngleSlope_LKA
                                        * Referenced by: '<S20>/LKA Active'
                                        */

real32_T P_LCS_AngleSlope_Spd_BP[12] = { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 60.0F,
  80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 140.0F } ;/* Variable: P_LCS_AngleSlope_Spd_BP
                                                   * Referenced by:
                                                   *   '<S20>/ELK Active'
                                                   *   '<S20>/ESS AES Active'
                                                   *   '<S20>/LC Cancel'
                                                   *   '<S20>/LCK//IE TO LC_Eco'
                                                   *   '<S20>/LCK//IE TO LC_Nomal'
                                                   *   '<S20>/LCK//IE TO LC_Sport'
                                                   *   '<S20>/LCK//IE TO LC_Sport1'
                                                   *   '<S20>/LCKIE_Active'
                                                   *   '<S20>/LKA Active'
                                                   *   '<S20>/No Function 2 LCK'
                                                   *   '<S28>/ESS AES Active'
                                                   */

real32_T P_LCS_DeltaEps_SpdBp[16] = { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F,
  30.0F, 35.0F, 40.0F, 60.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 140.0F } ;/* Variable: P_LCS_DeltaEps_SpdBp
                                                                      * Referenced by: '<S28>/tDeltaEpsTable'
                                                                      */

real32_T P_LCS_DeltaEps_TimeVal[16] = { 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
  0.8F, 0.8F, 0.8F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F } ;/* Variable: P_LCS_DeltaEps_TimeVal
                                                           * Referenced by: '<S28>/tDeltaEpsTable'
                                                           */

real32_T P_LCS_ESS_AngleSlope_Limit = 2.9F;/* Variable: P_LCS_ESS_AngleSlope_Limit
                                            * Referenced by: '<S18>/Constant16'
                                            */
real32_T P_LCS_ESS_preDis_Nomal[16] = { 8.0F, 9.0F, 10.0F, 10.0F, 11.0F, 11.0F,
  11.0F, 11.0F, 10.0F, 11.0F, 15.0F, 25.0F, 36.0F, 24.0F, 27.0F, 33.0F } ;/* Variable: P_LCS_ESS_preDis_Nomal
                                                                      * Referenced by: '<S18>/preDisMin_TB5'
                                                                      */

real32_T P_LCS_LCK_preDis_Nomal[16] = { 8.0F, 9.0F, 10.0F, 11.0F, 12.0F, 13.0F,
  14.0F, 15.0F, 17.0F, 22.0F, 28.0F, 33.0F, 35.0F, 38.0F, 42.0F, 49.0F } ;/* Variable: P_LCS_LCK_preDis_Nomal
                                                                      * Referenced by:
                                                                      *   '<S18>/preDisMin_TB'
                                                                      *   '<S18>/preDisMin_TB1'
                                                                      *   '<S18>/preDisMin_TB2'
                                                                      *   '<S18>/preDisMin_TB3'
                                                                      *   '<S18>/preDisMin_TB4'
                                                                      */

real32_T P_LCS_LC_Complete_PreDisFac[60] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F } ;                       /* Variable: P_LCS_LC_Complete_PreDisFac
                                        * Referenced by: '<S32>/LC_Complete_slope1'
                                        */

real32_T P_LCS_StateActiv_AngleSlope[90] = { 0.01F, 0.15F, 0.1F, 0.5F, 100.0F,
  1.6F, 0.01F, 0.15F, 0.15F, 0.7F, 100.0F, 1.6F, 0.1F, 0.2F, 0.2F, 1.0F, 100.0F,
  1.6F, 0.2F, 0.4F, 0.25F, 1.0F, 100.0F, 1.6F, 0.4F, 0.6F, 0.28F, 1.0F, 100.0F,
  1.6F, 0.8F, 0.8F, 0.8F, 1.0F, 100.0F, 1.6F, 1.0F, 1.0F, 1.0F, 1.0F, 100.0F,
  1.6F, 1.2F, 1.2F, 1.2F, 1.2F, 100.0F, 1.6F, 1.4F, 1.4F, 1.4F, 1.4F, 100.0F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 100.0F, 1.6F, 1.8F, 1.8F, 1.8F, 1.8F, 100.0F,
  1.6F, 2.0F, 2.0F, 2.0F, 2.0F, 100.0F, 1.6F, 2.0F, 2.0F, 2.0F, 2.0F, 100.0F,
  2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 100.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 100.0F,
  2.0F } ;                             /* Variable: P_LCS_StateActiv_AngleSlope
                                        * Referenced by: '<S30>/LC_start_slope'
                                        */

real32_T P_LCS_StateComplete_AngleSlope[60] = { 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
  0.3F, 0.3F, 0.3F } ;               /* Variable: P_LCS_StateComplete_AngleSlope
                                      * Referenced by: '<S32>/LC_Complete_slope'
                                      */

real32_T P_LCS_preDis_AES_Fac[304] = { 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F,
  0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F,
  0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.2F, 0.2F, 0.2F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.1F, 0.1F,
  0.1F, 0.1F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, -0.5F,
  -0.5F, -0.5F, -0.48F, -0.48F, -0.48F, -0.48F, -0.45F, -0.38F, -0.32F, -0.3F,
  -0.28F, -0.25F, -0.23F, -0.2F, -0.15F, -0.1F, 0.0F, 0.0F, -0.5F, -0.5F, -0.5F,
  -0.48F, -0.48F, -0.48F, -0.48F, -0.45F, -0.38F, -0.32F, -0.3F, -0.28F, -0.25F,
  -0.23F, -0.2F, -0.15F, -0.1F, 0.0F, 0.0F, -0.4F, -0.4F, -0.4F, -0.38F, -0.38F,
  -0.38F, -0.38F, -0.35F, -0.35F, -0.32F, -0.3F, -0.28F, -0.25F, -0.23F, -0.2F,
  -0.15F, -0.1F, 0.0F, 0.0F, -0.4F, -0.4F, -0.4F, -0.38F, -0.38F, -0.38F, -0.38F,
  -0.35F, -0.35F, -0.32F, -0.3F, -0.28F, -0.25F, -0.23F, -0.2F, -0.15F, -0.1F,
  0.0F, 0.0F, -0.4F, -0.4F, -0.4F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F,
  -0.35F, -0.32F, -0.3F, -0.28F, -0.25F, -0.23F, -0.2F, -0.15F, -0.1F, 0.0F,
  0.0F, -0.4F, -0.4F, -0.4F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F,
  -0.32F, -0.3F, -0.28F, -0.25F, -0.23F, -0.2F, -0.15F, -0.1F, 0.0F, 0.0F, -0.4F,
  -0.4F, -0.4F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.32F, -0.3F,
  -0.28F, -0.25F, -0.23F, -0.2F, -0.15F, -0.1F, 0.0F, 0.0F, -0.4F, -0.4F, -0.4F,
  -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.32F, -0.3F, -0.28F, -0.25F,
  -0.23F, -0.2F, -0.15F, -0.1F, 0.0F, 0.0F } ;/* Variable: P_LCS_preDis_AES_Fac
                                               * Referenced by: '<S18>/LCS_LC_ESSAES_preDis_TB1'
                                               */

real32_T P_LCS_preDis_ELK_Fac[304] = { 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F,
  0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F,
  0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.2F, 0.2F, 0.2F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.1F, 0.1F,
  0.1F, 0.1F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, -0.5F, -0.55F, -0.6F, -0.6F, -0.6F, -0.6F,
  -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F, -0.6F,
  -0.6F, 0.0F, -0.4F, -0.45F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F,
  -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, 0.0F, -0.25F,
  -0.3F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F,
  -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, -0.35F, 0.0F, -0.2F, -0.25F,
  -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F,
  -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, 0.0F, -0.15F, -0.2F, -0.25F, -0.25F, -0.25F,
  -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F,
  -0.25F, -0.25F, -0.25F, 0.0F, -0.1F, -0.15F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F,
  -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F,
  0.0F, -0.1F, -0.15F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F,
  -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F } ;/* Variable: P_LCS_preDis_ELK_Fac
                                                             * Referenced by: '<S18>/LCS_LC_ELK_preDis_TB'
                                                             */

real32_T P_LCS_preDis_ESS_Fac[304] = { 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F,
  0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F,
  0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.2F, 0.2F, 0.2F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.1F, 0.1F,
  0.1F, 0.1F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, -0.3F,
  -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F,
  -0.3F, -0.3F, -0.4F, -0.4F, -0.4F, -0.4F, -0.4F, -0.3F, -0.3F, -0.2F, -0.2F,
  -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.3F,
  -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.2F, -0.2F, -0.2F, -0.2F,
  -0.2F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;     /* Variable: P_LCS_preDis_ESS_Fac
                                        * Referenced by: '<S18>/LCS_LC_ESSAES_preDis_TB'
                                        */

real32_T P_LCS_preDis_LCK_A2Curve_Fac[5] = { 1.0F, 0.9F, 0.7F, 0.5F, 0.3F } ;/* Variable: P_LCS_preDis_LCK_A2Curve_Fac
                                                                      * Referenced by: '<S18>/predis_ayFac4'
                                                                      */

real32_T P_LCS_preDis_LCK_A2Curve_Fac2[10] = { 1.0F, 1.0F, 1.0F, 0.85F, 0.75F,
  0.6F, 0.5F, 0.3F, 0.3F, 0.25F } ;   /* Variable: P_LCS_preDis_LCK_A2Curve_Fac2
                                       * Referenced by: '<S18>/predis_ayFac1'
                                       */

real32_T P_LCS_preDis_LCK_Fac[304] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;/* Variable: P_LCS_preDis_LCK_Fac
                                                                      * Referenced by: '<S18>/2-D Lookup Table2'
                                                                      */

real32_T P_LCS_preDis_LC_Eco_Fac[304] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.25F, 0.3F,
  0.3F, 0.3F, 0.35F, 0.35F, 0.45F, 0.45F, 0.45F, 0.55F, 0.55F, 0.55F, 0.55F,
  0.55F, 0.55F, 0.0F, 0.0F, 0.0F, 0.0F, 0.25F, 0.3F, 0.3F, 0.3F, 0.35F, 0.35F,
  0.45F, 0.45F, 0.45F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.25F, 0.3F, 0.3F, 0.3F, 0.35F, 0.35F, 0.45F, 0.45F, 0.45F, 0.55F,
  0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.0F, 0.0F, 0.0F, 0.0F, 0.25F, 0.3F, 0.3F,
  0.3F, 0.35F, 0.35F, 0.45F, 0.45F, 0.45F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F,
  0.55F, 0.0F, 0.0F, 0.0F, 0.0F, 0.25F, 0.3F, 0.3F, 0.3F, 0.35F, 0.35F, 0.55F,
  0.55F, 0.55F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.25F, 0.35F, 0.4F, 0.45F, 0.5F, 0.55F, 0.65F, 0.65F, 0.65F, 0.65F, 0.65F,
  0.65F, 0.65F, 0.65F, 0.65F, 0.0F, 0.0F, 0.0F, 0.0F, 0.25F, 0.5F, 0.55F, 0.6F,
  0.65F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.7F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.25F, 0.55F, 0.6F, 0.65F, 0.7F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F,
  0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 0.0F, 0.0F, 0.0F, 0.0F, 0.35F, 0.55F, 0.65F,
  0.7F, 0.75F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.35F, 0.55F, 0.7F, 0.75F, 0.8F, 0.85F, 0.85F, 0.85F, 0.85F,
  0.85F, 0.85F, 0.85F, 0.85F, 0.85F, 0.85F, 0.0F, 0.0F, 0.0F, 0.0F, 0.35F, 0.55F,
  0.75F, 0.8F, 0.85F, 0.95F, 1.0F, 1.05F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F,
  1.1F, 0.0F, 0.0F, 0.0F, 0.0F, 0.35F, 0.55F, 0.75F, 0.8F, 0.85F, 0.95F, 1.0F,
  1.1F, 1.15F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 0.0F, 0.0F, 0.0F, 0.0F, 0.35F,
  0.55F, 0.75F, 0.8F, 0.85F, 0.95F, 1.0F, 1.15F, 1.2F, 1.25F, 1.25F, 1.25F,
  1.25F, 1.25F, 1.25F, 0.0F, 0.0F, 0.0F, 0.0F, 0.35F, 0.55F, 0.75F, 0.8F, 0.85F,
  0.95F, 1.0F, 1.15F, 1.25F, 1.3F, 1.3F, 1.3F, 1.3F, 1.3F, 1.3F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.35F, 0.55F, 0.75F, 0.8F, 0.85F, 0.95F, 1.0F, 1.15F, 1.3F, 1.3F,
  1.3F, 1.3F, 1.3F, 1.3F, 1.3F, 0.0F, 0.0F, 0.0F, 0.0F, 0.35F, 0.55F, 0.75F,
  0.8F, 0.85F, 0.95F, 1.0F, 1.15F, 1.3F, 1.3F, 1.3F, 1.3F, 1.3F, 1.3F, 1.3F } ;/* Variable: P_LCS_preDis_LC_Eco_Fac
                                                                      * Referenced by: '<S18>/LC_Medium_preDis_Fac_TB'
                                                                      */

real32_T P_LCS_preDis_LC_Nomal_Fac[304] = { 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F,
  0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F,
  0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.2F, 0.2F, 0.2F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.1F, 0.1F,
  0.1F, 0.1F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.2F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.2F, 0.2F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.1F, 0.2F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, 0.0F, 0.0F, 0.0F, 0.2F, 0.3F, 0.3F, 0.4F,
  0.4F, 0.4F, 0.45F, 0.45F, 0.45F, 0.45F, 0.45F, 0.45F, 0.45F, 0.45F, 0.45F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.2F, 0.4F, 0.4F, 0.45F, 0.5F, 0.6F, 0.65F, 0.7F,
  0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 0.0F, 0.0F, 0.0F, 0.0F, 0.2F,
  0.4F, 0.4F, 0.45F, 0.5F, 0.6F, 0.65F, 0.75F, 0.75F, 0.8F, 0.85F, 0.85F, 0.85F,
  0.85F, 0.85F, 0.0F, 0.0F, 0.0F, 0.0F, 0.2F, 0.4F, 0.4F, 0.45F, 0.5F, 0.6F,
  0.65F, 0.8F, 0.85F, 0.85F, 0.9F, 0.9F, 0.9F, 0.9F, 0.9F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.2F, 0.4F, 0.4F, 0.45F, 0.5F, 0.6F, 0.65F, 0.8F, 0.9F, 0.95F, 0.95F,
  0.95F, 0.95F, 0.95F, 0.95F, 0.0F, 0.0F, 0.0F, 0.0F, 0.2F, 0.4F, 0.4F, 0.45F,
  0.5F, 0.6F, 0.65F, 0.8F, 0.95F, 0.95F, 0.95F, 0.95F, 0.95F, 0.95F, 0.95F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.25F, 0.45F, 0.45F, 0.5F, 0.55F, 0.65F, 0.7F, 0.85F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F } ;/* Variable: P_LCS_preDis_LC_Nomal_Fac
                                         * Referenced by: '<S18>/2-D Lookup Table1'
                                         */

real32_T P_LCS_preDis_LC_Sport_Fac[304] = { 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F,
  0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F,
  0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F,
  0.1F, 0.1F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F,
  -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, 0.2F, 0.2F, 0.2F, 0.35F, 0.35F,
  0.35F, 0.35F, 0.35F, 0.35F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.1F, 0.1F,
  0.1F, 0.1F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F, 0.35F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F,
  0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.2F, 0.3F, 0.3F, 0.3F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.05F, 0.05F, 0.05F, 0.05F, 0.1F, 0.1F, 0.3F, 0.5F, 0.5F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.05F, 0.1F, 0.15F, 0.15F, 0.15F,
  0.15F, 0.15F, 0.2F, 0.3F, 0.6F, 0.6F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.05F, 0.1F, 0.15F, 0.15F, 0.15F, 0.15F, 0.2F, 0.25F, 0.35F, 0.65F,
  0.65F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.05F, 0.1F, 0.2F, 0.2F,
  0.2F, 0.2F, 0.2F, 0.3F, 0.5F, 0.8F, 0.8F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.05F, 0.1F, 0.23F, 0.25F, 0.25F, 0.25F, 0.25F, 0.35F, 0.55F,
  0.85F, 0.85F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.05F, 0.1F,
  0.25F, 0.25F, 0.25F, 0.25F, 0.3F, 0.4F, 0.6F, 0.9F, 0.9F, 0.0F, 0.0F, 0.0F,
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.05F, 0.1F, 0.25F, 0.25F, 0.25F, 0.25F, 0.35F,
  0.45F, 0.65F, 0.95F, 0.95F } ;       /* Variable: P_LCS_preDis_LC_Sport_Fac
                                        * Referenced by: '<S18>/LCS_LC_Emergent_preDis_TB'
                                        */

real32_T P_LCS_preDis_spd[16] = { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F,
  35.0F, 40.0F, 60.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 140.0F } ;/* Variable: P_LCS_preDis_spd
                                                                      * Referenced by:
                                                                      *   '<S18>/2-D Lookup Table1'
                                                                      *   '<S18>/2-D Lookup Table2'
                                                                      *   '<S18>/LCS_LC_ELK_preDis_TB'
                                                                      *   '<S18>/LCS_LC_ELK_preDis_TB1'
                                                                      *   '<S18>/LCS_LC_ESSAES_preDis_TB'
                                                                      *   '<S18>/LCS_LC_ESSAES_preDis_TB1'
                                                                      *   '<S18>/LCS_LC_Emergent_preDis_TB'
                                                                      *   '<S18>/LC_Medium_preDis_Fac_TB'
                                                                      *   '<S18>/preDisMin_TB'
                                                                      *   '<S18>/preDisMin_TB1'
                                                                      *   '<S18>/preDisMin_TB2'
                                                                      *   '<S18>/preDisMin_TB3'
                                                                      *   '<S18>/preDisMin_TB4'
                                                                      *   '<S18>/preDisMin_TB5'
                                                                      */

uint16_T P_LCS_StateHold_time = 250U;  /* Variable: P_LCS_StateHold_time
                                        * Referenced by: '<S20>/Constant2'
                                        */
boolean_T P_LCS_ESSAngleSW = false;    /* Variable: P_LCS_ESSAngleSW
                                        * Referenced by: '<S28>/Constant3'
                                        */
uint8_T P_LCS_LatAcc2CurveSW = 0U;     /* Variable: P_LCS_LatAcc2CurveSW
                                        * Referenced by: '<S18>/Constant2'
                                        */
uint8_T P_LCS_StateActiveFlg_BP[6] = { 1U, 2U, 3U, 4U, 5U, 6U } ;/* Variable: P_LCS_StateActiveFlg_BP
                                                                  * Referenced by: '<S30>/LC_start_slope'
                                                                  */

uint8_T P_LCS_StateCompleteFlg_BP[4] = { 7U, 8U, 9U, 10U } ;/* Variable: P_LCS_StateCompleteFlg_BP
                                                             * Referenced by:
                                                             *   '<S32>/LC_Complete_slope'
                                                             *   '<S32>/LC_Complete_slope1'
                                                             */

/* Block signals (default storage) */
B_LATC_Test_Calc_T LATC_Test_Calc_B;

/* Block states (default storage) */
DW_LATC_Test_Calc_T LATC_Test_Calc_DW;

/* Real-time model */
static RT_MODEL_LATC_Test_Calc_T LATC_Test_Calc_M_;
RT_MODEL_LATC_Test_Calc_T *const LATC_Test_Calc_M = &LATC_Test_Calc_M_;
real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

real32_T look1_iflf_binlcapw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T y;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex;
    frac = 0.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    real32_T yL_0d0;
    yL_0d0 = table[iLeft];
    y = (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
  }

  return y;
}

real32_T look2_iflf_binlcapw(real32_T u0, real32_T u1, const real32_T bp0[],
  const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride)
{
  real32_T fractions[2];
  real32_T frac;
  real32_T y;
  real32_T yL_0d0;
  uint32_T bpIndices[2];
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex[0U];
    frac = 0.0F;
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U];
    frac = 0.0F;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  if (bpIndices[0U] == maxIndex[0U]) {
    y = table[bpIdx];
  } else {
    yL_0d0 = table[bpIdx];
    y = (table[bpIdx + 1U] - yL_0d0) * fractions[0U] + yL_0d0;
  }

  if (iLeft == maxIndex[1U]) {
  } else {
    bpIdx += stride;
    if (bpIndices[0U] == maxIndex[0U]) {
      yL_0d0 = table[bpIdx];
    } else {
      yL_0d0 = table[bpIdx];
      yL_0d0 += (table[bpIdx + 1U] - yL_0d0) * fractions[0U];
    }

    y += (yL_0d0 - y) * frac;
  }

  return y;
}

real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

real32_T look2_iu8dtf_binlcapw(uint8_T u0, real_T u1, const uint8_T bp0[], const
  real_T bp1[], const real32_T table[], const uint32_T maxIndex[], uint32_T
  stride)
{
  real_T fractions[2];
  real_T frac;
  real32_T y;
  real32_T yL_0d0;
  uint32_T bpIndices[2];
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    uint8_T bpLeftVar;
    bpLeftVar = bp0[iLeft];
    frac = (real_T)(uint8_T)((uint32_T)u0 - bpLeftVar) / (real_T)(uint8_T)
      ((uint32_T)bp0[iLeft + 1U] - bpLeftVar);
  } else {
    iLeft = maxIndex[0U];
    frac = 0.0;
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U];
    frac = 0.0;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  if (bpIndices[0U] == maxIndex[0U]) {
    y = table[bpIdx];
  } else {
    yL_0d0 = table[bpIdx];
    y = (real32_T)((table[bpIdx + 1U] - yL_0d0) * fractions[0U]) + yL_0d0;
  }

  if (iLeft == maxIndex[1U]) {
  } else {
    bpIdx += stride;
    if (bpIndices[0U] == maxIndex[0U]) {
      yL_0d0 = table[bpIdx];
    } else {
      yL_0d0 = table[bpIdx];
      yL_0d0 += (real32_T)((table[bpIdx + 1U] - yL_0d0) * fractions[0U]);
    }

    y += (real32_T)((yL_0d0 - y) * frac);
  }

  return y;
}

real32_T rt_powf_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else {
    real32_T tmp;
    real32_T tmp_0;
    tmp = fabsf(u0);
    tmp_0 = fabsf(u1);
    if (rtIsInfF(u1)) {
      if (tmp == 1.0F) {
        y = 1.0F;
      } else if (tmp > 1.0F) {
        if (u1 > 0.0F) {
          y = (rtInfF);
        } else {
          y = 0.0F;
        }
      } else if (u1 > 0.0F) {
        y = 0.0F;
      } else {
        y = (rtInfF);
      }
    } else if (tmp_0 == 0.0F) {
      y = 1.0F;
    } else if (tmp_0 == 1.0F) {
      if (u1 > 0.0F) {
        y = u0;
      } else {
        y = 1.0F / u0;
      }
    } else if (u1 == 2.0F) {
      y = u0 * u0;
    } else if ((u1 == 0.5F) && (u0 >= 0.0F)) {
      y = sqrtf(u0);
    } else if ((u0 < 0.0F) && (u1 > floorf(u1))) {
      y = (rtNaNF);
    } else {
      y = powf(u0, u1);
    }
  }

  return y;
}

/* Model output function */
static void LATC_Test_Calc_output(void)
{
  real_T tmp_1;
  int32_T Num;
  int32_T i;
  int32_T i_0;
  real32_T SteerAngleMa[620];
  real32_T XiMa[620];
  real32_T YawMa[620];
  real32_T YiMa[620];
  real32_T rtb_J[31];
  real32_T SteerAngleDt;
  real32_T rtb_Merge1;
  real32_T rtb_MinK1;
  real32_T rtb_preDisMin_TB5;
  real32_T rtb_tDeltaEpsTable;
  real32_T rtb_tDeltaEpsTable1;
  real32_T vRef;
  uint32_T tmp;
  uint8_T tmp_0;
  boolean_T yValid[31];
  static const real_T b[31] = { -8.0, -8.0, -8.0, -8.0, -8.0, -8.0, -4.9, -2.8,
    -1.5, -0.8, -0.5, -0.4, -0.3, -0.2, -0.1, 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.8,
    1.5, 2.8, 4.9, 8.0, 8.0, 8.0, 8.0, 8.0, 8.0 };

  /* S-Function (cnpenvin): '<S16>/S-Function' */

  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Sum: '<S18>/Sum' incorporates:
   *  Constant: '<S18>/Constant8'
   *  Gain: '<S18>/Gain3'
   *  Gain: '<S18>/Gain4'
   */
  LCS_DisplaySpd_kph = 3.6F * LATC_Test_Calc_B.SFunction_o1 * 1.03F + 1.3F;

  /* Lookup_n-D: '<S28>/tDeltaEpsTable' incorporates:
   *  Sum: '<S18>/Sum'
   */
  rtb_tDeltaEpsTable = look1_iflf_binlcpw(LCS_DisplaySpd_kph,
    P_LCS_DeltaEps_SpdBp, P_LCS_DeltaEps_TimeVal, 15U);

  /* S-Function (cnpenvin): '<S13>/S-Function' */

  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S14>/S-Function' */

  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Product: '<S18>/Product4' incorporates:
   *  Bias: '<S18>/Bias2'
   *  DataTypeConversion: '<Root>/Data Type Conversion1'
   *  Gain: '<S18>/Gain2'
   */
  LCS_IN_SteerAngleSpd_degs = (real32_T)(((real_T)
    LATC_Test_Calc_B.SFunction_o1_p0 + -0.5) * -2.0) *
    LATC_Test_Calc_B.SFunction_o1_n;

  /* Lookup_n-D: '<S28>/tDeltaEpsTable1' incorporates:
   *  Abs: '<S28>/Abs'
   */
  rtb_tDeltaEpsTable1 = look1_iflf_binlcapw(fabsf(LCS_IN_SteerAngleSpd_degs),
    LATC_Test_Calc_ConstP.tDeltaEpsTable1_bp01Data,
    LATC_Test_Calc_ConstP.tDeltaEpsTable1_tableData, 7U);

  /* S-Function (cnpenvin): '<S11>/S-Function' */

  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S1>/S-Function' */

  /* Level2 S-Function Block: '<S1>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Product: '<S18>/Product5' incorporates:
   *  Bias: '<S18>/Bias1'
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  Gain: '<S18>/Gain5'
   */
  LCS_IN_CurSteerAngle_deg = (real32_T)(((real_T)LATC_Test_Calc_B.SFunction_o1_j
    + -0.5) * -2.0) * LATC_Test_Calc_B.SFunction_o1_e;

  /* S-Function (cnpenvin): '<S15>/S-Function' */

  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* Sum: '<S18>/Add1' */
  LCS_CurSteerAngle_deg = LCS_IN_CurSteerAngle_deg -
    LATC_Test_Calc_B.SFunction_o1_p;

  /* S-Function (cnpenvin): '<S6>/S-Function' */

  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_TarDangerlLevel);
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S5>/S-Function' */

  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_desLaneA0);
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S9>/S-Function' */

  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S3>/S-Function' */

  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_desLaneA2);
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S4>/S-Function' */

  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_desLaneA1);
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S2>/S-Function' */

  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_desLaneA3);
    sfcnOutputs(rts,0);
  }

  /* SignalConversion: '<S18>/Signal Copy' */
  LCS_IN_TarDangerLevel = LCS_IN_TarDangerlLevel;

  /* LookupNDDirect: '<S18>/Direct Lookup Table (n-D)' incorporates:
   *  SignalConversion: '<S18>/Signal Copy'
   *
   * About '<S18>/Direct Lookup Table (n-D)':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  if (LCS_IN_TarDangerLevel <= 10) {
    tmp_0 = LCS_IN_TarDangerLevel;
  } else {
    tmp_0 = 10U;
  }

  /* LookupNDDirect: '<S18>/Direct Lookup Table (n-D)'
   *
   * About '<S18>/Direct Lookup Table (n-D)':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  LCS_LCType = LATC_Test_Calc_ConstP.DirectLookupTablenD_table[tmp_0];

  /* Lookup_n-D: '<S18>/preDisMin_TB2' incorporates:
   *  Lookup_n-D: '<S18>/preDisMin_TB3'
   *  Sum: '<S18>/Sum'
   */
  LCS_Predis_BaseDis = look1_iflf_binlcapw(LCS_DisplaySpd_kph, P_LCS_preDis_spd,
    P_LCS_LCK_preDis_Nomal, 15U);

  /* Abs: '<S18>/Abs1' incorporates:
   *  Abs: '<S20>/Abs1'
   */
  rtb_MinK1 = fabsf(LCS_IN_desLaneA0);

  /* Product: '<S18>/Divide' incorporates:
   *  Abs: '<S18>/Abs1'
   *  Constant: '<S18>/Constant4'
   *  Constant: '<S18>/Constant6'
   *  Constant: '<S18>/Constant7'
   *  MinMax: '<S18>/MinMax'
   *  MinMax: '<S18>/MinMax1'
   */
  LCS_EqA0 = rtb_MinK1 * fminf(fmaxf(LATC_Test_Calc_B.SFunction_o1_h, 3.0F),
    4.0F) / 3.6F;

  /* Lookup_n-D: '<S18>/2-D Lookup Table1' incorporates:
   *  Product: '<S18>/Divide'
   *  Sum: '<S18>/Sum'
   */
  LCS_LC_NomalPredisFac = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
    P_LCS_A0_Dis_BP, P_LCS_preDis_spd, P_LCS_preDis_LC_Nomal_Fac,
    LATC_Test_Calc_ConstP.pooled20, 19U);

  /* Product: '<S18>/Product3' incorporates:
   *  Constant: '<S18>/Constant22'
   *  Sum: '<S18>/Add5'
   */
  LCS_LC_NomalPredis = (LCS_LC_NomalPredisFac + 1.0F) * LCS_Predis_BaseDis;

  /* Lookup_n-D: '<S18>/LC_Medium_preDis_Fac_TB' incorporates:
   *  Product: '<S18>/Divide'
   *  Sum: '<S18>/Sum'
   */
  LCS_LC_EcoPredisFac = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
    P_LCS_A0_Dis_BP, P_LCS_preDis_spd, P_LCS_preDis_LC_Eco_Fac,
    LATC_Test_Calc_ConstP.pooled20, 19U);

  /* Lookup_n-D: '<S18>/preDisMin_TB1' incorporates:
   *  Lookup_n-D: '<S18>/preDisMin_TB'
   *  Lookup_n-D: '<S18>/preDisMin_TB4'
   *  Sum: '<S18>/Sum'
   */
  SteerAngleDt = look1_iflf_binlcpw(LCS_DisplaySpd_kph, P_LCS_preDis_spd,
    P_LCS_LCK_preDis_Nomal, 15U);

  /* Product: '<S18>/Product12' incorporates:
   *  Constant: '<S18>/Constant24'
   *  Lookup_n-D: '<S18>/preDisMin_TB1'
   *  Sum: '<S18>/Add7'
   */
  LCS_LC_EcoPredis = (LCS_LC_EcoPredisFac + 1.0F) * SteerAngleDt;

  /* Lookup_n-D: '<S18>/LCS_LC_Emergent_preDis_TB' incorporates:
   *  Product: '<S18>/Divide'
   *  Sum: '<S18>/Sum'
   */
  LCS_LC_SportPredisFac = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
    P_LCS_A0_Dis_BP, P_LCS_preDis_spd, P_LCS_preDis_LC_Sport_Fac,
    LATC_Test_Calc_ConstP.pooled20, 19U);

  /* Product: '<S18>/Product15' incorporates:
   *  Constant: '<S18>/Constant26'
   *  Sum: '<S18>/Add8'
   */
  LCS_LC_SportPredis = (LCS_LC_SportPredisFac + 1.0F) * SteerAngleDt;

  /* UnitDelay: '<S20>/Unit Delay9' */
  LATC_Test_Calc_B.UnitDelay9 = LATC_Test_Calc_DW.UnitDelay9_DSTATE;

  /* MATLAB Function: '<S20>/MATLAB Function3' incorporates:
   *  Constant: '<S20>/Constant2'
   *  UnitDelay: '<S20>/Unit Delay3'
   *  UnitDelay: '<S20>/Unit Delay4'
   *  UnitDelay: '<S20>/Unit Delay5'
   */
  tmp = LATC_Test_Calc_DW.UnitDelay3_DSTATE + 1U;
  if (LATC_Test_Calc_DW.UnitDelay3_DSTATE + 1U > 65535U) {
    tmp = 65535U;
  }

  if ((uint16_T)tmp <= P_LCS_StateHold_time) {
    LCS_AngleSlope_Cnt = (uint16_T)tmp;
  } else {
    LCS_AngleSlope_Cnt = P_LCS_StateHold_time;
  }

  if (LCS_AngleSlope_Cnt == P_LCS_StateHold_time) {
    LCS_AngleSlope_Flg = 0U;
  } else {
    LCS_AngleSlope_Flg = LATC_Test_Calc_DW.UnitDelay4_DSTATE;
  }

  if ((LATC_Test_Calc_B.UnitDelay9 == 1) && (LATC_Test_Calc_DW.UnitDelay5_DSTATE
       == 0)) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 1U;
  }

  if ((LATC_Test_Calc_B.UnitDelay9 == 3) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 2U;
  }

  if ((LATC_Test_Calc_B.UnitDelay9 == 7) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 3U;
  }

  if ((LATC_Test_Calc_B.UnitDelay9 == 8) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 4U;
  }

  if ((LATC_Test_Calc_B.UnitDelay9 == 6) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 5U;
  }

  if ((LATC_Test_Calc_B.UnitDelay9 == 10) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 6U;
  }

  if (((LATC_Test_Calc_B.UnitDelay9 == 1) || (LATC_Test_Calc_B.UnitDelay9 == 2))
      && (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 3)) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 7U;
  }

  if (((LATC_Test_Calc_B.UnitDelay9 == 1) || (LATC_Test_Calc_B.UnitDelay9 == 2))
      && (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 7)) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 8U;
  }

  if (((LATC_Test_Calc_B.UnitDelay9 == 1) || (LATC_Test_Calc_B.UnitDelay9 == 2))
      && (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 8)) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 9U;
  }

  if (((LATC_Test_Calc_B.UnitDelay9 == 1) || (LATC_Test_Calc_B.UnitDelay9 == 2))
      && (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 10)) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 10U;
  }

  /* End of MATLAB Function: '<S20>/MATLAB Function3' */

  /* Product: '<S20>/Product' incorporates:
   *  Constant: '<S20>/Constant3'
   */
  LCS_HoldTime = 0.02 * (real_T)LCS_AngleSlope_Cnt;

  /* SwitchCase: '<S20>/Switch Case1' */
  switch (LCS_AngleSlope_Flg) {
   case 7:
   case 8:
   case 9:
   case 10:
    /* Outputs for IfAction SubSystem: '<S20>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    /* Lookup_n-D: '<S32>/LC_Complete_slope' incorporates:
     *  Product: '<S20>/Product'
     */
    rtb_Merge1 = look2_iu8dtf_binlcapw(LCS_AngleSlope_Flg, LCS_HoldTime,
      P_LCS_StateCompleteFlg_BP, P_LCS_StateActive_HoldTime_BP,
      P_LCS_StateComplete_AngleSlope, LATC_Test_Calc_ConstP.pooled18, 4U);

    /* Merge: '<S20>/Merge2' incorporates:
     *  Lookup_n-D: '<S32>/LC_Complete_slope1'
     *  Product: '<S20>/Product'
     */
    LCS_LC_Complete_PreDisFac = look2_iu8dtf_binlcapw(LCS_AngleSlope_Flg,
      LCS_HoldTime, P_LCS_StateCompleteFlg_BP, P_LCS_StateActive_HoldTime_BP,
      P_LCS_LC_Complete_PreDisFac, LATC_Test_Calc_ConstP.pooled18, 4U);

    /* End of Outputs for SubSystem: '<S20>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S20>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    /* SignalConversion generated from: '<S33>/Complete_AngleSlope' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_Merge1 = 0.2F;

    /* Merge: '<S20>/Merge2' incorporates:
     *  Constant: '<S33>/Constant1'
     *  SignalConversion generated from: '<S33>/Complete_PreDisFac'
     */
    LCS_LC_Complete_PreDisFac = 1.0F;

    /* End of Outputs for SubSystem: '<S20>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S20>/Switch Case1' */

  /* Lookup_n-D: '<S18>/2-D Lookup Table2' incorporates:
   *  Abs: '<S18>/Abs1'
   *  Sum: '<S18>/Sum'
   */
  LCS_LCKPredisFac = look2_iflf_binlcapw(rtb_MinK1, LCS_DisplaySpd_kph,
    P_LCS_A0_Dis_BP, P_LCS_preDis_spd, P_LCS_preDis_LCK_Fac,
    LATC_Test_Calc_ConstP.pooled20, 19U);

  /* Product: '<S18>/Product1' incorporates:
   *  Abs: '<S18>/Abs2'
   *  Gain: '<S18>/Gain1'
   */
  LCS_A2_LatAcc = LATC_Test_Calc_B.SFunction_o1 * LATC_Test_Calc_B.SFunction_o1 *
    fabsf(2.0F * LCS_IN_desLaneA2);

  /* Lookup_n-D: '<S18>/predis_ayFac4' incorporates:
   *  Product: '<S18>/Product1'
   */
  LCS_A2_LatAccFac = look1_iflf_binlcapw(LCS_A2_LatAcc, P_LCS_A2_LatAcc_BP,
    P_LCS_preDis_LCK_A2Curve_Fac, 4U);

  /* Sum: '<S22>/Sum5' incorporates:
   *  Abs: '<S18>/Abs4'
   *  Constant: '<S18>/Constant20'
   *  Constant: '<S18>/Constant21'
   *  Constant: '<S22>/Weight//N3'
   *  MATLAB Function: '<S18>/MATLAB Function'
   *  Memory: '<S22>/Memory2'
   *  Product: '<S22>/Product1'
   *  Product: '<S22>/Product4'
   *  Sum: '<S22>/Sum4'
   */
  LCS_Predis_Curve = (fabsf(6.0F * LCS_IN_desLaneA3 *
    (LATC_Test_Calc_B.SFunction_o1 * P_LCS_A2_Pretime) + 2.0F * LCS_IN_desLaneA2)
                      - LATC_Test_Calc_DW.Memory2_PreviousInput) * (0.02F /
    P_LCS_A2S_FliterTime) + LATC_Test_Calc_DW.Memory2_PreviousInput;

  /* Lookup_n-D: '<S18>/predis_ayFac1' incorporates:
   *  Sum: '<S22>/Sum5'
   */
  LCS_Predis_CurveFac = look1_iflf_binlcapw(LCS_Predis_Curve, P_LCS_A2_Curve_BP,
    P_LCS_preDis_LCK_A2Curve_Fac2, 9U);

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/Constant2'
   */
  if (P_LCS_LatAcc2CurveSW != 0) {
    /* Switch: '<S18>/Switch' */
    LCS_LCK_CurveFac = LCS_A2_LatAccFac;
  } else {
    /* Switch: '<S18>/Switch' */
    LCS_LCK_CurveFac = LCS_Predis_CurveFac;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Product: '<S18>/Product2' incorporates:
   *  Constant: '<S18>/Constant14'
   *  Sum: '<S18>/Add2'
   */
  LCS_LCKPredis = LCS_LC_Complete_PreDisFac * LCS_Predis_BaseDis *
    (LCS_LCKPredisFac + 1.0F) * LCS_LCK_CurveFac;

  /* Lookup_n-D: '<S18>/LCS_LC_ELK_preDis_TB' incorporates:
   *  Product: '<S18>/Divide'
   *  Sum: '<S18>/Sum'
   */
  LCS_LC_ELKPredisFac = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
    P_LCS_A0_Dis_BP, P_LCS_preDis_spd, P_LCS_preDis_ELK_Fac,
    LATC_Test_Calc_ConstP.pooled20, 19U);

  /* Product: '<S18>/Product6' incorporates:
   *  Constant: '<S18>/Constant12'
   *  Sum: '<S18>/Add9'
   */
  LCS_LC_ELKPredis = (LCS_LC_ELKPredisFac + 1.0F) * SteerAngleDt;

  /* Lookup_n-D: '<S18>/preDisMin_TB5' incorporates:
   *  Sum: '<S18>/Sum'
   */
  rtb_preDisMin_TB5 = look1_iflf_binlcpw(LCS_DisplaySpd_kph, P_LCS_preDis_spd,
    P_LCS_ESS_preDis_Nomal, 15U);

  /* Lookup_n-D: '<S18>/LCS_LC_ESSAES_preDis_TB' incorporates:
   *  Product: '<S18>/Divide'
   *  Sum: '<S18>/Sum'
   */
  LCS_LC_ESSPredisFac = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
    P_LCS_A0_Dis_BP, P_LCS_preDis_spd, P_LCS_preDis_ESS_Fac,
    LATC_Test_Calc_ConstP.pooled20, 19U);

  /* Product: '<S18>/Product7' incorporates:
   *  Constant: '<S18>/Constant13'
   *  Sum: '<S18>/Add10'
   */
  LCS_LC_ESSPredis = (LCS_LC_ESSPredisFac + 1.0F) * rtb_preDisMin_TB5;

  /* Lookup_n-D: '<S18>/LCS_LC_ELK_preDis_TB1' incorporates:
   *  Product: '<S18>/Divide'
   *  Sum: '<S18>/Sum'
   */
  LCS_LC_LCPredisFac = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
    P_LCS_A0_Dis_BP, P_LCS_preDis_spd,
    LATC_Test_Calc_ConstP.LCS_LC_ELK_preDis_TB1_tableData,
    LATC_Test_Calc_ConstP.pooled20, 19U);

  /* Product: '<S18>/Product8' incorporates:
   *  Constant: '<S18>/Constant18'
   *  Sum: '<S18>/Add11'
   */
  LCS_LC_LCPredis = (LCS_LC_LCPredisFac + 1.0F) * SteerAngleDt;

  /* Lookup_n-D: '<S18>/LCS_LC_ESSAES_preDis_TB1' incorporates:
   *  Product: '<S18>/Divide'
   *  Sum: '<S18>/Sum'
   */
  LCS_LC_AESPredisFac = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
    P_LCS_A0_Dis_BP, P_LCS_preDis_spd, P_LCS_preDis_AES_Fac,
    LATC_Test_Calc_ConstP.pooled20, 19U);

  /* MultiPortSwitch: '<S18>/Multiport Switch4' */
  switch (LCS_LCType) {
   case 1:
    /* MultiPortSwitch: '<S18>/Multiport Switch4' */
    LCS_finalPredis = LCS_LC_NomalPredis;
    break;

   case 2:
    /* MultiPortSwitch: '<S18>/Multiport Switch4' */
    LCS_finalPredis = LCS_LC_EcoPredis;
    break;

   case 3:
    /* MultiPortSwitch: '<S18>/Multiport Switch4' */
    LCS_finalPredis = LCS_LC_SportPredis;
    break;

   case 4:
    /* MultiPortSwitch: '<S18>/Multiport Switch4' */
    LCS_finalPredis = LCS_LCKPredis;
    break;

   case 5:
    /* MultiPortSwitch: '<S18>/Multiport Switch4' */
    LCS_finalPredis = LCS_LC_ELKPredis;
    break;

   case 6:
    /* MultiPortSwitch: '<S18>/Multiport Switch4' */
    LCS_finalPredis = LCS_LC_ESSPredis;
    break;

   case 7:
    /* MultiPortSwitch: '<S18>/Multiport Switch4' */
    LCS_finalPredis = LCS_LC_LCPredis;
    break;

   default:
    /* MultiPortSwitch: '<S18>/Multiport Switch4' incorporates:
     *  Constant: '<S18>/Constant17'
     *  Product: '<S18>/Product9'
     *  Sum: '<S18>/Add12'
     */
    LCS_finalPredis = (LCS_LC_AESPredisFac + 1.0F) * rtb_preDisMin_TB5;
    break;
  }

  /* End of MultiPortSwitch: '<S18>/Multiport Switch4' */

  /* Lookup_n-D: '<S28>/Q1' incorporates:
   *  Sum: '<S18>/Sum'
   */
  LCS_Q = look1_iflf_binlxpw(LCS_DisplaySpd_kph,
    LATC_Test_Calc_ConstP.Q1_bp01Data, LATC_Test_Calc_ConstP.Q1_tableData, 15U);

  /* S-Function (cnpenvin): '<S17>/S-Function' */

  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_desLaneValid);
    sfcnOutputs(rts,0);
  }

  /* SwitchCase: '<S20>/Switch Case' */
  switch (LCS_AngleSlope_Flg) {
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
   case 6:
    /* Outputs for IfAction SubSystem: '<S20>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    /* Merge: '<S20>/Merge' incorporates:
     *  Lookup_n-D: '<S30>/LC_start_slope'
     *  Product: '<S20>/Product'
     */
    LCS_StateActive_AngleSlope = look2_iu8dtf_binlcapw(LCS_AngleSlope_Flg,
      LCS_HoldTime, P_LCS_StateActiveFlg_BP, P_LCS_StateActive_HoldTime_BP,
      P_LCS_StateActiv_AngleSlope, LATC_Test_Calc_ConstP.LC_start_slope_maxIndex,
      6U);

    /* End of Outputs for SubSystem: '<S20>/Switch Case Action Subsystem' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S20>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    /* Merge: '<S20>/Merge' incorporates:
     *  Constant: '<S31>/Constant'
     *  SignalConversion generated from: '<S31>/Out1'
     */
    LCS_StateActive_AngleSlope = 100.0F;

    /* End of Outputs for SubSystem: '<S20>/Switch Case Action Subsystem1' */
    break;
  }

  /* End of SwitchCase: '<S20>/Switch Case' */

  /* MultiPortSwitch: '<S20>/Multiport Switch1' */
  switch (LATC_Test_Calc_B.UnitDelay9) {
   case 0:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Constant: '<S20>/Constant'
     */
    LCS_State_AngleSlope = 0.4F;
    break;

   case 1:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/LCK_A2_Fac'
     *  Lookup_n-D: '<S20>/No Function 2 LCK'
     *  MinMax: '<S20>/Max'
     *  Product: '<S20>/Product1'
     *  Sum: '<S18>/Sum'
     *  Sum: '<S22>/Sum5'
     */
    LCS_State_AngleSlope = fmaxf(rtb_Merge1, look1_iflf_binlcapw
      (LCS_Predis_Curve, P_LCS_A2_Curve_BP, P_LCS_AngleSlope_LCK_Curve_Fac, 9U) *
      look2_iflf_binlcapw(rtb_MinK1, LCS_DisplaySpd_kph, P_LCS_A0_Dis_BP,
                          P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_LCK,
                          LATC_Test_Calc_ConstP.pooled19, 19U));
    break;

   case 2:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/LCKIE_Active'
     *  MinMax: '<S20>/Max1'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = fmaxf(rtb_Merge1, look2_iflf_binlcapw(rtb_MinK1,
      LCS_DisplaySpd_kph, P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP,
      P_LCS_AngleSlope_LCKIE, LATC_Test_Calc_ConstP.pooled19, 19U));
    break;

   case 3:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/LCK//IE TO LC_Nomal'
     *  Product: '<S18>/Divide'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
      P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_LC_Nomal,
      LATC_Test_Calc_ConstP.pooled19, 19U);
    break;

   case 4:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/LKA Active'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = look2_iflf_binlcapw(rtb_MinK1, LCS_DisplaySpd_kph,
      P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_LKA,
      LATC_Test_Calc_ConstP.pooled19, 19U);
    break;

   case 5:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/ELK Active'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = look2_iflf_binlcapw(rtb_MinK1, LCS_DisplaySpd_kph,
      P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_ELK,
      LATC_Test_Calc_ConstP.pooled19, 19U);
    break;

   case 6:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/ESS AES Active'
     *  Product: '<S18>/Divide'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
      P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_ESS,
      LATC_Test_Calc_ConstP.pooled19, 19U);
    break;

   case 7:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/LCK//IE TO LC_Eco'
     *  Product: '<S18>/Divide'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
      P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_LC_Eco,
      LATC_Test_Calc_ConstP.pooled19, 19U);
    break;

   case 8:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/LCK//IE TO LC_Sport'
     *  Product: '<S18>/Divide'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
      P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_LC_Sport,
      LATC_Test_Calc_ConstP.pooled19, 19U);
    break;

   case 9:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/LC Cancel'
     *  Product: '<S18>/Divide'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
      P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_LC_Cancel,
      LATC_Test_Calc_ConstP.pooled19, 19U);
    break;

   case 10:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S20>/LCK//IE TO LC_Sport1'
     *  Product: '<S18>/Divide'
     *  Sum: '<S18>/Sum'
     */
    LCS_State_AngleSlope = look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph,
      P_LCS_A0_Dis_BP, P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_AES_Active,
      LATC_Test_Calc_ConstP.pooled19, 19U);
    break;

   default:
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Constant: '<S20>/Constant4'
     */
    LCS_State_AngleSlope = 0.4F;
    break;
  }

  /* End of MultiPortSwitch: '<S20>/Multiport Switch1' */

  /* MinMax: '<S20>/Min' */
  LCS_TarSteerAngleSlope = fminf(LCS_StateActive_AngleSlope,
    LCS_State_AngleSlope);

  /* S-Function (cnpenvin): '<S8>/S-Function' */

  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* MATLAB Function: '<S28>/TargetSteerAngleCalc' incorporates:
   *  Constant: '<S18>/Constant1'
   *  Constant: '<S28>/Constant2'
   *  Constant: '<S28>/tDeltaEPS'
   *  Constant: '<S28>/tDeltaEPS1'
   *  Saturate: '<S18>/Saturation2'
   *  UnitDelay: '<S28>/Unit Delay1'
   */
  SteerAngleDt = LCS_TarSteerAngleSlope * 50.0F;
  memset(&rtb_J[0], 0, 31U * sizeof(real32_T));
  Num = 0;
  LCS_DeltaAngle = 0.0;
  rtb_MinK1 = 0.0F;
  rtb_Merge1 = 0.0F;
  vRef = fmaxf(LATC_Test_Calc_B.SFunction_o1, 0.1F);
  if (LCS_IN_desLaneValid) {
    real32_T Jmin;
    real32_T disStep;
    real32_T tD;
    disStep = LCS_finalPredis / 49.0F;
    memset(&SteerAngleMa[0], 0, 620U * sizeof(real32_T));
    memset(&YawMa[0], 0, 620U * sizeof(real32_T));
    memset(&YiMa[0], 0, 620U * sizeof(real32_T));
    memset(&XiMa[0], 0, 620U * sizeof(real32_T));
    Jmin = -1.0F;
    tD = disStep / vRef;
    for (i_0 = 0; i_0 < 31; i_0++) {
      int32_T disStepFac;
      real32_T i_1;
      real32_T t;
      yValid[i_0] = true;
      rtb_preDisMin_TB5 = LCS_CurSteerAngle_deg + (real32_T)b[i_0];
      SteerAngleMa[i_0] = LATC_Test_Calc_DW.UnitDelay1_DSTATE;
      for (i = 0; i < 19; i++) {
        if (rtb_preDisMin_TB5 > LCS_CurSteerAngle_deg) {
          if (i + 2 <= 5) {
            i_1 = tD;
          } else if (i + 2 <= 10) {
            i_1 = 2.0F * tD;
          } else if (i + 2 <= 15) {
            i_1 = 3.0F * tD;
          } else {
            i_1 = 4.0F * tD;
          }

          disStepFac = (i + 1) * 31 + i_0;
          SteerAngleMa[disStepFac] = (((real32_T)i + 2.0F) - 1.0F) * i_1 *
            SteerAngleDt + SteerAngleMa[i_0];
          SteerAngleMa[disStepFac] = fminf(SteerAngleMa[disStepFac],
            rtb_preDisMin_TB5);
        } else {
          if (i + 2 <= 5) {
            i_1 = tD;
          } else if (i + 2 <= 10) {
            i_1 = 2.0F * tD;
          } else if (i + 2 <= 15) {
            i_1 = 3.0F * tD;
          } else {
            i_1 = 4.0F * tD;
          }

          disStepFac = (i + 1) * 31 + i_0;
          SteerAngleMa[disStepFac] = SteerAngleMa[i_0] - (((real32_T)i + 2.0F) -
            1.0F) * i_1 * SteerAngleDt;
          SteerAngleMa[disStepFac] = fmaxf(SteerAngleMa[disStepFac],
            rtb_preDisMin_TB5);
        }
      }

      if (vRef < 1.0F) {
        YawMa[i_0] = tanf(rtb_tDeltaEpsTable1 * 0.5F * (LCS_CurSteerAngle_deg +
          LATC_Test_Calc_DW.UnitDelay1_DSTATE) / 888.15F) * (rtb_tDeltaEpsTable *
          vRef) / 2.915F;
      } else {
        YawMa[i_0] = rtb_tDeltaEpsTable1 * 0.5F * rtb_tDeltaEpsTable *
          (LCS_CurSteerAngle_deg + LATC_Test_Calc_DW.UnitDelay1_DSTATE) / (fminf
          ((vRef * vRef / 552.25F + 1.0F) * 2.915F / vRef, 32767.0F) * 888.15F);
      }

      t = rtb_tDeltaEpsTable * vRef;
      XiMa[i_0] = t * cosf(YawMa[i_0]);
      YiMa[i_0] = t * sinf(YawMa[i_0]);
      i_1 = rtb_preDisMin_TB5 - LCS_CurSteerAngle_deg;
      for (i = 0; i < 19; i++) {
        int32_T YawMa_tmp;
        real32_T rtb_J_i;
        rtb_J_i = rtb_J[i_0];
        if (i + 1 <= 5) {
          disStepFac = 1;
        } else if (i + 1 <= 10) {
          disStepFac = 2;
        } else if (i + 1 <= 15) {
          disStepFac = 3;
        } else {
          disStepFac = 4;
        }

        if (vRef < 1.0F) {
          YawMa_tmp = 31 * i + i_0;
          YawMa[i_0 + 31 * (i + 1)] = tanf(SteerAngleMa[YawMa_tmp] / 888.15F) /
            2.915F * ((real32_T)disStepFac * disStep) + YawMa[YawMa_tmp];
        } else {
          YawMa_tmp = 31 * i + i_0;
          YawMa[i_0 + 31 * (i + 1)] = SteerAngleMa[YawMa_tmp] / (fminf((vRef *
            vRef / 552.25F + 1.0F) * 2.915F / vRef, 32767.0F) * 888.15F) *
            ((real32_T)disStepFac * disStep / vRef) + YawMa[YawMa_tmp];
        }

        YawMa_tmp = (i + 1) * 31 + i_0;
        rtb_preDisMin_TB5 = YawMa[YawMa_tmp];
        if ((rtb_preDisMin_TB5 > 1.2F) || (rtb_preDisMin_TB5 < -1.2F)) {
          yValid[i_0] = false;
        } else {
          int32_T XiMa_tmp;
          real32_T XiMa_tmp_0;
          XiMa_tmp = 31 * i + i_0;
          t = (rtb_preDisMin_TB5 + YawMa[XiMa_tmp]) * 0.5F;
          XiMa_tmp_0 = (real32_T)disStepFac * disStep;
          XiMa[YawMa_tmp] = cosf(t) * XiMa_tmp_0 + XiMa[XiMa_tmp];
          YiMa[YawMa_tmp] = sinf(t) * XiMa_tmp_0 + YiMa[XiMa_tmp];
          if (i + 1 > 18) {
            t = cosf(rtb_preDisMin_TB5) * 2.1F + XiMa[YawMa_tmp];
            rtb_preDisMin_TB5 = (sinf(rtb_preDisMin_TB5) * 2.1F + YiMa[YawMa_tmp])
              - (((t * t * LCS_IN_desLaneA2 + LCS_IN_desLaneA3 * rt_powf_snf(t,
                    3.0F)) + LCS_IN_desLaneA1 * t) + LCS_IN_desLaneA0);
            rtb_J_i += rtb_preDisMin_TB5 * rtb_preDisMin_TB5 * 1000.0F;
          }
        }

        rtb_J[i_0] = rtb_J_i;
      }

      rtb_J[i_0] += i_1 * i_1 * LCS_Q;
      if (yValid[i_0]) {
        if (Jmin < 0.0F) {
          Jmin = rtb_J[i_0];
          Num = i_0 + 1;
        } else if (i_0 + 1 <= 16) {
          if (rtb_J[i_0] <= Jmin) {
            Jmin = rtb_J[i_0];
            Num = i_0 + 1;
          }
        } else if (rtb_J[i_0] < Jmin) {
          Jmin = rtb_J[i_0];
          Num = i_0 + 1;
        }
      }
    }

    LCS_DeltaAngle = b[Num - 1];
    LCS_TarSteerAngleEnd = (real32_T)LCS_DeltaAngle + LCS_CurSteerAngle_deg;
    if ((LCS_IN_TarDangerlLevel == 6) && (P_LCS_ESSAngSlope_SW == 1.0)) {
      LCS_TarSteerAngle = fminf(LCS_CurSteerAngle_deg + LCS_TarSteerAngleSlope,
        fmaxf(LCS_CurSteerAngle_deg - LCS_TarSteerAngleSlope,
              LCS_TarSteerAngleEnd));
    } else {
      rtb_MinK1 = LATC_Test_Calc_DW.UnitDelay1_DSTATE - LCS_TarSteerAngleSlope;
      rtb_Merge1 = LATC_Test_Calc_DW.UnitDelay1_DSTATE + LCS_TarSteerAngleSlope;
      LCS_TarSteerAngle = fminf(rtb_Merge1, fmaxf(rtb_MinK1,
        LCS_TarSteerAngleEnd));
    }
  } else {
    if (LATC_Test_Calc_B.SFunction_o1_p > 10.0F) {
      /* Saturate: '<S18>/Saturation2' */
      rtb_preDisMin_TB5 = 10.0F;
    } else if (LATC_Test_Calc_B.SFunction_o1_p < -10.0F) {
      /* Saturate: '<S18>/Saturation2' */
      rtb_preDisMin_TB5 = -10.0F;
    } else {
      /* Saturate: '<S18>/Saturation2' */
      rtb_preDisMin_TB5 = LATC_Test_Calc_B.SFunction_o1_p;
    }

    /* Saturate: '<S18>/Saturation1' incorporates:
     *  Saturate: '<S18>/Saturation2'
     */
    if (LATC_Test_Calc_B.SFunction_o1_f > 10.0F) {
      rtb_tDeltaEpsTable = 10.0F;
    } else if (LATC_Test_Calc_B.SFunction_o1_f < -10.0F) {
      rtb_tDeltaEpsTable = -10.0F;
    } else {
      rtb_tDeltaEpsTable = LATC_Test_Calc_B.SFunction_o1_f;
    }

    /* End of Saturate: '<S18>/Saturation1' */
    LCS_TarSteerAngle = (LCS_CurSteerAngle_deg + rtb_preDisMin_TB5) -
      rtb_tDeltaEpsTable;
    LCS_TarSteerAngleEnd = LCS_CurSteerAngle_deg;
  }

  LCS_TarSteerAngleCalc_Num = (real32_T)Num;

  /* End of MATLAB Function: '<S28>/TargetSteerAngleCalc' */

  /* Signum: '<S28>/Sign' */
  if (LCS_DeltaAngle < 0.0) {
    tmp_1 = -1.0;
  } else if (LCS_DeltaAngle > 0.0) {
    tmp_1 = 1.0;
  } else if (LCS_DeltaAngle == 0.0) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = (rtNaN);
  }

  /* End of Signum: '<S28>/Sign' */

  /* Sum: '<S28>/Add' incorporates:
   *  Lookup_n-D: '<S28>/ESS AES Active'
   *  Product: '<S18>/Divide'
   *  Product: '<S28>/Product'
   *  Sum: '<S18>/Sum'
   */
  LCS_ESS_TarAngle2 = (real32_T)(tmp_1 * LCS_TarSteerAngleSlope) *
    look2_iflf_binlcapw(LCS_EqA0, LCS_DisplaySpd_kph, P_LCS_A0_Dis_BP,
                        P_LCS_AngleSlope_Spd_BP, P_LCS_AngleSlope_ESS_Add,
                        LATC_Test_Calc_ConstP.pooled19, 19U) + LCS_TarSteerAngle;

  /* Switch: '<S28>/Switch' incorporates:
   *  Constant: '<S28>/Constant3'
   *  Constant: '<S42>/Constant'
   *  Logic: '<S28>/AND'
   *  RelationalOperator: '<S42>/Compare'
   */
  if (P_LCS_ESSAngleSW && (LCS_IN_TarDangerlLevel == 6)) {
    rtb_preDisMin_TB5 = LCS_ESS_TarAngle2;
  } else {
    rtb_preDisMin_TB5 = LCS_TarSteerAngle;
  }

  /* End of Switch: '<S28>/Switch' */

  /* Sum: '<S44>/Sum5' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S44>/Weight//N3'
   *  Memory: '<S44>/Memory2'
   *  Product: '<S44>/Product1'
   *  Product: '<S44>/Product4'
   *  Sum: '<S44>/Sum4'
   */
  LCS_TarSteerAngle_Filter = 0.02F / P_LCS_AngleFilterTime * (rtb_preDisMin_TB5
    - LATC_Test_Calc_DW.Memory2_PreviousInput_b) +
    LATC_Test_Calc_DW.Memory2_PreviousInput_b;

  /* Switch: '<S28>/Switch1' incorporates:
   *  Constant: '<S28>/Constant4'
   *  Constant: '<S43>/Constant'
   *  Logic: '<S28>/AND1'
   *  RelationalOperator: '<S43>/Compare'
   *  Switch: '<S28>/Switch2'
   */
  if ((P_LCS_ESSAngleSW2 != 0.0) && (LCS_IN_TarDangerlLevel == 6)) {
    rtb_preDisMin_TB5 = LCS_ESS_TarAngle2;
  } else if (LCS_IN_desLaneValid) {
    /* Switch: '<S28>/Switch2' */
    rtb_preDisMin_TB5 = LCS_TarSteerAngle_Filter;
  } else {
    rtb_preDisMin_TB5 = LCS_TarSteerAngle;
  }

  /* End of Switch: '<S28>/Switch1' */

  /* Saturate: '<S18>/Saturation' */
  if (LATC_Test_Calc_B.SFunction_o1_f > 10.0F) {
    rtb_tDeltaEpsTable = 10.0F;
  } else if (LATC_Test_Calc_B.SFunction_o1_f < -10.0F) {
    rtb_tDeltaEpsTable = -10.0F;
  } else {
    rtb_tDeltaEpsTable = LATC_Test_Calc_B.SFunction_o1_f;
  }

  /* End of Saturate: '<S18>/Saturation' */

  /* Sum: '<S18>/Add6' */
  LCS_ReqEPSTrgAngle = rtb_preDisMin_TB5 + rtb_tDeltaEpsTable;

  /* MinMax: '<S27>/Min' incorporates:
   *  Constant: '<S18>/Constant16'
   *  MinMax: '<S27>/Max'
   *  Sum: '<S27>/Add'
   *  Sum: '<S27>/Add1'
   *  UnitDelay: '<S27>/Unit Delay'
   */
  LATC_Test_Calc_B.Min = fmaxf(fminf(LATC_Test_Calc_DW.UnitDelay_DSTATE_b +
    P_LCS_ESS_AngleSlope_Limit, LCS_ReqEPSTrgAngle),
    LATC_Test_Calc_DW.UnitDelay_DSTATE_b - P_LCS_ESS_AngleSlope_Limit);

  /* Switch: '<S18>/Switch1' incorporates:
   *  Constant: '<S21>/Constant'
   *  RelationalOperator: '<S21>/Compare'
   */
  if (LCS_IN_TarDangerlLevel != 6) {
    /* Gain: '<S18>/Gain' */
    LCS_OUT_ReqEPSTrgAngle = -LCS_ReqEPSTrgAngle;
  } else {
    /* Gain: '<S18>/Gain' */
    LCS_OUT_ReqEPSTrgAngle = -LATC_Test_Calc_B.Min;
  }

  /* End of Switch: '<S18>/Switch1' */

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion = LCS_OUT_ReqEPSTrgAngle;

  /* S-Function (cnpenvout): '<S19>/S-Function' */

  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S7>/S-Function' */

  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S10>/S-Function' */

  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S12>/S-Function' */

  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S24>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_k = LCS_TarSteerAngleSlope;

  /* S-Function (cnpenvout): '<S24>/S-Function' */

  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S25>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_b = LCS_finalPredis;

  /* S-Function (cnpenvout): '<S25>/S-Function' */

  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S45>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_g = LCS_TarSteerAngle;

  /* S-Function (cnpenvout): '<S45>/S-Function' */

  /* Level2 S-Function Block: '<S45>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S46>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_j = LCS_TarSteerAngleCalc_Num;

  /* S-Function (cnpenvout): '<S46>/S-Function' */

  /* Level2 S-Function Block: '<S46>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S47>/S-Function' */

  /* Level2 S-Function Block: '<S47>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S48>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_e = LCS_TarSteerAngleEnd;

  /* S-Function (cnpenvout): '<S48>/S-Function' */

  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S49>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_c = rtb_MinK1;

  /* S-Function (cnpenvout): '<S49>/S-Function' */

  /* Level2 S-Function Block: '<S49>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S50>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_i = rtb_Merge1;

  /* S-Function (cnpenvout): '<S50>/S-Function' */

  /* Level2 S-Function Block: '<S50>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S39>/Switch1' incorporates:
   *  Abs: '<S26>/Abs4'
   *  Memory: '<S39>/Memory2'
   *  Product: '<S39>/Product3'
   *  Product: '<S39>/Product5'
   *  Sum: '<S39>/Sum1'
   */
  LATC_Test_Calc_B.Switch1 = LATC_Test_Calc_DW.Memory2_PreviousInput_e *
    LATC_Test_Calc_ConstB.Add1 + LATC_Test_Calc_ConstB.Product2 * fabsf
    (LATC_Test_Calc_B.SFunction_o1_a);

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S41>/Constant1'
   *  RelationalOperator: '<S37>/Compare'
   *  Sum: '<S41>/Add'
   *  UnitDelay: '<S41>/Unit Delay'
   */
  if (LATC_Test_Calc_B.Switch1 > LATC_Test_Calc_P.P_LCS_DetOverRide_DrvTrq_TH) {
    tmp_1 = LATC_Test_Calc_DW.UnitDelay_DSTATE + 0.02;
  } else {
    tmp_1 = 0.0;
  }

  /* End of Switch: '<S41>/Switch' */

  /* MinMax: '<S41>/Max' incorporates:
   *  Constant: '<S41>/Constant2'
   */
  LATC_Test_Calc_B.Max = fmin(tmp_1, 10.0);

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S40>/Constant1'
   *  RelationalOperator: '<S38>/Compare'
   *  Sum: '<S40>/Add'
   *  UnitDelay: '<S40>/Unit Delay'
   */
  if (LATC_Test_Calc_B.Switch1 <= LATC_Test_Calc_P.P_LCS_DetNoOverRide_DrvTrq_TH)
  {
    tmp_1 = LATC_Test_Calc_DW.UnitDelay_DSTATE_n + 0.02;
  } else {
    tmp_1 = 0.0;
  }

  /* End of Switch: '<S40>/Switch' */

  /* MinMax: '<S40>/Max' incorporates:
   *  Constant: '<S40>/Constant2'
   */
  LATC_Test_Calc_B.Max_o = fmin(tmp_1, 10.0);

  /* Chart: '<S26>/Chart' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   */
  if (LATC_Test_Calc_DW.is_active_c4_LATC_Test_Calc == 0U) {
    LATC_Test_Calc_DW.is_active_c4_LATC_Test_Calc = 1U;
    LATC_Test_Calc_DW.is_c4_LATC_Test_Calc = LATC_Test_Calc_IN_NoOverRide;
    LCS_IsOverRide = false;
  } else if (LATC_Test_Calc_DW.is_c4_LATC_Test_Calc == 1) {
    LCS_IsOverRide = true;
    if (LATC_Test_Calc_B.Max_o > LATC_Test_Calc_P.P_LCS_NoOverRideTime_TH_s) {
      LATC_Test_Calc_DW.is_c4_LATC_Test_Calc = LATC_Test_Calc_IN_NoOverRide;
      LCS_IsOverRide = false;
    }
  } else {
    /* case IN_NoOverRide: */
    LCS_IsOverRide = false;
    if (LATC_Test_Calc_B.Max > LATC_Test_Calc_P.P_LCS_OverRideTime_TH_s) {
      LATC_Test_Calc_DW.is_c4_LATC_Test_Calc = LATC_Test_Calc_IN_IsOverRide;
      LCS_IsOverRide = true;
    }
  }

  /* End of Chart: '<S26>/Chart' */
}

/* Model update function */
static void LATC_Test_Calc_update(void)
{
  /* Update for UnitDelay: '<S20>/Unit Delay9' */
  LATC_Test_Calc_DW.UnitDelay9_DSTATE = LCS_IN_TarDangerlLevel;

  /* Update for UnitDelay: '<S20>/Unit Delay5' */
  LATC_Test_Calc_DW.UnitDelay5_DSTATE = LATC_Test_Calc_B.UnitDelay9;

  /* Update for UnitDelay: '<S20>/Unit Delay4' */
  LATC_Test_Calc_DW.UnitDelay4_DSTATE = LCS_AngleSlope_Flg;

  /* Update for UnitDelay: '<S20>/Unit Delay3' */
  LATC_Test_Calc_DW.UnitDelay3_DSTATE = LCS_AngleSlope_Cnt;

  /* Update for Memory: '<S22>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput = LCS_Predis_Curve;

  /* Update for UnitDelay: '<S28>/Unit Delay1' */
  LATC_Test_Calc_DW.UnitDelay1_DSTATE = LCS_TarSteerAngle;

  /* Update for Memory: '<S44>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_b = LCS_TarSteerAngle_Filter;

  /* Update for UnitDelay: '<S27>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE_b = LATC_Test_Calc_B.Min;

  /* Update for UnitDelay: '<S41>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE = LATC_Test_Calc_B.Max;

  /* Update for Memory: '<S39>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_e = LATC_Test_Calc_B.Switch1;

  /* Update for UnitDelay: '<S40>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE_n = LATC_Test_Calc_B.Max_o;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++LATC_Test_Calc_M->Timing.clockTick0)) {
    ++LATC_Test_Calc_M->Timing.clockTickH0;
  }

  LATC_Test_Calc_M->Timing.t[0] = LATC_Test_Calc_M->Timing.clockTick0 *
    LATC_Test_Calc_M->Timing.stepSize0 + LATC_Test_Calc_M->Timing.clockTickH0 *
    LATC_Test_Calc_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void LATC_Test_Calc_initialize(void)
{
  /* Start for S-Function (cnpenvin): '<S16>/S-Function' */
  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S14>/S-Function' */
  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S1>/S-Function' */
  /* Level2 S-Function Block: '<S1>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S5>/S-Function' */
  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S2>/S-Function' */
  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S17>/S-Function' */
  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S8>/S-Function' */
  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S19>/S-Function' */
  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S24>/S-Function' */
  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S25>/S-Function' */
  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S45>/S-Function' */
  /* Level2 S-Function Block: '<S45>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S46>/S-Function' */
  /* Level2 S-Function Block: '<S46>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S47>/S-Function' */
  /* Level2 S-Function Block: '<S47>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S48>/S-Function' */
  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S49>/S-Function' */
  /* Level2 S-Function Block: '<S49>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S50>/S-Function' */
  /* Level2 S-Function Block: '<S50>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay9' */
  LATC_Test_Calc_DW.UnitDelay9_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay5' */
  LATC_Test_Calc_DW.UnitDelay5_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay4' */
  LATC_Test_Calc_DW.UnitDelay4_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay3' */
  LATC_Test_Calc_DW.UnitDelay3_DSTATE = 0U;

  /* InitializeConditions for Memory: '<S22>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S28>/Unit Delay1' */
  LATC_Test_Calc_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for Memory: '<S44>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_b = 0.0F;

  /* InitializeConditions for UnitDelay: '<S27>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE_b = 0.0F;

  /* InitializeConditions for UnitDelay: '<S41>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for Memory: '<S39>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_e = 0.0F;

  /* InitializeConditions for UnitDelay: '<S40>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE_n = 0.0;

  /* SystemInitialize for Chart: '<S26>/Chart' */
  LATC_Test_Calc_DW.is_active_c4_LATC_Test_Calc = 0U;
  LATC_Test_Calc_DW.is_c4_LATC_Test_Calc = LATC_Test_Ca_IN_NO_ACTIVE_CHILD;
  LCS_IsOverRide = false;
}

/* Model terminate function */
static void LATC_Test_Calc_terminate(void)
{
  /* Terminate for S-Function (cnpenvin): '<S16>/S-Function' */
  /* Level2 S-Function Block: '<S16>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S14>/S-Function' */
  /* Level2 S-Function Block: '<S14>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S1>/S-Function' */
  /* Level2 S-Function Block: '<S1>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S5>/S-Function' */
  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S2>/S-Function' */
  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S17>/S-Function' */
  /* Level2 S-Function Block: '<S17>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S8>/S-Function' */
  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S19>/S-Function' */
  /* Level2 S-Function Block: '<S19>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S24>/S-Function' */
  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S25>/S-Function' */
  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S45>/S-Function' */
  /* Level2 S-Function Block: '<S45>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S46>/S-Function' */
  /* Level2 S-Function Block: '<S46>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S47>/S-Function' */
  /* Level2 S-Function Block: '<S47>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S48>/S-Function' */
  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S49>/S-Function' */
  /* Level2 S-Function Block: '<S49>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S50>/S-Function' */
  /* Level2 S-Function Block: '<S50>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  LATC_Test_Calc_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  LATC_Test_Calc_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  LATC_Test_Calc_initialize();
}

void MdlTerminate(void)
{
  LATC_Test_Calc_terminate();
}

/* Registration function */
RT_MODEL_LATC_Test_Calc_T *LATC_Test_Calc(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LATC_Test_Calc_M, 0,
                sizeof(RT_MODEL_LATC_Test_Calc_T));
  rtsiSetSolverName(&LATC_Test_Calc_M->solverInfo,"FixedStepDiscrete");
  LATC_Test_Calc_M->solverInfoPtr = (&LATC_Test_Calc_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = LATC_Test_Calc_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "LATC_Test_Calc_M points to
       static memory which is guaranteed to be non-NULL" */
    LATC_Test_Calc_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    LATC_Test_Calc_M->Timing.sampleTimes =
      (&LATC_Test_Calc_M->Timing.sampleTimesArray[0]);
    LATC_Test_Calc_M->Timing.offsetTimes =
      (&LATC_Test_Calc_M->Timing.offsetTimesArray[0]);

    /* task periods */
    LATC_Test_Calc_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    LATC_Test_Calc_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(LATC_Test_Calc_M, &LATC_Test_Calc_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = LATC_Test_Calc_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    LATC_Test_Calc_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(LATC_Test_Calc_M, -1);
  LATC_Test_Calc_M->Timing.stepSize0 = 0.01;
  LATC_Test_Calc_M->solverInfoPtr = (&LATC_Test_Calc_M->solverInfo);
  LATC_Test_Calc_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&LATC_Test_Calc_M->solverInfo, 0.01);
  rtsiSetSolverMode(&LATC_Test_Calc_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  LATC_Test_Calc_M->blockIO = ((void *) &LATC_Test_Calc_B);
  (void) memset(((void *) &LATC_Test_Calc_B), 0,
                sizeof(B_LATC_Test_Calc_T));

  /* exported global signals */
  LCS_HoldTime = 0.0;
  LCS_DeltaAngle = 0.0;
  LCS_DisplaySpd_kph = 0.0F;
  LCS_IN_SteerAngleSpd_degs = 0.0F;
  LCS_IN_CurSteerAngle_deg = 0.0F;
  LCS_CurSteerAngle_deg = 0.0F;
  LCS_IN_desLaneA0 = 0.0F;
  LCS_IN_desLaneA2 = 0.0F;
  LCS_IN_desLaneA1 = 0.0F;
  LCS_IN_desLaneA3 = 0.0F;
  LCS_Predis_BaseDis = 0.0F;
  LCS_EqA0 = 0.0F;
  LCS_LC_NomalPredisFac = 0.0F;
  LCS_LC_NomalPredis = 0.0F;
  LCS_LC_EcoPredisFac = 0.0F;
  LCS_LC_EcoPredis = 0.0F;
  LCS_LC_SportPredisFac = 0.0F;
  LCS_LC_SportPredis = 0.0F;
  LCS_LC_Complete_PreDisFac = 0.0F;
  LCS_LCKPredisFac = 0.0F;
  LCS_A2_LatAcc = 0.0F;
  LCS_A2_LatAccFac = 0.0F;
  LCS_Predis_Curve = 0.0F;
  LCS_Predis_CurveFac = 0.0F;
  LCS_LCK_CurveFac = 0.0F;
  LCS_LCKPredis = 0.0F;
  LCS_LC_ELKPredisFac = 0.0F;
  LCS_LC_ELKPredis = 0.0F;
  LCS_LC_ESSPredisFac = 0.0F;
  LCS_LC_ESSPredis = 0.0F;
  LCS_LC_LCPredisFac = 0.0F;
  LCS_LC_LCPredis = 0.0F;
  LCS_LC_AESPredisFac = 0.0F;
  LCS_finalPredis = 0.0F;
  LCS_Q = 0.0F;
  LCS_StateActive_AngleSlope = 0.0F;
  LCS_State_AngleSlope = 0.0F;
  LCS_TarSteerAngleSlope = 0.0F;
  LCS_ESS_TarAngle2 = 0.0F;
  LCS_TarSteerAngle_Filter = 0.0F;
  LCS_ReqEPSTrgAngle = 0.0F;
  LCS_OUT_ReqEPSTrgAngle = 0.0F;
  LCS_TarSteerAngle = 0.0F;
  LCS_TarSteerAngleEnd = 0.0F;
  LCS_TarSteerAngleCalc_Num = 0.0F;
  LCS_AngleSlope_Cnt = 0U;
  LCS_IN_TarDangerlLevel = 0U;
  LCS_IN_TarDangerLevel = 0U;
  LCS_LCType = 0U;
  LCS_AngleSlope_Flg = 0U;
  LCS_IN_desLaneValid = false;
  LCS_IsOverRide = false;

  /* parameters */
  LATC_Test_Calc_M->defaultParam = ((real_T *)&LATC_Test_Calc_P);

  /* states (dwork) */
  LATC_Test_Calc_M->dwork = ((void *) &LATC_Test_Calc_DW);
  (void) memset((void *)&LATC_Test_Calc_DW, 0,
                sizeof(DW_LATC_Test_Calc_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &LATC_Test_Calc_M->NonInlinedSFcns.sfcnInfo;
    LATC_Test_Calc_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(LATC_Test_Calc_M)));
    LATC_Test_Calc_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &LATC_Test_Calc_M->Sizes.numSampTimes);
    LATC_Test_Calc_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (LATC_Test_Calc_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,LATC_Test_Calc_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(LATC_Test_Calc_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(LATC_Test_Calc_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (LATC_Test_Calc_M));
    rtssSetStepSizePtr(sfcnInfo, &LATC_Test_Calc_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(LATC_Test_Calc_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &LATC_Test_Calc_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &LATC_Test_Calc_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &LATC_Test_Calc_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &LATC_Test_Calc_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &LATC_Test_Calc_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &LATC_Test_Calc_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &LATC_Test_Calc_M->solverInfoPtr);
  }

  LATC_Test_Calc_M->Sizes.numSFcns = (26);

  /* register each child */
  {
    (void) memset((void *)&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  26*sizeof(SimStruct));
    LATC_Test_Calc_M->childSfunctions =
      (&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 26; i++) {
        LATC_Test_Calc_M->childSfunctions[i] =
          (&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S16>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input8/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S13>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_n));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_e));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input5/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S14>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            &LATC_Test_Calc_B.SFunction_o1_p0));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_k));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input6/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S11>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_e));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ei));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input3/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S1>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            &LATC_Test_Calc_B.SFunction_o1_j));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_g));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_ax));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S15>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_p));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_a));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_c));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input7/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S6>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *) &LCS_IN_TarDangerlLevel));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_i));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input14/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_g);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S5>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *) &LCS_IN_desLaneA0));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ky));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input13/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_f0);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S9>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_h));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_h));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input17/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S3>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *) &LCS_IN_desLaneA2));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_it));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input11/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S4>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *) &LCS_IN_desLaneA1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ae));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input12/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S2>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *) &LCS_IN_desLaneA3));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_b));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_nm));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input10/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S17>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &LCS_IN_desLaneValid));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_j));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_fe));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input9/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_f);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S8>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_f));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_jj));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_gt));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input16/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S19>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_mn);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S7>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_d));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_m));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_nu));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input15/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S10>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_nk));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_n));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input2/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S12>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_a));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_o));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_gn));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Input4/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_n1);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvin(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S24>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LCS_Angle/Output1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_pc);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S25>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_b;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/LCS_Angle/Output2/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ct);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S45>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output1/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ij);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S46>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output2/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_iv);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S47>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.iDims0;
          sfcnUPtrs[0] = &LCS_DeltaAngle;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output3/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_oq);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S48>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output4/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S49>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_c;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output5/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_bf);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S50>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "LATC_Test_Calc/LCS_Angle/TargetSteerAngleCalc/Output6/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_oh);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P6_Size);
      }

      /* registration */
      cnpenvout(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  LATC_Test_Calc_M->Sizes.numContStates = (0);/* Number of continuous states */
  LATC_Test_Calc_M->Sizes.numY = (0);  /* Number of model outputs */
  LATC_Test_Calc_M->Sizes.numU = (0);  /* Number of model inputs */
  LATC_Test_Calc_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  LATC_Test_Calc_M->Sizes.numSampTimes = (1);/* Number of sample times */
  LATC_Test_Calc_M->Sizes.numBlocks = (259);/* Number of blocks */
  LATC_Test_Calc_M->Sizes.numBlockIO = (58);/* Number of block outputs */
  LATC_Test_Calc_M->Sizes.numBlockPrms = (4);/* Sum of parameter "widths" */
  return LATC_Test_Calc_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
