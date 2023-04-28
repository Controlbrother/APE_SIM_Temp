/*
 * LATC_Test_Calc.c
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 1.47
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Nov 23 10:42:24 2021
 *
 * Target selection: cnp.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LATC_Test_Calc.h"
#include "LATC_Test_Calc_private.h"

/* Exported block signals */
real_T LCS_HoldTime;                   /* '<S40>/Product' */
real_T LCS_LCC_PlanIdex;               /* '<S42>/FrenetTrajectory' */
real_T LCS_LCC_NumTraj;                /* '<S42>/FrenetTrajectory' */
real32_T LCS_IN_desLaneA1;             /* '<S8>/S-Function' */
real32_T LCS_IN_desLaneA2;             /* '<S9>/S-Function' */
real32_T LCS_IN_desLaneA3;             /* '<S10>/S-Function' */
real32_T LCS_LCC_Preview_Curve;        /* '<S45>/Sum5' */
real32_T LCS_LCC_Preview_CurveFac;     /* '<S44>/predis_ayFac1' */
real32_T LCS_LCC_PreviewFac;           /* '<S44>/2-D Lookup Table2' */
real32_T LCS_LCC_FinalPreviewT;        /* '<S44>/Min' */
real32_T LCS_LCC_AyDtLimit;            /* '<S44>/Multiport Switch1' */
real32_T LCS_LCC_Max_Lateral_Acc;      /* '<S40>/Multiport Switch2' */
real32_T LCS_StateActive_AngleSlope;   /* '<S40>/Merge' */
real32_T LCS_LCC_StateAngleSlope;      /* '<S40>/Multiport Switch1' */
real32_T LCS_ReqEPSTrgAngle;           /* '<Root>/Gain6' */
real32_T LCS_LCC_PlanX[40];            /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_PlanY[40];            /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_PlanTheta[40];        /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_PreviewX;             /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_PreviewY;             /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_PreviewTheta;         /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_ref_curve;            /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_Later_error;          /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_Later_error_rate;     /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_heading_error;        /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_heading_error_rate;   /* '<S42>/FrenetTrajectory' */
real32_T LCS_LCC_TarAngle_deg;         /* '<Root>/MATLAB Function1' */
real32_T LCS_LCC_Feedforward;          /* '<Root>/MATLAB Function1' */
real32_T LCS_LCC_Feedback;             /* '<Root>/MATLAB Function1' */
real32_T LCS_LCC_Steer_Limit;          /* '<Root>/MATLAB Function1' */
uint16_T LCS_AngleSlope_Cnt;           /* '<S40>/MATLAB Function3' */
uint8_T LCS_LCType;                    /* '<S44>/Direct Lookup Table (n-D)1' */
uint8_T LCS_AngleSlope_Flg;            /* '<S40>/MATLAB Function3' */

/* Exported block parameters */
real_T P_LCS_StateActive_HoldTime_BP[15] = { 0.0, 0.2, 0.4, 0.6, 0.8, 1.0, 1.2,
  1.4, 1.6, 1.8, 2.0, 4.0, 6.0, 8.0, 10.0 } ;
                                      /* Variable: P_LCS_StateActive_HoldTime_BP
                                       * Referenced by:
                                       *   '<S52>/LC_start_slope'
                                       *   '<S49>/ActiveAyDtLimit_TBL'
                                       *   '<S49>/ActivePreviewT_TBL'
                                       */

real32_T P_LCS_A0_Dis_BP[19] = { 0.0F, 0.2F, 0.4F, 0.6F, 0.8F, 1.0F, 1.2F, 1.4F,
  1.6F, 1.8F, 2.0F, 2.2F, 2.4F, 2.6F, 2.8F, 3.0F, 3.2F, 3.4F, 3.6F } ;/* Variable: P_LCS_A0_Dis_BP
                                                                      * Referenced by: '<S44>/2-D Lookup Table2'
                                                                      */

real32_T P_LCS_A2S_FliterTime = 0.02F; /* Variable: P_LCS_A2S_FliterTime
                                        * Referenced by: '<S44>/Constant20'
                                        */
real32_T P_LCS_A2_Curve_BP[10] = { 0.0F, 0.0002F, 0.0003F, 0.0007F, 0.0013F,
  0.0025F, 0.0033F, 0.005F, 0.01F, 0.02F } ;/* Variable: P_LCS_A2_Curve_BP
                                             * Referenced by:
                                             *   '<S44>/predis_ayFac1'
                                             *   '<S44>/predis_ayFac2'
                                             */

real32_T P_LCS_DeltaEps_SpdBp[16] = { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F,
  30.0F, 35.0F, 40.0F, 60.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 140.0F } ;/* Variable: P_LCS_DeltaEps_SpdBp
                                                                      * Referenced by: '<S44>/Plan_Py_Fac'
                                                                      */

real32_T P_LCS_LCC_AngleSlope_ELK[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;/* Variable: P_LCS_LCC_AngleSlope_ELK
                                                                 * Referenced by: '<S40>/ELK Active'
                                                                 */

real32_T P_LCS_LCC_AngleSlope_ESS[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;/* Variable: P_LCS_LCC_AngleSlope_ESS
                                                                 * Referenced by: '<S40>/ESS AES Active'
                                                                 */

real32_T P_LCS_LCC_AngleSlope_LCCancle[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;
                                      /* Variable: P_LCS_LCC_AngleSlope_LCCancle
                                       * Referenced by: '<S40>/LC Cancel'
                                       */

real32_T P_LCS_LCC_AngleSlope_LCEco[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;/* Variable: P_LCS_LCC_AngleSlope_LCEco
                                                                 * Referenced by: '<S40>/LCK//IE TO LC_Eco'
                                                                 */

real32_T P_LCS_LCC_AngleSlope_LCK[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;/* Variable: P_LCS_LCC_AngleSlope_LCK
                                                                 * Referenced by: '<S40>/No Function 2 LCK'
                                                                 */

real32_T P_LCS_LCC_AngleSlope_LCKIE[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;/* Variable: P_LCS_LCC_AngleSlope_LCKIE
                                                                 * Referenced by: '<S40>/LCKIE_Active'
                                                                 */

real32_T P_LCS_LCC_AngleSlope_LCNomal[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;/* Variable: P_LCS_LCC_AngleSlope_LCNomal
                                                                 * Referenced by: '<S40>/LCK//IE TO LC_Nomal'
                                                                 */

real32_T P_LCS_LCC_AngleSlope_LCSport[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;/* Variable: P_LCS_LCC_AngleSlope_LCSport
                                                                 * Referenced by: '<S40>/LCK//IE TO LC_Sport'
                                                                 */

real32_T P_LCS_LCC_AngleSlope_LKA[16] = { 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F,
  1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F } ;/* Variable: P_LCS_LCC_AngleSlope_LKA
                                                                 * Referenced by: '<S40>/LKA Active'
                                                                 */

real32_T P_LCS_LCC_ELK_AyDtLimit_TBL[16] = { 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
  1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F } ;/* Variable: P_LCS_LCC_ELK_AyDtLimit_TBL
                                                                 * Referenced by: '<S44>/AyDtLimit_TB4'
                                                                 */

real32_T P_LCS_LCC_ESS_AyDtLimit_TBL[16] = { 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
  1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F } ;/* Variable: P_LCS_LCC_ESS_AyDtLimit_TBL
                                                                 * Referenced by: '<S44>/AyDtLimit_TB5'
                                                                 */

real32_T P_LCS_LCC_Eco_AyDtLimit_TBL[16] = { 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
  1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F } ;/* Variable: P_LCS_LCC_Eco_AyDtLimit_TBL
                                                                 * Referenced by: '<S44>/AyDtLimit_TB6'
                                                                 */

real32_T P_LCS_LCC_LCK_AyDtLimit_TBL[16] = { 15.0F, 15.0F, 15.0F, 15.0F, 15.0F,
  15.0F, 8.0F, 8.0F, 8.0F, 8.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F } ;/* Variable: P_LCS_LCC_LCK_AyDtLimit_TBL
                                                                      * Referenced by:
                                                                      *   '<S44>/AyDtLimit_TB'
                                                                      *   '<S44>/AyDtLimit_TB1'
                                                                      */

real32_T P_LCS_LCC_LC_AyDtLimit_TBL[16] = { 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
  1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F } ;/* Variable: P_LCS_LCC_LC_AyDtLimit_TBL
                                                                 * Referenced by: '<S44>/AyDtLimit_TB8'
                                                                 */

real32_T P_LCS_LCC_LC_Normal_AyDtLimit_TBL[16] = { 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
  1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F } ;
                                  /* Variable: P_LCS_LCC_LC_Normal_AyDtLimit_TBL
                                   * Referenced by: '<S44>/AyDtLimit_TB2'
                                   */

real32_T P_LCS_LCC_LKA_AyDtLimit_TBL[16] = { 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
  1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F } ;/* Variable: P_LCS_LCC_LKA_AyDtLimit_TBL
                                                                 * Referenced by: '<S44>/AyDtLimit_TB3'
                                                                 */

real32_T P_LCS_LCC_MaxLatAcc_ELK[16] = { 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F,
  2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F } ;/* Variable: P_LCS_LCC_MaxLatAcc_ELK
                                                                 * Referenced by: '<S40>/ELK Active1'
                                                                 */

real32_T P_LCS_LCC_MaxLatAcc_ESS[16] = { 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F,
  2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F } ;/* Variable: P_LCS_LCC_MaxLatAcc_ESS
                                                                 * Referenced by: '<S40>/ESS AES Active1'
                                                                 */

real32_T P_LCS_LCC_MaxLatAcc_LCCancel[16] = { 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F,
  2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F } ;/* Variable: P_LCS_LCC_MaxLatAcc_LCCancel
                                                                 * Referenced by: '<S40>/LC Cancel1'
                                                                 */

real32_T P_LCS_LCC_MaxLatAcc_LCEco[16] = { 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F,
  2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F } ;/* Variable: P_LCS_LCC_MaxLatAcc_LCEco
                                                                 * Referenced by: '<S40>/LCK//IE TO LC_Eco1'
                                                                 */

real32_T P_LCS_LCC_MaxLatAcc_LCK[16] = { 10.0F, 10.0F, 10.0F, 10.0F, 10.0F,
  10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F } ;/* Variable: P_LCS_LCC_MaxLatAcc_LCK
                                                                      * Referenced by: '<S40>/No Function 2 LCK1'
                                                                      */

real32_T P_LCS_LCC_MaxLatAcc_LCKIE[16] = { 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F,
  2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F } ;/* Variable: P_LCS_LCC_MaxLatAcc_LCKIE
                                                                 * Referenced by: '<S40>/LCKIE_Active1'
                                                                 */

real32_T P_LCS_LCC_MaxLatAcc_LCNomal[16] = { 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F,
  2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F } ;/* Variable: P_LCS_LCC_MaxLatAcc_LCNomal
                                                                 * Referenced by: '<S40>/LCK//IE TO LC_Nomal1'
                                                                 */

real32_T P_LCS_LCC_MaxLatAcc_LCSport[16] = { 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F,
  2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F } ;/* Variable: P_LCS_LCC_MaxLatAcc_LCSport
                                                                 * Referenced by: '<S40>/LCK//IE TO LC_Sport1'
                                                                 */

real32_T P_LCS_LCC_MaxLatAcc_LKA[16] = { 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F,
  2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F } ;/* Variable: P_LCS_LCC_MaxLatAcc_LKA
                                                                 * Referenced by: '<S40>/LKA Active1'
                                                                 */

real32_T P_LCS_LCC_Min_Plan_Dis[16] = { 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F,
  40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F } ;/* Variable: P_LCS_LCC_Min_Plan_Dis
                                                                      * Referenced by: '<S44>/Plan_Py_Fac'
                                                                      */

real32_T P_LCS_LCC_PreCur_Min_Plan_Dis_Fac[10] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 0.8F, 0.8F, 0.8F, 0.6F } ;/* Variable: P_LCS_LCC_PreCur_Min_Plan_Dis_Fac
                                   * Referenced by: '<S44>/predis_ayFac2'
                                   */

real32_T P_LCS_LCC_PreViewCurve_Fac[10] = { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
  1.0F, 1.0F, 1.0F, 1.0F } ;           /* Variable: P_LCS_LCC_PreViewCurve_Fac
                                        * Referenced by: '<S44>/predis_ayFac1'
                                        */

real32_T P_LCS_LCC_PreViewT[16] = { 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F, 0.4F,
  0.4F, 0.6F, 0.6F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F } ;/* Variable: P_LCS_LCC_PreViewT
                                                           * Referenced by: '<S44>/Preview_T_TB'
                                                           */

real32_T P_LCS_LCC_PreView_Fac[304] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
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
  0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;/* Variable: P_LCS_LCC_PreView_Fac
                                                                      * Referenced by: '<S44>/2-D Lookup Table2'
                                                                      */

real32_T P_LCS_LCC_PreView_s = 0.3F;   /* Variable: P_LCS_LCC_PreView_s
                                        * Referenced by: '<S44>/Constant28'
                                        */
real32_T P_LCS_LCC_Sport_AyDtLimit_TBL[16] = { 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
  1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F } ;
                                      /* Variable: P_LCS_LCC_Sport_AyDtLimit_TBL
                                       * Referenced by: '<S44>/AyDtLimit_TB7'
                                       */

real32_T P_LCS_LCC_StateActiv_AyDtLimit[75] = { 15.0F, 15.0F, 15.0F, 15.0F,
  15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F,
  15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F,
  15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F,
  15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F,
  15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F,
  15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F,
  15.0F, 15.0F, 15.0F, 15.0F, 15.0F } ;
                                     /* Variable: P_LCS_LCC_StateActiv_AyDtLimit
                                      * Referenced by: '<S49>/ActiveAyDtLimit_TBL'
                                      */

real32_T P_LCS_StateActiv_AngleSlope[75] = { 0.01F, 0.15F, 0.1F, 0.5F, 1.6F,
  0.01F, 0.15F, 0.15F, 0.7F, 1.6F, 0.1F, 0.2F, 0.2F, 1.0F, 1.6F, 0.2F, 0.4F,
  0.25F, 1.0F, 1.6F, 0.4F, 0.6F, 0.28F, 1.0F, 1.6F, 0.8F, 0.8F, 0.8F, 1.0F, 1.6F,
  1.0F, 1.0F, 1.0F, 1.0F, 1.6F, 1.2F, 1.2F, 1.2F, 1.2F, 1.6F, 1.4F, 1.4F, 1.4F,
  1.4F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.6F, 1.8F, 1.8F, 1.8F, 1.8F, 1.6F, 2.0F,
  2.0F, 2.0F, 2.0F, 1.6F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F,
  2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F } ;/* Variable: P_LCS_StateActiv_AngleSlope
                                         * Referenced by: '<S52>/LC_start_slope'
                                         */

real32_T P_LCS_preDis_spd[16] = { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F,
  35.0F, 40.0F, 60.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 140.0F } ;/* Variable: P_LCS_preDis_spd
                                                                      * Referenced by:
                                                                      *   '<S40>/ELK Active'
                                                                      *   '<S40>/ELK Active1'
                                                                      *   '<S40>/ESS AES Active'
                                                                      *   '<S40>/ESS AES Active1'
                                                                      *   '<S40>/LC Cancel'
                                                                      *   '<S40>/LC Cancel1'
                                                                      *   '<S40>/LCK//IE TO LC_Eco'
                                                                      *   '<S40>/LCK//IE TO LC_Eco1'
                                                                      *   '<S40>/LCK//IE TO LC_Nomal'
                                                                      *   '<S40>/LCK//IE TO LC_Nomal1'
                                                                      *   '<S40>/LCK//IE TO LC_Sport'
                                                                      *   '<S40>/LCK//IE TO LC_Sport1'
                                                                      *   '<S40>/LCKIE_Active'
                                                                      *   '<S40>/LCKIE_Active1'
                                                                      *   '<S40>/LKA Active'
                                                                      *   '<S40>/LKA Active1'
                                                                      *   '<S40>/No Function 2 LCK'
                                                                      *   '<S40>/No Function 2 LCK1'
                                                                      *   '<S44>/2-D Lookup Table2'
                                                                      *   '<S44>/AyDtLimit_TB'
                                                                      *   '<S44>/AyDtLimit_TB1'
                                                                      *   '<S44>/AyDtLimit_TB2'
                                                                      *   '<S44>/AyDtLimit_TB3'
                                                                      *   '<S44>/AyDtLimit_TB4'
                                                                      *   '<S44>/AyDtLimit_TB5'
                                                                      *   '<S44>/AyDtLimit_TB6'
                                                                      *   '<S44>/AyDtLimit_TB7'
                                                                      *   '<S44>/AyDtLimit_TB8'
                                                                      *   '<S44>/Preview_T_TB'
                                                                      */

uint16_T P_LCS_LCC_StateActiveDelaytime = 500U;
                                     /* Variable: P_LCS_LCC_StateActiveDelaytime
                                      * Referenced by: '<S44>/Constant1'
                                      */
uint16_T P_LCS_StateHold_time = 250U;  /* Variable: P_LCS_StateHold_time
                                        * Referenced by: '<S40>/Constant2'
                                        */
uint8_T P_LCS_StateActiveFlg_BP[5] = { 1U, 2U, 3U, 4U, 5U } ;/* Variable: P_LCS_StateActiveFlg_BP
                                                              * Referenced by:
                                                              *   '<S52>/LC_start_slope'
                                                              *   '<S49>/ActiveAyDtLimit_TBL'
                                                              *   '<S49>/ActivePreviewT_TBL'
                                                              */

/* Block signals (default storage) */
B_LATC_Test_Calc_T LATC_Test_Calc_B;

/* Block states (default storage) */
DW_LATC_Test_Calc_T LATC_Test_Calc_DW;

/* Real-time model */
static RT_MODEL_LATC_Test_Calc_T LATC_Test_Calc_M_;
RT_MODEL_LATC_Test_Calc_T *const LATC_Test_Calc_M = &LATC_Test_Calc_M_;

/* Forward declaration for local functions */
static void LATC_Test_Calc_diff(const real32_T x[27], real32_T y[26]);
static Spline_LATC_Test_Calc_T *LATC_Test_Calc_Spline_Spline
  (Spline_LATC_Test_Calc_T *obj, const real_T x[27], const real32_T y[27]);
static void LATC_Test_Calc_linspace(real_T d2, real_T y[100]);
static real32_T LATC_Test_Calc_Spline_calc(const Spline_LATC_Test_Calc_T *obj,
  real32_T t);
static real32_T LATC_Test_Calc_Spline_calcd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t);
static real32_T LATC_Test_Calc_Spline_calcdd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t);
static real32_T LATC_Test_Calc_Spline_calcddd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t);
static void LATC_Test__binary_expand_op_c03(real32_T y_data[], int32_T *y_size,
  const real32_T endPoint_data[], const int32_T endPoint_size[2], const int32_T
  endIdx_size[2], const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T startIdx_size[2]);
static void LATC__binary_expand_op_c03j54up(real32_T weight_data[], int32_T
  weight_size[2], const real32_T y_data[], const int32_T *y_size);
static void LATC_T_binary_expand_op_c03j54u(real32_T varargin_1_data[], int32_T
  varargin_1_size[2], const real32_T weight_data[], const int32_T weight_size[2],
  const real32_T startPoint_data[], const int32_T startIdx_size[2], const
  real32_T endPoint_data[], const int32_T endIdx_size[2]);
static void LATC_Te_binary_expand_op_c03j54(real32_T varargin_2_data[], int32_T
  varargin_2_size[2], const real32_T weight_data[], const int32_T weight_size[2],
  const real32_T startPoint_data[], const int32_T startPoint_size[2], const
  int32_T startIdx_size[2], const real32_T endPoint_data[], const int32_T
  endPoint_size[2], const int32_T endIdx_size[2]);
static void LATC_Tes_binary_expand_op_c03j5(real32_T varargin_4_data[], int32_T
  varargin_4_size[2], const real32_T weight_data[], const int32_T weight_size[2],
  const real32_T startPoint_data[], const int32_T startPoint_size[2], const
  int32_T startIdx_size[2], const real32_T endPoint_data[], const int32_T
  endPoint_size[2], const int32_T endIdx_size[2]);
static void LATC_Test_binary_expand_op_c03j(real32_T weight_data[], int32_T
  weight_size[2], const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T startIdx_size[2], const real32_T
  endPoint_data[], const int32_T endPoint_size[2], const int32_T endIdx_size[2]);
static boolean_T LATC_Test_Cal_allOrAny_anonFcn1(const boolean_T x_data[], const
  int32_T *x_size);
static void binary_expand_op_c03j54upnmwkzz(boolean_T b_data[], int32_T *b_size,
  const real32_T theta_data[], const int32_T *theta_size, const real32_T y_data[],
  const int32_T *y_size);
static real32_T LATC_Test_Calc_sxfun_anonFcn2(real32_T x);
static void L_FrenentReferencePath_wrapToPi(real32_T theta_data[], const int32_T
  *theta_size);
static void LATC_Test_C_binary_expand_op_c0(real32_T b_y_data[], int32_T
  *b_y_size, const real32_T a0n_data[], const int32_T *a0n_size);
static void LATC_Test_Ca_binary_expand_op_c(real32_T theta_data[], int32_T
  theta_size[2], const real32_T a0n_data[], const int32_T *a0n_size, const
  real32_T b_y_data[], const int32_T *b_y_size, const real32_T s_data[], const
  int32_T s_size[2], const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T startIdx_size[2], const real32_T y_data[],
  const int32_T *y_size);
static void LATC_Test_Calc_binary_expand_op(boolean_T c_x_data[], int32_T
  c_x_size[2], const real32_T x_data[], const int32_T x_size[2], const real32_T
  theta_data[], const int32_T theta_size[2]);
static void FrenentReferencePath_getClosest(const real32_T pathPoints[600],
  const real32_T startIdx_data[], const int32_T startIdx_size[2], const real32_T
  endIdx_data[], const int32_T endIdx_size[2], const real32_T s_data[], const
  int32_T s_size[2], real32_T pathPoint_data[], int32_T pathPoint_size[2]);
static void FrenentReferencePath_interpolat(const
  FrenentReferencePath_LATC_Tes_T *obj, real32_T arcLength, real32_T pathPoints
  [6]);
static real32_T LATC_Test_Calc_mod(real32_T x);
static void FrenentReferencePath_wrapToPi_g(real32_T *theta);
static void FrenentReferencePath_global2fre(const
  FrenentReferencePath_LATC_Tes_T *obj, const real32_T globalStates[6], real32_T
  frenetState[6]);
static void TrajectoryGeneratorFrenet_Quint(const real32_T startCondition[3],
  const real32_T endCondition[3], real32_T Variable, real32_T Coefficients[6]);
static void LATC_Test_Calc_linspace_n(real32_T d2, real32_T y[40]);
static void LATC_Test_Calc_repmat(const real32_T a[6], real32_T b[240]);
static void binary_expand_op_c03j54upnmwkz(real32_T a0n_data[], int32_T
  *a0n_size, const real32_T s_data[], const int32_T *s_size, const real32_T
  startPoint_data[], const int32_T startPoint_size[2], const int32_T
  *startIdx_size);
static void L_binary_expand_op_c03j54upnmwk(real32_T weight_data[], int32_T
  *weight_size, const real32_T endPoint_data[], const int32_T endPoint_size[2],
  const int32_T *endIdx_size, const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T *startIdx_size);
static void LA_binary_expand_op_c03j54upnmw(real32_T x_tmp_data[], int32_T
  *x_tmp_size, const real32_T endPoint_data[], const int32_T endPoint_size[2],
  const int32_T *endIdx_size, const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T *startIdx_size);
static void LATC_Test_Calc_minus(real32_T d_data[], int32_T *d_size, const
  real32_T a0n_data[], const int32_T *a0n_size);
static void LAT_binary_expand_op_c03j54upnm(cell_wrap_9_LATC_Test_Calc_T
  reshapes[6], const real32_T a0n_data[], const int32_T *a0n_size, const
  real32_T d_data[], const int32_T *d_size, const real32_T s_data[], const
  int32_T *s_size, const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T *startIdx_size, const real32_T x_tmp_data[],
  const int32_T *x_tmp_size);
static void LATC_binary_expand_op_c03j54upn(real32_T pathPoint_data[], int32_T
  pathPoint_size[2], const real32_T weight_data[], const int32_T *weight_size,
  const real32_T startPoint_data[], const int32_T startPoint_size[2], const
  int32_T *startIdx_size, const real32_T endPoint_data[], const int32_T
  endPoint_size[2], const int32_T *endIdx_size, const
  cell_wrap_9_LATC_Test_Calc_T reshapes[6], const real32_T s_data[], const
  int32_T *s_size);
static void FrenentReferencePath_getClose_h(const real32_T pathPoints[600],
  const real32_T startIdx_data[], const int32_T *startIdx_size, const real32_T
  endIdx_data[], const int32_T *endIdx_size, const real32_T s_data[], const
  int32_T *s_size, real32_T pathPoint_data[], int32_T pathPoint_size[2]);
static boolean_T LATC_Test_Calc_any(const boolean_T x[40]);
static void TrajectoryGeneratorFrenet_Frene(TrajectoryGeneratorFrenet_LAT_T *obj,
  const real32_T initialState[6], real32_T arcLenOffsets, const real32_T
  LongTermState[2], const real32_T LaterlTermState[2], real32_T timeSpan,
  real32_T frenetTrajectory_Trajectory[240], real32_T frenetTrajectory_Times[40],
  real32_T frenetTrajectory_jerk[80], real32_T globalTrajectory_Trajectory[240],
  real32_T globalTrajectory_Times[40], real32_T *globalTrajectory_costs);
static void LATC_Test_Calc_power(const real32_T a[40], real32_T y[40]);
static void LATC_Test_Calc_diff_k(const real32_T x[40], real32_T y[39]);
static void LATC_Test_Calc_eml_find(const boolean_T x[40], int32_T i_data[],
  int32_T *i_size);
real32_T look1_iflf_binlcapw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T y;
  real32_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

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
  uint8_T bpLeftVar;

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

real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

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

real32_T rt_powf_snf(real32_T u0, real32_T u1)
{
  real32_T tmp;
  real32_T tmp_0;
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else {
    tmp = (real32_T)fabs(u0);
    tmp_0 = (real32_T)fabs(u1);
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
      y = (real32_T)sqrt(u0);
    } else if ((u0 < 0.0F) && (u1 > (real32_T)floor(u1))) {
      y = (rtNaNF);
    } else {
      y = (real32_T)pow(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void LATC_Test_Calc_diff(const real32_T x[27], real32_T y[26])
{
  int32_T m;
  real32_T tmp2;
  real32_T work;
  work = x[0];
  for (m = 0; m < 26; m++) {
    tmp2 = work;
    work = x[m + 1];
    y[m] = work - tmp2;
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static Spline_LATC_Test_Calc_T *LATC_Test_Calc_Spline_Spline
  (Spline_LATC_Test_Calc_T *obj, const real_T x[27], const real32_T y[27])
{
  Spline_LATC_Test_Calc_T *b_obj;
  real_T tmp2;
  real_T work;
  int32_T c_ix;
  int32_T c_k;
  int32_T f;
  int32_T i;
  int32_T ijA;
  int32_T ix;
  int32_T jj;
  int32_T jy;
  real32_T A[729];
  real32_T B[27];
  real32_T h[26];
  real32_T b_x;
  real32_T d_x;
  real32_T s;
  real32_T smax;
  int8_T ipiv[27];
  b_obj = obj;
  for (i = 0; i < 26; i++) {
    obj->b[i] = 0.0F;
  }

  for (i = 0; i < 27; i++) {
    obj->c[i] = 0.0F;
  }

  for (i = 0; i < 26; i++) {
    obj->d[i] = 0.0F;
  }

  for (i = 0; i < 27; i++) {
    obj->x[i] = (real32_T)x[i];
  }

  obj->nx = 27.0F;
  work = x[0];
  for (i = 0; i < 26; i++) {
    tmp2 = work;
    work = x[i + 1];
    h[i] = (real32_T)(work - tmp2);
  }

  for (i = 0; i < 27; i++) {
    obj->a[i] = y[i];
  }

  memset(&A[0], 0, 729U * sizeof(real32_T));
  A[0] = 1.0F;
  smax = obj->nx - 1.0F;
  for (i = 0; i < (int32_T)smax; i++) {
    if ((real32_T)i + 1.0F != obj->nx - 1.0F) {
      A[((int32_T)(((real32_T)i + 1.0F) + 1.0F) + 27 * ((int32_T)(((real32_T)i +
            1.0F) + 1.0F) - 1)) - 1] = (h[(int32_T)(((real32_T)i + 1.0F) + 1.0F)
        - 1] + h[(int32_T)((real32_T)i + 1.0F) - 1]) * 2.0F;
    }

    s = h[(int32_T)((real32_T)i + 1.0F) - 1];
    A[((int32_T)(((real32_T)i + 1.0F) + 1.0F) + 27 * ((int32_T)((real32_T)i +
         1.0F) - 1)) - 1] = s;
    A[((int32_T)((real32_T)i + 1.0F) + 27 * ((int32_T)(((real32_T)i + 1.0F) +
         1.0F) - 1)) - 1] = s;
  }

  A[27] = 0.0F;
  A[((int32_T)obj->nx + 27 * ((int32_T)(obj->nx - 1.0F) - 1)) - 1] = 0.0F;
  A[((int32_T)obj->nx + 27 * ((int32_T)obj->nx - 1)) - 1] = 1.0F;
  memset(&B[0], 0, 27U * sizeof(real32_T));
  smax = obj->nx - 2.0F;
  for (i = 0; i < (int32_T)smax; i++) {
    s = obj->a[(int32_T)(((real32_T)i + 1.0F) + 2.0F) - 1] - obj->a[(int32_T)
      (((real32_T)i + 1.0F) + 1.0F) - 1];
    b_x = obj->a[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->a[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    B[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] = 3.0F * s / h[(int32_T)
      (((real32_T)i + 1.0F) + 1.0F) - 1] - 3.0F * b_x / h[(int32_T)((real32_T)i
      + 1.0F) - 1];
  }

  for (i = 0; i < 27; i++) {
    ipiv[i] = (int8_T)(i + 1);
  }

  for (i = 0; i < 26; i++) {
    jj = i * 28;
    jy = 0;
    ix = jj;
    smax = (real32_T)fabs(A[jj]);
    for (c_k = 2; c_k <= 27 - i; c_k++) {
      ix++;
      s = (real32_T)fabs(A[ix]);
      if (s > smax) {
        jy = c_k - 1;
        smax = s;
      }
    }

    if (A[jj + jy] != 0.0F) {
      if (jy != 0) {
        ix = i + jy;
        ipiv[i] = (int8_T)(ix + 1);
        for (jy = 0; jy < 27; jy++) {
          c_k = jy * 27 + i;
          smax = A[c_k];
          c_ix = jy * 27 + ix;
          A[c_k] = A[c_ix];
          A[c_ix] = smax;
        }
      }

      jy = (jj - i) + 27;
      for (ix = jj + 1; ix < jy; ix++) {
        A[ix] /= A[jj];
      }
    }

    jy = jj + 27;
    ix = jj;
    for (c_k = 0; c_k <= 25 - i; c_k++) {
      smax = A[jy];
      if (A[jy] != 0.0F) {
        c_ix = jj + 1;
        ijA = ix + 28;
        f = (ix - i) + 54;
        while (ijA + 1 <= f) {
          A[ijA] += A[c_ix] * -smax;
          c_ix++;
          ijA++;
        }
      }

      jy += 27;
      ix += 27;
    }

    if (i + 1 != ipiv[i]) {
      smax = B[i];
      jj = ipiv[i] - 1;
      B[i] = B[jj];
      B[jj] = smax;
    }
  }

  for (i = 0; i < 27; i++) {
    jj = 27 * i;
    if (B[i] != 0.0F) {
      for (jy = i + 1; jy + 1 < 28; jy++) {
        B[jy] -= A[jy + jj] * B[i];
      }
    }
  }

  for (i = 26; i >= 0; i--) {
    jj = 27 * i;
    if (B[i] != 0.0F) {
      B[i] /= A[i + jj];
      for (jy = 0; jy < i; jy++) {
        B[jy] -= A[jy + jj] * B[i];
      }
    }
  }

  for (i = 0; i < 27; i++) {
    obj->c[i] = B[i];
  }

  smax = obj->nx - 1.0F;
  for (i = 0; i < (int32_T)smax; i++) {
    b_x = obj->c[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->c[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    s = h[(int32_T)((real32_T)i + 1.0F) - 1];
    obj->d[(int32_T)((real32_T)i + 1.0F) - 1] = b_x / (s * 3.0F);
    b_x = obj->a[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] - obj->a[(int32_T)
      ((real32_T)i + 1.0F) - 1];
    d_x = (obj->c[(int32_T)(((real32_T)i + 1.0F) + 1.0F) - 1] + obj->c[(int32_T)
           ((real32_T)i + 1.0F) - 1] * 2.0F) * s;
    obj->b[(int32_T)((real32_T)i + 1.0F) - 1] = b_x / s - d_x / 3.0F;
  }

  return b_obj;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void LATC_Test_Calc_linspace(real_T d2, real_T y[100])
{
  real_T delta1;
  int32_T c_k;
  y[99] = d2;
  y[0] = 0.0;
  if (0.0 == -d2) {
    delta1 = d2 / 99.0;
    for (c_k = 0; c_k < 98; c_k++) {
      y[c_k + 1] = (((real_T)c_k + 2.0) * 2.0 - 101.0) * delta1;
    }
  } else if ((d2 < 0.0) && (fabs(d2) > 8.9884656743115785E+307)) {
    delta1 = d2 / 99.0;
    for (c_k = 0; c_k < 98; c_k++) {
      y[c_k + 1] = ((real_T)c_k + 1.0) * delta1;
    }
  } else {
    delta1 = d2 / 99.0;
    for (c_k = 0; c_k < 98; c_k++) {
      y[c_k + 1] = ((real_T)c_k + 1.0) * delta1;
    }
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static real32_T LATC_Test_Calc_Spline_calc(const Spline_LATC_Test_Calc_T *obj,
  real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T dx;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[26]) {
    result = (rtNaNF);
  } else {
    hi = 26;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    dx = t - obj->x[lo];
    result = ((obj->b[lo] * dx + obj->a[lo]) + dx * dx * obj->c[lo]) + obj->d[lo]
      * rt_powf_snf(dx, 3.0F);
  }

  return result;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static real32_T LATC_Test_Calc_Spline_calcd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T dx;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[26]) {
    result = (rtNaNF);
  } else {
    hi = 26;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    dx = t - obj->x[lo];
    result = (2.0F * obj->c[lo] * dx + obj->b[lo]) + 3.0F * obj->d[lo] * (dx *
      dx);
  }

  return result;
}

real32_T rt_atan2f_snf(real32_T u0, real32_T u1)
{
  int32_T u0_0;
  int32_T u1_0;
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else if (rtIsInfF(u0) && rtIsInfF(u1)) {
    if (u0 > 0.0F) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0F) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = (real32_T)atan2((real32_T)u0_0, (real32_T)u1_0);
  } else if (u1 == 0.0F) {
    if (u0 > 0.0F) {
      y = RT_PIF / 2.0F;
    } else if (u0 < 0.0F) {
      y = -(RT_PIF / 2.0F);
    } else {
      y = 0.0F;
    }
  } else {
    y = (real32_T)atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static real32_T LATC_Test_Calc_Spline_calcdd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[26]) {
    result = (rtNaNF);
  } else {
    hi = 26;
    lo = -1;
    while (lo + 2 < hi + 1) {
      mid = (int32_T)floor((real_T)((lo + hi) + 3) / 2.0) - 1;
      if (t < obj->x[mid]) {
        hi = mid;
      } else {
        lo = mid;
      }
    }

    result = 6.0F * obj->d[lo] * (t - obj->x[lo]) + 2.0F * obj->c[lo];
  }

  return result;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static real32_T LATC_Test_Calc_Spline_calcddd(const Spline_LATC_Test_Calc_T *obj,
  real32_T t)
{
  int32_T hi;
  int32_T lo;
  int32_T mid;
  real32_T result;
  if (t < obj->x[0]) {
    result = (rtNaNF);
  } else if (t > obj->x[26]) {
    result = (rtNaNF);
  } else {
    hi = 27;
    lo = 1;
    while (lo < hi) {
      mid = (int32_T)floor((real_T)(lo + hi) / 2.0);
      if (t < obj->x[mid - 1]) {
        hi = mid;
      } else {
        lo = mid + 1;
      }
    }

    result = obj->d[lo - 2] * 6.0F;
  }

  return result;
}

static void LATC_Test__binary_expand_op_c03(real32_T y_data[], int32_T *y_size,
  const real32_T endPoint_data[], const int32_T endPoint_size[2], const int32_T
  endIdx_size[2], const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T startIdx_size[2])
{
  int32_T i;
  int32_T loop_ub;
  *y_size = startIdx_size[1] == 1 ? endIdx_size[1] : startIdx_size[1];
  loop_ub = startIdx_size[1] == 1 ? endIdx_size[1] : startIdx_size[1];
  for (i = 0; i < loop_ub; i++) {
    y_data[0] = endPoint_data[endPoint_size[0] * 5] -
      startPoint_data[startPoint_size[0] * 5];
  }
}

static void LATC__binary_expand_op_c03j54up(real32_T weight_data[], int32_T
  weight_size[2], const real32_T y_data[], const int32_T *y_size)
{
  int32_T i;
  int32_T i_0;
  int32_T weight_size_idx_0;
  int32_T weight_size_idx_1;
  real32_T weight_data_0;
  weight_size_idx_0 = *y_size == 1 ? weight_size[0] : *y_size;
  weight_size_idx_1 = weight_size[1];
  if ((0 <= weight_size[1] - 1) && (0 <= (*y_size == 1 ? weight_size[0] :
        *y_size) - 1)) {
    weight_data_0 = weight_data[0] / y_data[0];
  }

  weight_size[0] = weight_size_idx_0;
  weight_size[1] = weight_size_idx_1;
  for (i_0 = 0; i_0 < weight_size_idx_1; i_0++) {
    for (i = 0; i < weight_size_idx_0; i++) {
      weight_data[0] = weight_data_0;
    }
  }
}

static void LATC_T_binary_expand_op_c03j54u(real32_T varargin_1_data[], int32_T
  varargin_1_size[2], const real32_T weight_data[], const int32_T weight_size[2],
  const real32_T startPoint_data[], const int32_T startIdx_size[2], const
  real32_T endPoint_data[], const int32_T endIdx_size[2])
{
  int32_T aux_0_1;
  int32_T aux_2_1;
  int32_T endIdx_idx_0;
  int32_T i;
  int32_T i_0;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T startIdx_idx_0;
  int32_T stride_0_1;
  int32_T stride_2_1;
  startIdx_idx_0 = startIdx_size[1];
  endIdx_idx_0 = endIdx_size[1];
  varargin_1_size[0] = (endIdx_size[1] == 1 ? weight_size[0] : endIdx_size[1]) ==
    1 ? startIdx_size[1] == 1 ? weight_size[0] : startIdx_size[1] : endIdx_size
    [1] == 1 ? weight_size[0] : endIdx_size[1];
  varargin_1_size[1] = weight_size[1];
  stride_0_1 = (weight_size[1] != 1);
  stride_2_1 = (weight_size[1] != 1);
  aux_0_1 = 0;
  aux_2_1 = 0;
  loop_ub = weight_size[1];
  for (i_0 = 0; i_0 < loop_ub; i_0++) {
    loop_ub_0 = (endIdx_idx_0 == 1 ? weight_size[0] : endIdx_idx_0) == 1 ?
      startIdx_idx_0 == 1 ? weight_size[0] : startIdx_idx_0 : endIdx_idx_0 == 1 ?
      weight_size[0] : endIdx_idx_0;
    for (i = 0; i < loop_ub_0; i++) {
      varargin_1_data[0] = (1.0F - weight_data[weight_size[0] * aux_0_1]) *
        startPoint_data[0] + weight_data[weight_size[0] * aux_2_1] *
        endPoint_data[0];
    }

    aux_2_1 += stride_2_1;
    aux_0_1 += stride_0_1;
  }
}

static void LATC_Te_binary_expand_op_c03j54(real32_T varargin_2_data[], int32_T
  varargin_2_size[2], const real32_T weight_data[], const int32_T weight_size[2],
  const real32_T startPoint_data[], const int32_T startPoint_size[2], const
  int32_T startIdx_size[2], const real32_T endPoint_data[], const int32_T
  endPoint_size[2], const int32_T endIdx_size[2])
{
  int32_T aux_0_1;
  int32_T aux_2_1;
  int32_T endIdx_idx_0;
  int32_T i;
  int32_T i_0;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T startIdx_idx_0;
  int32_T stride_0_1;
  int32_T stride_2_1;
  startIdx_idx_0 = startIdx_size[1];
  endIdx_idx_0 = endIdx_size[1];
  varargin_2_size[0] = (endIdx_size[1] == 1 ? weight_size[0] : endIdx_size[1]) ==
    1 ? startIdx_size[1] == 1 ? weight_size[0] : startIdx_size[1] : endIdx_size
    [1] == 1 ? weight_size[0] : endIdx_size[1];
  varargin_2_size[1] = weight_size[1];
  stride_0_1 = (weight_size[1] != 1);
  stride_2_1 = (weight_size[1] != 1);
  aux_0_1 = 0;
  aux_2_1 = 0;
  loop_ub = weight_size[1];
  for (i_0 = 0; i_0 < loop_ub; i_0++) {
    loop_ub_0 = (endIdx_idx_0 == 1 ? weight_size[0] : endIdx_idx_0) == 1 ?
      startIdx_idx_0 == 1 ? weight_size[0] : startIdx_idx_0 : endIdx_idx_0 == 1 ?
      weight_size[0] : endIdx_idx_0;
    for (i = 0; i < loop_ub_0; i++) {
      varargin_2_data[0] = (1.0F - weight_data[weight_size[0] * aux_0_1]) *
        startPoint_data[startPoint_size[0]] + weight_data[weight_size[0] *
        aux_2_1] * endPoint_data[endPoint_size[0]];
    }

    aux_2_1 += stride_2_1;
    aux_0_1 += stride_0_1;
  }
}

static void LATC_Tes_binary_expand_op_c03j5(real32_T varargin_4_data[], int32_T
  varargin_4_size[2], const real32_T weight_data[], const int32_T weight_size[2],
  const real32_T startPoint_data[], const int32_T startPoint_size[2], const
  int32_T startIdx_size[2], const real32_T endPoint_data[], const int32_T
  endPoint_size[2], const int32_T endIdx_size[2])
{
  int32_T aux_0_1;
  int32_T aux_2_1;
  int32_T endIdx_idx_0;
  int32_T i;
  int32_T i_0;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T startIdx_idx_0;
  int32_T stride_0_1;
  int32_T stride_2_1;
  startIdx_idx_0 = startIdx_size[1];
  endIdx_idx_0 = endIdx_size[1];
  varargin_4_size[0] = (endIdx_size[1] == 1 ? weight_size[0] : endIdx_size[1]) ==
    1 ? startIdx_size[1] == 1 ? weight_size[0] : startIdx_size[1] : endIdx_size
    [1] == 1 ? weight_size[0] : endIdx_size[1];
  varargin_4_size[1] = weight_size[1];
  stride_0_1 = (weight_size[1] != 1);
  stride_2_1 = (weight_size[1] != 1);
  aux_0_1 = 0;
  aux_2_1 = 0;
  loop_ub = weight_size[1];
  for (i_0 = 0; i_0 < loop_ub; i_0++) {
    loop_ub_0 = (endIdx_idx_0 == 1 ? weight_size[0] : endIdx_idx_0) == 1 ?
      startIdx_idx_0 == 1 ? weight_size[0] : startIdx_idx_0 : endIdx_idx_0 == 1 ?
      weight_size[0] : endIdx_idx_0;
    for (i = 0; i < loop_ub_0; i++) {
      varargin_4_data[0] = (1.0F - weight_data[weight_size[0] * aux_0_1]) *
        startPoint_data[startPoint_size[0] * 3] + weight_data[weight_size[0] *
        aux_2_1] * endPoint_data[endPoint_size[0] * 3];
    }

    aux_2_1 += stride_2_1;
    aux_0_1 += stride_0_1;
  }
}

static void LATC_Test_binary_expand_op_c03j(real32_T weight_data[], int32_T
  weight_size[2], const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T startIdx_size[2], const real32_T
  endPoint_data[], const int32_T endPoint_size[2], const int32_T endIdx_size[2])
{
  int32_T aux_0_1;
  int32_T aux_2_1;
  int32_T endIdx_idx_0;
  int32_T i;
  int32_T loop_ub;
  int32_T startIdx_idx_0;
  int32_T stride_0_1;
  int32_T stride_2_1;
  int32_T tmp_size_idx_0;
  int32_T tmp_size_idx_1;
  real32_T tmp_data;
  startIdx_idx_0 = startIdx_size[1];
  endIdx_idx_0 = endIdx_size[1];
  tmp_size_idx_0 = (endIdx_size[1] == 1 ? weight_size[0] : endIdx_size[1]) == 1 ?
    startIdx_size[1] == 1 ? weight_size[0] : startIdx_size[1] : endIdx_size[1] ==
    1 ? weight_size[0] : endIdx_size[1];
  tmp_size_idx_1 = weight_size[1];
  stride_0_1 = (weight_size[1] != 1);
  stride_2_1 = (weight_size[1] != 1);
  aux_0_1 = 0;
  aux_2_1 = 0;
  loop_ub = weight_size[1];
  for (i = 0; i < loop_ub; i++) {
    if (0 <= ((endIdx_idx_0 == 1 ? weight_size[0] : endIdx_idx_0) == 1 ?
              startIdx_idx_0 == 1 ? weight_size[0] : startIdx_idx_0 :
              endIdx_idx_0 == 1 ? weight_size[0] : endIdx_idx_0) - 1) {
      tmp_data = (1.0F - weight_data[weight_size[0] * aux_0_1]) *
        startPoint_data[startPoint_size[0] << 2] + weight_data[weight_size[0] *
        aux_2_1] * endPoint_data[endPoint_size[0] << 2];
    }

    aux_2_1 += stride_2_1;
    aux_0_1 += stride_0_1;
  }

  weight_size[0] = tmp_size_idx_0;
  weight_size[1] = tmp_size_idx_1;
  for (i = 0; i < tmp_size_idx_1; i++) {
    for (startIdx_idx_0 = 0; startIdx_idx_0 < tmp_size_idx_0; startIdx_idx_0++)
    {
      weight_data[0] = tmp_data;
    }
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static boolean_T LATC_Test_Cal_allOrAny_anonFcn1(const boolean_T x_data[], const
  int32_T *x_size)
{
  int32_T ix;
  boolean_T exitg1;
  boolean_T varargout_1;
  varargout_1 = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= *x_size)) {
    if (x_data[ix - 1]) {
      varargout_1 = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return varargout_1;
}

static void binary_expand_op_c03j54upnmwkzz(boolean_T b_data[], int32_T *b_size,
  const real32_T theta_data[], const int32_T *theta_size, const real32_T y_data[],
  const int32_T *y_size)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  *b_size = *y_size == 1 ? *theta_size : *y_size;
  stride_0_0 = (*theta_size != 1);
  stride_1_0 = (*y_size != 1);
  loop_ub = *y_size == 1 ? *theta_size : *y_size;
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = ((theta_data[i * stride_0_0] == 0.0F) && (y_data[i * stride_1_0]
      > 0.0F));
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static real32_T LATC_Test_Calc_sxfun_anonFcn2(real32_T x)
{
  real32_T q;
  real32_T varargout_1;
  boolean_T rEQ0;
  if (rtIsNaNF(x) || rtIsInfF(x)) {
    varargout_1 = (rtNaNF);
  } else if (x == 0.0F) {
    varargout_1 = 0.0F;
  } else {
    varargout_1 = (real32_T)fmod(x, 6.2831854820251465);
    rEQ0 = (varargout_1 == 0.0F);
    if (!rEQ0) {
      q = (real32_T)fabs(x / 6.28318548F);
      rEQ0 = !((real32_T)fabs(q - (real32_T)floor(q + 0.5F)) > 1.1920929E-7F * q);
    }

    if (rEQ0) {
      varargout_1 = 0.0F;
    } else if (x < 0.0F) {
      varargout_1 += 6.28318548F;
    }
  }

  return varargout_1;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void L_FrenentReferencePath_wrapToPi(real32_T theta_data[], const int32_T
  *theta_size)
{
  int32_T k;
  int32_T loop_ub;
  real32_T y_data[40];
  boolean_T b_data[40];
  boolean_T y_data_0[40];
  for (k = 0; k < *theta_size; k++) {
    y_data[k] = (real32_T)fabs(theta_data[k]);
  }

  loop_ub = *theta_size;
  for (k = 0; k < loop_ub; k++) {
    y_data_0[k] = (y_data[k] > 3.1415926535897931);
  }

  if (LATC_Test_Cal_allOrAny_anonFcn1(y_data_0, theta_size)) {
    for (k = 0; k < loop_ub; k++) {
      y_data[k] = theta_data[k] + 3.14159274F;
    }

    for (k = 0; k < *theta_size; k++) {
      theta_data[k] = LATC_Test_Calc_sxfun_anonFcn2(y_data[k]);
    }

    if (*theta_size == *theta_size) {
      loop_ub = *theta_size;
      for (k = 0; k < loop_ub; k++) {
        b_data[k] = ((theta_data[k] == 0.0F) && (y_data[k] > 0.0F));
      }
    } else {
      binary_expand_op_c03j54upnmwkzz(b_data, &loop_ub, theta_data, theta_size,
        y_data, theta_size);
    }

    for (k = 0; k < loop_ub; k++) {
      if (b_data[k]) {
        theta_data[k] = 6.28318548F;
      }
    }

    loop_ub = *theta_size;
    for (k = 0; k < loop_ub; k++) {
      theta_data[k] -= 3.14159274F;
    }
  }
}

static void LATC_Test_C_binary_expand_op_c0(real32_T b_y_data[], int32_T
  *b_y_size, const real32_T a0n_data[], const int32_T *a0n_size)
{
  int32_T b_y_size_idx_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  real32_T b_y_data_0[40];
  b_y_size_idx_0 = *a0n_size == 1 ? *b_y_size : *a0n_size;
  stride_0_0 = (*b_y_size != 1);
  stride_1_0 = (*a0n_size != 1);
  loop_ub = *a0n_size == 1 ? *b_y_size : *a0n_size;
  for (i = 0; i < loop_ub; i++) {
    b_y_data_0[i] = b_y_data[i * stride_0_0] - a0n_data[i * stride_1_0];
  }

  *b_y_size = b_y_size_idx_0;
  if (0 <= b_y_size_idx_0 - 1) {
    memcpy(&b_y_data[0], &b_y_data_0[0], b_y_size_idx_0 * sizeof(real32_T));
  }
}

static void LATC_Test_Ca_binary_expand_op_c(real32_T theta_data[], int32_T
  theta_size[2], const real32_T a0n_data[], const int32_T *a0n_size, const
  real32_T b_y_data[], const int32_T *b_y_size, const real32_T s_data[], const
  int32_T s_size[2], const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T startIdx_size[2], const real32_T y_data[],
  const int32_T *y_size)
{
  int32_T i;
  int32_T i_0;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T startIdx_idx_0;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  int8_T b_y[2];
  b_y[0] = (int8_T)*b_y_size;
  b_y[1] = 1;
  startIdx_idx_0 = startIdx_size[1];
  theta_size[0] = ((*y_size == 1 ? startIdx_size[1] == 1 ? 1 : startIdx_size[1] :
                    *y_size) == 1 ? (int32_T)(int8_T)*b_y_size : *y_size == 1 ?
                   startIdx_size[1] == 1 ? 1 : startIdx_size[1] : *y_size) == 1 ?
    *a0n_size : (*y_size == 1 ? startIdx_size[1] == 1 ? 1 : startIdx_size[1] :
                 *y_size) == 1 ? (int32_T)(int8_T)*b_y_size : *y_size == 1 ?
    startIdx_size[1] == 1 ? 1 : startIdx_size[1] : *y_size;
  theta_size[1] = s_size[1];
  stride_0_0 = (*a0n_size != 1);
  stride_1_0 = ((int8_T)*b_y_size != 1);
  stride_3_0 = (startIdx_size[1] != 1);
  stride_4_0 = (*y_size != 1);
  loop_ub = s_size[1];
  for (i_0 = 0; i_0 < loop_ub; i_0++) {
    loop_ub_0 = ((*y_size == 1 ? startIdx_idx_0 == 1 ? 1 : startIdx_idx_0 :
                  *y_size) == 1 ? (int32_T)b_y[0] : *y_size == 1 ?
                 startIdx_idx_0 == 1 ? 1 : startIdx_idx_0 : *y_size) == 1 ?
      *a0n_size : (*y_size == 1 ? startIdx_idx_0 == 1 ? 1 : startIdx_idx_0 :
                   *y_size) == 1 ? (int32_T)b_y[0] : *y_size == 1 ?
      startIdx_idx_0 == 1 ? 1 : startIdx_idx_0 : *y_size;
    for (i = 0; i < loop_ub_0; i++) {
      theta_data[i] = (s_data[0] - startPoint_data[i * stride_3_0 +
                       startPoint_size[0] * 5]) / y_data[i * stride_4_0] *
        b_y_data[i * stride_1_0] + a0n_data[i * stride_0_0];
    }
  }
}

static void LATC_Test_Calc_binary_expand_op(boolean_T c_x_data[], int32_T
  c_x_size[2], const real32_T x_data[], const int32_T x_size[2], const real32_T
  theta_data[], const int32_T theta_size[2])
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i_0;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T stride_0_1;
  int32_T stride_1_1;
  c_x_size[0] = theta_size[0] == 1 ? x_size[0] : theta_size[0];
  c_x_size[1] = theta_size[1] == 1 ? x_size[1] : theta_size[1];
  stride_0_1 = (x_size[1] != 1);
  stride_1_1 = (theta_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  loop_ub = theta_size[1] == 1 ? x_size[1] : theta_size[1];
  for (i_0 = 0; i_0 < loop_ub; i_0++) {
    loop_ub_0 = theta_size[0] == 1 ? x_size[0] : theta_size[0];
    for (i = 0; i < loop_ub_0; i++) {
      c_x_data[0] = ((x_data[x_size[0] * aux_0_1] == 0.0F) &&
                     (theta_data[theta_size[0] * aux_1_1] > 0.0F));
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void FrenentReferencePath_getClosest(const real32_T pathPoints[600],
  const real32_T startIdx_data[], const int32_T startIdx_size[2], const real32_T
  endIdx_data[], const int32_T endIdx_size[2], const real32_T s_data[], const
  int32_T s_size[2], real32_T pathPoint_data[], int32_T pathPoint_size[2])
{
  int32_T c_x_size[2];
  int32_T endPoint_size[2];
  int32_T startPoint_size[2];
  int32_T theta_size[2];
  int32_T varargin_1_size[2];
  int32_T varargin_2_size[2];
  int32_T varargin_4_size[2];
  int32_T weight_size[2];
  int32_T x_size[2];
  int32_T a0n_size;
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T nx;
  real32_T b_y_data[40];
  real32_T endPoint_data[6];
  real32_T startPoint_data[6];
  real32_T a0n_data;
  real32_T theta_data;
  real32_T varargin_1_data;
  real32_T varargin_2_data;
  real32_T varargin_4_data;
  real32_T weight_data;
  real32_T y_data;
  int8_T s;
  int8_T theta;
  int8_T varargin_1;
  int8_T varargin_2;
  int8_T varargin_4;
  int8_T weight;
  boolean_T b_x_data_idx_0;
  boolean_T c_x_data;
  boolean_T c_y;
  boolean_T exitg1;
  startPoint_size[0] = startIdx_size[1];
  startPoint_size[1] = 6;
  endPoint_size[0] = endIdx_size[1];
  endPoint_size[1] = 6;
  nx = startIdx_size[1];
  loop_ub_0 = endIdx_size[1];
  for (i = 0; i < 6; i++) {
    if (0 <= nx - 1) {
      startPoint_data[startPoint_size[0] * i] = pathPoints[(100 * i + (int32_T)
        startIdx_data[0]) - 1];
    }

    if (0 <= loop_ub_0 - 1) {
      endPoint_data[endPoint_size[0] * i] = pathPoints[(100 * i + (int32_T)
        endIdx_data[0]) - 1];
    }
  }

  if ((0 <= s_size[1] - 1) && (0 <= startIdx_size[1] - 1)) {
    a0n_data = s_data[0] - startPoint_data[startIdx_size[1] * 5];
  }

  nx = startIdx_size[1] * s_size[1];
  weight_size[0] = (int8_T)startIdx_size[1];
  weight_size[1] = (int8_T)s_size[1];
  loop_ub_0 = 0;
  while (loop_ub_0 <= nx - 1) {
    weight_data = (real32_T)fabs(a0n_data);
    loop_ub_0 = 1;
  }

  if (endIdx_size[1] == startIdx_size[1]) {
    loop_ub_0 = endIdx_size[1];
    if (0 <= endIdx_size[1] - 1) {
      y_data = endPoint_data[endIdx_size[1] * 5] -
        startPoint_data[startIdx_size[1] * 5];
    }
  } else {
    LATC_Test__binary_expand_op_c03(&y_data, &loop_ub_0, endPoint_data,
      endPoint_size, endIdx_size, startPoint_data, startPoint_size,
      startIdx_size);
  }

  if ((int8_T)startIdx_size[1] == loop_ub_0) {
    if ((0 <= (int8_T)s_size[1] - 1) && (0 <= (int8_T)startIdx_size[1] - 1)) {
      a0n_data = weight_data / y_data;
    }

    weight_size[0] = (int8_T)startIdx_size[1];
    weight_size[1] = (int8_T)s_size[1];
    if (0 <= (int8_T)startIdx_size[1] * (int8_T)s_size[1] - 1) {
      weight_data = a0n_data;
    }
  } else {
    LATC__binary_expand_op_c03j54up(&weight_data, weight_size, &y_data,
      &loop_ub_0);
  }

  if ((weight_size[0] == startIdx_size[1]) && (weight_size[0] == endIdx_size[1])
      && ((weight_size[0] == 1 ? startIdx_size[1] : weight_size[0]) ==
          (weight_size[0] == 1 ? endIdx_size[1] : weight_size[0]))) {
    varargin_1_size[0] = weight_size[0];
    varargin_1_size[1] = weight_size[1];
    if ((0 <= weight_size[1] - 1) && (0 <= weight_size[0] - 1)) {
      varargin_1_data = (1.0F - weight_data) * startPoint_data[0] + weight_data *
        endPoint_data[0];
    }
  } else {
    LATC_T_binary_expand_op_c03j54u(&varargin_1_data, varargin_1_size,
      &weight_data, weight_size, startPoint_data, startIdx_size, endPoint_data,
      endIdx_size);
  }

  if ((weight_size[0] == startIdx_size[1]) && (weight_size[0] == endIdx_size[1])
      && ((weight_size[0] == 1 ? startIdx_size[1] : weight_size[0]) ==
          (weight_size[0] == 1 ? endIdx_size[1] : weight_size[0]))) {
    varargin_2_size[0] = weight_size[0];
    varargin_2_size[1] = weight_size[1];
    if ((0 <= weight_size[1] - 1) && (0 <= weight_size[0] - 1)) {
      varargin_2_data = (1.0F - weight_data) * startPoint_data[startIdx_size[1]]
        + weight_data * endPoint_data[endIdx_size[1]];
    }
  } else {
    LATC_Te_binary_expand_op_c03j54(&varargin_2_data, varargin_2_size,
      &weight_data, weight_size, startPoint_data, startPoint_size, startIdx_size,
      endPoint_data, endPoint_size, endIdx_size);
  }

  if ((weight_size[0] == startIdx_size[1]) && (weight_size[0] == endIdx_size[1])
      && ((weight_size[0] == 1 ? startIdx_size[1] : weight_size[0]) ==
          (weight_size[0] == 1 ? endIdx_size[1] : weight_size[0]))) {
    varargin_4_size[0] = weight_size[0];
    varargin_4_size[1] = weight_size[1];
    if ((0 <= weight_size[1] - 1) && (0 <= weight_size[0] - 1)) {
      varargin_4_data = (1.0F - weight_data) * startPoint_data[startIdx_size[1] *
        3] + endPoint_data[endIdx_size[1] * 3] * weight_data;
    }
  } else {
    LATC_Tes_binary_expand_op_c03j5(&varargin_4_data, varargin_4_size,
      &weight_data, weight_size, startPoint_data, startPoint_size, startIdx_size,
      endPoint_data, endPoint_size, endIdx_size);
  }

  if ((weight_size[0] == startIdx_size[1]) && (weight_size[0] == endIdx_size[1])
      && ((weight_size[0] == 1 ? startIdx_size[1] : weight_size[0]) ==
          (weight_size[0] == 1 ? endIdx_size[1] : weight_size[0]))) {
    x_size[0] = weight_size[0];
    x_size[1] = weight_size[1];
    if ((0 <= weight_size[1] - 1) && (0 <= weight_size[0] - 1)) {
      a0n_data = (1.0F - weight_data) * startPoint_data[startIdx_size[1] << 2] +
        endPoint_data[endIdx_size[1] << 2] * weight_data;
    }

    if (0 <= x_size[0] * x_size[1] - 1) {
      weight_data = a0n_data;
    }
  } else {
    LATC_Test_binary_expand_op_c03j(&weight_data, weight_size, startPoint_data,
      startPoint_size, startIdx_size, endPoint_data, endPoint_size, endIdx_size);
  }

  if (endIdx_size[1] == startIdx_size[1]) {
    loop_ub_0 = endIdx_size[1];
    if (0 <= endIdx_size[1] - 1) {
      y_data = endPoint_data[endIdx_size[1] * 5] -
        startPoint_data[startIdx_size[1] * 5];
    }
  } else {
    LATC_Test__binary_expand_op_c03(&y_data, &loop_ub_0, endPoint_data,
      endPoint_size, endIdx_size, startPoint_data, startPoint_size,
      startIdx_size);
  }

  if (0 <= loop_ub_0 - 1) {
    b_y_data[0] = (real32_T)fabs(y_data);
  }

  if (0 <= loop_ub_0 - 1) {
    b_x_data_idx_0 = (b_y_data[0] <= 2.22044605E-16F);
  }

  c_y = (loop_ub_0 != 0);
  if (c_y) {
    nx = 0;
    exitg1 = false;
    while ((!exitg1) && (nx <= loop_ub_0 - 1)) {
      if (!b_x_data_idx_0) {
        c_y = false;
        exitg1 = true;
      } else {
        nx = 1;
      }
    }
  }

  if (c_y) {
    if (0 <= startIdx_size[1] - 1) {
      y_data = startPoint_data[startIdx_size[1] << 1];
    }

    theta_size[0] = startIdx_size[1];
    theta_size[1] = 1;
    if (0 <= startIdx_size[1] - 1) {
      theta_data = y_data;
    }
  } else {
    nx = startIdx_size[1];
    if (0 <= startIdx_size[1] - 1) {
      b_y_data[0] = startPoint_data[startIdx_size[1] << 1];
    }

    L_FrenentReferencePath_wrapToPi(b_y_data, &nx);
    a0n_size = nx;
    if (0 <= nx - 1) {
      memcpy(&a0n_data, &b_y_data[0], nx * sizeof(real32_T));
    }

    nx = endIdx_size[1];
    if (0 <= endIdx_size[1] - 1) {
      b_y_data[0] = endPoint_data[endIdx_size[1] << 1];
    }

    L_FrenentReferencePath_wrapToPi(b_y_data, &nx);
    if (nx == a0n_size) {
      for (i = 0; i < nx; i++) {
        b_y_data[0] -= a0n_data;
      }
    } else {
      LATC_Test_C_binary_expand_op_c0(b_y_data, &nx, &a0n_data, &a0n_size);
    }

    L_FrenentReferencePath_wrapToPi(b_y_data, &nx);
    if ((loop_ub_0 == startIdx_size[1]) && ((startIdx_size[1] == 1 ? loop_ub_0 :
          startIdx_size[1]) == nx) && ((nx == 1 ? startIdx_size[1] == 1 ?
          loop_ub_0 : startIdx_size[1] : nx) == a0n_size)) {
      theta_size[0] = a0n_size;
      theta_size[1] = s_size[1];
      if ((0 <= s_size[1] - 1) && (0 <= a0n_size - 1)) {
        theta_data = (s_data[0] - startPoint_data[startIdx_size[1] * 5]) /
          y_data * b_y_data[0] + a0n_data;
      }
    } else {
      LATC_Test_Ca_binary_expand_op_c(&theta_data, theta_size, &a0n_data,
        &a0n_size, b_y_data, &nx, s_data, s_size, startPoint_data,
        startPoint_size, startIdx_size, &y_data, &loop_ub_0);
    }

    nx = theta_size[0] * theta_size[1];
    loop_ub_0 = 0;
    while (loop_ub_0 <= nx - 1) {
      a0n_data = (real32_T)fabs(theta_data);
      loop_ub_0 = 1;
    }

    c_x_size[0] = (int8_T)theta_size[0];
    c_x_size[1] = (int8_T)theta_size[1];
    if (0 <= (int8_T)theta_size[0] * (int8_T)theta_size[1] - 1) {
      c_x_data = (a0n_data > 3.1415926535897931);
    }

    i = (int8_T)theta_size[0] * (int8_T)theta_size[1];
    if (LATC_Test_Cal_allOrAny_anonFcn1(&c_x_data, &i)) {
      for (i = 0; i < nx; i++) {
        theta_data += 3.14159274F;
      }

      x_size[0] = (int8_T)theta_size[0];
      x_size[1] = (int8_T)theta_size[1];
      nx = (int8_T)theta_size[0] * (int8_T)theta_size[1];
      loop_ub_0 = 0;
      while (loop_ub_0 <= nx - 1) {
        a0n_data = LATC_Test_Calc_sxfun_anonFcn2(theta_data);
        loop_ub_0 = 1;
      }

      if (((int8_T)theta_size[0] == theta_size[0]) && ((int8_T)theta_size[1] ==
           theta_size[1])) {
        c_x_size[0] = (int8_T)theta_size[0];
        c_x_size[1] = (int8_T)theta_size[1];
        if (0 <= (int8_T)theta_size[0] * (int8_T)theta_size[1] - 1) {
          c_x_data = ((a0n_data == 0.0F) && (theta_data > 0.0F));
        }
      } else {
        LATC_Test_Calc_binary_expand_op(&c_x_data, c_x_size, &a0n_data, x_size,
          &theta_data, theta_size);
      }

      nx = c_x_size[0] * c_x_size[1] - 1;
      loop_ub_0 = 0;
      i = 0;
      while (i <= nx) {
        if (c_x_data) {
          loop_ub_0++;
        }

        i = 1;
      }

      if (0 <= loop_ub_0 - 1) {
        a0n_data = 6.28318548F;
      }

      theta_size[0] = (int8_T)theta_size[0];
      theta_size[1] = (int8_T)theta_size[1];
      if (0 <= x_size[0] * x_size[1] - 1) {
        theta_data = a0n_data - 3.14159274F;
      }
    }
  }

  pathPoint_size[0] = 1;
  if ((varargin_1_size[0] != 0) && (varargin_1_size[1] != 0)) {
    varargin_1 = 1;
  } else {
    varargin_1 = 0;
  }

  if ((varargin_2_size[0] != 0) && (varargin_2_size[1] != 0)) {
    varargin_2 = 1;
  } else {
    varargin_2 = 0;
  }

  if ((theta_size[0] != 0) && (theta_size[1] != 0)) {
    theta = 1;
  } else {
    theta = 0;
  }

  if ((varargin_4_size[0] != 0) && (varargin_4_size[1] != 0)) {
    varargin_4 = 1;
  } else {
    varargin_4 = 0;
  }

  if ((weight_size[0] != 0) && (weight_size[1] != 0)) {
    weight = 1;
  } else {
    weight = 0;
  }

  if (s_size[1] != 0) {
    s = 1;
  } else {
    s = 0;
  }

  pathPoint_size[1] = ((((varargin_1 + varargin_2) + theta) + varargin_4) +
                       weight) + s;
  if ((varargin_1_size[0] != 0) && (varargin_1_size[1] != 0)) {
    nx = 1;
  } else {
    nx = 0;
  }

  if ((varargin_2_size[0] != 0) && (varargin_2_size[1] != 0)) {
    loop_ub_0 = 1;
  } else {
    loop_ub_0 = 0;
  }

  if ((theta_size[0] != 0) && (theta_size[1] != 0)) {
    i = 1;
  } else {
    i = 0;
  }

  if ((varargin_4_size[0] != 0) && (varargin_4_size[1] != 0)) {
    a0n_size = 1;
  } else {
    a0n_size = 0;
  }

  if ((weight_size[0] != 0) && (weight_size[1] != 0)) {
    loop_ub = 1;
  } else {
    loop_ub = 0;
  }

  if (s_size[1] != 0) {
    s = 1;
  } else {
    s = 0;
  }

  if (0 <= nx - 1) {
    pathPoint_data[0] = varargin_1_data;
  }

  if (0 <= loop_ub_0 - 1) {
    pathPoint_data[nx] = varargin_2_data;
  }

  if (0 <= i - 1) {
    pathPoint_data[nx + loop_ub_0] = theta_data;
  }

  if (0 <= a0n_size - 1) {
    pathPoint_data[(nx + loop_ub_0) + i] = varargin_4_data;
  }

  if (0 <= loop_ub - 1) {
    pathPoint_data[((nx + loop_ub_0) + i) + a0n_size] = weight_data;
  }

  if (0 <= s - 1) {
    pathPoint_data[(((nx + loop_ub_0) + i) + a0n_size) + loop_ub] = s_data[0];
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void FrenentReferencePath_interpolat(const
  FrenentReferencePath_LATC_Tes_T *obj, real32_T arcLength, real32_T pathPoints
  [6])
{
  int32_T arcLength_size[2];
  int32_T interpolatedPts_size[2];
  int32_T x_size[2];
  int32_T x_size_0[2];
  int32_T jcol;
  int32_T x_data_tmp;
  real32_T interpolatedPts_data[6];
  real32_T x;
  real32_T x_data;
  boolean_T b;
  boolean_T c;
  x = (real32_T)floor(1.0F / obj->DiscretizationDistance * arcLength);
  for (jcol = 0; jcol < 6; jcol++) {
    pathPoints[jcol] = obj->PathPoints[100 * jcol + 99];
  }

  b = !(x + 1.0F <= 0.0F);
  c = (arcLength < obj->PathPoints[599]);
  if (b && c) {
    jcol = 0;
    if (b && c) {
      jcol = 1;
    }

    x_size[0] = 1;
    x_size[1] = 1;
    x_size_0[0] = 1;
    x_size_0[1] = 1;
    x_data = x + 1.0F;
    x = (x + 1.0F) + 1.0F;
    arcLength_size[0] = 1;
    arcLength_size[1] = jcol;
    if (0 <= jcol - 1) {
    }

    FrenentReferencePath_getClosest(obj->PathPoints, &x_data, x_size, &x,
      x_size_0, &arcLength, arcLength_size, interpolatedPts_data,
      interpolatedPts_size);
    x_data_tmp = interpolatedPts_size[1];
    if (0 <= interpolatedPts_size[0] - 1) {
      for (jcol = 0; jcol < x_data_tmp; jcol++) {
        pathPoints[jcol] = interpolatedPts_data[interpolatedPts_size[0] * jcol];
      }
    }
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static real32_T LATC_Test_Calc_mod(real32_T x)
{
  real32_T q;
  real32_T r;
  boolean_T rEQ0;
  if (rtIsNaNF(x) || rtIsInfF(x)) {
    r = (rtNaNF);
  } else if (x == 0.0F) {
    r = 0.0F;
  } else {
    r = (real32_T)fmod(x, 6.2831854820251465);
    rEQ0 = (r == 0.0F);
    if (!rEQ0) {
      q = (real32_T)fabs(x / 6.28318548F);
      rEQ0 = !((real32_T)fabs(q - (real32_T)floor(q + 0.5F)) > 1.1920929E-7F * q);
    }

    if (rEQ0) {
      r = 0.0F;
    } else if (x < 0.0F) {
      r += 6.28318548F;
    }
  }

  return r;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void FrenentReferencePath_wrapToPi_g(real32_T *theta)
{
  real32_T thetaWrap;
  if ((real32_T)fabs(*theta) > 3.1415926535897931) {
    thetaWrap = LATC_Test_Calc_mod(*theta + 3.14159274F);
    if ((thetaWrap == 0.0F) && (*theta + 3.14159274F > 0.0F)) {
      thetaWrap = 6.28318548F;
    }

    *theta = thetaWrap - 3.14159274F;
  }
}

real32_T rt_roundf_snf(real32_T u)
{
  real32_T y;
  if ((real32_T)fabs(u) < 8.388608E+6F) {
    if (u >= 0.5F) {
      y = (real32_T)floor(u + 0.5F);
    } else if (u > -0.5F) {
      y = u * 0.0F;
    } else {
      y = (real32_T)ceil(u - 0.5F);
    }
  } else {
    y = u;
  }

  return y;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void FrenentReferencePath_global2fre(const
  FrenentReferencePath_LATC_Tes_T *obj, const real32_T globalStates[6], real32_T
  frenetState[6])
{
  real_T refState[6];
  real_T q;
  real_T refTheta;
  int32_T endIdx;
  int32_T startIdx;
  real32_T x[200];
  real32_T y[200];
  real32_T varargin_1[100];
  real32_T pathPoint[6];
  real32_T absxk;
  real32_T dotV;
  real32_T dy;
  real32_T frenetState_tmp;
  real32_T sDot;
  real32_T t;
  real32_T v1x;
  real32_T v1y;
  boolean_T exitg1;
  boolean_T rEQ0;
  v1x = globalStates[0];
  v1y = globalStates[1];
  for (startIdx = 0; startIdx < 100; startIdx++) {
    x[startIdx] = obj->PathPoints[startIdx] - v1x;
    x[startIdx + 100] = obj->PathPoints[startIdx + 100] - v1y;
  }

  for (startIdx = 0; startIdx < 200; startIdx++) {
    v1x = x[startIdx];
    y[startIdx] = v1x * v1x;
  }

  for (startIdx = 0; startIdx < 100; startIdx++) {
    varargin_1[startIdx] = y[startIdx + 100] + y[startIdx];
  }

  if (!rtIsNaNF(varargin_1[0])) {
    startIdx = 1;
  } else {
    startIdx = 0;
    endIdx = 2;
    exitg1 = false;
    while ((!exitg1) && (endIdx < 101)) {
      if (!rtIsNaNF(varargin_1[endIdx - 1])) {
        startIdx = endIdx;
        exitg1 = true;
      } else {
        endIdx++;
      }
    }
  }

  if (startIdx == 0) {
    endIdx = 0;
  } else {
    v1x = varargin_1[startIdx - 1];
    endIdx = startIdx - 1;
    while (startIdx + 1 < 101) {
      if (v1x > varargin_1[startIdx]) {
        v1x = varargin_1[startIdx];
        endIdx = startIdx;
      }

      startIdx++;
    }
  }

  if (endIdx + 1 == 100) {
    if ((globalStates[0] - obj->PathPoints[99]) * (obj->PathPoints[98] -
         obj->PathPoints[99]) + (globalStates[1] - obj->PathPoints[199]) *
        (obj->PathPoints[198] - obj->PathPoints[199]) <= 0.0F) {
      for (startIdx = 0; startIdx < 6; startIdx++) {
        pathPoint[startIdx] = obj->PathPoints[100 * startIdx + 99];
      }
    } else {
      v1x = obj->PathPoints[99] - obj->PathPoints[98];
      v1y = obj->PathPoints[199] - obj->PathPoints[198];
      dotV = (globalStates[0] - obj->PathPoints[98]) * v1x + (globalStates[1] -
        obj->PathPoints[198]) * v1y;
      startIdx = 98;
      FrenentReferencePath_interpolat(obj, dotV / (real32_T)sqrt(v1x * v1x + v1y
        * v1y) + obj->PathPoints[startIdx + 500], pathPoint);
    }
  } else if (endIdx + 1 == 1) {
    v1x = obj->PathPoints[1] - obj->PathPoints[0];
    v1y = obj->PathPoints[101] - obj->PathPoints[100];
    dotV = (globalStates[0] - obj->PathPoints[0]) * v1x + (globalStates[1] -
      obj->PathPoints[100]) * v1y;
    if (dotV <= 0.0F) {
      for (startIdx = 0; startIdx < 6; startIdx++) {
        pathPoint[startIdx] = obj->PathPoints[100 * startIdx];
      }
    } else {
      startIdx = 0;
      FrenentReferencePath_interpolat(obj, dotV / (real32_T)sqrt(v1x * v1x + v1y
        * v1y) + obj->PathPoints[startIdx + 500], pathPoint);
    }
  } else {
    v1x = obj->PathPoints[endIdx + 100];
    if ((obj->PathPoints[endIdx] - obj->PathPoints[endIdx - 1]) * (globalStates
         [0] - obj->PathPoints[endIdx]) + (v1x - obj->PathPoints[endIdx + 99]) *
        (globalStates[1] - v1x) < 0.0F) {
      startIdx = endIdx - 1;
    } else {
      startIdx = endIdx;
      endIdx++;
    }

    v1x = obj->PathPoints[endIdx] - obj->PathPoints[startIdx];
    dotV = obj->PathPoints[startIdx + 100];
    v1y = obj->PathPoints[endIdx + 100] - dotV;
    dotV = (globalStates[1] - dotV) * v1y + (globalStates[0] - obj->
      PathPoints[startIdx]) * v1x;
    FrenentReferencePath_interpolat(obj, dotV / (real32_T)sqrt(v1x * v1x + v1y *
      v1y) + obj->PathPoints[startIdx + 500], pathPoint);
  }

  for (startIdx = 0; startIdx < 6; startIdx++) {
    refState[startIdx] = pathPoint[startIdx];
  }

  refTheta = refState[2];
  if (fabs(refState[2]) > 3.1415926535897931) {
    if (rtIsNaN(refState[2] + 3.1415926535897931) || rtIsInf(refState[2] +
         3.1415926535897931)) {
      refTheta = (rtNaN);
    } else if (refState[2] + 3.1415926535897931 == 0.0) {
      refTheta = 0.0;
    } else {
      refTheta = fmod(refState[2] + 3.1415926535897931, 6.2831853071795862);
      rEQ0 = (refTheta == 0.0);
      if (!rEQ0) {
        q = fabs((refState[2] + 3.1415926535897931) / 6.2831853071795862);
        rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        refTheta = 0.0;
      } else if (refState[2] + 3.1415926535897931 < 0.0) {
        refTheta += 6.2831853071795862;
      }
    }

    if ((refTheta == 0.0) && (refState[2] + 3.1415926535897931 > 0.0)) {
      refTheta = 6.2831853071795862;
    }

    refTheta -= 3.1415926535897931;
  }

  dotV = globalStates[0] - (real32_T)refState[0];
  dy = globalStates[1] - (real32_T)refState[1];
  v1x = 1.29246971E-26F;
  absxk = (real32_T)fabs(dotV);
  if (absxk > 1.29246971E-26F) {
    v1y = 1.0F;
    v1x = absxk;
  } else {
    t = absxk / 1.29246971E-26F;
    v1y = t * t;
  }

  absxk = (real32_T)fabs(dy);
  if (absxk > v1x) {
    t = v1x / absxk;
    v1y = v1y * t * t + 1.0F;
    v1x = absxk;
  } else {
    t = absxk / v1x;
    v1y += t * t;
  }

  dotV = (real32_T)cos(refTheta) * dy - (real32_T)sin(refTheta) * dotV;
  if (dotV < 0.0F) {
    dotV = -1.0F;
  } else if (dotV > 0.0F) {
    dotV = 1.0F;
  } else if (dotV == 0.0F) {
    dotV = 0.0F;
  } else {
    dotV = (rtNaNF);
  }

  v1x = v1x * (real32_T)sqrt(v1y) * dotV;
  v1y = globalStates[2];
  FrenentReferencePath_wrapToPi_g(&v1y);
  dotV = v1y - (real32_T)refTheta;
  FrenentReferencePath_wrapToPi_g(&dotV);
  v1y = (real32_T)tan(dotV);
  dotV = (real32_T)cos(dotV);
  dy = 1.0F - (real32_T)refState[3] * v1x;
  absxk = dy * v1y;
  t = (real32_T)refState[4] * v1x + (real32_T)refState[3] * absxk;
  sDot = globalStates[4] * dotV / dy;
  frenetState[0] = (real32_T)refState[5] * 1.0E+8F;
  frenetState[1] = sDot * 1.0E+8F;
  frenetState_tmp = dy / dotV;
  frenetState[2] = (0.0F * dotV - ((frenetState_tmp * globalStates[3] -
    (real32_T)refState[3]) * absxk - t) * (sDot * sDot)) / dy * 1.0E+8F;
  frenetState[3] = v1x * 1.0E+8F;
  frenetState[4] = absxk * 1.0E+8F;
  frenetState[5] = ((globalStates[3] * dy / dotV - (real32_T)refState[3]) *
                    (frenetState_tmp / dotV) + -t * v1y) * 1.0E+8F;
  for (startIdx = 0; startIdx < 6; startIdx++) {
    frenetState[startIdx] = rt_roundf_snf(frenetState[startIdx]) / 1.0E+8F;
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void TrajectoryGeneratorFrenet_Quint(const real32_T startCondition[3],
  const real32_T endCondition[3], real32_T Variable, real32_T Coefficients[6])
{
  int32_T i;
  real32_T tmp_0[9];
  real32_T tmp_1[9];
  real32_T tmp[6];
  real32_T coeffVec[5];
  real32_T endCondition_2[3];
  real32_T endCondition_3[3];
  real32_T endCondition_0[2];
  real32_T endCondition_1[2];
  real32_T a;
  real32_T coeffVec_tmp;
  real32_T tmp_2;
  if (rtIsNaNF(endCondition[0])) {
    coeffVec[0] = startCondition[0];
    coeffVec[1] = startCondition[1];
    coeffVec[2] = startCondition[2] / 2.0F;
    a = 1.0F / (12.0F * rt_powf_snf(Variable, 4.0F));
    tmp[0] = 0.0F;
    tmp[2] = 1.0F;
    tmp[4] = 2.0F * Variable;
    tmp[1] = 0.0F;
    tmp[3] = 0.0F;
    tmp[5] = 2.0F;
    endCondition_0[0] = endCondition[1];
    endCondition_0[1] = endCondition[2];
    for (i = 0; i < 2; i++) {
      endCondition_1[i] = endCondition_0[i] - ((tmp[i + 2] * coeffVec[1] + 0.0F *
        coeffVec[0]) + tmp[i + 4] * coeffVec[2]);
    }

    coeffVec_tmp = Variable * Variable;
    coeffVec[3] = coeffVec_tmp * 12.0F * a * endCondition_1[0] + -4.0F *
      rt_powf_snf(Variable, 3.0F) * a * endCondition_1[1];
    coeffVec[4] = coeffVec_tmp * 3.0F * a * endCondition_1[1] + -6.0F * Variable
      * a * endCondition_1[0];
    for (i = 0; i < 5; i++) {
      Coefficients[i] = coeffVec[i];
    }

    Coefficients[5] = 0.0F;
  } else {
    Coefficients[0] = startCondition[0];
    Coefficients[1] = startCondition[1];
    Coefficients[2] = startCondition[2] / 2.0F;
    Coefficients[3] = 0.0F;
    Coefficients[4] = 0.0F;
    Coefficients[5] = 0.0F;
    a = rt_powf_snf(Variable, 3.0F);
    coeffVec_tmp = rt_powf_snf(Variable, 4.0F);
    tmp_0[0] = 1.0F;
    tmp_0[3] = Variable;
    tmp_2 = Variable * Variable;
    tmp_0[6] = tmp_2;
    tmp_0[1] = 0.0F;
    tmp_0[4] = 1.0F;
    tmp_0[7] = 2.0F * Variable;
    tmp_0[2] = 0.0F;
    tmp_0[5] = 0.0F;
    tmp_0[8] = 2.0F;
    endCondition_2[0] = endCondition[0];
    endCondition_2[1] = endCondition[1];
    endCondition_2[2] = endCondition[2];
    tmp_1[0] = 10.0F / a;
    tmp_1[3] = -4.0F / tmp_2;
    tmp_1[6] = 1.0F / (2.0F * Variable);
    tmp_1[1] = -15.0F / coeffVec_tmp;
    tmp_1[4] = 7.0F / a;
    tmp_1[7] = -1.0F / tmp_2;
    tmp_1[2] = 6.0F / rt_powf_snf(Variable, 5.0F);
    tmp_1[5] = -3.0F / coeffVec_tmp;
    tmp_1[8] = 1.0F / (2.0F * a);
    for (i = 0; i < 3; i++) {
      endCondition_3[i] = endCondition_2[i] - ((tmp_0[i + 3] * Coefficients[1] +
        tmp_0[i] * Coefficients[0]) + tmp_0[i + 6] * Coefficients[2]);
    }

    for (i = 0; i < 3; i++) {
      Coefficients[i + 3] = (tmp_1[i + 3] * endCondition_3[1] + tmp_1[i] *
        endCondition_3[0]) + tmp_1[i + 6] * endCondition_3[2];
    }
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void LATC_Test_Calc_linspace_n(real32_T d2, real32_T y[40])
{
  int32_T c_k;
  real32_T delta1;
  y[39] = d2;
  y[0] = 0.0F;
  if (0.0F == -d2) {
    delta1 = d2 / 39.0F;
    for (c_k = 0; c_k < 38; c_k++) {
      y[c_k + 1] = (((real32_T)c_k + 2.0F) * 2.0F - 41.0F) * delta1;
    }
  } else if ((d2 < 0.0F) && ((real32_T)fabs(d2) > 1.70141173E+38F)) {
    delta1 = d2 / 39.0F;
    for (c_k = 0; c_k < 38; c_k++) {
      y[c_k + 1] = ((real32_T)c_k + 1.0F) * delta1;
    }
  } else {
    delta1 = d2 / 39.0F;
    for (c_k = 0; c_k < 38; c_k++) {
      y[c_k + 1] = ((real32_T)c_k + 1.0F) * delta1;
    }
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void LATC_Test_Calc_repmat(const real32_T a[6], real32_T b[240])
{
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  for (jcol = 0; jcol < 6; jcol++) {
    ibmat = jcol * 40;
    for (itilerow = 0; itilerow < 40; itilerow++) {
      b[ibmat + itilerow] = a[jcol];
    }
  }
}

static void binary_expand_op_c03j54upnmwkz(real32_T a0n_data[], int32_T
  *a0n_size, const real32_T s_data[], const int32_T *s_size, const real32_T
  startPoint_data[], const int32_T startPoint_size[2], const int32_T
  *startIdx_size)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  *a0n_size = *startIdx_size == 1 ? *s_size : *startIdx_size;
  stride_0_0 = (*s_size != 1);
  stride_1_0 = (*startIdx_size != 1);
  loop_ub = *startIdx_size == 1 ? *s_size : *startIdx_size;
  for (i = 0; i < loop_ub; i++) {
    a0n_data[i] = s_data[i * stride_0_0] - startPoint_data[i * stride_1_0 +
      startPoint_size[0] * 5];
  }
}

static void L_binary_expand_op_c03j54upnmwk(real32_T weight_data[], int32_T
  *weight_size, const real32_T endPoint_data[], const int32_T endPoint_size[2],
  const int32_T *endIdx_size, const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T *startIdx_size)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T weight_size_idx_0;
  real32_T weight_data_0[40];
  weight_size_idx_0 = (*startIdx_size == 1 ? *endIdx_size : *startIdx_size) == 1
    ? *weight_size : *startIdx_size == 1 ? *endIdx_size : *startIdx_size;
  stride_0_0 = (*weight_size != 1);
  stride_1_0 = (*endIdx_size != 1);
  stride_2_0 = (*startIdx_size != 1);
  loop_ub = (*startIdx_size == 1 ? *endIdx_size : *startIdx_size) == 1 ?
    *weight_size : *startIdx_size == 1 ? *endIdx_size : *startIdx_size;
  for (i = 0; i < loop_ub; i++) {
    weight_data_0[i] = weight_data[i * stride_0_0] / (endPoint_data[i *
      stride_1_0 + endPoint_size[0] * 5] - startPoint_data[i * stride_2_0 +
      startPoint_size[0] * 5]);
  }

  *weight_size = weight_size_idx_0;
  if (0 <= weight_size_idx_0 - 1) {
    memcpy(&weight_data[0], &weight_data_0[0], weight_size_idx_0 * sizeof
           (real32_T));
  }
}

static void LA_binary_expand_op_c03j54upnmw(real32_T x_tmp_data[], int32_T
  *x_tmp_size, const real32_T endPoint_data[], const int32_T endPoint_size[2],
  const int32_T *endIdx_size, const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T *startIdx_size)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  *x_tmp_size = *startIdx_size == 1 ? *endIdx_size : *startIdx_size;
  stride_0_0 = (*endIdx_size != 1);
  stride_1_0 = (*startIdx_size != 1);
  loop_ub = *startIdx_size == 1 ? *endIdx_size : *startIdx_size;
  for (i = 0; i < loop_ub; i++) {
    x_tmp_data[i] = endPoint_data[i * stride_0_0 + endPoint_size[0] * 5] -
      startPoint_data[i * stride_1_0 + startPoint_size[0] * 5];
  }
}

static void LATC_Test_Calc_minus(real32_T d_data[], int32_T *d_size, const
  real32_T a0n_data[], const int32_T *a0n_size)
{
  int32_T d_size_idx_0;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  real32_T d_data_0[40];
  d_size_idx_0 = *a0n_size == 1 ? *d_size : *a0n_size;
  stride_0_0 = (*d_size != 1);
  stride_1_0 = (*a0n_size != 1);
  loop_ub = *a0n_size == 1 ? *d_size : *a0n_size;
  for (i = 0; i < loop_ub; i++) {
    d_data_0[i] = d_data[i * stride_0_0] - a0n_data[i * stride_1_0];
  }

  *d_size = d_size_idx_0;
  if (0 <= d_size_idx_0 - 1) {
    memcpy(&d_data[0], &d_data_0[0], d_size_idx_0 * sizeof(real32_T));
  }
}

static void LAT_binary_expand_op_c03j54upnm(cell_wrap_9_LATC_Test_Calc_T
  reshapes[6], const real32_T a0n_data[], const int32_T *a0n_size, const
  real32_T d_data[], const int32_T *d_size, const real32_T s_data[], const
  int32_T *s_size, const real32_T startPoint_data[], const int32_T
  startPoint_size[2], const int32_T *startIdx_size, const real32_T x_tmp_data[],
  const int32_T *x_tmp_size)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T stride_4_0;
  reshapes[2].f1.size = ((*x_tmp_size == 1 ? *startIdx_size == 1 ? *s_size :
    *startIdx_size : *x_tmp_size) == 1 ? *d_size : *x_tmp_size == 1 ?
    *startIdx_size == 1 ? *s_size : *startIdx_size : *x_tmp_size) == 1 ?
    *a0n_size : (*x_tmp_size == 1 ? *startIdx_size == 1 ? *s_size :
                 *startIdx_size : *x_tmp_size) == 1 ? *d_size : *x_tmp_size == 1
    ? *startIdx_size == 1 ? *s_size : *startIdx_size : *x_tmp_size;
  stride_0_0 = (*a0n_size != 1);
  stride_1_0 = (*d_size != 1);
  stride_2_0 = (*s_size != 1);
  stride_3_0 = (*startIdx_size != 1);
  stride_4_0 = (*x_tmp_size != 1);
  loop_ub = ((*x_tmp_size == 1 ? *startIdx_size == 1 ? *s_size : *startIdx_size :
              *x_tmp_size) == 1 ? *d_size : *x_tmp_size == 1 ? *startIdx_size ==
             1 ? *s_size : *startIdx_size : *x_tmp_size) == 1 ? *a0n_size :
    (*x_tmp_size == 1 ? *startIdx_size == 1 ? *s_size : *startIdx_size :
     *x_tmp_size) == 1 ? *d_size : *x_tmp_size == 1 ? *startIdx_size == 1 ?
    *s_size : *startIdx_size : *x_tmp_size;
  for (i = 0; i < loop_ub; i++) {
    reshapes[2].f1.data[i] = (s_data[i * stride_2_0] - startPoint_data[i *
      stride_3_0 + startPoint_size[0] * 5]) / x_tmp_data[i * stride_4_0] *
      d_data[i * stride_1_0] + a0n_data[i * stride_0_0];
  }
}

static void LATC_binary_expand_op_c03j54upn(real32_T pathPoint_data[], int32_T
  pathPoint_size[2], const real32_T weight_data[], const int32_T *weight_size,
  const real32_T startPoint_data[], const int32_T startPoint_size[2], const
  int32_T *startIdx_size, const real32_T endPoint_data[], const int32_T
  endPoint_size[2], const int32_T *endIdx_size, const
  cell_wrap_9_LATC_Test_Calc_T reshapes[6], const real32_T s_data[], const
  int32_T *s_size)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T stride_2_0;
  int32_T stride_3_0;
  int32_T tmp_size_idx_0;
  int32_T tmp_size_idx_0_0;
  int32_T tmp_size_idx_0_1;
  int32_T tmp_size_idx_0_2;
  real32_T tmp_data[40];
  real32_T tmp_data_0[40];
  real32_T tmp_data_1[40];
  real32_T tmp_data_2[40];
  tmp_size_idx_0 = (*endIdx_size == 1 ? *weight_size : *endIdx_size) == 1 ?
    *startIdx_size == 1 ? *weight_size : *startIdx_size : *endIdx_size == 1 ?
    *weight_size : *endIdx_size;
  stride_0_0 = (*weight_size != 1);
  stride_1_0 = (*startIdx_size != 1);
  stride_2_0 = (*weight_size != 1);
  stride_3_0 = (*endIdx_size != 1);
  loop_ub = (*endIdx_size == 1 ? *weight_size : *endIdx_size) == 1 ?
    *startIdx_size == 1 ? *weight_size : *startIdx_size : *endIdx_size == 1 ?
    *weight_size : *endIdx_size;
  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = (1.0F - weight_data[i * stride_0_0]) * startPoint_data[i *
      stride_1_0] + weight_data[i * stride_2_0] * endPoint_data[i * stride_3_0];
  }

  tmp_size_idx_0_0 = (*endIdx_size == 1 ? *weight_size : *endIdx_size) == 1 ?
    *startIdx_size == 1 ? *weight_size : *startIdx_size : *endIdx_size == 1 ?
    *weight_size : *endIdx_size;
  stride_0_0 = (*weight_size != 1);
  stride_1_0 = (*startIdx_size != 1);
  stride_2_0 = (*weight_size != 1);
  stride_3_0 = (*endIdx_size != 1);
  loop_ub = (*endIdx_size == 1 ? *weight_size : *endIdx_size) == 1 ?
    *startIdx_size == 1 ? *weight_size : *startIdx_size : *endIdx_size == 1 ?
    *weight_size : *endIdx_size;
  for (i = 0; i < loop_ub; i++) {
    tmp_data_0[i] = (1.0F - weight_data[i * stride_0_0]) * startPoint_data[i *
      stride_1_0 + startPoint_size[0]] + endPoint_data[i * stride_3_0 +
      endPoint_size[0]] * weight_data[i * stride_2_0];
  }

  tmp_size_idx_0_1 = (*endIdx_size == 1 ? *weight_size : *endIdx_size) == 1 ?
    *startIdx_size == 1 ? *weight_size : *startIdx_size : *endIdx_size == 1 ?
    *weight_size : *endIdx_size;
  stride_0_0 = (*weight_size != 1);
  stride_1_0 = (*startIdx_size != 1);
  stride_2_0 = (*weight_size != 1);
  stride_3_0 = (*endIdx_size != 1);
  loop_ub = (*endIdx_size == 1 ? *weight_size : *endIdx_size) == 1 ?
    *startIdx_size == 1 ? *weight_size : *startIdx_size : *endIdx_size == 1 ?
    *weight_size : *endIdx_size;
  for (i = 0; i < loop_ub; i++) {
    tmp_data_1[i] = (1.0F - weight_data[i * stride_0_0]) * startPoint_data[i *
      stride_1_0 + startPoint_size[0] * 3] + endPoint_data[i * stride_3_0 +
      endPoint_size[0] * 3] * weight_data[i * stride_2_0];
  }

  tmp_size_idx_0_2 = (*endIdx_size == 1 ? *weight_size : *endIdx_size) == 1 ?
    *startIdx_size == 1 ? *weight_size : *startIdx_size : *endIdx_size == 1 ?
    *weight_size : *endIdx_size;
  stride_0_0 = (*weight_size != 1);
  stride_1_0 = (*startIdx_size != 1);
  stride_2_0 = (*weight_size != 1);
  stride_3_0 = (*endIdx_size != 1);
  loop_ub = (*endIdx_size == 1 ? *weight_size : *endIdx_size) == 1 ?
    *startIdx_size == 1 ? *weight_size : *startIdx_size : *endIdx_size == 1 ?
    *weight_size : *endIdx_size;
  for (i = 0; i < loop_ub; i++) {
    tmp_data_2[i] = (1.0F - weight_data[i * stride_0_0]) * startPoint_data[i *
      stride_1_0 + (startPoint_size[0] << 2)] + endPoint_data[i * stride_3_0 +
      (endPoint_size[0] << 2)] * weight_data[i * stride_2_0];
  }

  pathPoint_size[0] = tmp_size_idx_0;
  pathPoint_size[1] = 6;
  for (i = 0; i < tmp_size_idx_0; i++) {
    pathPoint_data[i] = tmp_data[i];
  }

  for (i = 0; i < tmp_size_idx_0_0; i++) {
    pathPoint_data[i + pathPoint_size[0]] = tmp_data_0[i];
  }

  loop_ub = reshapes[2].f1.size;
  for (i = 0; i < loop_ub; i++) {
    pathPoint_data[i + (pathPoint_size[0] << 1)] = reshapes[2].f1.data[i];
  }

  for (i = 0; i < tmp_size_idx_0_1; i++) {
    pathPoint_data[i + pathPoint_size[0] * 3] = tmp_data_1[i];
  }

  for (i = 0; i < tmp_size_idx_0_2; i++) {
    pathPoint_data[i + (pathPoint_size[0] << 2)] = tmp_data_2[i];
  }

  loop_ub = *s_size;
  for (i = 0; i < loop_ub; i++) {
    pathPoint_data[i + pathPoint_size[0] * 5] = s_data[i];
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void FrenentReferencePath_getClose_h(const real32_T pathPoints[600],
  const real32_T startIdx_data[], const int32_T *startIdx_size, const real32_T
  endIdx_data[], const int32_T *endIdx_size, const real32_T s_data[], const
  int32_T *s_size, real32_T pathPoint_data[], int32_T pathPoint_size[2])
{
  cell_wrap_9_LATC_Test_Calc_T reshapes[6];
  int32_T endPoint_size[2];
  int32_T startPoint_size[2];
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_0;
  int32_T x_size_idx_0;
  int32_T x_tmp_size;
  real32_T endPoint_data[240];
  real32_T startPoint_data[240];
  real32_T a0n_data[40];
  real32_T d_data[40];
  real32_T weight_data[40];
  real32_T x_tmp_data[40];
  real32_T weight;
  boolean_T x_data[40];
  boolean_T exitg1;
  boolean_T y;
  startPoint_size[0] = *startIdx_size;
  startPoint_size[1] = 6;
  endPoint_size[0] = *endIdx_size;
  endPoint_size[1] = 6;
  loop_ub = *startIdx_size;
  loop_ub_0 = *endIdx_size;
  for (i = 0; i < 6; i++) {
    for (x_size_idx_0 = 0; x_size_idx_0 < loop_ub; x_size_idx_0++) {
      startPoint_data[x_size_idx_0 + startPoint_size[0] * i] = pathPoints[(100 *
        i + (int32_T)startIdx_data[x_size_idx_0]) - 1];
    }

    for (x_size_idx_0 = 0; x_size_idx_0 < loop_ub_0; x_size_idx_0++) {
      endPoint_data[x_size_idx_0 + endPoint_size[0] * i] = pathPoints[(100 * i +
        (int32_T)endIdx_data[x_size_idx_0]) - 1];
    }
  }

  if (*s_size == *startIdx_size) {
    x_size_idx_0 = *s_size;
    loop_ub = *s_size;
    for (i = 0; i < loop_ub; i++) {
      a0n_data[i] = s_data[i] - startPoint_data[startPoint_size[0] * 5 + i];
    }
  } else {
    binary_expand_op_c03j54upnmwkz(a0n_data, &x_size_idx_0, s_data, s_size,
      startPoint_data, startPoint_size, startIdx_size);
  }

  loop_ub_0 = x_size_idx_0;
  for (loop_ub = 0; loop_ub < x_size_idx_0; loop_ub++) {
    weight_data[loop_ub] = (real32_T)fabs(a0n_data[loop_ub]);
  }

  if ((*endIdx_size == *startIdx_size) && ((*endIdx_size == 1 ? *startIdx_size :
        *endIdx_size) == x_size_idx_0)) {
    for (i = 0; i < x_size_idx_0; i++) {
      weight_data[i] /= endPoint_data[endPoint_size[0] * 5 + i] -
        startPoint_data[startPoint_size[0] * 5 + i];
    }
  } else {
    L_binary_expand_op_c03j54upnmwk(weight_data, &loop_ub_0, endPoint_data,
      endPoint_size, endIdx_size, startPoint_data, startPoint_size,
      startIdx_size);
  }

  if (*endIdx_size == *startIdx_size) {
    loop_ub = *endIdx_size;
    x_tmp_size = *endIdx_size;
    for (i = 0; i < loop_ub; i++) {
      x_tmp_data[i] = endPoint_data[endPoint_size[0] * 5 + i] -
        startPoint_data[startPoint_size[0] * 5 + i];
    }
  } else {
    LA_binary_expand_op_c03j54upnmw(x_tmp_data, &x_tmp_size, endPoint_data,
      endPoint_size, endIdx_size, startPoint_data, startPoint_size,
      startIdx_size);
  }

  for (loop_ub = 0; loop_ub < x_tmp_size; loop_ub++) {
    a0n_data[loop_ub] = (real32_T)fabs(x_tmp_data[loop_ub]);
  }

  for (i = 0; i < x_tmp_size; i++) {
    x_data[i] = (a0n_data[i] <= 2.22044605E-16F);
  }

  y = (x_tmp_size != 0);
  if (y) {
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub <= x_tmp_size - 1)) {
      if (!x_data[loop_ub]) {
        y = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
  }

  if (y) {
    loop_ub = *startIdx_size;
    reshapes[2].f1.size = *startIdx_size;
    for (i = 0; i < loop_ub; i++) {
      reshapes[2].f1.data[i] = startPoint_data[(startPoint_size[0] << 1) + i];
    }
  } else {
    loop_ub = *startIdx_size;
    x_size_idx_0 = *startIdx_size;
    for (i = 0; i < loop_ub; i++) {
      a0n_data[i] = startPoint_data[(startPoint_size[0] << 1) + i];
    }

    L_FrenentReferencePath_wrapToPi(a0n_data, &x_size_idx_0);
    loop_ub = *endIdx_size;
    for (i = 0; i < loop_ub; i++) {
      d_data[i] = endPoint_data[(endPoint_size[0] << 1) + i];
    }

    L_FrenentReferencePath_wrapToPi(d_data, &loop_ub);
    if (loop_ub == x_size_idx_0) {
      for (i = 0; i < loop_ub; i++) {
        d_data[i] -= a0n_data[i];
      }
    } else {
      LATC_Test_Calc_minus(d_data, &loop_ub, a0n_data, &x_size_idx_0);
    }

    L_FrenentReferencePath_wrapToPi(d_data, &loop_ub);
    if ((*s_size == *startIdx_size) && ((*s_size == 1 ? *startIdx_size : *s_size)
         == x_tmp_size) && (((*s_size == 1 ? *startIdx_size : *s_size) == 1 ?
          x_tmp_size : *s_size == 1 ? *startIdx_size : *s_size) == loop_ub) &&
        ((loop_ub == 1 ? (*s_size == 1 ? *startIdx_size : *s_size) == 1 ?
          x_tmp_size : *s_size == 1 ? *startIdx_size : *s_size : loop_ub) ==
         x_size_idx_0)) {
      reshapes[2].f1.size = x_size_idx_0;
      for (i = 0; i < x_size_idx_0; i++) {
        reshapes[2].f1.data[i] = (s_data[i] - startPoint_data[startPoint_size[0]
          * 5 + i]) / x_tmp_data[i] * d_data[i] + a0n_data[i];
      }
    } else {
      LAT_binary_expand_op_c03j54upnm(reshapes, a0n_data, &x_size_idx_0, d_data,
        &loop_ub, s_data, s_size, startPoint_data, startPoint_size,
        startIdx_size, x_tmp_data, &x_tmp_size);
    }

    L_FrenentReferencePath_wrapToPi(reshapes[2].f1.data, &reshapes[2].f1.size);
  }

  if ((loop_ub_0 == *startIdx_size) && (loop_ub_0 == *endIdx_size) &&
      ((loop_ub_0 == 1 ? *startIdx_size : loop_ub_0) == (loop_ub_0 == 1 ?
        *endIdx_size : loop_ub_0)) && (loop_ub_0 == *startIdx_size) &&
      (loop_ub_0 == *endIdx_size) && ((loop_ub_0 == 1 ? *startIdx_size :
        loop_ub_0) == (loop_ub_0 == 1 ? *endIdx_size : loop_ub_0)) && (loop_ub_0
       == *startIdx_size) && (loop_ub_0 == *endIdx_size) && ((loop_ub_0 == 1 ?
        *startIdx_size : loop_ub_0) == (loop_ub_0 == 1 ? *endIdx_size :
        loop_ub_0)) && (loop_ub_0 == *startIdx_size) && (loop_ub_0 ==
       *endIdx_size) && ((loop_ub_0 == 1 ? *startIdx_size : loop_ub_0) ==
                         (loop_ub_0 == 1 ? *endIdx_size : loop_ub_0))) {
    pathPoint_size[0] = loop_ub_0;
    pathPoint_size[1] = 6;
    for (i = 0; i < loop_ub_0; i++) {
      weight = weight_data[i];
      pathPoint_data[i] = (1.0F - weight) * startPoint_data[i] + weight *
        endPoint_data[i];
    }

    for (i = 0; i < loop_ub_0; i++) {
      weight = weight_data[i];
      pathPoint_data[i + pathPoint_size[0]] = (1.0F - weight) *
        startPoint_data[i + startPoint_size[0]] + endPoint_data[i +
        endPoint_size[0]] * weight;
    }

    loop_ub = reshapes[2].f1.size;
    for (i = 0; i < loop_ub; i++) {
      pathPoint_data[i + (pathPoint_size[0] << 1)] = reshapes[2].f1.data[i];
    }

    for (i = 0; i < loop_ub_0; i++) {
      weight = weight_data[i];
      pathPoint_data[i + pathPoint_size[0] * 3] =
        startPoint_data[startPoint_size[0] * 3 + i] * (1.0F - weight) +
        endPoint_data[endPoint_size[0] * 3 + i] * weight;
    }

    for (i = 0; i < loop_ub_0; i++) {
      weight = weight_data[i];
      pathPoint_data[i + (pathPoint_size[0] << 2)] = startPoint_data
        [(startPoint_size[0] << 2) + i] * (1.0F - weight) + endPoint_data
        [(endPoint_size[0] << 2) + i] * weight;
    }

    loop_ub = *s_size;
    for (i = 0; i < loop_ub; i++) {
      pathPoint_data[i + pathPoint_size[0] * 5] = s_data[i];
    }
  } else {
    LATC_binary_expand_op_c03j54upn(pathPoint_data, pathPoint_size, weight_data,
      &loop_ub_0, startPoint_data, startPoint_size, startIdx_size, endPoint_data,
      endPoint_size, endIdx_size, reshapes, s_data, s_size);
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static boolean_T LATC_Test_Calc_any(const boolean_T x[40])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 40)) {
    if (x[k]) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void TrajectoryGeneratorFrenet_Frene(TrajectoryGeneratorFrenet_LAT_T *obj,
  const real32_T initialState[6], real32_T arcLenOffsets, const real32_T
  LongTermState[2], const real32_T LaterlTermState[2], real32_T timeSpan,
  real32_T frenetTrajectory_Trajectory[240], real32_T frenetTrajectory_Times[40],
  real32_T frenetTrajectory_jerk[80], real32_T globalTrajectory_Trajectory[240],
  real32_T globalTrajectory_Times[40], real32_T *globalTrajectory_costs)
{
  FrenentReferencePath_LATC_Tes_T *b_obj;
  int32_T interpolatedPts_size[2];
  int32_T c_size_idx_0;
  int32_T d_k;
  int32_T i;
  real32_T interpolatedPts_data[240];
  real32_T result[120];
  real32_T sV[120];
  real32_T cosDeltaTheta[40];
  real32_T deltaTheta[40];
  real32_T ds[40];
  real32_T refCosTheta[40];
  real32_T refSinTheta[40];
  real32_T t[40];
  real32_T InitialState[6];
  real32_T TerminalState[6];
  real32_T longitudinalTrajectories[6];
  real32_T b_y;
  real32_T c_y;
  real32_T d_y;
  real32_T longitudinalTrajectories_0;
  real32_T longitudinalTrajectories_1;
  real32_T longitudinalTrajectories_2;
  real32_T longitudinalTrajectories_3;
  real32_T longitudinalTrajectories_4;
  real32_T longitudinalTrajectories_5;
  real32_T t_0;
  real32_T t_y;
  real32_T u_y;
  real32_T v_y_tmp;
  real32_T y;
  int8_T c_data[40];
  int8_T d_data[40];
  boolean_T b[40];
  boolean_T pos[40];
  boolean_T b_0;
  longitudinalTrajectories[0] = arcLenOffsets;
  longitudinalTrajectories[1] = LongTermState[0];
  longitudinalTrajectories[2] = LongTermState[1];
  longitudinalTrajectories[3] = 0.0F;
  longitudinalTrajectories[4] = LaterlTermState[0];
  longitudinalTrajectories[5] = LaterlTermState[1];
  for (d_k = 0; d_k < 6; d_k++) {
    InitialState[d_k] = initialState[d_k];
    TerminalState[d_k] = longitudinalTrajectories[d_k];
  }

  TrajectoryGeneratorFrenet_Quint(&InitialState[0], &TerminalState[0], timeSpan,
    longitudinalTrajectories);
  LATC_Test_Calc_linspace_n(timeSpan, t);
  for (i = 0; i < 3; i++) {
    switch (i) {
     case 0:
      longitudinalTrajectories_0 = longitudinalTrajectories[5];
      longitudinalTrajectories_1 = longitudinalTrajectories[4];
      longitudinalTrajectories_2 = longitudinalTrajectories[3];
      longitudinalTrajectories_3 = longitudinalTrajectories[2];
      longitudinalTrajectories_4 = longitudinalTrajectories[1];
      longitudinalTrajectories_5 = longitudinalTrajectories[0];
      for (d_k = 0; d_k < 40; d_k++) {
        t_0 = t[d_k];
        result[i + 3 * d_k] = ((((longitudinalTrajectories_0 * t_0 +
          longitudinalTrajectories_1) * t_0 + longitudinalTrajectories_2) * t_0
          + longitudinalTrajectories_3) * t_0 + longitudinalTrajectories_4) *
          t_0 + longitudinalTrajectories_5;
      }
      break;

     case 1:
      y = 5.0F * longitudinalTrajectories[5];
      b_y = 4.0F * longitudinalTrajectories[4];
      c_y = 3.0F * longitudinalTrajectories[3];
      d_y = 2.0F * longitudinalTrajectories[2];
      longitudinalTrajectories_0 = longitudinalTrajectories[1];
      for (d_k = 0; d_k < 40; d_k++) {
        t_0 = t[d_k];
        result[i + 3 * d_k] = (((y * t_0 + b_y) * t_0 + c_y) * t_0 + d_y) * t_0
          + longitudinalTrajectories_0;
      }
      break;

     default:
      y = 20.0F * longitudinalTrajectories[5];
      b_y = 12.0F * longitudinalTrajectories[4];
      c_y = 6.0F * longitudinalTrajectories[3];
      d_y = 2.0F * longitudinalTrajectories[2];
      for (d_k = 0; d_k < 40; d_k++) {
        t_0 = t[d_k];
        result[i + 3 * d_k] = ((y * t_0 + b_y) * t_0 + c_y) * t_0 + d_y;
      }
      break;
    }

    for (d_k = 0; d_k < 40; d_k++) {
      sV[d_k + 40 * i] = result[3 * d_k + i];
    }
  }

  b_y = 60.0F * longitudinalTrajectories[5];
  c_y = 24.0F * longitudinalTrajectories[4];
  d_y = 6.0F * longitudinalTrajectories[3];
  TrajectoryGeneratorFrenet_Quint(&InitialState[3], &TerminalState[3], sV[39] -
    sV[0], longitudinalTrajectories);
  t_0 = sV[0];
  for (d_k = 0; d_k < 40; d_k++) {
    ds[d_k] = sV[d_k] - t_0;
  }

  t_y = 60.0F * longitudinalTrajectories[5];
  u_y = 24.0F * longitudinalTrajectories[4];
  v_y_tmp = 6.0F * longitudinalTrajectories[3];
  for (i = 0; i < 3; i++) {
    switch (i) {
     case 0:
      longitudinalTrajectories_0 = longitudinalTrajectories[5];
      longitudinalTrajectories_1 = longitudinalTrajectories[4];
      longitudinalTrajectories_2 = longitudinalTrajectories[3];
      longitudinalTrajectories_3 = longitudinalTrajectories[2];
      longitudinalTrajectories_4 = longitudinalTrajectories[1];
      longitudinalTrajectories_5 = longitudinalTrajectories[0];
      for (d_k = 0; d_k < 40; d_k++) {
        y = ds[d_k];
        result[i + 3 * d_k] = ((((longitudinalTrajectories_0 * y +
          longitudinalTrajectories_1) * y + longitudinalTrajectories_2) * y +
          longitudinalTrajectories_3) * y + longitudinalTrajectories_4) * y +
          longitudinalTrajectories_5;
      }
      break;

     case 1:
      t_0 = 5.0F * longitudinalTrajectories[5];
      longitudinalTrajectories_1 = 4.0F * longitudinalTrajectories[4];
      longitudinalTrajectories_2 = 3.0F * longitudinalTrajectories[3];
      longitudinalTrajectories_3 = 2.0F * longitudinalTrajectories[2];
      longitudinalTrajectories_0 = longitudinalTrajectories[1];
      for (d_k = 0; d_k < 40; d_k++) {
        y = ds[d_k];
        result[i + 3 * d_k] = (((t_0 * y + longitudinalTrajectories_1) * y +
          longitudinalTrajectories_2) * y + longitudinalTrajectories_3) * y +
          longitudinalTrajectories_0;
      }
      break;

     default:
      t_0 = 20.0F * longitudinalTrajectories[5];
      longitudinalTrajectories_0 = 12.0F * longitudinalTrajectories[4];
      longitudinalTrajectories_2 = 2.0F * longitudinalTrajectories[2];
      for (d_k = 0; d_k < 40; d_k++) {
        y = ds[d_k];
        result[i + 3 * d_k] = ((t_0 * y + longitudinalTrajectories_0) * y +
          v_y_tmp) * y + longitudinalTrajectories_2;
      }
      break;
    }

    for (d_k = 0; d_k < 40; d_k++) {
      frenetTrajectory_Trajectory[d_k + 40 * i] = sV[40 * i + d_k];
      frenetTrajectory_Trajectory[d_k + 40 * (i + 3)] = result[3 * d_k + i];
    }
  }

  *globalTrajectory_costs = 0.0F;
  for (i = 0; i < 40; i++) {
    y = ds[i];
    t_0 = t[i];
    frenetTrajectory_Times[i] = t_0;
    frenetTrajectory_jerk[i] = (b_y * t_0 + c_y) * t_0 + d_y;
    frenetTrajectory_jerk[i + 40] = (t_y * y + u_y) * y + v_y_tmp;
    globalTrajectory_Times[i] = t_0;
  }

  b_obj = obj->ReferencePath;
  t_0 = b_obj->DiscretizationDistance;
  t_0 = 1.0F / t_0;
  for (d_k = 0; d_k < 40; d_k++) {
    t[d_k] = (real32_T)floor(frenetTrajectory_Trajectory[d_k] * t_0) + 1.0F;
  }

  for (d_k = 0; d_k < 6; d_k++) {
    longitudinalTrajectories[d_k] = b_obj->PathPoints[100 * d_k + 99];
  }

  LATC_Test_Calc_repmat(longitudinalTrajectories, globalTrajectory_Trajectory);
  for (i = 0; i < 40; i++) {
    pos[i] = !(t[i] <= 0.0F);
  }

  t_0 = b_obj->PathPoints[599];
  i = 0;
  for (d_k = 0; d_k < 40; d_k++) {
    b_0 = (frenetTrajectory_Trajectory[d_k] < t_0);
    if (pos[d_k] && b_0) {
      i++;
    }

    b[d_k] = b_0;
  }

  if (i != 0) {
    i = 0;
    for (d_k = 0; d_k < 40; d_k++) {
      if (pos[d_k] && b[d_k]) {
        i++;
      }
    }

    c_size_idx_0 = i;
    i = 0;
    for (d_k = 0; d_k < 40; d_k++) {
      if (pos[d_k] && b[d_k]) {
        c_data[i] = (int8_T)(d_k + 1);
        i++;
      }
    }

    for (d_k = 0; d_k < c_size_idx_0; d_k++) {
      ds[d_k] = t[c_data[d_k] - 1];
    }

    for (d_k = 0; d_k < c_size_idx_0; d_k++) {
      deltaTheta[d_k] = t[c_data[d_k] - 1] + 1.0F;
    }

    for (d_k = 0; d_k < c_size_idx_0; d_k++) {
      t[d_k] = frenetTrajectory_Trajectory[c_data[d_k] - 1];
    }

    FrenentReferencePath_getClose_h(b_obj->PathPoints, ds, &c_size_idx_0,
      deltaTheta, &c_size_idx_0, t, &c_size_idx_0, interpolatedPts_data,
      interpolatedPts_size);
    i = 0;
    for (d_k = 0; d_k < 40; d_k++) {
      if (pos[d_k] && b[d_k]) {
        d_data[i] = (int8_T)(d_k + 1);
        i++;
      }
    }

    c_size_idx_0 = interpolatedPts_size[0];
    for (d_k = 0; d_k < 6; d_k++) {
      for (i = 0; i < c_size_idx_0; i++) {
        globalTrajectory_Trajectory[(d_data[i] + 40 * d_k) - 1] =
          interpolatedPts_data[interpolatedPts_size[0] * d_k + i];
      }
    }
  }

  for (d_k = 0; d_k < 40; d_k++) {
    t_0 = globalTrajectory_Trajectory[d_k + 80];
    ds[d_k] = t_0;
    pos[d_k] = ((real32_T)fabs(t_0) > 3.1415926535897931);
  }

  if (LATC_Test_Calc_any(pos)) {
    for (d_k = 0; d_k < 40; d_k++) {
      t_0 = globalTrajectory_Trajectory[d_k + 80] + 3.14159274F;
      y = LATC_Test_Calc_mod(t_0);
      if ((y == 0.0F) && (t_0 > 0.0F)) {
        y = 6.28318548F;
      }

      ds[d_k] = y - 3.14159274F;
    }
  }

  for (d_k = 0; d_k < 40; d_k++) {
    y = ds[d_k];
    b_y = 1.0F - globalTrajectory_Trajectory[d_k + 120] *
      frenetTrajectory_Trajectory[d_k + 120];
    c_y = rt_atan2f_snf(frenetTrajectory_Trajectory[d_k + 160], b_y);
    cosDeltaTheta[d_k] = (real32_T)cos(c_y);
    c_y = (c_y + y) + 6.28318548F;
    pos[d_k] = ((real32_T)fabs(c_y) > 3.1415926535897931);
    refCosTheta[d_k] = (real32_T)cos(y);
    refSinTheta[d_k] = (real32_T)sin(y);
    t[d_k] = b_y;
    deltaTheta[d_k] = c_y;
  }

  if (LATC_Test_Calc_any(pos)) {
    for (d_k = 0; d_k < 40; d_k++) {
      c_y = deltaTheta[d_k];
      t_0 = LATC_Test_Calc_mod(c_y + 3.14159274F);
      if ((t_0 == 0.0F) && (c_y + 3.14159274F > 0.0F)) {
        t_0 = 6.28318548F;
      }

      deltaTheta[d_k] = t_0 - 3.14159274F;
    }
  }

  for (d_k = 0; d_k < 40; d_k++) {
    b_y = t[d_k];
    c_y = cosDeltaTheta[d_k];
    d_y = frenetTrajectory_Trajectory[d_k + 160];
    t_y = globalTrajectory_Trajectory[d_k + 120];
    v_y_tmp = frenetTrajectory_Trajectory[d_k + 120];
    t_0 = globalTrajectory_Trajectory[d_k + 160] * v_y_tmp + t_y * d_y;
    y = ((d_y / b_y * t_0 + frenetTrajectory_Trajectory[d_k + 200]) * (c_y * c_y)
         / b_y + t_y) * c_y / b_y;
    u_y = b_y / c_y;
    interpolatedPts_data[d_k] = (globalTrajectory_Trajectory[d_k] - v_y_tmp *
      refSinTheta[d_k]) * 1.0E+8F;
    interpolatedPts_data[d_k + 40] = (v_y_tmp * refCosTheta[d_k] +
      globalTrajectory_Trajectory[d_k + 40]) * 1.0E+8F;
    interpolatedPts_data[d_k + 80] = deltaTheta[d_k] * 1.0E+8F;
    interpolatedPts_data[d_k + 120] = y * 1.0E+8F;
    v_y_tmp = frenetTrajectory_Trajectory[d_k + 40];
    interpolatedPts_data[d_k + 160] = v_y_tmp * u_y * 1.0E+8F;
    interpolatedPts_data[d_k + 200] = (((u_y * y - t_y) * d_y - t_0) * (v_y_tmp *
      v_y_tmp / c_y) + frenetTrajectory_Trajectory[d_k + 80] * b_y / c_y) *
      1.0E+8F;
  }

  for (d_k = 0; d_k < 240; d_k++) {
    globalTrajectory_Trajectory[d_k] = rt_roundf_snf(interpolatedPts_data[d_k]) /
      1.0E+8F;
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void LATC_Test_Calc_power(const real32_T a[40], real32_T y[40])
{
  int32_T k;
  real32_T a_0;
  for (k = 0; k < 40; k++) {
    a_0 = a[k];
    y[k] = a_0 * a_0;
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void LATC_Test_Calc_diff_k(const real32_T x[40], real32_T y[39])
{
  int32_T m;
  real32_T tmp2;
  real32_T work;
  work = x[0];
  for (m = 0; m < 39; m++) {
    tmp2 = work;
    work = x[m + 1];
    y[m] = work - tmp2;
  }
}

/* Function for MATLAB Function: '<S42>/FrenetTrajectory' */
static void LATC_Test_Calc_eml_find(const boolean_T x[40], int32_T i_data[],
  int32_T *i_size)
{
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  idx = 0;
  *i_size = 1;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii < 40)) {
    if (x[ii]) {
      idx = 1;
      i_data[0] = ii + 1;
      exitg1 = true;
    } else {
      ii++;
    }
  }

  if (idx == 0) {
    *i_size = 0;
  }
}

/* Model output function */
static void LATC_Test_Calc_output(void)
{
  FrenentReferencePath_LATC_Tes_T referencePath;
  Spline_LATC_Test_Calc_T objSpline_sx;
  Spline_LATC_Test_Calc_T objSpline_sy;
  TrajectoryGeneratorFrenet_LAT_T Frenet_traj_obj;
  real_T tmp[100];
  real_T objSpline_s[27];
  real_T x[26];
  real_T rtb_Product;
  int32_T c_ix;
  int32_T d_0;
  int32_T d_i;
  int32_T ijA;
  int32_T ix;
  int32_T jA;
  int32_T jj;
  int32_T jy;
  real32_T frenetTrajectory_Trajectory[240];
  real32_T globalTrajectory_Trajectory[240];
  real32_T s[100];
  real32_T expl_temp_0[80];
  real32_T waypoints[54];
  real32_T expl_temp[40];
  real32_T globalTrajectory_Times[40];
  real32_T globalTrajectory_Trajectory_0[40];
  real32_T c_x[39];
  real32_T tmp_0[39];
  real32_T tmp_1[39];
  real32_T c_dx[26];
  real32_T c_dy[26];
  real32_T AT[16];
  real32_T P[16];
  real32_T P_next[16];
  real32_T P_next_tmp[16];
  real32_T P_next_tmp_0[16];
  real32_T P_next_tmp_1[16];
  real32_T P_next_tmp_2[16];
  real32_T X[16];
  real32_T lqr_params_Q[16];
  real32_T Px[15];
  real32_T Py[15];
  real32_T initFrenetState[6];
  real32_T pathend[6];
  real32_T pathend_0[6];
  real32_T rtb_TappedDelay1[5];
  real32_T b[4];
  real32_T g[4];
  real32_T matrix_k[4];
  real32_T d;
  real32_T dddy;
  real32_T ddx;
  real32_T ddy;
  real32_T dx;
  real32_T dy;
  real32_T norm_square;
  real32_T rtb_Merge;
  real32_T rtb_Merge1;
  real32_T rtb_Sum;
  uint32_T tmp_2;
  int8_T ipiv[4];
  int8_T ipiv_0;
  uint8_T b_0;
  boolean_T globalTrajectory_Trajectory_1[40];
  boolean_T h_y;
  static const uint8_T b_1[27] = { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U,
    11U, 12U, 13U, 14U, 15U, 16U, 17U, 18U, 19U, 20U, 40U, 60U, 80U, 100U, 120U,
    140U };

  static const real32_T c[15] = { 1.5F, 2.0F, 2.5F, 3.0F, 3.6F, 4.2F, 5.0F, 5.8F,
    6.4F, 7.0F, 7.8F, 8.6F, 9.5F, 10.4F, 11.4F };

  static const real32_T e[16] = { 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, -149.514099F,
    0.0F, 0.0F, 0.0F, 149.514099F, 0.0F, 0.0F, 0.0F, -218.290573F, 1.0F,
    -149.514084F };

  static const int8_T f[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static const real32_T B[4] = { 0.0F, 1.49514091F, 0.0F, 1.02406907F };

  boolean_T exitg1;
  boolean_T exitg2;

  /* S-Function (cnpenvin): '<S11>/S-Function' */

  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S12>/S-Function' */

  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
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

  /* S-Function (cnpenvin): '<S7>/S-Function' */

  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
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

  /* S-Function (cnpenvin): '<S8>/S-Function' */

  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_desLaneA1);
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S9>/S-Function' */

  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_desLaneA2);
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S10>/S-Function' */

  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    ssSetOutputPortSignal(rts, 0, &LCS_IN_desLaneA3);
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S15>/S-Function' */

  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S13>/S-Function' */

  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnOutputs(rts,0);
  }

  /* MATLAB Function: '<S44>/MATLAB Function1' incorporates:
   *  Constant: '<S44>/Constant1'
   *  UnitDelay: '<S44>/Unit Delay'
   *  UnitDelay: '<S44>/Unit Delay1'
   *  UnitDelay: '<S44>/Unit Delay2'
   */
  tmp_2 = LATC_Test_Calc_DW.UnitDelay_DSTATE_d + 1U;
  if (LATC_Test_Calc_DW.UnitDelay_DSTATE_d + 1U > 65535U) {
    tmp_2 = 65535U;
  }

  if ((uint16_T)tmp_2 <= P_LCS_LCC_StateActiveDelaytime) {
    LATC_Test_Calc_B.Count = (uint16_T)tmp_2;
  } else {
    LATC_Test_Calc_B.Count = P_LCS_LCC_StateActiveDelaytime;
  }

  if (LATC_Test_Calc_B.Count == P_LCS_LCC_StateActiveDelaytime) {
    LATC_Test_Calc_B.Flg = 0U;
  } else {
    LATC_Test_Calc_B.Flg = LATC_Test_Calc_DW.UnitDelay1_DSTATE;
  }

  if ((LATC_Test_Calc_B.SFunction_o1_oa == 1) &&
      (LATC_Test_Calc_DW.UnitDelay2_DSTATE == 0)) {
    LATC_Test_Calc_B.Count = 0U;
    LATC_Test_Calc_B.Flg = 1U;
  }

  /* End of MATLAB Function: '<S44>/MATLAB Function1' */

  /* Product: '<S44>/Product' incorporates:
   *  Constant: '<S44>/Constant3'
   */
  rtb_Product = 0.02 * (real_T)LATC_Test_Calc_B.Count;

  /* SwitchCase: '<S44>/Switch Case' */
  if (LATC_Test_Calc_B.Flg == 1) {
    /* Outputs for IfAction SubSystem: '<S44>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    /* Lookup_n-D: '<S49>/ActiveAyDtLimit_TBL' incorporates:
     *  Product: '<S44>/Product'
     */
    rtb_Merge1 = look2_iu8dtf_binlcapw(LATC_Test_Calc_B.Flg, rtb_Product,
      P_LCS_StateActiveFlg_BP, P_LCS_StateActive_HoldTime_BP,
      P_LCS_LCC_StateActiv_AyDtLimit, LATC_Test_Calc_ConstP.pooled14, 5U);

    /* Lookup_n-D: '<S49>/ActivePreviewT_TBL' incorporates:
     *  Product: '<S44>/Product'
     */
    rtb_Merge = look2_iu8dtf_binlcapw(LATC_Test_Calc_B.Flg, rtb_Product,
      P_LCS_StateActiveFlg_BP, P_LCS_StateActive_HoldTime_BP,
      LATC_Test_Calc_ConstP.ActivePreviewT_TBL_tableData,
      LATC_Test_Calc_ConstP.pooled14, 5U);

    /* End of Outputs for SubSystem: '<S44>/Switch Case Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S44>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    /* SignalConversion generated from: '<S50>/PreviewT' incorporates:
     *  Constant: '<S50>/Constant'
     */
    rtb_Merge = 10.0F;

    /* SignalConversion generated from: '<S50>/AyDtLimit' incorporates:
     *  Constant: '<S50>/Constant1'
     */
    rtb_Merge1 = 10.0F;

    /* End of Outputs for SubSystem: '<S44>/Switch Case Action Subsystem1' */
  }

  /* End of SwitchCase: '<S44>/Switch Case' */

  /* Sum: '<S45>/Sum5' incorporates:
   *  Abs: '<S44>/Abs4'
   *  Constant: '<S44>/Constant20'
   *  Constant: '<S44>/Constant28'
   *  Constant: '<S45>/Weight//N3'
   *  MATLAB Function: '<S44>/MATLAB Function'
   *  Memory: '<S45>/Memory2'
   *  Product: '<S45>/Product1'
   *  Product: '<S45>/Product4'
   *  Sum: '<S45>/Sum4'
   */
  LCS_LCC_Preview_Curve = ((real32_T)fabs(6.0F * LCS_IN_desLaneA3 *
    (LATC_Test_Calc_B.SFunction_o1_k * P_LCS_LCC_PreView_s) + 2.0F *
    LCS_IN_desLaneA2) - LATC_Test_Calc_DW.Memory2_PreviousInput_n) * (0.02F /
    P_LCS_A2S_FliterTime) + LATC_Test_Calc_DW.Memory2_PreviousInput_n;

  /* Lookup_n-D: '<S44>/predis_ayFac1' incorporates:
   *  Sum: '<S45>/Sum5'
   */
  LCS_LCC_Preview_CurveFac = look1_iflf_binlcapw(LCS_LCC_Preview_Curve,
    P_LCS_A2_Curve_BP, P_LCS_LCC_PreViewCurve_Fac, 9U);

  /* Sum: '<Root>/Sum' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Gain: '<Root>/Gain3'
   *  Gain: '<Root>/Gain4'
   */
  rtb_Sum = 3.6F * LATC_Test_Calc_B.SFunction_o1_k * 1.03F + 1.3F;

  /* Lookup_n-D: '<S44>/2-D Lookup Table2' incorporates:
   *  Abs: '<S44>/Abs1'
   *  Sum: '<Root>/Sum'
   */
  LCS_LCC_PreviewFac = look2_iflf_binlcapw((real32_T)fabs
    (LATC_Test_Calc_B.SFunction_o1_ph), rtb_Sum, P_LCS_A0_Dis_BP,
    P_LCS_preDis_spd, P_LCS_LCC_PreView_Fac,
    LATC_Test_Calc_ConstP.uDLookupTable2_maxIndex, 19U);

  /* Product: '<S44>/Product2' incorporates:
   *  Constant: '<S44>/Constant14'
   *  Lookup_n-D: '<S44>/Preview_T_TB'
   *  Sum: '<Root>/Sum'
   *  Sum: '<S44>/Add2'
   */
  LCS_LCC_FinalPreviewT = LCS_LCC_Preview_CurveFac * look1_iflf_binlcapw(rtb_Sum,
    P_LCS_preDis_spd, P_LCS_LCC_PreViewT, 15U) * (LCS_LCC_PreviewFac + 1.0F);

  /* MinMax: '<S44>/Min' */
  if ((rtb_Merge <= LCS_LCC_FinalPreviewT) || rtIsNaNF(LCS_LCC_FinalPreviewT)) {
    /* Product: '<S44>/Product2' incorporates:
     *  MinMax: '<S44>/Min'
     */
    LCS_LCC_FinalPreviewT = rtb_Merge;
  }

  /* End of MinMax: '<S44>/Min' */

  /* LookupNDDirect: '<S44>/Direct Lookup Table (n-D)1' incorporates:
   *  S-Function (cnpenvin): '<S13>/S-Function'
   *
   * About '<S44>/Direct Lookup Table (n-D)1':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  if (LATC_Test_Calc_B.SFunction_o1_oa <= 9) {
    b_0 = LATC_Test_Calc_B.SFunction_o1_oa;
  } else {
    b_0 = 9U;
  }

  /* LookupNDDirect: '<S44>/Direct Lookup Table (n-D)1'
   *
   * About '<S44>/Direct Lookup Table (n-D)1':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  LCS_LCType = LATC_Test_Calc_ConstP.DirectLookupTablenD1_table[b_0];

  /* MultiPortSwitch: '<S44>/Multiport Switch1' */
  switch (LCS_LCType) {
   case 0:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Constant: '<S44>/Constant'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     */
    LCS_LCC_AyDtLimit = 2.0F;
    break;

   case 1:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_LCK_AyDtLimit_TBL, 15U);

    /* MinMax: '<S44>/Min1' */
    if ((rtb_Merge1 <= LCS_LCC_AyDtLimit) || rtIsNaNF(LCS_LCC_AyDtLimit)) {
      /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
       *  MultiPortSwitch: '<S44>/Multiport Switch1'
       */
      LCS_LCC_AyDtLimit = rtb_Merge1;
    }

    /* End of MinMax: '<S44>/Min1' */
    break;

   case 2:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Lookup_n-D: '<S44>/AyDtLimit_TB1'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_LCK_AyDtLimit_TBL, 15U);
    break;

   case 3:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Lookup_n-D: '<S44>/AyDtLimit_TB2'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_LC_Normal_AyDtLimit_TBL, 15U);
    break;

   case 4:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Lookup_n-D: '<S44>/AyDtLimit_TB3'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_LKA_AyDtLimit_TBL, 15U);
    break;

   case 5:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Lookup_n-D: '<S44>/AyDtLimit_TB4'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_ELK_AyDtLimit_TBL, 15U);
    break;

   case 6:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Lookup_n-D: '<S44>/AyDtLimit_TB5'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_ESS_AyDtLimit_TBL, 15U);
    break;

   case 7:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Lookup_n-D: '<S44>/AyDtLimit_TB6'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_Eco_AyDtLimit_TBL, 15U);
    break;

   case 8:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Lookup_n-D: '<S44>/AyDtLimit_TB7'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_Sport_AyDtLimit_TBL, 15U);
    break;

   default:
    /* Lookup_n-D: '<S44>/AyDtLimit_TB' incorporates:
     *  Lookup_n-D: '<S44>/AyDtLimit_TB8'
     *  MultiPortSwitch: '<S44>/Multiport Switch1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_AyDtLimit = look1_iflf_binlcapw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_LC_AyDtLimit_TBL, 15U);
    break;
  }

  /* End of MultiPortSwitch: '<S44>/Multiport Switch1' */

  /* Product: '<S44>/Product1' incorporates:
   *  Lookup_n-D: '<S44>/Plan_Py_Fac'
   *  Lookup_n-D: '<S44>/predis_ayFac2'
   *  Sum: '<Root>/Sum'
   *  Sum: '<S45>/Sum5'
   */
  rtb_Merge = look1_iflf_binlcapw(LCS_LCC_Preview_Curve, P_LCS_A2_Curve_BP,
    P_LCS_LCC_PreCur_Min_Plan_Dis_Fac, 9U) * look1_iflf_binlcapw(rtb_Sum,
    P_LCS_DeltaEps_SpdBp, P_LCS_LCC_Min_Plan_Dis, 15U);

  /* MATLAB Function: '<S42>/FrenetTrajectory' */
  for (d_i = 0; d_i < 27; d_i++) {
    b_0 = b_1[d_i];
    rtb_Merge1 = b_1[d_i];
    waypoints[d_i] = -(((LCS_IN_desLaneA1 * rtb_Merge1 +
                         LATC_Test_Calc_B.SFunction_o1_ph) + (real32_T)(int16_T)
                        (b_0 * b_0) * LCS_IN_desLaneA2) + LCS_IN_desLaneA3 *
                       rt_powf_snf(rtb_Merge1, 3.0F));
    waypoints[d_i + 27] = rtb_Merge1;
  }

  LATC_Test_Calc_diff(&waypoints[0], c_dx);
  LATC_Test_Calc_diff(&waypoints[27], c_dy);
  for (d_i = 0; d_i < 26; d_i++) {
    rtb_Merge1 = c_dy[d_i];
    dx = c_dx[d_i];
    x[d_i] = (real32_T)sqrt(dx * dx + rtb_Merge1 * rtb_Merge1);
  }

  for (jy = 0; jy < 25; jy++) {
    x[jy + 1] += x[jy];
  }

  objSpline_s[0] = 0.0;
  memcpy(&objSpline_s[1], &x[0], 26U * sizeof(real_T));
  LATC_Test_Calc_Spline_Spline(&objSpline_sx, objSpline_s, &waypoints[0]);
  LATC_Test_Calc_Spline_Spline(&objSpline_sy, objSpline_s, &waypoints[27]);
  LATC_Test_Calc_linspace(objSpline_s[26], tmp);
  for (d_i = 0; d_i < 100; d_i++) {
    s[d_i] = (real32_T)tmp[d_i];
  }

  referencePath.DiscretizationDistance = s[2] - s[1];
  for (d_i = 0; d_i < 100; d_i++) {
    rtb_Merge1 = s[d_i];
    referencePath.PathPoints[d_i] = LATC_Test_Calc_Spline_calc(&objSpline_sx,
      rtb_Merge1);
    referencePath.PathPoints[d_i + 100] = LATC_Test_Calc_Spline_calc
      (&objSpline_sy, rtb_Merge1);
    dx = LATC_Test_Calc_Spline_calcd(&objSpline_sx, rtb_Merge1);
    ddx = LATC_Test_Calc_Spline_calcd(&objSpline_sy, rtb_Merge1);
    referencePath.PathPoints[d_i + 200] = rt_atan2f_snf(ddx, dx);
    dx = LATC_Test_Calc_Spline_calcd(&objSpline_sx, rtb_Merge1);
    ddx = LATC_Test_Calc_Spline_calcdd(&objSpline_sx, rtb_Merge1);
    dy = LATC_Test_Calc_Spline_calcd(&objSpline_sy, rtb_Merge1);
    ddy = LATC_Test_Calc_Spline_calcdd(&objSpline_sy, rtb_Merge1);
    norm_square = dx * dx + dy * dy;
    referencePath.PathPoints[d_i + 300] = (ddy * dx - ddx * dy) / ((real32_T)
      sqrt(norm_square) * norm_square);
    dx = LATC_Test_Calc_Spline_calcd(&objSpline_sx, rtb_Merge1);
    ddx = LATC_Test_Calc_Spline_calcdd(&objSpline_sx, rtb_Merge1);
    dy = LATC_Test_Calc_Spline_calcddd(&objSpline_sx, rtb_Merge1);
    ddy = LATC_Test_Calc_Spline_calcd(&objSpline_sy, rtb_Merge1);
    norm_square = LATC_Test_Calc_Spline_calcdd(&objSpline_sy, rtb_Merge1);
    dddy = LATC_Test_Calc_Spline_calcddd(&objSpline_sy, rtb_Merge1);
    d = dx * dx + ddy * ddy;
    referencePath.PathPoints[d_i + 400] = ((dx * dddy - ddy * dy) * d - (dx *
      norm_square - ddy * ddx) * 3.0F * (dx * ddx + ddy * norm_square)) / (d * d
      * d);
    referencePath.PathPoints[d_i + 500] = rtb_Merge1;
  }

  pathend[0] = 0.0F;
  pathend[1] = 0.0F;
  pathend[2] = 1.57079637F;
  pathend[3] = 0.0F;
  pathend[4] = LATC_Test_Calc_B.SFunction_o1_k;
  pathend[5] = 0.0F;
  FrenentReferencePath_global2fre(&referencePath, pathend, initFrenetState);
  if (LATC_Test_Calc_B.SFunction_o1_k >= 5.0F) {
    rtb_Merge1 = LATC_Test_Calc_B.SFunction_o1_k;
  } else {
    rtb_Merge1 = 5.0F;
  }

  for (d_i = 0; d_i < 15; d_i++) {
    dx = rtb_Merge1 * c[d_i];
    Py[d_i] = dx;
    Px[d_i] = -(((dx * dx * LCS_IN_desLaneA2 + LCS_IN_desLaneA3 * rt_powf_snf(dx,
      3.0F)) + LCS_IN_desLaneA1 * dx) + LATC_Test_Calc_B.SFunction_o1_ph);
  }

  Frenet_traj_obj.ReferencePath = &referencePath;
  jj = 1;
  jy = 0;
  exitg1 = false;
  while ((!exitg1) && (jy < 15)) {
    jj = jy + 1;
    FrenentReferencePath_interpolat(&referencePath, rt_roundf_snf((real32_T)sqrt
      (Px[jy] * Px[jy] + Py[jy] * Py[jy]) * 1.05F), pathend);
    pathend_0[0] = pathend[0];
    pathend_0[1] = pathend[1];
    pathend_0[2] = pathend[2];
    pathend_0[3] = pathend[3];
    pathend_0[4] = LATC_Test_Calc_B.SFunction_o1_k;
    pathend_0[5] = 0.0F;
    FrenentReferencePath_global2fre(&referencePath, pathend_0, pathend);
    rtb_Merge1 = (LATC_Test_Calc_B.SFunction_o1_k +
                  LATC_Test_Calc_B.SFunction_o1_k) * 0.5F;
    if ((1.0F >= rtb_Merge1) || rtIsNaNF(rtb_Merge1)) {
      rtb_Merge1 = 1.0F;
    }

    TrajectoryGeneratorFrenet_Frene(&Frenet_traj_obj, initFrenetState, pathend[0],
      &pathend[1], &pathend[4], rt_roundf_snf(1.05F * (real32_T)sqrt(Px[jy] *
      Px[jy] + Py[jy] * Py[jy]) / rtb_Merge1), frenetTrajectory_Trajectory,
      expl_temp, expl_temp_0, globalTrajectory_Trajectory,
      globalTrajectory_Times, &dx);
    LATC_Test_Calc_power(&globalTrajectory_Trajectory[160], expl_temp);
    for (d_i = 0; d_i < 40; d_i++) {
      globalTrajectory_Trajectory_0[d_i] = globalTrajectory_Trajectory[d_i + 120]
        * expl_temp[d_i];
    }

    LATC_Test_Calc_diff_k(globalTrajectory_Trajectory_0, tmp_0);
    LATC_Test_Calc_diff_k(globalTrajectory_Times, tmp_1);
    for (d_i = 0; d_i < 39; d_i++) {
      c_x[d_i] = (real32_T)fabs(tmp_0[d_i] / tmp_1[d_i]);
    }

    h_y = true;
    d_i = 0;
    exitg2 = false;
    while ((!exitg2) && (d_i < 39)) {
      if (!(c_x[d_i] < LCS_LCC_AyDtLimit)) {
        h_y = false;
        exitg2 = true;
      } else {
        d_i++;
      }
    }

    if (h_y && (frenetTrajectory_Trajectory[39] > rtb_Merge)) {
      exitg1 = true;
    } else {
      jy++;
    }
  }

  rtb_Merge1 = LCS_LCC_FinalPreviewT * LATC_Test_Calc_B.SFunction_o1_k;
  rtb_Merge = (real32_T)fabs(globalTrajectory_Trajectory[79] -
    globalTrajectory_Trajectory[40]) / 40.0F * 5.0F + rtb_Merge1;
  for (d_i = 0; d_i < 40; d_i++) {
    dx = globalTrajectory_Trajectory[d_i + 40];
    LCS_LCC_PlanX[d_i] = dx;
    LCS_LCC_PlanY[d_i] = globalTrajectory_Trajectory[d_i];
    LCS_LCC_PlanTheta[d_i] = globalTrajectory_Trajectory[d_i + 80];
    globalTrajectory_Trajectory_1[d_i] = ((dx >= rtb_Merge1) && (dx <= rtb_Merge));
  }

  LATC_Test_Calc_eml_find(globalTrajectory_Trajectory_1, &jA, &d_i);
  if (d_i == 0) {
    d_i = 1;
  } else {
    d_i = jA - 1;
  }

  LCS_LCC_ref_curve = globalTrajectory_Trajectory[d_i + 120];
  rtb_Merge1 = 1.0F / (1.0F / LCS_LCC_ref_curve) *
    LATC_Test_Calc_B.SFunction_o1_k;
  if (rtb_Merge1 < 0.01) {
    rtb_Merge1 = 0.0F;
  }

  LCS_LCC_PlanIdex = d_i + 1;
  LCS_LCC_PreviewX = globalTrajectory_Trajectory[d_i + 40];
  LCS_LCC_PreviewY = globalTrajectory_Trajectory[d_i];
  LCS_LCC_PreviewTheta = globalTrajectory_Trajectory[d_i + 80];
  LCS_LCC_Later_error = (0.0F - LCS_LCC_PreviewX) * (real32_T)cos
    (LCS_LCC_PreviewTheta) - (0.0F - globalTrajectory_Trajectory[d_i]) *
    (real32_T)sin(LCS_LCC_PreviewTheta);
  LCS_LCC_Later_error_rate = (real32_T)sin(1.57079637F - LCS_LCC_PreviewTheta) *
    LATC_Test_Calc_B.SFunction_o1_k;
  rtb_Product = 1.57079637F - globalTrajectory_Trajectory[d_i + 80];
  if (rtb_Product > 3.1415926535897931) {
    LCS_LCC_heading_error = (1.57079637F - globalTrajectory_Trajectory[d_i + 80])
      - 6.28318548F;
  } else if (rtb_Product < -3.1415926535897931) {
    LCS_LCC_heading_error = (1.57079637F - globalTrajectory_Trajectory[d_i + 80])
      + 6.28318548F;
  } else {
    LCS_LCC_heading_error = 1.57079637F - globalTrajectory_Trajectory[d_i + 80];
  }

  LCS_LCC_heading_error_rate = LATC_Test_Calc_B.SFunction_o1_b - rtb_Merge1;
  LCS_LCC_NumTraj = jj;

  /* End of MATLAB Function: '<S42>/FrenetTrajectory' */
  for (jj = 0; jj < 40; jj++) {
    /* DataTypeConversion: '<S22>/Data Type Conversion' */
    LATC_Test_Calc_B.DataTypeConversion[jj] = LCS_LCC_PlanY[jj];
  }

  /* S-Function (cnpenvin): '<S5>/S-Function' */

  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S6>/S-Function' */

  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S4>/S-Function' */

  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* Sum: '<S16>/Sum5' incorporates:
   *  Constant: '<S16>/Weight//N3'
   *  Memory: '<S16>/Memory2'
   *  Product: '<S16>/Product1'
   *  Product: '<S16>/Product4'
   *  Sum: '<S16>/Sum4'
   */
  LATC_Test_Calc_B.Sum5 = 0.02F / LATC_Test_Calc_B.SFunction_o1_o *
    (LCS_LCC_ref_curve - LATC_Test_Calc_DW.Memory2_PreviousInput) +
    LATC_Test_Calc_DW.Memory2_PreviousInput;

  /* Sum: '<S17>/Sum5' incorporates:
   *  Constant: '<S17>/Weight//N3'
   *  Memory: '<S17>/Memory2'
   *  Product: '<S17>/Product1'
   *  Product: '<S17>/Product4'
   *  Sum: '<S17>/Sum4'
   */
  LATC_Test_Calc_B.Sum5_l = 0.02F / LATC_Test_Calc_B.SFunction_o1_o *
    (LCS_LCC_Later_error - LATC_Test_Calc_DW.Memory2_PreviousInput_k) +
    LATC_Test_Calc_DW.Memory2_PreviousInput_k;

  /* Sum: '<S18>/Sum5' incorporates:
   *  Constant: '<S18>/Weight//N3'
   *  Memory: '<S18>/Memory2'
   *  Product: '<S18>/Product1'
   *  Product: '<S18>/Product4'
   *  Sum: '<S18>/Sum4'
   */
  LATC_Test_Calc_B.Sum5_c = 0.02F / LATC_Test_Calc_B.SFunction_o1_o *
    (LCS_LCC_heading_error - LATC_Test_Calc_DW.Memory2_PreviousInput_o) +
    LATC_Test_Calc_DW.Memory2_PreviousInput_o;

  /* MultiPortSwitch: '<S40>/Multiport Switch2' */
  switch (LATC_Test_Calc_B.SFunction_o1_oa) {
   case 0:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Constant: '<S40>/Constant1'
     */
    LCS_LCC_Max_Lateral_Acc = 1.5F;
    break;

   case 1:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/No Function 2 LCK1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_LCK, 15U);
    break;

   case 2:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/LCKIE_Active1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_LCKIE, 15U);
    break;

   case 3:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/LCK//IE TO LC_Nomal1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_LCNomal, 15U);
    break;

   case 4:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/LKA Active1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_LKA, 15U);
    break;

   case 5:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/ELK Active1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_ELK, 15U);
    break;

   case 6:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/ESS AES Active1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_ESS, 15U);
    break;

   case 7:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/LCK//IE TO LC_Eco1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_LCEco, 15U);
    break;

   case 8:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/LCK//IE TO LC_Sport1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_LCSport, 15U);
    break;

   case 9:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Lookup_n-D: '<S40>/LC Cancel1'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_Max_Lateral_Acc = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_MaxLatAcc_LCCancel, 15U);
    break;

   default:
    /* MultiPortSwitch: '<S40>/Multiport Switch2' incorporates:
     *  Constant: '<S40>/Constant5'
     */
    LCS_LCC_Max_Lateral_Acc = 1.5F;
    break;
  }

  /* End of MultiPortSwitch: '<S40>/Multiport Switch2' */

  /* MATLAB Function: '<S40>/MATLAB Function3' incorporates:
   *  Constant: '<S40>/Constant2'
   *  UnitDelay: '<S40>/Unit Delay3'
   *  UnitDelay: '<S40>/Unit Delay4'
   *  UnitDelay: '<S40>/Unit Delay5'
   */
  tmp_2 = LATC_Test_Calc_DW.UnitDelay3_DSTATE + 1U;
  if (LATC_Test_Calc_DW.UnitDelay3_DSTATE + 1U > 65535U) {
    tmp_2 = 65535U;
  }

  if ((uint16_T)tmp_2 <= P_LCS_StateHold_time) {
    LCS_AngleSlope_Cnt = (uint16_T)tmp_2;
  } else {
    LCS_AngleSlope_Cnt = P_LCS_StateHold_time;
  }

  if (LCS_AngleSlope_Cnt == P_LCS_StateHold_time) {
    LCS_AngleSlope_Flg = 0U;
  } else {
    LCS_AngleSlope_Flg = LATC_Test_Calc_DW.UnitDelay4_DSTATE;
  }

  if ((LATC_Test_Calc_B.SFunction_o1_oa == 1) &&
      (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 0)) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 1U;
  }

  if ((LATC_Test_Calc_B.SFunction_o1_oa == 3) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 2U;
  }

  if ((LATC_Test_Calc_B.SFunction_o1_oa == 7) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 3U;
  }

  if ((LATC_Test_Calc_B.SFunction_o1_oa == 8) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 4U;
  }

  if ((LATC_Test_Calc_B.SFunction_o1_oa == 6) &&
      ((LATC_Test_Calc_DW.UnitDelay5_DSTATE == 1) ||
       (LATC_Test_Calc_DW.UnitDelay5_DSTATE == 2))) {
    LCS_AngleSlope_Cnt = 0U;
    LCS_AngleSlope_Flg = 5U;
  }

  /* End of MATLAB Function: '<S40>/MATLAB Function3' */

  /* Product: '<S40>/Product' incorporates:
   *  Constant: '<S40>/Constant3'
   */
  LCS_HoldTime = 0.02 * (real_T)LCS_AngleSlope_Cnt;

  /* SwitchCase: '<S40>/Switch Case' */
  switch (LCS_AngleSlope_Flg) {
   case 1:
   case 2:
   case 3:
   case 4:
   case 5:
    /* Outputs for IfAction SubSystem: '<S40>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    /* Merge: '<S40>/Merge' incorporates:
     *  Lookup_n-D: '<S52>/LC_start_slope'
     *  Product: '<S40>/Product'
     */
    LCS_StateActive_AngleSlope = look2_iu8dtf_binlcapw(LCS_AngleSlope_Flg,
      LCS_HoldTime, P_LCS_StateActiveFlg_BP, P_LCS_StateActive_HoldTime_BP,
      P_LCS_StateActiv_AngleSlope, LATC_Test_Calc_ConstP.pooled14, 5U);

    /* End of Outputs for SubSystem: '<S40>/Switch Case Action Subsystem' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S40>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    /* Merge: '<S40>/Merge' incorporates:
     *  Constant: '<S53>/Constant'
     *  SignalConversion generated from: '<S53>/Out1'
     */
    LCS_StateActive_AngleSlope = 100.0F;

    /* End of Outputs for SubSystem: '<S40>/Switch Case Action Subsystem1' */
    break;
  }

  /* End of SwitchCase: '<S40>/Switch Case' */

  /* MultiPortSwitch: '<S40>/Multiport Switch1' */
  switch (LATC_Test_Calc_B.SFunction_o1_oa) {
   case 0:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Constant: '<S40>/Constant'
     */
    LCS_LCC_StateAngleSlope = 0.4F;
    break;

   case 1:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/No Function 2 LCK'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_LCK, 15U);
    break;

   case 2:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/LCKIE_Active'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_LCKIE, 15U);
    break;

   case 3:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/LCK//IE TO LC_Nomal'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_LCNomal, 15U);
    break;

   case 4:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/LKA Active'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_LKA, 15U);
    break;

   case 5:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/ELK Active'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_ELK, 15U);
    break;

   case 6:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/ESS AES Active'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_ESS, 15U);
    break;

   case 7:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/LCK//IE TO LC_Eco'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_LCEco, 15U);
    break;

   case 8:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/LCK//IE TO LC_Sport'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_LCSport, 15U);
    break;

   case 9:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Lookup_n-D: '<S40>/LC Cancel'
     *  Sum: '<Root>/Sum'
     */
    LCS_LCC_StateAngleSlope = look1_iflf_binlcpw(rtb_Sum, P_LCS_preDis_spd,
      P_LCS_LCC_AngleSlope_LCCancle, 15U);
    break;

   default:
    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Constant: '<S40>/Constant4'
     */
    LCS_LCC_StateAngleSlope = 0.4F;
    break;
  }

  /* End of MultiPortSwitch: '<S40>/Multiport Switch1' */

  /* MinMax: '<S40>/Min' */
  if ((LCS_StateActive_AngleSlope <= LCS_LCC_StateAngleSlope) || rtIsNaNF
      (LCS_LCC_StateAngleSlope)) {
    rtb_Sum = LCS_StateActive_AngleSlope;
  } else {
    rtb_Sum = LCS_LCC_StateAngleSlope;
  }

  /* End of MinMax: '<S40>/Min' */

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  if (LATC_Test_Calc_B.SFunction_o1 != 0.0F) {
    memset(&lqr_params_Q[0], 0, sizeof(real32_T) << 4U);
    lqr_params_Q[0] = LATC_Test_Calc_B.SFunction_o1_oz;
    lqr_params_Q[10] = LATC_Test_Calc_B.SFunction_o1_h;
    memcpy(&P[0], &e[0], sizeof(real32_T) << 4U);
    if (LATC_Test_Calc_B.SFunction_o1_k >= 0.2F) {
      rtb_Merge1 = LATC_Test_Calc_B.SFunction_o1_k;
    } else {
      rtb_Merge1 = 0.2F;
    }

    P[5] = -149.514099F / rtb_Merge1;
    P[13] = -218.290573F / rtb_Merge1;
    P[7] = 0.0F;
    P[15] = -149.514084F / rtb_Merge1;
    for (d_i = 0; d_i < 16; d_i++) {
      rtb_Merge1 = P[d_i];
      rtb_Merge = f[d_i];
      X[d_i] = 0.01F * rtb_Merge1 + rtb_Merge;
      AT[d_i] = rtb_Merge - 0.01F * rtb_Merge1;
    }

    ipiv[0] = 1;
    ipiv[1] = 2;
    ipiv[2] = 3;
    ipiv[3] = 4;
    for (d_i = 0; d_i < 3; d_i++) {
      jj = d_i * 5;
      jA = 0;
      ix = jj;
      rtb_Merge = (real32_T)fabs(AT[jj]);
      for (jy = 2; jy <= 4 - d_i; jy++) {
        ix++;
        rtb_Merge1 = (real32_T)fabs(AT[ix]);
        if (rtb_Merge1 > rtb_Merge) {
          jA = jy - 1;
          rtb_Merge = rtb_Merge1;
        }
      }

      if (AT[jj + jA] != 0.0F) {
        if (jA != 0) {
          jy = d_i + jA;
          ipiv[d_i] = (int8_T)(jy + 1);
          rtb_Merge1 = AT[d_i];
          AT[d_i] = AT[jy];
          AT[jy] = rtb_Merge1;
          rtb_Merge1 = AT[d_i + 4];
          AT[d_i + 4] = AT[jy + 4];
          AT[jy + 4] = rtb_Merge1;
          rtb_Merge1 = AT[d_i + 8];
          AT[d_i + 8] = AT[jy + 8];
          AT[jy + 8] = rtb_Merge1;
          rtb_Merge1 = AT[d_i + 12];
          AT[d_i + 12] = AT[jy + 12];
          AT[jy + 12] = rtb_Merge1;
        }

        jy = (jj - d_i) + 4;
        for (jA = jj + 1; jA < jy; jA++) {
          AT[jA] /= AT[jj];
        }
      }

      jy = jj + 4;
      jA = jj;
      for (ix = 0; ix <= 2 - d_i; ix++) {
        rtb_Merge1 = AT[jy];
        if (AT[jy] != 0.0F) {
          c_ix = jj + 1;
          ijA = jA + 5;
          d_0 = (jA - d_i) + 8;
          while (ijA + 1 <= d_0) {
            AT[ijA] += AT[c_ix] * -rtb_Merge1;
            c_ix++;
            ijA++;
          }
        }

        jy += 4;
        jA += 4;
      }
    }

    for (jj = 0; jj < 4; jj++) {
      jy = jj << 2;
      for (d_i = 0; d_i < jj; d_i++) {
        jA = d_i << 2;
        rtb_Merge1 = AT[d_i + jy];
        if (rtb_Merge1 != 0.0F) {
          X[jy] -= rtb_Merge1 * X[jA];
          X[jy + 1] -= X[jA + 1] * rtb_Merge1;
          X[jy + 2] -= X[jA + 2] * rtb_Merge1;
          X[jy + 3] -= X[jA + 3] * rtb_Merge1;
        }
      }

      rtb_Merge1 = 1.0F / AT[jj + jy];
      X[jy] *= rtb_Merge1;
      X[jy + 1] *= rtb_Merge1;
      X[jy + 2] *= rtb_Merge1;
      X[jy + 3] *= rtb_Merge1;
    }

    for (d_i = 3; d_i >= 0; d_i--) {
      jj = d_i << 2;
      for (jy = d_i + 2; jy < 5; jy++) {
        jA = (jy - 1) << 2;
        rtb_Merge1 = AT[(jy + jj) - 1];
        if (rtb_Merge1 != 0.0F) {
          X[jj] -= rtb_Merge1 * X[jA];
          X[jj + 1] -= X[jA + 1] * rtb_Merge1;
          X[jj + 2] -= X[jA + 2] * rtb_Merge1;
          X[jj + 3] -= X[jA + 3] * rtb_Merge1;
        }
      }
    }

    for (d_i = 2; d_i >= 0; d_i--) {
      ipiv_0 = ipiv[d_i];
      if (d_i + 1 != ipiv_0) {
        jj = d_i << 2;
        rtb_Merge1 = X[jj];
        jy = (ipiv_0 - 1) << 2;
        X[jj] = X[jy];
        X[jy] = rtb_Merge1;
        rtb_Merge1 = X[jj + 1];
        X[jj + 1] = X[jy + 1];
        X[jy + 1] = rtb_Merge1;
        rtb_Merge1 = X[jj + 2];
        X[jj + 2] = X[jy + 2];
        X[jy + 2] = rtb_Merge1;
        rtb_Merge1 = X[jj + 3];
        X[jj + 3] = X[jy + 3];
        X[jy + 3] = rtb_Merge1;
      }
    }

    for (d_i = 0; d_i < 4; d_i++) {
      jj = d_i << 2;
      AT[jj] = X[d_i];
      AT[jj + 1] = X[d_i + 4];
      AT[jj + 2] = X[d_i + 8];
      AT[jj + 3] = X[d_i + 12];
    }

    memcpy(&P[0], &lqr_params_Q[0], sizeof(real32_T) << 4U);
    rtb_Merge1 = 3.402823466E+38F;
    while (rtb_Merge1 > 0.01F) {
      dx = 0.0F;
      for (d_i = 0; d_i < 4; d_i++) {
        g[d_i] = 0.0F;
        for (jj = 0; jj < 4; jj++) {
          jy = jj << 2;
          jA = d_i + jy;
          P_next[jA] = 0.0F;
          P_next[jA] += P[jy] * AT[d_i];
          P_next[jA] += P[jy + 1] * AT[d_i + 4];
          P_next[jA] += P[jy + 2] * AT[d_i + 8];
          P_next[jA] += P[jy + 3] * AT[d_i + 12];
          g[d_i] += P[(d_i << 2) + jj] * B[jj];
        }

        dx += g[d_i] * B[d_i];
      }

      for (d_i = 0; d_i < 4; d_i++) {
        g[d_i] = (((P_next[d_i + 4] * 1.49514091F + P_next[d_i] * 0.0F) +
                   P_next[d_i + 8] * 0.0F) + P_next[d_i + 12] * 1.02406907F) /
          (dx + 1.0F);
      }

      for (d_i = 0; d_i < 4; d_i++) {
        dx = B[d_i];
        jA = d_i << 2;
        P_next_tmp[jA] = g[0] * dx;
        P_next_tmp[jA + 1] = g[1] * dx;
        P_next_tmp[jA + 2] = g[2] * dx;
        P_next_tmp[jA + 3] = g[3] * dx;
      }

      for (d_i = 0; d_i < 4; d_i++) {
        for (jj = 0; jj < 4; jj++) {
          jy = jj << 2;
          jA = d_i + jy;
          P_next_tmp_0[jA] = 0.0F;
          P_next_tmp_1[jA] = 0.0F;
          P_next_tmp_0[jA] += P[jy] * P_next_tmp[d_i];
          P_next_tmp_1[jA] += X[jy] * P_next[d_i];
          P_next_tmp_0[jA] += P[jy + 1] * P_next_tmp[d_i + 4];
          P_next_tmp_1[jA] += X[jy + 1] * P_next[d_i + 4];
          P_next_tmp_0[jA] += P[jy + 2] * P_next_tmp[d_i + 8];
          P_next_tmp_1[jA] += X[jy + 2] * P_next[d_i + 8];
          P_next_tmp_0[jA] += P[jy + 3] * P_next_tmp[d_i + 12];
          P_next_tmp_1[jA] += X[jy + 3] * P_next[d_i + 12];
        }

        for (jj = 0; jj < 4; jj++) {
          jy = jj << 2;
          jA = d_i + jy;
          P_next_tmp_2[jA] = 0.0F;
          P_next_tmp_2[jA] += X[jy] * P_next_tmp_0[d_i];
          P_next_tmp_2[jA] += X[jy + 1] * P_next_tmp_0[d_i + 4];
          P_next_tmp_2[jA] += X[jy + 2] * P_next_tmp_0[d_i + 8];
          P_next_tmp_2[jA] += X[jy + 3] * P_next_tmp_0[d_i + 12];
        }
      }

      for (d_i = 0; d_i < 16; d_i++) {
        rtb_Merge1 = (P_next_tmp_1[d_i] - P_next_tmp_2[d_i]) + lqr_params_Q[d_i];
        P_next[d_i] = rtb_Merge1;
        P[d_i] = rtb_Merge1 - P[d_i];
      }

      for (d_i = 0; d_i < 4; d_i++) {
        jj = d_i << 2;
        rtb_Merge = P[jj];
        rtb_Merge1 = P[jj + 1];
        if (rtIsNaNF(rtb_Merge1)) {
          h_y = false;
        } else if (rtIsNaNF(rtb_Merge)) {
          h_y = true;
        } else {
          h_y = (rtb_Merge < rtb_Merge1);
        }

        if (h_y) {
          rtb_Merge = P[jj + 1];
        }

        rtb_Merge1 = P[jj + 2];
        if (rtIsNaNF(rtb_Merge1)) {
          h_y = false;
        } else if (rtIsNaNF(rtb_Merge)) {
          h_y = true;
        } else {
          h_y = (rtb_Merge < rtb_Merge1);
        }

        if (h_y) {
          rtb_Merge = rtb_Merge1;
        }

        rtb_Merge1 = P[jj + 3];
        if (rtIsNaNF(rtb_Merge1)) {
          h_y = false;
        } else if (rtIsNaNF(rtb_Merge)) {
          h_y = true;
        } else {
          h_y = (rtb_Merge < rtb_Merge1);
        }

        if (h_y) {
          rtb_Merge = rtb_Merge1;
        }

        matrix_k[d_i] = rtb_Merge;
      }

      if (!rtIsNaNF(matrix_k[0])) {
        d_i = 1;
      } else {
        d_i = 0;
        jj = 2;
        exitg1 = false;
        while ((!exitg1) && (jj < 5)) {
          if (!rtIsNaNF(matrix_k[jj - 1])) {
            d_i = jj;
            exitg1 = true;
          } else {
            jj++;
          }
        }
      }

      if (d_i == 0) {
        rtb_Merge1 = matrix_k[0];
      } else {
        rtb_Merge1 = matrix_k[d_i - 1];
        while (d_i + 1 < 5) {
          if (rtb_Merge1 < matrix_k[d_i]) {
            rtb_Merge1 = matrix_k[d_i];
          }

          d_i++;
        }
      }

      rtb_Merge1 = (real32_T)fabs(rtb_Merge1);
      memcpy(&P[0], &P_next[0], sizeof(real32_T) << 4U);
    }

    dx = 0.0F;
    for (d_i = 0; d_i < 4; d_i++) {
      jj = d_i << 2;
      dx += (((P[jj + 1] * 1.49514091F + P[jj] * 0.0F) + P[jj + 2] * 0.0F) +
             P[jj + 3] * 1.02406907F) * B[d_i];
    }

    rtb_Merge1 = 0.0F / (dx + 1.0F);
    rtb_Merge = 1.49514091F / (dx + 1.0F);
    dx = 1.02406907F / (dx + 1.0F);
    for (d_i = 0; d_i < 4; d_i++) {
      jj = d_i << 2;
      g[d_i] = ((P[jj + 1] * rtb_Merge + P[jj] * rtb_Merge1) + P[jj + 2] *
                rtb_Merge1) + P[jj + 3] * dx;
    }

    b[0] = (real32_T)LATC_Test_Calc_B.Sum5_l;
    b[1] = LCS_LCC_Later_error_rate;
    b[2] = (real32_T)LATC_Test_Calc_B.Sum5_c;
    b[3] = LCS_LCC_heading_error_rate;
    rtb_Merge = 0.0F;
    for (d_i = 0; d_i < 4; d_i++) {
      jj = d_i << 2;
      rtb_Merge1 = ((X[jj + 1] * g[1] + X[jj] * g[0]) + X[jj + 2] * g[2]) + X[jj
        + 3] * g[3];
      rtb_Merge += rtb_Merge1 * b[d_i];
      matrix_k[d_i] = rtb_Merge1;
    }

    dx = (0.0F * LATC_Test_Calc_B.SFunction_o1_k *
          LATC_Test_Calc_B.SFunction_o1_k * (real32_T)LATC_Test_Calc_B.Sum5 +
          2.92F * (real32_T)LATC_Test_Calc_B.Sum5) - (1.46F * (real32_T)
      LATC_Test_Calc_B.Sum5 - 3036.8F * LATC_Test_Calc_B.SFunction_o1_k *
      LATC_Test_Calc_B.SFunction_o1_k * (real32_T)LATC_Test_Calc_B.Sum5 /
      155494.656F / 2.92F) * matrix_k[2];
    LCS_LCC_Feedforward = dx * 57.3F * 15.5F;
    LCS_LCC_Feedback = -rtb_Merge * 57.3F * 15.5F;
    if (LATC_Test_Calc_B.SFunction_o1_k < 1.0F) {
      LCS_LCC_Steer_Limit = (real32_T)atan(LCS_LCC_Max_Lateral_Acc * 2.92F /
        (LATC_Test_Calc_B.SFunction_o1_k * LATC_Test_Calc_B.SFunction_o1_k)) *
        57.3F * 15.5F;
    } else {
      if ((1.0F >= LATC_Test_Calc_B.SFunction_o1_k) || rtIsNaNF
          (LATC_Test_Calc_B.SFunction_o1_k)) {
        rtb_Merge1 = 1.0F;
      } else {
        rtb_Merge1 = LATC_Test_Calc_B.SFunction_o1_k;
      }

      rtb_Merge1 = (LATC_Test_Calc_B.SFunction_o1_k *
                    LATC_Test_Calc_B.SFunction_o1_k / 552.25F + 1.0F) * 2.92F /
        rtb_Merge1;
      if (!(rtb_Merge1 <= 32767.0F)) {
        rtb_Merge1 = 32767.0F;
      }

      LCS_LCC_Steer_Limit = LCS_LCC_Max_Lateral_Acc * rtb_Merge1 /
        LATC_Test_Calc_B.SFunction_o1_k * 57.3F * 15.5F;
    }

    LCS_LCC_TarAngle_deg = (dx + -rtb_Merge) * 57.3F * 15.5F;
    if ((-LCS_LCC_Steer_Limit >= LCS_LCC_TarAngle_deg) || rtIsNaNF
        (LCS_LCC_TarAngle_deg)) {
      LCS_LCC_TarAngle_deg = -LCS_LCC_Steer_Limit;
    }

    if ((LCS_LCC_Steer_Limit <= LCS_LCC_TarAngle_deg) || rtIsNaNF
        (LCS_LCC_TarAngle_deg)) {
      LCS_LCC_TarAngle_deg = LCS_LCC_Steer_Limit;
    }

    rtb_Merge1 = LATC_Test_Calc_DW.UnitDelay_DSTATE - rtb_Sum;
    if ((rtb_Merge1 >= LCS_LCC_TarAngle_deg) || rtIsNaNF(LCS_LCC_TarAngle_deg))
    {
      LCS_LCC_TarAngle_deg = rtb_Merge1;
    }

    rtb_Merge1 = LATC_Test_Calc_DW.UnitDelay_DSTATE + rtb_Sum;
    if ((rtb_Merge1 <= LCS_LCC_TarAngle_deg) || rtIsNaNF(LCS_LCC_TarAngle_deg))
    {
      LCS_LCC_TarAngle_deg = rtb_Merge1;
    }
  } else {
    LCS_LCC_TarAngle_deg = LATC_Test_Calc_B.SFunction_o1_p -
      LATC_Test_Calc_B.SFunction_o1_g;
    LCS_LCC_Feedforward = 0.0F;
    LCS_LCC_Feedback = 0.0F;
    LCS_LCC_Steer_Limit = 0.0F;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* DataTypeConversion: '<S21>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_o = LCS_LCC_Feedforward;

  /* S-Function (cnpenvout): '<S21>/S-Function' */

  /* Level2 S-Function Block: '<S21>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S22>/S-Function' */

  /* Level2 S-Function Block: '<S22>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  for (jj = 0; jj < 40; jj++) {
    /* DataTypeConversion: '<S39>/Data Type Conversion' */
    LATC_Test_Calc_B.DataTypeConversion_j[jj] = LCS_LCC_PlanX[jj];
  }

  /* DataTypeConversion: '<S38>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_m = LCS_LCC_heading_error_rate;

  /* DataTypeConversion: '<S37>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_c = LCS_LCC_heading_error;

  /* DataTypeConversion: '<S36>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_b = LCS_LCC_Later_error_rate;

  /* DataTypeConversion: '<S35>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_b2 = LCS_LCC_Later_error;

  /* DataTypeConversion: '<S34>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_ja = LCS_LCC_ref_curve;

  /* DataTypeConversion: '<S33>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_k = LCS_LCC_Steer_Limit;

  /* DataTypeConversion: '<S32>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_l = LCS_LCC_Feedback;

  /* DataTypeConversion: '<S31>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_d = LCS_LCC_TarAngle_deg;

  /* DataTypeConversion: '<S30>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_cf = rtb_Sum;

  /* DataTypeConversion: '<S27>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_on = LCS_LCC_PreviewY;

  /* DataTypeConversion: '<S26>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_g = LCS_LCC_PreviewX;

  /* S-Function (cnpenvout): '<S23>/S-Function' */

  /* Level2 S-Function Block: '<S23>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* Sum: '<Root>/Add6' */
  LATC_Test_Calc_B.Add6 = LATC_Test_Calc_ConstB.Saturation +
    LCS_LCC_TarAngle_deg;

  /* S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  rtb_TappedDelay1[0] = LATC_Test_Calc_B.Add6;
  rtb_TappedDelay1[1] = LATC_Test_Calc_DW.TappedDelay2_X[0];
  rtb_TappedDelay1[2] = LATC_Test_Calc_DW.TappedDelay2_X[1];
  rtb_TappedDelay1[3] = LATC_Test_Calc_DW.TappedDelay2_X[2];
  rtb_TappedDelay1[4] = LATC_Test_Calc_DW.TappedDelay2_X[3];

  /* Sum: '<Root>/Sum of Elements2' */
  rtb_Merge1 = -0.0F;
  for (d_i = 0; d_i < 5; d_i++) {
    rtb_Merge1 += rtb_TappedDelay1[d_i];
  }

  /* Gain: '<Root>/Gain6' incorporates:
   *  Sum: '<Root>/Sum of Elements2'
   */
  LCS_ReqEPSTrgAngle = 0.2F * rtb_Merge1;

  /* DataTypeConversion: '<S24>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_i = LCS_ReqEPSTrgAngle;

  /* S-Function (cnpenvout): '<S24>/S-Function' */

  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S25>/S-Function' */

  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S26>/S-Function' */

  /* Level2 S-Function Block: '<S26>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S27>/S-Function' */

  /* Level2 S-Function Block: '<S27>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S28>/S-Function' */

  /* Level2 S-Function Block: '<S28>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  rtb_TappedDelay1[0] = LCS_LCC_ref_curve;
  rtb_TappedDelay1[1] = LATC_Test_Calc_DW.TappedDelay1_X[0];
  rtb_TappedDelay1[2] = LATC_Test_Calc_DW.TappedDelay1_X[1];
  rtb_TappedDelay1[3] = LATC_Test_Calc_DW.TappedDelay1_X[2];
  rtb_TappedDelay1[4] = LATC_Test_Calc_DW.TappedDelay1_X[3];

  /* Sum: '<S41>/Sum of Elements1' */
  rtb_Merge1 = -0.0F;
  for (d_i = 0; d_i < 5; d_i++) {
    rtb_Merge1 += rtb_TappedDelay1[d_i];
  }

  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  Gain: '<S41>/Gain1'
   *  Sum: '<S41>/Sum of Elements1'
   */
  LATC_Test_Calc_B.DataTypeConversion_e = 0.2F * rtb_Merge1;

  /* S-Function (cnpenvout): '<S29>/S-Function' */

  /* Level2 S-Function Block: '<S29>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S30>/S-Function' */

  /* Level2 S-Function Block: '<S30>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S31>/S-Function' */

  /* Level2 S-Function Block: '<S31>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S32>/S-Function' */

  /* Level2 S-Function Block: '<S32>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S33>/S-Function' */

  /* Level2 S-Function Block: '<S33>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S34>/S-Function' */

  /* Level2 S-Function Block: '<S34>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[26];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S35>/S-Function' */

  /* Level2 S-Function Block: '<S35>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[27];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S36>/S-Function' */

  /* Level2 S-Function Block: '<S36>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[28];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S37>/S-Function' */

  /* Level2 S-Function Block: '<S37>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[29];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S38>/S-Function' */

  /* Level2 S-Function Block: '<S38>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[30];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvout): '<S39>/S-Function' */

  /* Level2 S-Function Block: '<S39>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[31];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S2>/S-Function' */

  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[32];
    sfcnOutputs(rts,0);
  }

  /* S-Function (cnpenvin): '<S3>/S-Function' */

  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[33];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S48>/Data Type Conversion' */
  LATC_Test_Calc_B.DataTypeConversion_o5 = LCS_LCC_FinalPreviewT;

  /* S-Function (cnpenvout): '<S48>/S-Function' */

  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[34];
    sfcnOutputs(rts,0);
  }
}

/* Model update function */
static void LATC_Test_Calc_update(void)
{
  /* Update for UnitDelay: '<S44>/Unit Delay2' */
  LATC_Test_Calc_DW.UnitDelay2_DSTATE = LATC_Test_Calc_B.SFunction_o1_oa;

  /* Update for UnitDelay: '<S44>/Unit Delay1' */
  LATC_Test_Calc_DW.UnitDelay1_DSTATE = LATC_Test_Calc_B.Flg;

  /* Update for UnitDelay: '<S44>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE_d = LATC_Test_Calc_B.Count;

  /* Update for Memory: '<S45>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_n = LCS_LCC_Preview_Curve;

  /* Update for Memory: '<S16>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput = LATC_Test_Calc_B.Sum5;

  /* Update for Memory: '<S17>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_k = LATC_Test_Calc_B.Sum5_l;

  /* Update for Memory: '<S18>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_o = LATC_Test_Calc_B.Sum5_c;

  /* Update for UnitDelay: '<S40>/Unit Delay5' */
  LATC_Test_Calc_DW.UnitDelay5_DSTATE = LATC_Test_Calc_B.SFunction_o1_oa;

  /* Update for UnitDelay: '<S40>/Unit Delay4' */
  LATC_Test_Calc_DW.UnitDelay4_DSTATE = LCS_AngleSlope_Flg;

  /* Update for UnitDelay: '<S40>/Unit Delay3' */
  LATC_Test_Calc_DW.UnitDelay3_DSTATE = LCS_AngleSlope_Cnt;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE = LCS_LCC_TarAngle_deg;

  /* Update for S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[3] = LATC_Test_Calc_DW.TappedDelay2_X[2];

  /* Update for S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[3] = LATC_Test_Calc_DW.TappedDelay1_X[2];

  /* Update for S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[2] = LATC_Test_Calc_DW.TappedDelay2_X[1];

  /* Update for S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[2] = LATC_Test_Calc_DW.TappedDelay1_X[1];

  /* Update for S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[1] = LATC_Test_Calc_DW.TappedDelay2_X[0];

  /* Update for S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[1] = LATC_Test_Calc_DW.TappedDelay1_X[0];

  /* Update for S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[0] = LATC_Test_Calc_B.Add6;

  /* Update for S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[0] = LCS_LCC_ref_curve;

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
  /* Start for S-Function (cnpenvin): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
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

  /* Start for S-Function (cnpenvin): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
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

  /* Start for S-Function (cnpenvin): '<S8>/S-Function' */
  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S5>/S-Function' */
  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S21>/S-Function' */
  /* Level2 S-Function Block: '<S21>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S22>/S-Function' */
  /* Level2 S-Function Block: '<S22>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S23>/S-Function' */
  /* Level2 S-Function Block: '<S23>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S24>/S-Function' */
  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S25>/S-Function' */
  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S26>/S-Function' */
  /* Level2 S-Function Block: '<S26>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S27>/S-Function' */
  /* Level2 S-Function Block: '<S27>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S28>/S-Function' */
  /* Level2 S-Function Block: '<S28>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S29>/S-Function' */
  /* Level2 S-Function Block: '<S29>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S30>/S-Function' */
  /* Level2 S-Function Block: '<S30>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S31>/S-Function' */
  /* Level2 S-Function Block: '<S31>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S32>/S-Function' */
  /* Level2 S-Function Block: '<S32>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S33>/S-Function' */
  /* Level2 S-Function Block: '<S33>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S34>/S-Function' */
  /* Level2 S-Function Block: '<S34>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S35>/S-Function' */
  /* Level2 S-Function Block: '<S35>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[27];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S36>/S-Function' */
  /* Level2 S-Function Block: '<S36>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S37>/S-Function' */
  /* Level2 S-Function Block: '<S37>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S38>/S-Function' */
  /* Level2 S-Function Block: '<S38>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[30];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S39>/S-Function' */
  /* Level2 S-Function Block: '<S39>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[31];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S2>/S-Function' */
  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[32];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvin): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[33];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (cnpenvout): '<S48>/S-Function' */
  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[34];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for UnitDelay: '<S44>/Unit Delay2' */
  LATC_Test_Calc_DW.UnitDelay2_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S44>/Unit Delay1' */
  LATC_Test_Calc_DW.UnitDelay1_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S44>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE_d = 0U;

  /* InitializeConditions for Memory: '<S45>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_n = 0.0F;

  /* InitializeConditions for Memory: '<S16>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S17>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_k = 0.0;

  /* InitializeConditions for Memory: '<S18>/Memory2' */
  LATC_Test_Calc_DW.Memory2_PreviousInput_o = 0.0;

  /* InitializeConditions for UnitDelay: '<S40>/Unit Delay5' */
  LATC_Test_Calc_DW.UnitDelay5_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S40>/Unit Delay4' */
  LATC_Test_Calc_DW.UnitDelay4_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<S40>/Unit Delay3' */
  LATC_Test_Calc_DW.UnitDelay3_DSTATE = 0U;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  LATC_Test_Calc_DW.UnitDelay_DSTATE = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<Root>/Tapped Delay2' */
  LATC_Test_Calc_DW.TappedDelay2_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S41>/Tapped Delay1' */
  LATC_Test_Calc_DW.TappedDelay1_X[3] = 0.0F;
}

/* Model terminate function */
static void LATC_Test_Calc_terminate(void)
{
  /* Terminate for S-Function (cnpenvin): '<S11>/S-Function' */
  /* Level2 S-Function Block: '<S11>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (cnpenvin) */
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

  /* Terminate for S-Function (cnpenvin): '<S7>/S-Function' */
  /* Level2 S-Function Block: '<S7>/S-Function' (cnpenvin) */
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

  /* Terminate for S-Function (cnpenvin): '<S8>/S-Function' */
  /* Level2 S-Function Block: '<S8>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S9>/S-Function' */
  /* Level2 S-Function Block: '<S9>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S10>/S-Function' */
  /* Level2 S-Function Block: '<S10>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S13>/S-Function' */
  /* Level2 S-Function Block: '<S13>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S5>/S-Function' */
  /* Level2 S-Function Block: '<S5>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S6>/S-Function' */
  /* Level2 S-Function Block: '<S6>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S4>/S-Function' */
  /* Level2 S-Function Block: '<S4>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S21>/S-Function' */
  /* Level2 S-Function Block: '<S21>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S22>/S-Function' */
  /* Level2 S-Function Block: '<S22>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S23>/S-Function' */
  /* Level2 S-Function Block: '<S23>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S24>/S-Function' */
  /* Level2 S-Function Block: '<S24>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S25>/S-Function' */
  /* Level2 S-Function Block: '<S25>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S26>/S-Function' */
  /* Level2 S-Function Block: '<S26>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S27>/S-Function' */
  /* Level2 S-Function Block: '<S27>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S28>/S-Function' */
  /* Level2 S-Function Block: '<S28>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S29>/S-Function' */
  /* Level2 S-Function Block: '<S29>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S30>/S-Function' */
  /* Level2 S-Function Block: '<S30>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S31>/S-Function' */
  /* Level2 S-Function Block: '<S31>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S32>/S-Function' */
  /* Level2 S-Function Block: '<S32>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S33>/S-Function' */
  /* Level2 S-Function Block: '<S33>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S34>/S-Function' */
  /* Level2 S-Function Block: '<S34>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S35>/S-Function' */
  /* Level2 S-Function Block: '<S35>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S36>/S-Function' */
  /* Level2 S-Function Block: '<S36>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S37>/S-Function' */
  /* Level2 S-Function Block: '<S37>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S38>/S-Function' */
  /* Level2 S-Function Block: '<S38>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S39>/S-Function' */
  /* Level2 S-Function Block: '<S39>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S2>/S-Function' */
  /* Level2 S-Function Block: '<S2>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvin): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (cnpenvin) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (cnpenvout): '<S48>/S-Function' */
  /* Level2 S-Function Block: '<S48>/S-Function' (cnpenvout) */
  {
    SimStruct *rts = LATC_Test_Calc_M->childSfunctions[34];
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
  LCS_LCC_PlanIdex = 0.0;
  LCS_LCC_NumTraj = 0.0;
  LCS_IN_desLaneA1 = 0.0F;
  LCS_IN_desLaneA2 = 0.0F;
  LCS_IN_desLaneA3 = 0.0F;
  LCS_LCC_Preview_Curve = 0.0F;
  LCS_LCC_Preview_CurveFac = 0.0F;
  LCS_LCC_PreviewFac = 0.0F;
  LCS_LCC_FinalPreviewT = 0.0F;
  LCS_LCC_AyDtLimit = 0.0F;
  LCS_LCC_Max_Lateral_Acc = 0.0F;
  LCS_StateActive_AngleSlope = 0.0F;
  LCS_LCC_StateAngleSlope = 0.0F;
  LCS_ReqEPSTrgAngle = 0.0F;

  {
    int32_T i;
    for (i = 0; i < 40; i++) {
      LCS_LCC_PlanX[i] = 0.0F;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 40; i++) {
      LCS_LCC_PlanY[i] = 0.0F;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 40; i++) {
      LCS_LCC_PlanTheta[i] = 0.0F;
    }
  }

  LCS_LCC_PreviewX = 0.0F;
  LCS_LCC_PreviewY = 0.0F;
  LCS_LCC_PreviewTheta = 0.0F;
  LCS_LCC_ref_curve = 0.0F;
  LCS_LCC_Later_error = 0.0F;
  LCS_LCC_Later_error_rate = 0.0F;
  LCS_LCC_heading_error = 0.0F;
  LCS_LCC_heading_error_rate = 0.0F;
  LCS_LCC_TarAngle_deg = 0.0F;
  LCS_LCC_Feedforward = 0.0F;
  LCS_LCC_Feedback = 0.0F;
  LCS_LCC_Steer_Limit = 0.0F;
  LCS_AngleSlope_Cnt = 0U;
  LCS_LCType = 0U;
  LCS_AngleSlope_Flg = 0U;

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

  LATC_Test_Calc_M->Sizes.numSFcns = (35);

  /* register each child */
  {
    (void) memset((void *)&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  35*sizeof(SimStruct));
    LATC_Test_Calc_M->childSfunctions =
      (&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 35; i++) {
        LATC_Test_Calc_M->childSfunctions[i] =
          (&LATC_Test_Calc_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: LATC_Test_Calc/<S11>/S-Function (cnpenvin) */
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
      ssSetPath(rts, "LATC_Test_Calc/Input5/S-Function");
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S12>/S-Function (cnpenvin) */
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
            &LATC_Test_Calc_B.SFunction_o1_p));
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
            &LATC_Test_Calc_B.SFunction_o3_p));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_j);
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
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_k));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_l));
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
      ssSetPath(rts, "LATC_Test_Calc/Input8/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_jn);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S7>/S-Function (cnpenvin) */
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
            &LATC_Test_Calc_B.SFunction_o1_o));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_f));
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
      ssSetPath(rts, "LATC_Test_Calc/Input15/S-Function");
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
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_ph));
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
            &LATC_Test_Calc_B.SFunction_o3_a));
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S8>/S-Function (cnpenvin) */
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
          ssSetOutputPortSignal(rts, 0, ((real32_T *) &LCS_IN_desLaneA1));
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
            &LATC_Test_Calc_B.SFunction_o3_n));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn5.params;
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S9>/S-Function (cnpenvin) */
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
          ssSetOutputPortSignal(rts, 0, ((real32_T *) &LCS_IN_desLaneA2));
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
            &LATC_Test_Calc_B.SFunction_o3_l));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn6.params;
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S10>/S-Function (cnpenvin) */
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
          ssSetOutputPortSignal(rts, 0, ((real32_T *) &LCS_IN_desLaneA3));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_gr));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_l1));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn7.params;
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S15>/S-Function (cnpenvin) */
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
            &LATC_Test_Calc_B.SFunction_o1_b));
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
            &LATC_Test_Calc_B.SFunction_o3_az));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn8.params;
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S13>/S-Function (cnpenvin) */
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
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            &LATC_Test_Calc_B.SFunction_o1_oa));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_fl));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_d));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_da);
        ssSetSFcnParam(rts, 1, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)LATC_Test_Calc_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P4_Size_m);
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
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_oz));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_ge));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o3_de));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_di);
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
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_h));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &LATC_Test_Calc_B.SFunction_o2_c));
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
      ssSetPath(rts, "LATC_Test_Calc/Input14/S-Function");
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S4>/S-Function (cnpenvin) */
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
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_g));
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
            &LATC_Test_Calc_B.SFunction_o3_jf));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_cx);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S21>/S-Function (cnpenvout) */
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

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_o;
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_f);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S22>/S-Function (cnpenvout) */
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

          {
            int_T i1;
            const real_T *u0 = LATC_Test_Calc_B.DataTypeConversion;
            for (i1=0; i1 < 40; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 40;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 40);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output10/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_p2);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_c);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S23>/S-Function (cnpenvout) */
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

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.iDims0;
          sfcnUPtrs[0] = &LCS_LCC_PlanIdex;
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
      ssSetPath(rts, "LATC_Test_Calc/Output11/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_b4);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S24>/S-Function (cnpenvout) */
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

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.iDims0;
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
      ssSetPath(rts, "LATC_Test_Calc/Output12/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_np);
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

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.iDims0;
          sfcnUPtrs[0] = &LCS_LCC_NumTraj;
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
      ssSetPath(rts, "LATC_Test_Calc/Output13/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_na);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S26>/S-Function (cnpenvout) */
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
      ssSetPath(rts, "LATC_Test_Calc/Output14/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_i);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S27>/S-Function (cnpenvout) */
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
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_on;
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
      ssSetPath(rts, "LATC_Test_Calc/Output15/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ie);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S28>/S-Function (cnpenvout) */
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
          sfcnUPtrs[0] = &LATC_Test_Calc_B.Sum5;
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
      ssSetPath(rts, "LATC_Test_Calc/Output16/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_l0);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S29>/S-Function (cnpenvout) */
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
      ssSetPath(rts, "LATC_Test_Calc/Output17/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_bk);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S30>/S-Function (cnpenvout) */
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
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_cf;
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
      ssSetPath(rts, "LATC_Test_Calc/Output18/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_h);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S31>/S-Function (cnpenvout) */
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
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_d;
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
      ssSetPath(rts, "LATC_Test_Calc/Output19/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_it);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S32>/S-Function (cnpenvout) */
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
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_l;
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
      ssSetPath(rts, "LATC_Test_Calc/Output2/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ly);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S33>/S-Function (cnpenvout) */
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
      ssSetPath(rts, "LATC_Test_Calc/Output3/S-Function");
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
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ke);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S34>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_ja;
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
      ssSetPath(rts, "LATC_Test_Calc/Output4/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_o);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S35>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[27]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[27]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[27]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_b2;
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
      ssSetPath(rts, "LATC_Test_Calc/Output5/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ix);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S36>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[28]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[28]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[28]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.iDims0;
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
      ssSetPath(rts, "LATC_Test_Calc/Output6/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_jv);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S37>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[29]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[29]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[29]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.iDims0;
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
      ssSetPath(rts, "LATC_Test_Calc/Output7/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_h3);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S38>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[30]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[30]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[30]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[30]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[30]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_m;
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
      ssSetPath(rts, "LATC_Test_Calc/Output8/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ky);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S39>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[31]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[31]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[31]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[31]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.iDims0;

          {
            int_T i1;
            const real_T *u0 = LATC_Test_Calc_B.DataTypeConversion_j;
            for (i1=0; i1 < 40; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          dimensions[0] = 40;
          dimensions[1] = 1;
          _ssSetInputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetInputPortNumDimensions(rts, 0, 2);
          ssSetInputPortWidth(rts, 0, 40);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "LATC_Test_Calc/Output9/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_ph);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P2_Size_c);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S2>/S-Function (cnpenvin) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[32]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[32]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[32]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[32]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[32]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.oDims0;
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
            &LATC_Test_Calc_B.SFunction_o2_kw));
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
      ssSetPath(rts, "LATC_Test_Calc/Input10/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_lc);
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
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[33]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[33]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[33]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[33]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[33]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.oDims0;
          dimensions[0] = 1;
          dimensions[1] = 1;
          _ssSetOutputPortDimensionsPtr(rts, 0, dimensions);
          _ssSetOutputPortNumDimensions(rts, 0, 2);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &LATC_Test_Calc_B.SFunction_o1_c));
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
            &LATC_Test_Calc_B.SFunction_o3_g4));
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
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn33.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       LATC_Test_Calc_ConstP.SFunction_P1_Size_pp);
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

    /* Level2 S-Function Block: LATC_Test_Calc/<S48>/S-Function (cnpenvout) */
    {
      SimStruct *rts = LATC_Test_Calc_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap = LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &LATC_Test_Calc_M->NonInlinedSFcns.blkInfo2[34]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &LATC_Test_Calc_M->NonInlinedSFcns.inputOutputPortInfo2[34]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, LATC_Test_Calc_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods2[34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods3[34]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &LATC_Test_Calc_M->NonInlinedSFcns.methods4[34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &LATC_Test_Calc_M->NonInlinedSFcns.statesInfo2[34]);
        ssSetPeriodicStatesInfo(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.periodicStatesInfo[34]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.UPtrs0;
          int_T *dimensions = (int_T *)
            &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.iDims0;
          sfcnUPtrs[0] = &LATC_Test_Calc_B.DataTypeConversion_o5;
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
                "LATC_Test_Calc/Motion_Planning/FrenetTrajectory/Subsystem1/Output4/S-Function");
      ssSetRTModel(rts,LATC_Test_Calc_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &LATC_Test_Calc_M->NonInlinedSFcns.Sfcn34.params;
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
  }

  /* Initialize Sizes */
  LATC_Test_Calc_M->Sizes.numContStates = (0);/* Number of continuous states */
  LATC_Test_Calc_M->Sizes.numY = (0);  /* Number of model outputs */
  LATC_Test_Calc_M->Sizes.numU = (0);  /* Number of model inputs */
  LATC_Test_Calc_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  LATC_Test_Calc_M->Sizes.numSampTimes = (1);/* Number of sample times */
  LATC_Test_Calc_M->Sizes.numBlocks = (210);/* Number of blocks */
  LATC_Test_Calc_M->Sizes.numBlockIO = (65);/* Number of block outputs */
  return LATC_Test_Calc_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
