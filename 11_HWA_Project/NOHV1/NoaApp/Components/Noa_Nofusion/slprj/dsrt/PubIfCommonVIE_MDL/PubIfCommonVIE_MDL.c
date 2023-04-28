/*
 * Code generation for system model 'PubIfCommonVIE_MDL'
 *
 * Model                      : PubIfCommonVIE_MDL
 * Model version              : 3.34
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:54 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "PubIfCommonVIE_MDL.h"
#include "PubIfCommonVIE_MDL_private.h"
#include "look1_iflf_binlxpw.h"

/* Exported block signals */
uint32_T VIE_SW_VERSION;               /* '<Root>/Constant' */
real32_T VSM_SteerAngOffsetInit;       /* '<S2>/Signal Conversion' */
real32_T VSM_SteerAngleOffset_deg;     /* '<S19>/Merge' */
MdlrefDW_PubIfCommonVIE_MDL_T PubIfCommonVIE_MDL_MdlrefDW;

/* Block signals (default storage) */
B_PubIfCommonVIE_MDL_c_T PubIfCommonVIE_MDL_B;

/* Block states (default storage) */
DW_PubIfCommonVIE_MDL_f_T PubIfCommonVIE_MDL_DW;

/*
 * Output and update for action system:
 *    '<S15>/Switch Case Action Subsystem'
 *    '<S15>/Switch Case Action Subsystem1'
 *    '<S15>/Switch Case Action Subsystem2'
 *    '<S15>/Switch Case Action Subsystem3'
 *    '<S16>/Switch Case Action Subsystem'
 *    '<S16>/Switch Case Action Subsystem1'
 *    '<S16>/Switch Case Action Subsystem2'
 *    '<S16>/Switch Case Action Subsystem3'
 *    '<S17>/Switch Case Action Subsystem'
 *    '<S17>/Switch Case Action Subsystem1'
 *    ...
 */
void PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(real32_T rtu_In1, real32_T
  *rty_Out1)
{
  /* Inport: '<S28>/In1' */
  *rty_Out1 = rtu_In1;
}

/* System initialize for referenced model: 'PubIfCommonVIE_MDL' */
void PubIfCommonVIE_MDL_Init(real32_T *rty_SteerAngleOffset_deg)
{
  int32_T i;

  /* InitializeConditions for S-Function (sfix_udelay): '<S19>/Tapped Delay4' */
  for (i = 0; i < 9; i++) {
    PubIfCommonVIE_MDL_DW.TappedDelay4_X[i] = 0.0;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<S19>/Tapped Delay4' */

  /* InitializeConditions for Memory: '<S8>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  PubIfCommonVIE_MDL_DW.UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for Memory: '<S3>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_n = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_i = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory31' */
  PubIfCommonVIE_MDL_DW.Memory31_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S8>/Memory34' */
  PubIfCommonVIE_MDL_DW.Memory34_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory35' */
  PubIfCommonVIE_MDL_DW.Memory35_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory36' */
  PubIfCommonVIE_MDL_DW.Memory36_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory37' */
  PubIfCommonVIE_MDL_DW.Memory37_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory39' */
  PubIfCommonVIE_MDL_DW.Memory39_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory38' */
  PubIfCommonVIE_MDL_DW.Memory38_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory23' */
  PubIfCommonVIE_MDL_DW.Memory23_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory22' */
  PubIfCommonVIE_MDL_DW.Memory22_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory21' */
  PubIfCommonVIE_MDL_DW.Memory21_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory29' */
  PubIfCommonVIE_MDL_DW.Memory29_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory33' */
  PubIfCommonVIE_MDL_DW.Memory33_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay1' */
  PubIfCommonVIE_MDL_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for Memory: '<S19>/Memory52' */
  PubIfCommonVIE_MDL_DW.Memory52_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
  PubIfCommonVIE_MDL_DW.UnitDelay_DSTATE_f = 0.0F;

  /* InitializeConditions for Memory: '<S13>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_k = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[3] = 0.0F;

  /* InitializeConditions for Memory: '<S12>/Memory' */
  PubIfCommonVIE_MDL_DW.Memory_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S12>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_f = 0.0F;

  /* InitializeConditions for Memory: '<S12>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_j = 0.0F;

  /* InitializeConditions for Memory: '<S10>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S4>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S4>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_a = 0.0F;

  /* InitializeConditions for Memory: '<S4>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_n = 0.0F;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  PubIfCommonVIE_MDL_DW.Memory_PreviousInput_p = 0.0F;

  /* InitializeConditions for Memory: '<S3>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_p = 0.0F;

  /* InitializeConditions for Memory: '<S3>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput_j = 0.0F;

  /* InitializeConditions for Memory: '<S3>/Memory4' */
  PubIfCommonVIE_MDL_DW.Memory4_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory30' */
  PubIfCommonVIE_MDL_DW.Memory30_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S8>/Memory24' */
  PubIfCommonVIE_MDL_DW.Memory24_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory25' */
  PubIfCommonVIE_MDL_DW.Memory25_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory26' */
  PubIfCommonVIE_MDL_DW.Memory26_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory27' */
  PubIfCommonVIE_MDL_DW.Memory27_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory28' */
  PubIfCommonVIE_MDL_DW.Memory28_PreviousInput = 0.0F;

  /* SystemInitialize for MATLAB Function: '<S19>/MATLAB Function2' */
  PubIfCommonVIE_MDL_DW.T = 0.0F;

  /* SystemInitialize for Merge: '<S19>/Merge' */
  VSM_SteerAngleOffset_deg = 0.0F;

  /* SystemInitialize for SignalConversion: '<S2>/Signal Conversion1' */
  *rty_SteerAngleOffset_deg = VSM_SteerAngleOffset_deg;

  /* SystemInitialize for Atomic SubSystem: '<S3>/PsiDtStandstillCalc' */
  /* InitializeConditions for Memory: '<S7>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_o = 0.0F;

  /* InitializeConditions for Memory: '<S7>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput_n = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S3>/PsiDtStandstillCalc' */
}

/* System reset for referenced model: 'PubIfCommonVIE_MDL' */
void PubIfCommonVIE_MDL_Reset(void)
{
  int32_T i;

  /* InitializeConditions for S-Function (sfix_udelay): '<S19>/Tapped Delay4' */
  for (i = 0; i < 9; i++) {
    PubIfCommonVIE_MDL_DW.TappedDelay4_X[i] = 0.0;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<S19>/Tapped Delay4' */

  /* InitializeConditions for Memory: '<S8>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  PubIfCommonVIE_MDL_DW.UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for Memory: '<S3>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_n = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_i = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory31' */
  PubIfCommonVIE_MDL_DW.Memory31_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S8>/Memory34' */
  PubIfCommonVIE_MDL_DW.Memory34_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory35' */
  PubIfCommonVIE_MDL_DW.Memory35_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory36' */
  PubIfCommonVIE_MDL_DW.Memory36_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory37' */
  PubIfCommonVIE_MDL_DW.Memory37_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory39' */
  PubIfCommonVIE_MDL_DW.Memory39_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory38' */
  PubIfCommonVIE_MDL_DW.Memory38_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory23' */
  PubIfCommonVIE_MDL_DW.Memory23_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory22' */
  PubIfCommonVIE_MDL_DW.Memory22_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory21' */
  PubIfCommonVIE_MDL_DW.Memory21_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory29' */
  PubIfCommonVIE_MDL_DW.Memory29_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory33' */
  PubIfCommonVIE_MDL_DW.Memory33_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay1' */
  PubIfCommonVIE_MDL_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for Memory: '<S19>/Memory52' */
  PubIfCommonVIE_MDL_DW.Memory52_PreviousInput = 0.0F;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
  PubIfCommonVIE_MDL_DW.UnitDelay_DSTATE_f = 0.0F;

  /* InitializeConditions for Memory: '<S13>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_k = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[0] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[1] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[2] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[3] = 0.0F;

  /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[3] = 0.0F;

  /* InitializeConditions for Memory: '<S12>/Memory' */
  PubIfCommonVIE_MDL_DW.Memory_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S12>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_f = 0.0F;

  /* InitializeConditions for Memory: '<S12>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_j = 0.0F;

  /* InitializeConditions for Memory: '<S10>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S4>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S4>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_a = 0.0F;

  /* InitializeConditions for Memory: '<S4>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_n = 0.0F;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  PubIfCommonVIE_MDL_DW.Memory_PreviousInput_p = 0.0F;

  /* InitializeConditions for Memory: '<S3>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_p = 0.0F;

  /* InitializeConditions for Memory: '<S3>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput_j = 0.0F;

  /* InitializeConditions for Memory: '<S3>/Memory4' */
  PubIfCommonVIE_MDL_DW.Memory4_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory30' */
  PubIfCommonVIE_MDL_DW.Memory30_PreviousInput = 0.0;

  /* InitializeConditions for Memory: '<S8>/Memory24' */
  PubIfCommonVIE_MDL_DW.Memory24_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory25' */
  PubIfCommonVIE_MDL_DW.Memory25_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory26' */
  PubIfCommonVIE_MDL_DW.Memory26_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory27' */
  PubIfCommonVIE_MDL_DW.Memory27_PreviousInput = 0.0F;

  /* InitializeConditions for Memory: '<S8>/Memory28' */
  PubIfCommonVIE_MDL_DW.Memory28_PreviousInput = 0.0F;

  /* SystemReset for MATLAB Function: '<S19>/MATLAB Function2' */
  PubIfCommonVIE_MDL_DW.T = 0.0F;

  /* SystemReset for Atomic SubSystem: '<S3>/PsiDtStandstillCalc' */
  /* InitializeConditions for Memory: '<S7>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_o = 0.0F;

  /* InitializeConditions for Memory: '<S7>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput_n = 0.0F;

  /* End of SystemReset for SubSystem: '<S3>/PsiDtStandstillCalc' */
}

/* Start for referenced model: 'PubIfCommonVIE_MDL' */
void PubIfCommonVIE_MDL_Start(void)
{
  /* ConstCode for Constant: '<S2>/Constant1' */
  PubIfCommonVIE_MDL_B.VIE_SubModel_Version = 36210503U;

  /* ConstCode for Constant: '<S2>/Constant2' */
  PubIfCommonVIE_MDL_B.VIE_SubModel_Number = 302U;

  /* ConstCode for Constant: '<Root>/Constant' */
  VIE_SW_VERSION = 2009190301U;
}

/* Outputs for referenced model: 'PubIfCommonVIE_MDL' */
void PubIfCommonVIE_MDL(const VCAN_ESP_MSG_BUS *rtu_VIE_VCAN_ESP, const
  VCAN_CSA_MSG_BUS *rtu_VIE_VCAN_CSA, const VCAN_ABM_MSG_BUS *rtu_VIE_VCAN_ABM,
  const real32_T *rtu_SteerAngOffsetInit, real32_T *rty_axvRefMs2, real32_T
  *rty_vxvRefMs, real32_T *rty_axvRoadSlopeMs2, real32_T *rty_axRefMs2, real32_T
  *rty_axRefDt, real32_T *rty_psiDtOpt, real32_T *rty_ayvRefMs2, real32_T
  *rty_alpSideSlipAngle, real32_T *rty_kapTraj, real32_T
  *rty_alpSumSlideCurveness, real32_T *rty_SteerAngleOffset_deg)
{
  real_T u0;
  real_T u1;
  real_T u2;
  int32_T i;
  real32_T t;
  real32_T t_vxwDiffAllowed;
  real32_T t_vxwDiffFLFR;
  real32_T t_vxwDiffFLRL;
  real32_T t_vxwDiffFLRR;
  real32_T t_vxwDiffFRRL;
  real32_T t_vxwDiffFRRR;
  real32_T t_vxwDiffRLRR;
  real32_T t_vxwMin;
  uint8_T l_CaseBrake;
  uint8_T l_CaseDrive;

  /* DataTypeConversion: '<S2>/Data Type Conversion19' */
  PubIfCommonVIE_MDL_B.DataTypeConversion19 =
    rtu_VIE_VCAN_CSA->SteerWheelAngSign;

  /* SignalConversion: '<S2>/Signal Conversion' */
  VSM_SteerAngOffsetInit = *rtu_SteerAngOffsetInit;

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   */
  PubIfCommonVIE_MDL_B.Compare = (rtu_VIE_VCAN_CSA->SteerWheelSpd < 5.0F);

  /* DataTypeConversion: '<S19>/Data Type Conversion' */
  PubIfCommonVIE_MDL_B.DataTypeConversion = PubIfCommonVIE_MDL_B.Compare;

  /* S-Function (sfix_udelay): '<S19>/Tapped Delay4' */
  PubIfCommonVIE_MDL_B.TappedDelay4[0] = PubIfCommonVIE_MDL_B.DataTypeConversion;
  memcpy(&PubIfCommonVIE_MDL_B.TappedDelay4[1],
         &PubIfCommonVIE_MDL_DW.TappedDelay4_X[0], 9U * sizeof(real_T));

  /* Sum: '<S19>/Sum of Elements5' */
  u0 = -0.0;
  for (i = 0; i < 10; i++) {
    u0 += PubIfCommonVIE_MDL_B.TappedDelay4[i];
  }

  /* Sum: '<S19>/Sum of Elements5' */
  PubIfCommonVIE_MDL_B.SumofElements5 = u0;

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   */
  PubIfCommonVIE_MDL_B.Compare_h = (PubIfCommonVIE_MDL_B.SumofElements5 == 10.0);

  /* Memory: '<S8>/Memory1' */
  PubIfCommonVIE_MDL_B.Memory1 = PubIfCommonVIE_MDL_DW.Memory1_PreviousInput;

  /* SwitchCase: '<S18>/Switch Case' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant1'
   *  Constant: '<S18>/Constant2'
   *  Constant: '<S18>/Constant3'
   */
  switch (rtu_VIE_VCAN_ESP->RRWheelDriveDirection) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S18>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(3.0F,
      &PubIfCommonVIE_MDL_B.Merge);

    /* End of Outputs for SubSystem: '<S18>/Switch Case Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S18>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(1.0F,
      &PubIfCommonVIE_MDL_B.Merge);

    /* End of Outputs for SubSystem: '<S18>/Switch Case Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S18>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(-1.0F,
      &PubIfCommonVIE_MDL_B.Merge);

    /* End of Outputs for SubSystem: '<S18>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S18>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S43>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(0.0F,
      &PubIfCommonVIE_MDL_B.Merge);

    /* End of Outputs for SubSystem: '<S18>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S18>/Switch Case' */

  /* Product: '<S8>/Product4' */
  PubIfCommonVIE_MDL_B.Product4 = rtu_VIE_VCAN_ESP->RRWheelSpd *
    PubIfCommonVIE_MDL_B.Merge;

  /* Gain: '<S8>/Gain3' */
  PubIfCommonVIE_MDL_B.Gain3 = 0.277777791F * PubIfCommonVIE_MDL_B.Product4;

  /* SwitchCase: '<S17>/Switch Case' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   *  Constant: '<S17>/Constant2'
   *  Constant: '<S17>/Constant3'
   */
  switch (rtu_VIE_VCAN_ESP->RLWheelDriveDirection) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S17>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(3.0F,
      &PubIfCommonVIE_MDL_B.Merge_n);

    /* End of Outputs for SubSystem: '<S17>/Switch Case Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S17>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(1.0F,
      &PubIfCommonVIE_MDL_B.Merge_n);

    /* End of Outputs for SubSystem: '<S17>/Switch Case Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S17>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(-1.0F,
      &PubIfCommonVIE_MDL_B.Merge_n);

    /* End of Outputs for SubSystem: '<S17>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S17>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(0.0F,
      &PubIfCommonVIE_MDL_B.Merge_n);

    /* End of Outputs for SubSystem: '<S17>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S17>/Switch Case' */

  /* Product: '<S8>/Product3' */
  PubIfCommonVIE_MDL_B.Product3 = rtu_VIE_VCAN_ESP->RLWheelSpd *
    PubIfCommonVIE_MDL_B.Merge_n;

  /* Gain: '<S8>/Gain2' */
  PubIfCommonVIE_MDL_B.Gain2 = 0.277777791F * PubIfCommonVIE_MDL_B.Product3;

  /* SwitchCase: '<S16>/Switch Case' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   *  Constant: '<S16>/Constant2'
   *  Constant: '<S16>/Constant3'
   */
  switch (rtu_VIE_VCAN_ESP->FRWheelDriveDirection) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S16>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(3.0F,
      &PubIfCommonVIE_MDL_B.Merge_c);

    /* End of Outputs for SubSystem: '<S16>/Switch Case Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S16>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(1.0F,
      &PubIfCommonVIE_MDL_B.Merge_c);

    /* End of Outputs for SubSystem: '<S16>/Switch Case Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S16>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(-1.0F,
      &PubIfCommonVIE_MDL_B.Merge_c);

    /* End of Outputs for SubSystem: '<S16>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S16>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(0.0F,
      &PubIfCommonVIE_MDL_B.Merge_c);

    /* End of Outputs for SubSystem: '<S16>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S16>/Switch Case' */

  /* Product: '<S8>/Product2' */
  PubIfCommonVIE_MDL_B.Product2 = rtu_VIE_VCAN_ESP->FRWheelSpd *
    PubIfCommonVIE_MDL_B.Merge_c;

  /* Gain: '<S8>/Gain1' */
  PubIfCommonVIE_MDL_B.Gain1 = 0.277777791F * PubIfCommonVIE_MDL_B.Product2;

  /* SwitchCase: '<S15>/Switch Case' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant3'
   */
  switch (rtu_VIE_VCAN_ESP->FLWheelDriveDirection) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S15>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(3.0F,
      &PubIfCommonVIE_MDL_B.Merge_d);

    /* End of Outputs for SubSystem: '<S15>/Switch Case Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S15>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(1.0F,
      &PubIfCommonVIE_MDL_B.Merge_d);

    /* End of Outputs for SubSystem: '<S15>/Switch Case Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S15>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(-1.0F,
      &PubIfCommonVIE_MDL_B.Merge_d);

    /* End of Outputs for SubSystem: '<S15>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S15>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    PubIfCommonVIE_MDL_SwitchCaseActionSubsystem(0.0F,
      &PubIfCommonVIE_MDL_B.Merge_d);

    /* End of Outputs for SubSystem: '<S15>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S15>/Switch Case' */

  /* Product: '<S8>/Product1' */
  PubIfCommonVIE_MDL_B.Product1_a = rtu_VIE_VCAN_ESP->FLWheelSpd *
    PubIfCommonVIE_MDL_B.Merge_d;

  /* Gain: '<S8>/Gain' */
  PubIfCommonVIE_MDL_B.Gain = 0.277777791F * PubIfCommonVIE_MDL_B.Product1_a;

  /* Sum: '<S8>/Sum15' */
  PubIfCommonVIE_MDL_B.Sum15 = ((PubIfCommonVIE_MDL_B.Gain3 +
    PubIfCommonVIE_MDL_B.Gain2) + PubIfCommonVIE_MDL_B.Gain1) +
    PubIfCommonVIE_MDL_B.Gain;

  /* Gain: '<S8>/Gain13' */
  PubIfCommonVIE_MDL_B.Gain13 = 0.25F * PubIfCommonVIE_MDL_B.Sum15;

  /* UnitDelay: '<S8>/Unit Delay' */
  PubIfCommonVIE_MDL_B.UnitDelay = PubIfCommonVIE_MDL_DW.UnitDelay_DSTATE;

  /* Sum: '<S8>/Add' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  PubIfCommonVIE_MDL_B.Add = 1.0 + PubIfCommonVIE_MDL_B.UnitDelay;

  /* Saturate: '<S8>/Saturation' */
  u0 = PubIfCommonVIE_MDL_B.Add;
  u1 = 0.0;
  u2 = 2.0;
  if (u0 > u2) {
    /* Saturate: '<S8>/Saturation' */
    PubIfCommonVIE_MDL_B.Saturation = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S8>/Saturation' */
    PubIfCommonVIE_MDL_B.Saturation = u1;
  } else {
    /* Saturate: '<S8>/Saturation' */
    PubIfCommonVIE_MDL_B.Saturation = u0;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  u0 = floor(PubIfCommonVIE_MDL_B.Saturation);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  PubIfCommonVIE_MDL_B.DataTypeConversion_l = (uint8_T)(u0 < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_B.TappedDelay[0] = PubIfCommonVIE_MDL_B.Gain;
  PubIfCommonVIE_MDL_B.TappedDelay[1] = PubIfCommonVIE_MDL_DW.TappedDelay_X[0];
  PubIfCommonVIE_MDL_B.TappedDelay[2] = PubIfCommonVIE_MDL_DW.TappedDelay_X[1];
  PubIfCommonVIE_MDL_B.TappedDelay[3] = PubIfCommonVIE_MDL_DW.TappedDelay_X[2];
  PubIfCommonVIE_MDL_B.TappedDelay[4] = PubIfCommonVIE_MDL_DW.TappedDelay_X[3];

  /* Sum: '<S8>/Sum of Elements' */
  t = -0.0F;
  for (i = 0; i < 5; i++) {
    t += PubIfCommonVIE_MDL_B.TappedDelay[i];
  }

  /* Sum: '<S8>/Sum of Elements' */
  PubIfCommonVIE_MDL_B.SumofElements = t;

  /* Gain: '<S8>/Gain4' */
  PubIfCommonVIE_MDL_B.Gain4 = 0.2F * PubIfCommonVIE_MDL_B.SumofElements;

  /* S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_B.TappedDelay1[0] = PubIfCommonVIE_MDL_B.Gain1;
  PubIfCommonVIE_MDL_B.TappedDelay1[1] = PubIfCommonVIE_MDL_DW.TappedDelay1_X[0];
  PubIfCommonVIE_MDL_B.TappedDelay1[2] = PubIfCommonVIE_MDL_DW.TappedDelay1_X[1];
  PubIfCommonVIE_MDL_B.TappedDelay1[3] = PubIfCommonVIE_MDL_DW.TappedDelay1_X[2];
  PubIfCommonVIE_MDL_B.TappedDelay1[4] = PubIfCommonVIE_MDL_DW.TappedDelay1_X[3];

  /* Sum: '<S8>/Sum of Elements1' */
  t = -0.0F;
  for (i = 0; i < 5; i++) {
    t += PubIfCommonVIE_MDL_B.TappedDelay1[i];
  }

  /* Sum: '<S8>/Sum of Elements1' */
  PubIfCommonVIE_MDL_B.SumofElements1 = t;

  /* Gain: '<S8>/Gain5' */
  PubIfCommonVIE_MDL_B.Gain5 = 0.2F * PubIfCommonVIE_MDL_B.SumofElements1;

  /* S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_B.TappedDelay2[0] = PubIfCommonVIE_MDL_B.Gain2;
  PubIfCommonVIE_MDL_B.TappedDelay2[1] = PubIfCommonVIE_MDL_DW.TappedDelay2_X[0];
  PubIfCommonVIE_MDL_B.TappedDelay2[2] = PubIfCommonVIE_MDL_DW.TappedDelay2_X[1];
  PubIfCommonVIE_MDL_B.TappedDelay2[3] = PubIfCommonVIE_MDL_DW.TappedDelay2_X[2];
  PubIfCommonVIE_MDL_B.TappedDelay2[4] = PubIfCommonVIE_MDL_DW.TappedDelay2_X[3];

  /* Sum: '<S8>/Sum of Elements2' */
  t = -0.0F;
  for (i = 0; i < 5; i++) {
    t += PubIfCommonVIE_MDL_B.TappedDelay2[i];
  }

  /* Sum: '<S8>/Sum of Elements2' */
  PubIfCommonVIE_MDL_B.SumofElements2 = t;

  /* Gain: '<S8>/Gain6' */
  PubIfCommonVIE_MDL_B.Gain6 = 0.2F * PubIfCommonVIE_MDL_B.SumofElements2;

  /* S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_B.TappedDelay3[0] = PubIfCommonVIE_MDL_B.Gain3;
  PubIfCommonVIE_MDL_B.TappedDelay3[1] = PubIfCommonVIE_MDL_DW.TappedDelay3_X[0];
  PubIfCommonVIE_MDL_B.TappedDelay3[2] = PubIfCommonVIE_MDL_DW.TappedDelay3_X[1];
  PubIfCommonVIE_MDL_B.TappedDelay3[3] = PubIfCommonVIE_MDL_DW.TappedDelay3_X[2];
  PubIfCommonVIE_MDL_B.TappedDelay3[4] = PubIfCommonVIE_MDL_DW.TappedDelay3_X[3];

  /* Sum: '<S8>/Sum of Elements3' */
  t = -0.0F;
  for (i = 0; i < 5; i++) {
    t += PubIfCommonVIE_MDL_B.TappedDelay3[i];
  }

  /* Sum: '<S8>/Sum of Elements3' */
  PubIfCommonVIE_MDL_B.SumofElements3 = t;

  /* Gain: '<S8>/Gain7' */
  PubIfCommonVIE_MDL_B.Gain7 = 0.2F * PubIfCommonVIE_MDL_B.SumofElements3;

  /* S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_B.TappedDelay_d[0] = rtu_VIE_VCAN_ABM->VehYawRate;
  PubIfCommonVIE_MDL_B.TappedDelay_d[1] = PubIfCommonVIE_MDL_DW.TappedDelay_X_g
    [0];
  PubIfCommonVIE_MDL_B.TappedDelay_d[2] = PubIfCommonVIE_MDL_DW.TappedDelay_X_g
    [1];
  PubIfCommonVIE_MDL_B.TappedDelay_d[3] = PubIfCommonVIE_MDL_DW.TappedDelay_X_g
    [2];
  PubIfCommonVIE_MDL_B.TappedDelay_d[4] = PubIfCommonVIE_MDL_DW.TappedDelay_X_g
    [3];

  /* Sum: '<S6>/Sum of Elements' */
  t = -0.0F;
  for (i = 0; i < 5; i++) {
    t += PubIfCommonVIE_MDL_B.TappedDelay_d[i];
  }

  /* Sum: '<S6>/Sum of Elements' */
  PubIfCommonVIE_MDL_B.SumofElements_h = t;

  /* Gain: '<S6>/Gain' */
  PubIfCommonVIE_MDL_B.PsiDtInF = 0.2F * PubIfCommonVIE_MDL_B.SumofElements_h;

  /* Memory: '<S3>/Memory2' */
  PubIfCommonVIE_MDL_B.PsiDtStandstill =
    PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_n;

  /* Sum: '<S3>/Sum3' */
  *rty_psiDtOpt = PubIfCommonVIE_MDL_B.PsiDtInF -
    PubIfCommonVIE_MDL_B.PsiDtStandstill;

  /* Memory: '<S8>/Memory2' */
  PubIfCommonVIE_MDL_B.Memory2_f = PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_i;

  /* MATLAB Function: '<S8>/VxwCorr' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/Constant3'
   */
  PubIfCommonVIE_MDL_B.vxwCorrFL = (PubIfCommonVIE_MDL_B.Gain4 -
    (P_Global_FrontAxleToCenter_m + P_Global_RearAxleToCenter_m) * *rty_psiDtOpt
    * sinf(PubIfCommonVIE_MDL_B.Memory2_f)) / cosf
    (PubIfCommonVIE_MDL_B.Memory2_f) + P_Global_WheelTrack_m * *rty_psiDtOpt /
    2.0F;
  PubIfCommonVIE_MDL_B.vxwCorrFR = (PubIfCommonVIE_MDL_B.Gain5 -
    (P_Global_FrontAxleToCenter_m + P_Global_RearAxleToCenter_m) * *rty_psiDtOpt
    * sinf(PubIfCommonVIE_MDL_B.Memory2_f)) / cosf
    (PubIfCommonVIE_MDL_B.Memory2_f) - P_Global_WheelTrack_m * *rty_psiDtOpt /
    2.0F;
  PubIfCommonVIE_MDL_B.vxwCorrRL = P_Global_WheelTrack_m * *rty_psiDtOpt / 2.0F
    + PubIfCommonVIE_MDL_B.Gain6;
  PubIfCommonVIE_MDL_B.vxwCorrRR = PubIfCommonVIE_MDL_B.Gain7 -
    P_Global_WheelTrack_m * *rty_psiDtOpt / 2.0F;

  /* MATLAB Function: '<S8>/calcVxwDiffAndModErr_v' */
  t = fminf(fminf(fminf(PubIfCommonVIE_MDL_B.vxwCorrFL,
                        PubIfCommonVIE_MDL_B.vxwCorrFR),
                  PubIfCommonVIE_MDL_B.vxwCorrRL),
            PubIfCommonVIE_MDL_B.vxwCorrRR);
  t_vxwMin = fmaxf(fmaxf(fmaxf(PubIfCommonVIE_MDL_B.vxwCorrFL,
    PubIfCommonVIE_MDL_B.vxwCorrFR), PubIfCommonVIE_MDL_B.vxwCorrRL),
                   PubIfCommonVIE_MDL_B.vxwCorrRR);
  t_vxwDiffFLFR = fabsf(PubIfCommonVIE_MDL_B.vxwCorrFL -
                        PubIfCommonVIE_MDL_B.vxwCorrFR);
  t_vxwDiffFLRL = fabsf(PubIfCommonVIE_MDL_B.vxwCorrFL -
                        PubIfCommonVIE_MDL_B.vxwCorrRL);
  t_vxwDiffFLRR = fabsf(PubIfCommonVIE_MDL_B.vxwCorrFL -
                        PubIfCommonVIE_MDL_B.vxwCorrRR);
  t_vxwDiffFRRL = fabsf(PubIfCommonVIE_MDL_B.vxwCorrFR -
                        PubIfCommonVIE_MDL_B.vxwCorrRL);
  t_vxwDiffFRRR = fabsf(PubIfCommonVIE_MDL_B.vxwCorrFR -
                        PubIfCommonVIE_MDL_B.vxwCorrRR);
  t_vxwDiffRLRR = fabsf(PubIfCommonVIE_MDL_B.vxwCorrRL -
                        PubIfCommonVIE_MDL_B.vxwCorrRR);
  t_vxwDiffAllowed = (t_vxwMin - t) * 0.6F;
  PubIfCommonVIE_MDL_B.ErrWheel_FL = (uint8_T)((t_vxwDiffFLFR > t_vxwDiffAllowed)
    && (t_vxwDiffFLRL > t_vxwDiffAllowed) && (t_vxwDiffFLRR > t_vxwDiffAllowed));
  PubIfCommonVIE_MDL_B.ErrWheel_FR = (uint8_T)((t_vxwDiffFLFR > t_vxwDiffAllowed)
    && (t_vxwDiffFRRL > t_vxwDiffAllowed) && (t_vxwDiffFRRR > t_vxwDiffAllowed));
  PubIfCommonVIE_MDL_B.ErrWheel_RL = (uint8_T)((t_vxwDiffFLRL > t_vxwDiffAllowed)
    && (t_vxwDiffFRRL > t_vxwDiffAllowed) && (t_vxwDiffRLRR > t_vxwDiffAllowed));
  PubIfCommonVIE_MDL_B.ErrWheel_RR = (uint8_T)((t_vxwDiffFLRR > t_vxwDiffAllowed)
    && (t_vxwDiffFRRR > t_vxwDiffAllowed) && (t_vxwDiffRLRR > t_vxwDiffAllowed));
  PubIfCommonVIE_MDL_B.t_vxwCorrMax = t_vxwMin;
  PubIfCommonVIE_MDL_B.t_vxwCorrMin = t;

  /* Memory: '<S8>/Memory31' */
  PubIfCommonVIE_MDL_B.Memory31 = PubIfCommonVIE_MDL_DW.Memory31_PreviousInput;

  /* Memory: '<S8>/Memory34' */
  PubIfCommonVIE_MDL_B.Memory34 = PubIfCommonVIE_MDL_DW.Memory34_PreviousInput;

  /* Memory: '<S8>/Memory35' */
  PubIfCommonVIE_MDL_B.Memory35 = PubIfCommonVIE_MDL_DW.Memory35_PreviousInput;

  /* Memory: '<S8>/Memory36' */
  PubIfCommonVIE_MDL_B.Memory36 = PubIfCommonVIE_MDL_DW.Memory36_PreviousInput;

  /* MATLAB Function: '<S8>/calcBrakeDriveState' */
  l_CaseDrive = (uint8_T)(((PubIfCommonVIE_MDL_B.Memory31 > 0.5) &&
    (PubIfCommonVIE_MDL_B.Memory34 > 0.5F) && (PubIfCommonVIE_MDL_B.Memory35 >
    0.0F)) || ((PubIfCommonVIE_MDL_B.Memory31 < -0.5) &&
               (PubIfCommonVIE_MDL_B.Memory34 < -0.5F) &&
               (PubIfCommonVIE_MDL_B.Memory35 < 0.0F)));
  l_CaseBrake = (uint8_T)(((PubIfCommonVIE_MDL_B.Memory31 < -0.5) &&
    (PubIfCommonVIE_MDL_B.Memory34 < -0.5F) && (PubIfCommonVIE_MDL_B.Memory35 >
    0.0F)) || ((PubIfCommonVIE_MDL_B.Memory31 > 0.5) &&
               (PubIfCommonVIE_MDL_B.Memory34 > 0.5F) &&
               (PubIfCommonVIE_MDL_B.Memory35 < 0.0F)));
  t = fabsf(PubIfCommonVIE_MDL_B.Memory34);
  if (t >= 0.5F) {
    t -= 0.5F;
    t *= 0.00815F;
  } else {
    t = 0.0F;
  }

  if (l_CaseDrive == 1) {
    PubIfCommonVIE_MDL_B.t_SlipDrive = -t;
    PubIfCommonVIE_MDL_B.t_SlipBrake = 0.0F;
  } else {
    PubIfCommonVIE_MDL_B.t_SlipDrive = 0.0F;
    if ((l_CaseBrake == 1) && (PubIfCommonVIE_MDL_B.Memory36 == 0.0F)) {
      PubIfCommonVIE_MDL_B.t_SlipBrake = t;
    } else {
      PubIfCommonVIE_MDL_B.t_SlipBrake = 0.0F;
    }
  }

  PubIfCommonVIE_MDL_B.l_CaseDrive = l_CaseDrive;
  PubIfCommonVIE_MDL_B.l_CaseBrake = l_CaseBrake;

  /* End of MATLAB Function: '<S8>/calcBrakeDriveState' */

  /* MATLAB Function: '<S8>/detErrorBandMin' incorporates:
   *  Constant: '<S8>/Time25'
   *  Constant: '<S8>/Time26'
   */
  t = 128.0F;
  if (PubIfCommonVIE_MDL_B.ErrWheel_FL == 0) {
    t_vxwMin = ((real32_T)((uint8_T)1U) * PubIfCommonVIE_MDL_B.t_SlipDrive +
                1.0F) * PubIfCommonVIE_MDL_B.vxwCorrFL;
    t = fminf(128.0F, t_vxwMin);
    PubIfCommonVIE_MDL_B.l_vxwMin_aswFL = t_vxwMin;
  } else {
    PubIfCommonVIE_MDL_B.l_vxwMin_aswFL = -128.0F;
  }

  if (PubIfCommonVIE_MDL_B.ErrWheel_FR == 0) {
    t_vxwMin = ((real32_T)((uint8_T)1U) * PubIfCommonVIE_MDL_B.t_SlipDrive +
                1.0F) * PubIfCommonVIE_MDL_B.vxwCorrFR;
    t = fminf(t, t_vxwMin);
    PubIfCommonVIE_MDL_B.l_vxwMin_aswFR = t_vxwMin;
  } else {
    PubIfCommonVIE_MDL_B.l_vxwMin_aswFR = -128.0F;
  }

  if (PubIfCommonVIE_MDL_B.ErrWheel_RL == 0) {
    t_vxwMin = ((real32_T)((uint8_T)0U) * PubIfCommonVIE_MDL_B.t_SlipDrive +
                1.0F) * PubIfCommonVIE_MDL_B.vxwCorrRL;
    t = fminf(t, t_vxwMin);
    PubIfCommonVIE_MDL_B.l_vxwMin_aswRL = t_vxwMin;
  } else {
    PubIfCommonVIE_MDL_B.l_vxwMin_aswRL = -128.0F;
  }

  if (PubIfCommonVIE_MDL_B.ErrWheel_RR == 0) {
    t_vxwMin = ((real32_T)((uint8_T)0U) * PubIfCommonVIE_MDL_B.t_SlipDrive +
                1.0F) * PubIfCommonVIE_MDL_B.vxwCorrRR;
    t = fminf(t, t_vxwMin);
    PubIfCommonVIE_MDL_B.l_vxwMin_aswRR = t_vxwMin;
  } else {
    PubIfCommonVIE_MDL_B.l_vxwMin_aswRR = -128.0F;
  }

  if (PubIfCommonVIE_MDL_B.l_CaseBrake == 0) {
    if (((uint8_T)1U) == 1) {
      PubIfCommonVIE_MDL_B.l_vxwMin_aswFL = t;
      PubIfCommonVIE_MDL_B.l_vxwMin_aswFR = t;
    }

    if (((uint8_T)0U) == 1) {
      PubIfCommonVIE_MDL_B.l_vxwMin_aswRL = t;
      PubIfCommonVIE_MDL_B.l_vxwMin_aswRR = t;
    }
  }

  /* End of MATLAB Function: '<S8>/detErrorBandMin' */

  /* MinMax: '<S8>/MinMax3' */
  t = fmaxf(PubIfCommonVIE_MDL_B.l_vxwMin_aswFR,
            PubIfCommonVIE_MDL_B.l_vxwMin_aswRL);
  t = fmaxf(t, PubIfCommonVIE_MDL_B.l_vxwMin_aswRR);
  t = fmaxf(t, PubIfCommonVIE_MDL_B.l_vxwMin_aswFL);

  /* MinMax: '<S8>/MinMax3' */
  PubIfCommonVIE_MDL_B.MinMax3 = t;

  /* MATLAB Function: '<S8>/detErrorBandMax' */
  t = -128.0F;
  if (PubIfCommonVIE_MDL_B.ErrWheel_FL == 0) {
    t_vxwMin = (PubIfCommonVIE_MDL_B.t_SlipBrake + 1.0F) *
      PubIfCommonVIE_MDL_B.vxwCorrFL;
    t = fmaxf(-128.0F, t_vxwMin);
    PubIfCommonVIE_MDL_B.l_vxwMax_aswFL = t_vxwMin;
  } else {
    PubIfCommonVIE_MDL_B.l_vxwMax_aswFL = 128.0F;
  }

  if (PubIfCommonVIE_MDL_B.ErrWheel_FR == 0) {
    t_vxwMin = (PubIfCommonVIE_MDL_B.t_SlipBrake + 1.0F) *
      PubIfCommonVIE_MDL_B.vxwCorrFR;
    t = fmaxf(t, t_vxwMin);
    PubIfCommonVIE_MDL_B.l_vxwMax_aswFR = t_vxwMin;
  } else {
    PubIfCommonVIE_MDL_B.l_vxwMax_aswFR = 128.0F;
  }

  if (PubIfCommonVIE_MDL_B.ErrWheel_RL == 0) {
    t_vxwMin = (PubIfCommonVIE_MDL_B.t_SlipBrake + 1.0F) *
      PubIfCommonVIE_MDL_B.vxwCorrRL;
    t = fmaxf(t, t_vxwMin);
    PubIfCommonVIE_MDL_B.l_vxwMax_aswRL = t_vxwMin;
  } else {
    PubIfCommonVIE_MDL_B.l_vxwMax_aswRL = 128.0F;
  }

  if (PubIfCommonVIE_MDL_B.ErrWheel_RR == 0) {
    t_vxwMin = (PubIfCommonVIE_MDL_B.t_SlipBrake + 1.0F) *
      PubIfCommonVIE_MDL_B.vxwCorrRR;
    t = fmaxf(t, t_vxwMin);
    PubIfCommonVIE_MDL_B.l_vxwMax_aswRR = t_vxwMin;
  } else {
    PubIfCommonVIE_MDL_B.l_vxwMax_aswRR = 128.0F;
  }

  if (PubIfCommonVIE_MDL_B.l_CaseBrake == 1) {
    PubIfCommonVIE_MDL_B.l_vxwMax_aswFL = t;
    PubIfCommonVIE_MDL_B.l_vxwMax_aswFR = t;
    PubIfCommonVIE_MDL_B.l_vxwMax_aswRL = t;
    PubIfCommonVIE_MDL_B.l_vxwMax_aswRR = t;
  }

  /* End of MATLAB Function: '<S8>/detErrorBandMax' */

  /* MinMax: '<S8>/MinMax4' */
  t = fminf(PubIfCommonVIE_MDL_B.l_vxwMax_aswFL,
            PubIfCommonVIE_MDL_B.l_vxwMax_aswFR);
  t = fminf(t, PubIfCommonVIE_MDL_B.l_vxwMax_aswRL);
  t = fminf(t, PubIfCommonVIE_MDL_B.l_vxwMax_aswRR);

  /* MinMax: '<S8>/MinMax4' */
  PubIfCommonVIE_MDL_B.MinMax4 = t;

  /* Sum: '<S8>/Sum6' */
  PubIfCommonVIE_MDL_B.Sum6 = PubIfCommonVIE_MDL_B.MinMax3 +
    PubIfCommonVIE_MDL_B.MinMax4;

  /* Gain: '<S8>/Gain17' */
  PubIfCommonVIE_MDL_B.Gain17 = 0.5F * PubIfCommonVIE_MDL_B.Sum6;

  /* Memory: '<S8>/Memory37' */
  PubIfCommonVIE_MDL_B.Memory37 = PubIfCommonVIE_MDL_DW.Memory37_PreviousInput;

  /* Memory: '<S8>/Memory39' */
  PubIfCommonVIE_MDL_B.Memory39 = PubIfCommonVIE_MDL_DW.Memory39_PreviousInput;

  /* Memory: '<S8>/Memory38' */
  PubIfCommonVIE_MDL_B.Memory38 = PubIfCommonVIE_MDL_DW.Memory38_PreviousInput;

  /* Memory: '<S8>/Memory23' */
  PubIfCommonVIE_MDL_B.Memory23 = PubIfCommonVIE_MDL_DW.Memory23_PreviousInput;

  /* MATLAB Function: '<S8>/vsp_filtVxvRefRaw' */
  t = 1.0F;
  if (PubIfCommonVIE_MDL_B.DataTypeConversion_l == 0) {
    if ((PubIfCommonVIE_MDL_B.l_CaseDrive == 0) &&
        (PubIfCommonVIE_MDL_B.l_CaseBrake == 0)) {
      t = 0.25F;
    }

    if ((PubIfCommonVIE_MDL_B.Memory39 > 0.0F) || (PubIfCommonVIE_MDL_B.Memory38
         > 0.0F)) {
      t = 0.125F;
    }

    PubIfCommonVIE_MDL_B.vxvRefRaw = (PubIfCommonVIE_MDL_B.Gain17 -
      PubIfCommonVIE_MDL_B.Memory23) * t + PubIfCommonVIE_MDL_B.Memory23;
    t = fabsf(PubIfCommonVIE_MDL_B.vxvRefRaw);
    t_vxwMin = fabsf(PubIfCommonVIE_MDL_B.Memory37);
    if (((PubIfCommonVIE_MDL_B.l_CaseBrake == 1) && (t > t_vxwMin)) ||
        ((PubIfCommonVIE_MDL_B.l_CaseDrive == 1) && (t < t_vxwMin))) {
      PubIfCommonVIE_MDL_B.vxvRefRaw = PubIfCommonVIE_MDL_B.Memory37;
    }

    PubIfCommonVIE_MDL_B.vxvRefRaw = fmaxf(fminf(PubIfCommonVIE_MDL_B.vxvRefRaw,
      PubIfCommonVIE_MDL_B.Memory23 + 0.24F), PubIfCommonVIE_MDL_B.Memory23 -
      0.24F);
  } else {
    PubIfCommonVIE_MDL_B.vxvRefRaw = PubIfCommonVIE_MDL_B.Gain17;
  }

  /* End of MATLAB Function: '<S8>/vsp_filtVxvRefRaw' */

  /* S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_B.TappedDelay8[0] = PubIfCommonVIE_MDL_B.vxvRefRaw;
  PubIfCommonVIE_MDL_B.TappedDelay8[1] = PubIfCommonVIE_MDL_DW.TappedDelay8_X[0];
  PubIfCommonVIE_MDL_B.TappedDelay8[2] = PubIfCommonVIE_MDL_DW.TappedDelay8_X[1];
  PubIfCommonVIE_MDL_B.TappedDelay8[3] = PubIfCommonVIE_MDL_DW.TappedDelay8_X[2];
  PubIfCommonVIE_MDL_B.TappedDelay8[4] = PubIfCommonVIE_MDL_DW.TappedDelay8_X[3];

  /* Sum: '<S8>/Sum of Elements4' */
  t = -0.0F;
  for (i = 0; i < 5; i++) {
    t += PubIfCommonVIE_MDL_B.TappedDelay8[i];
  }

  /* Sum: '<S8>/Sum of Elements4' */
  PubIfCommonVIE_MDL_B.SumofElements4 = t;

  /* Gain: '<S8>/Gain8' */
  PubIfCommonVIE_MDL_B.Gain8 = 0.2F * PubIfCommonVIE_MDL_B.SumofElements4;

  /* Memory: '<S8>/Memory22' */
  PubIfCommonVIE_MDL_B.Memory22 = PubIfCommonVIE_MDL_DW.Memory22_PreviousInput;

  /* Memory: '<S8>/Memory21' */
  PubIfCommonVIE_MDL_B.Memory21 = PubIfCommonVIE_MDL_DW.Memory21_PreviousInput;

  /* Sum: '<S8>/Sum7' */
  PubIfCommonVIE_MDL_B.Sum7 = PubIfCommonVIE_MDL_B.Gain8 -
    PubIfCommonVIE_MDL_B.Memory21;

  /* Gain: '<S8>/Gain10' */
  PubIfCommonVIE_MDL_B.Gain10 = 50.0F * PubIfCommonVIE_MDL_B.Sum7;

  /* Memory: '<S8>/Memory29' */
  PubIfCommonVIE_MDL_B.Memory29 = PubIfCommonVIE_MDL_DW.Memory29_PreviousInput;

  /* Sum: '<S8>/Sum8' */
  PubIfCommonVIE_MDL_B.Sum8 = PubIfCommonVIE_MDL_B.Gain10 -
    PubIfCommonVIE_MDL_B.Memory29;

  /* Gain: '<S8>/Gain11' */
  PubIfCommonVIE_MDL_B.Gain11 = 0.25F * PubIfCommonVIE_MDL_B.Sum8;

  /* Sum: '<S8>/Sum9' */
  PubIfCommonVIE_MDL_B.Sum9 = PubIfCommonVIE_MDL_B.Gain11 +
    PubIfCommonVIE_MDL_B.Memory29;

  /* Sum: '<S8>/Sum12' */
  PubIfCommonVIE_MDL_B.Sum12 = PubIfCommonVIE_MDL_B.Sum9 -
    PubIfCommonVIE_MDL_B.Memory22;

  /* Abs: '<S8>/Abs' */
  PubIfCommonVIE_MDL_B.Abs = fabsf(PubIfCommonVIE_MDL_B.Sum12);

  /* Lookup_n-D: '<S8>/t_tauAxvRef' incorporates:
   *  Abs: '<S8>/Abs'
   */
  PubIfCommonVIE_MDL_B.t_tauAxvRef = look1_iflf_binlxpw(PubIfCommonVIE_MDL_B.Abs,
    rtCP_t_tauAxvRef_bp01Data, rtCP_t_tauAxvRef_tableData, 2U);

  /* Product: '<S8>/Product6' incorporates:
   *  Constant: '<S8>/Time27'
   */
  PubIfCommonVIE_MDL_B.filter = 0.02F / PubIfCommonVIE_MDL_B.t_tauAxvRef;

  /* Sum: '<S8>/Sum13' */
  PubIfCommonVIE_MDL_B.Sum13 = PubIfCommonVIE_MDL_B.Gain10 -
    PubIfCommonVIE_MDL_B.Memory22;

  /* Product: '<S8>/Product7' */
  PubIfCommonVIE_MDL_B.Product7 = PubIfCommonVIE_MDL_B.filter *
    PubIfCommonVIE_MDL_B.Sum13;

  /* Sum: '<S8>/Sum14' */
  PubIfCommonVIE_MDL_B.Sum14 = PubIfCommonVIE_MDL_B.Memory22 +
    PubIfCommonVIE_MDL_B.Product7;

  /* RelationalOperator: '<S5>/Compare' incorporates:
   *  Constant: '<S5>/Constant'
   */
  PubIfCommonVIE_MDL_B.Compare_d = (rtu_VIE_VCAN_ESP->VehStandstill == ((uint8_T)
    1U));

  /* Memory: '<S8>/Memory33' */
  PubIfCommonVIE_MDL_B.Memory33 = PubIfCommonVIE_MDL_DW.Memory33_PreviousInput;

  /* MATLAB Function: '<S8>/vsp_calcNoCali_v' */
  PubIfCommonVIE_MDL_B.vxvRef = PubIfCommonVIE_MDL_B.Gain8;
  if (fabsf(PubIfCommonVIE_MDL_B.Gain13) <= 0.0039) {
    if (PubIfCommonVIE_MDL_B.Compare_d) {
      PubIfCommonVIE_MDL_B.vxvRef = 0.0F;
      PubIfCommonVIE_MDL_B.axvRef = 0.0F;
    } else {
      PubIfCommonVIE_MDL_B.axvRef = PubIfCommonVIE_MDL_B.Memory33 - 0.1F *
        PubIfCommonVIE_MDL_B.Memory33;
    }
  } else {
    PubIfCommonVIE_MDL_B.axvRef = PubIfCommonVIE_MDL_B.Sum14;
  }

  /* End of MATLAB Function: '<S8>/vsp_calcNoCali_v' */

  /* Product: '<S8>/Product8' */
  PubIfCommonVIE_MDL_B.Product8 = PubIfCommonVIE_MDL_B.Memory1 *
    PubIfCommonVIE_MDL_B.axvRef;

  /* Sum: '<S8>/Sum3' */
  *rty_axvRefMs2 = PubIfCommonVIE_MDL_B.Product8 + PubIfCommonVIE_MDL_B.axvRef;

  /* Abs: '<S19>/Abs2' */
  PubIfCommonVIE_MDL_B.Abs2 = fabsf(*rty_axvRefMs2);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  PubIfCommonVIE_MDL_B.Compare_c = (PubIfCommonVIE_MDL_B.Abs2 <= 0.5F);

  /* Product: '<S8>/Product5' */
  PubIfCommonVIE_MDL_B.Product5 = PubIfCommonVIE_MDL_B.vxvRef *
    PubIfCommonVIE_MDL_B.Memory1;

  /* Sum: '<S8>/Sum2' */
  *rty_vxvRefMs = PubIfCommonVIE_MDL_B.vxvRef + PubIfCommonVIE_MDL_B.Product5;

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  PubIfCommonVIE_MDL_B.Compare_a = (*rty_vxvRefMs > 15.0F);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  PubIfCommonVIE_MDL_B.Compare_i = (*rty_vxvRefMs < 25.0F);

  /* Logic: '<S19>/AND' */
  PubIfCommonVIE_MDL_B.AND = (PubIfCommonVIE_MDL_B.Compare_a &&
    PubIfCommonVIE_MDL_B.Compare_i);

  /* Abs: '<S19>/Abs3' */
  PubIfCommonVIE_MDL_B.Abs3 = fabsf(*rty_psiDtOpt);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  PubIfCommonVIE_MDL_B.Compare_ha = (PubIfCommonVIE_MDL_B.Abs3 < 0.00325F);

  /* Logic: '<S19>/Logical Operator' */
  PubIfCommonVIE_MDL_B.LogicalOperator = (PubIfCommonVIE_MDL_ConstB.Compare &&
    PubIfCommonVIE_MDL_B.Compare_h && PubIfCommonVIE_MDL_B.Compare_c &&
    PubIfCommonVIE_MDL_B.AND && PubIfCommonVIE_MDL_B.Compare_ha);

  /* UnitDelay: '<S19>/Unit Delay1' */
  PubIfCommonVIE_MDL_B.UnitDelay1 = PubIfCommonVIE_MDL_DW.UnitDelay1_DSTATE;

  /* MATLAB Function: '<S19>/MATLAB Function2' */
  PubIfCommonVIE_MDL_DW.T = fminf(PubIfCommonVIE_MDL_DW.T + 0.02F, 1000.0F);
  if (PubIfCommonVIE_MDL_DW.T > 0.1) {
    PubIfCommonVIE_MDL_B.y = PubIfCommonVIE_MDL_B.UnitDelay1;
  } else {
    PubIfCommonVIE_MDL_B.y = VSM_SteerAngOffsetInit;
  }

  /* End of MATLAB Function: '<S19>/MATLAB Function2' */

  /* Sum: '<S19>/Sum1' incorporates:
   *  Constant: '<S19>/Constant10'
   */
  PubIfCommonVIE_MDL_B.Sum1 = 0.5F - (real32_T)
    PubIfCommonVIE_MDL_B.DataTypeConversion19;

  /* Gain: '<S19>/Gain9' */
  PubIfCommonVIE_MDL_B.Gain9 = 2.0F * PubIfCommonVIE_MDL_B.Sum1;

  /* Product: '<S19>/FilterTime6' */
  PubIfCommonVIE_MDL_B.FilterTime6 = PubIfCommonVIE_MDL_B.Gain9 *
    rtu_VIE_VCAN_CSA->SteerWheelAng;

  /* Product: '<S19>/FilterTime2' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Constant: '<S19>/Constant6'
   */
  PubIfCommonVIE_MDL_B.FilterTime2 = PubIfCommonVIE_MDL_B.FilterTime6 /
    P_Global_SteeringAngleRatio / 57.3F;

  /* Memory: '<S19>/Memory52' */
  PubIfCommonVIE_MDL_B.Memory52 = PubIfCommonVIE_MDL_DW.Memory52_PreviousInput;

  /* MATLAB Function: '<S19>/YOD_Ackman' incorporates:
   *  Constant: '<S19>/Constant4'
   *  Constant: '<S19>/Constant5'
   */
  if (*rty_vxvRefMs == 0.0F) {
    t_vxwMin = 0.0F;
    t = 1.0F;
  } else {
    t = fminf((*rty_vxvRefMs * *rty_vxvRefMs / (P_Global_CharSpd_ms *
                P_Global_CharSpd_ms) + 1.0F) * P_Global_WheelBase_m /
              *rty_vxvRefMs, 32767.0F);
    t_vxwMin = PubIfCommonVIE_MDL_B.FilterTime2 / t;
  }

  PubIfCommonVIE_MDL_B.PsiDtAck = (t_vxwMin - PubIfCommonVIE_MDL_B.Memory52) *
    0.2F + PubIfCommonVIE_MDL_B.Memory52;
  PubIfCommonVIE_MDL_B.AckConst = t;

  /* End of MATLAB Function: '<S19>/YOD_Ackman' */

  /* Sum: '<S19>/Sum' */
  PubIfCommonVIE_MDL_B.Sum = PubIfCommonVIE_MDL_B.PsiDtAck - *rty_psiDtOpt;

  /* UnitDelay: '<S19>/Unit Delay' */
  PubIfCommonVIE_MDL_B.UnitDelay_d = PubIfCommonVIE_MDL_DW.UnitDelay_DSTATE_f;

  /* If: '<S19>/If' */
  if (PubIfCommonVIE_MDL_B.LogicalOperator) {
    /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    /* Product: '<S51>/FilterTime2' incorporates:
     *  Constant: '<S51>/Constant7'
     *  Constant: '<S51>/Constant8'
     */
    PubIfCommonVIE_MDL_B.FilterTime2_m = P_Global_SteeringAngleRatio * 57.3F *
      PubIfCommonVIE_MDL_B.AckConst * PubIfCommonVIE_MDL_B.Sum;

    /* Sum: '<S51>/Sum6' */
    PubIfCommonVIE_MDL_B.Sum6_f = PubIfCommonVIE_MDL_B.FilterTime2_m -
      PubIfCommonVIE_MDL_B.UnitDelay_d;

    /* Product: '<S51>/Product6' */
    PubIfCommonVIE_MDL_B.Product6 = PubIfCommonVIE_MDL_ConstB.Product2 *
      PubIfCommonVIE_MDL_B.Sum6_f;

    /* Merge: '<S19>/Merge' incorporates:
     *  Sum: '<S51>/Sum7'
     */
    VSM_SteerAngleOffset_deg = PubIfCommonVIE_MDL_B.Product6 +
      PubIfCommonVIE_MDL_B.UnitDelay_d;

    /* End of Outputs for SubSystem: '<S19>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    /* Merge: '<S19>/Merge' incorporates:
     *  Inport: '<S52>/y'
     */
    VSM_SteerAngleOffset_deg = PubIfCommonVIE_MDL_B.y;

    /* End of Outputs for SubSystem: '<S19>/If Action Subsystem1' */
  }

  /* End of If: '<S19>/If' */

  /* SignalConversion: '<S2>/Signal Conversion1' */
  *rty_SteerAngleOffset_deg = VSM_SteerAngleOffset_deg;

  /* Product: '<S3>/FilterTime2' */
  *rty_ayvRefMs2 = *rty_psiDtOpt * *rty_vxvRefMs;

  /* Gain: '<S3>/-K' */
  *rty_alpSideSlipAngle = (-0.0039F) * *rty_ayvRefMs2;

  /* Product: '<S12>/Product5' incorporates:
   *  Constant: '<S12>/K'
   */
  PubIfCommonVIE_MDL_B.Product5_a = *rty_vxvRefMs * *rty_vxvRefMs *
    P_Global_SideSlipAnglefactor;

  /* Sum: '<S12>/Sum7' incorporates:
   *  Constant: '<S12>/AxSensorToRearAxis'
   */
  PubIfCommonVIE_MDL_B.Offset = 2.22F - PubIfCommonVIE_MDL_B.Product5_a;

  /* Product: '<S12>/Product3' */
  PubIfCommonVIE_MDL_B.Product3_o = PubIfCommonVIE_MDL_B.Offset * *rty_psiDtOpt *
    *rty_psiDtOpt;

  /* Memory: '<S13>/Memory2' */
  PubIfCommonVIE_MDL_B.Memory2_j = PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_k;

  /* Sum: '<S13>/Sum4' */
  PubIfCommonVIE_MDL_B.Sum4_k = PubIfCommonVIE_MDL_B.Product3_o -
    PubIfCommonVIE_MDL_B.Memory2_j;

  /* Product: '<S13>/Product1' */
  PubIfCommonVIE_MDL_B.Product1_k = PubIfCommonVIE_MDL_ConstB.Product4_p *
    PubIfCommonVIE_MDL_B.Sum4_k;

  /* Sum: '<S13>/Sum5' */
  PubIfCommonVIE_MDL_B.Sum5_a = PubIfCommonVIE_MDL_B.Product1_k +
    PubIfCommonVIE_MDL_B.Memory2_j;

  /* S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_B.TappedDelay_e[0] = rtu_VIE_VCAN_ABM->VehLgtAccel;
  PubIfCommonVIE_MDL_B.TappedDelay_e[1] = PubIfCommonVIE_MDL_DW.TappedDelay_X_b
    [0];
  PubIfCommonVIE_MDL_B.TappedDelay_e[2] = PubIfCommonVIE_MDL_DW.TappedDelay_X_b
    [1];
  PubIfCommonVIE_MDL_B.TappedDelay_e[3] = PubIfCommonVIE_MDL_DW.TappedDelay_X_b
    [2];
  PubIfCommonVIE_MDL_B.TappedDelay_e[4] = PubIfCommonVIE_MDL_DW.TappedDelay_X_b
    [3];

  /* Sum: '<S12>/Sum of Elements' */
  t = -0.0F;
  for (i = 0; i < 5; i++) {
    t += PubIfCommonVIE_MDL_B.TappedDelay_e[i];
  }

  /* Sum: '<S12>/Sum of Elements' */
  PubIfCommonVIE_MDL_B.SumofElements_o = t;

  /* Gain: '<S12>/Gain16' */
  PubIfCommonVIE_MDL_B.AxvSensorMean = 0.2F *
    PubIfCommonVIE_MDL_B.SumofElements_o;

  /* Sum: '<S12>/Sum1' */
  PubIfCommonVIE_MDL_B.t_axvSensorRA = PubIfCommonVIE_MDL_B.Sum5_a +
    PubIfCommonVIE_MDL_B.AxvSensorMean;

  /* Lookup_n-D: '<S12>/t_FiltaxvRoadSlope' */
  PubIfCommonVIE_MDL_B.t_FiltaxvRoadSlope = look1_iflf_binlxpw(*rty_vxvRefMs,
    rtCP_t_FiltaxvRoadSlope_bp01Data, rtCP_t_FiltaxvRoadSlope_tableData, 3U);

  /* Product: '<S12>/Product1' incorporates:
   *  Constant: '<S12>/Constant'
   */
  PubIfCommonVIE_MDL_B.Product1_f = 0.02F /
    PubIfCommonVIE_MDL_B.t_FiltaxvRoadSlope;

  /* Memory: '<S12>/Memory' */
  PubIfCommonVIE_MDL_B.Memory = PubIfCommonVIE_MDL_DW.Memory_PreviousInput;

  /* Sum: '<S12>/Sum' */
  PubIfCommonVIE_MDL_B.Sum_m = *rty_vxvRefMs - PubIfCommonVIE_MDL_B.Memory;

  /* Gain: '<S12>/Gain1' */
  PubIfCommonVIE_MDL_B.Gain1_g = 50.0F * PubIfCommonVIE_MDL_B.Sum_m;

  /* Sum: '<S12>/Sum2' */
  PubIfCommonVIE_MDL_B.Sum2 = PubIfCommonVIE_MDL_B.t_axvSensorRA -
    PubIfCommonVIE_MDL_B.Gain1_g;

  /* Memory: '<S12>/Memory1' */
  PubIfCommonVIE_MDL_B.Memory1_h = PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_f;

  /* Sum: '<S12>/Sum3' */
  PubIfCommonVIE_MDL_B.Sum3 = PubIfCommonVIE_MDL_B.Sum2 -
    PubIfCommonVIE_MDL_B.Memory1_h;

  /* Product: '<S12>/Product2' */
  PubIfCommonVIE_MDL_B.Product2_d = PubIfCommonVIE_MDL_B.Product1_f *
    PubIfCommonVIE_MDL_B.Sum3;

  /* Sum: '<S12>/Sum4' */
  PubIfCommonVIE_MDL_B.Sum4_l = PubIfCommonVIE_MDL_B.Product2_d +
    PubIfCommonVIE_MDL_B.Memory1_h;

  /* Memory: '<S12>/Memory2' */
  PubIfCommonVIE_MDL_B.Memory2_m = PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_j;

  /* Sum: '<S12>/Sum5' */
  PubIfCommonVIE_MDL_B.Sum5_l = PubIfCommonVIE_MDL_B.Sum4_l -
    PubIfCommonVIE_MDL_B.Memory2_m;

  /* Product: '<S12>/Product4' */
  PubIfCommonVIE_MDL_B.Product4_n = PubIfCommonVIE_MDL_B.Product1_f *
    PubIfCommonVIE_MDL_B.Sum5_l;

  /* Sum: '<S12>/Sum6' */
  *rty_axvRoadSlopeMs2 = PubIfCommonVIE_MDL_B.Product4_n +
    PubIfCommonVIE_MDL_B.Memory2_m;

  /* Sum: '<S4>/Sum13' */
  PubIfCommonVIE_MDL_B.Sum13_k = PubIfCommonVIE_MDL_B.t_axvSensorRA -
    *rty_axvRoadSlopeMs2;

  /* Memory: '<S10>/Memory2' */
  PubIfCommonVIE_MDL_B.Memory2 = PubIfCommonVIE_MDL_DW.Memory2_PreviousInput;

  /* Sum: '<S10>/Sum4' */
  PubIfCommonVIE_MDL_B.Sum4 = PubIfCommonVIE_MDL_B.Sum13_k -
    PubIfCommonVIE_MDL_B.Memory2;

  /* Product: '<S10>/Product1' */
  PubIfCommonVIE_MDL_B.Product1 = PubIfCommonVIE_MDL_ConstB.Product4 *
    PubIfCommonVIE_MDL_B.Sum4;

  /* Sum: '<S10>/Sum5' */
  PubIfCommonVIE_MDL_B.Sum5 = PubIfCommonVIE_MDL_B.Product1 +
    PubIfCommonVIE_MDL_B.Memory2;

  /* Memory: '<S4>/Memory3' */
  PubIfCommonVIE_MDL_B.Memory3 = PubIfCommonVIE_MDL_DW.Memory3_PreviousInput;

  /* MATLAB Function: '<S4>/MATLAB Function' incorporates:
   *  Constant: '<S4>/ErrorLimt'
   */
  if ((*rty_axvRefMs2 == 0.0F) && (*rty_vxvRefMs == 0.0F)) {
    *rty_axRefMs2 = 0.0F;
  } else {
    if (fabsf((real32_T)PubIfCommonVIE_MDL_B.Sum5 - *rty_axvRefMs2) < 0.15F) {
      t = ((real32_T)PubIfCommonVIE_MDL_B.Sum5 + *rty_axvRefMs2) * 0.5F;
    } else {
      t = *rty_axvRefMs2;
    }

    *rty_axRefMs2 = (t - PubIfCommonVIE_MDL_B.Memory3) * 0.25F +
      PubIfCommonVIE_MDL_B.Memory3;
  }

  /* End of MATLAB Function: '<S4>/MATLAB Function' */

  /* Memory: '<S4>/Memory2' */
  PubIfCommonVIE_MDL_B.Memory2_i = PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_a;

  /* Sum: '<S4>/Sum6' */
  PubIfCommonVIE_MDL_B.Sum6_m = *rty_axRefMs2 - PubIfCommonVIE_MDL_B.Memory2_i;

  /* Gain: '<S4>/Gain2' */
  PubIfCommonVIE_MDL_B.Gain2_n = 50.0F * PubIfCommonVIE_MDL_B.Sum6_m;

  /* Memory: '<S4>/Memory1' */
  PubIfCommonVIE_MDL_B.Memory1_c = PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_n;

  /* Sum: '<S4>/Sum4' */
  PubIfCommonVIE_MDL_B.Sum4_kj = PubIfCommonVIE_MDL_B.Gain2_n -
    PubIfCommonVIE_MDL_B.Memory1_c;

  /* Product: '<S4>/Product4' */
  PubIfCommonVIE_MDL_B.Product4_i = PubIfCommonVIE_MDL_ConstB.Product3 *
    PubIfCommonVIE_MDL_B.Sum4_kj;

  /* Sum: '<S4>/Sum5' */
  *rty_axRefDt = PubIfCommonVIE_MDL_B.Product4_i +
    PubIfCommonVIE_MDL_B.Memory1_c;

  /* Gain: '<S12>/Gain2' */
  PubIfCommonVIE_MDL_B.Gain2_e = 0.10204082F * *rty_axvRoadSlopeMs2;

  /* Trigonometry: '<S12>/Trigonometric Function' */
  t = PubIfCommonVIE_MDL_B.Gain2_e;
  if (t > 1.0F) {
    t = 1.0F;
  } else {
    if (t < -1.0F) {
      t = -1.0F;
    }
  }

  /* Trigonometry: '<S12>/Trigonometric Function' */
  PubIfCommonVIE_MDL_B.TrigonometricFunction = asinf(t);

  /* Gain: '<S12>/Gain3' */
  PubIfCommonVIE_MDL_B.Gain3_p = 57.3F *
    PubIfCommonVIE_MDL_B.TrigonometricFunction;

  /* Memory: '<S3>/Memory' */
  PubIfCommonVIE_MDL_B.Memory_h = PubIfCommonVIE_MDL_DW.Memory_PreviousInput_p;

  /* Sum: '<S3>/Sum' */
  PubIfCommonVIE_MDL_B.Sum_g = PubIfCommonVIE_MDL_B.PsiDtInF -
    PubIfCommonVIE_MDL_B.Memory_h;

  /* Gain: '<S3>/Gain1' */
  PubIfCommonVIE_MDL_B.PsiDtDt = 50.0F * PubIfCommonVIE_MDL_B.Sum_g;

  /* Memory: '<S3>/Memory1' */
  PubIfCommonVIE_MDL_B.Memory1_a = PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_p;

  /* Sum: '<S3>/Sum1' */
  PubIfCommonVIE_MDL_B.Sum1_c = PubIfCommonVIE_MDL_B.PsiDtDt -
    PubIfCommonVIE_MDL_B.Memory1_a;

  /* Product: '<S3>/FilterTime1' */
  PubIfCommonVIE_MDL_B.FilterTime1 = PubIfCommonVIE_MDL_ConstB.FilterTime *
    PubIfCommonVIE_MDL_B.Sum1_c;

  /* Saturate: '<S3>/Saturation' */
  t = *rty_vxvRefMs;
  t_vxwMin = 0.5F;
  t_vxwDiffFLFR = 200.0F;
  if (t > t_vxwDiffFLFR) {
    /* Saturate: '<S3>/Saturation' */
    PubIfCommonVIE_MDL_B.Saturation_e = t_vxwDiffFLFR;
  } else if (t < t_vxwMin) {
    /* Saturate: '<S3>/Saturation' */
    PubIfCommonVIE_MDL_B.Saturation_e = t_vxwMin;
  } else {
    /* Saturate: '<S3>/Saturation' */
    PubIfCommonVIE_MDL_B.Saturation_e = t;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Product: '<S3>/FilterTime3' */
  PubIfCommonVIE_MDL_B.K_yawrate = *rty_psiDtOpt /
    PubIfCommonVIE_MDL_B.Saturation_e;

  /* Lookup_n-D: '<S3>/W' */
  PubIfCommonVIE_MDL_B.W = look1_iflf_binlxpw(*rty_vxvRefMs, rtCP_W_bp01Data,
    rtCP_W_tableData, 3U);

  /* Sum: '<S19>/Sum4' */
  PubIfCommonVIE_MDL_B.Sum4_kt = PubIfCommonVIE_MDL_B.FilterTime6 -
    VSM_SteerAngleOffset_deg;

  /* Product: '<S19>/FilterTime3' incorporates:
   *  Constant: '<S19>/Constant11'
   *  Constant: '<S19>/Constant9'
   */
  PubIfCommonVIE_MDL_B.FilterTime3 = PubIfCommonVIE_MDL_B.Sum4_kt /
    P_Global_SteeringAngleRatio / 57.3F;

  /* Trigonometry: '<S3>/Trigonometric Function' */
  PubIfCommonVIE_MDL_B.TrigonometricFunction_j = tanf
    (PubIfCommonVIE_MDL_B.FilterTime3);

  /* Product: '<S3>/t_KapByWheelAngle' incorporates:
   *  Constant: '<S3>/Constant6'
   */
  PubIfCommonVIE_MDL_B.K_wheelAngle =
    PubIfCommonVIE_MDL_B.TrigonometricFunction_j / P_Global_WheelBase_m;

  /* Product: '<S3>/FilterTime4' */
  PubIfCommonVIE_MDL_B.FilterTime4 = PubIfCommonVIE_MDL_B.W *
    PubIfCommonVIE_MDL_B.K_wheelAngle;

  /* Sum: '<S3>/Sum4' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  PubIfCommonVIE_MDL_B.Sum4_h = 1.0F - PubIfCommonVIE_MDL_B.W;

  /* Product: '<S3>/FilterTime5' */
  PubIfCommonVIE_MDL_B.FilterTime5 = PubIfCommonVIE_MDL_B.K_yawrate *
    PubIfCommonVIE_MDL_B.Sum4_h;

  /* Gain: '<S3>/Gain13' */
  PubIfCommonVIE_MDL_B.Gain13_c = 0.0174520072F *
    rtu_VIE_VCAN_CSA->SteerWheelSpd;

  /* Memory: '<S3>/Memory3' */
  PubIfCommonVIE_MDL_B.Memory3_m = PubIfCommonVIE_MDL_DW.Memory3_PreviousInput_j;

  /* Memory: '<S3>/Memory4' */
  PubIfCommonVIE_MDL_B.Memory4 = PubIfCommonVIE_MDL_DW.Memory4_PreviousInput;

  /* Sum: '<S3>/Sum2' */
  PubIfCommonVIE_MDL_B.Sum2_f = PubIfCommonVIE_MDL_B.FilterTime1 +
    PubIfCommonVIE_MDL_B.Memory1_a;

  /* Outputs for Atomic SubSystem: '<S3>/PsiDtStandstillCalc' */
  /* Memory: '<S7>/Memory2' */
  PubIfCommonVIE_MDL_B.Memory2_k = PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_o;

  /* Memory: '<S7>/Memory3' */
  PubIfCommonVIE_MDL_B.Memory3_c = PubIfCommonVIE_MDL_DW.Memory3_PreviousInput_n;

  /* MATLAB Function: '<S7>/MATLAB Function' */
  PubIfCommonVIE_MDL_B.PsiDtStandstill_o = PubIfCommonVIE_MDL_B.Memory3_c;
  t = (PubIfCommonVIE_MDL_B.PsiDtInF - PubIfCommonVIE_MDL_B.Memory2_k) * 0.04F +
    PubIfCommonVIE_MDL_B.Memory2_k;
  if (PubIfCommonVIE_MDL_B.Compare_d && (fabsf(t) < 0.08) && (fabsf
       (PubIfCommonVIE_MDL_B.PsiDtDt) < 0.1) && (fabsf
       (PubIfCommonVIE_MDL_B.Sum2_f) < 0.01) && (fabsf
       (PubIfCommonVIE_MDL_B.Gain13_c) <= 1.5708)) {
    PubIfCommonVIE_MDL_B.PsiDtStandstill_o = (PubIfCommonVIE_MDL_B.PsiDtInF -
      PubIfCommonVIE_MDL_B.Memory3_c) * 0.00399999972F +
      PubIfCommonVIE_MDL_B.Memory3_c;
  }

  PubIfCommonVIE_MDL_B.PsiDtLP = t;

  /* End of MATLAB Function: '<S7>/MATLAB Function' */
  /* End of Outputs for SubSystem: '<S3>/PsiDtStandstillCalc' */

  /* Sum: '<S3>/Sum5' */
  *rty_kapTraj = PubIfCommonVIE_MDL_B.FilterTime5 +
    PubIfCommonVIE_MDL_B.FilterTime4;

  /* Sum: '<S3>/Sum8' */
  PubIfCommonVIE_MDL_B.Sum8_o = rtu_VIE_VCAN_ABM->VehYawRate -
    PubIfCommonVIE_MDL_B.PsiDtStandstill;

  /* Memory: '<S8>/Memory30' */
  PubIfCommonVIE_MDL_B.Memory30 = PubIfCommonVIE_MDL_DW.Memory30_PreviousInput;

  /* Sum: '<S8>/Sum10' */
  PubIfCommonVIE_MDL_B.Sum10 = PubIfCommonVIE_MDL_B.Sum9 -
    PubIfCommonVIE_MDL_B.Memory30;

  /* Gain: '<S8>/Gain12' */
  PubIfCommonVIE_MDL_B.Gain12 = 0.05 * PubIfCommonVIE_MDL_B.Sum10;

  /* Memory: '<S8>/Memory24' */
  PubIfCommonVIE_MDL_B.Memory24 = PubIfCommonVIE_MDL_DW.Memory24_PreviousInput;

  /* Memory: '<S8>/Memory25' */
  PubIfCommonVIE_MDL_B.Memory25 = PubIfCommonVIE_MDL_DW.Memory25_PreviousInput;

  /* Memory: '<S8>/Memory26' */
  PubIfCommonVIE_MDL_B.Memory26 = PubIfCommonVIE_MDL_DW.Memory26_PreviousInput;

  /* Memory: '<S8>/Memory27' */
  PubIfCommonVIE_MDL_B.Memory27 = PubIfCommonVIE_MDL_DW.Memory27_PreviousInput;

  /* Memory: '<S8>/Memory28' */
  PubIfCommonVIE_MDL_B.Memory28 = PubIfCommonVIE_MDL_DW.Memory28_PreviousInput;

  /* Sum: '<S8>/Sum11' */
  PubIfCommonVIE_MDL_B.Sum11 = PubIfCommonVIE_MDL_B.Gain12 +
    PubIfCommonVIE_MDL_B.Memory30;

  /* MATLAB Function: '<S8>/transBrakeToDrive' */
  PubIfCommonVIE_MDL_B.l_tTransBrakeToDrive = fmaxf
    (PubIfCommonVIE_MDL_B.Memory27 - 0.02F, 0.0F);
  PubIfCommonVIE_MDL_B.l_tTransDriveToBrake = fmaxf
    (PubIfCommonVIE_MDL_B.Memory25 - 0.02F, 0.0F);
  t = PubIfCommonVIE_MDL_B.Memory26;
  t_vxwMin = PubIfCommonVIE_MDL_B.Memory24;
  if (((PubIfCommonVIE_MDL_B.Memory28 > -0.3) && (*rty_axvRefMs2 > -0.3) &&
       (*rty_vxvRefMs > 0.0F)) || ((PubIfCommonVIE_MDL_B.Memory28 < 0.3) &&
       (*rty_axvRefMs2 < 0.3) && (*rty_vxvRefMs < 0.0F))) {
    t = 0.0F;
    t_vxwMin = 0.0F;
  }

  if (((PubIfCommonVIE_MDL_B.Memory28 < -0.7) && (*rty_axvRefMs2 < -0.7) &&
       (*rty_vxvRefMs > 0.0F)) || ((PubIfCommonVIE_MDL_B.Memory28 > 0.7) &&
       (*rty_axvRefMs2 > 0.7) && (*rty_vxvRefMs < 0.0F))) {
    t = 0.0F;
    t_vxwMin = 0.0F;
  }

  if (((PubIfCommonVIE_MDL_B.Memory28 >= -0.3) && (*rty_axvRefMs2 < -0.3) &&
       (*rty_vxvRefMs > 0.0F)) || ((PubIfCommonVIE_MDL_B.Memory28 <= 0.3) &&
       (*rty_axvRefMs2 > 0.3) && (*rty_vxvRefMs < 0.0F))) {
    t += 0.02F;
  }

  if (((PubIfCommonVIE_MDL_B.Memory28 <= -0.7) && (*rty_axvRefMs2 > -0.7) &&
       (*rty_vxvRefMs > 0.0F)) || ((PubIfCommonVIE_MDL_B.Memory28 >= 0.7) &&
       (*rty_axvRefMs2 < 0.7) && (*rty_vxvRefMs < 0.0F))) {
    t_vxwMin += 0.02F;
  }

  if (((*rty_axvRefMs2 >= -0.7) && (*rty_axvRefMs2 <= -0.3) && (*rty_vxvRefMs >
        0.0F)) || ((*rty_axvRefMs2 <= 0.7) && (*rty_axvRefMs2 >= 0.3) &&
                   (*rty_vxvRefMs < 0.0F))) {
    if (t > 0.0F) {
      t = fminf(t + 0.02F, 0.16F);
    }

    if (t_vxwMin > 0.0F) {
      t_vxwMin = fminf(t_vxwMin + 0.02F, 0.16F);
    }
  }

  if ((((PubIfCommonVIE_MDL_B.Memory28 >= -0.7) && (*rty_axvRefMs2 < -0.7) &&
        (*rty_vxvRefMs > 0.0F)) || ((PubIfCommonVIE_MDL_B.Memory28 <= 0.7) &&
        (*rty_axvRefMs2 > 0.7) && (*rty_vxvRefMs < 0.0F))) && (t > 0.0F) && (t <
       0.16)) {
    PubIfCommonVIE_MDL_B.l_tTransDriveToBrake = 0.15F;
  }

  if ((((PubIfCommonVIE_MDL_B.Memory28 <= -0.3) && (*rty_axvRefMs2 > -0.3) &&
        (*rty_vxvRefMs > 0.0F)) || ((PubIfCommonVIE_MDL_B.Memory28 >= 0.3) &&
        (*rty_axvRefMs2 < 0.3) && (*rty_vxvRefMs < 0.0F))) && (t_vxwMin > 0.0F) &&
      (t_vxwMin < 0.16)) {
    PubIfCommonVIE_MDL_B.l_tTransBrakeToDrive = 0.15F;
  }

  PubIfCommonVIE_MDL_B.l_tHysARefDriveToBrakeOutput = t;
  PubIfCommonVIE_MDL_B.l_tHysARefBrakeToDriveOutput = t_vxwMin;

  /* End of MATLAB Function: '<S8>/transBrakeToDrive' */

  /* MATLAB Function: '<S3>/alpSumSlideCurveness' */
  if (fabsf(*rty_vxvRefMs) < 0.01) {
    t = 65535.0F;
  } else {
    t = fminf(400.0F / fabsf(*rty_vxvRefMs), 65535.0F);
  }

  t_vxwMin = fabsf(*rty_psiDtOpt);
  if (t_vxwMin < 0.003) {
    t_vxwMin = 0.0F;
  }

  *rty_alpSumSlideCurveness = fminf((t_vxwMin - PubIfCommonVIE_MDL_B.Memory4 / t)
    * 0.02F + PubIfCommonVIE_MDL_B.Memory4, 2.0F);

  /* End of MATLAB Function: '<S3>/alpSumSlideCurveness' */
}

/* Update for referenced model: 'PubIfCommonVIE_MDL' */
void PubIfCommonVIE_MDL_Update(const VCAN_ABM_MSG_BUS *rtu_VIE_VCAN_ABM,
  real32_T *rty_axvRefMs2, real32_T *rty_vxvRefMs, real32_T *rty_axvRoadSlopeMs2,
  real32_T *rty_axRefMs2, real32_T *rty_axRefDt, real32_T
  *rty_alpSumSlideCurveness)
{
  int_T i;

  /* Update for S-Function (sfix_udelay): '<S19>/Tapped Delay4' */
  for (i = 0; i < 8; i++) {
    PubIfCommonVIE_MDL_DW.TappedDelay4_X[8 - i] =
      PubIfCommonVIE_MDL_DW.TappedDelay4_X[7 - i];
  }

  PubIfCommonVIE_MDL_DW.TappedDelay4_X[0] =
    PubIfCommonVIE_MDL_B.DataTypeConversion;

  /* End of Update for S-Function (sfix_udelay): '<S19>/Tapped Delay4' */

  /* Update for Memory: '<S8>/Memory1' incorporates:
   *  Constant: '<S8>/Fak0125sVrefTol'
   */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput = 0.0F;

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  PubIfCommonVIE_MDL_DW.UnitDelay_DSTATE = PubIfCommonVIE_MDL_B.Saturation;

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[3] = PubIfCommonVIE_MDL_DW.TappedDelay_X[2];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[3] =
    PubIfCommonVIE_MDL_DW.TappedDelay1_X[2];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[3] =
    PubIfCommonVIE_MDL_DW.TappedDelay2_X[2];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[3] =
    PubIfCommonVIE_MDL_DW.TappedDelay3_X[2];

  /* Update for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[3] =
    PubIfCommonVIE_MDL_DW.TappedDelay_X_g[2];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[2] = PubIfCommonVIE_MDL_DW.TappedDelay_X[1];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[2] =
    PubIfCommonVIE_MDL_DW.TappedDelay1_X[1];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[2] =
    PubIfCommonVIE_MDL_DW.TappedDelay2_X[1];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[2] =
    PubIfCommonVIE_MDL_DW.TappedDelay3_X[1];

  /* Update for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[2] =
    PubIfCommonVIE_MDL_DW.TappedDelay_X_g[1];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[1] = PubIfCommonVIE_MDL_DW.TappedDelay_X[0];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[1] =
    PubIfCommonVIE_MDL_DW.TappedDelay1_X[0];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[1] =
    PubIfCommonVIE_MDL_DW.TappedDelay2_X[0];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[1] =
    PubIfCommonVIE_MDL_DW.TappedDelay3_X[0];

  /* Update for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[1] =
    PubIfCommonVIE_MDL_DW.TappedDelay_X_g[0];

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X[0] = PubIfCommonVIE_MDL_B.Gain;

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1' */
  PubIfCommonVIE_MDL_DW.TappedDelay1_X[0] = PubIfCommonVIE_MDL_B.Gain1;

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay2' */
  PubIfCommonVIE_MDL_DW.TappedDelay2_X[0] = PubIfCommonVIE_MDL_B.Gain2;

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay3' */
  PubIfCommonVIE_MDL_DW.TappedDelay3_X[0] = PubIfCommonVIE_MDL_B.Gain3;

  /* Update for S-Function (sfix_udelay): '<S6>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_g[0] = rtu_VIE_VCAN_ABM->VehYawRate;

  /* Update for Memory: '<S3>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_n =
    PubIfCommonVIE_MDL_B.PsiDtStandstill_o;

  /* Update for Memory: '<S8>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_i =
    PubIfCommonVIE_MDL_B.FilterTime3;

  /* Update for Memory: '<S8>/Memory31' */
  PubIfCommonVIE_MDL_DW.Memory31_PreviousInput = PubIfCommonVIE_MDL_B.Sum11;

  /* Update for Memory: '<S8>/Memory34' */
  PubIfCommonVIE_MDL_DW.Memory34_PreviousInput = *rty_axvRefMs2;

  /* Update for Memory: '<S8>/Memory35' */
  PubIfCommonVIE_MDL_DW.Memory35_PreviousInput = *rty_vxvRefMs;

  /* Update for Memory: '<S8>/Memory36' */
  PubIfCommonVIE_MDL_DW.Memory36_PreviousInput =
    PubIfCommonVIE_MDL_B.l_tTransDriveToBrake;

  /* Update for Memory: '<S8>/Memory37' */
  PubIfCommonVIE_MDL_DW.Memory37_PreviousInput = *rty_vxvRefMs;

  /* Update for Memory: '<S8>/Memory39' */
  PubIfCommonVIE_MDL_DW.Memory39_PreviousInput =
    PubIfCommonVIE_MDL_B.l_tTransDriveToBrake;

  /* Update for Memory: '<S8>/Memory38' */
  PubIfCommonVIE_MDL_DW.Memory38_PreviousInput =
    PubIfCommonVIE_MDL_B.l_tTransBrakeToDrive;

  /* Update for Memory: '<S8>/Memory23' */
  PubIfCommonVIE_MDL_DW.Memory23_PreviousInput = PubIfCommonVIE_MDL_B.vxvRefRaw;

  /* Update for S-Function (sfix_udelay): '<S8>/Tapped Delay8' */
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[3] =
    PubIfCommonVIE_MDL_DW.TappedDelay8_X[2];
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[2] =
    PubIfCommonVIE_MDL_DW.TappedDelay8_X[1];
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[1] =
    PubIfCommonVIE_MDL_DW.TappedDelay8_X[0];
  PubIfCommonVIE_MDL_DW.TappedDelay8_X[0] = PubIfCommonVIE_MDL_B.vxvRefRaw;

  /* Update for Memory: '<S8>/Memory22' */
  PubIfCommonVIE_MDL_DW.Memory22_PreviousInput = PubIfCommonVIE_MDL_B.Sum14;

  /* Update for Memory: '<S8>/Memory21' */
  PubIfCommonVIE_MDL_DW.Memory21_PreviousInput = PubIfCommonVIE_MDL_B.Gain8;

  /* Update for Memory: '<S8>/Memory29' */
  PubIfCommonVIE_MDL_DW.Memory29_PreviousInput = PubIfCommonVIE_MDL_B.Sum9;

  /* Update for Memory: '<S8>/Memory33' */
  PubIfCommonVIE_MDL_DW.Memory33_PreviousInput = PubIfCommonVIE_MDL_B.axvRef;

  /* Update for UnitDelay: '<S19>/Unit Delay1' */
  PubIfCommonVIE_MDL_DW.UnitDelay1_DSTATE = VSM_SteerAngleOffset_deg;

  /* Update for Memory: '<S19>/Memory52' */
  PubIfCommonVIE_MDL_DW.Memory52_PreviousInput = PubIfCommonVIE_MDL_B.PsiDtAck;

  /* Update for UnitDelay: '<S19>/Unit Delay' */
  PubIfCommonVIE_MDL_DW.UnitDelay_DSTATE_f = VSM_SteerAngleOffset_deg;

  /* Update for Memory: '<S13>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_k = PubIfCommonVIE_MDL_B.Sum5_a;

  /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[3] =
    PubIfCommonVIE_MDL_DW.TappedDelay_X_b[2];
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[2] =
    PubIfCommonVIE_MDL_DW.TappedDelay_X_b[1];
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[1] =
    PubIfCommonVIE_MDL_DW.TappedDelay_X_b[0];
  PubIfCommonVIE_MDL_DW.TappedDelay_X_b[0] = rtu_VIE_VCAN_ABM->VehLgtAccel;

  /* Update for Memory: '<S12>/Memory' */
  PubIfCommonVIE_MDL_DW.Memory_PreviousInput = *rty_vxvRefMs;

  /* Update for Memory: '<S12>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_f = PubIfCommonVIE_MDL_B.Sum4_l;

  /* Update for Memory: '<S12>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_j = *rty_axvRoadSlopeMs2;

  /* Update for Memory: '<S10>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput = PubIfCommonVIE_MDL_B.Sum5;

  /* Update for Memory: '<S4>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput = *rty_axRefMs2;

  /* Update for Memory: '<S4>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_a = *rty_axRefMs2;

  /* Update for Memory: '<S4>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_n = *rty_axRefDt;

  /* Update for Memory: '<S3>/Memory' */
  PubIfCommonVIE_MDL_DW.Memory_PreviousInput_p = PubIfCommonVIE_MDL_B.PsiDtInF;

  /* Update for Memory: '<S3>/Memory1' */
  PubIfCommonVIE_MDL_DW.Memory1_PreviousInput_p = PubIfCommonVIE_MDL_B.Sum2_f;

  /* Update for Memory: '<S3>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput_j = PubIfCommonVIE_MDL_B.Sum8_o;

  /* Update for Memory: '<S3>/Memory4' */
  PubIfCommonVIE_MDL_DW.Memory4_PreviousInput = *rty_alpSumSlideCurveness;

  /* Update for Atomic SubSystem: '<S3>/PsiDtStandstillCalc' */
  /* Update for Memory: '<S7>/Memory2' */
  PubIfCommonVIE_MDL_DW.Memory2_PreviousInput_o = PubIfCommonVIE_MDL_B.PsiDtLP;

  /* Update for Memory: '<S7>/Memory3' */
  PubIfCommonVIE_MDL_DW.Memory3_PreviousInput_n =
    PubIfCommonVIE_MDL_B.PsiDtStandstill_o;

  /* End of Update for SubSystem: '<S3>/PsiDtStandstillCalc' */

  /* Update for Memory: '<S8>/Memory30' */
  PubIfCommonVIE_MDL_DW.Memory30_PreviousInput = PubIfCommonVIE_MDL_B.Sum11;

  /* Update for Memory: '<S8>/Memory24' */
  PubIfCommonVIE_MDL_DW.Memory24_PreviousInput =
    PubIfCommonVIE_MDL_B.l_tHysARefBrakeToDriveOutput;

  /* Update for Memory: '<S8>/Memory25' */
  PubIfCommonVIE_MDL_DW.Memory25_PreviousInput =
    PubIfCommonVIE_MDL_B.l_tTransDriveToBrake;

  /* Update for Memory: '<S8>/Memory26' */
  PubIfCommonVIE_MDL_DW.Memory26_PreviousInput =
    PubIfCommonVIE_MDL_B.l_tHysARefDriveToBrakeOutput;

  /* Update for Memory: '<S8>/Memory27' */
  PubIfCommonVIE_MDL_DW.Memory27_PreviousInput =
    PubIfCommonVIE_MDL_B.l_tTransBrakeToDrive;

  /* Update for Memory: '<S8>/Memory28' */
  PubIfCommonVIE_MDL_DW.Memory28_PreviousInput = *rty_axvRefMs2;
}

/* Model initialize function */
void PubIfCommonVIE_MDL_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_PubIfCommonVIE_MDL_T *const PubIfCommonVIE_MDL_M =
    &(PubIfCommonVIE_MDL_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PubIfCommonVIE_MDL_M, 0,
                sizeof(RT_MODEL_PubIfCommonVIE_MDL_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(PubIfCommonVIE_MDL_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &PubIfCommonVIE_MDL_B), 0,
                sizeof(B_PubIfCommonVIE_MDL_c_T));

  {
    PubIfCommonVIE_MDL_B.VIE_SubModel_Version = 36210503U;
    PubIfCommonVIE_MDL_B.VIE_SubModel_Number = 302U;
  }

  /* exported global signals */
  VSM_SteerAngOffsetInit = 0.0F;
  VSM_SteerAngleOffset_deg = 0.0F;

  /* states (dwork) */
  (void) memset((void *)&PubIfCommonVIE_MDL_DW, 0,
                sizeof(DW_PubIfCommonVIE_MDL_f_T));
}
