/*
 * Noa_Nofusion_data.c
 *
 * Code generation for model "Noa_Nofusion".
 *
 * Model version              : 1.579
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:18:59 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Noa_Nofusion.h"
#include "Noa_Nofusion_private.h"

/* Invariant block signals (default storage) */
const ConstB_Noa_Nofusion_T Noa_Nofusion_ConstB = {
  {
    1U,
    1U,
    1U,
    1U,
    1U,
    1U,
    1U,
    1U,
    1U,
    1U,
    1U,
    1U,
    1U
  },                                   /* '<S4>/Bus Assignment' */
  0.0,                                 /* '<S87>/Data Type Conversion2' */

  {
    1U,
    1U,
    1U
  },                                   /* '<S4>/Bus Assignment1' */
  0U,                                  /* '<S87>/Gain1' */
  0.0F,                                /* '<S172>/Data Type Conversion34' */
  0.0F,                                /* '<S172>/Data Type Conversion35' */
  0.0F,                                /* '<S174>/Data Type Conversion34' */
  0.0F,                                /* '<S174>/Data Type Conversion35' */
  0.0F,                                /* '<S174>/Data Type Conversion39' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion10' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion13' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion14' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion15' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion16' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion17' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion18' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion19' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion20' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion21' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion22' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion23' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion24' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion25' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion26' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion28' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion29' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion30' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion31' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion32' */

  { 2.1F, 2.1F, 2.1F, 2.1F, 2.1F, 2.1F, 2.1F, 2.1F, 2.1F },/* '<S176>/Data Type Conversion4' */

  { 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F },/* '<S176>/Data Type Conversion7' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion8' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* '<S176>/Data Type Conversion9' */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* synthesized block */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* synthesized block */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* synthesized block */

  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },/* synthesized block */
  0.0F,                                /* '<S87>/Gain' */
  0.0F,                                /* '<S87>/Rounding Function' */
  0U,                                  /* '<S87>/Data Type Conversion' */
  0U,                                  /* '<S87>/Data Type Conversion3' */
  0U,                                  /* '<S20>/Switch' */
  1U,                                  /* '<S20>/Switch1' */
  2U,                                  /* '<S22>/Data Type Conversion16' */
  2U,                                  /* '<S22>/Data Type Conversion18' */
  1U,                                  /* '<S22>/Data Type Conversion20' */
  1U,                                  /* '<S22>/Data Type Conversion21' */
  3U,                                  /* '<S172>/Data Type Conversion29' */
  0U,                                  /* '<S172>/Data Type Conversion30' */
  0U,                                  /* '<S172>/Data Type Conversion31' */
  2U,                                  /* '<S172>/Data Type Conversion32' */
  3U,                                  /* '<S174>/Data Type Conversion29' */
  0U,                                  /* '<S174>/Data Type Conversion30' */
  0U,                                  /* '<S174>/Data Type Conversion31' */
  2U,                                  /* '<S174>/Data Type Conversion32' */

  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },/* '<S176>/Data Type Conversion11' */

  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },/* '<S176>/Data Type Conversion12' */

  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },/* '<S176>/Data Type Conversion27' */

  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },/* '<S176>/Data Type Conversion33' */

  { 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U },/* '<S176>/Data Type Conversion6' */
  -1                                   /* '<S88>/Data Type Conversion' */
};

/* Model block global parameters (default storage) */
real_T rtP_P_PLAN_ALC_OverTkCutOutDyRWFactor = 0.25;
                                  /* Variable: P_PLAN_ALC_OverTkCutOutDyRWFactor
                                   * Referenced by: '<S17>/PLAN'
                                   */
real_T rtP_P_PLAN_ALC_PreCurvatureFactor = 1.0;
                                      /* Variable: P_PLAN_ALC_PreCurvatureFactor
                                       * Referenced by: '<S17>/PLAN'
                                       */
real_T rtP_P_PLAN_ALC_PreCurvaturePreTime = 3.0;
                                     /* Variable: P_PLAN_ALC_PreCurvaturePreTime
                                      * Referenced by: '<S17>/PLAN'
                                      */
real_T rtP_P_VSM_LDW_AccRateOutTime = 0.0;/* Variable: P_VSM_LDW_AccRateOutTime
                                           * Referenced by: '<S133>/VSM'
                                           */
real32_T rtP_P_LongCtrl_ALCAccLimitByDangerXAxis[5] = { 0.0F, 0.3F, 0.5F, 0.6F,
  0.8F } ;                      /* Variable: P_LongCtrl_ALCAccLimitByDangerXAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */

real32_T rtP_P_LongCtrl_ALCAccLimitByDangerYAxis[5] = { -2.5F, -0.2F, -10.0F,
  -10.0F, -10.0F } ;            /* Variable: P_LongCtrl_ALCAccLimitByDangerYAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */

real32_T rtP_P_LongCtrl_ALaLowerChar[4] = { -5.0F, -5.0F, -3.5F, -3.5F } ;/* Variable: P_LongCtrl_ALaLowerChar
                                                                      * Referenced by: '<S17>/PLAN'
                                                                      */

real32_T rtP_P_LongCtrl_ALaUpperCharEco[15] = { 1.35F, 1.25F, 1.1F, 1.05F, 1.0F,
  0.95F, 0.85F, 0.7F, 0.6F, 0.55F, 0.5F, 0.45F, 0.35F, 0.3F, 0.3F } ;/* Variable: P_LongCtrl_ALaUpperCharEco
                                                                      * Referenced by: '<S17>/PLAN'
                                                                      */

real32_T rtP_P_LongCtrl_ALaUpperCharNormal[15] = { 1.489F, 1.399F, 1.309F,
  1.264F, 1.218F, 1.083F, 0.993F, 0.903F, 0.767F, 0.679F, 0.632F, 0.55F, 0.45F,
  0.35F, 0.3F } ;                     /* Variable: P_LongCtrl_ALaUpperCharNormal
                                       * Referenced by: '<S17>/PLAN'
                                       */

real32_T rtP_P_LongCtrl_ALaUpperCharSport[15] = { 1.625F, 1.534F, 1.444F, 1.399F,
  1.309F, 1.218F, 1.083F, 0.993F, 0.903F, 0.808F, 0.76F, 0.65F, 0.55F, 0.45F,
  0.35F } ;                            /* Variable: P_LongCtrl_ALaUpperCharSport
                                        * Referenced by: '<S17>/PLAN'
                                        */

real32_T rtP_P_LongCtrl_ALvAcceleLowerChar[4] = { 0.0F, 5.0F, 20.0F, 30.0F } ;
                                      /* Variable: P_LongCtrl_ALvAcceleLowerChar
                                       * Referenced by: '<S17>/PLAN'
                                       */

real32_T rtP_P_LongCtrl_ALvAcceleUpperCharEco[15] = { 1.0F, 1.5F, 2.0F, 2.5F,
  4.0F, 8.0F, 12.0F, 15.0F, 18.0F, 22.0F, 25.0F, 28.0F, 30.0F, 40.0F, 60.0F } ;
                                   /* Variable: P_LongCtrl_ALvAcceleUpperCharEco
                                    * Referenced by: '<S17>/PLAN'
                                    */

real32_T rtP_P_LongCtrl_ALvAcceleUpperCharNormal[15] = { 1.0F, 1.5F, 2.0F, 2.5F,
  4.0F, 8.0F, 12.0F, 15.0F, 18.0F, 22.0F, 25.0F, 28.0F, 30.0F, 40.0F, 60.0F } ;
                                /* Variable: P_LongCtrl_ALvAcceleUpperCharNormal
                                 * Referenced by: '<S17>/PLAN'
                                 */

real32_T rtP_P_LongCtrl_ALvAcceleUpperCharSport[15] = { 1.0F, 1.5F, 2.0F, 2.5F,
  4.0F, 8.0F, 12.0F, 15.0F, 18.0F, 22.0F, 25.0F, 28.0F, 30.0F, 40.0F, 60.0F } ;
                                 /* Variable: P_LongCtrl_ALvAcceleUpperCharSport
                                  * Referenced by: '<S17>/PLAN'
                                  */

real32_T rtP_P_LongCtrl_AddVelAccelChange = 0.3F;/* Variable: P_LongCtrl_AddVelAccelChange
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
real32_T rtP_P_LongCtrl_AddVelAccelThrd = -0.2F;/* Variable: P_LongCtrl_AddVelAccelThrd
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
real32_T rtP_P_LongCtrl_AddVelDistDesThrd = 0.6F;/* Variable: P_LongCtrl_AddVelDistDesThrd
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
real32_T rtP_P_LongCtrl_AddVelRefMsThrd = 1.0F;/* Variable: P_LongCtrl_AddVelRefMsThrd
                                                * Referenced by: '<S17>/PLAN'
                                                */
real32_T rtP_P_LongCtrl_CCLCIncSetSpdAdd = 5.0F;/* Variable: P_LongCtrl_CCLCIncSetSpdAdd
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
real32_T rtP_P_LongCtrl_CCLCIncSetSpdAddCntStartValue = 250.0F;
                           /* Variable: P_LongCtrl_CCLCIncSetSpdAddCntStartValue
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_LongCtrl_CCResumeDelayDeltaVel = -2.0F;
                                   /* Variable: P_LongCtrl_CCResumeDelayDeltaVel
                                    * Referenced by: '<S17>/PLAN'
                                    */
real32_T rtP_P_LongCtrl_CCaMinNegAcceleLowerBand = -0.2F;
                                /* Variable: P_LongCtrl_CCaMinNegAcceleLowerBand
                                 * Referenced by: '<S17>/PLAN'
                                 */
real32_T rtP_P_LongCtrl_CCaMinNegAcceleUpperBand = 0.2F;
                                /* Variable: P_LongCtrl_CCaMinNegAcceleUpperBand
                                 * Referenced by: '<S17>/PLAN'
                                 */
real32_T rtP_P_LongCtrl_CCaMinPosAcceleLowerBand = -0.05F;
                                /* Variable: P_LongCtrl_CCaMinPosAcceleLowerBand
                                 * Referenced by: '<S17>/PLAN'
                                 */
real32_T rtP_P_LongCtrl_CCaMinPosAcceleUpperBand = 0.2F;
                                /* Variable: P_LongCtrl_CCaMinPosAcceleUpperBand
                                 * Referenced by: '<S17>/PLAN'
                                 */
real32_T rtP_P_LongCtrl_CCaccelCCNeg2PosJerk = 5.0F;
                                    /* Variable: P_LongCtrl_CCaccelCCNeg2PosJerk
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_LongCtrl_CCaccelCCPosJerk = 1.0F;/* Variable: P_LongCtrl_CCaccelCCPosJerk
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
real32_T rtP_P_LongCtrl_CCaccelLowerIsLaneChange = 0.3F;
                                /* Variable: P_LongCtrl_CCaccelLowerIsLaneChange
                                 * Referenced by: '<S17>/PLAN'
                                 */
real32_T rtP_P_LongCtrl_CCaccelMaxLCActive = 0.3F;
                                      /* Variable: P_LongCtrl_CCaccelMaxLCActive
                                       * Referenced by: '<S17>/PLAN'
                                       */
real32_T rtP_P_LongCtrl_CCaccelMinECOAL = 0.3F;/* Variable: P_LongCtrl_CCaccelMinECOAL
                                                * Referenced by: '<S17>/PLAN'
                                                */
real32_T rtP_P_LongCtrl_CCaccelMinFastDecel = -1.2F;
                                     /* Variable: P_LongCtrl_CCaccelMinFastDecel
                                      * Referenced by: '<S17>/PLAN'
                                      */
real32_T rtP_P_LongCtrl_CCaccelMinNoFastDecel = -0.2F;
                                   /* Variable: P_LongCtrl_CCaccelMinNoFastDecel
                                    * Referenced by: '<S17>/PLAN'
                                    */
real32_T rtP_P_LongCtrl_CCaccelMinNormAL = 0.3F;/* Variable: P_LongCtrl_CCaccelMinNormAL
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
real32_T rtP_P_LongCtrl_CCaccelMinSportAL = 0.65F;/* Variable: P_LongCtrl_CCaccelMinSportAL
                                                   * Referenced by: '<S17>/PLAN'
                                                   */
real32_T rtP_P_LongCtrl_CCaccelUpperCC = 2.5F;/* Variable: P_LongCtrl_CCaccelUpperCC
                                               * Referenced by: '<S17>/PLAN'
                                               */
real32_T rtP_P_LongCtrl_CCaccelUpperCCSafeStop = -0.4F;
                                  /* Variable: P_LongCtrl_CCaccelUpperCCSafeStop
                                   * Referenced by: '<S17>/PLAN'
                                   */
real32_T rtP_P_LongCtrl_CCbECO = 0.87382F;/* Variable: P_LongCtrl_CCbECO
                                           * Referenced by: '<S17>/PLAN'
                                           */
real32_T rtP_P_LongCtrl_CCbNorm = 1.16939F;/* Variable: P_LongCtrl_CCbNorm
                                            * Referenced by: '<S17>/PLAN'
                                            */
real32_T rtP_P_LongCtrl_CCbSport = 1.31713F;/* Variable: P_LongCtrl_CCbSport
                                             * Referenced by: '<S17>/PLAN'
                                             */
real32_T rtP_P_LongCtrl_CCcoefESPSpd2IPSpd1 = 1.03F;
                                     /* Variable: P_LongCtrl_CCcoefESPSpd2IPSpd1
                                      * Referenced by: '<S17>/PLAN'
                                      */
real32_T rtP_P_LongCtrl_CCcoefESPSpd2IPSpd2 = 1.3F;
                                     /* Variable: P_LongCtrl_CCcoefESPSpd2IPSpd2
                                      * Referenced by: '<S17>/PLAN'
                                      */
real32_T rtP_P_LongCtrl_CCdecelCCJerk = -2.5F;/* Variable: P_LongCtrl_CCdecelCCJerk
                                               * Referenced by: '<S17>/PLAN'
                                               */
real32_T rtP_P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc = -1.0F;
                          /* Variable: P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc
                           * Referenced by: '<S17>/PLAN'
                           */
real32_T rtP_P_LongCtrl_CCfacNegAcceleLowerBand = 1.1F;
                                 /* Variable: P_LongCtrl_CCfacNegAcceleLowerBand
                                  * Referenced by: '<S17>/PLAN'
                                  */
real32_T rtP_P_LongCtrl_CCfacNegAcceleUpperBand = 0.9F;
                                 /* Variable: P_LongCtrl_CCfacNegAcceleUpperBand
                                  * Referenced by: '<S17>/PLAN'
                                  */
real32_T rtP_P_LongCtrl_CCfacPosAcceleLowerBand = 0.9F;
                                 /* Variable: P_LongCtrl_CCfacPosAcceleLowerBand
                                  * Referenced by: '<S17>/PLAN'
                                  */
real32_T rtP_P_LongCtrl_CCfacPosAcceleUpperBand = 1.1F;
                                 /* Variable: P_LongCtrl_CCfacPosAcceleUpperBand
                                  * Referenced by: '<S17>/PLAN'
                                  */
real32_T rtP_P_LongCtrl_CCkECO = -0.01521F;/* Variable: P_LongCtrl_CCkECO
                                            * Referenced by: '<S17>/PLAN'
                                            */
real32_T rtP_P_LongCtrl_CCkNorm = -0.02055F;/* Variable: P_LongCtrl_CCkNorm
                                             * Referenced by: '<S17>/PLAN'
                                             */
real32_T rtP_P_LongCtrl_CCkSport = -0.01466F;/* Variable: P_LongCtrl_CCkSport
                                              * Referenced by: '<S17>/PLAN'
                                              */
real32_T rtP_P_LongCtrl_CCtAcceleTimeNeg = 5.5F;/* Variable: P_LongCtrl_CCtAcceleTimeNeg
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
real32_T rtP_P_LongCtrl_CCtAcceleTimeNegCorrXAxis[2] = { -3.0F, 0.0F } ;
                               /* Variable: P_LongCtrl_CCtAcceleTimeNegCorrXAxis
                                * Referenced by: '<S17>/PLAN'
                                */

real32_T rtP_P_LongCtrl_CCtAcceleTimeNegCorrYAxis[2] = { 1.0F, 0.3F } ;
                               /* Variable: P_LongCtrl_CCtAcceleTimeNegCorrYAxis
                                * Referenced by: '<S17>/PLAN'
                                */

real32_T rtP_P_LongCtrl_CCtAcceleTimePos = 5.0F;/* Variable: P_LongCtrl_CCtAcceleTimePos
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
real32_T rtP_P_LongCtrl_CCtAcceleTimePosCorrXAxis[2] = { 0.0F, 2.0F } ;
                               /* Variable: P_LongCtrl_CCtAcceleTimePosCorrXAxis
                                * Referenced by: '<S17>/PLAN'
                                */

real32_T rtP_P_LongCtrl_CCtAcceleTimePosCorrYAxis[2] = { 0.4F, 1.0F } ;
                               /* Variable: P_LongCtrl_CCtAcceleTimePosCorrYAxis
                                * Referenced by: '<S17>/PLAN'
                                */

real32_T rtP_P_LongCtrl_CCtStepVelPlan = 0.5F;/* Variable: P_LongCtrl_CCtStepVelPlan
                                               * Referenced by: '<S17>/PLAN'
                                               */
real32_T rtP_P_LongCtrl_CCtTotVelPlan = 4.0F;/* Variable: P_LongCtrl_CCtTotVelPlan
                                              * Referenced by: '<S17>/PLAN'
                                              */
real32_T rtP_P_LongCtrl_DangerLevelEnterThrd = 0.0F;
                                    /* Variable: P_LongCtrl_DangerLevelEnterThrd
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_LongCtrl_DangerLevelExitThrd = 0.3F;
                                     /* Variable: P_LongCtrl_DangerLevelExitThrd
                                      * Referenced by: '<S17>/PLAN'
                                      */
real32_T rtP_P_LongCtrl_FollowAccelAddSlopeAssistXAxis[2] = { 0.8F, 1.5F } ;
                          /* Variable: P_LongCtrl_FollowAccelAddSlopeAssistXAxis
                           * Referenced by: '<S17>/PLAN'
                           */

real32_T rtP_P_LongCtrl_FollowAccelAddSlopeAssistYAxis[2] = { 0.2F, 0.3F } ;
                          /* Variable: P_LongCtrl_FollowAccelAddSlopeAssistYAxis
                           * Referenced by: '<S17>/PLAN'
                           */

real32_T rtP_P_LongCtrl_FollowAccelCharNegVlcAcc2CoefEnlargeAccelJerkXAxis[2] =
  { -0.5F, 0.0F } ;
      /* Variable: P_LongCtrl_FollowAccelCharNegVlcAcc2CoefEnlargeAccelJerkXAxis
       * Referenced by: '<S17>/PLAN'
       */

real32_T rtP_P_LongCtrl_FollowAccelDesThresStartUpAssistEnable = 0.2F;
                  /* Variable: P_LongCtrl_FollowAccelDesThresStartUpAssistEnable
                   * Referenced by: '<S17>/PLAN'
                   */
real32_T rtP_P_LongCtrl_FollowAccelJerkNegFollowAccel = 0.95F;
                           /* Variable: P_LongCtrl_FollowAccelJerkNegFollowAccel
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_LongCtrl_FollowAccelSlopeAssistStep = 0.02F;
                              /* Variable: P_LongCtrl_FollowAccelSlopeAssistStep
                               * Referenced by: '<S17>/PLAN'
                               */
real32_T rtP_P_LongCtrl_FollowCoefCharCoefEnlargeAccelJerkYAxis[2] = { 4.0F,
  1.0F } ;       /* Variable: P_LongCtrl_FollowCoefCharCoefEnlargeAccelJerkYAxis
                  * Referenced by: '<S17>/PLAN'
                  */

real32_T rtP_P_LongCtrl_FollowCoefCharDistCoefEnlargeAccelStartUpAssistYAxis[2] =
{ 1.0F, 1.3F } ;
    /* Variable: P_LongCtrl_FollowCoefCharDistCoefEnlargeAccelStartUpAssistYAxis
     * Referenced by: '<S17>/PLAN'
     */

real32_T rtP_P_LongCtrl_FollowCoefCharVelCoefEnlargeAccelStartUpAssistYAxis[2] =
{ 1.0F, 1.3F } ;
     /* Variable: P_LongCtrl_FollowCoefCharVelCoefEnlargeAccelStartUpAssistYAxis
      * Referenced by: '<S17>/PLAN'
      */

real32_T rtP_P_LongCtrl_FollowCoefStartUpAssistFadeOut = 0.9F;
                          /* Variable: P_LongCtrl_FollowCoefStartUpAssistFadeOut
                           * Referenced by: '<S17>/PLAN'
                           */
real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableTTCThres = 2.0F;
            /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableTTCThres
             * Referenced by: '<S17>/PLAN'
             */
real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableVelSubjThres = 5.0F;
        /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableVelSubjThres
         * Referenced by: '<S17>/PLAN'
         */
real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrXAxis[2] = { 2.0F, 5.0F } ;
                     /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrXAxis
                      * Referenced by: '<S17>/PLAN'
                      */

real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrYAxis[2] = { 1.0F, 0.25F }
;                    /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrYAxis
                      * Referenced by: '<S17>/PLAN'
                      */

real32_T rtP_P_LongCtrl_FollowDecelJerkForceSlopeXAxis[2] = { 0.3F, 3.0F } ;
                          /* Variable: P_LongCtrl_FollowDecelJerkForceSlopeXAxis
                           * Referenced by: '<S17>/PLAN'
                           */

real32_T rtP_P_LongCtrl_FollowDecelJerkForceSlopeYAxis[2] = { -4.0F, -30.0F } ;
                          /* Variable: P_LongCtrl_FollowDecelJerkForceSlopeYAxis
                           * Referenced by: '<S17>/PLAN'
                           */

real32_T rtP_P_LongCtrl_FollowDistDesAddForceStop = 0.5F;
                               /* Variable: P_LongCtrl_FollowDistDesAddForceStop
                                * Referenced by: '<S17>/PLAN'
                                */
real32_T rtP_P_LongCtrl_FollowDistDesCompensionVelRelThresMax = 5.0F;
                   /* Variable: P_LongCtrl_FollowDistDesCompensionVelRelThresMax
                    * Referenced by: '<S17>/PLAN'
                    */
real32_T rtP_P_LongCtrl_FollowDistDesCompensionVelRelThresMin = 0.0F;
                   /* Variable: P_LongCtrl_FollowDistDesCompensionVelRelThresMin
                    * Referenced by: '<S17>/PLAN'
                    */
real32_T rtP_P_LongCtrl_FollowDistDiff2VelSubjThresEnableStop[2] = { -1.0F, 1.0F
} ;                /* Variable: P_LongCtrl_FollowDistDiff2VelSubjThresEnableStop
                    * Referenced by: '<S17>/PLAN'
                    */

real32_T rtP_P_LongCtrl_FollowDistDiffCharCoefEnlargeAccelStartUpAssistXAxis[2] =
{ 0.0F, 5.0F } ;
    /* Variable: P_LongCtrl_FollowDistDiffCharCoefEnlargeAccelStartUpAssistXAxis
     * Referenced by: '<S17>/PLAN'
     */

real32_T rtP_P_LongCtrl_FollowDrvOffDistCorrDistFullFillOverride = 1.0F;
                /* Variable: P_LongCtrl_FollowDrvOffDistCorrDistFullFillOverride
                 * Referenced by: '<S17>/PLAN'
                 */
real32_T rtP_P_LongCtrl_FollowDrvOffDistCorrVelFullFillOverride = 0.5F;
                 /* Variable: P_LongCtrl_FollowDrvOffDistCorrVelFullFillOverride
                  * Referenced by: '<S17>/PLAN'
                  */
real32_T rtP_P_LongCtrl_FollowDrvOffDistExitNoOverride = 0.5F;
                          /* Variable: P_LongCtrl_FollowDrvOffDistExitNoOverride
                           * Referenced by: '<S17>/PLAN'
                           */
real32_T rtP_P_LongCtrl_FollowDrvOffDistExitOverride = 1.5F;
                            /* Variable: P_LongCtrl_FollowDrvOffDistExitOverride
                             * Referenced by: '<S17>/PLAN'
                             */
real32_T rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff = 1.8F;
                /* Variable: P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff
                 * Referenced by: '<S17>/PLAN'
                 */
real32_T rtP_P_LongCtrl_FollowDrvOffStandstillVelThres = 1.0F;
                          /* Variable: P_LongCtrl_FollowDrvOffStandstillVelThres
                           * Referenced by: '<S17>/PLAN'
                           */
real32_T rtP_P_LongCtrl_FollowDrvOffVelCorrVelFullFillOverride = 0.2F;
                  /* Variable: P_LongCtrl_FollowDrvOffVelCorrVelFullFillOverride
                   * Referenced by: '<S17>/PLAN'
                   */
real32_T rtP_P_LongCtrl_FollowDrvOffVelExitDistCorrNoOverride = 0.5F;
                   /* Variable: P_LongCtrl_FollowDrvOffVelExitDistCorrNoOverride
                    * Referenced by: '<S17>/PLAN'
                    */
real32_T rtP_P_LongCtrl_FollowDrvOffVelExitDistCorrOverride = 0.8F;
                     /* Variable: P_LongCtrl_FollowDrvOffVelExitDistCorrOverride
                      * Referenced by: '<S17>/PLAN'
                      */
real32_T rtP_P_LongCtrl_FollowDrvOffVelExitVelCorrNoOverride = 0.2F;
                    /* Variable: P_LongCtrl_FollowDrvOffVelExitVelCorrNoOverride
                     * Referenced by: '<S17>/PLAN'
                     */
real32_T rtP_P_LongCtrl_FollowDrvOffVelExitVelCorrOverride = 0.3F;
                      /* Variable: P_LongCtrl_FollowDrvOffVelExitVelCorrOverride
                       * Referenced by: '<S17>/PLAN'
                       */
real32_T rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff = 0.4F;
                         /* Variable: P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff = 3.0F;
                        /* Variable: P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff
                         * Referenced by: '<S17>/PLAN'
                         */
real32_T rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions = 1.0F;
                   /* Variable: P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions
                    * Referenced by: '<S17>/PLAN'
                    */
real32_T rtP_P_LongCtrl_FollowJerkCharAccelJerkYAxis[7] = { 1.5F, 1.4F, 1.3F,
  1.2F, 1.1F, 1.0F, 1.0F } ;/* Variable: P_LongCtrl_FollowJerkCharAccelJerkYAxis
                             * Referenced by: '<S17>/PLAN'
                             */

real32_T rtP_P_LongCtrl_FollowQuickAccelTargAbsEnableThres = -0.6F;
                      /* Variable: P_LongCtrl_FollowQuickAccelTargAbsEnableThres
                       * Referenced by: '<S17>/PLAN'
                       */
real32_T rtP_P_LongCtrl_FollowQuickDecelAccelDesMax = -0.6F;
                             /* Variable: P_LongCtrl_FollowQuickDecelAccelDesMax
                              * Referenced by: '<S17>/PLAN'
                              */
real32_T rtP_P_LongCtrl_FollowQuickDecelDiffDistRel2DesThres = 0.5F;
                    /* Variable: P_LongCtrl_FollowQuickDecelDiffDistRel2DesThres
                     * Referenced by: '<S17>/PLAN'
                     */
real32_T rtP_P_LongCtrl_FollowQuickDecelVelSubjThres = 100.0F;
                            /* Variable: P_LongCtrl_FollowQuickDecelVelSubjThres
                             * Referenced by: '<S17>/PLAN'
                             */
real32_T rtP_P_LongCtrl_FollowQuickDecelVelTargRelThres = -1.0F;
                         /* Variable: P_LongCtrl_FollowQuickDecelVelTargRelThres
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_FollowRateJConditionStep = 0.15F;
                                /* Variable: P_LongCtrl_FollowRateJConditionStep
                                 * Referenced by: '<S17>/PLAN'
                                 */
real32_T rtP_P_LongCtrl_FollowRateJDirStep = 0.3F;
                                      /* Variable: P_LongCtrl_FollowRateJDirStep
                                       * Referenced by: '<S17>/PLAN'
                                       */
real32_T rtP_P_LongCtrl_FollowTFiltP0XAxis[2] = { -1.0F, 0.0F } ;
                                      /* Variable: P_LongCtrl_FollowTFiltP0XAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */

real32_T rtP_P_LongCtrl_FollowTFiltP0YAxis[2] = { 0.15F, 0.5F } ;
                                      /* Variable: P_LongCtrl_FollowTFiltP0YAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */

real32_T rtP_P_LongCtrl_FollowVelCharAccelJerkXAxis[7] = { 0.0F, 1.0F, 2.0F,
  3.0F, 5.0F, 10.0F, 30.0F } ;
                             /* Variable: P_LongCtrl_FollowVelCharAccelJerkXAxis
                              * Referenced by: '<S17>/PLAN'
                              */

real32_T rtP_P_LongCtrl_FollowVelCharCoefEnlargeAccelStartUpAssistXAxis[2] = {
  0.0F, 3.0F } ;
         /* Variable: P_LongCtrl_FollowVelCharCoefEnlargeAccelStartUpAssistXAxis
          * Referenced by: '<S17>/PLAN'
          */

real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddX1Axis[2] = { 0.0F, 9.0F } ;
                      /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddX1Axis
                       * Referenced by: '<S17>/PLAN'
                       */

real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddX2Axis[2] = { -4.0F, -1.5F }
;                     /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddX2Axis
                       * Referenced by: '<S17>/PLAN'
                       */

real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddYAxis[4] = { -5.0F, 0.0F,
  -5.0F, 0.0F } ;      /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddYAxis
                        * Referenced by: '<S17>/PLAN'
                        */

real32_T rtP_P_LongCtrl_FollowVelSubjThresForceStopXAxis[2] = { 0.3F, 2.0F } ;
                        /* Variable: P_LongCtrl_FollowVelSubjThresForceStopXAxis
                         * Referenced by: '<S17>/PLAN'
                         */

real32_T rtP_P_LongCtrl_FollowVelSubjThresForceStopYAxis[2] = { 0.1F, 0.5F } ;
                        /* Variable: P_LongCtrl_FollowVelSubjThresForceStopYAxis
                         * Referenced by: '<S17>/PLAN'
                         */

real32_T rtP_P_LongCtrl_FollowVelSubjThresStartUpAssistEnable = 8.0F;
                   /* Variable: P_LongCtrl_FollowVelSubjThresStartUpAssistEnable
                    * Referenced by: '<S17>/PLAN'
                    */
real32_T rtP_P_LongCtrl_FollowVelTargAbsThresStartUpAssistEnable = 0.5F;
                /* Variable: P_LongCtrl_FollowVelTargAbsThresStartUpAssistEnable
                 * Referenced by: '<S17>/PLAN'
                 */
real32_T rtP_P_LongCtrl_FollowVelTargetAbsSmoothNum = 0.2F;
                             /* Variable: P_LongCtrl_FollowVelTargetAbsSmoothNum
                              * Referenced by: '<S17>/PLAN'
                              */
real32_T rtP_P_LongCtrl_FollowWdCoefXAxis[3] = { 0.1F, 2.0F, 3.0F } ;/* Variable: P_LongCtrl_FollowWdCoefXAxis
                                                                      * Referenced by: '<S17>/PLAN'
                                                                      */

real32_T rtP_P_LongCtrl_FollowWdCoefYAxis[3] = { 0.5F, 0.1F, 0.1F } ;/* Variable: P_LongCtrl_FollowWdCoefYAxis
                                                                      * Referenced by: '<S17>/PLAN'
                                                                      */

real32_T rtP_P_LongCtrl_FollowWvCoefXAxis[4] = { -5.0F, -2.0F, 0.0F, 2.0F } ;/* Variable: P_LongCtrl_FollowWvCoefXAxis
                                                                      * Referenced by: '<S17>/PLAN'
                                                                      */

real32_T rtP_P_LongCtrl_FollowWvCoefYAxis[4] = { 1.2F, 0.2F, 0.1F, 0.1F } ;/* Variable: P_LongCtrl_FollowWvCoefYAxis
                                                                      * Referenced by: '<S17>/PLAN'
                                                                      */

real32_T rtP_P_LongCtrl_FollowaccelFollowDesThresEnableStopXAxis[2] = { 3.0F,
  4.0F } ;      /* Variable: P_LongCtrl_FollowaccelFollowDesThresEnableStopXAxis
                 * Referenced by: '<S17>/PLAN'
                 */

real32_T rtP_P_LongCtrl_FollowaccelFollowDesThresEnableStopYAxis[2] = { 0.35F,
  0.18F } ;     /* Variable: P_LongCtrl_FollowaccelFollowDesThresEnableStopYAxis
                 * Referenced by: '<S17>/PLAN'
                 */

real32_T rtP_P_LongCtrl_FollowaccelForceStopMinCharXAxis[2] = { 1.0F, 3.0F } ;
                        /* Variable: P_LongCtrl_FollowaccelForceStopMinCharXAxis
                         * Referenced by: '<S17>/PLAN'
                         */

real32_T rtP_P_LongCtrl_FollowaccelForceStopMinCharYAxis[2] = { -2.0F, -4.0F } ;
                        /* Variable: P_LongCtrl_FollowaccelForceStopMinCharYAxis
                         * Referenced by: '<S17>/PLAN'
                         */

real32_T rtP_P_LongCtrl_FollowaccelMinAccelSupressionEnter = -1.2F;
                      /* Variable: P_LongCtrl_FollowaccelMinAccelSupressionEnter
                       * Referenced by: '<S17>/PLAN'
                       */
real32_T rtP_P_LongCtrl_FollowaccelMinAccelSupressionExit = -1.5F;
                       /* Variable: P_LongCtrl_FollowaccelMinAccelSupressionExit
                        * Referenced by: '<S17>/PLAN'
                        */
real32_T rtP_P_LongCtrl_FollowaccelStopMax = -0.3F;
                                      /* Variable: P_LongCtrl_FollowaccelStopMax
                                       * Referenced by: '<S17>/PLAN'
                                       */
real32_T rtP_P_LongCtrl_FollowaccelSupressionAccelThres = 0.1F;
                         /* Variable: P_LongCtrl_FollowaccelSupressionAccelThres
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableNegJerk = -4.0F;
                         /* Variable: P_LongCtrl_FollowaccelTargAbsEnableNegJerk
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableNegMax = -0.5F;
                          /* Variable: P_LongCtrl_FollowaccelTargAbsEnableNegMax
                           * Referenced by: '<S17>/PLAN'
                           */
real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnablePosJerk = 3.0F;
                         /* Variable: P_LongCtrl_FollowaccelTargAbsEnablePosJerk
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableRangeMax = -0.4F;
                        /* Variable: P_LongCtrl_FollowaccelTargAbsEnableRangeMax
                         * Referenced by: '<S17>/PLAN'
                         */
real32_T rtP_P_LongCtrl_FollowaccelTargAbsExitNegMin = -0.2F;
                            /* Variable: P_LongCtrl_FollowaccelTargAbsExitNegMin
                             * Referenced by: '<S17>/PLAN'
                             */
real32_T rtP_P_LongCtrl_FollowaccelTargThresEnableStop = 0.5F;
                          /* Variable: P_LongCtrl_FollowaccelTargThresEnableStop
                           * Referenced by: '<S17>/PLAN'
                           */
real32_T rtP_P_LongCtrl_FollowaccelTargThresForceStop = 0.1F;
                           /* Variable: P_LongCtrl_FollowaccelTargThresForceStop
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_LongCtrl_FollowaccelThresActiveTOR = -5.5F;
                               /* Variable: P_LongCtrl_FollowaccelThresActiveTOR
                                * Referenced by: '<S17>/PLAN'
                                */
real32_T rtP_P_LongCtrl_FollowcoefAccelFadeOutPlauCheck = 0.97F;
                         /* Variable: P_LongCtrl_FollowcoefAccelFadeOutPlauCheck
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_FollowcoefAccelStandstillOverride = 2.5F;
                       /* Variable: P_LongCtrl_FollowcoefAccelStandstillOverride
                        * Referenced by: '<S17>/PLAN'
                        */
real32_T rtP_P_LongCtrl_FollowcoefDistEnlargeDecToStop = 5.0F;
                          /* Variable: P_LongCtrl_FollowcoefDistEnlargeDecToStop
                           * Referenced by: '<S17>/PLAN'
                           */
real32_T rtP_P_LongCtrl_FollowcoefDistRelThresActiveTOR = 0.3F;
                         /* Variable: P_LongCtrl_FollowcoefDistRelThresActiveTOR
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_FollowcoefVelEnlargeDecToStop = 5.0F;
                           /* Variable: P_LongCtrl_FollowcoefVelEnlargeDecToStop
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_LongCtrl_FollowdecelJerkCharXAxis[6] = { 0.1F, 0.5F, 1.0F, 2.0F,
  5.0F, 10.0F } ;               /* Variable: P_LongCtrl_FollowdecelJerkCharXAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */

real32_T rtP_P_LongCtrl_FollowdecelJerkCharYAxis[6] = { -5.0F, -4.5F, -4.0F,
  -3.0F, -1.8F, -1.0F } ;       /* Variable: P_LongCtrl_FollowdecelJerkCharYAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */

real32_T rtP_P_LongCtrl_FollowdistDesCompensionXAxis[2] = { 5.0F, 30.0F } ;
                            /* Variable: P_LongCtrl_FollowdistDesCompensionXAxis
                             * Referenced by: '<S17>/PLAN'
                             */

real32_T rtP_P_LongCtrl_FollowdistDesCompensionYAxis[2] = { 3.0F, 15.0F } ;
                            /* Variable: P_LongCtrl_FollowdistDesCompensionYAxis
                             * Referenced by: '<S17>/PLAN'
                             */

real32_T rtP_P_LongCtrl_FollowdistDesStopMin = 3.5F;
                                    /* Variable: P_LongCtrl_FollowdistDesStopMin
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_LongCtrl_FollowdistDesX2Axis[6] = { 0.0F, 2.6F, 17.0F, 25.0F,
  35.0F, 60.0F } ;                   /* Variable: P_LongCtrl_FollowdistDesX2Axis
                                      * Referenced by: '<S17>/PLAN'
                                      */

real32_T rtP_P_LongCtrl_FollowdistDesYAxis[24] = { 3.2F, 3.3F, 3.4F, 3.5F, 8.5F,
  9.0F, 9.5F, 10.0F, 23.0F, 26.0F, 28.0F, 34.0F, 37.0F, 42.0F, 47.0F, 54.0F,
  49.0F, 56.0F, 63.0F, 71.0F, 70.0F, 75.0F, 80.0F, 85.0F } ;
                                      /* Variable: P_LongCtrl_FollowdistDesYAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */

real32_T rtP_P_LongCtrl_FollowdistRelDevCalcDistConst = 0.5F;
                           /* Variable: P_LongCtrl_FollowdistRelDevCalcDistConst
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_LongCtrl_FollowdistRelMaxJudgeStationaryTarget = 4.0F;
                   /* Variable: P_LongCtrl_FollowdistRelMaxJudgeStationaryTarget
                    * Referenced by: '<S17>/PLAN'
                    */
real32_T rtP_P_LongCtrl_FollowdistRelThresEnablePlauCheck = 4.0F;
                       /* Variable: P_LongCtrl_FollowdistRelThresEnablePlauCheck
                        * Referenced by: '<S17>/PLAN'
                        */
real32_T rtP_P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres = 20.0F;
                /* Variable: P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres
                 * Referenced by: '<S17>/PLAN'
                 */
real32_T rtP_P_LongCtrl_FollowdistThresEnableStop = 5.0F;
                               /* Variable: P_LongCtrl_FollowdistThresEnableStop
                                * Referenced by: '<S17>/PLAN'
                                */
real32_T rtP_P_LongCtrl_FollowgapThresActiveTOR = 1.5F;
                                 /* Variable: P_LongCtrl_FollowgapThresActiveTOR
                                  * Referenced by: '<S17>/PLAN'
                                  */
real32_T rtP_P_LongCtrl_FollowjerkForceStopCharXAxis[3] = { 0.3F, 1.0F, 2.0F } ;
                            /* Variable: P_LongCtrl_FollowjerkForceStopCharXAxis
                             * Referenced by: '<S17>/PLAN'
                             */

real32_T rtP_P_LongCtrl_FollowjerkForceStopCharYAxis[3] = { -0.025F, -0.25F,
  -0.5F } ;                 /* Variable: P_LongCtrl_FollowjerkForceStopCharYAxis
                             * Referenced by: '<S17>/PLAN'
                             */

real32_T rtP_P_LongCtrl_FollowtStartUpAssistEnableMax = 15.0F;
                           /* Variable: P_LongCtrl_FollowtStartUpAssistEnableMax
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_LongCtrl_FollowttcCorrDecelJerkXAxis[4] = { 1.0F, 10.0F, 20.0F,
  100.0F } ;                 /* Variable: P_LongCtrl_FollowttcCorrDecelJerkXAxis
                              * Referenced by: '<S17>/PLAN'
                              */

real32_T rtP_P_LongCtrl_FollowttcCorrDecelJerkYAxis[4] = { 1.0F, 0.8F, 0.5F,
  0.1F } ;                   /* Variable: P_LongCtrl_FollowttcCorrDecelJerkYAxis
                              * Referenced by: '<S17>/PLAN'
                              */

real32_T rtP_P_LongCtrl_FollowvelRelThresEnablePlauCheck = -1.0F;
                        /* Variable: P_LongCtrl_FollowvelRelThresEnablePlauCheck
                         * Referenced by: '<S17>/PLAN'
                         */
real32_T rtP_P_LongCtrl_FollowvelSubjMaxEnablePlauCheck = 2.5F;
                         /* Variable: P_LongCtrl_FollowvelSubjMaxEnablePlauCheck
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_FollowvelSubjThresEnablePlauCheck = 0.5F;
                       /* Variable: P_LongCtrl_FollowvelSubjThresEnablePlauCheck
                        * Referenced by: '<S17>/PLAN'
                        */
real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStop = 0.6F;
                            /* Variable: P_LongCtrl_FollowvelSubjThresEnableStop
                             * Referenced by: '<S17>/PLAN'
                             */
real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStopAddXAxis[2] = { 0.0F, 1.0F }
;                   /* Variable: P_LongCtrl_FollowvelSubjThresEnableStopAddXAxis
                     * Referenced by: '<S17>/PLAN'
                     */

real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStopAddYAxis[2] = { 0.0F, 0.6F }
;                   /* Variable: P_LongCtrl_FollowvelSubjThresEnableStopAddYAxis
                     * Referenced by: '<S17>/PLAN'
                     */

real32_T rtP_P_LongCtrl_FollowvelTarAbsThresForceStop = 0.2F;
                           /* Variable: P_LongCtrl_FollowvelTarAbsThresForceStop
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_LongCtrl_FollowvelTargAbsMaxJudgeStationaryTarget = 0.2F;
                /* Variable: P_LongCtrl_FollowvelTargAbsMaxJudgeStationaryTarget
                 * Referenced by: '<S17>/PLAN'
                 */
real32_T rtP_P_LongCtrl_FollowvelTargRelThresActiveTOR = -1.0F;
                          /* Variable: P_LongCtrl_FollowvelTargRelThresActiveTOR
                           * Referenced by: '<S17>/PLAN'
                           */
real32_T rtP_P_LongCtrl_ICCurvatureLimitSpdXAxis[10] = { 0.0F, 0.0005F, 0.001F,
  0.002F, 0.005F, 0.01F, 0.02F, 0.05F, 0.1F, 0.2F } ;
                                /* Variable: P_LongCtrl_ICCurvatureLimitSpdXAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */

real32_T rtP_P_LongCtrl_ICCurvatureLimitSpdYAxis[10] = { 150.0F, 150.0F, 100.0F,
  65.0F, 45.0F, 35.0F, 30.0F, 20.0F, 10.0F, 5.0F } ;
                                /* Variable: P_LongCtrl_ICCurvatureLimitSpdYAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */

real32_T rtP_P_LongCtrl_ICCurvatureMapLimitSpdXAxis[10] = { 0.0F, 0.0005F,
  0.001F, 0.002F, 0.005F, 0.01F, 0.02F, 0.05F, 0.1F, 0.2F } ;
                             /* Variable: P_LongCtrl_ICCurvatureMapLimitSpdXAxis
                              * Referenced by: '<S17>/PLAN'
                              */

real32_T rtP_P_LongCtrl_ICCurvatureMapLimitSpdYAxis[10] = { 150.0F, 150.0F,
  100.0F, 70.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 5.0F } ;
                             /* Variable: P_LongCtrl_ICCurvatureMapLimitSpdYAxis
                              * Referenced by: '<S17>/PLAN'
                              */

real32_T rtP_P_LongCtrl_ICKapLimitAccelXAxis[10] = { 0.0F, 0.0005F, 0.001F,
  0.002F, 0.005F, 0.01F, 0.02F, 0.05F, 0.1F, 0.2F } ;
                                    /* Variable: P_LongCtrl_ICKapLimitAccelXAxis
                                     * Referenced by: '<S17>/PLAN'
                                     */

real32_T rtP_P_LongCtrl_ICKapLimitAccelYAxis[10] = { 16.0F, 16.0F, 16.0F, 8.0F,
  1.5F, 0.8F, 0.5F, 0.4F, 0.3F, 0.2F } ;
                                    /* Variable: P_LongCtrl_ICKapLimitAccelYAxis
                                     * Referenced by: '<S17>/PLAN'
                                     */

real32_T rtP_P_LongCtrl_ICKapLimitSpdXAxis[10] = { 0.0F, 0.0005F, 0.001F, 0.002F,
  0.005F, 0.01F, 0.02F, 0.05F, 0.1F, 0.2F } ;
                                      /* Variable: P_LongCtrl_ICKapLimitSpdXAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */

real32_T rtP_P_LongCtrl_ICKapLimitSpdYAxis[10] = { 150.0F, 150.0F, 150.0F,
  150.0F, 150.0F, 100.0F, 60.0F, 40.0F, 20.0F, 10.0F } ;
                                      /* Variable: P_LongCtrl_ICKapLimitSpdYAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */

real32_T rtP_P_LongCtrl_ICKapUpperJerkMin = 1.0F;/* Variable: P_LongCtrl_ICKapUpperJerkMin
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
real32_T rtP_P_LongCtrl_ICUpperJerkNegVLCInternalAcc = 4.0F;
                            /* Variable: P_LongCtrl_ICUpperJerkNegVLCInternalAcc
                             * Referenced by: '<S17>/PLAN'
                             */
real32_T rtP_P_LongCtrl_ICaccelThresEnableLine = -1.0F;
                                  /* Variable: P_LongCtrl_ICaccelThresEnableLine
                                   * Referenced by: '<S17>/PLAN'
                                   */
real32_T rtP_P_LongCtrl_ICcoefCurvatureCharX1[4] = { 0.0F, 0.0025F, 0.0035F,
  0.0045F } ;                      /* Variable: P_LongCtrl_ICcoefCurvatureCharX1
                                    * Referenced by: '<S17>/PLAN'
                                    */

real32_T rtP_P_LongCtrl_ICcoefCurvatureCharX2[4] = { 0.00015F, 0.0025F, 0.0035F,
  0.0045F } ;                      /* Variable: P_LongCtrl_ICcoefCurvatureCharX2
                                    * Referenced by: '<S17>/PLAN'
                                    */

real32_T rtP_P_LongCtrl_ICcoefCurvatureCharY[16] = { 0.1F, 0.1F, 0.15F, 0.2F,
  0.1F, 0.3F, 0.6F, 0.6F, 0.1F, 0.6F, 0.8F, 0.8F, 0.1F, 0.3F, 0.6F, 1.0F } ;
                                    /* Variable: P_LongCtrl_ICcoefCurvatureCharY
                                     * Referenced by: '<S17>/PLAN'
                                     */

real32_T rtP_P_LongCtrl_ICdeltaAccelLowerBand = 0.2F;
                                   /* Variable: P_LongCtrl_ICdeltaAccelLowerBand
                                    * Referenced by: '<S17>/PLAN'
                                    */
real32_T rtP_P_LongCtrl_ICdeltaAccelUpperBand = 0.2F;
                                   /* Variable: P_LongCtrl_ICdeltaAccelUpperBand
                                    * Referenced by: '<S17>/PLAN'
                                    */
real32_T rtP_P_LongCtrl_IClowerJerkICCharXAxis[3] = { -2.0F, -1.0F, 0.0F } ;
                                  /* Variable: P_LongCtrl_IClowerJerkICCharXAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */

real32_T rtP_P_LongCtrl_IClowerJerkICCharYAxis[3] = { -0.8F, -0.4F, -0.1F } ;
                                  /* Variable: P_LongCtrl_IClowerJerkICCharYAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */

real32_T rtP_P_LongCtrl_IClowerJerkPosVLCInternalAccMax = -0.1F;
                         /* Variable: P_LongCtrl_IClowerJerkPosVLCInternalAccMax
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_IClowerJerkPosVLCInternalAccMin = -2.0F;
                         /* Variable: P_LongCtrl_IClowerJerkPosVLCInternalAccMin
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_ICtAcceleTimeNegCurvatureMap = 10.0F;
                            /* Variable: P_LongCtrl_ICtAcceleTimeNegCurvatureMap
                             * Referenced by: '<S17>/PLAN'
                             */
real32_T rtP_P_LongCtrl_ICtAcceleTimePosCurvatureMap = 5.0F;
                            /* Variable: P_LongCtrl_ICtAcceleTimePosCurvatureMap
                             * Referenced by: '<S17>/PLAN'
                             */
real32_T rtP_P_LongCtrl_ICtDecel = 5.5F;/* Variable: P_LongCtrl_ICtDecel
                                         * Referenced by: '<S17>/PLAN'
                                         */
real32_T rtP_P_LongCtrl_ICupperJerkICCharXAxis[4] = { -2.0F, -1.0F, 0.0F, 1.0F }
;                                 /* Variable: P_LongCtrl_ICupperJerkICCharXAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */

real32_T rtP_P_LongCtrl_ICupperJerkICCharYAxis[4] = { 2.0F, 1.0F, 0.15F, 0.5F } ;
                                  /* Variable: P_LongCtrl_ICupperJerkICCharYAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */

real32_T rtP_P_LongCtrl_KeepLaneSurDis = 5.0F;/* Variable: P_LongCtrl_KeepLaneSurDis
                                               * Referenced by: '<S17>/PLAN'
                                               */
real32_T rtP_P_LongCtrl_KeepLaneTime = 0.3F;/* Variable: P_LongCtrl_KeepLaneTime
                                             * Referenced by: '<S17>/PLAN'
                                             */
real32_T rtP_P_LongCtrl_LaneAvailDis = 10.0F;/* Variable: P_LongCtrl_LaneAvailDis
                                              * Referenced by: '<S17>/PLAN'
                                              */
real32_T rtP_P_LongCtrl_LaneAvailStd = 0.3F;/* Variable: P_LongCtrl_LaneAvailStd
                                             * Referenced by: '<S17>/PLAN'
                                             */
real32_T rtP_P_LongCtrl_LaneAvailStdAverage = 0.15F;
                                     /* Variable: P_LongCtrl_LaneAvailStdAverage
                                      * Referenced by: '<S17>/PLAN'
                                      */
real32_T rtP_P_LongCtrl_LaneAvailStdMax = 0.4F;/* Variable: P_LongCtrl_LaneAvailStdMax
                                                * Referenced by: '<S17>/PLAN'
                                                */
real32_T rtP_P_LongCtrl_LaneAvailTime = 1.0F;/* Variable: P_LongCtrl_LaneAvailTime
                                              * Referenced by: '<S17>/PLAN'
                                              */
real32_T rtP_P_LongCtrl_ORDaccelDevLowerBand = 0.2F;
                                    /* Variable: P_LongCtrl_ORDaccelDevLowerBand
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_LongCtrl_ORDaccelDevUpperBand = 0.2F;
                                    /* Variable: P_LongCtrl_ORDaccelDevUpperBand
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_LongCtrl_ORDlowerJerk = -2.0F;/* Variable: P_LongCtrl_ORDlowerJerk
                                              * Referenced by: '<S17>/PLAN'
                                              */
real32_T rtP_P_LongCtrl_ORDtAcceleTimeNeg = 20.0F;/* Variable: P_LongCtrl_ORDtAcceleTimeNeg
                                                   * Referenced by: '<S17>/PLAN'
                                                   */
real32_T rtP_P_LongCtrl_ORDtAcceleTimePos = 5.0F;/* Variable: P_LongCtrl_ORDtAcceleTimePos
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
real32_T rtP_P_LongCtrl_ORDupperJerk = 2.0F;/* Variable: P_LongCtrl_ORDupperJerk
                                             * Referenced by: '<S17>/PLAN'
                                             */
real32_T rtP_P_LongCtrl_ORDvelDeltaEnableThres = 1.0F;
                                  /* Variable: P_LongCtrl_ORDvelDeltaEnableThres
                                   * Referenced by: '<S17>/PLAN'
                                   */
real32_T rtP_P_LongCtrl_SJVlcInternalAccThresEnableBrkPrefer = 0.3F;
                    /* Variable: P_LongCtrl_SJVlcInternalAccThresEnableBrkPrefer
                     * Referenced by: '<S17>/PLAN'
                     */
real32_T rtP_P_LongCtrl_SJaccelFollowThresEnableBrkPrefer = 0.0F;
                       /* Variable: P_LongCtrl_SJaccelFollowThresEnableBrkPrefer
                        * Referenced by: '<S17>/PLAN'
                        */
real32_T rtP_P_LongCtrl_SJaccelSubjPlanOptThresEnableBrkPrefer = -1.3F;
                  /* Variable: P_LongCtrl_SJaccelSubjPlanOptThresEnableBrkPrefer
                   * Referenced by: '<S17>/PLAN'
                   */
real32_T rtP_P_LongCtrl_SJaccelSubjThresEnableBrkPrefer = -0.5F;
                         /* Variable: P_LongCtrl_SJaccelSubjThresEnableBrkPrefer
                          * Referenced by: '<S17>/PLAN'
                          */
real32_T rtP_P_LongCtrl_SJaxvRoadSlopeThresEnableBrkPrefer = 0.3F;
                      /* Variable: P_LongCtrl_SJaxvRoadSlopeThresEnableBrkPrefer
                       * Referenced by: '<S17>/PLAN'
                       */
real32_T rtP_P_LongCtrl_SJdStop = 4.0F;/* Variable: P_LongCtrl_SJdStop
                                        * Referenced by: '<S17>/PLAN'
                                        */
real32_T rtP_P_LongCtrl_SJttcThresEnableBrkPrefer = 10.0F;
                               /* Variable: P_LongCtrl_SJttcThresEnableBrkPrefer
                                * Referenced by: '<S17>/PLAN'
                                */
real32_T rtP_P_LongCtrl_SJvelSubjThresEnableBrkPrefer = 3.6F;
                           /* Variable: P_LongCtrl_SJvelSubjThresEnableBrkPrefer
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_LongCtrl_WaitTime = 0.3F;/* Variable: P_LongCtrl_WaitTime
                                         * Referenced by: '<S17>/PLAN'
                                         */
real32_T rtP_P_LongCtrl_accelTargAbsThrd = -2.5F;/* Variable: P_LongCtrl_accelTargAbsThrd
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
real32_T rtP_P_LongCtrl_distThreDecToStopXAxis[3] = { 0.0F, 0.2F, 0.5F } ;
                                  /* Variable: P_LongCtrl_distThreDecToStopXAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */

real32_T rtP_P_LongCtrl_distThreDecToStopYAxis[3] = { 20.0F, 1.0F, 0.1F } ;
                                  /* Variable: P_LongCtrl_distThreDecToStopYAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */

real32_T rtP_P_LongCtrl_tCycle = 0.02F;/* Variable: P_LongCtrl_tCycle
                                        * Referenced by: '<S17>/PLAN'
                                        */
real32_T rtP_P_LongCtrl_velSubjThreDecToStop = 3.0F;
                                    /* Variable: P_LongCtrl_velSubjThreDecToStop
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_LongCtrl_velTargetThreDecleToStop = 1.0F;
                                /* Variable: P_LongCtrl_velTargetThreDecleToStop
                                 * Referenced by: '<S17>/PLAN'
                                 */
real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv1 = 0.0F;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv1
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv2 = 0.1F;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv2
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv3 = 0.15F;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv3
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_PLAN_ALC_DynamicDPCthreshold = 0.15F;
                                     /* Variable: P_PLAN_ALC_DynamicDPCthreshold
                                      * Referenced by: '<S17>/PLAN'
                                      */
real32_T rtP_P_PLAN_ALC_FWheelPreTime = 0.6F;/* Variable: P_PLAN_ALC_FWheelPreTime
                                              * Referenced by: '<S17>/PLAN'
                                              */
real32_T rtP_P_PLAN_ALC_LCDeltaTmeGap = 4.0F;/* Variable: P_PLAN_ALC_LCDeltaTmeGap
                                              * Referenced by: '<S17>/PLAN'
                                              */
real32_T rtP_P_PLAN_ALC_LcCancelDPCThreshold = 0.8F;
                                    /* Variable: P_PLAN_ALC_LcCancelDPCThreshold
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_PLAN_ALC_LcCancelRoadWidthOffset = 0.0F;
                                 /* Variable: P_PLAN_ALC_LcCancelRoadWidthOffset
                                  * Referenced by: '<S17>/PLAN'
                                  */
real32_T rtP_P_PLAN_ALC_LcCancelRoadWidthOffsetForDPC = 0.0F;
                           /* Variable: P_PLAN_ALC_LcCancelRoadWidthOffsetForDPC
                            * Referenced by: '<S17>/PLAN'
                            */
real32_T rtP_P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints[14] = { 10.0F, 20.0F,
  30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F,
  130.0F, 140.0F } ; /* Variable: P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints
                      * Referenced by: '<S17>/PLAN'
                      */

real32_T rtP_P_PLAN_ALC_LcCurvatureInhibitionValueTable[14] = { 0.022F, 0.01F,
  0.0059F, 0.0038F, 0.0025F, 0.0018F, 0.0012F, 0.0009F, 0.0006F, 0.0004F,
  0.0003F, 0.0002F, 0.0001F, 0.0001F } ;
                         /* Variable: P_PLAN_ALC_LcCurvatureInhibitionValueTable
                          * Referenced by: '<S17>/PLAN'
                          */

real32_T rtP_P_PLAN_ALC_LcDrvHMILineValidFtime = 2.0F;
                                  /* Variable: P_PLAN_ALC_LcDrvHMILineValidFtime
                                   * Referenced by: '<S17>/PLAN'
                                   */
real32_T rtP_P_PLAN_ALC_LcDrv_DyDiffThreshold = 1.2F;
                                   /* Variable: P_PLAN_ALC_LcDrv_DyDiffThreshold
                                    * Referenced by: '<S17>/PLAN'
                                    */
real32_T rtP_P_PLAN_ALC_LcFinishDyDiffBrkPoint[4] = { 10.0F, 80.0F, 100.0F,
  120.0F } ;                      /* Variable: P_PLAN_ALC_LcFinishDyDiffBrkPoint
                                   * Referenced by: '<S17>/PLAN'
                                   */

real32_T rtP_P_PLAN_ALC_LcFinishDyDiffRwFactorForAP = 0.4F;
                             /* Variable: P_PLAN_ALC_LcFinishDyDiffRwFactorForAP
                              * Referenced by: '<S17>/PLAN'
                              */
real32_T rtP_P_PLAN_ALC_LcFinishDyDiffRwFactorForHMI = 0.57F;
                            /* Variable: P_PLAN_ALC_LcFinishDyDiffRwFactorForHMI
                             * Referenced by: '<S17>/PLAN'
                             */
real32_T rtP_P_PLAN_ALC_LcFinishDyDiffTableValue[4] = { 0.2F, 0.2F, 0.2F, 0.2F }
;                               /* Variable: P_PLAN_ALC_LcFinishDyDiffTableValue
                                 * Referenced by: '<S17>/PLAN'
                                 */

real32_T rtP_P_PLAN_ALC_LcOverTkDPCthreshold = 0.3F;
                                    /* Variable: P_PLAN_ALC_LcOverTkDPCthreshold
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_PLAN_ALC_LcOverTkRearVehTTClimit = 10.0F;
                                 /* Variable: P_PLAN_ALC_LcOverTkRearVehTTClimit
                                  * Referenced by: '<S17>/PLAN'
                                  */
real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv1 = 20.0F;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv1
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv2 = 15.0F;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv2
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv3 = 10.0F;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv3
                                     * Referenced by: '<S17>/PLAN'
                                     */
real32_T rtP_P_PLAN_ALC_OveTkrSupDist = 1000.0F;/* Variable: P_PLAN_ALC_OveTkrSupDist
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
real32_T rtP_P_PLAN_ALC_vMinPreLC_Noh = 15.0F;/* Variable: P_PLAN_ALC_vMinPreLC_Noh
                                               * Referenced by: '<S17>/PLAN'
                                               */
real32_T rtP_P_PLAN_ALC_vMinPreLC_OverTk = 56.0F;/* Variable: P_PLAN_ALC_vMinPreLC_OverTk
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
real32_T rtP_P_PLAN_DPC_FrontObj_DX_00[24] = { 215.0F, 150.0F, 89.0F, 82.0F,
  36.4F, 32.4F, 25.8F, 23.2F, 22.6F, 21.6F, 21.0F, 20.4F, 19.2F, 16.6F, 16.0F,
  15.4F, 15.2F, 14.4F, 13.2F, 13.2F, 12.4F, 11.2F, 11.2F, 11.2F } ;/* Variable: P_PLAN_DPC_FrontObj_DX_00
                                                                    * Referenced by: '<S17>/PLAN'
                                                                    */

real32_T rtP_P_PLAN_DPC_FrontObj_DX_03[24] = { 160.0F, 112.0F, 64.0F, 60.0F,
  30.4F, 28.6F, 23.0F, 21.8F, 20.5F, 18.2F, 16.9F, 15.6F, 14.6F, 13.0F, 12.8F,
  12.4F, 12.2F, 11.8F, 11.2F, 11.0F, 10.6F, 9.2F, 9.2F, 9.2F } ;/* Variable: P_PLAN_DPC_FrontObj_DX_03
                                                                 * Referenced by: '<S17>/PLAN'
                                                                 */

real32_T rtP_P_PLAN_DPC_FrontObj_DX_08[24] = { 82.0F, 58.0F, 31.2F, 29.2F, 16.0F,
  14.8F, 11.0F, 10.4F, 9.8F, 8.6F, 8.2F, 7.6F, 7.6F, 7.6F, 7.6F, 7.6F, 7.6F,
  7.6F, 7.6F, 7.6F, 7.6F, 7.6F, 7.6F, 7.6F } ;/* Variable: P_PLAN_DPC_FrontObj_DX_08
                                               * Referenced by: '<S17>/PLAN'
                                               */

real32_T rtP_P_PLAN_DPC_FrontObj_DX_1[24] = { 68.0F, 46.0F, 26.2F, 24.4F, 14.0F,
  12.8F, 9.0F, 8.4F, 7.8F, 6.6F, 6.2F, 5.6F, 5.6F, 5.6F, 5.6F, 5.6F, 5.6F, 5.6F,
  5.6F, 5.6F, 5.6F, 5.6F, 5.6F, 5.6F } ;/* Variable: P_PLAN_DPC_FrontObj_DX_1
                                         * Referenced by: '<S17>/PLAN'
                                         */

real32_T rtP_P_PLAN_DPC_HWALineRearA2Factor = 0.25F;
                                     /* Variable: P_PLAN_DPC_HWALineRearA2Factor
                                      * Referenced by: '<S17>/PLAN'
                                      */
real32_T rtP_P_PLAN_DPC_HWALineRearA3Factor = 0.1F;
                                     /* Variable: P_PLAN_DPC_HWALineRearA3Factor
                                      * Referenced by: '<S17>/PLAN'
                                      */
real32_T rtP_P_PLAN_DPC_HearObj_DX_00[24] = { -13.0F, -13.0F, -13.0F, -13.0F,
  -13.0F, -14.0F, -15.6F, -16.2F, -16.8F, -17.8F, -18.4F, -19.0F, -20.0F, -22.8F,
  -23.4F, -24.0F, -24.6F, -28.2F, -38.2F, -40.2F, -47.3F, -68.0F, -100.0F,
  -160.0F } ;                          /* Variable: P_PLAN_DPC_HearObj_DX_00
                                        * Referenced by: '<S17>/PLAN'
                                        */

real32_T rtP_P_PLAN_DPC_HearObj_DX_03[24] = { -7.0F, -7.0F, -7.0F, -7.0F, -7.0F,
  -7.0F, -8.1F, -9.0F, -9.4F, -10.2F, -10.8F, -11.2F, -12.4F, -15.2F, -15.6F,
  -16.2F, -16.8F, -19.4F, -24.2F, -25.6F, -30.4F, -48.5F, -86.4F, -140.0F } ;/* Variable: P_PLAN_DPC_HearObj_DX_03
                                                                      * Referenced by: '<S17>/PLAN'
                                                                      */

real32_T rtP_P_PLAN_DPC_HearObj_DX_08[24] = { -5.0F, -5.0F, -5.0F, -5.0F, -5.0F,
  -5.0F, -5.0F, -5.0F, -5.0F, -5.0F, -5.0F, -5.0F, -5.0F, -5.2F, -5.6F, -6.2F,
  -6.8F, -8.4F, -11.8F, -12.4F, -16.0F, -24.2F, -38.0F, -60.0F } ;/* Variable: P_PLAN_DPC_HearObj_DX_08
                                                                   * Referenced by: '<S17>/PLAN'
                                                                   */

real32_T rtP_P_PLAN_DPC_HearObj_DX_11[24] = { -2.0F, -2.0F, -2.0F, -2.0F, -2.0F,
  -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -3.2F, -3.6F, -4.2F,
  -4.8F, -6.4F, -9.2F, -9.8F, -12.6F, -19.2F, -30.0F, -30.0F } ;/* Variable: P_PLAN_DPC_HearObj_DX_11
                                                                 * Referenced by: '<S17>/PLAN'
                                                                 */

real32_T rtP_P_PLAN_DPC_ObjAxLPalpha = 0.05F;/* Variable: P_PLAN_DPC_ObjAxLPalpha
                                              * Referenced by: '<S17>/PLAN'
                                              */
real32_T rtP_P_PLAN_DPC_ObjDxLPalpha = 1.0F;/* Variable: P_PLAN_DPC_ObjDxLPalpha
                                             * Referenced by: '<S17>/PLAN'
                                             */
real32_T rtP_P_PLAN_DPC_ObjDyLPalpha = 0.1F;/* Variable: P_PLAN_DPC_ObjDyLPalpha
                                             * Referenced by: '<S17>/PLAN'
                                             */
real32_T rtP_P_PLAN_DPC_ObjVxLPalpha = 0.1F;/* Variable: P_PLAN_DPC_ObjVxLPalpha
                                             * Referenced by: '<S17>/PLAN'
                                             */
real32_T rtP_P_PLAN_DPC_danqianleida_maxDx = 60.0F;
                                      /* Variable: P_PLAN_DPC_danqianleida_maxDx
                                       * Referenced by: '<S17>/PLAN'
                                       */
real32_T rtP_P_PLAN_DPC_danqianleida_minDx = 10.0F;
                                      /* Variable: P_PLAN_DPC_danqianleida_minDx
                                       * Referenced by: '<S17>/PLAN'
                                       */
real32_T rtP_P_PLAN_DPC_xiangduisudu_kmh[24] = { -49.5F, -33.0F, -18.0F, -16.5F,
  -7.0F, -6.0F, -2.5F, -2.0F, -1.5F, -0.5F, 0.0F, 0.5F, 1.5F, 4.0F, 4.5F, 5.0F,
  5.5F, 7.0F, 9.5F, 10.0F, 12.5F, 18.5F, 30.0F, 50.0F } ;/* Variable: P_PLAN_DPC_xiangduisudu_kmh
                                                          * Referenced by: '<S17>/PLAN'
                                                          */

uint16_T rtP_P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt = 200U;
                         /* Variable: P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt
                          * Referenced by: '<S17>/PLAN'
                          */
boolean_T rtP_P_LongCtrl_AddVelEnable = 0;/* Variable: P_LongCtrl_AddVelEnable
                                           * Referenced by: '<S17>/PLAN'
                                           */
boolean_T rtP_P_LongCtrl_CCLCIncSetSpdEnable = 0;
                                     /* Variable: P_LongCtrl_CCLCIncSetSpdEnable
                                      * Referenced by: '<S17>/PLAN'
                                      */
boolean_T rtP_P_LongCtrl_FollowStartUpAssist = 1;
                                     /* Variable: P_LongCtrl_FollowStartUpAssist
                                      * Referenced by: '<S17>/PLAN'
                                      */
boolean_T rtP_P_LongCtrl_FollowVelSubjForceStopEnable = 1;
                            /* Variable: P_LongCtrl_FollowVelSubjForceStopEnable
                             * Referenced by: '<S17>/PLAN'
                             */
boolean_T rtP_P_LongCtrl_ICCurveDecelEnable = 1;
                                      /* Variable: P_LongCtrl_ICCurveDecelEnable
                                       * Referenced by: '<S17>/PLAN'
                                       */
boolean_T rtP_P_LongCtrl_IC_EHRV2Enable = 0;/* Variable: P_LongCtrl_IC_EHRV2Enable
                                             * Referenced by: '<S17>/PLAN'
                                             */
boolean_T rtP_P_LongCtrl_ORDdecelEnable = 0;/* Variable: P_LongCtrl_ORDdecelEnable
                                             * Referenced by: '<S17>/PLAN'
                                             */
boolean_T rtP_P_PLAN_DPC_danqianleida_kaiguan = 1;
                                    /* Variable: P_PLAN_DPC_danqianleida_kaiguan
                                     * Referenced by: '<S17>/PLAN'
                                     */
boolean_T rtP_P_PLAN_LcCancelTestEnable = 0;/* Variable: P_PLAN_LcCancelTestEnable
                                             * Referenced by: '<S17>/PLAN'
                                             */
uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntDrv = 50U;
                         /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntDrv
                          * Referenced by: '<S17>/PLAN'
                          */
uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntNoh = 0U;
                         /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntNoh
                          * Referenced by: '<S17>/PLAN'
                          */
uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntOverTk = 100U;
                      /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntOverTk
                       * Referenced by: '<S17>/PLAN'
                       */
uint8_T rtP_P_PLAN_ALC_LcDelayCntSetNoh = 0U;/* Variable: P_PLAN_ALC_LcDelayCntSetNoh
                                              * Referenced by: '<S17>/PLAN'
                                              */
uint8_T rtP_P_PLAN_ALC_LcDelayCntSetOverTk = 75U;
                                     /* Variable: P_PLAN_ALC_LcDelayCntSetOverTk
                                      * Referenced by: '<S17>/PLAN'
                                      */
uint8_T rtP_P_PLAN_ALC_LciDrvExistDefaultDisp = 0U;
                                  /* Variable: P_PLAN_ALC_LciDrvExistDefaultDisp
                                   * Referenced by: '<S17>/PLAN'
                                   */
uint8_T rtP_P_PLAN_ALC_NOHLcSwt = 1U;  /* Variable: P_PLAN_ALC_NOHLcSwt
                                        * Referenced by: '<S17>/PLAN'
                                        */
uint8_T rtP_P_PLAN_ALC_NOHTurnSts = 0U;/* Variable: P_PLAN_ALC_NOHTurnSts
                                        * Referenced by: '<S17>/PLAN'
                                        */
uint8_T rtP_P_PLAN_ALC_TurnLmpType = 0U;/* Variable: P_PLAN_ALC_TurnLmpType
                                         * Referenced by: '<S17>/PLAN'
                                         */
uint8_T rtP_P_PLAN_ALC_vMinPreLC_Drv = 40U;/* Variable: P_PLAN_ALC_vMinPreLC_Drv
                                            * Referenced by: '<S17>/PLAN'
                                            */
