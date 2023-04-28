/*
 * Code generation for system model 'PubIfChassisHMI_MDL'
 *
 * Model                      : PubIfChassisHMI_MDL
 * Model version              : 3.97
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:19 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "PubIfChassisHMI_MDL.h"
#include "PubIfChassisHMI_MDL_private.h"

/* Exported block signals */
uint8_T HMI_Counter;                   /* '<S2>/Output' */
MdlrefDW_PubIfChassisHMI_MDL_T PubIfChassisHMI_MDL_MdlrefDW;

/* Block signals (default storage) */
B_PubIfChassisHMI_MDL_c_T PubIfChassisHMI_MDL_B;

/* Block states (default storage) */
DW_PubIfChassisHMI_MDL_f_T PubIfChassisHMI_MDL_DW;

/*
 * Output and update for atomic system:
 *    '<S7>/MATLAB Function4'
 *    '<S7>/MATLAB Function5'
 *    '<S7>/MATLAB Function6'
 *    '<S7>/MATLAB Function7'
 */
void PubIfChassisHMI_MDL_MATLABFunction4(real32_T rtu_AngRaw,
  B_MATLABFunction4_PubIfChassisHMI_MDL_T *localB)
{
  if (rtu_AngRaw > 1.57) {
    localB->Angle = rtu_AngRaw - 3.14F;
  } else if (rtu_AngRaw < -1.57) {
    localB->Angle = rtu_AngRaw + 3.14F;
  } else {
    localB->Angle = rtu_AngRaw;
  }
}

/*
 * Output and update for action system:
 *    '<S46>/If Action Subsystem'
 *    '<S51>/If Action Subsystem'
 *    '<S56>/If Action Subsystem'
 *    '<S61>/If Action Subsystem'
 *    '<S66>/If Action Subsystem'
 *    '<S71>/If Action Subsystem'
 */
void PubIfChassisHMI_MDL_IfActionSubsystem(uint16_T rtu_In1, uint16_T *rty_Out1,
  B_IfActionSubsystem_PubIfChassisHMI_MDL_T *localB)
{
  uint16_T u0;
  uint16_T u1;

  /* Sum: '<S47>/Add' incorporates:
   *  Constant: '<S47>/Constant'
   */
  localB->Add = (uint16_T)((uint32_T)rtu_In1 + ((uint16_T)1U));

  /* Saturate: '<S47>/Saturation' */
  u0 = localB->Add;
  u1 = ((uint16_T)60000U);
  if (u0 < u1) {
    u1 = u0;
  }

  *rty_Out1 = u1;

  /* End of Saturate: '<S47>/Saturation' */
}

/*
 * Output and update for action system:
 *    '<S46>/If Action Subsystem1'
 *    '<S51>/If Action Subsystem1'
 *    '<S56>/If Action Subsystem1'
 *    '<S61>/If Action Subsystem1'
 *    '<S66>/If Action Subsystem1'
 *    '<S71>/If Action Subsystem1'
 */
void PubIfChassisHMI_MDL_IfActionSubsystem1(uint16_T *rty_Out1)
{
  /* SignalConversion generated from: '<S48>/Out1' incorporates:
   *  Constant: '<S48>/Constant'
   */
  *rty_Out1 = ((uint16_T)0U);
}

/*
 * Output and update for atomic system:
 *    '<S8>/MATLAB Function1'
 *    '<S8>/MATLAB Function13'
 *    '<S8>/MATLAB Function4'
 *    '<S8>/MATLAB Function5'
 */
void PubIfChassisHMI_MDL_MATLABFunction1(const uint8_T *rtu_fType,
  B_MATLABFunction1_PubIfChassisHMI_MDL_T *localB)
{
  localB->Type = *rtu_fType;
  if ((*rtu_fType == 14) || (*rtu_fType == 20)) {
    localB->Type = 2U;
  }
}

/*
 * Output and update for atomic system:
 *    '<S8>/MATLAB Function7'
 *    '<S8>/MATLAB Function9'
 */
void PubIfChassisHMI_MDL_MATLABFunction7(const uint8_T *rtu_ESSSts, boolean_T
  *rty_Error, B_MATLABFunction7_PubIfChassisHMI_MDL_T *localB)
{
  localB->Intervention = 0U;
  localB->State = 0U;
  *rty_Error = false;
  if (*rtu_ESSSts > 0) {
    localB->State = 1U;
  }

  if (*rtu_ESSSts == 4) {
    localB->Intervention = 1U;
  } else if (*rtu_ESSSts == 5) {
    localB->Intervention = 2U;
  } else {
    if (*rtu_ESSSts == 6) {
      *rty_Error = true;
    }
  }
}

/*
 * Output and update for action system:
 *    '<S95>/Switch Case Action Subsystem1'
 *    '<S95>/Switch Case Action Subsystem3'
 */
void PubIfChassisHMI_MDL_SwitchCaseActionSubsystem1(real32_T rtu_In1, real32_T
  *rty_Out1, uint8_T *rty_Out1_j)
{
  /* SignalConversion generated from: '<S175>/Out1' */
  *rty_Out1 = rtu_In1;

  /* SignalConversion generated from: '<S175>/Constant2' incorporates:
   *  Constant: '<S175>/Constant2'
   */
  *rty_Out1_j = ((uint8_T)3U);
}

/*
 * Output and update for action system:
 *    '<S95>/Switch Case Action Subsystem4'
 *    '<S95>/Switch Case Action Subsystem5'
 */
void PubIfChassisHMI_MDL_SwitchCaseActionSubsystem4(real32_T *rty_Out1, uint8_T *
  rty_Out1_a)
{
  /* SignalConversion generated from: '<S178>/Constant1' incorporates:
   *  Constant: '<S178>/Constant1'
   */
  *rty_Out1 = 0.0F;

  /* SignalConversion generated from: '<S178>/Constant2' incorporates:
   *  Constant: '<S178>/Constant2'
   */
  *rty_Out1_a = ((uint8_T)0U);
}

/*
 * Output and update for atomic system:
 *    '<S97>/MATLAB Function1'
 *    '<S100>/MATLAB Function1'
 *    '<S101>/MATLAB Function1'
 *    '<S117>/MATLAB Function1'
 *    '<S128>/MATLAB Function1'
 *    '<S139>/MATLAB Function1'
 *    '<S146>/MATLAB Function1'
 *    '<S147>/MATLAB Function1'
 *    '<S148>/MATLAB Function1'
 *    '<S150>/MATLAB Function1'
 *    ...
 */
void PubIfChassisHMI_MDL_MATLABFunction1_e(const boolean_T *rtu_standstill,
  uint8_T rtu_in, boolean_T rtu_update, uint8_T rtu_inrecorder,
  B_MATLABFunction1_PubIfChassisHMI_MDL_a_T *localB)
{
  localB->recorder = rtu_inrecorder;
  localB->out = 0U;
  if (rtu_update) {
    localB->recorder = rtu_in;
  }

  if (!*rtu_standstill) {
    localB->out = rtu_in;
  } else if (rtu_update) {
    localB->out = rtu_in;
  } else {
    localB->out = rtu_inrecorder;
  }
}

/*
 * Output and update for atomic system:
 *    '<S98>/MATLAB Function1'
 *    '<S99>/MATLAB Function1'
 *    '<S102>/MATLAB Function1'
 *    '<S103>/MATLAB Function1'
 *    '<S104>/MATLAB Function1'
 *    '<S105>/MATLAB Function1'
 *    '<S106>/MATLAB Function1'
 *    '<S107>/MATLAB Function1'
 *    '<S108>/MATLAB Function1'
 *    '<S109>/MATLAB Function1'
 *    ...
 */
void PubIfChassisHMI_MDL_MATLABFunction1_k(const boolean_T *rtu_standstill,
  real32_T rtu_in, boolean_T rtu_update, real32_T rtu_inrecorder,
  B_MATLABFunction1_PubIfChassisHMI_MDL_ar_T *localB)
{
  localB->recorder = rtu_inrecorder;
  localB->out = 0.0F;
  if (rtu_update) {
    localB->recorder = rtu_in;
  }

  if (!*rtu_standstill) {
    localB->out = rtu_in;
  } else if (rtu_update) {
    localB->out = rtu_in;
  } else {
    localB->out = rtu_inrecorder;
  }
}

/*
 * Output and update for atomic system:
 *    '<S123>/MATLAB Function1'
 *    '<S129>/MATLAB Function1'
 */
void PubIfChassisHMI_MDL_MATLABFunction1_i(const boolean_T *rtu_standstill,
  const uint8_T *rtu_in, boolean_T rtu_update, uint8_T rtu_inrecorder,
  B_MATLABFunction1_PubIfChassisHMI_MDL_e_T *localB)
{
  localB->recorder = rtu_inrecorder;
  localB->out = 0U;
  if (rtu_update) {
    localB->recorder = *rtu_in;
  }

  if (!*rtu_standstill) {
    localB->out = *rtu_in;
  } else if (rtu_update) {
    localB->out = *rtu_in;
  } else {
    localB->out = rtu_inrecorder;
  }
}

/* System initialize for referenced model: 'PubIfChassisHMI_MDL' */
void PubIfChassisHMI_MDL_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay5' */
  PubIfChassisHMI_MDL_DW.UnitDelay5_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_k = false;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_mi = false;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_g = false;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_d = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_b = false;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_js = false;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_o = false;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_n = false;

  /* InitializeConditions for UnitDelay: '<S36>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_pc = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S36>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_j = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_j = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S36>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_p = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h33 = false;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_f = false;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_p = false;

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fj = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S56>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_f5 = false;

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S56>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dx = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_jh = false;

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_df = false;

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_o = false;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fu = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S61>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_o = false;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_jk = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S61>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_d = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S24>/Delay Input1' */
  PubIfChassisHMI_MDL_DW.DelayInput1_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay6' */
  PubIfChassisHMI_MDL_DW.UnitDelay6_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay7' */
  PubIfChassisHMI_MDL_DW.UnitDelay7_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S35>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_is = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S46>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_ik = false;

  /* InitializeConditions for UnitDelay: '<S35>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_i = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S46>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_e = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S35>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_in = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bd = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_oe = false;

  /* InitializeConditions for UnitDelay: '<S66>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_n = false;

  /* InitializeConditions for UnitDelay: '<S39>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S66>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h3 = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S39>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_d = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S40>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_eg = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S40>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE = 50.0;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE = 50.0;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S128>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hm = false;

  /* InitializeConditions for UnitDelay: '<S128>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fm = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ob = false;

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dd = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S146>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ks = false;

  /* InitializeConditions for UnitDelay: '<S146>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h0 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S147>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_j = false;

  /* InitializeConditions for UnitDelay: '<S147>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_lg = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S152>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bs = false;

  /* InitializeConditions for UnitDelay: '<S152>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_l4 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S100>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_f = false;

  /* InitializeConditions for UnitDelay: '<S100>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n2 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S97>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_h2 = false;

  /* InitializeConditions for UnitDelay: '<S97>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o1 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S101>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cd = false;

  /* InitializeConditions for UnitDelay: '<S101>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ow = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S143>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fx = false;

  /* InitializeConditions for UnitDelay: '<S143>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_i = 0.0F;

  /* InitializeConditions for UnitDelay: '<S144>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_c4 = false;

  /* InitializeConditions for UnitDelay: '<S144>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_b = 0.0F;

  /* InitializeConditions for UnitDelay: '<S145>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kq = false;

  /* InitializeConditions for UnitDelay: '<S145>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_il = 0.0F;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hi = false;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_m = 0.0F;

  /* InitializeConditions for UnitDelay: '<S103>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_e = false;

  /* InitializeConditions for UnitDelay: '<S103>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_j = 0.0F;

  /* InitializeConditions for UnitDelay: '<S104>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b4 = false;

  /* InitializeConditions for UnitDelay: '<S104>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_a = 0.0F;

  /* InitializeConditions for UnitDelay: '<S98>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dc = false;

  /* InitializeConditions for UnitDelay: '<S98>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_k = 0.0F;

  /* InitializeConditions for UnitDelay: '<S108>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ju = false;

  /* InitializeConditions for UnitDelay: '<S108>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_d = 0.0F;

  /* InitializeConditions for UnitDelay: '<S117>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_p = false;

  /* InitializeConditions for UnitDelay: '<S117>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h3 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S105>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cp = false;

  /* InitializeConditions for UnitDelay: '<S105>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_mp = 0.0F;

  /* InitializeConditions for UnitDelay: '<S99>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ml = false;

  /* InitializeConditions for UnitDelay: '<S99>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ai = 0.0F;

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dv = false;

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bs = 0.0F;

  /* InitializeConditions for UnitDelay: '<S139>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fg = false;

  /* InitializeConditions for UnitDelay: '<S139>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_e3 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S106>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_j5 = false;

  /* InitializeConditions for UnitDelay: '<S106>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o = 0.0F;

  /* InitializeConditions for UnitDelay: '<S112>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dq = false;

  /* InitializeConditions for UnitDelay: '<S112>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S113>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_i = false;

  /* InitializeConditions for UnitDelay: '<S113>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bk = 0.0F;

  /* InitializeConditions for UnitDelay: '<S151>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_iv = false;

  /* InitializeConditions for UnitDelay: '<S151>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aw = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S107>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_n = false;

  /* InitializeConditions for UnitDelay: '<S107>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_b2 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S116>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bv = false;

  /* InitializeConditions for UnitDelay: '<S116>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dv = 0.0F;

  /* InitializeConditions for UnitDelay: '<S115>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_gg = false;

  /* InitializeConditions for UnitDelay: '<S115>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ih = 0.0F;

  /* InitializeConditions for UnitDelay: '<S153>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hy = false;

  /* InitializeConditions for UnitDelay: '<S153>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n4 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S119>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_nq = false;

  /* InitializeConditions for UnitDelay: '<S119>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_g = 0.0F;

  /* InitializeConditions for UnitDelay: '<S120>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_jm = false;

  /* InitializeConditions for UnitDelay: '<S120>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aa = 0.0F;

  /* InitializeConditions for UnitDelay: '<S122>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bu = false;

  /* InitializeConditions for UnitDelay: '<S122>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ou = 0.0F;

  /* InitializeConditions for UnitDelay: '<S123>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_pm = false;

  /* InitializeConditions for UnitDelay: '<S123>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_do = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S124>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_du = false;

  /* InitializeConditions for UnitDelay: '<S124>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_m4 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S125>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_eb = false;

  /* InitializeConditions for UnitDelay: '<S125>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_gr = 0.0F;

  /* InitializeConditions for UnitDelay: '<S127>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kr = false;

  /* InitializeConditions for UnitDelay: '<S127>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_l = 0.0F;

  /* InitializeConditions for UnitDelay: '<S129>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ed = false;

  /* InitializeConditions for UnitDelay: '<S129>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_mn = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S109>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_pl = false;

  /* InitializeConditions for UnitDelay: '<S109>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bw = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dr = 0.0F;

  /* InitializeConditions for UnitDelay: '<S114>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_gq = false;

  /* InitializeConditions for UnitDelay: '<S114>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_oz = 0.0F;

  /* InitializeConditions for UnitDelay: '<S118>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_da = false;

  /* InitializeConditions for UnitDelay: '<S118>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_kc = 0.0F;

  /* InitializeConditions for UnitDelay: '<S121>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_oc = false;

  /* InitializeConditions for UnitDelay: '<S121>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_f = 0.0F;

  /* InitializeConditions for UnitDelay: '<S126>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fo = false;

  /* InitializeConditions for UnitDelay: '<S126>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_i1 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S130>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ka = false;

  /* InitializeConditions for UnitDelay: '<S130>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S131>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b4y = false;

  /* InitializeConditions for UnitDelay: '<S131>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h = 0.0F;

  /* InitializeConditions for UnitDelay: '<S132>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kx = false;

  /* InitializeConditions for UnitDelay: '<S132>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aab = 0.0F;

  /* InitializeConditions for UnitDelay: '<S133>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_f1 = false;

  /* InitializeConditions for UnitDelay: '<S133>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_lr = 0.0F;

  /* InitializeConditions for UnitDelay: '<S134>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_aw = false;

  /* InitializeConditions for UnitDelay: '<S134>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o4 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S135>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fr = false;

  /* InitializeConditions for UnitDelay: '<S135>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dl = 0.0F;

  /* InitializeConditions for UnitDelay: '<S136>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fc = false;

  /* InitializeConditions for UnitDelay: '<S136>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_de = 0.0F;

  /* InitializeConditions for UnitDelay: '<S137>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_co = false;

  /* InitializeConditions for UnitDelay: '<S137>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ol = 0.0F;

  /* InitializeConditions for UnitDelay: '<S138>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_n5 = false;

  /* InitializeConditions for UnitDelay: '<S138>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fr = 0.0F;

  /* InitializeConditions for UnitDelay: '<S140>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cz = false;

  /* InitializeConditions for UnitDelay: '<S140>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_e = 0.0F;

  /* InitializeConditions for UnitDelay: '<S141>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hig = false;

  /* InitializeConditions for UnitDelay: '<S141>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dp = 0.0F;

  /* InitializeConditions for UnitDelay: '<S142>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hb = false;

  /* InitializeConditions for UnitDelay: '<S142>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n = 0.0F;

  /* InitializeConditions for UnitDelay: '<S42>/Delay Input1' */
  PubIfChassisHMI_MDL_DW.DelayInput1_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S148>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hc = false;

  /* InitializeConditions for UnitDelay: '<S148>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_pj = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S149>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_jv = false;

  /* InitializeConditions for UnitDelay: '<S149>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n5 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  PubIfChassisHMI_MDL_DW.Output_DSTATE = ((uint8_T)0U);

  /* SystemInitialize for Merge generated from: '<S96>/Merge' */
  PubIfChassisHMI_MDL_B.A0 = 0.0F;

  /* SystemInitialize for Merge generated from: '<S96>/Merge' */
  PubIfChassisHMI_MDL_B.A1 = 0.0F;

  /* SystemInitialize for Merge generated from: '<S96>/Merge' */
  PubIfChassisHMI_MDL_B.A2 = 0.0F;

  /* SystemInitialize for Merge generated from: '<S96>/Merge' */
  PubIfChassisHMI_MDL_B.A3 = 0.0F;

  /* SystemInitialize for Merge generated from: '<S96>/Merge' */
  PubIfChassisHMI_MDL_B.Type = ((uint8_T)0U);

  /* SystemInitialize for Merge generated from: '<S96>/Merge' */
  PubIfChassisHMI_MDL_B.Valid = ((uint8_T)0U);

  /* SystemInitialize for Merge generated from: '<S96>/Merge1' */
  PubIfChassisHMI_MDL_B.A0_k = 0.0F;

  /* SystemInitialize for Merge generated from: '<S96>/Merge1' */
  PubIfChassisHMI_MDL_B.A1_m = 0.0F;

  /* SystemInitialize for Merge generated from: '<S96>/Merge1' */
  PubIfChassisHMI_MDL_B.A2_h = 0.0F;

  /* SystemInitialize for Merge generated from: '<S96>/Merge1' */
  PubIfChassisHMI_MDL_B.A3_m = 0.0F;

  /* SystemInitialize for Merge generated from: '<S96>/Merge1' */
  PubIfChassisHMI_MDL_B.Type_e = ((uint8_T)0U);

  /* SystemInitialize for Merge generated from: '<S96>/Merge1' */
  PubIfChassisHMI_MDL_B.Valid_f = ((uint8_T)0U);

  /* SystemInitialize for Merge generated from: '<S95>/Merge' */
  PubIfChassisHMI_MDL_B.Type_m = ((uint8_T)0U);

  /* SystemInitialize for Merge generated from: '<S95>/Merge1' */
  PubIfChassisHMI_MDL_B.Type_d = ((uint8_T)0U);

  /* SystemInitialize for Merge generated from: '<S95>/Merge' */
  PubIfChassisHMI_MDL_B.A0_i = 0.0F;

  /* SystemInitialize for Merge generated from: '<S95>/Merge1' */
  PubIfChassisHMI_MDL_B.A0_f = 0.0F;
}

/* System reset for referenced model: 'PubIfChassisHMI_MDL' */
void PubIfChassisHMI_MDL_Reset(void)
{
  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay5' */
  PubIfChassisHMI_MDL_DW.UnitDelay5_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_k = false;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_mi = false;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_g = false;

  /* InitializeConditions for UnitDelay: '<S12>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_d = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_b = false;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_js = false;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_o = false;

  /* InitializeConditions for UnitDelay: '<S11>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_n = false;

  /* InitializeConditions for UnitDelay: '<S36>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_pc = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S36>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_j = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S51>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_j = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S36>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_a = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_p = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h33 = false;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_f = false;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_c = false;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_p = false;

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fj = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S56>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_f5 = false;

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S56>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dx = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_jh = false;

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_df = false;

  /* InitializeConditions for UnitDelay: '<S9>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_o = false;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fu = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S61>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_o = false;

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_jk = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S61>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_d = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S38>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S24>/Delay Input1' */
  PubIfChassisHMI_MDL_DW.DelayInput1_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay6' */
  PubIfChassisHMI_MDL_DW.UnitDelay6_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S7>/Unit Delay7' */
  PubIfChassisHMI_MDL_DW.UnitDelay7_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<S35>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_is = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S46>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_ik = false;

  /* InitializeConditions for UnitDelay: '<S35>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_i = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S46>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_e = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S35>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_k = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_in = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bd = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_oe = false;

  /* InitializeConditions for UnitDelay: '<S66>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_n = false;

  /* InitializeConditions for UnitDelay: '<S39>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_h = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S66>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h3 = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S39>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_d = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S40>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_eg = ((uint16_T)0U);

  /* InitializeConditions for UnitDelay: '<S40>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_m = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE = 50.0;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE = 50.0;

  /* InitializeConditions for UnitDelay: '<S8>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S128>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hm = false;

  /* InitializeConditions for UnitDelay: '<S128>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fm = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ob = false;

  /* InitializeConditions for UnitDelay: '<S150>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dd = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S146>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ks = false;

  /* InitializeConditions for UnitDelay: '<S146>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h0 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S147>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_j = false;

  /* InitializeConditions for UnitDelay: '<S147>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_lg = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S152>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bs = false;

  /* InitializeConditions for UnitDelay: '<S152>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_l4 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S100>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_f = false;

  /* InitializeConditions for UnitDelay: '<S100>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n2 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S97>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_h2 = false;

  /* InitializeConditions for UnitDelay: '<S97>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o1 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S101>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cd = false;

  /* InitializeConditions for UnitDelay: '<S101>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ow = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S143>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fx = false;

  /* InitializeConditions for UnitDelay: '<S143>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_i = 0.0F;

  /* InitializeConditions for UnitDelay: '<S144>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_c4 = false;

  /* InitializeConditions for UnitDelay: '<S144>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_b = 0.0F;

  /* InitializeConditions for UnitDelay: '<S145>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kq = false;

  /* InitializeConditions for UnitDelay: '<S145>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_il = 0.0F;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hi = false;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_m = 0.0F;

  /* InitializeConditions for UnitDelay: '<S103>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_e = false;

  /* InitializeConditions for UnitDelay: '<S103>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_j = 0.0F;

  /* InitializeConditions for UnitDelay: '<S104>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b4 = false;

  /* InitializeConditions for UnitDelay: '<S104>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_a = 0.0F;

  /* InitializeConditions for UnitDelay: '<S98>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dc = false;

  /* InitializeConditions for UnitDelay: '<S98>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_k = 0.0F;

  /* InitializeConditions for UnitDelay: '<S108>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ju = false;

  /* InitializeConditions for UnitDelay: '<S108>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_d = 0.0F;

  /* InitializeConditions for UnitDelay: '<S117>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_p = false;

  /* InitializeConditions for UnitDelay: '<S117>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h3 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S105>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cp = false;

  /* InitializeConditions for UnitDelay: '<S105>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_mp = 0.0F;

  /* InitializeConditions for UnitDelay: '<S99>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ml = false;

  /* InitializeConditions for UnitDelay: '<S99>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ai = 0.0F;

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dv = false;

  /* InitializeConditions for UnitDelay: '<S110>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bs = 0.0F;

  /* InitializeConditions for UnitDelay: '<S139>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fg = false;

  /* InitializeConditions for UnitDelay: '<S139>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_e3 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S106>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_j5 = false;

  /* InitializeConditions for UnitDelay: '<S106>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o = 0.0F;

  /* InitializeConditions for UnitDelay: '<S112>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dq = false;

  /* InitializeConditions for UnitDelay: '<S112>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_p = 0.0F;

  /* InitializeConditions for UnitDelay: '<S113>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_i = false;

  /* InitializeConditions for UnitDelay: '<S113>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bk = 0.0F;

  /* InitializeConditions for UnitDelay: '<S151>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_iv = false;

  /* InitializeConditions for UnitDelay: '<S151>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aw = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S107>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_n = false;

  /* InitializeConditions for UnitDelay: '<S107>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_b2 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S116>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bv = false;

  /* InitializeConditions for UnitDelay: '<S116>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dv = 0.0F;

  /* InitializeConditions for UnitDelay: '<S115>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_gg = false;

  /* InitializeConditions for UnitDelay: '<S115>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ih = 0.0F;

  /* InitializeConditions for UnitDelay: '<S153>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hy = false;

  /* InitializeConditions for UnitDelay: '<S153>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n4 = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S119>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_nq = false;

  /* InitializeConditions for UnitDelay: '<S119>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_g = 0.0F;

  /* InitializeConditions for UnitDelay: '<S120>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_jm = false;

  /* InitializeConditions for UnitDelay: '<S120>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aa = 0.0F;

  /* InitializeConditions for UnitDelay: '<S122>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bu = false;

  /* InitializeConditions for UnitDelay: '<S122>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ou = 0.0F;

  /* InitializeConditions for UnitDelay: '<S123>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_pm = false;

  /* InitializeConditions for UnitDelay: '<S123>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_do = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S124>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_du = false;

  /* InitializeConditions for UnitDelay: '<S124>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_m4 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S125>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_eb = false;

  /* InitializeConditions for UnitDelay: '<S125>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_gr = 0.0F;

  /* InitializeConditions for UnitDelay: '<S127>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kr = false;

  /* InitializeConditions for UnitDelay: '<S127>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_l = 0.0F;

  /* InitializeConditions for UnitDelay: '<S129>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ed = false;

  /* InitializeConditions for UnitDelay: '<S129>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_mn = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S109>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_pl = false;

  /* InitializeConditions for UnitDelay: '<S109>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bw = 0.0F;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_l = false;

  /* InitializeConditions for UnitDelay: '<S111>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dr = 0.0F;

  /* InitializeConditions for UnitDelay: '<S114>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_gq = false;

  /* InitializeConditions for UnitDelay: '<S114>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_oz = 0.0F;

  /* InitializeConditions for UnitDelay: '<S118>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_da = false;

  /* InitializeConditions for UnitDelay: '<S118>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_kc = 0.0F;

  /* InitializeConditions for UnitDelay: '<S121>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_oc = false;

  /* InitializeConditions for UnitDelay: '<S121>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_f = 0.0F;

  /* InitializeConditions for UnitDelay: '<S126>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fo = false;

  /* InitializeConditions for UnitDelay: '<S126>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_i1 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S130>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ka = false;

  /* InitializeConditions for UnitDelay: '<S130>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_c = 0.0F;

  /* InitializeConditions for UnitDelay: '<S131>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b4y = false;

  /* InitializeConditions for UnitDelay: '<S131>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h = 0.0F;

  /* InitializeConditions for UnitDelay: '<S132>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kx = false;

  /* InitializeConditions for UnitDelay: '<S132>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aab = 0.0F;

  /* InitializeConditions for UnitDelay: '<S133>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_f1 = false;

  /* InitializeConditions for UnitDelay: '<S133>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_lr = 0.0F;

  /* InitializeConditions for UnitDelay: '<S134>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_aw = false;

  /* InitializeConditions for UnitDelay: '<S134>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o4 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S135>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fr = false;

  /* InitializeConditions for UnitDelay: '<S135>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dl = 0.0F;

  /* InitializeConditions for UnitDelay: '<S136>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fc = false;

  /* InitializeConditions for UnitDelay: '<S136>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_de = 0.0F;

  /* InitializeConditions for UnitDelay: '<S137>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_co = false;

  /* InitializeConditions for UnitDelay: '<S137>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ol = 0.0F;

  /* InitializeConditions for UnitDelay: '<S138>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_n5 = false;

  /* InitializeConditions for UnitDelay: '<S138>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fr = 0.0F;

  /* InitializeConditions for UnitDelay: '<S140>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cz = false;

  /* InitializeConditions for UnitDelay: '<S140>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_e = 0.0F;

  /* InitializeConditions for UnitDelay: '<S141>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hig = false;

  /* InitializeConditions for UnitDelay: '<S141>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dp = 0.0F;

  /* InitializeConditions for UnitDelay: '<S142>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hb = false;

  /* InitializeConditions for UnitDelay: '<S142>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n = 0.0F;

  /* InitializeConditions for UnitDelay: '<S42>/Delay Input1' */
  PubIfChassisHMI_MDL_DW.DelayInput1_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S148>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hc = false;

  /* InitializeConditions for UnitDelay: '<S148>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_pj = ((uint8_T)0U);

  /* InitializeConditions for UnitDelay: '<S149>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_jv = false;

  /* InitializeConditions for UnitDelay: '<S149>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n5 = 0.0F;

  /* InitializeConditions for UnitDelay: '<S2>/Output' */
  PubIfChassisHMI_MDL_DW.Output_DSTATE = ((uint8_T)0U);
}

/* Outputs for referenced model: 'PubIfChassisHMI_MDL' */
void PubIfChassisHMI_MDL(const VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL, const
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
  *rty_HMI_IFC_FD6, HMI_IFC_FD3_BUS *rty_HMI_IFC_FD3)
{
  int32_T q0;
  real32_T count;
  uint32_T qY;
  uint8_T u0;

  /* UnitDelay: '<S7>/Unit Delay5' */
  PubIfChassisHMI_MDL_B.UnitDelay5 = PubIfChassisHMI_MDL_DW.UnitDelay5_DSTATE;

  /* UnitDelay: '<S7>/Unit Delay4' */
  PubIfChassisHMI_MDL_B.UnitDelay4 = PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE;

  /* MATLAB Function: '<S7>/MATLAB Function' */
  if (((PubIfChassisHMI_MDL_B.UnitDelay5 == 6) ||
       (PubIfChassisHMI_MDL_B.UnitDelay5 == 9)) && (rtu_VSM_LON_CTRL->ACCSts ==
       7)) {
    u0 = 76U;
  } else {
    q0 = PubIfChassisHMI_MDL_B.UnitDelay4;
    qY = q0 - 1U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    q0 = (int32_T)qY;
    u0 = (uint8_T)q0;
    if (u0 <= 1) {
      u0 = 1U;
    }
  }

  PubIfChassisHMI_MDL_B.Longctrl_ModSts = rtu_VSM_LON_CTRL->ACCSts;
  if ((rtu_VSM_LON_CTRL->ACCSts == 6) || (rtu_VSM_LON_CTRL->ACCSts == 9)) {
    PubIfChassisHMI_MDL_B.Longctrl_ModSts = 6U;
  } else {
    if ((rtu_VSM_LON_CTRL->ACCSts == 7) || (u0 > 1)) {
      if (u0 > 6) {
        PubIfChassisHMI_MDL_B.Longctrl_ModSts = 7U;
      } else {
        PubIfChassisHMI_MDL_B.Longctrl_ModSts = 0U;
      }
    }
  }

  PubIfChassisHMI_MDL_B.Cnt_f = u0;

  /* End of MATLAB Function: '<S7>/MATLAB Function' */

  /* DataTypeConversion: '<S7>/Data Type Conversion' */
  PubIfChassisHMI_MDL_B.DataTypeConversion_p = rtu_VSM_HMI->ACC_ParkShiftReq;

  /* BusCreator generated from: '<Root>/HMI_ACC_FD1' */
  rty_HMI_ACC_FD1->Longctrl_DrvOFF_Req = rtu_VSM_LON_CTRL->ACC_DrvOffReq;
  rty_HMI_ACC_FD1->Longctrl_ModSts = PubIfChassisHMI_MDL_B.Longctrl_ModSts;
  rty_HMI_ACC_FD1->Longctrl_ParkShiftReq =
    PubIfChassisHMI_MDL_B.DataTypeConversion_p;
  rty_HMI_ACC_FD1->ActualTargetSpeed = 0U;
  rty_HMI_ACC_FD1->Longctrl_VehHldReq = false;
  rty_HMI_ACC_FD1->ACC_CRInterface =
    PubIfChassisHMI_MDL_ConstB.DataTypeConversion36;
  rty_HMI_ACC_FD1->Longctrl_FuelCutOffPrevn = false;

  /* DataTypeConversion: '<S7>/Data Type Conversion9' */
  rty_HMI_ACC_FD2->ISL_Resp = rtu_VSM_HMI->ACC_ISLResp;

  /* DataTypeConversion: '<S7>/Data Type Conversion10' */
  rty_HMI_ACC_FD2->ICA_HandsOffResp = rtu_VSM_HMI->ICA_HandsOffSwtResp;

  /* DataTypeConversion: '<S7>/Data Type Conversion7' */
  rty_HMI_ACC_FD2->HWA_warning = rtu_VSM_HMI->HWA_Warning;

  /* DataTypeConversion: '<S7>/Data Type Conversion8' */
  rty_HMI_ACC_FD2->ACC_TimeGapSet = rtu_VSM_LON_CTRL->ACC_TimeGapSet_HMI;

  /* DataTypeConversion: '<S7>/Data Type Conversion6' */
  rty_HMI_ACC_FD2->ACC_SpdSetValue = rtu_VSM_LON_CTRL->ACC_SpdSetValue;

  /* MATLAB Function: '<S7>/MATLAB Function2' */
  rty_HMI_ACC_FD2->TJA_ACC_SelSts = rtu_VSM_HMI->TJA_ACC_SelSts;
  if (rtu_VSM_HMI->TJA_ACC_SelSts == 3) {
    rty_HMI_ACC_FD2->TJA_ACC_SelSts = 0U;
  } else {
    if (rtu_VSM_HMI->TJA_ACC_SelSts == 0) {
      rty_HMI_ACC_FD2->TJA_ACC_SelSts = 3U;
    }
  }

  /* End of MATLAB Function: '<S7>/MATLAB Function2' */

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare = (rtu_VSM_LON_CTRL->ACCSts != ((uint8_T)7U));

  /* DataTypeConversion: '<S7>/Data Type Conversion11' */
  rty_HMI_ACC_FD2->ACC_FctSts = PubIfChassisHMI_MDL_B.Compare;

  /* MATLAB Function: '<S7>/MATLAB Function1' */
  rty_HMI_ACC_FD2->ACC_EgoStatus = 0U;
  if (rtu_VSM_LON_CTRL->ACCSts == 5) {
    rty_HMI_ACC_FD2->ACC_EgoStatus = 1U;
  }

  /* End of MATLAB Function: '<S7>/MATLAB Function1' */

  /* DataTypeConversion: '<S7>/Data Type Conversion13' */
  rty_HMI_ACC_FD2->HWA_SnvtySet_Resp = rtu_VSM_HMI->HWA_SnvtySet_Resp;

  /* DataTypeConversion: '<S7>/Data Type Conversion12' */
  PubIfChassisHMI_MDL_B.DataTypeConversion12 = rtu_VSM_HMI->HWA_LaneChangeReq;

  /* MATLAB Function: '<S7>/MATLAB Function8' */
  PubIfChassisHMI_MDL_B.LaneChange = 0U;
  if (PubIfChassisHMI_MDL_B.DataTypeConversion12 == 1) {
    PubIfChassisHMI_MDL_B.LaneChange = 1U;
  } else {
    if (PubIfChassisHMI_MDL_B.DataTypeConversion12 == 2) {
      PubIfChassisHMI_MDL_B.LaneChange = 2U;
    }
  }

  /* End of MATLAB Function: '<S7>/MATLAB Function8' */

  /* UnitDelay: '<S7>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3 = PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE;

  /* RelationalOperator: '<S7>/Relational Operator4' */
  PubIfChassisHMI_MDL_B.RelationalOperator4 = (rtu_TOS_ACCP0->IDP0 !=
    PubIfChassisHMI_MDL_B.UnitDelay3);

  /* UnitDelay: '<S12>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_ln =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_k;

  /* UnitDelay: '<S12>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_dt =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_mi;

  /* UnitDelay: '<S12>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_k =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_g;

  /* UnitDelay: '<S12>/Unit Delay4' */
  PubIfChassisHMI_MDL_B.UnitDelay4_f =
    PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_c;

  /* Logic: '<S12>/Logical Operator' */
  PubIfChassisHMI_MDL_B.LogicalOperator =
    (PubIfChassisHMI_MDL_B.RelationalOperator4 ||
     PubIfChassisHMI_MDL_B.UnitDelay1_ln || PubIfChassisHMI_MDL_B.UnitDelay2_dt ||
     PubIfChassisHMI_MDL_B.UnitDelay3_k || PubIfChassisHMI_MDL_B.UnitDelay4_f);

  /* Switch: '<S7>/Switch8' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator) {
    /* Switch: '<S7>/Switch8' incorporates:
     *  Constant: '<S7>/Constant8'
     */
    PubIfChassisHMI_MDL_B.Switch8 = false;
  } else {
    /* Switch: '<S7>/Switch8' */
    PubIfChassisHMI_MDL_B.Switch8 = rtu_TOS_ACCP0->targetExistP0;
  }

  /* End of Switch: '<S7>/Switch8' */

  /* DataTypeConversion: '<S7>/Data Type Conversion14' */
  rty_HMI_ACC_FD2->ACC_ObjDetecte = PubIfChassisHMI_MDL_B.Switch8;

  /* DataTypeConversion: '<S7>/Data Type Conversion28' */
  rty_HMI_ACC_FD2->ACC_RlvTgtDetn = PubIfChassisHMI_MDL_B.Switch8;

  /* UnitDelay: '<S7>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_p =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_d;

  /* RelationalOperator: '<S7>/Relational Operator3' */
  PubIfChassisHMI_MDL_B.RelationalOperator3 = (rtu_TOS_ACCP1->IDP1 !=
    PubIfChassisHMI_MDL_B.UnitDelay2_p);

  /* UnitDelay: '<S11>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_fj =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_b;

  /* UnitDelay: '<S11>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_g =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_js;

  /* UnitDelay: '<S11>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_c =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_o;

  /* UnitDelay: '<S11>/Unit Delay4' */
  PubIfChassisHMI_MDL_B.UnitDelay4_i =
    PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_n;

  /* Logic: '<S11>/Logical Operator' */
  PubIfChassisHMI_MDL_B.LogicalOperator_p =
    (PubIfChassisHMI_MDL_B.RelationalOperator3 ||
     PubIfChassisHMI_MDL_B.UnitDelay1_fj || PubIfChassisHMI_MDL_B.UnitDelay2_g ||
     PubIfChassisHMI_MDL_B.UnitDelay3_c || PubIfChassisHMI_MDL_B.UnitDelay4_i);

  /* Switch: '<S7>/Switch7' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator_p) {
    /* Switch: '<S7>/Switch7' incorporates:
     *  Constant: '<S7>/Constant7'
     */
    PubIfChassisHMI_MDL_B.Switch7_h = false;
  } else {
    /* Switch: '<S7>/Switch7' */
    PubIfChassisHMI_MDL_B.Switch7_h = rtu_TOS_ACCP1->targetExistP1;
  }

  /* End of Switch: '<S7>/Switch7' */

  /* DataTypeConversion: '<S7>/Data Type Conversion15' */
  rty_HMI_ACC_FD2->ACC_PotentialTgtDetn = PubIfChassisHMI_MDL_B.Switch7_h;

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_m = (rtu_TOS_ACCP1->IDP1 == ((uint8_T)0U));

  /* UnitDelay: '<S36>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_eg =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_pc;

  /* RelationalOperator: '<S36>/Relational Operator' */
  PubIfChassisHMI_MDL_B.RelationalOperator = (rtu_TOS_ACCP1->IDP1 !=
    PubIfChassisHMI_MDL_B.UnitDelay_eg);

  /* UnitDelay: '<S51>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_l =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_c;

  /* UnitDelay: '<S36>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_j =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_j;

  /* RelationalOperator: '<S36>/Relational Operator1' */
  PubIfChassisHMI_MDL_B.RelationalOperator1 = (rtu_TOS_ACCP1->ObjTypeP1 ==
    PubIfChassisHMI_MDL_B.UnitDelay2_j);

  /* UnitDelay: '<S51>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_d =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_j;

  /* If: '<S51>/If' */
  if (PubIfChassisHMI_MDL_B.UnitDelay2_l &&
      PubIfChassisHMI_MDL_B.RelationalOperator1) {
    /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem(PubIfChassisHMI_MDL_B.UnitDelay1_d,
      &PubIfChassisHMI_MDL_B.Merge, &PubIfChassisHMI_MDL_B.IfActionSubsystem_c);

    /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem1(&PubIfChassisHMI_MDL_B.Merge);

    /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
  }

  /* End of If: '<S51>/If' */

  /* Product: '<S51>/Product' incorporates:
   *  Constant: '<S51>/Constant'
   */
  PubIfChassisHMI_MDL_B.Product = (real32_T)PubIfChassisHMI_MDL_B.Merge * 0.02F;

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_g = (PubIfChassisHMI_MDL_B.Product >
    P_HMI_ObjectTypeFilter);

  /* UnitDelay: '<S36>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_g =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_a;

  /* Switch: '<S36>/Switch6' */
  if (PubIfChassisHMI_MDL_B.Compare_g) {
    /* Switch: '<S36>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_e = rtu_TOS_ACCP1->ObjTypeP1;
  } else {
    /* Switch: '<S36>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_e = PubIfChassisHMI_MDL_B.UnitDelay3_g;
  }

  /* End of Switch: '<S36>/Switch6' */

  /* Switch: '<S36>/Switch' */
  if (PubIfChassisHMI_MDL_B.RelationalOperator) {
    /* Switch: '<S36>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_h = rtu_TOS_ACCP1->ObjTypeP1;
  } else {
    /* Switch: '<S36>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_h = PubIfChassisHMI_MDL_B.Switch6_e;
  }

  /* End of Switch: '<S36>/Switch' */

  /* Switch: '<S36>/Switch1' */
  if (PubIfChassisHMI_MDL_B.Compare_m) {
    /* Switch: '<S36>/Switch1' incorporates:
     *  Constant: '<S36>/Constant'
     */
    PubIfChassisHMI_MDL_B.Switch1_g = ((uint8_T)0U);
  } else {
    /* Switch: '<S36>/Switch1' */
    PubIfChassisHMI_MDL_B.Switch1_g = PubIfChassisHMI_MDL_B.Switch_h;
  }

  /* End of Switch: '<S36>/Switch1' */

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)1' incorporates:
   *  Switch: '<S36>/Switch1'
   *
   * About '<S7>/Direct Lookup Table (n-D)1':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = PubIfChassisHMI_MDL_B.Switch1_g;
  if (u0 >= 8) {
    u0 = 8U;
  }

  q0 = u0;
  rty_HMI_ACC_FD2->ACC_PotentialTgtTyp = rtCP_DirectLookupTablenD1_table[q0];

  /* End of LookupNDDirect: '<S7>/Direct Lookup Table (n-D)1' */

  /* DataTypeConversion: '<S7>/Data Type Conversion16' */
  rty_HMI_ACC_FD2->ACC_PotentialTgtDx = rtu_TOS_ACCP1->dxP1;

  /* Gain: '<S7>/Gain4' */
  PubIfChassisHMI_MDL_B.Gain4 = (-1.0F) * rtu_TOS_ACCP1->ObjDYP1;

  /* DataTypeConversion: '<S7>/Data Type Conversion17' */
  rty_HMI_ACC_FD2->ACC_PotentialTgtDy = PubIfChassisHMI_MDL_B.Gain4;

  /* UnitDelay: '<S7>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_f =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_p;

  /* RelationalOperator: '<S7>/Relational Operator2' */
  PubIfChassisHMI_MDL_B.RelationalOperator2 = (rtu_TOS_ACCP2->IDP2 !=
    PubIfChassisHMI_MDL_B.UnitDelay1_f);

  /* UnitDelay: '<S10>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_ef =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h33;

  /* UnitDelay: '<S10>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_gw =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_f;

  /* UnitDelay: '<S10>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_kr =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_c;

  /* UnitDelay: '<S10>/Unit Delay4' */
  PubIfChassisHMI_MDL_B.UnitDelay4_a =
    PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_p;

  /* Logic: '<S10>/Logical Operator' */
  PubIfChassisHMI_MDL_B.LogicalOperator_a =
    (PubIfChassisHMI_MDL_B.RelationalOperator2 ||
     PubIfChassisHMI_MDL_B.UnitDelay1_ef || PubIfChassisHMI_MDL_B.UnitDelay2_gw ||
     PubIfChassisHMI_MDL_B.UnitDelay3_kr || PubIfChassisHMI_MDL_B.UnitDelay4_a);

  /* Switch: '<S7>/Switch6' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator_a) {
    /* Switch: '<S7>/Switch6' incorporates:
     *  Constant: '<S7>/Constant6'
     */
    PubIfChassisHMI_MDL_B.Switch6_d = false;
  } else {
    /* Switch: '<S7>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_d = rtu_TOS_ACCP2->targetExistP2;
  }

  /* End of Switch: '<S7>/Switch6' */

  /* DataTypeConversion: '<S7>/Data Type Conversion18' */
  rty_HMI_ACC_FD2->ACC_LeTargrtDection = PubIfChassisHMI_MDL_B.Switch6_d;

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ga = (rtu_TOS_ACCP2->IDP2 == ((uint8_T)0U));

  /* UnitDelay: '<S37>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_pt =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fj;

  /* RelationalOperator: '<S37>/Relational Operator' */
  PubIfChassisHMI_MDL_B.RelationalOperator_j = (rtu_TOS_ACCP2->IDP2 !=
    PubIfChassisHMI_MDL_B.UnitDelay_pt);

  /* UnitDelay: '<S56>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_hi =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_f5;

  /* UnitDelay: '<S37>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_pu =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_b;

  /* RelationalOperator: '<S37>/Relational Operator1' */
  PubIfChassisHMI_MDL_B.RelationalOperator1_k = (rtu_TOS_ACCP2->ObjTypeP2 ==
    PubIfChassisHMI_MDL_B.UnitDelay2_pu);

  /* UnitDelay: '<S56>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_l =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h;

  /* If: '<S56>/If' */
  if (PubIfChassisHMI_MDL_B.UnitDelay2_hi &&
      PubIfChassisHMI_MDL_B.RelationalOperator1_k) {
    /* Outputs for IfAction SubSystem: '<S56>/If Action Subsystem' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem(PubIfChassisHMI_MDL_B.UnitDelay1_l,
      &PubIfChassisHMI_MDL_B.Merge_f, &PubIfChassisHMI_MDL_B.IfActionSubsystem_k);

    /* End of Outputs for SubSystem: '<S56>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S56>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem1(&PubIfChassisHMI_MDL_B.Merge_f);

    /* End of Outputs for SubSystem: '<S56>/If Action Subsystem1' */
  }

  /* End of If: '<S56>/If' */

  /* Product: '<S56>/Product' incorporates:
   *  Constant: '<S56>/Constant'
   */
  PubIfChassisHMI_MDL_B.Product_d = (real32_T)PubIfChassisHMI_MDL_B.Merge_f *
    0.02F;

  /* RelationalOperator: '<S54>/Compare' incorporates:
   *  Constant: '<S54>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_e = (PubIfChassisHMI_MDL_B.Product_d >
    P_HMI_ObjectTypeFilter);

  /* UnitDelay: '<S37>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_a =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b;

  /* Switch: '<S37>/Switch6' */
  if (PubIfChassisHMI_MDL_B.Compare_e) {
    /* Switch: '<S37>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_j = rtu_TOS_ACCP2->ObjTypeP2;
  } else {
    /* Switch: '<S37>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_j = PubIfChassisHMI_MDL_B.UnitDelay3_a;
  }

  /* End of Switch: '<S37>/Switch6' */

  /* Switch: '<S37>/Switch' */
  if (PubIfChassisHMI_MDL_B.RelationalOperator_j) {
    /* Switch: '<S37>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_l = rtu_TOS_ACCP2->ObjTypeP2;
  } else {
    /* Switch: '<S37>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_l = PubIfChassisHMI_MDL_B.Switch6_j;
  }

  /* End of Switch: '<S37>/Switch' */

  /* Switch: '<S37>/Switch1' */
  if (PubIfChassisHMI_MDL_B.Compare_ga) {
    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S37>/Constant'
     */
    PubIfChassisHMI_MDL_B.Switch1_j = ((uint8_T)0U);
  } else {
    /* Switch: '<S37>/Switch1' */
    PubIfChassisHMI_MDL_B.Switch1_j = PubIfChassisHMI_MDL_B.Switch_l;
  }

  /* End of Switch: '<S37>/Switch1' */

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)2' incorporates:
   *  Switch: '<S37>/Switch1'
   *
   * About '<S7>/Direct Lookup Table (n-D)2':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = PubIfChassisHMI_MDL_B.Switch1_j;
  if (u0 >= 8) {
    u0 = 8U;
  }

  q0 = u0;
  rty_HMI_ACC_FD2->ACC_LeTgtTyp = rtCP_DirectLookupTablenD2_table[q0];

  /* End of LookupNDDirect: '<S7>/Direct Lookup Table (n-D)2' */

  /* DataTypeConversion: '<S7>/Data Type Conversion19' */
  rty_HMI_ACC_FD2->ACC_LeTgtDx = rtu_TOS_ACCP2->dxP2;

  /* Gain: '<S7>/Gain5' */
  PubIfChassisHMI_MDL_B.Gain5 = (-1.0F) * rtu_TOS_ACCP2->ObjDYP2;

  /* DataTypeConversion: '<S7>/Data Type Conversion20' */
  rty_HMI_ACC_FD2->ACC_LeTgtDy = PubIfChassisHMI_MDL_B.Gain5;

  /* UnitDelay: '<S7>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_iu =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dx;

  /* RelationalOperator: '<S7>/Relational Operator1' */
  PubIfChassisHMI_MDL_B.RelationalOperator1_o = (rtu_TOS_ACCP3->IDP3 !=
    PubIfChassisHMI_MDL_B.UnitDelay_iu);

  /* UnitDelay: '<S9>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_o1 =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_l;

  /* UnitDelay: '<S9>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_p1 =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_jh;

  /* UnitDelay: '<S9>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_n =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_df;

  /* UnitDelay: '<S9>/Unit Delay4' */
  PubIfChassisHMI_MDL_B.UnitDelay4_iw =
    PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_o;

  /* Logic: '<S9>/Logical Operator' */
  PubIfChassisHMI_MDL_B.LogicalOperator_d =
    (PubIfChassisHMI_MDL_B.RelationalOperator1_o ||
     PubIfChassisHMI_MDL_B.UnitDelay1_o1 || PubIfChassisHMI_MDL_B.UnitDelay2_p1 ||
     PubIfChassisHMI_MDL_B.UnitDelay3_n || PubIfChassisHMI_MDL_B.UnitDelay4_iw);

  /* Switch: '<S7>/Switch5' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator_d) {
    /* Switch: '<S7>/Switch5' incorporates:
     *  Constant: '<S7>/Constant5'
     */
    PubIfChassisHMI_MDL_B.Switch5 = false;
  } else {
    /* Switch: '<S7>/Switch5' */
    PubIfChassisHMI_MDL_B.Switch5 = rtu_TOS_ACCP3->targetExistP3;
  }

  /* End of Switch: '<S7>/Switch5' */

  /* DataTypeConversion: '<S7>/Data Type Conversion21' */
  rty_HMI_ACC_FD2->ACC_RiTargrtDetn = PubIfChassisHMI_MDL_B.Switch5;

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_j = (rtu_TOS_ACCP3->IDP3 == ((uint8_T)0U));

  /* UnitDelay: '<S38>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_dwv =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fu;

  /* RelationalOperator: '<S38>/Relational Operator' */
  PubIfChassisHMI_MDL_B.RelationalOperator_h = (rtu_TOS_ACCP3->IDP3 !=
    PubIfChassisHMI_MDL_B.UnitDelay_dwv);

  /* UnitDelay: '<S61>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_db =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_o;

  /* UnitDelay: '<S38>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_i =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_jk;

  /* RelationalOperator: '<S38>/Relational Operator1' */
  PubIfChassisHMI_MDL_B.RelationalOperator1_f = (rtu_TOS_ACCP3->ObjTypeP3 ==
    PubIfChassisHMI_MDL_B.UnitDelay2_i);

  /* UnitDelay: '<S61>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_e =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_d;

  /* If: '<S61>/If' */
  if (PubIfChassisHMI_MDL_B.UnitDelay2_db &&
      PubIfChassisHMI_MDL_B.RelationalOperator1_f) {
    /* Outputs for IfAction SubSystem: '<S61>/If Action Subsystem' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem(PubIfChassisHMI_MDL_B.UnitDelay1_e,
      &PubIfChassisHMI_MDL_B.Merge_h, &PubIfChassisHMI_MDL_B.IfActionSubsystem_f);

    /* End of Outputs for SubSystem: '<S61>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S61>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem1(&PubIfChassisHMI_MDL_B.Merge_h);

    /* End of Outputs for SubSystem: '<S61>/If Action Subsystem1' */
  }

  /* End of If: '<S61>/If' */

  /* Product: '<S61>/Product' incorporates:
   *  Constant: '<S61>/Constant'
   */
  PubIfChassisHMI_MDL_B.Product_i = (real32_T)PubIfChassisHMI_MDL_B.Merge_h *
    0.02F;

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_i = (PubIfChassisHMI_MDL_B.Product_i >
    P_HMI_ObjectTypeFilter);

  /* UnitDelay: '<S38>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_d =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_h;

  /* Switch: '<S38>/Switch6' */
  if (PubIfChassisHMI_MDL_B.Compare_i) {
    /* Switch: '<S38>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_c = rtu_TOS_ACCP3->ObjTypeP3;
  } else {
    /* Switch: '<S38>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_c = PubIfChassisHMI_MDL_B.UnitDelay3_d;
  }

  /* End of Switch: '<S38>/Switch6' */

  /* Switch: '<S38>/Switch' */
  if (PubIfChassisHMI_MDL_B.RelationalOperator_h) {
    /* Switch: '<S38>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_hh = rtu_TOS_ACCP3->ObjTypeP3;
  } else {
    /* Switch: '<S38>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_hh = PubIfChassisHMI_MDL_B.Switch6_c;
  }

  /* End of Switch: '<S38>/Switch' */

  /* Switch: '<S38>/Switch1' */
  if (PubIfChassisHMI_MDL_B.Compare_j) {
    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S38>/Constant'
     */
    PubIfChassisHMI_MDL_B.Switch1_m = ((uint8_T)0U);
  } else {
    /* Switch: '<S38>/Switch1' */
    PubIfChassisHMI_MDL_B.Switch1_m = PubIfChassisHMI_MDL_B.Switch_hh;
  }

  /* End of Switch: '<S38>/Switch1' */

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)3' incorporates:
   *  Switch: '<S38>/Switch1'
   *
   * About '<S7>/Direct Lookup Table (n-D)3':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = PubIfChassisHMI_MDL_B.Switch1_m;
  if (u0 >= 8) {
    u0 = 8U;
  }

  q0 = u0;
  rty_HMI_ACC_FD2->ACC_RiTgtTyp = rtCP_DirectLookupTablenD3_table[q0];

  /* End of LookupNDDirect: '<S7>/Direct Lookup Table (n-D)3' */

  /* DataTypeConversion: '<S7>/Data Type Conversion22' */
  rty_HMI_ACC_FD2->ACC_RiTgtDx = rtu_TOS_ACCP3->dxP3;

  /* Gain: '<S7>/Gain6' */
  PubIfChassisHMI_MDL_B.Gain6 = (-1.0F) * rtu_TOS_ACCP3->ObjDYP3;

  /* DataTypeConversion: '<S7>/Data Type Conversion23' */
  rty_HMI_ACC_FD2->ACC_RiTgtDy = PubIfChassisHMI_MDL_B.Gain6;

  /* UnitDelay: '<S24>/Delay Input1' */
  PubIfChassisHMI_MDL_B.Uk1_n = PubIfChassisHMI_MDL_DW.DelayInput1_DSTATE_l;

  /* RelationalOperator: '<S24>/FixPt Relational Operator' */
  PubIfChassisHMI_MDL_B.FixPtRelationalOperator = ((int32_T)
    rtu_PLAN_HMI_BUS->IntelligentCurveActive > (int32_T)
    PubIfChassisHMI_MDL_B.Uk1_n);

  /* UnitDelay: '<S7>/Unit Delay6' */
  PubIfChassisHMI_MDL_B.UnitDelay6 = PubIfChassisHMI_MDL_DW.UnitDelay6_DSTATE;

  /* UnitDelay: '<S7>/Unit Delay7' */
  PubIfChassisHMI_MDL_B.UnitDelay7 = PubIfChassisHMI_MDL_DW.UnitDelay7_DSTATE;

  /* MATLAB Function: '<S7>/MATLAB Function9' */
  if (PubIfChassisHMI_MDL_B.UnitDelay6 == 3) {
    count = 6000.0F;
  } else {
    count = fmaxf(0.0F, PubIfChassisHMI_MDL_B.UnitDelay7 - 1.0F);
  }

  if (PubIfChassisHMI_MDL_B.FixPtRelationalOperator && (count == 0.0F)) {
    PubIfChassisHMI_MDL_B.y_g = 3U;
  } else if ((rtu_VSM_HMI->ISL_InterSysInfoDisp == 1) ||
             (rtu_VSM_HMI->ISL_InterSysInfoDisp == 2)) {
    PubIfChassisHMI_MDL_B.y_g = rtu_VSM_HMI->ISL_InterSysInfoDisp;
  } else {
    PubIfChassisHMI_MDL_B.y_g = 0U;
  }

  PubIfChassisHMI_MDL_B.count_d = count;

  /* End of MATLAB Function: '<S7>/MATLAB Function9' */

  /* DataTypeConversion: '<S7>/Data Type Conversion24' */
  rty_HMI_ACC_FD2->ISL_InterSysInfoDisp = PubIfChassisHMI_MDL_B.y_g;

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_h = (rtu_TOS_ACCP0->IDP0 == ((uint8_T)0U));

  /* UnitDelay: '<S35>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_fj =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_is;

  /* RelationalOperator: '<S35>/Relational Operator' */
  PubIfChassisHMI_MDL_B.RelationalOperator_b = (rtu_TOS_ACCP0->IDP0 !=
    PubIfChassisHMI_MDL_B.UnitDelay_fj);

  /* UnitDelay: '<S46>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_n =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_ik;

  /* UnitDelay: '<S35>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_i4 =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_i;

  /* RelationalOperator: '<S35>/Relational Operator1' */
  PubIfChassisHMI_MDL_B.RelationalOperator1_f4 = (rtu_TOS_ACCP0->ObjTypeP0 ==
    PubIfChassisHMI_MDL_B.UnitDelay2_i4);

  /* UnitDelay: '<S46>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_dz =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_e;

  /* If: '<S46>/If' */
  if (PubIfChassisHMI_MDL_B.UnitDelay2_n &&
      PubIfChassisHMI_MDL_B.RelationalOperator1_f4) {
    /* Outputs for IfAction SubSystem: '<S46>/If Action Subsystem' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem(PubIfChassisHMI_MDL_B.UnitDelay1_dz,
      &PubIfChassisHMI_MDL_B.Merge_i, &PubIfChassisHMI_MDL_B.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S46>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S46>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem1(&PubIfChassisHMI_MDL_B.Merge_i);

    /* End of Outputs for SubSystem: '<S46>/If Action Subsystem1' */
  }

  /* End of If: '<S46>/If' */

  /* Product: '<S46>/Product' incorporates:
   *  Constant: '<S46>/Constant'
   */
  PubIfChassisHMI_MDL_B.Product_m = (real32_T)PubIfChassisHMI_MDL_B.Merge_i *
    0.02F;

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_p = (PubIfChassisHMI_MDL_B.Product_m >
    P_HMI_ObjectTypeFilter);

  /* UnitDelay: '<S35>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_go =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_k;

  /* Switch: '<S35>/Switch6' */
  if (PubIfChassisHMI_MDL_B.Compare_p) {
    /* Switch: '<S35>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_a = rtu_TOS_ACCP0->ObjTypeP0;
  } else {
    /* Switch: '<S35>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_a = PubIfChassisHMI_MDL_B.UnitDelay3_go;
  }

  /* End of Switch: '<S35>/Switch6' */

  /* Switch: '<S35>/Switch' */
  if (PubIfChassisHMI_MDL_B.RelationalOperator_b) {
    /* Switch: '<S35>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_b = rtu_TOS_ACCP0->ObjTypeP0;
  } else {
    /* Switch: '<S35>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_b = PubIfChassisHMI_MDL_B.Switch6_a;
  }

  /* End of Switch: '<S35>/Switch' */

  /* Switch: '<S35>/Switch1' */
  if (PubIfChassisHMI_MDL_B.Compare_h) {
    /* Switch: '<S35>/Switch1' incorporates:
     *  Constant: '<S35>/Constant'
     */
    PubIfChassisHMI_MDL_B.Switch1_d = ((uint8_T)0U);
  } else {
    /* Switch: '<S35>/Switch1' */
    PubIfChassisHMI_MDL_B.Switch1_d = PubIfChassisHMI_MDL_B.Switch_b;
  }

  /* End of Switch: '<S35>/Switch1' */

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)' incorporates:
   *  Switch: '<S35>/Switch1'
   *
   * About '<S7>/Direct Lookup Table (n-D)':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = PubIfChassisHMI_MDL_B.Switch1_d;
  if (u0 >= 8) {
    u0 = 8U;
  }

  q0 = u0;
  rty_HMI_ACC_FD2->ACC_RlvTgtTyp = rtCP_DirectLookupTablenD_table[q0];

  /* End of LookupNDDirect: '<S7>/Direct Lookup Table (n-D)' */

  /* Gain: '<S7>/Gain9' */
  PubIfChassisHMI_MDL_B.Gain9 = (-1.0F) * rtu_TOS_ACCP0->ObjDYP0;

  /* RelationalOperator: '<S15>/Compare' incorporates:
   *  Constant: '<S15>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_hv = (rtu_VSM_HMI->HWASts == ((uint8_T)7U));

  /* Switch: '<S7>/Switch9' incorporates:
   *  Constant: '<S7>/Constant10'
   *  Constant: '<S7>/Constant9'
   */
  if (PubIfChassisHMI_MDL_B.Compare_hv) {
    rty_HMI_ACC_FD2->ALC_InterSysInfoDisp = ((uint8_T)1U);
  } else {
    rty_HMI_ACC_FD2->ALC_InterSysInfoDisp = ((uint8_T)0U);
  }

  /* End of Switch: '<S7>/Switch9' */

  /* UnitDelay: '<S25>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_d =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_in;

  /* UnitDelay: '<S25>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_jh =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bd;

  /* UnitDelay: '<S25>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ga =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_oe;

  /* MATLAB Function: '<S25>/MATLAB Function' incorporates:
   *  Constant: '<S25>/Time'
   */
  if (PubIfChassisHMI_MDL_B.UnitDelay3_ga) {
    PubIfChassisHMI_MDL_B.Cnt = ((uint16_T)150U);
  } else {
    q0 = PubIfChassisHMI_MDL_B.UnitDelay_jh;
    qY = q0 - 1U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    q0 = (int32_T)qY;
    PubIfChassisHMI_MDL_B.Cnt = (uint16_T)q0;
  }

  /* End of MATLAB Function: '<S25>/MATLAB Function' */

  /* RelationalOperator: '<S41>/Compare' incorporates:
   *  Constant: '<S41>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_l = (PubIfChassisHMI_MDL_B.Cnt > ((uint16_T)1U));

  /* Switch: '<S25>/Switch20' */
  if (PubIfChassisHMI_MDL_B.Compare_l) {
    /* Switch: '<S25>/Switch20' */
    PubIfChassisHMI_MDL_B.Switch20_o = PubIfChassisHMI_MDL_B.UnitDelay2_d;
  } else {
    /* Switch: '<S25>/Switch20' */
    PubIfChassisHMI_MDL_B.Switch20_o = rtu_VSM_HMI->ACC_DrvrOffDisp;
  }

  /* End of Switch: '<S25>/Switch20' */

  /* DataTypeConversion: '<S7>/Data Type Conversion27' */
  rty_HMI_ACC_FD2->Request_driveoff = PubIfChassisHMI_MDL_B.Switch20_o;

  /* RelationalOperator: '<S17>/Compare' incorporates:
   *  Constant: '<S17>/Constant'
   */
  rty_HMI_ACC_FD2->ACC_RlvTgtfusion = (rtu_TOS_ACCP0->fu_typeP0 != ((uint8_T)0U));

  /* Gain: '<S7>/Gain' */
  PubIfChassisHMI_MDL_B.Gain = (-0.0174520072F) * rtu_TOS_ACCP0->P0HeadingAngle;

  /* MATLAB Function: '<S7>/MATLAB Function4' */
  PubIfChassisHMI_MDL_MATLABFunction4(PubIfChassisHMI_MDL_B.Gain,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction4);

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   */
  rty_HMI_ACC_FD2->ACC_LeTgtfusion = (rtu_TOS_ACCP2->fu_typeP2 != ((uint8_T)0U));

  /* Gain: '<S7>/Gain1' */
  PubIfChassisHMI_MDL_B.Gain1 = (-0.0174520072F) * rtu_TOS_ACCP2->P2HeadingAngle;

  /* MATLAB Function: '<S7>/MATLAB Function5' */
  PubIfChassisHMI_MDL_MATLABFunction4(PubIfChassisHMI_MDL_B.Gain1,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction5);

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   */
  rty_HMI_ACC_FD2->ACC_RiTgtfusion = (rtu_TOS_ACCP3->fu_typeP3 != ((uint8_T)0U));

  /* Gain: '<S7>/Gain2' */
  PubIfChassisHMI_MDL_B.Gain2 = (-0.0174520072F) * rtu_TOS_ACCP3->P3HeadingAngle;

  /* MATLAB Function: '<S7>/MATLAB Function6' */
  PubIfChassisHMI_MDL_MATLABFunction4(PubIfChassisHMI_MDL_B.Gain2,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction6);

  /* RelationalOperator: '<S20>/Compare' incorporates:
   *  Constant: '<S20>/Constant'
   */
  rty_HMI_ACC_FD2->ACC_PotentialTgtfusion = (rtu_TOS_ACCP1->fu_typeP1 !=
    ((uint8_T)0U));

  /* Gain: '<S7>/Gain3' */
  PubIfChassisHMI_MDL_B.Gain3 = (-0.0174520072F) * rtu_TOS_ACCP1->P1HeadingAngle;

  /* MATLAB Function: '<S7>/MATLAB Function7' */
  PubIfChassisHMI_MDL_MATLABFunction4(PubIfChassisHMI_MDL_B.Gain3,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction7);

  /* Gain: '<S7>/Gain7' */
  rty_HMI_ACC_FD2->ACC_LeTgt_02_Dy = (-1.0F) * rtu_TOS_ACCP4->dyP4;

  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Constant: '<S65>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_b = (rtu_TOS_ACCP4->targetExistP4 == false);

  /* UnitDelay: '<S66>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_lk =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_n;

  /* UnitDelay: '<S39>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_f =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_h;

  /* RelationalOperator: '<S39>/Relational Operator1' */
  PubIfChassisHMI_MDL_B.RelationalOperator1_j = (rtu_TOS_ACCP4->ObjTypeP4 ==
    PubIfChassisHMI_MDL_B.UnitDelay2_f);

  /* UnitDelay: '<S66>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_eq =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h3;

  /* If: '<S66>/If' */
  if (PubIfChassisHMI_MDL_B.UnitDelay2_lk &&
      PubIfChassisHMI_MDL_B.RelationalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem(PubIfChassisHMI_MDL_B.UnitDelay1_eq,
      &PubIfChassisHMI_MDL_B.Merge_g, &PubIfChassisHMI_MDL_B.IfActionSubsystem_g);

    /* End of Outputs for SubSystem: '<S66>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S68>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem1(&PubIfChassisHMI_MDL_B.Merge_g);

    /* End of Outputs for SubSystem: '<S66>/If Action Subsystem1' */
  }

  /* End of If: '<S66>/If' */

  /* Product: '<S66>/Product' incorporates:
   *  Constant: '<S66>/Constant'
   */
  PubIfChassisHMI_MDL_B.Product_f = (real32_T)PubIfChassisHMI_MDL_B.Merge_g *
    0.02F;

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_b3 = (PubIfChassisHMI_MDL_B.Product_f >
    P_HMI_ObjectTypeFilter);

  /* UnitDelay: '<S39>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_h =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_d;

  /* Switch: '<S39>/Switch6' */
  if (PubIfChassisHMI_MDL_B.Compare_b3) {
    /* Switch: '<S39>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_ek = rtu_TOS_ACCP4->ObjTypeP4;
  } else {
    /* Switch: '<S39>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_ek = PubIfChassisHMI_MDL_B.UnitDelay3_h;
  }

  /* End of Switch: '<S39>/Switch6' */

  /* Switch: '<S39>/Switch1' */
  if (PubIfChassisHMI_MDL_B.Compare_b) {
    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S39>/Constant'
     */
    PubIfChassisHMI_MDL_B.Switch1_gw = ((uint8_T)0U);
  } else {
    /* Switch: '<S39>/Switch1' */
    PubIfChassisHMI_MDL_B.Switch1_gw = PubIfChassisHMI_MDL_B.Switch6_ek;
  }

  /* End of Switch: '<S39>/Switch1' */

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)8' incorporates:
   *  Switch: '<S39>/Switch1'
   *
   * About '<S7>/Direct Lookup Table (n-D)8':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = PubIfChassisHMI_MDL_B.Switch1_gw;
  if (u0 >= 8) {
    u0 = 8U;
  }

  q0 = u0;
  rty_HMI_ACC_FD2->ACC_LeTgt_02_Typ = rtCP_DirectLookupTablenD8_table[q0];

  /* End of LookupNDDirect: '<S7>/Direct Lookup Table (n-D)8' */

  /* DataTypeConversion: '<S7>/Data Type Conversion29' */
  rty_HMI_ACC_FD2->ACC_LeTargrt_02_Detn = rtu_TOS_ACCP4->targetExistP4;

  /* DataTypeConversion: '<S7>/Data Type Conversion30' */
  rty_HMI_ACC_FD2->ACC_RiTargrt_02_Detn = rtu_TOS_ACCP5->targetExistP5;

  /* Gain: '<S7>/Gain8' */
  rty_HMI_ACC_FD2->ACC_RiTgt_02_Dy = (-1.0F) * rtu_TOS_ACCP5->dyP5;

  /* RelationalOperator: '<S70>/Compare' incorporates:
   *  Constant: '<S70>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_lz = (rtu_TOS_ACCP5->targetExistP5 == false);

  /* UnitDelay: '<S71>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_gi =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_l;

  /* UnitDelay: '<S40>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2_h =
    PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_m;

  /* RelationalOperator: '<S40>/Relational Operator1' */
  PubIfChassisHMI_MDL_B.RelationalOperator1_a = (rtu_TOS_ACCP5->ObjTypeP5 ==
    PubIfChassisHMI_MDL_B.UnitDelay2_h);

  /* UnitDelay: '<S71>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1_o =
    PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_eg;

  /* If: '<S71>/If' */
  if (PubIfChassisHMI_MDL_B.UnitDelay2_gi &&
      PubIfChassisHMI_MDL_B.RelationalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem(PubIfChassisHMI_MDL_B.UnitDelay1_o,
      &PubIfChassisHMI_MDL_B.Merge_p, &PubIfChassisHMI_MDL_B.IfActionSubsystem_o);

    /* End of Outputs for SubSystem: '<S71>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    PubIfChassisHMI_MDL_IfActionSubsystem1(&PubIfChassisHMI_MDL_B.Merge_p);

    /* End of Outputs for SubSystem: '<S71>/If Action Subsystem1' */
  }

  /* End of If: '<S71>/If' */

  /* Product: '<S71>/Product' incorporates:
   *  Constant: '<S71>/Constant'
   */
  PubIfChassisHMI_MDL_B.Product_o = (real32_T)PubIfChassisHMI_MDL_B.Merge_p *
    0.02F;

  /* RelationalOperator: '<S69>/Compare' incorporates:
   *  Constant: '<S69>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_f = (PubIfChassisHMI_MDL_B.Product_o >
    P_HMI_ObjectTypeFilter);

  /* UnitDelay: '<S40>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_i =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_m;

  /* Switch: '<S40>/Switch6' */
  if (PubIfChassisHMI_MDL_B.Compare_f) {
    /* Switch: '<S40>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_ag = rtu_TOS_ACCP5->ObjTypeP5;
  } else {
    /* Switch: '<S40>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6_ag = PubIfChassisHMI_MDL_B.UnitDelay3_i;
  }

  /* End of Switch: '<S40>/Switch6' */

  /* Switch: '<S40>/Switch1' */
  if (PubIfChassisHMI_MDL_B.Compare_lz) {
    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S40>/Constant'
     */
    PubIfChassisHMI_MDL_B.Switch1_e = ((uint8_T)0U);
  } else {
    /* Switch: '<S40>/Switch1' */
    PubIfChassisHMI_MDL_B.Switch1_e = PubIfChassisHMI_MDL_B.Switch6_ag;
  }

  /* End of Switch: '<S40>/Switch1' */

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)9' incorporates:
   *  Switch: '<S40>/Switch1'
   *
   * About '<S7>/Direct Lookup Table (n-D)9':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = PubIfChassisHMI_MDL_B.Switch1_e;
  if (u0 >= 8) {
    u0 = 8U;
  }

  q0 = u0;
  rty_HMI_ACC_FD2->ACC_RiTgt_02_Typ = rtCP_DirectLookupTablenD9_table[q0];

  /* End of LookupNDDirect: '<S7>/Direct Lookup Table (n-D)9' */

  /* DataTypeConversion: '<S7>/Data Type Conversion34' */
  rty_HMI_ACC_FD2->ACC_TgtObjBarDisp = rtu_PLAN_HMI_BUS->ACC_TgtObjBarDisp;

  /* DataTypeConversion: '<S7>/Data Type Conversion25' */
  rty_HMI_ACC_FD2->ACC_LeTgtObjBarDisp = rtu_PLAN_HMI_BUS->ACC_LeTgtObjBarDisp;

  /* DataTypeConversion: '<S7>/Data Type Conversion26' */
  rty_HMI_ACC_FD2->ACC_RiTgtObjBarDisp = rtu_PLAN_HMI_BUS->ACC_RiTgtObjBarDisp;

  /* BusCreator generated from: '<Root>/HMI_ACC_FD2' */
  rty_HMI_ACC_FD2->ACC_ModDisp = rtu_VSM_HMI->ACC_ModeDisp;
  rty_HMI_ACC_FD2->TJA_ICA_ModDisp = rtu_VSM_HMI->TJA_ModeDisp;
  rty_HMI_ACC_FD2->HWA_ModDisp = rtu_VSM_HMI->HWA_ModeDisp;
  rty_HMI_ACC_FD2->ACC_InterSysInfoDisp = rtu_VSM_HMI->ACCTextDisp;
  rty_HMI_ACC_FD2->TJA_ICA_InterSysInfoDisp = rtu_VSM_HMI->TJATextDisp;
  rty_HMI_ACC_FD2->HWA_InterSysInfoDisp = rtu_VSM_HMI->HWATextDisp;
  rty_HMI_ACC_FD2->CruCha_ModDisp = 0U;
  rty_HMI_ACC_FD2->CruChar_InterSysInfoDisp = 0U;
  rty_HMI_ACC_FD2->ALC_Resp = rtu_VSM_HMI->ALC_Resp;
  rty_HMI_ACC_FD2->HWA_Resp = rtu_VSM_HMI->HWA_Resp;
  rty_HMI_ACC_FD2->ACC_TakeOverReq = rtu_PLAN_HMI_BUS->tor;
  rty_HMI_ACC_FD2->Longctrl_HazActv = rtu_VSM_HMI->ACC_HazActv;
  rty_HMI_ACC_FD2->ADAS_DriverInloop_Monitor = rtu_VSM_HMI->DriverInloop_Monitor;
  rty_HMI_ACC_FD2->HWA_LaneChangeReq =
    PubIfChassisHMI_MDL_B.DataTypeConversion12;
  rty_HMI_ACC_FD2->HWA_LaneChange = PubIfChassisHMI_MDL_B.LaneChange;
  rty_HMI_ACC_FD2->Longctrl_DrvOFF_Req_DVR = rtu_VSM_LON_CTRL->ACC_DrvOffReq;
  rty_HMI_ACC_FD2->Longctrl_ModSts_DVR = PubIfChassisHMI_MDL_B.Longctrl_ModSts;
  rty_HMI_ACC_FD2->Longctrl_ParkShiftReq_DVR =
    PubIfChassisHMI_MDL_B.DataTypeConversion_p;
  rty_HMI_ACC_FD2->ACC_RlvTgtDx = rtu_TOS_ACCP0->dxP0;
  rty_HMI_ACC_FD2->ACC_RlvTgtDy = PubIfChassisHMI_MDL_B.Gain9;
  rty_HMI_ACC_FD2->Longctrl_HCUTrqReq_DVR = 0.0F;
  rty_HMI_ACC_FD2->Longctrl_VehHldReq_DVR = false;
  rty_HMI_ACC_FD2->Longctrl_HCUTrqReqActive_DVR = false;
  rty_HMI_ACC_FD2->IntelligentCurveAct = false;
  rty_HMI_ACC_FD2->ACC_RlvTgtHeading =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction4.Angle;
  rty_HMI_ACC_FD2->ACC_LeTgtHeading =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction5.Angle;
  rty_HMI_ACC_FD2->ACC_RiTgtHeading =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction6.Angle;
  rty_HMI_ACC_FD2->ACC_PotentialTgtHeading =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction7.Angle;
  rty_HMI_ACC_FD2->ACC_LeTgt_02_Dx = rtu_TOS_ACCP4->dxP4;
  rty_HMI_ACC_FD2->ACC_RiTgt_02_Dx = rtu_TOS_ACCP5->dxP5;

  /* SignalConversion: '<S7>/Signal Copy' */
  rty_HMI_ACC_FD4->ACCTgtObjDy = PubIfChassisHMI_MDL_B.Gain9;

  /* Gain: '<S7>/Gain10' */
  rty_HMI_ACC_FD4->ACCTgtObjVy = (-1.0F) * rtu_TOS_ACCP0->ACCTgtObjVy;

  /* Gain: '<S7>/Gain11' */
  rty_HMI_ACC_FD4->ACCTgtObjAy = (-1.0F) * rtu_TOS_ACCP0->ACCTgtObjAy;

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)4'
   *
   * About '<S7>/Direct Lookup Table (n-D)4':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = rtu_TOS_ACCP0->ObjMovingStateP0;
  if (u0 >= 5) {
    u0 = 5U;
  }

  q0 = u0;
  rty_HMI_ACC_FD4->ACCTgtObjState = rtCP_DirectLookupTablenD4_table[q0];

  /* End of LookupNDDirect: '<S7>/Direct Lookup Table (n-D)4' */

  /* DataTypeConversion: '<S7>/Data Type Conversion1' */
  rty_HMI_ACC_FD4->ACCTgtObjVideoCfmd = (rtu_TOS_ACCP0->fu_typeP0 != 0);

  /* DataTypeConversion: '<S7>/Data Type Conversion2' */
  count = floorf(rtu_TOS_ACCP0->ACCTgtObjCntAlive);
  if (rtIsNaNF(count) || rtIsInfF(count)) {
    count = 0.0F;
  } else {
    count = fmodf(count, 4.2949673E+9F);
  }

  rty_HMI_ACC_FD4->ACCTgtObjCntAlive = count < 0.0F ? (uint32_T)-(int32_T)
    (uint32_T)-count : (uint32_T)count;

  /* End of DataTypeConversion: '<S7>/Data Type Conversion2' */

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)5'
   *
   * About '<S7>/Direct Lookup Table (n-D)5':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  q0 = rtu_VSM_HMI->HandsOffDetd;

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)5'
   *
   * About '<S7>/Direct Lookup Table (n-D)5':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  PubIfChassisHMI_MDL_B.DirectLookupTablenD5 =
    rtCP_DirectLookupTablenD5_table[q0];

  /* DataTypeConversion: '<S7>/Data Type Conversion3' */
  rty_HMI_ACC_FD4->HandsoffDetd = PubIfChassisHMI_MDL_B.DirectLookupTablenD5;

  /* DataTypeConversion: '<S7>/Data Type Conversion31' */
  count = floorf(rtu_RFM_INTERSEC_ALERT->f_start_distance);
  if (rtIsNaNF(count) || rtIsInfF(count)) {
    count = 0.0F;
  } else {
    count = fmodf(count, 65536.0F);
  }

  rty_HMI_ACC_FD4->RampDst = (uint16_T)(count < 0.0F ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-count : (int32_T)(uint16_T)count);

  /* End of DataTypeConversion: '<S7>/Data Type Conversion31' */

  /* DataTypeConversion: '<S7>/Data Type Conversion32' */
  count = floorf(rtu_RFM_ROAD->f_toll_distance);
  if (rtIsNaNF(count) || rtIsInfF(count)) {
    count = 0.0F;
  } else {
    count = fmodf(count, 65536.0F);
  }

  rty_HMI_ACC_FD4->TunnelDst = (uint16_T)(count < 0.0F ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-count : (int32_T)(uint16_T)count);

  /* End of DataTypeConversion: '<S7>/Data Type Conversion32' */

  /* DataTypeConversion: '<S7>/Data Type Conversion33' */
  count = floorf(rtu_RFM_ROAD->f_bridge_distance);
  if (rtIsNaNF(count) || rtIsInfF(count)) {
    count = 0.0F;
  } else {
    count = fmodf(count, 65536.0F);
  }

  rty_HMI_ACC_FD4->BrdgDst = (uint16_T)(count < 0.0F ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-count : (int32_T)(uint16_T)count);

  /* End of DataTypeConversion: '<S7>/Data Type Conversion33' */

  /* DataTypeConversion: '<S7>/Data Type Conversion4' */
  rty_HMI_ACC_FD4->ACC_SOSReq = rtu_VSM_HMI->ACC_SOS_Req;

  /* DataTypeConversion: '<S7>/Data Type Conversion5' */
  rty_HMI_ACC_FD4->MapDataValid = (rtu_EHRV2_HDR->MapDataValid != 0);

  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S14>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ox = (rtu_VSM_HMI->HWA_Warning != ((uint8_T)0U));

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)10'
   *
   * About '<S7>/Direct Lookup Table (n-D)10':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  if (*rtu_DriverSts < 9) {
    u0 = *rtu_DriverSts;
  } else {
    u0 = 9U;
  }

  q0 = u0;

  /* LookupNDDirect: '<S7>/Direct Lookup Table (n-D)10'
   *
   * About '<S7>/Direct Lookup Table (n-D)10':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  PubIfChassisHMI_MDL_B.DirectLookupTablenD10 =
    rtCP_DirectLookupTablenD10_table[q0];

  /* Switch: '<S7>/Switch1' */
  if (PubIfChassisHMI_MDL_B.Compare_ox) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant1'
     */
    PubIfChassisHMI_MDL_B.Switch1_f = ((uint8_T)0U);
  } else {
    /* Switch: '<S7>/Switch1' */
    PubIfChassisHMI_MDL_B.Switch1_f =
      PubIfChassisHMI_MDL_B.DirectLookupTablenD10;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S16>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_a = (rtu_VSM_HMI->HWA_Warning != ((uint8_T)0U));

  /* Switch: '<S7>/Switch' */
  if (PubIfChassisHMI_MDL_B.Compare_a) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Constant'
     */
    PubIfChassisHMI_MDL_B.Switch_p = ((uint8_T)0U);
  } else {
    /* Switch: '<S7>/Switch' */
    PubIfChassisHMI_MDL_B.Switch_p = rtu_VSM_HMI->HandsOffWarningLevel;
  }

  /* End of Switch: '<S7>/Switch' */

  /* RelationalOperator: '<S7>/Relational Operator' */
  PubIfChassisHMI_MDL_B.RelationalOperator_m = (PubIfChassisHMI_MDL_B.Switch1_f >
    PubIfChassisHMI_MDL_B.Switch_p);

  /* Switch: '<S7>/Switch3' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  if (PubIfChassisHMI_MDL_B.RelationalOperator_m) {
    rty_HMI_ACC_FD4->DrvrSts = PubIfChassisHMI_MDL_B.Switch1_f;
  } else {
    rty_HMI_ACC_FD4->DrvrSts = ((uint8_T)0U);
  }

  /* End of Switch: '<S7>/Switch3' */

  /* BusCreator generated from: '<Root>/HMI_ACC_FD4' */
  rty_HMI_ACC_FD4->ACCTgtObjDx = rtu_TOS_ACCP0->dxP0;
  rty_HMI_ACC_FD4->ACCTgtObjObstcl = rtu_TOS_ACCP0->ACCTgtObjObstcl;
  rty_HMI_ACC_FD4->ACCTgtObjExist = rtu_TOS_ACCP0->ACCTgtObjExist;
  rty_HMI_ACC_FD4->ACCTgtObjVx = rtu_TOS_ACCP0->vxRelP0;
  rty_HMI_ACC_FD4->ACCTgtObjAx = rtu_TOS_ACCP0->axAbsGroundP0;
  rty_HMI_ACC_FD4->DrvgOnHiWay = rtu_EHRV2_ROAD_INFO->i_func_road_class;
  rty_HMI_ACC_FD4->RoadCrvt = rtu_EHRV2_ROAD_INFO->i_road_curvature;
  rty_HMI_ACC_FD4->SpdLimitDst = 0U;
  rty_HMI_ACC_FD4->RoadCrvtFar = rtu_EHRV2_ROAD_INFO->i_road_curvature_far;
  rty_HMI_ACC_FD4->SpdLimit = rtu_HMI_VCAN_HUT->NavSpdLimValue;
  rty_HMI_ACC_FD4->CurveDst = rtu_EHRV2_ROAD_INFO->i_road_curvature_far_distance;
  rty_HMI_ACC_FD4->NavSpdLimUnit = rtu_HMI_VCAN_HUT->NavSpdLimUnit_HUT;
  rty_HMI_ACC_FD4->DrvgOnRiLane = 0U;
  rty_HMI_ACC_FD4->ACCTgtObjID = rtu_TOS_ACCP0->IDP0;

  /* RelationalOperator: '<S75>/Compare' incorporates:
   *  Constant: '<S75>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_e4 = ((int32_T)rtu_HMI_VCAN_HUT->LSSSwtReq >
    (int32_T)false);

  /* Logic: '<S8>/Logical Operator7' */
  PubIfChassisHMI_MDL_B.LogicalOperator7 = (rtu_HMI_VCAN_HUT->LCKSwtReq &&
    PubIfChassisHMI_MDL_B.Compare_e4);

  /* UnitDelay: '<S8>/Unit Delay1' */
  PubIfChassisHMI_MDL_B.UnitDelay1 = PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE;

  /* UnitDelay: '<S8>/Unit Delay2' */
  PubIfChassisHMI_MDL_B.UnitDelay2 = PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE;

  /* MATLAB Function: '<S8>/MATLAB Function3' */
  PubIfChassisHMI_MDL_B.LSSIntervention = 0U;
  rty_HMI_IFC_FD2->LSSErrSts = 0U;
  rty_HMI_IFC_FD2->LSSResp = false;
  rty_HMI_IFC_FD2->LSSFuncSts = 0U;
  rty_HMI_IFC_FD2->ELKResp = false;
  rty_HMI_IFC_FD2->LCKResp = false;
  rty_HMI_IFC_FD2->LKAResp = false;
  rty_HMI_IFC_FD2->LDWResp = false;
  rty_HMI_IFC_FD2->IntelligentEvaResp = false;
  rty_HMI_IFC_FD2->IntelligentEvaActSts = 0U;
  PubIfChassisHMI_MDL_B.Lcount = 50.0;
  PubIfChassisHMI_MDL_B.Rcount = 50.0;
  if (rtu_HMI_VCAN_HUT->LSSSwtReq) {
    rty_HMI_IFC_FD2->LSSResp = true;
  }

  if ((rtu_VSM_HMI->LCKSts > 0) && PubIfChassisHMI_MDL_B.LogicalOperator7) {
    rty_HMI_IFC_FD2->LCKResp = true;
    rty_HMI_IFC_FD2->LSSFuncSts = 3U;
    if ((rtu_VSM_HMI->LCKSts == 3) && ((rtu_VSM_HMI->ELKSts == 0) ||
         (rtu_VSM_HMI->ELKSts == 1) || (rtu_VSM_HMI->ELKSts == 2) ||
         (rtu_VSM_HMI->ELKSts == 9) || (rtu_VSM_HMI->LKASts != 4) ||
         (rtu_VSM_HMI->LKASts != 5))) {
      PubIfChassisHMI_MDL_B.LSSIntervention = 5U;
      if (rtu_VSM_HMI->LKAWarning == 1) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 1U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 6U;
          }
        }
      } else {
        if (rtu_VSM_HMI->LKAWarning == 2) {
          if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
              (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 2U;
          } else {
            if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
              PubIfChassisHMI_MDL_B.LSSIntervention = 7U;
            }
          }
        }
      }
    } else {
      if (rtu_VSM_HMI->LCKSts == 7) {
        rty_HMI_IFC_FD2->LSSErrSts = 3U;
      }
    }
  } else if ((rtu_VSM_HMI->LKASts > 0) && rtu_HMI_VCAN_HUT->LKASwtReq) {
    rty_HMI_IFC_FD2->LKAResp = true;
    rty_HMI_IFC_FD2->LSSFuncSts = 2U;
    if (((rtu_VSM_HMI->LKASts == 4) || ((PubIfChassisHMI_MDL_B.UnitDelay1 > 0.0)
          && (PubIfChassisHMI_MDL_B.UnitDelay1 < 50.0))) &&
        ((rtu_VSM_HMI->ELKSts == 0) || (rtu_VSM_HMI->ELKSts == 1) ||
         (rtu_VSM_HMI->ELKSts == 2) || (rtu_VSM_HMI->ELKSts == 9))) {
      PubIfChassisHMI_MDL_B.Lcount = fmax(0.0, PubIfChassisHMI_MDL_B.UnitDelay1
        - 1.0);
      PubIfChassisHMI_MDL_B.LSSIntervention = 3U;
      if (rtu_VSM_HMI->LKAWarning == 1) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 1U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 6U;
          }
        }
      }
    } else if (((rtu_VSM_HMI->LKASts == 5) || ((PubIfChassisHMI_MDL_B.UnitDelay2
      > 0.0) && (PubIfChassisHMI_MDL_B.UnitDelay2 < 50.0))) &&
               ((rtu_VSM_HMI->ELKSts == 0) || (rtu_VSM_HMI->ELKSts == 1) ||
                (rtu_VSM_HMI->ELKSts == 2) || (rtu_VSM_HMI->ELKSts == 9))) {
      PubIfChassisHMI_MDL_B.Rcount = fmax(0.0, PubIfChassisHMI_MDL_B.UnitDelay1
        - 1.0);
      PubIfChassisHMI_MDL_B.LSSIntervention = 4U;
      if (rtu_VSM_HMI->LKAWarning == 1) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 2U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 7U;
          }
        }
      }
    } else {
      if (rtu_VSM_HMI->LKASts == 6) {
        rty_HMI_IFC_FD2->LSSErrSts = 2U;
      }
    }
  } else {
    if (rtu_VSM_HMI->LDWSts > 0) {
      rty_HMI_IFC_FD2->LSSFuncSts = 1U;
      rty_HMI_IFC_FD2->LDWResp = true;
      if ((rtu_VSM_HMI->LDWSts == 4) && ((rtu_VSM_HMI->ELKSts == 0) ||
           (rtu_VSM_HMI->ELKSts == 1) || (rtu_VSM_HMI->ELKSts == 2) ||
           (rtu_VSM_HMI->ELKSts == 9) || (rtu_VSM_HMI->LKASts != 4) ||
           (rtu_VSM_HMI->LKASts != 5))) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 1U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 6U;
          }
        }
      } else if ((rtu_VSM_HMI->LDWSts == 5) && ((rtu_VSM_HMI->ELKSts == 0) ||
                  (rtu_VSM_HMI->ELKSts == 1) || (rtu_VSM_HMI->ELKSts == 2) ||
                  (rtu_VSM_HMI->ELKSts == 9) || (rtu_VSM_HMI->LKASts != 4) ||
                  (rtu_VSM_HMI->LKASts != 5))) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 2U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 7U;
          }
        }
      } else {
        if (rtu_VSM_HMI->LDWSts == 6) {
          rty_HMI_IFC_FD2->LSSErrSts = 1U;
        }
      }
    }
  }

  if (rtu_VSM_HMI->LCKIESts > 0) {
    rty_HMI_IFC_FD2->IntelligentEvaResp = true;
    if (rtu_VSM_HMI->LCKIESts == 4) {
      rty_HMI_IFC_FD2->IntelligentEvaActSts = 2U;
    } else {
      if (rtu_VSM_HMI->LCKIESts == 5) {
        rty_HMI_IFC_FD2->IntelligentEvaActSts = 1U;
      }
    }
  }

  if (rtu_VSM_HMI->ELKSts > 0) {
    rty_HMI_IFC_FD2->ELKResp = true;
    rty_HMI_IFC_FD2->LSSFuncSts = 2U;
    if ((rtu_VSM_HMI->LCKSts > 0) && PubIfChassisHMI_MDL_B.LogicalOperator7) {
      rty_HMI_IFC_FD2->LSSFuncSts = 3U;
    }

    if ((rtu_VSM_HMI->ELKSts == 5) || (rtu_VSM_HMI->ELKSts == 7) ||
        (rtu_VSM_HMI->ELKSts == 3)) {
      PubIfChassisHMI_MDL_B.LSSIntervention = 3U;
      if (rtu_VSM_HMI->LKAWarning == 1) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 1U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 6U;
          }
        }
      }
    } else if ((rtu_VSM_HMI->ELKSts == 6) || (rtu_VSM_HMI->ELKSts == 8) ||
               (rtu_VSM_HMI->ELKSts == 4)) {
      PubIfChassisHMI_MDL_B.LSSIntervention = 4U;
      if (rtu_VSM_HMI->LKAWarning == 1) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 2U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 7U;
          }
        }
      }
    } else if ((rtu_VSM_HMI->LKASts == 4) || ((PubIfChassisHMI_MDL_B.UnitDelay1 >
      0.0) && (PubIfChassisHMI_MDL_B.UnitDelay1 < 50.0))) {
      PubIfChassisHMI_MDL_B.Lcount = fmax(0.0, PubIfChassisHMI_MDL_B.UnitDelay1
        - 1.0);
      PubIfChassisHMI_MDL_B.LSSIntervention = 3U;
      if (rtu_VSM_HMI->LKAWarning == 1) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 1U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 6U;
          }
        }
      }
    } else if ((rtu_VSM_HMI->LKASts == 5) || ((PubIfChassisHMI_MDL_B.UnitDelay2 >
      0.0) && (PubIfChassisHMI_MDL_B.UnitDelay2 < 50.0))) {
      PubIfChassisHMI_MDL_B.Rcount = fmax(0.0, PubIfChassisHMI_MDL_B.UnitDelay1
        - 1.0);
      PubIfChassisHMI_MDL_B.LSSIntervention = 4U;
      if (rtu_VSM_HMI->LKAWarning == 1) {
        if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 0) ||
            (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
          PubIfChassisHMI_MDL_B.LSSIntervention = 2U;
        } else {
          if (rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) {
            PubIfChassisHMI_MDL_B.LSSIntervention = 7U;
          }
        }
      }
    } else {
      if ((rtu_VSM_HMI->LCKSts != 7) && (rtu_VSM_HMI->LKASts != 6) &&
          (rtu_VSM_HMI->ELKSts == 9)) {
        rty_HMI_IFC_FD2->LSSErrSts = 4U;
      }
    }
  }

  if (((rtu_VSM_HMI->TJASts == 3) || (rtu_VSM_HMI->TJASts == 9) ||
       (rtu_VSM_HMI->TJASts == 10)) && (rtu_VSM_HMI->LCKSts == 3)) {
    PubIfChassisHMI_MDL_B.LSSIntervention = 5U;
  }

  /* End of MATLAB Function: '<S8>/MATLAB Function3' */

  /* DataTypeConversion: '<S8>/Data Type Conversion1' */
  rty_HMI_IFC_FD2->LSSWarnFormResp = rtu_VSM_HMI->LSS_WarnFormSwtResp;

  /* MATLAB Function: '<S8>/MATLAB Function' */
  rty_HMI_IFC_FD2->ELKMainState = rtu_VSM_HMI->ELKSts;
  if ((rtu_VSM_HMI->ELKSts == 3) || (rtu_VSM_HMI->ELKSts == 4)) {
    rty_HMI_IFC_FD2->ELKMainState = 3U;
  } else if ((rtu_VSM_HMI->ELKSts == 5) || (rtu_VSM_HMI->ELKSts == 6)) {
    rty_HMI_IFC_FD2->ELKMainState = 4U;
  } else if ((rtu_VSM_HMI->ELKSts == 7) || (rtu_VSM_HMI->ELKSts == 8)) {
    rty_HMI_IFC_FD2->ELKMainState = 5U;
  } else {
    if (rtu_VSM_HMI->ELKSts == 9) {
      rty_HMI_IFC_FD2->ELKMainState = 6U;
    }
  }

  /* End of MATLAB Function: '<S8>/MATLAB Function' */

  /* UnitDelay: '<S8>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE;

  /* MATLAB Function: '<S8>/MATLAB Function11' incorporates:
   *  Constant: '<S8>/Constant'
   */
  PubIfChassisHMI_MDL_B.count = 0.0;
  rty_HMI_IFC_FD2->LDW_LKAWarn = 0U;
  if ((rtu_VSM_HMI->ELKSts == 3) || (rtu_VSM_HMI->ELKSts == 5) ||
      (rtu_VSM_HMI->ELKSts == 7) || (rtu_VSM_HMI->LKASts == 4)) {
    PubIfChassisHMI_MDL_B.count = PubIfChassisHMI_MDL_B.UnitDelay + 1.0;
    if (PubIfChassisHMI_MDL_B.UnitDelay > (P_HMI_LDW_LKAWarnTime - 1.0F) * 50.0F)
    {
      rty_HMI_IFC_FD2->LDW_LKAWarn = 1U;
    }
  } else {
    if ((rtu_VSM_HMI->ELKSts == 4) || (rtu_VSM_HMI->ELKSts == 6) ||
        (rtu_VSM_HMI->ELKSts == 8) || (rtu_VSM_HMI->LKASts == 5)) {
      PubIfChassisHMI_MDL_B.count = PubIfChassisHMI_MDL_B.UnitDelay + 1.0;
      if (PubIfChassisHMI_MDL_B.UnitDelay > (P_HMI_LDW_LKAWarnTime - 1.0F) *
          50.0F) {
        rty_HMI_IFC_FD2->LDW_LKAWarn = 2U;
      }
    }
  }

  /* End of MATLAB Function: '<S8>/MATLAB Function11' */

  /* DataTypeConversion: '<S8>/Data Type Conversion2' */
  rty_HMI_IFC_FD2->ESS_PedResp = rtu_HMI_VCAN_HUT->ESS_PedSwtReq;

  /* DataTypeConversion: '<S8>/Data Type Conversion3' */
  rty_HMI_IFC_FD2->ESS_VehResp = rtu_HMI_VCAN_HUT->ESS_VehSwtReq;

  /* DataTypeConversion: '<S8>/Data Type Conversion4' */
  rty_HMI_IFC_FD2->AESResp = rtu_HMI_VCAN_HUT->AESSwtReq;

  /* DataTypeConversion: '<S8>/Data Type Conversion' */
  rty_HMI_IFC_FD2->IFCHUTInterface = (*rtu_EHRV2_HutHandshake != 0);

  /* DataTypeConversion: '<S8>/Data Type Conversion17' */
  rty_HMI_IFC_FD2->CameraBlockageSts = (rtu_DMON_SENS_ERR->FCam_BlockageSts != 0);

  /* SignalConversion generated from: '<S1>/Bus Selector11' */
  PubIfChassisHMI_MDL_B.bIsLineExist = rtu_RFM_LINE_L1->bIsLineExist;

  /* RelationalOperator: '<S181>/Compare' incorporates:
   *  Constant: '<S181>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_it = (PubIfChassisHMI_MDL_B.bIsLineExist >
    ((uint8_T)1U));

  /* SignalConversion generated from: '<S1>/Bus Selector15' */
  PubIfChassisHMI_MDL_B.bIsLineExist_c = rtu_RFM_LINE_LB->bIsLineExist;

  /* RelationalOperator: '<S191>/Compare' incorporates:
   *  Constant: '<S191>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gm = (PubIfChassisHMI_MDL_B.bIsLineExist_c <
    ((uint8_T)2U));

  /* Logic: '<S96>/Logical Operator29' */
  PubIfChassisHMI_MDL_B.LogicalOperator29 = (PubIfChassisHMI_MDL_B.Compare_it &&
    PubIfChassisHMI_MDL_B.Compare_gm);

  /* SignalConversion generated from: '<S1>/Bus Selector11' */
  PubIfChassisHMI_MDL_B.dC0V = rtu_RFM_LINE_L1->dC0V;

  /* SignalConversion generated from: '<S1>/Bus Selector15' */
  PubIfChassisHMI_MDL_B.dC0V_j = rtu_RFM_LINE_LB->dC0V;

  /* Sum: '<S96>/Add1' */
  PubIfChassisHMI_MDL_B.Add1 = PubIfChassisHMI_MDL_B.dC0V -
    PubIfChassisHMI_MDL_B.dC0V_j;

  /* RelationalOperator: '<S199>/Compare' incorporates:
   *  Constant: '<S199>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jb = (PubIfChassisHMI_MDL_B.Add1 < 0.0F);

  /* RelationalOperator: '<S189>/Compare' incorporates:
   *  Constant: '<S189>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ec = (PubIfChassisHMI_MDL_B.bIsLineExist >
    ((uint8_T)1U));

  /* RelationalOperator: '<S192>/Compare' incorporates:
   *  Constant: '<S192>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pb = (PubIfChassisHMI_MDL_B.bIsLineExist_c >
    ((uint8_T)1U));

  /* Logic: '<S96>/Logical Operator24' */
  PubIfChassisHMI_MDL_B.LogicalOperator24 = (PubIfChassisHMI_MDL_B.Compare_jb &&
    PubIfChassisHMI_MDL_B.Compare_ec && PubIfChassisHMI_MDL_B.Compare_pb);

  /* Logic: '<S96>/Logical Operator25' */
  PubIfChassisHMI_MDL_B.LogicalOperator25 =
    (PubIfChassisHMI_MDL_B.LogicalOperator29 ||
     PubIfChassisHMI_MDL_B.LogicalOperator24);

  /* DataTypeConversion: '<S96>/Data Type Conversion' */
  PubIfChassisHMI_MDL_B.DataTypeConversion =
    PubIfChassisHMI_MDL_B.LogicalOperator25;

  /* RelationalOperator: '<S180>/Compare' incorporates:
   *  Constant: '<S180>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_hb = (PubIfChassisHMI_MDL_B.bIsLineExist <
    ((uint8_T)2U));

  /* RelationalOperator: '<S187>/Compare' incorporates:
   *  Constant: '<S187>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ic = (PubIfChassisHMI_MDL_B.bIsLineExist_c >
    ((uint8_T)1U));

  /* Logic: '<S96>/Logical Operator28' */
  PubIfChassisHMI_MDL_B.LogicalOperator28 = (PubIfChassisHMI_MDL_B.Compare_hb &&
    PubIfChassisHMI_MDL_B.Compare_ic);

  /* Sum: '<S96>/Add4' */
  PubIfChassisHMI_MDL_B.Add4 = PubIfChassisHMI_MDL_B.dC0V -
    PubIfChassisHMI_MDL_B.dC0V_j;

  /* RelationalOperator: '<S198>/Compare' incorporates:
   *  Constant: '<S198>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_d = (PubIfChassisHMI_MDL_B.Add4 >= 0.0F);

  /* RelationalOperator: '<S193>/Compare' incorporates:
   *  Constant: '<S193>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_if = (PubIfChassisHMI_MDL_B.bIsLineExist >
    ((uint8_T)1U));

  /* RelationalOperator: '<S194>/Compare' incorporates:
   *  Constant: '<S194>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_n = (PubIfChassisHMI_MDL_B.bIsLineExist_c >
    ((uint8_T)1U));

  /* Logic: '<S96>/Logical Operator30' */
  PubIfChassisHMI_MDL_B.LogicalOperator30 = (PubIfChassisHMI_MDL_B.Compare_d &&
    PubIfChassisHMI_MDL_B.Compare_if && PubIfChassisHMI_MDL_B.Compare_n);

  /* Logic: '<S96>/Logical Operator27' */
  PubIfChassisHMI_MDL_B.LogicalOperator27 =
    (PubIfChassisHMI_MDL_B.LogicalOperator28 ||
     PubIfChassisHMI_MDL_B.LogicalOperator30);

  /* DataTypeConversion: '<S96>/Data Type Conversion5' */
  PubIfChassisHMI_MDL_B.DataTypeConversion5 =
    PubIfChassisHMI_MDL_B.LogicalOperator27;

  /* SignalConversion generated from: '<S1>/Bus Selector12' */
  PubIfChassisHMI_MDL_B.bIsLineExist_ck = rtu_RFM_LINE_R1->bIsLineExist;

  /* SignalConversion generated from: '<S1>/Bus Selector16' */
  PubIfChassisHMI_MDL_B.bIsLineExist_ckl = rtu_RFM_LINE_RB->bIsLineExist;

  /* MATLAB Function: '<S1>/MATLAB Function1' */
  if ((PubIfChassisHMI_MDL_B.bIsLineExist == 2) &&
      (PubIfChassisHMI_MDL_B.bIsLineExist_ck == 2)) {
    PubIfChassisHMI_MDL_B.A1_a = 0.5F * rtu_RFM_LINE_L1->dC1V + 0.5F *
      rtu_RFM_LINE_R1->dC1V;
    PubIfChassisHMI_MDL_B.A2_m = 0.5F * rtu_RFM_LINE_L1->dC2V + 0.5F *
      rtu_RFM_LINE_R1->dC2V;
    PubIfChassisHMI_MDL_B.A3_mm = 0.5F * rtu_RFM_LINE_L1->dC3V + 0.5F *
      rtu_RFM_LINE_R1->dC3V;
  } else if (PubIfChassisHMI_MDL_B.bIsLineExist == 2) {
    PubIfChassisHMI_MDL_B.A1_a = rtu_RFM_LINE_L1->dC1V;
    PubIfChassisHMI_MDL_B.A2_m = rtu_RFM_LINE_L1->dC2V;
    PubIfChassisHMI_MDL_B.A3_mm = rtu_RFM_LINE_L1->dC3V;
  } else if (PubIfChassisHMI_MDL_B.bIsLineExist_ck == 2) {
    PubIfChassisHMI_MDL_B.A1_a = rtu_RFM_LINE_R1->dC1V;
    PubIfChassisHMI_MDL_B.A2_m = rtu_RFM_LINE_R1->dC2V;
    PubIfChassisHMI_MDL_B.A3_mm = rtu_RFM_LINE_R1->dC3V;
  } else if ((PubIfChassisHMI_MDL_B.bIsLineExist_c == 2) &&
             (PubIfChassisHMI_MDL_B.bIsLineExist_ckl == 2)) {
    PubIfChassisHMI_MDL_B.A1_a = 0.5F * rtu_RFM_LINE_LB->dC1V + 0.5F *
      rtu_RFM_LINE_RB->dC1V;
    PubIfChassisHMI_MDL_B.A2_m = 0.5F * rtu_RFM_LINE_LB->dC2V + 0.5F *
      rtu_RFM_LINE_RB->dC2V;
    PubIfChassisHMI_MDL_B.A3_mm = 0.5F * rtu_RFM_LINE_LB->dC3V + 0.5F *
      rtu_RFM_LINE_RB->dC3V;
  } else if (PubIfChassisHMI_MDL_B.bIsLineExist_c == 2) {
    PubIfChassisHMI_MDL_B.A1_a = rtu_RFM_LINE_LB->dC1V;
    PubIfChassisHMI_MDL_B.A2_m = rtu_RFM_LINE_LB->dC2V;
    PubIfChassisHMI_MDL_B.A3_mm = rtu_RFM_LINE_LB->dC3V;
  } else if (PubIfChassisHMI_MDL_B.bIsLineExist_ckl == 2) {
    PubIfChassisHMI_MDL_B.A1_a = rtu_RFM_LINE_RB->dC1V;
    PubIfChassisHMI_MDL_B.A2_m = rtu_RFM_LINE_RB->dC2V;
    PubIfChassisHMI_MDL_B.A3_mm = rtu_RFM_LINE_RB->dC3V;
  } else {
    PubIfChassisHMI_MDL_B.A1_a = 0.0F;
    PubIfChassisHMI_MDL_B.A2_m = 0.0F;
    PubIfChassisHMI_MDL_B.A3_mm = 0.0F;
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function1' */

  /* LookupNDDirect: '<S8>/Direct Lookup Table (n-D)'
   *
   * About '<S8>/Direct Lookup Table (n-D)':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = rtu_RFM_LINE_L1->eLineType;
  if (u0 >= 20) {
    u0 = 20U;
  }

  q0 = u0;

  /* LookupNDDirect: '<S8>/Direct Lookup Table (n-D)'
   *
   * About '<S8>/Direct Lookup Table (n-D)':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  PubIfChassisHMI_MDL_B.DirectLookupTablenD_k =
    rtCP_DirectLookupTablenD_table_i[q0];

  /* UnitDelay: '<S128>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_hq =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hm;

  /* RelationalOperator: '<S304>/Compare' incorporates:
   *  Constant: '<S304>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_lp = (PubIfChassisHMI_MDL_B.UnitDelay3_hq ==
    false);

  /* RelationalOperator: '<S303>/Compare' incorporates:
   *  Constant: '<S303>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_dm = (*rtu_standstill == true);

  /* Logic: '<S128>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8 = (PubIfChassisHMI_MDL_B.Compare_lp &&
    PubIfChassisHMI_MDL_B.Compare_dm);

  /* UnitDelay: '<S128>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ni =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fm;

  /* MATLAB Function: '<S128>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.DirectLookupTablenD_k,
    PubIfChassisHMI_MDL_B.LogicalOperator8, PubIfChassisHMI_MDL_B.UnitDelay_ni,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_om);

  /* If: '<S96>/If' */
  if (PubIfChassisHMI_MDL_B.DataTypeConversion > 0.0) {
    /* Outputs for IfAction SubSystem: '<S96>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S204>/Action Port'
     */
    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S204>/Out1'
     */
    PubIfChassisHMI_MDL_B.A0 = PubIfChassisHMI_MDL_B.dC0V;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S204>/Out1'
     */
    PubIfChassisHMI_MDL_B.A1 = PubIfChassisHMI_MDL_B.A1_a;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S204>/Out1'
     */
    PubIfChassisHMI_MDL_B.A2 = PubIfChassisHMI_MDL_B.A2_m;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S204>/Out1'
     */
    PubIfChassisHMI_MDL_B.A3 = PubIfChassisHMI_MDL_B.A3_mm;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S204>/Out1'
     */
    PubIfChassisHMI_MDL_B.Type = PubIfChassisHMI_MDL_B.sf_MATLABFunction1_om.out;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S204>/Out1'
     */
    PubIfChassisHMI_MDL_B.Valid = PubIfChassisHMI_MDL_B.bIsLineExist;

    /* End of Outputs for SubSystem: '<S96>/Switch Case Action Subsystem' */
  } else if (PubIfChassisHMI_MDL_B.DataTypeConversion5 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S96>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S205>/Action Port'
     */
    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S205>/Out2'
     */
    PubIfChassisHMI_MDL_B.A0 = PubIfChassisHMI_MDL_B.dC0V_j;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S205>/Out2'
     */
    PubIfChassisHMI_MDL_B.A1 = PubIfChassisHMI_MDL_B.A1_a;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S205>/Out2'
     */
    PubIfChassisHMI_MDL_B.A2 = PubIfChassisHMI_MDL_B.A2_m;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S205>/Out2'
     */
    PubIfChassisHMI_MDL_B.A3 = PubIfChassisHMI_MDL_B.A3_mm;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  SignalConversion generated from: '<S205>/Out2'
     */
    PubIfChassisHMI_MDL_B.Valid = PubIfChassisHMI_MDL_B.bIsLineExist_c;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  Constant: '<S205>/Constant'
     *  SignalConversion generated from: '<S205>/Constant'
     */
    PubIfChassisHMI_MDL_B.Type = ((uint8_T)3U);

    /* End of Outputs for SubSystem: '<S96>/Switch Case Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S96>/Switch Case Action Subsystem4' incorporates:
     *  ActionPort: '<S208>/Action Port'
     */
    /* Merge generated from: '<S96>/Merge' incorporates:
     *  Constant: '<S208>/Constant1'
     *  SignalConversion generated from: '<S208>/Constant1'
     */
    PubIfChassisHMI_MDL_B.A1 = 0.0F;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  Constant: '<S208>/Constant2'
     *  SignalConversion generated from: '<S208>/Constant2'
     */
    PubIfChassisHMI_MDL_B.A2 = 0.0F;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  Constant: '<S208>/Constant3'
     *  SignalConversion generated from: '<S208>/Constant3'
     */
    PubIfChassisHMI_MDL_B.A3 = 0.0F;

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  Constant: '<S208>/Constant4'
     *  SignalConversion generated from: '<S208>/Constant4'
     */
    PubIfChassisHMI_MDL_B.Type = ((uint8_T)0U);

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  Constant: '<S208>/Constant6'
     *  SignalConversion generated from: '<S208>/Constant6'
     */
    PubIfChassisHMI_MDL_B.Valid = ((uint8_T)1U);

    /* Merge generated from: '<S96>/Merge' incorporates:
     *  Constant: '<S208>/Constant'
     *  SignalConversion generated from: '<S208>/Constant'
     */
    PubIfChassisHMI_MDL_B.A0 = 0.0F;

    /* End of Outputs for SubSystem: '<S96>/Switch Case Action Subsystem4' */
  }

  /* End of If: '<S96>/If' */

  /* RelationalOperator: '<S195>/Compare' incorporates:
   *  Constant: '<S195>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_aa = (PubIfChassisHMI_MDL_B.bIsLineExist_ck >
    ((uint8_T)1U));

  /* RelationalOperator: '<S188>/Compare' incorporates:
   *  Constant: '<S188>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_fl = (PubIfChassisHMI_MDL_B.bIsLineExist_ckl <
    ((uint8_T)2U));

  /* Logic: '<S96>/Logical Operator35' */
  PubIfChassisHMI_MDL_B.LogicalOperator35 = (PubIfChassisHMI_MDL_B.Compare_aa &&
    PubIfChassisHMI_MDL_B.Compare_fl);

  /* SignalConversion generated from: '<S1>/Bus Selector12' */
  PubIfChassisHMI_MDL_B.dC0V_jv = rtu_RFM_LINE_R1->dC0V;

  /* SignalConversion generated from: '<S1>/Bus Selector16' */
  PubIfChassisHMI_MDL_B.dC0V_jvm = rtu_RFM_LINE_RB->dC0V;

  /* Sum: '<S96>/Add5' */
  PubIfChassisHMI_MDL_B.Add5 = PubIfChassisHMI_MDL_B.dC0V_jv -
    PubIfChassisHMI_MDL_B.dC0V_jvm;

  /* RelationalOperator: '<S201>/Compare' incorporates:
   *  Constant: '<S201>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ol = (PubIfChassisHMI_MDL_B.Add5 > 0.0F);

  /* RelationalOperator: '<S196>/Compare' incorporates:
   *  Constant: '<S196>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_aq = (PubIfChassisHMI_MDL_B.bIsLineExist_ck >
    ((uint8_T)1U));

  /* RelationalOperator: '<S197>/Compare' incorporates:
   *  Constant: '<S197>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_nt = (PubIfChassisHMI_MDL_B.bIsLineExist_ckl >
    ((uint8_T)1U));

  /* Logic: '<S96>/Logical Operator31' */
  PubIfChassisHMI_MDL_B.LogicalOperator31 = (PubIfChassisHMI_MDL_B.Compare_ol &&
    PubIfChassisHMI_MDL_B.Compare_aq && PubIfChassisHMI_MDL_B.Compare_nt);

  /* Logic: '<S96>/Logical Operator32' */
  PubIfChassisHMI_MDL_B.LogicalOperator32 =
    (PubIfChassisHMI_MDL_B.LogicalOperator35 ||
     PubIfChassisHMI_MDL_B.LogicalOperator31);

  /* DataTypeConversion: '<S96>/Data Type Conversion6' */
  PubIfChassisHMI_MDL_B.DataTypeConversion6 =
    PubIfChassisHMI_MDL_B.LogicalOperator32;

  /* RelationalOperator: '<S190>/Compare' incorporates:
   *  Constant: '<S190>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_aj = (PubIfChassisHMI_MDL_B.bIsLineExist_ck <
    ((uint8_T)2U));

  /* RelationalOperator: '<S182>/Compare' incorporates:
   *  Constant: '<S182>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_mw = (PubIfChassisHMI_MDL_B.bIsLineExist_ckl >
    ((uint8_T)1U));

  /* Logic: '<S96>/Logical Operator34' */
  PubIfChassisHMI_MDL_B.LogicalOperator34 = (PubIfChassisHMI_MDL_B.Compare_aj &&
    PubIfChassisHMI_MDL_B.Compare_mw);

  /* Sum: '<S96>/Add6' */
  PubIfChassisHMI_MDL_B.Add6 = PubIfChassisHMI_MDL_B.dC0V_jv -
    PubIfChassisHMI_MDL_B.dC0V_jvm;

  /* RelationalOperator: '<S200>/Compare' incorporates:
   *  Constant: '<S200>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_hbm = (PubIfChassisHMI_MDL_B.Add6 <= 0.0F);

  /* RelationalOperator: '<S183>/Compare' incorporates:
   *  Constant: '<S183>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_nx = (PubIfChassisHMI_MDL_B.bIsLineExist_ck >
    ((uint8_T)1U));

  /* RelationalOperator: '<S184>/Compare' incorporates:
   *  Constant: '<S184>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ds = (PubIfChassisHMI_MDL_B.bIsLineExist_ckl >
    ((uint8_T)1U));

  /* Logic: '<S96>/Logical Operator36' */
  PubIfChassisHMI_MDL_B.LogicalOperator36 = (PubIfChassisHMI_MDL_B.Compare_hbm &&
    PubIfChassisHMI_MDL_B.Compare_nx && PubIfChassisHMI_MDL_B.Compare_ds);

  /* Logic: '<S96>/Logical Operator33' */
  PubIfChassisHMI_MDL_B.LogicalOperator33 =
    (PubIfChassisHMI_MDL_B.LogicalOperator34 ||
     PubIfChassisHMI_MDL_B.LogicalOperator36);

  /* DataTypeConversion: '<S96>/Data Type Conversion7' */
  PubIfChassisHMI_MDL_B.DataTypeConversion7 =
    PubIfChassisHMI_MDL_B.LogicalOperator33;

  /* LookupNDDirect: '<S8>/Direct Lookup Table (n-D)3'
   *
   * About '<S8>/Direct Lookup Table (n-D)3':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = rtu_RFM_LINE_R1->eLineType;
  if (u0 >= 20) {
    u0 = 20U;
  }

  q0 = u0;

  /* LookupNDDirect: '<S8>/Direct Lookup Table (n-D)3'
   *
   * About '<S8>/Direct Lookup Table (n-D)3':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  PubIfChassisHMI_MDL_B.DirectLookupTablenD3_m =
    rtCP_DirectLookupTablenD3_table_l[q0];

  /* UnitDelay: '<S150>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_p =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ob;

  /* RelationalOperator: '<S370>/Compare' incorporates:
   *  Constant: '<S370>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_i0 = (PubIfChassisHMI_MDL_B.UnitDelay3_p ==
    false);

  /* RelationalOperator: '<S369>/Compare' incorporates:
   *  Constant: '<S369>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pl = (*rtu_standstill == true);

  /* Logic: '<S150>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_n = (PubIfChassisHMI_MDL_B.Compare_i0 &&
    PubIfChassisHMI_MDL_B.Compare_pl);

  /* UnitDelay: '<S150>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_lk =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dd;

  /* MATLAB Function: '<S150>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.DirectLookupTablenD3_m,
    PubIfChassisHMI_MDL_B.LogicalOperator8_n, PubIfChassisHMI_MDL_B.UnitDelay_lk,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ej);

  /* If: '<S96>/If1' */
  if (PubIfChassisHMI_MDL_B.DataTypeConversion6 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S96>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S206>/Action Port'
     */
    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S206>/Out1'
     */
    PubIfChassisHMI_MDL_B.A0_k = PubIfChassisHMI_MDL_B.dC0V_jv;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S206>/Out1'
     */
    PubIfChassisHMI_MDL_B.A1_m = PubIfChassisHMI_MDL_B.A1_a;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S206>/Out1'
     */
    PubIfChassisHMI_MDL_B.A2_h = PubIfChassisHMI_MDL_B.A2_m;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S206>/Out1'
     */
    PubIfChassisHMI_MDL_B.A3_m = PubIfChassisHMI_MDL_B.A3_mm;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S206>/Out1'
     */
    PubIfChassisHMI_MDL_B.Type_e =
      PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ej.out;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S206>/Out1'
     */
    PubIfChassisHMI_MDL_B.Valid_f = PubIfChassisHMI_MDL_B.bIsLineExist_ck;

    /* End of Outputs for SubSystem: '<S96>/Switch Case Action Subsystem2' */
  } else if (PubIfChassisHMI_MDL_B.DataTypeConversion7 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S96>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S207>/Action Port'
     */
    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S207>/Out1'
     */
    PubIfChassisHMI_MDL_B.A0_k = PubIfChassisHMI_MDL_B.dC0V_jvm;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S207>/Out1'
     */
    PubIfChassisHMI_MDL_B.A1_m = PubIfChassisHMI_MDL_B.A1_a;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S207>/Out1'
     */
    PubIfChassisHMI_MDL_B.A2_h = PubIfChassisHMI_MDL_B.A2_m;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S207>/Out1'
     */
    PubIfChassisHMI_MDL_B.A3_m = PubIfChassisHMI_MDL_B.A3_mm;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  SignalConversion generated from: '<S207>/Out1'
     */
    PubIfChassisHMI_MDL_B.Valid_f = PubIfChassisHMI_MDL_B.bIsLineExist_ckl;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  Constant: '<S207>/Constant'
     *  SignalConversion generated from: '<S207>/Constant'
     */
    PubIfChassisHMI_MDL_B.Type_e = ((uint8_T)3U);

    /* End of Outputs for SubSystem: '<S96>/Switch Case Action Subsystem3' */
  } else {
    /* Outputs for IfAction SubSystem: '<S96>/Switch Case Action Subsystem5' incorporates:
     *  ActionPort: '<S209>/Action Port'
     */
    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  Constant: '<S209>/Constant1'
     *  SignalConversion generated from: '<S209>/Constant1'
     */
    PubIfChassisHMI_MDL_B.A0_k = 0.0F;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  Constant: '<S209>/Constant2'
     *  SignalConversion generated from: '<S209>/Constant2'
     */
    PubIfChassisHMI_MDL_B.Type_e = ((uint8_T)0U);

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  Constant: '<S209>/Constant3'
     *  SignalConversion generated from: '<S209>/Constant3'
     */
    PubIfChassisHMI_MDL_B.A1_m = 0.0F;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  Constant: '<S209>/Constant4'
     *  SignalConversion generated from: '<S209>/Constant4'
     */
    PubIfChassisHMI_MDL_B.A2_h = 0.0F;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  Constant: '<S209>/Constant5'
     *  SignalConversion generated from: '<S209>/Constant5'
     */
    PubIfChassisHMI_MDL_B.A3_m = 0.0F;

    /* Merge generated from: '<S96>/Merge1' incorporates:
     *  Constant: '<S209>/Constant7'
     *  SignalConversion generated from: '<S209>/Constant7'
     */
    PubIfChassisHMI_MDL_B.Valid_f = ((uint8_T)1U);

    /* End of Outputs for SubSystem: '<S96>/Switch Case Action Subsystem5' */
  }

  /* End of If: '<S96>/If1' */

  /* RelationalOperator: '<S185>/Compare' incorporates:
   *  Constant: '<S185>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_eg = (PubIfChassisHMI_MDL_B.Valid > ((uint8_T)1U));

  /* RelationalOperator: '<S186>/Compare' incorporates:
   *  Constant: '<S186>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_lk = (PubIfChassisHMI_MDL_B.Valid_f > ((uint8_T)
    1U));

  /* MATLAB Function: '<S96>/MATLAB Function2' */
  PubIfChassisHMI_MDL_B.LaneAvailability = 0.0;
  if (PubIfChassisHMI_MDL_B.Compare_eg && PubIfChassisHMI_MDL_B.Compare_lk) {
    PubIfChassisHMI_MDL_B.LaneAvailability = 3.0;
  } else if (PubIfChassisHMI_MDL_B.Compare_eg &&
             (!PubIfChassisHMI_MDL_B.Compare_lk)) {
    PubIfChassisHMI_MDL_B.LaneAvailability = 1.0;
  } else {
    if ((!PubIfChassisHMI_MDL_B.Compare_eg) && PubIfChassisHMI_MDL_B.Compare_lk)
    {
      PubIfChassisHMI_MDL_B.LaneAvailability = 2.0;
    }
  }

  /* End of MATLAB Function: '<S96>/MATLAB Function2' */

  /* MATLAB Function: '<S96>/MATLAB Function3' */
  PubIfChassisHMI_MDL_B.L_A0 = 0.0F;
  PubIfChassisHMI_MDL_B.L_A1 = 0.0F;
  PubIfChassisHMI_MDL_B.L_A2 = 0.0F;
  PubIfChassisHMI_MDL_B.L_A3 = 0.0F;
  PubIfChassisHMI_MDL_B.L_Type = 0U;
  PubIfChassisHMI_MDL_B.L_Valid = 1U;
  PubIfChassisHMI_MDL_B.R_A0 = 0.0F;
  PubIfChassisHMI_MDL_B.R_A1 = 0.0F;
  PubIfChassisHMI_MDL_B.R_A2 = 0.0F;
  PubIfChassisHMI_MDL_B.R_A3 = 0.0F;
  PubIfChassisHMI_MDL_B.R_Type = 0U;
  PubIfChassisHMI_MDL_B.R_Valid = 1U;
  if (PubIfChassisHMI_MDL_B.LaneAvailability == 1.0) {
    PubIfChassisHMI_MDL_B.L_A0 = PubIfChassisHMI_MDL_B.A0;
    PubIfChassisHMI_MDL_B.L_A1 = PubIfChassisHMI_MDL_B.A1;
    PubIfChassisHMI_MDL_B.L_A2 = PubIfChassisHMI_MDL_B.A2;
    PubIfChassisHMI_MDL_B.L_A3 = PubIfChassisHMI_MDL_B.A3;
    PubIfChassisHMI_MDL_B.L_Type = PubIfChassisHMI_MDL_B.Type;
    PubIfChassisHMI_MDL_B.L_Valid = PubIfChassisHMI_MDL_B.Valid;
  } else if (PubIfChassisHMI_MDL_B.LaneAvailability == 2.0) {
    PubIfChassisHMI_MDL_B.R_A0 = PubIfChassisHMI_MDL_B.A0_k;
    PubIfChassisHMI_MDL_B.R_A1 = PubIfChassisHMI_MDL_B.A1_m;
    PubIfChassisHMI_MDL_B.R_A2 = PubIfChassisHMI_MDL_B.A2_h;
    PubIfChassisHMI_MDL_B.R_A3 = PubIfChassisHMI_MDL_B.A3_m;
    PubIfChassisHMI_MDL_B.R_Type = PubIfChassisHMI_MDL_B.Type_e;
    PubIfChassisHMI_MDL_B.R_Valid = PubIfChassisHMI_MDL_B.Valid_f;
  } else {
    if (PubIfChassisHMI_MDL_B.LaneAvailability == 3.0) {
      if ((fabsf(PubIfChassisHMI_MDL_B.A0 - PubIfChassisHMI_MDL_B.A0_k) < 5.5F) &&
          (fabsf(PubIfChassisHMI_MDL_B.A0 - PubIfChassisHMI_MDL_B.A0_k) > 2.5F))
      {
        PubIfChassisHMI_MDL_B.L_A0 = PubIfChassisHMI_MDL_B.A0;
        PubIfChassisHMI_MDL_B.L_A1 = PubIfChassisHMI_MDL_B.A1;
        PubIfChassisHMI_MDL_B.L_A2 = PubIfChassisHMI_MDL_B.A2;
        PubIfChassisHMI_MDL_B.L_A3 = PubIfChassisHMI_MDL_B.A3;
        PubIfChassisHMI_MDL_B.L_Type = PubIfChassisHMI_MDL_B.Type;
        PubIfChassisHMI_MDL_B.L_Valid = PubIfChassisHMI_MDL_B.Valid;
        PubIfChassisHMI_MDL_B.R_A0 = PubIfChassisHMI_MDL_B.A0_k;
        PubIfChassisHMI_MDL_B.R_A1 = PubIfChassisHMI_MDL_B.A1_m;
        PubIfChassisHMI_MDL_B.R_A2 = PubIfChassisHMI_MDL_B.A2_h;
        PubIfChassisHMI_MDL_B.R_A3 = PubIfChassisHMI_MDL_B.A3_m;
        PubIfChassisHMI_MDL_B.R_Type = PubIfChassisHMI_MDL_B.Type_e;
        PubIfChassisHMI_MDL_B.R_Valid = PubIfChassisHMI_MDL_B.Valid_f;
      } else if (fabsf(PubIfChassisHMI_MDL_B.A0 - PubIfChassisHMI_MDL_B.A0_k) >=
                 5.5F) {
        PubIfChassisHMI_MDL_B.L_A0 = 5.5F * PubIfChassisHMI_MDL_B.A0 / fabsf
          (PubIfChassisHMI_MDL_B.A0 - PubIfChassisHMI_MDL_B.A0_k);
        PubIfChassisHMI_MDL_B.L_A1 = PubIfChassisHMI_MDL_B.A1;
        PubIfChassisHMI_MDL_B.L_A2 = PubIfChassisHMI_MDL_B.A2;
        PubIfChassisHMI_MDL_B.L_A3 = PubIfChassisHMI_MDL_B.A3;
        PubIfChassisHMI_MDL_B.L_Type = PubIfChassisHMI_MDL_B.Type;
        PubIfChassisHMI_MDL_B.L_Valid = PubIfChassisHMI_MDL_B.Valid;
        PubIfChassisHMI_MDL_B.R_A0 = 5.5F * PubIfChassisHMI_MDL_B.A0_k / fabsf
          (PubIfChassisHMI_MDL_B.A0 - PubIfChassisHMI_MDL_B.A0_k);
        PubIfChassisHMI_MDL_B.R_A1 = PubIfChassisHMI_MDL_B.A1_m;
        PubIfChassisHMI_MDL_B.R_A2 = PubIfChassisHMI_MDL_B.A2_h;
        PubIfChassisHMI_MDL_B.R_A3 = PubIfChassisHMI_MDL_B.A3_m;
        PubIfChassisHMI_MDL_B.R_Type = PubIfChassisHMI_MDL_B.Type_e;
        PubIfChassisHMI_MDL_B.R_Valid = PubIfChassisHMI_MDL_B.Valid_f;
      } else {
        if ((fabsf(PubIfChassisHMI_MDL_B.A0 - PubIfChassisHMI_MDL_B.A0_k) <=
             2.5F) && (fabsf(PubIfChassisHMI_MDL_B.A0 -
                             PubIfChassisHMI_MDL_B.A0_k) > 0.0F)) {
          PubIfChassisHMI_MDL_B.L_A0 = 2.5F * PubIfChassisHMI_MDL_B.A0 / fabsf
            (PubIfChassisHMI_MDL_B.A0 - PubIfChassisHMI_MDL_B.A0_k);
          PubIfChassisHMI_MDL_B.L_A1 = PubIfChassisHMI_MDL_B.A1;
          PubIfChassisHMI_MDL_B.L_A2 = PubIfChassisHMI_MDL_B.A2;
          PubIfChassisHMI_MDL_B.L_A3 = PubIfChassisHMI_MDL_B.A3;
          PubIfChassisHMI_MDL_B.L_Type = PubIfChassisHMI_MDL_B.Type;
          PubIfChassisHMI_MDL_B.L_Valid = PubIfChassisHMI_MDL_B.Valid;
          PubIfChassisHMI_MDL_B.R_A0 = 2.5F * PubIfChassisHMI_MDL_B.A0_k / fabsf
            (PubIfChassisHMI_MDL_B.A0 - PubIfChassisHMI_MDL_B.A0_k);
          PubIfChassisHMI_MDL_B.R_A1 = PubIfChassisHMI_MDL_B.A1_m;
          PubIfChassisHMI_MDL_B.R_A2 = PubIfChassisHMI_MDL_B.A2_h;
          PubIfChassisHMI_MDL_B.R_A3 = PubIfChassisHMI_MDL_B.A3_m;
          PubIfChassisHMI_MDL_B.R_Type = PubIfChassisHMI_MDL_B.Type_e;
          PubIfChassisHMI_MDL_B.R_Valid = PubIfChassisHMI_MDL_B.Valid_f;
        }
      }
    }
  }

  /* End of MATLAB Function: '<S96>/MATLAB Function3' */

  /* UnitDelay: '<S146>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_j =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ks;

  /* RelationalOperator: '<S358>/Compare' incorporates:
   *  Constant: '<S358>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_in = (PubIfChassisHMI_MDL_B.UnitDelay3_j ==
    false);

  /* RelationalOperator: '<S357>/Compare' incorporates:
   *  Constant: '<S357>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_nf = (*rtu_standstill == true);

  /* Logic: '<S146>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_i = (PubIfChassisHMI_MDL_B.Compare_in &&
    PubIfChassisHMI_MDL_B.Compare_nf);

  /* UnitDelay: '<S146>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ov =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h0;

  /* MATLAB Function: '<S146>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.L_Type, PubIfChassisHMI_MDL_B.LogicalOperator8_i,
    PubIfChassisHMI_MDL_B.UnitDelay_ov,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_lb);

  /* UnitDelay: '<S147>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_m =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_j;

  /* RelationalOperator: '<S361>/Compare' incorporates:
   *  Constant: '<S361>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_nts = (PubIfChassisHMI_MDL_B.UnitDelay3_m ==
    false);

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bu = (*rtu_standstill == true);

  /* Logic: '<S147>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_m = (PubIfChassisHMI_MDL_B.Compare_nts &&
    PubIfChassisHMI_MDL_B.Compare_bu);

  /* UnitDelay: '<S147>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_dn =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_lg;

  /* MATLAB Function: '<S147>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.R_Type, PubIfChassisHMI_MDL_B.LogicalOperator8_m,
    PubIfChassisHMI_MDL_B.UnitDelay_dn,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_oq);

  /* RelationalOperator: '<S155>/Compare' incorporates:
   *  Constant: '<S155>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_k = (rtu_RFM_LINE_L2->bIsLineExist > ((uint8_T)
    1U));

  /* RelationalOperator: '<S163>/Compare' incorporates:
   *  Constant: '<S163>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_au = (PubIfChassisHMI_MDL_B.bIsLineExist_c <
    ((uint8_T)2U));

  /* Logic: '<S95>/Logical Operator29' */
  PubIfChassisHMI_MDL_B.LogicalOperator29_p = (PubIfChassisHMI_MDL_B.Compare_k &&
    PubIfChassisHMI_MDL_B.Compare_au);

  /* SignalConversion generated from: '<S1>/Bus Selector13' */
  PubIfChassisHMI_MDL_B.dC0V_jvmz = rtu_RFM_LINE_L2->dC0V;

  /* Sum: '<S95>/Add1' */
  PubIfChassisHMI_MDL_B.Add1_o = PubIfChassisHMI_MDL_B.dC0V_jvmz -
    PubIfChassisHMI_MDL_B.dC0V_j;

  /* RelationalOperator: '<S171>/Compare' incorporates:
   *  Constant: '<S171>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bh = (PubIfChassisHMI_MDL_B.Add1_o < 0.0F);

  /* RelationalOperator: '<S161>/Compare' incorporates:
   *  Constant: '<S161>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_hn = (rtu_RFM_LINE_L2->bIsLineExist > ((uint8_T)
    1U));

  /* RelationalOperator: '<S164>/Compare' incorporates:
   *  Constant: '<S164>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_iw = (PubIfChassisHMI_MDL_B.bIsLineExist_c >
    ((uint8_T)1U));

  /* Logic: '<S95>/Logical Operator24' */
  PubIfChassisHMI_MDL_B.LogicalOperator24_c = (PubIfChassisHMI_MDL_B.Compare_bh &&
    PubIfChassisHMI_MDL_B.Compare_hn && PubIfChassisHMI_MDL_B.Compare_iw);

  /* Logic: '<S95>/Logical Operator25' */
  PubIfChassisHMI_MDL_B.LogicalOperator25_l =
    (PubIfChassisHMI_MDL_B.LogicalOperator29_p ||
     PubIfChassisHMI_MDL_B.LogicalOperator24_c);

  /* DataTypeConversion: '<S95>/Data Type Conversion' */
  PubIfChassisHMI_MDL_B.DataTypeConversion_c =
    PubIfChassisHMI_MDL_B.LogicalOperator25_l;

  /* RelationalOperator: '<S154>/Compare' incorporates:
   *  Constant: '<S154>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ita = (rtu_RFM_LINE_L2->bIsLineExist < ((uint8_T)
    2U));

  /* RelationalOperator: '<S159>/Compare' incorporates:
   *  Constant: '<S159>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_dw = (PubIfChassisHMI_MDL_B.bIsLineExist_c >
    ((uint8_T)1U));

  /* Logic: '<S95>/Logical Operator28' */
  PubIfChassisHMI_MDL_B.LogicalOperator28_o = (PubIfChassisHMI_MDL_B.Compare_ita
    && PubIfChassisHMI_MDL_B.Compare_dw);

  /* Sum: '<S95>/Add4' */
  PubIfChassisHMI_MDL_B.Add4_e = PubIfChassisHMI_MDL_B.dC0V_jvmz -
    PubIfChassisHMI_MDL_B.dC0V_j;

  /* RelationalOperator: '<S170>/Compare' incorporates:
   *  Constant: '<S170>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_lu = (PubIfChassisHMI_MDL_B.Add4_e >= 0.0F);

  /* RelationalOperator: '<S165>/Compare' incorporates:
   *  Constant: '<S165>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bc = (rtu_RFM_LINE_L2->bIsLineExist > ((uint8_T)
    1U));

  /* RelationalOperator: '<S166>/Compare' incorporates:
   *  Constant: '<S166>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jy = (PubIfChassisHMI_MDL_B.bIsLineExist_c >
    ((uint8_T)1U));

  /* Logic: '<S95>/Logical Operator30' */
  PubIfChassisHMI_MDL_B.LogicalOperator30_a = (PubIfChassisHMI_MDL_B.Compare_lu &&
    PubIfChassisHMI_MDL_B.Compare_bc && PubIfChassisHMI_MDL_B.Compare_jy);

  /* Logic: '<S95>/Logical Operator27' */
  PubIfChassisHMI_MDL_B.LogicalOperator27_p =
    (PubIfChassisHMI_MDL_B.LogicalOperator28_o ||
     PubIfChassisHMI_MDL_B.LogicalOperator30_a);

  /* DataTypeConversion: '<S95>/Data Type Conversion5' */
  PubIfChassisHMI_MDL_B.DataTypeConversion5_b =
    PubIfChassisHMI_MDL_B.LogicalOperator27_p;

  /* LookupNDDirect: '<S8>/Direct Lookup Table (n-D)4'
   *
   * About '<S8>/Direct Lookup Table (n-D)4':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = rtu_RFM_LINE_L2->eLineType;
  if (u0 >= 20) {
    u0 = 20U;
  }

  q0 = u0;

  /* LookupNDDirect: '<S8>/Direct Lookup Table (n-D)4'
   *
   * About '<S8>/Direct Lookup Table (n-D)4':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  PubIfChassisHMI_MDL_B.DirectLookupTablenD4_n =
    rtCP_DirectLookupTablenD4_table_b[q0];

  /* UnitDelay: '<S152>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_b =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bs;

  /* RelationalOperator: '<S376>/Compare' incorporates:
   *  Constant: '<S376>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ap = (PubIfChassisHMI_MDL_B.UnitDelay3_b ==
    false);

  /* RelationalOperator: '<S375>/Compare' incorporates:
   *  Constant: '<S375>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_c = (*rtu_standstill == true);

  /* Logic: '<S152>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_a = (PubIfChassisHMI_MDL_B.Compare_ap &&
    PubIfChassisHMI_MDL_B.Compare_c);

  /* UnitDelay: '<S152>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_fi =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_l4;

  /* MATLAB Function: '<S152>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.DirectLookupTablenD4_n,
    PubIfChassisHMI_MDL_B.LogicalOperator8_a, PubIfChassisHMI_MDL_B.UnitDelay_fi,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mn);

  /* If: '<S95>/If' */
  if (PubIfChassisHMI_MDL_B.DataTypeConversion_c > 0.0) {
    /* Outputs for IfAction SubSystem: '<S95>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S174>/Action Port'
     */
    /* Merge generated from: '<S95>/Merge' incorporates:
     *  SignalConversion generated from: '<S174>/Out1'
     */
    PubIfChassisHMI_MDL_B.A0_i = PubIfChassisHMI_MDL_B.dC0V_jvmz;

    /* Merge generated from: '<S95>/Merge' incorporates:
     *  SignalConversion generated from: '<S174>/Out1'
     */
    PubIfChassisHMI_MDL_B.Type_m =
      PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mn.out;

    /* End of Outputs for SubSystem: '<S95>/Switch Case Action Subsystem' */
  } else if (PubIfChassisHMI_MDL_B.DataTypeConversion5_b > 0.0) {
    /* Outputs for IfAction SubSystem: '<S95>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S175>/Action Port'
     */
    PubIfChassisHMI_MDL_SwitchCaseActionSubsystem1(PubIfChassisHMI_MDL_B.dC0V_j,
      &PubIfChassisHMI_MDL_B.A0_i, &PubIfChassisHMI_MDL_B.Type_m);

    /* End of Outputs for SubSystem: '<S95>/Switch Case Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S95>/Switch Case Action Subsystem4' incorporates:
     *  ActionPort: '<S178>/Action Port'
     */
    PubIfChassisHMI_MDL_SwitchCaseActionSubsystem4(&PubIfChassisHMI_MDL_B.A0_i,
      &PubIfChassisHMI_MDL_B.Type_m);

    /* End of Outputs for SubSystem: '<S95>/Switch Case Action Subsystem4' */
  }

  /* End of If: '<S95>/If' */

  /* UnitDelay: '<S100>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_jx =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_f;

  /* RelationalOperator: '<S220>/Compare' incorporates:
   *  Constant: '<S220>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_kx = (PubIfChassisHMI_MDL_B.UnitDelay3_jx ==
    false);

  /* RelationalOperator: '<S219>/Compare' incorporates:
   *  Constant: '<S219>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ph = (*rtu_standstill == true);

  /* Logic: '<S100>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_p = (PubIfChassisHMI_MDL_B.Compare_kx &&
    PubIfChassisHMI_MDL_B.Compare_ph);

  /* UnitDelay: '<S100>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_l5 =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n2;

  /* MATLAB Function: '<S100>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.Type_m, PubIfChassisHMI_MDL_B.LogicalOperator8_p,
    PubIfChassisHMI_MDL_B.UnitDelay_l5,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m);

  /* RelationalOperator: '<S167>/Compare' incorporates:
   *  Constant: '<S167>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_d2 = (rtu_RFM_LINE_R2->bIsLineExist > ((uint8_T)
    1U));

  /* RelationalOperator: '<S160>/Compare' incorporates:
   *  Constant: '<S160>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pi = (PubIfChassisHMI_MDL_B.bIsLineExist_ckl <
    ((uint8_T)2U));

  /* Logic: '<S95>/Logical Operator35' */
  PubIfChassisHMI_MDL_B.LogicalOperator35_k = (PubIfChassisHMI_MDL_B.Compare_d2 &&
    PubIfChassisHMI_MDL_B.Compare_pi);

  /* SignalConversion generated from: '<S1>/Bus Selector14' */
  PubIfChassisHMI_MDL_B.dC0V_jvmz0 = rtu_RFM_LINE_R2->dC0V;

  /* Sum: '<S95>/Add5' */
  PubIfChassisHMI_MDL_B.Add5_d = PubIfChassisHMI_MDL_B.dC0V_jvmz0 -
    PubIfChassisHMI_MDL_B.dC0V_jvm;

  /* RelationalOperator: '<S173>/Compare' incorporates:
   *  Constant: '<S173>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bo = (PubIfChassisHMI_MDL_B.Add5_d > 0.0F);

  /* RelationalOperator: '<S168>/Compare' incorporates:
   *  Constant: '<S168>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pk = (rtu_RFM_LINE_R2->bIsLineExist > ((uint8_T)
    1U));

  /* RelationalOperator: '<S169>/Compare' incorporates:
   *  Constant: '<S169>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_lh = (PubIfChassisHMI_MDL_B.bIsLineExist_ckl >
    ((uint8_T)1U));

  /* Logic: '<S95>/Logical Operator31' */
  PubIfChassisHMI_MDL_B.LogicalOperator31_k = (PubIfChassisHMI_MDL_B.Compare_bo &&
    PubIfChassisHMI_MDL_B.Compare_pk && PubIfChassisHMI_MDL_B.Compare_lh);

  /* Logic: '<S95>/Logical Operator32' */
  PubIfChassisHMI_MDL_B.LogicalOperator32_l =
    (PubIfChassisHMI_MDL_B.LogicalOperator35_k ||
     PubIfChassisHMI_MDL_B.LogicalOperator31_k);

  /* DataTypeConversion: '<S95>/Data Type Conversion6' */
  PubIfChassisHMI_MDL_B.DataTypeConversion6_c =
    PubIfChassisHMI_MDL_B.LogicalOperator32_l;

  /* RelationalOperator: '<S162>/Compare' incorporates:
   *  Constant: '<S162>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_e4q = (rtu_RFM_LINE_R2->bIsLineExist < ((uint8_T)
    2U));

  /* RelationalOperator: '<S156>/Compare' incorporates:
   *  Constant: '<S156>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_l3 = (PubIfChassisHMI_MDL_B.bIsLineExist_ckl >
    ((uint8_T)1U));

  /* Logic: '<S95>/Logical Operator34' */
  PubIfChassisHMI_MDL_B.LogicalOperator34_p = (PubIfChassisHMI_MDL_B.Compare_e4q
    && PubIfChassisHMI_MDL_B.Compare_l3);

  /* Sum: '<S95>/Add6' */
  PubIfChassisHMI_MDL_B.Add6_f = PubIfChassisHMI_MDL_B.dC0V_jvmz0 -
    PubIfChassisHMI_MDL_B.dC0V_jvm;

  /* RelationalOperator: '<S172>/Compare' incorporates:
   *  Constant: '<S172>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pr = (PubIfChassisHMI_MDL_B.Add6_f <= 0.0F);

  /* RelationalOperator: '<S157>/Compare' incorporates:
   *  Constant: '<S157>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ht = (rtu_RFM_LINE_L2->bIsLineExist > ((uint8_T)
    1U));

  /* RelationalOperator: '<S158>/Compare' incorporates:
   *  Constant: '<S158>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ou = (PubIfChassisHMI_MDL_B.bIsLineExist_c >
    ((uint8_T)1U));

  /* Logic: '<S95>/Logical Operator36' */
  PubIfChassisHMI_MDL_B.LogicalOperator36_l = (PubIfChassisHMI_MDL_B.Compare_pr &&
    PubIfChassisHMI_MDL_B.Compare_ht && PubIfChassisHMI_MDL_B.Compare_ou);

  /* Logic: '<S95>/Logical Operator33' */
  PubIfChassisHMI_MDL_B.LogicalOperator33_k =
    (PubIfChassisHMI_MDL_B.LogicalOperator34_p ||
     PubIfChassisHMI_MDL_B.LogicalOperator36_l);

  /* DataTypeConversion: '<S95>/Data Type Conversion7' */
  PubIfChassisHMI_MDL_B.DataTypeConversion7_d =
    PubIfChassisHMI_MDL_B.LogicalOperator33_k;

  /* LookupNDDirect: '<S8>/Direct Lookup Table (n-D)1'
   *
   * About '<S8>/Direct Lookup Table (n-D)1':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  u0 = rtu_RFM_LINE_R2->eLineType;
  if (u0 >= 20) {
    u0 = 20U;
  }

  q0 = u0;

  /* LookupNDDirect: '<S8>/Direct Lookup Table (n-D)1'
   *
   * About '<S8>/Direct Lookup Table (n-D)1':
   *  1-dimensional Direct Look-Up returning a Scalar,
   *
   *     Remove protection against out-of-range input in generated code: 'off'
   */
  PubIfChassisHMI_MDL_B.DirectLookupTablenD1_e =
    rtCP_DirectLookupTablenD1_table_c[q0];

  /* UnitDelay: '<S97>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_f =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_h2;

  /* RelationalOperator: '<S211>/Compare' incorporates:
   *  Constant: '<S211>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ly = (PubIfChassisHMI_MDL_B.UnitDelay3_f ==
    false);

  /* RelationalOperator: '<S210>/Compare' incorporates:
   *  Constant: '<S210>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_eo = (*rtu_standstill == true);

  /* Logic: '<S97>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_g = (PubIfChassisHMI_MDL_B.Compare_ly &&
    PubIfChassisHMI_MDL_B.Compare_eo);

  /* UnitDelay: '<S97>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_m4 =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o1;

  /* MATLAB Function: '<S97>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.DirectLookupTablenD1_e,
    PubIfChassisHMI_MDL_B.LogicalOperator8_g, PubIfChassisHMI_MDL_B.UnitDelay_m4,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e);

  /* If: '<S95>/If1' */
  if (PubIfChassisHMI_MDL_B.DataTypeConversion6_c > 0.0) {
    /* Outputs for IfAction SubSystem: '<S95>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S176>/Action Port'
     */
    /* Merge generated from: '<S95>/Merge1' incorporates:
     *  SignalConversion generated from: '<S176>/Out1'
     */
    PubIfChassisHMI_MDL_B.A0_f = PubIfChassisHMI_MDL_B.dC0V_jvmz0;

    /* Merge generated from: '<S95>/Merge1' incorporates:
     *  SignalConversion generated from: '<S176>/Out1'
     */
    PubIfChassisHMI_MDL_B.Type_d =
      PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e.out;

    /* End of Outputs for SubSystem: '<S95>/Switch Case Action Subsystem2' */
  } else if (PubIfChassisHMI_MDL_B.DataTypeConversion7_d > 0.0) {
    /* Outputs for IfAction SubSystem: '<S95>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S177>/Action Port'
     */
    PubIfChassisHMI_MDL_SwitchCaseActionSubsystem1
      (PubIfChassisHMI_MDL_B.dC0V_jvm, &PubIfChassisHMI_MDL_B.A0_f,
       &PubIfChassisHMI_MDL_B.Type_d);

    /* End of Outputs for SubSystem: '<S95>/Switch Case Action Subsystem3' */
  } else {
    /* Outputs for IfAction SubSystem: '<S95>/Switch Case Action Subsystem5' incorporates:
     *  ActionPort: '<S179>/Action Port'
     */
    PubIfChassisHMI_MDL_SwitchCaseActionSubsystem4(&PubIfChassisHMI_MDL_B.A0_f,
      &PubIfChassisHMI_MDL_B.Type_d);

    /* End of Outputs for SubSystem: '<S95>/Switch Case Action Subsystem5' */
  }

  /* End of If: '<S95>/If1' */

  /* UnitDelay: '<S101>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_it =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cd;

  /* RelationalOperator: '<S223>/Compare' incorporates:
   *  Constant: '<S223>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_hl = (PubIfChassisHMI_MDL_B.UnitDelay3_it ==
    false);

  /* RelationalOperator: '<S222>/Compare' incorporates:
   *  Constant: '<S222>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_kg = (*rtu_standstill == true);

  /* Logic: '<S101>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_e = (PubIfChassisHMI_MDL_B.Compare_hl &&
    PubIfChassisHMI_MDL_B.Compare_kg);

  /* UnitDelay: '<S101>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_g = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ow;

  /* MATLAB Function: '<S101>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.Type_d, PubIfChassisHMI_MDL_B.LogicalOperator8_e,
    PubIfChassisHMI_MDL_B.UnitDelay_g,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_p);

  /* MATLAB Function: '<S8>/MATLAB Function10' */
  if ((PubIfChassisHMI_MDL_B.L_Valid > 1) && (PubIfChassisHMI_MDL_B.R_Valid > 1))
  {
    PubIfChassisHMI_MDL_B.y = 3.0;
  } else if ((PubIfChassisHMI_MDL_B.L_Valid > 1) &&
             (PubIfChassisHMI_MDL_B.R_Valid < 2)) {
    PubIfChassisHMI_MDL_B.y = 1.0;
  } else if ((PubIfChassisHMI_MDL_B.L_Valid < 2) &&
             (PubIfChassisHMI_MDL_B.R_Valid > 1)) {
    PubIfChassisHMI_MDL_B.y = 2.0;
  } else {
    PubIfChassisHMI_MDL_B.y = 0.0;
  }

  /* End of MATLAB Function: '<S8>/MATLAB Function10' */

  /* Gain: '<S8>/Gain25' */
  PubIfChassisHMI_MDL_B.Gain25 = 2.0F * PubIfChassisHMI_MDL_B.L_A2;

  /* Gain: '<S8>/Gain26' */
  PubIfChassisHMI_MDL_B.Gain26 = 2.0F * PubIfChassisHMI_MDL_B.R_A2;

  /* Sum: '<S8>/Subtract' */
  PubIfChassisHMI_MDL_B.Subtract = PubIfChassisHMI_MDL_B.Gain25 +
    PubIfChassisHMI_MDL_B.Gain26;

  /* Product: '<S8>/Divide2' incorporates:
   *  Constant: '<S8>/Constant18'
   */
  PubIfChassisHMI_MDL_B.Divide2 = PubIfChassisHMI_MDL_B.Subtract / 2.0F;

  /* MultiPortSwitch: '<S8>/Multiport Switch' */
  switch ((int32_T)PubIfChassisHMI_MDL_B.y) {
   case 1:
    /* MultiPortSwitch: '<S8>/Multiport Switch' */
    PubIfChassisHMI_MDL_B.MultiportSwitch = PubIfChassisHMI_MDL_B.Gain25;
    break;

   case 2:
    /* MultiPortSwitch: '<S8>/Multiport Switch' */
    PubIfChassisHMI_MDL_B.MultiportSwitch = PubIfChassisHMI_MDL_B.Gain26;
    break;

   case 3:
    /* MultiPortSwitch: '<S8>/Multiport Switch' */
    PubIfChassisHMI_MDL_B.MultiportSwitch = PubIfChassisHMI_MDL_B.Divide2;
    break;

   default:
    /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
     *  Constant: '<S8>/Constant1'
     */
    PubIfChassisHMI_MDL_B.MultiportSwitch = 0.0F;
    break;
  }

  /* End of MultiPortSwitch: '<S8>/Multiport Switch' */

  /* UnitDelay: '<S143>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_g4 =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fx;

  /* RelationalOperator: '<S349>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ho = (PubIfChassisHMI_MDL_B.UnitDelay3_g4 ==
    false);

  /* RelationalOperator: '<S348>/Compare' incorporates:
   *  Constant: '<S348>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_lhn = (*rtu_standstill == true);

  /* Logic: '<S143>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_ab = (PubIfChassisHMI_MDL_B.Compare_ho &&
    PubIfChassisHMI_MDL_B.Compare_lhn);

  /* UnitDelay: '<S143>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_m = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_i;

  /* MATLAB Function: '<S143>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.MultiportSwitch,
    PubIfChassisHMI_MDL_B.LogicalOperator8_ab, PubIfChassisHMI_MDL_B.UnitDelay_m,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_i3);

  /* Gain: '<S8>/Gain29' */
  PubIfChassisHMI_MDL_B.Gain29 = (-1.0F) * PubIfChassisHMI_MDL_B.L_A0;

  /* UnitDelay: '<S144>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_hw =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_c4;

  /* RelationalOperator: '<S352>/Compare' incorporates:
   *  Constant: '<S352>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_br = (PubIfChassisHMI_MDL_B.UnitDelay3_hw ==
    false);

  /* RelationalOperator: '<S351>/Compare' incorporates:
   *  Constant: '<S351>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ek = (*rtu_standstill == true);

  /* Logic: '<S144>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_eq = (PubIfChassisHMI_MDL_B.Compare_br &&
    PubIfChassisHMI_MDL_B.Compare_ek);

  /* UnitDelay: '<S144>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_p = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_b;

  /* MATLAB Function: '<S144>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain29, PubIfChassisHMI_MDL_B.LogicalOperator8_eq,
    PubIfChassisHMI_MDL_B.UnitDelay_p,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_go);

  /* Gain: '<S8>/Gain30' */
  PubIfChassisHMI_MDL_B.Gain30 = (-1.0F) * PubIfChassisHMI_MDL_B.R_A0;

  /* UnitDelay: '<S145>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_m5 =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kq;

  /* RelationalOperator: '<S355>/Compare' incorporates:
   *  Constant: '<S355>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_oh = (PubIfChassisHMI_MDL_B.UnitDelay3_m5 ==
    false);

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_dd = (*rtu_standstill == true);

  /* Logic: '<S145>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_gb = (PubIfChassisHMI_MDL_B.Compare_oh &&
    PubIfChassisHMI_MDL_B.Compare_dd);

  /* UnitDelay: '<S145>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_f = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_il;

  /* MATLAB Function: '<S145>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain30, PubIfChassisHMI_MDL_B.LogicalOperator8_gb,
    PubIfChassisHMI_MDL_B.UnitDelay_f,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_k3);

  /* Gain: '<S8>/Gain31' */
  PubIfChassisHMI_MDL_B.Gain31 = (-1.0F) * PubIfChassisHMI_MDL_B.A0_i;

  /* UnitDelay: '<S102>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_pz =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hi;

  /* RelationalOperator: '<S226>/Compare' incorporates:
   *  Constant: '<S226>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_n0 = (PubIfChassisHMI_MDL_B.UnitDelay3_pz ==
    false);

  /* RelationalOperator: '<S225>/Compare' incorporates:
   *  Constant: '<S225>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_j2 = (*rtu_standstill == true);

  /* Logic: '<S102>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_c = (PubIfChassisHMI_MDL_B.Compare_n0 &&
    PubIfChassisHMI_MDL_B.Compare_j2);

  /* UnitDelay: '<S102>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_k = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_m;

  /* MATLAB Function: '<S102>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain31, PubIfChassisHMI_MDL_B.LogicalOperator8_c,
    PubIfChassisHMI_MDL_B.UnitDelay_k,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ip);

  /* Gain: '<S8>/Gain32' */
  PubIfChassisHMI_MDL_B.Gain32 = (-1.0F) * PubIfChassisHMI_MDL_B.A0_f;

  /* UnitDelay: '<S103>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_pc =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_e;

  /* RelationalOperator: '<S229>/Compare' incorporates:
   *  Constant: '<S229>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_o1 = (PubIfChassisHMI_MDL_B.UnitDelay3_pc ==
    false);

  /* RelationalOperator: '<S228>/Compare' incorporates:
   *  Constant: '<S228>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jk = (*rtu_standstill == true);

  /* Logic: '<S103>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_h = (PubIfChassisHMI_MDL_B.Compare_o1 &&
    PubIfChassisHMI_MDL_B.Compare_jk);

  /* UnitDelay: '<S103>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_c = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_j;

  /* MATLAB Function: '<S103>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain32, PubIfChassisHMI_MDL_B.LogicalOperator8_h,
    PubIfChassisHMI_MDL_B.UnitDelay_c,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ky);

  /* MATLAB Function: '<S8>/MATLAB Function9' */
  PubIfChassisHMI_MDL_MATLABFunction7(&rtu_VSM_HMI->AESSts, rty_HMI_AESErrSts,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction9_i);

  /* MATLAB Function: '<S8>/MATLAB Function7' */
  PubIfChassisHMI_MDL_MATLABFunction7(&rtu_VSM_HMI->ESSSts, rty_HMI_ESSErrSts,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction7_e);

  /* MATLAB Function: '<S8>/MATLAB Function12' */
  rty_HMI_IFC_FD2->ELKActSts = 0U;
  if ((rtu_VSM_HMI->ELKSts == 3) || (rtu_VSM_HMI->ELKSts == 5) ||
      (rtu_VSM_HMI->ELKSts == 7)) {
    rty_HMI_IFC_FD2->ELKActSts = 1U;
  } else {
    if ((rtu_VSM_HMI->ELKSts == 4) || (rtu_VSM_HMI->ELKSts == 6) ||
        (rtu_VSM_HMI->ELKSts == 8)) {
      rty_HMI_IFC_FD2->ELKActSts = 2U;
    }
  }

  /* End of MATLAB Function: '<S8>/MATLAB Function12' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  if (PubIfChassisHMI_MDL_B.RelationalOperator_m) {
    rty_HMI_IFC_FD2->IFC_Handsoffwarn = ((uint8_T)0U);
  } else {
    rty_HMI_IFC_FD2->IFC_Handsoffwarn = PubIfChassisHMI_MDL_B.Switch_p;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* BusCreator generated from: '<Root>/HMI_IFC_FD2' */
  rty_HMI_IFC_FD2->LSSIntervention = PubIfChassisHMI_MDL_B.LSSIntervention;
  rty_HMI_IFC_FD2->LaneAvailability = rtu_VSM_HMI->LaneAvailability;
  rty_HMI_IFC_FD2->LDW_LKA_Snvty = rtu_HMI_VCAN_HUT->IFC_SnvtySet;
  rty_HMI_IFC_FD2->IFCCalibrationSts = rtu_DMON_SENS_ERR->FCam_CalibrationSts;
  rty_HMI_IFC_FD2->TJA_FollowSts = rtu_VSM_HMI->TJA_FollowSts;
  rty_HMI_IFC_FD2->IFC_LeLaneTyp =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_lb.out;
  rty_HMI_IFC_FD2->IFC_RiLaneTyp =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_oq.out;
  rty_HMI_IFC_FD2->IFC_NextLeLaneTyp =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m.out;
  rty_HMI_IFC_FD2->IFC_NextRiLaneTyp =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_p.out;
  rty_HMI_IFC_FD2->IFC_LaneCurve =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_i3.out;
  rty_HMI_IFC_FD2->IFC_LeLane_dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_go.out;
  rty_HMI_IFC_FD2->IFC_RiLane_dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_k3.out;
  rty_HMI_IFC_FD2->IFC_NextLeLane_dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ip.out;
  rty_HMI_IFC_FD2->IFC_NextRiLane_dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ky.out;
  rty_HMI_IFC_FD2->AESintervention =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction9_i.Intervention;
  rty_HMI_IFC_FD2->ESSintervention =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction7_e.Intervention;
  rty_HMI_IFC_FD2->AESSts = PubIfChassisHMI_MDL_B.sf_MATLABFunction9_i.State;
  rty_HMI_IFC_FD2->ESSSts = PubIfChassisHMI_MDL_B.sf_MATLABFunction7_e.State;

  /* DataTypeConversion: '<S7>/Data Type Conversion35' */
  rty_HMI_IFC_FD3->IDC_L2_TurnLightReq = rtu_VSM_HMI->HWA_TurnLightReq;

  /* BusCreator generated from: '<Root>/HMI_IFC_FD3' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  rty_HMI_IFC_FD3->IDC_L2_EmgyLightReq =
    PubIfChassisHMI_MDL_ConstB.IDC_L2_EmgyLightReq;
  rty_HMI_IFC_FD3->IDC_L2_FWiperReq = ((uint8_T)0U);

  /* Gain: '<S8>/Gain' */
  PubIfChassisHMI_MDL_B.Gain_b = (-1.0F) * PubIfChassisHMI_MDL_B.dC0V;

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_nk = (PubIfChassisHMI_MDL_B.bIsLineExist >
    ((uint8_T)1U));

  /* Switch: '<S8>/Switch' */
  if (PubIfChassisHMI_MDL_B.Compare_nk) {
    /* Switch: '<S8>/Switch' */
    PubIfChassisHMI_MDL_B.Switch = PubIfChassisHMI_MDL_B.Gain_b;
  } else {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/Constant2'
     */
    PubIfChassisHMI_MDL_B.Switch = (-1.75F);
  }

  /* End of Switch: '<S8>/Switch' */

  /* UnitDelay: '<S104>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_e =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b4;

  /* RelationalOperator: '<S232>/Compare' incorporates:
   *  Constant: '<S232>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ekf = (PubIfChassisHMI_MDL_B.UnitDelay3_e ==
    false);

  /* RelationalOperator: '<S231>/Compare' incorporates:
   *  Constant: '<S231>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ca = (*rtu_standstill == true);

  /* Logic: '<S104>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_pg = (PubIfChassisHMI_MDL_B.Compare_ekf
    && PubIfChassisHMI_MDL_B.Compare_ca);

  /* UnitDelay: '<S104>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_i = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_a;

  /* MATLAB Function: '<S104>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch, PubIfChassisHMI_MDL_B.LogicalOperator8_pg,
    PubIfChassisHMI_MDL_B.UnitDelay_i,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_kyo);

  /* Gain: '<S8>/Gain23' */
  PubIfChassisHMI_MDL_B.Gain23 = (-2.0F) * PubIfChassisHMI_MDL_B.A2_m;

  /* UnitDelay: '<S98>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ch =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dc;

  /* RelationalOperator: '<S214>/Compare' incorporates:
   *  Constant: '<S214>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gf = (PubIfChassisHMI_MDL_B.UnitDelay3_ch ==
    false);

  /* RelationalOperator: '<S213>/Compare' incorporates:
   *  Constant: '<S213>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_hvb = (*rtu_standstill == true);

  /* Logic: '<S98>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_j = (PubIfChassisHMI_MDL_B.Compare_gf &&
    PubIfChassisHMI_MDL_B.Compare_hvb);

  /* UnitDelay: '<S98>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_iw = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_k;

  /* MATLAB Function: '<S98>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain23, PubIfChassisHMI_MDL_B.LogicalOperator8_j,
    PubIfChassisHMI_MDL_B.UnitDelay_iw,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_k);

  /* Gain: '<S8>/Gain4' */
  PubIfChassisHMI_MDL_B.Gain4_h = (-6.0F) * PubIfChassisHMI_MDL_B.A3_mm;

  /* UnitDelay: '<S108>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_hp =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ju;

  /* RelationalOperator: '<S244>/Compare' incorporates:
   *  Constant: '<S244>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ei = (PubIfChassisHMI_MDL_B.UnitDelay3_hp ==
    false);

  /* RelationalOperator: '<S243>/Compare' incorporates:
   *  Constant: '<S243>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_n1 = (*rtu_standstill == true);

  /* Logic: '<S108>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_jw = (PubIfChassisHMI_MDL_B.Compare_ei &&
    PubIfChassisHMI_MDL_B.Compare_n1);

  /* UnitDelay: '<S108>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_e = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_d;

  /* MATLAB Function: '<S108>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain4_h, PubIfChassisHMI_MDL_B.LogicalOperator8_jw,
    PubIfChassisHMI_MDL_B.UnitDelay_e,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_g);

  /* MATLAB Function: '<S8>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1(&rtu_RFM_LINE_L1->eLineType,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_i);

  /* UnitDelay: '<S117>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_i0 =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_p;

  /* RelationalOperator: '<S271>/Compare' incorporates:
   *  Constant: '<S271>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ba = (PubIfChassisHMI_MDL_B.UnitDelay3_i0 ==
    false);

  /* RelationalOperator: '<S270>/Compare' incorporates:
   *  Constant: '<S270>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gq = (*rtu_standstill == true);

  /* Logic: '<S117>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_hy = (PubIfChassisHMI_MDL_B.Compare_ba &&
    PubIfChassisHMI_MDL_B.Compare_gq);

  /* UnitDelay: '<S117>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_mp =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h3;

  /* MATLAB Function: '<S117>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_i.Type,
    PubIfChassisHMI_MDL_B.LogicalOperator8_hy,
    PubIfChassisHMI_MDL_B.UnitDelay_mp,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ez);

  /* Gain: '<S8>/Gain1' */
  PubIfChassisHMI_MDL_B.Gain1_b = (-1.0F) * PubIfChassisHMI_MDL_B.dC0V_jv;

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ny = (PubIfChassisHMI_MDL_B.bIsLineExist_ck >
    ((uint8_T)1U));

  /* Switch: '<S8>/Switch1' */
  if (PubIfChassisHMI_MDL_B.Compare_ny) {
    /* Switch: '<S8>/Switch1' */
    PubIfChassisHMI_MDL_B.Switch1 = PubIfChassisHMI_MDL_B.Gain1_b;
  } else {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant3'
     */
    PubIfChassisHMI_MDL_B.Switch1 = 1.75F;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* UnitDelay: '<S105>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_e5 =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cp;

  /* RelationalOperator: '<S235>/Compare' incorporates:
   *  Constant: '<S235>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_cm = (PubIfChassisHMI_MDL_B.UnitDelay3_e5 ==
    false);

  /* RelationalOperator: '<S234>/Compare' incorporates:
   *  Constant: '<S234>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_itu = (*rtu_standstill == true);

  /* Logic: '<S105>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_gp = (PubIfChassisHMI_MDL_B.Compare_cm &&
    PubIfChassisHMI_MDL_B.Compare_itu);

  /* UnitDelay: '<S105>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ep =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_mp;

  /* MATLAB Function: '<S105>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch1, PubIfChassisHMI_MDL_B.LogicalOperator8_gp,
    PubIfChassisHMI_MDL_B.UnitDelay_ep,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_pl);

  /* Gain: '<S8>/Gain22' */
  PubIfChassisHMI_MDL_B.Gain22 = (-2.0F) * PubIfChassisHMI_MDL_B.A2_m;

  /* UnitDelay: '<S99>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_fl =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ml;

  /* RelationalOperator: '<S217>/Compare' incorporates:
   *  Constant: '<S217>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_mk = (PubIfChassisHMI_MDL_B.UnitDelay3_fl ==
    false);

  /* RelationalOperator: '<S216>/Compare' incorporates:
   *  Constant: '<S216>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jq = (*rtu_standstill == true);

  /* Logic: '<S99>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_b = (PubIfChassisHMI_MDL_B.Compare_mk &&
    PubIfChassisHMI_MDL_B.Compare_jq);

  /* UnitDelay: '<S99>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_j = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ai;

  /* MATLAB Function: '<S99>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain22, PubIfChassisHMI_MDL_B.LogicalOperator8_b,
    PubIfChassisHMI_MDL_B.UnitDelay_j,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_a);

  /* Gain: '<S8>/Gain6' */
  PubIfChassisHMI_MDL_B.Gain6_g = (-6.0F) * PubIfChassisHMI_MDL_B.A3_mm;

  /* UnitDelay: '<S110>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_hb =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dv;

  /* RelationalOperator: '<S250>/Compare' incorporates:
   *  Constant: '<S250>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ip = (PubIfChassisHMI_MDL_B.UnitDelay3_hb ==
    false);

  /* RelationalOperator: '<S249>/Compare' incorporates:
   *  Constant: '<S249>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ks = (*rtu_standstill == true);

  /* Logic: '<S110>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_pu = (PubIfChassisHMI_MDL_B.Compare_ip &&
    PubIfChassisHMI_MDL_B.Compare_ks);

  /* UnitDelay: '<S110>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_fr =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bs;

  /* MATLAB Function: '<S110>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain6_g, PubIfChassisHMI_MDL_B.LogicalOperator8_pu,
    PubIfChassisHMI_MDL_B.UnitDelay_fr,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_an);

  /* MATLAB Function: '<S8>/MATLAB Function13' */
  PubIfChassisHMI_MDL_MATLABFunction1(&rtu_RFM_LINE_R1->eLineType,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction13);

  /* UnitDelay: '<S139>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_dm =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fg;

  /* RelationalOperator: '<S337>/Compare' incorporates:
   *  Constant: '<S337>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bul = (PubIfChassisHMI_MDL_B.UnitDelay3_dm ==
    false);

  /* RelationalOperator: '<S336>/Compare' incorporates:
   *  Constant: '<S336>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ka = (*rtu_standstill == true);

  /* Logic: '<S139>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_d = (PubIfChassisHMI_MDL_B.Compare_bul &&
    PubIfChassisHMI_MDL_B.Compare_ka);

  /* UnitDelay: '<S139>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ao =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_e3;

  /* MATLAB Function: '<S139>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.sf_MATLABFunction13.Type,
    PubIfChassisHMI_MDL_B.LogicalOperator8_d, PubIfChassisHMI_MDL_B.UnitDelay_ao,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mb);

  /* Gain: '<S8>/Gain2' */
  PubIfChassisHMI_MDL_B.Gain2_p = (-1.0F) * PubIfChassisHMI_MDL_B.dC0V_jvmz;

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_cr = (rtu_RFM_LINE_L2->bIsLineExist > ((uint8_T)
    1U));

  /* Switch: '<S8>/Switch2' */
  if (PubIfChassisHMI_MDL_B.Compare_cr) {
    /* Switch: '<S8>/Switch2' */
    PubIfChassisHMI_MDL_B.Switch2 = PubIfChassisHMI_MDL_B.Gain2_p;
  } else {
    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/Constant4'
     */
    PubIfChassisHMI_MDL_B.Switch2 = (-5.25F);
  }

  /* End of Switch: '<S8>/Switch2' */

  /* UnitDelay: '<S106>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ix =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_j5;

  /* RelationalOperator: '<S238>/Compare' incorporates:
   *  Constant: '<S238>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bb = (PubIfChassisHMI_MDL_B.UnitDelay3_ix ==
    false);

  /* RelationalOperator: '<S237>/Compare' incorporates:
   *  Constant: '<S237>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pf = (*rtu_standstill == true);

  /* Logic: '<S106>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_bp = (PubIfChassisHMI_MDL_B.Compare_bb &&
    PubIfChassisHMI_MDL_B.Compare_pf);

  /* UnitDelay: '<S106>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_mj = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o;

  /* MATLAB Function: '<S106>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch2, PubIfChassisHMI_MDL_B.LogicalOperator8_bp,
    PubIfChassisHMI_MDL_B.UnitDelay_mj,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e5);

  /* Gain: '<S8>/Gain8' */
  PubIfChassisHMI_MDL_B.Gain8_c = (-2.0F) * PubIfChassisHMI_MDL_B.A2_m;

  /* UnitDelay: '<S112>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ev =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dq;

  /* RelationalOperator: '<S256>/Compare' incorporates:
   *  Constant: '<S256>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_n3 = (PubIfChassisHMI_MDL_B.UnitDelay3_ev ==
    false);

  /* RelationalOperator: '<S255>/Compare' incorporates:
   *  Constant: '<S255>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_i5 = (*rtu_standstill == true);

  /* Logic: '<S112>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_gbf = (PubIfChassisHMI_MDL_B.Compare_n3
    && PubIfChassisHMI_MDL_B.Compare_i5);

  /* UnitDelay: '<S112>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_o = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_p;

  /* MATLAB Function: '<S112>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain8_c, PubIfChassisHMI_MDL_B.LogicalOperator8_gbf,
    PubIfChassisHMI_MDL_B.UnitDelay_o,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_o);

  /* Gain: '<S8>/Gain9' */
  PubIfChassisHMI_MDL_B.Gain9_d = (-6.0F) * PubIfChassisHMI_MDL_B.A3_mm;

  /* UnitDelay: '<S113>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_k4 =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_i;

  /* RelationalOperator: '<S259>/Compare' incorporates:
   *  Constant: '<S259>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_g2 = (PubIfChassisHMI_MDL_B.UnitDelay3_k4 ==
    false);

  /* RelationalOperator: '<S258>/Compare' incorporates:
   *  Constant: '<S258>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_mz = (*rtu_standstill == true);

  /* Logic: '<S113>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_o = (PubIfChassisHMI_MDL_B.Compare_g2 &&
    PubIfChassisHMI_MDL_B.Compare_mz);

  /* UnitDelay: '<S113>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_if =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bk;

  /* MATLAB Function: '<S113>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain9_d, PubIfChassisHMI_MDL_B.LogicalOperator8_o,
    PubIfChassisHMI_MDL_B.UnitDelay_if,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_gi);

  /* MATLAB Function: '<S8>/MATLAB Function4' */
  PubIfChassisHMI_MDL_MATLABFunction1(&rtu_RFM_LINE_L2->eLineType,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction4_i);

  /* UnitDelay: '<S151>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_pe =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_iv;

  /* RelationalOperator: '<S373>/Compare' incorporates:
   *  Constant: '<S373>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gp = (PubIfChassisHMI_MDL_B.UnitDelay3_pe ==
    false);

  /* RelationalOperator: '<S372>/Compare' incorporates:
   *  Constant: '<S372>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bm = (*rtu_standstill == true);

  /* Logic: '<S151>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_bt = (PubIfChassisHMI_MDL_B.Compare_gp &&
    PubIfChassisHMI_MDL_B.Compare_bm);

  /* UnitDelay: '<S151>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_jy =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aw;

  /* MATLAB Function: '<S151>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.sf_MATLABFunction4_i.Type,
    PubIfChassisHMI_MDL_B.LogicalOperator8_bt,
    PubIfChassisHMI_MDL_B.UnitDelay_jy,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m1);

  /* Gain: '<S8>/Gain3' */
  PubIfChassisHMI_MDL_B.Gain3_d = (-1.0F) * PubIfChassisHMI_MDL_B.dC0V_jvmz0;

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ce = (rtu_RFM_LINE_R2->bIsLineExist > ((uint8_T)
    1U));

  /* Switch: '<S8>/Switch3' */
  if (PubIfChassisHMI_MDL_B.Compare_ce) {
    /* Switch: '<S8>/Switch3' */
    PubIfChassisHMI_MDL_B.Switch3 = PubIfChassisHMI_MDL_B.Gain3_d;
  } else {
    /* Switch: '<S8>/Switch3' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    PubIfChassisHMI_MDL_B.Switch3 = 5.25F;
  }

  /* End of Switch: '<S8>/Switch3' */

  /* UnitDelay: '<S107>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_fi =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_n;

  /* RelationalOperator: '<S241>/Compare' incorporates:
   *  Constant: '<S241>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gmc = (PubIfChassisHMI_MDL_B.UnitDelay3_fi ==
    false);

  /* RelationalOperator: '<S240>/Compare' incorporates:
   *  Constant: '<S240>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_l5 = (*rtu_standstill == true);

  /* Logic: '<S107>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_ac = (PubIfChassisHMI_MDL_B.Compare_gmc
    && PubIfChassisHMI_MDL_B.Compare_l5);

  /* UnitDelay: '<S107>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_h = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_b2;

  /* MATLAB Function: '<S107>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch3, PubIfChassisHMI_MDL_B.LogicalOperator8_ac,
    PubIfChassisHMI_MDL_B.UnitDelay_h,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_l);

  /* Gain: '<S8>/Gain11' */
  PubIfChassisHMI_MDL_B.Gain11_m = (-2.0F) * PubIfChassisHMI_MDL_B.A2_m;

  /* UnitDelay: '<S116>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_hd =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bv;

  /* RelationalOperator: '<S268>/Compare' incorporates:
   *  Constant: '<S268>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jd = (PubIfChassisHMI_MDL_B.UnitDelay3_hd ==
    false);

  /* RelationalOperator: '<S267>/Compare' incorporates:
   *  Constant: '<S267>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_k0 = (*rtu_standstill == true);

  /* Logic: '<S116>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_hk = (PubIfChassisHMI_MDL_B.Compare_jd &&
    PubIfChassisHMI_MDL_B.Compare_k0);

  /* UnitDelay: '<S116>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ez =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dv;

  /* MATLAB Function: '<S116>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain11_m, PubIfChassisHMI_MDL_B.LogicalOperator8_hk,
    PubIfChassisHMI_MDL_B.UnitDelay_ez,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ok);

  /* Gain: '<S8>/Gain12' */
  PubIfChassisHMI_MDL_B.Gain12 = (-6.0F) * PubIfChassisHMI_MDL_B.A3_mm;

  /* UnitDelay: '<S115>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_is =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_gg;

  /* RelationalOperator: '<S265>/Compare' incorporates:
   *  Constant: '<S265>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bmx = (PubIfChassisHMI_MDL_B.UnitDelay3_is ==
    false);

  /* RelationalOperator: '<S264>/Compare' incorporates:
   *  Constant: '<S264>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_co = (*rtu_standstill == true);

  /* Logic: '<S115>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_ix = (PubIfChassisHMI_MDL_B.Compare_bmx
    && PubIfChassisHMI_MDL_B.Compare_co);

  /* UnitDelay: '<S115>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_f4 =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ih;

  /* MATLAB Function: '<S115>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain12, PubIfChassisHMI_MDL_B.LogicalOperator8_ix,
    PubIfChassisHMI_MDL_B.UnitDelay_f4,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_kj);

  /* MATLAB Function: '<S8>/MATLAB Function5' */
  PubIfChassisHMI_MDL_MATLABFunction1(&rtu_RFM_LINE_R2->eLineType,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction5_b);

  /* UnitDelay: '<S153>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_kp =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hy;

  /* RelationalOperator: '<S379>/Compare' incorporates:
   *  Constant: '<S379>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_n2 = (PubIfChassisHMI_MDL_B.UnitDelay3_kp ==
    false);

  /* RelationalOperator: '<S378>/Compare' incorporates:
   *  Constant: '<S378>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_mm = (*rtu_standstill == true);

  /* Logic: '<S153>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_et = (PubIfChassisHMI_MDL_B.Compare_n2 &&
    PubIfChassisHMI_MDL_B.Compare_mm);

  /* UnitDelay: '<S153>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_kp =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n4;

  /* MATLAB Function: '<S153>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill,
    PubIfChassisHMI_MDL_B.sf_MATLABFunction5_b.Type,
    PubIfChassisHMI_MDL_B.LogicalOperator8_et,
    PubIfChassisHMI_MDL_B.UnitDelay_kp,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_p1);

  /* Gain: '<S8>/Gain14' */
  PubIfChassisHMI_MDL_B.Gain14 = (-1.0F) * PubIfChassisHMI_MDL_B.dC0V_j;

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_how = (PubIfChassisHMI_MDL_B.bIsLineExist_c >
    ((uint8_T)1U));

  /* Switch: '<S8>/Switch6' */
  if (PubIfChassisHMI_MDL_B.Compare_how) {
    /* Switch: '<S8>/Switch6' */
    PubIfChassisHMI_MDL_B.Switch6 = PubIfChassisHMI_MDL_B.Gain14;
  } else {
    /* Switch: '<S8>/Switch6' incorporates:
     *  Constant: '<S8>/Constant8'
     */
    PubIfChassisHMI_MDL_B.Switch6 = (-5.25F);
  }

  /* End of Switch: '<S8>/Switch6' */

  /* UnitDelay: '<S119>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_po =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_nq;

  /* RelationalOperator: '<S277>/Compare' incorporates:
   *  Constant: '<S277>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bcz = (PubIfChassisHMI_MDL_B.UnitDelay3_po ==
    false);

  /* RelationalOperator: '<S276>/Compare' incorporates:
   *  Constant: '<S276>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_p0 = (*rtu_standstill == true);

  /* Logic: '<S119>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_ik = (PubIfChassisHMI_MDL_B.Compare_bcz
    && PubIfChassisHMI_MDL_B.Compare_p0);

  /* UnitDelay: '<S119>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_hj = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_g;

  /* MATLAB Function: '<S119>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch6, PubIfChassisHMI_MDL_B.LogicalOperator8_ik,
    PubIfChassisHMI_MDL_B.UnitDelay_hj,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_pi);

  /* Logic: '<S8>/Logical Operator' */
  PubIfChassisHMI_MDL_B.LogicalOperator_b = !PubIfChassisHMI_MDL_B.Compare_how;

  /* Gain: '<S8>/Gain16' */
  PubIfChassisHMI_MDL_B.Gain16 = (-2.0F) * PubIfChassisHMI_MDL_B.A2_m;

  /* Switch: '<S8>/Switch4' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator_b) {
    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S8>/Constant6'
     */
    PubIfChassisHMI_MDL_B.Switch4_g = 0.0F;
  } else {
    /* Switch: '<S8>/Switch4' */
    PubIfChassisHMI_MDL_B.Switch4_g = PubIfChassisHMI_MDL_B.Gain16;
  }

  /* End of Switch: '<S8>/Switch4' */

  /* UnitDelay: '<S120>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_mw =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_jm;

  /* RelationalOperator: '<S280>/Compare' incorporates:
   *  Constant: '<S280>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gr = (PubIfChassisHMI_MDL_B.UnitDelay3_mw ==
    false);

  /* RelationalOperator: '<S279>/Compare' incorporates:
   *  Constant: '<S279>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_cp = (*rtu_standstill == true);

  /* Logic: '<S120>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_iw = (PubIfChassisHMI_MDL_B.Compare_gr &&
    PubIfChassisHMI_MDL_B.Compare_cp);

  /* UnitDelay: '<S120>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_mjl =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aa;

  /* MATLAB Function: '<S120>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch4_g, PubIfChassisHMI_MDL_B.LogicalOperator8_iw,
    PubIfChassisHMI_MDL_B.UnitDelay_mjl,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e3);

  /* Logic: '<S8>/Logical Operator2' */
  PubIfChassisHMI_MDL_B.LogicalOperator2 = !PubIfChassisHMI_MDL_B.Compare_how;

  /* Gain: '<S8>/Gain17' */
  PubIfChassisHMI_MDL_B.Gain17 = (-6.0F) * PubIfChassisHMI_MDL_B.A3_mm;

  /* Switch: '<S8>/Switch14' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator2) {
    /* Switch: '<S8>/Switch14' incorporates:
     *  Constant: '<S8>/Constant10'
     */
    PubIfChassisHMI_MDL_B.Switch14 = 0.0F;
  } else {
    /* Switch: '<S8>/Switch14' */
    PubIfChassisHMI_MDL_B.Switch14 = PubIfChassisHMI_MDL_B.Gain17;
  }

  /* End of Switch: '<S8>/Switch14' */

  /* UnitDelay: '<S122>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_gw =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bu;

  /* RelationalOperator: '<S286>/Compare' incorporates:
   *  Constant: '<S286>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_mc = (PubIfChassisHMI_MDL_B.UnitDelay3_gw ==
    false);

  /* RelationalOperator: '<S285>/Compare' incorporates:
   *  Constant: '<S285>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_fs = (*rtu_standstill == true);

  /* Logic: '<S122>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_ap = (PubIfChassisHMI_MDL_B.Compare_mc &&
    PubIfChassisHMI_MDL_B.Compare_fs);

  /* UnitDelay: '<S122>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_b = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ou;

  /* MATLAB Function: '<S122>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch14, PubIfChassisHMI_MDL_B.LogicalOperator8_ap,
    PubIfChassisHMI_MDL_B.UnitDelay_b,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_c);

  /* UnitDelay: '<S123>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_b2 =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_pm;

  /* RelationalOperator: '<S289>/Compare' incorporates:
   *  Constant: '<S289>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_id = (PubIfChassisHMI_MDL_B.UnitDelay3_b2 ==
    false);

  /* RelationalOperator: '<S288>/Compare' incorporates:
   *  Constant: '<S288>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pm = (*rtu_standstill == true);

  /* Logic: '<S123>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_f = (PubIfChassisHMI_MDL_B.Compare_id &&
    PubIfChassisHMI_MDL_B.Compare_pm);

  /* UnitDelay: '<S123>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_do =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_do;

  /* MATLAB Function: '<S123>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_i(rtu_standstill,
    &rtu_RFM_LINE_LB->eLineType, PubIfChassisHMI_MDL_B.LogicalOperator8_f,
    PubIfChassisHMI_MDL_B.UnitDelay_do,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ia);

  /* Gain: '<S8>/Gain19' */
  PubIfChassisHMI_MDL_B.Gain19 = (-1.0F) * PubIfChassisHMI_MDL_B.dC0V_jvm;

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_n0a = (PubIfChassisHMI_MDL_B.bIsLineExist_ckl >
    ((uint8_T)1U));

  /* Switch: '<S8>/Switch7' */
  if (PubIfChassisHMI_MDL_B.Compare_n0a) {
    /* Switch: '<S8>/Switch7' */
    PubIfChassisHMI_MDL_B.Switch7 = PubIfChassisHMI_MDL_B.Gain19;
  } else {
    /* Switch: '<S8>/Switch7' incorporates:
     *  Constant: '<S8>/Constant9'
     */
    PubIfChassisHMI_MDL_B.Switch7 = 5.25F;
  }

  /* End of Switch: '<S8>/Switch7' */

  /* UnitDelay: '<S124>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_bl =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_du;

  /* RelationalOperator: '<S292>/Compare' incorporates:
   *  Constant: '<S292>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pp = (PubIfChassisHMI_MDL_B.UnitDelay3_bl ==
    false);

  /* RelationalOperator: '<S291>/Compare' incorporates:
   *  Constant: '<S291>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_i3 = (*rtu_standstill == true);

  /* Logic: '<S124>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_pn = (PubIfChassisHMI_MDL_B.Compare_pp &&
    PubIfChassisHMI_MDL_B.Compare_i3);

  /* UnitDelay: '<S124>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_pc =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_m4;

  /* MATLAB Function: '<S124>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch7, PubIfChassisHMI_MDL_B.LogicalOperator8_pn,
    PubIfChassisHMI_MDL_B.UnitDelay_pc,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_gif);

  /* Logic: '<S8>/Logical Operator3' */
  PubIfChassisHMI_MDL_B.LogicalOperator3 = !PubIfChassisHMI_MDL_B.Compare_n0a;

  /* Gain: '<S8>/Gain20' */
  PubIfChassisHMI_MDL_B.Gain20 = (-2.0F) * PubIfChassisHMI_MDL_B.A2_m;

  /* Switch: '<S8>/Switch17' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator3) {
    /* Switch: '<S8>/Switch17' incorporates:
     *  Constant: '<S8>/Constant11'
     */
    PubIfChassisHMI_MDL_B.Switch17 = 0.0F;
  } else {
    /* Switch: '<S8>/Switch17' */
    PubIfChassisHMI_MDL_B.Switch17 = PubIfChassisHMI_MDL_B.Gain20;
  }

  /* End of Switch: '<S8>/Switch17' */

  /* UnitDelay: '<S125>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_o =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_eb;

  /* RelationalOperator: '<S295>/Compare' incorporates:
   *  Constant: '<S295>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_lw = (PubIfChassisHMI_MDL_B.UnitDelay3_o ==
    false);

  /* RelationalOperator: '<S294>/Compare' incorporates:
   *  Constant: '<S294>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_c5 = (*rtu_standstill == true);

  /* Logic: '<S125>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_j3 = (PubIfChassisHMI_MDL_B.Compare_lw &&
    PubIfChassisHMI_MDL_B.Compare_c5);

  /* UnitDelay: '<S125>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_d = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_gr;

  /* MATLAB Function: '<S125>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch17, PubIfChassisHMI_MDL_B.LogicalOperator8_j3,
    PubIfChassisHMI_MDL_B.UnitDelay_d,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_jy);

  /* Logic: '<S8>/Logical Operator5' */
  PubIfChassisHMI_MDL_B.LogicalOperator5 = !PubIfChassisHMI_MDL_B.Compare_n0a;

  /* Gain: '<S8>/Gain21' */
  PubIfChassisHMI_MDL_B.Gain21 = (-6.0F) * PubIfChassisHMI_MDL_B.A3_mm;

  /* Switch: '<S8>/Switch23' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator5) {
    /* Switch: '<S8>/Switch23' incorporates:
     *  Constant: '<S8>/Constant13'
     */
    PubIfChassisHMI_MDL_B.Switch23 = 0.0F;
  } else {
    /* Switch: '<S8>/Switch23' */
    PubIfChassisHMI_MDL_B.Switch23 = PubIfChassisHMI_MDL_B.Gain21;
  }

  /* End of Switch: '<S8>/Switch23' */

  /* UnitDelay: '<S127>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_nc =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kr;

  /* RelationalOperator: '<S301>/Compare' incorporates:
   *  Constant: '<S301>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_h5 = (PubIfChassisHMI_MDL_B.UnitDelay3_nc ==
    false);

  /* RelationalOperator: '<S300>/Compare' incorporates:
   *  Constant: '<S300>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_oz = (*rtu_standstill == true);

  /* Logic: '<S127>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_nn = (PubIfChassisHMI_MDL_B.Compare_h5 &&
    PubIfChassisHMI_MDL_B.Compare_oz);

  /* UnitDelay: '<S127>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_po = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_l;

  /* MATLAB Function: '<S127>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch23, PubIfChassisHMI_MDL_B.LogicalOperator8_nn,
    PubIfChassisHMI_MDL_B.UnitDelay_po,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cn);

  /* UnitDelay: '<S129>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_nw =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ed;

  /* RelationalOperator: '<S307>/Compare' incorporates:
   *  Constant: '<S307>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_it2 = (PubIfChassisHMI_MDL_B.UnitDelay3_nw ==
    false);

  /* RelationalOperator: '<S306>/Compare' incorporates:
   *  Constant: '<S306>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gs = (*rtu_standstill == true);

  /* Logic: '<S129>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_l = (PubIfChassisHMI_MDL_B.Compare_it2 &&
    PubIfChassisHMI_MDL_B.Compare_gs);

  /* UnitDelay: '<S129>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_mq =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_mn;

  /* MATLAB Function: '<S129>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_i(rtu_standstill,
    &rtu_RFM_LINE_RB->eLineType, PubIfChassisHMI_MDL_B.LogicalOperator8_l,
    PubIfChassisHMI_MDL_B.UnitDelay_mq,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_iab);

  /* BusCreator generated from: '<Root>/HMI_IFC_FD5' */
  rty_HMI_IFC_FD5->IFC_Line01_Dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_kyo.out;
  rty_HMI_IFC_FD5->IFC_Line01_Curv =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_k.out;
  rty_HMI_IFC_FD5->IFC_Line01_CurvChange =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_g.out;
  rty_HMI_IFC_FD5->IFC_Line01_Type =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ez.out;
  rty_HMI_IFC_FD5->IFC_Line02_Dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_pl.out;
  rty_HMI_IFC_FD5->IFC_Line02_Curv =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_a.out;
  rty_HMI_IFC_FD5->IFC_Line02_CurvChange =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_an.out;
  rty_HMI_IFC_FD5->IFC_Line02_Type =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mb.out;
  rty_HMI_IFC_FD5->IFC_Line03_Dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e5.out;
  rty_HMI_IFC_FD5->IFC_Line03_Curv =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_o.out;
  rty_HMI_IFC_FD5->IFC_Line03_CurvChange =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_gi.out;
  rty_HMI_IFC_FD5->IFC_Line03_Type =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m1.out;
  rty_HMI_IFC_FD5->IFC_Line04_Dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_l.out;
  rty_HMI_IFC_FD5->IFC_Line04_Curv =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ok.out;
  rty_HMI_IFC_FD5->IFC_Line04_CurvChange =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_kj.out;
  rty_HMI_IFC_FD5->IFC_Line04_Type =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_p1.out;
  rty_HMI_IFC_FD5->IFC_Roadedge01_Dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_pi.out;
  rty_HMI_IFC_FD5->IFC_Roadedge01_Curv =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e3.out;
  rty_HMI_IFC_FD5->IFC_Roadedge01_CurvChange =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_c.out;
  rty_HMI_IFC_FD5->IFC_Roadedge01_Type =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ia.out;
  rty_HMI_IFC_FD5->IFC_Roadedge02_Dy =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_gif.out;
  rty_HMI_IFC_FD5->IFC_Roadedge02_Curv =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_jy.out;
  rty_HMI_IFC_FD5->IFC_Roadedge02_CurvChange =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cn.out;
  rty_HMI_IFC_FD5->IFC_Roadedge02_Type =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_iab.out;

  /* Gain: '<S8>/Gain5' */
  PubIfChassisHMI_MDL_B.Gain5_p = (-1.0F) * PubIfChassisHMI_MDL_B.A1_a;

  /* UnitDelay: '<S109>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_pq =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_pl;

  /* RelationalOperator: '<S247>/Compare' incorporates:
   *  Constant: '<S247>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_c2 = (PubIfChassisHMI_MDL_B.UnitDelay3_pq ==
    false);

  /* RelationalOperator: '<S246>/Compare' incorporates:
   *  Constant: '<S246>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_j4 = (*rtu_standstill == true);

  /* Logic: '<S109>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_mt = (PubIfChassisHMI_MDL_B.Compare_c2 &&
    PubIfChassisHMI_MDL_B.Compare_j4);

  /* UnitDelay: '<S109>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_bt =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bw;

  /* MATLAB Function: '<S109>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain5_p, PubIfChassisHMI_MDL_B.LogicalOperator8_mt,
    PubIfChassisHMI_MDL_B.UnitDelay_bt,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_d);

  /* Gain: '<S8>/Gain7' */
  PubIfChassisHMI_MDL_B.Gain7_o = (-1.0F) * PubIfChassisHMI_MDL_B.A1_a;

  /* UnitDelay: '<S111>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_cg =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_l;

  /* RelationalOperator: '<S253>/Compare' incorporates:
   *  Constant: '<S253>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_o1o = (PubIfChassisHMI_MDL_B.UnitDelay3_cg ==
    false);

  /* RelationalOperator: '<S252>/Compare' incorporates:
   *  Constant: '<S252>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gp0 = (*rtu_standstill == true);

  /* Logic: '<S111>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_m4 = (PubIfChassisHMI_MDL_B.Compare_o1o
    && PubIfChassisHMI_MDL_B.Compare_gp0);

  /* UnitDelay: '<S111>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_hi =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dr;

  /* MATLAB Function: '<S111>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain7_o, PubIfChassisHMI_MDL_B.LogicalOperator8_m4,
    PubIfChassisHMI_MDL_B.UnitDelay_hi,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ao);

  /* Gain: '<S8>/Gain10' */
  PubIfChassisHMI_MDL_B.Gain10_g = (-1.0F) * PubIfChassisHMI_MDL_B.A1_a;

  /* UnitDelay: '<S114>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_l =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_gq;

  /* RelationalOperator: '<S262>/Compare' incorporates:
   *  Constant: '<S262>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_i2 = (PubIfChassisHMI_MDL_B.UnitDelay3_l ==
    false);

  /* RelationalOperator: '<S261>/Compare' incorporates:
   *  Constant: '<S261>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ft = (*rtu_standstill == true);

  /* Logic: '<S114>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_o2 = (PubIfChassisHMI_MDL_B.Compare_i2 &&
    PubIfChassisHMI_MDL_B.Compare_ft);

  /* UnitDelay: '<S114>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_a = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_oz;

  /* MATLAB Function: '<S114>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain10_g, PubIfChassisHMI_MDL_B.LogicalOperator8_o2,
    PubIfChassisHMI_MDL_B.UnitDelay_a,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_j);

  /* Gain: '<S8>/Gain13' */
  PubIfChassisHMI_MDL_B.Gain13 = (-1.0F) * PubIfChassisHMI_MDL_B.A1_a;

  /* UnitDelay: '<S118>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ef =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_da;

  /* RelationalOperator: '<S274>/Compare' incorporates:
   *  Constant: '<S274>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_lm = (PubIfChassisHMI_MDL_B.UnitDelay3_ef ==
    false);

  /* RelationalOperator: '<S273>/Compare' incorporates:
   *  Constant: '<S273>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_aw = (*rtu_standstill == true);

  /* Logic: '<S118>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_n3 = (PubIfChassisHMI_MDL_B.Compare_lm &&
    PubIfChassisHMI_MDL_B.Compare_aw);

  /* UnitDelay: '<S118>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_m0 =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_kc;

  /* MATLAB Function: '<S118>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Gain13, PubIfChassisHMI_MDL_B.LogicalOperator8_n3,
    PubIfChassisHMI_MDL_B.UnitDelay_m0,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_h);

  /* Logic: '<S8>/Logical Operator1' */
  PubIfChassisHMI_MDL_B.LogicalOperator1 = !PubIfChassisHMI_MDL_B.Compare_how;

  /* Gain: '<S8>/Gain15' */
  PubIfChassisHMI_MDL_B.Gain15 = (-1.0F) * PubIfChassisHMI_MDL_B.A1_a;

  /* Switch: '<S8>/Switch9' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator1) {
    /* Switch: '<S8>/Switch9' incorporates:
     *  Constant: '<S8>/Constant7'
     */
    PubIfChassisHMI_MDL_B.Switch9 = 0.0F;
  } else {
    /* Switch: '<S8>/Switch9' */
    PubIfChassisHMI_MDL_B.Switch9 = PubIfChassisHMI_MDL_B.Gain15;
  }

  /* End of Switch: '<S8>/Switch9' */

  /* UnitDelay: '<S121>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_hk =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_oc;

  /* RelationalOperator: '<S283>/Compare' incorporates:
   *  Constant: '<S283>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jo = (PubIfChassisHMI_MDL_B.UnitDelay3_hk ==
    false);

  /* RelationalOperator: '<S282>/Compare' incorporates:
   *  Constant: '<S282>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_dl = (*rtu_standstill == true);

  /* Logic: '<S121>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_m5 = (PubIfChassisHMI_MDL_B.Compare_jo &&
    PubIfChassisHMI_MDL_B.Compare_dl);

  /* UnitDelay: '<S121>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_da = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_f;

  /* MATLAB Function: '<S121>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch9, PubIfChassisHMI_MDL_B.LogicalOperator8_m5,
    PubIfChassisHMI_MDL_B.UnitDelay_da,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_my);

  /* Logic: '<S8>/Logical Operator4' */
  PubIfChassisHMI_MDL_B.LogicalOperator4 = !PubIfChassisHMI_MDL_B.Compare_n0a;

  /* Gain: '<S8>/Gain18' */
  PubIfChassisHMI_MDL_B.Gain18 = (-1.0F) * PubIfChassisHMI_MDL_B.A1_a;

  /* Switch: '<S8>/Switch20' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator4) {
    /* Switch: '<S8>/Switch20' incorporates:
     *  Constant: '<S8>/Constant12'
     */
    PubIfChassisHMI_MDL_B.Switch20 = 0.0F;
  } else {
    /* Switch: '<S8>/Switch20' */
    PubIfChassisHMI_MDL_B.Switch20 = PubIfChassisHMI_MDL_B.Gain18;
  }

  /* End of Switch: '<S8>/Switch20' */

  /* UnitDelay: '<S126>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_pm =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fo;

  /* RelationalOperator: '<S298>/Compare' incorporates:
   *  Constant: '<S298>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pa = (PubIfChassisHMI_MDL_B.UnitDelay3_pm ==
    false);

  /* RelationalOperator: '<S297>/Compare' incorporates:
   *  Constant: '<S297>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_mma = (*rtu_standstill == true);

  /* Logic: '<S126>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_oe = (PubIfChassisHMI_MDL_B.Compare_pa &&
    PubIfChassisHMI_MDL_B.Compare_mma);

  /* UnitDelay: '<S126>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_n = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_i1;

  /* MATLAB Function: '<S126>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.Switch20, PubIfChassisHMI_MDL_B.LogicalOperator8_oe,
    PubIfChassisHMI_MDL_B.UnitDelay_n,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_b);

  /* DataTypeConversion: '<S8>/Data Type Conversion6' */
  PubIfChassisHMI_MDL_B.IFC_Line01_DxStart = rtu_RFM_LINE_L1->dDisStart;

  /* UnitDelay: '<S130>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ir =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ka;

  /* RelationalOperator: '<S310>/Compare' incorporates:
   *  Constant: '<S310>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bv = (PubIfChassisHMI_MDL_B.UnitDelay3_ir ==
    false);

  /* RelationalOperator: '<S309>/Compare' incorporates:
   *  Constant: '<S309>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_li = (*rtu_standstill == true);

  /* Logic: '<S130>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_gf = (PubIfChassisHMI_MDL_B.Compare_bv &&
    PubIfChassisHMI_MDL_B.Compare_li);

  /* UnitDelay: '<S130>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_np = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_c;

  /* MATLAB Function: '<S130>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Line01_DxStart,
    PubIfChassisHMI_MDL_B.LogicalOperator8_gf,
    PubIfChassisHMI_MDL_B.UnitDelay_np,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_id);

  /* DataTypeConversion: '<S8>/Data Type Conversion5' */
  PubIfChassisHMI_MDL_B.IFC_Line01_DxEnd = rtu_RFM_LINE_L1->dDisFront;

  /* UnitDelay: '<S131>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ko =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b4y;

  /* RelationalOperator: '<S313>/Compare' incorporates:
   *  Constant: '<S313>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ne = (PubIfChassisHMI_MDL_B.UnitDelay3_ko ==
    false);

  /* RelationalOperator: '<S312>/Compare' incorporates:
   *  Constant: '<S312>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_pu = (*rtu_standstill == true);

  /* Logic: '<S131>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_ag = (PubIfChassisHMI_MDL_B.Compare_ne &&
    PubIfChassisHMI_MDL_B.Compare_pu);

  /* UnitDelay: '<S131>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ku = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h;

  /* MATLAB Function: '<S131>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Line01_DxEnd,
    PubIfChassisHMI_MDL_B.LogicalOperator8_ag,
    PubIfChassisHMI_MDL_B.UnitDelay_ku,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_n);

  /* DataTypeConversion: '<S8>/Data Type Conversion8' */
  PubIfChassisHMI_MDL_B.IFC_Line02_DxStart = rtu_RFM_LINE_R1->dDisStart;

  /* UnitDelay: '<S132>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_nh =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kx;

  /* RelationalOperator: '<S316>/Compare' incorporates:
   *  Constant: '<S316>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bbr = (PubIfChassisHMI_MDL_B.UnitDelay3_nh ==
    false);

  /* RelationalOperator: '<S315>/Compare' incorporates:
   *  Constant: '<S315>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_fy = (*rtu_standstill == true);

  /* Logic: '<S132>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_k = (PubIfChassisHMI_MDL_B.Compare_bbr &&
    PubIfChassisHMI_MDL_B.Compare_fy);

  /* UnitDelay: '<S132>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ev =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aab;

  /* MATLAB Function: '<S132>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Line02_DxStart,
    PubIfChassisHMI_MDL_B.LogicalOperator8_k, PubIfChassisHMI_MDL_B.UnitDelay_ev,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cw);

  /* DataTypeConversion: '<S8>/Data Type Conversion7' */
  PubIfChassisHMI_MDL_B.IFC_Line02_DxEnd = rtu_RFM_LINE_R1->dDisFront;

  /* UnitDelay: '<S133>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_jn =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_f1;

  /* RelationalOperator: '<S319>/Compare' incorporates:
   *  Constant: '<S319>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_hta = (PubIfChassisHMI_MDL_B.UnitDelay3_jn ==
    false);

  /* RelationalOperator: '<S318>/Compare' incorporates:
   *  Constant: '<S318>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_kq = (*rtu_standstill == true);

  /* Logic: '<S133>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_ox = (PubIfChassisHMI_MDL_B.Compare_hta
    && PubIfChassisHMI_MDL_B.Compare_kq);

  /* UnitDelay: '<S133>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_dw =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_lr;

  /* MATLAB Function: '<S133>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Line02_DxEnd,
    PubIfChassisHMI_MDL_B.LogicalOperator8_ox,
    PubIfChassisHMI_MDL_B.UnitDelay_dw,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cx);

  /* DataTypeConversion: '<S8>/Data Type Conversion10' */
  PubIfChassisHMI_MDL_B.IFC_Line03_DxStart = rtu_RFM_LINE_L2->dDisStart;

  /* UnitDelay: '<S134>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ns =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_aw;

  /* RelationalOperator: '<S322>/Compare' incorporates:
   *  Constant: '<S322>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_j0 = (PubIfChassisHMI_MDL_B.UnitDelay3_ns ==
    false);

  /* RelationalOperator: '<S321>/Compare' incorporates:
   *  Constant: '<S321>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_fz = (*rtu_standstill == true);

  /* Logic: '<S134>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_io = (PubIfChassisHMI_MDL_B.Compare_j0 &&
    PubIfChassisHMI_MDL_B.Compare_fz);

  /* UnitDelay: '<S134>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_bp =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o4;

  /* MATLAB Function: '<S134>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Line03_DxStart,
    PubIfChassisHMI_MDL_B.LogicalOperator8_io,
    PubIfChassisHMI_MDL_B.UnitDelay_bp,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ih);

  /* DataTypeConversion: '<S8>/Data Type Conversion9' */
  PubIfChassisHMI_MDL_B.IFC_Line03_DxEnd = rtu_RFM_LINE_L2->dDisFront;

  /* UnitDelay: '<S135>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_jd =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fr;

  /* RelationalOperator: '<S325>/Compare' incorporates:
   *  Constant: '<S325>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_at = (PubIfChassisHMI_MDL_B.UnitDelay3_jd ==
    false);

  /* RelationalOperator: '<S324>/Compare' incorporates:
   *  Constant: '<S324>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_j41 = (*rtu_standstill == true);

  /* Logic: '<S135>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_jx = (PubIfChassisHMI_MDL_B.Compare_at &&
    PubIfChassisHMI_MDL_B.Compare_j41);

  /* UnitDelay: '<S135>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_pq =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dl;

  /* MATLAB Function: '<S135>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Line03_DxEnd,
    PubIfChassisHMI_MDL_B.LogicalOperator8_jx,
    PubIfChassisHMI_MDL_B.UnitDelay_pq,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ju);

  /* DataTypeConversion: '<S8>/Data Type Conversion13' */
  PubIfChassisHMI_MDL_B.IFC_Line04_DxStart = rtu_RFM_LINE_R2->dDisStart;

  /* UnitDelay: '<S136>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_k4b =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fc;

  /* RelationalOperator: '<S328>/Compare' incorporates:
   *  Constant: '<S328>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_a2 = (PubIfChassisHMI_MDL_B.UnitDelay3_k4b ==
    false);

  /* RelationalOperator: '<S327>/Compare' incorporates:
   *  Constant: '<S327>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jw = (*rtu_standstill == true);

  /* Logic: '<S136>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_fb = (PubIfChassisHMI_MDL_B.Compare_a2 &&
    PubIfChassisHMI_MDL_B.Compare_jw);

  /* UnitDelay: '<S136>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ko =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_de;

  /* MATLAB Function: '<S136>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Line04_DxStart,
    PubIfChassisHMI_MDL_B.LogicalOperator8_fb,
    PubIfChassisHMI_MDL_B.UnitDelay_ko,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_jq);

  /* DataTypeConversion: '<S8>/Data Type Conversion12' */
  PubIfChassisHMI_MDL_B.IFC_Line04_DxEnd = rtu_RFM_LINE_R2->dDisFront;

  /* UnitDelay: '<S137>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_me =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_co;

  /* RelationalOperator: '<S331>/Compare' incorporates:
   *  Constant: '<S331>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_gd = (PubIfChassisHMI_MDL_B.UnitDelay3_me ==
    false);

  /* RelationalOperator: '<S330>/Compare' incorporates:
   *  Constant: '<S330>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_m1 = (*rtu_standstill == true);

  /* Logic: '<S137>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_cp = (PubIfChassisHMI_MDL_B.Compare_gd &&
    PubIfChassisHMI_MDL_B.Compare_m1);

  /* UnitDelay: '<S137>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_cp =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ol;

  /* MATLAB Function: '<S137>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Line04_DxEnd,
    PubIfChassisHMI_MDL_B.LogicalOperator8_cp,
    PubIfChassisHMI_MDL_B.UnitDelay_cp,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m4);

  /* DataTypeConversion: '<S8>/Data Type Conversion15' */
  PubIfChassisHMI_MDL_B.IFC_Roadedge01_DxStart = rtu_RFM_LINE_LB->dDisStart;

  /* UnitDelay: '<S138>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ic =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_n5;

  /* RelationalOperator: '<S334>/Compare' incorporates:
   *  Constant: '<S334>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_ir = (PubIfChassisHMI_MDL_B.UnitDelay3_ic ==
    false);

  /* RelationalOperator: '<S333>/Compare' incorporates:
   *  Constant: '<S333>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_nn = (*rtu_standstill == true);

  /* Logic: '<S138>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_m1 = (PubIfChassisHMI_MDL_B.Compare_ir &&
    PubIfChassisHMI_MDL_B.Compare_nn);

  /* UnitDelay: '<S138>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_l = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fr;

  /* MATLAB Function: '<S138>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Roadedge01_DxStart,
    PubIfChassisHMI_MDL_B.LogicalOperator8_m1, PubIfChassisHMI_MDL_B.UnitDelay_l,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_le);

  /* DataTypeConversion: '<S8>/Data Type Conversion14' */
  PubIfChassisHMI_MDL_B.IFC_Roadedge01_DxEnd = rtu_RFM_LINE_LB->dDisFront;

  /* UnitDelay: '<S140>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_bd =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cz;

  /* RelationalOperator: '<S340>/Compare' incorporates:
   *  Constant: '<S340>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_a0 = (PubIfChassisHMI_MDL_B.UnitDelay3_bd ==
    false);

  /* RelationalOperator: '<S339>/Compare' incorporates:
   *  Constant: '<S339>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_hk = (*rtu_standstill == true);

  /* Logic: '<S140>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_o0 = (PubIfChassisHMI_MDL_B.Compare_a0 &&
    PubIfChassisHMI_MDL_B.Compare_hk);

  /* UnitDelay: '<S140>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_ew = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_e;

  /* MATLAB Function: '<S140>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Roadedge01_DxEnd,
    PubIfChassisHMI_MDL_B.LogicalOperator8_o0,
    PubIfChassisHMI_MDL_B.UnitDelay_ew,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cxx);

  /* DataTypeConversion: '<S8>/Data Type Conversion11' */
  PubIfChassisHMI_MDL_B.IFC_Roadedge02_DxStart = rtu_RFM_LINE_RB->dDisStart;

  /* UnitDelay: '<S141>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_ij =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hig;

  /* RelationalOperator: '<S343>/Compare' incorporates:
   *  Constant: '<S343>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_iy = (PubIfChassisHMI_MDL_B.UnitDelay3_ij ==
    false);

  /* RelationalOperator: '<S342>/Compare' incorporates:
   *  Constant: '<S342>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_bad = (*rtu_standstill == true);

  /* Logic: '<S141>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_j3v = (PubIfChassisHMI_MDL_B.Compare_iy
    && PubIfChassisHMI_MDL_B.Compare_bad);

  /* UnitDelay: '<S141>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_frq =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dp;

  /* MATLAB Function: '<S141>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Roadedge02_DxStart,
    PubIfChassisHMI_MDL_B.LogicalOperator8_j3v,
    PubIfChassisHMI_MDL_B.UnitDelay_frq,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mv);

  /* DataTypeConversion: '<S8>/Data Type Conversion16' */
  PubIfChassisHMI_MDL_B.IFC_Roadedge02_DxEnd = rtu_RFM_LINE_RB->dDisFront;

  /* UnitDelay: '<S142>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_g0 =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hb;

  /* RelationalOperator: '<S346>/Compare' incorporates:
   *  Constant: '<S346>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_d1 = (PubIfChassisHMI_MDL_B.UnitDelay3_g0 ==
    false);

  /* RelationalOperator: '<S345>/Compare' incorporates:
   *  Constant: '<S345>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_e1 = (*rtu_standstill == true);

  /* Logic: '<S142>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_i1 = (PubIfChassisHMI_MDL_B.Compare_d1 &&
    PubIfChassisHMI_MDL_B.Compare_e1);

  /* UnitDelay: '<S142>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_l1 = PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n;

  /* MATLAB Function: '<S142>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill,
    PubIfChassisHMI_MDL_B.IFC_Roadedge02_DxEnd,
    PubIfChassisHMI_MDL_B.LogicalOperator8_i1,
    PubIfChassisHMI_MDL_B.UnitDelay_l1,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ig);

  /* BusCreator generated from: '<Root>/HMI_IFC_FD6' */
  rty_HMI_IFC_FD6->IFC_Line01_HeadingAngle =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_d.out;
  rty_HMI_IFC_FD6->IFC_Line02_HeadingAngle =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ao.out;
  rty_HMI_IFC_FD6->IFC_Line03_HeadingAngle =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_j.out;
  rty_HMI_IFC_FD6->IFC_Line04_HeadingAngle =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_h.out;
  rty_HMI_IFC_FD6->IFC_Roadedge01_HeadingAngle =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_my.out;
  rty_HMI_IFC_FD6->IFC_Roadedge02_HeadingAngle =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_b.out;
  rty_HMI_IFC_FD6->IFC_Line01_DxStart =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_id.out;
  rty_HMI_IFC_FD6->IFC_Line01_DxEnd =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_n.out;
  rty_HMI_IFC_FD6->IFC_Line02_DxStart =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cw.out;
  rty_HMI_IFC_FD6->IFC_Line02_DxEnd =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cx.out;
  rty_HMI_IFC_FD6->IFC_Line03_DxStart =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ih.out;
  rty_HMI_IFC_FD6->IFC_Line03_DxEnd =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ju.out;
  rty_HMI_IFC_FD6->IFC_Line04_DxStart =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_jq.out;
  rty_HMI_IFC_FD6->IFC_Line04_DxEnd =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m4.out;
  rty_HMI_IFC_FD6->IFC_Roadedge01_DxStart =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_le.out;
  rty_HMI_IFC_FD6->IFC_Roadedge01_DxEnd =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cxx.out;
  rty_HMI_IFC_FD6->IFC_Roadedge02_DxStart =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mv.out;
  rty_HMI_IFC_FD6->IFC_Roadedge02_DxEnd =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ig.out;

  /* RelationalOperator: '<S21>/Compare' incorporates:
   *  Constant: '<S21>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jbl = (rtu_VSM_HMI->HWASts == ((uint8_T)3U));

  /* RelationalOperator: '<S22>/Compare' incorporates:
   *  Constant: '<S22>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_m5 = (rtu_VSM_HMI->HWASts == ((uint8_T)5U));

  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S23>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_fi = (rtu_VSM_HMI->HWASts == ((uint8_T)6U));

  /* Logic: '<S7>/Logical Operator' */
  PubIfChassisHMI_MDL_B.LogicalOperator_c = (PubIfChassisHMI_MDL_B.Compare_jbl ||
    PubIfChassisHMI_MDL_B.Compare_m5 || PubIfChassisHMI_MDL_B.Compare_fi);

  /* Switch: '<S7>/Switch4' */
  if (PubIfChassisHMI_MDL_B.LogicalOperator_c) {
    /* Switch: '<S7>/Switch4' */
    PubIfChassisHMI_MDL_B.Switch4 = rtu_VSM_HMI->CCTextDisp;
  } else {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant4'
     */
    PubIfChassisHMI_MDL_B.Switch4 = 0.0;
  }

  /* End of Switch: '<S7>/Switch4' */

  /* UnitDelay: '<S42>/Delay Input1' */
  PubIfChassisHMI_MDL_B.Uk1 = PubIfChassisHMI_MDL_DW.DelayInput1_DSTATE;

  /* RelationalOperator: '<S42>/FixPt Relational Operator' */
  PubIfChassisHMI_MDL_B.FixPtRelationalOperator_o =
    (rtu_VSM_HMI->ACC_DrvrOffDisp > PubIfChassisHMI_MDL_B.Uk1);

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jz = (rtu_VSM_HMI->LDWSts == ((uint8_T)4U));

  /* RelationalOperator: '<S82>/Compare' incorporates:
   *  Constant: '<S82>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_iz = (rtu_VSM_HMI->LDWSts == ((uint8_T)5U));

  /* Logic: '<S8>/Logical Operator6' */
  PubIfChassisHMI_MDL_B.LogicalOperator6 = (PubIfChassisHMI_MDL_B.Compare_iz ||
    PubIfChassisHMI_MDL_B.Compare_jz);

  /* MATLAB Function: '<S8>/MATLAB Function8' incorporates:
   *  Constant: '<S8>/Constant14'
   */
  *rty_HMI_IFCVibrationWarning = 0U;
  if (((PubIfChassisHMI_MDL_B.LSSIntervention == 1) ||
       (PubIfChassisHMI_MDL_B.LSSIntervention == 2) ||
       (PubIfChassisHMI_MDL_B.LSSIntervention == 6) ||
       (PubIfChassisHMI_MDL_B.LSSIntervention == 7)) && (((uint8_T)1U) == 0)) {
    if ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) ||
        (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) {
      *rty_HMI_IFCVibrationWarning = 1U;
    }
  } else {
    if (((PubIfChassisHMI_MDL_B.LSSIntervention == 1) ||
         (PubIfChassisHMI_MDL_B.LSSIntervention == 2) ||
         (PubIfChassisHMI_MDL_B.LSSIntervention == 6) ||
         (PubIfChassisHMI_MDL_B.LSSIntervention == 7)) && (((uint8_T)1U) == 1) &&
        ((rtu_VSM_HMI->LSS_WarnFormSwtResp == 1) ||
         (rtu_VSM_HMI->LSS_WarnFormSwtResp == 2)) &&
        PubIfChassisHMI_MDL_B.LogicalOperator6) {
      *rty_HMI_IFCVibrationWarning = 1U;
    }
  }

  /* End of MATLAB Function: '<S8>/MATLAB Function8' */

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_f4 = (*rtu_standstill == true);

  /* UnitDelay: '<S148>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_kg =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hc;

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_da = (PubIfChassisHMI_MDL_B.UnitDelay3_kg ==
    false);

  /* Logic: '<S148>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_ca = (PubIfChassisHMI_MDL_B.Compare_da &&
    PubIfChassisHMI_MDL_B.Compare_f4);

  /* UnitDelay: '<S148>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_d5 =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_pj;

  /* MATLAB Function: '<S148>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_e(rtu_standstill, ((uint8_T)0U),
    PubIfChassisHMI_MDL_B.LogicalOperator8_ca,
    PubIfChassisHMI_MDL_B.UnitDelay_d5,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_bq);

  /* RelationalOperator: '<S366>/Compare' incorporates:
   *  Constant: '<S366>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_g1 = (*rtu_standstill == true);

  /* UnitDelay: '<S149>/Unit Delay3' */
  PubIfChassisHMI_MDL_B.UnitDelay3_bj =
    PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_jv;

  /* RelationalOperator: '<S367>/Compare' incorporates:
   *  Constant: '<S367>/Constant'
   */
  PubIfChassisHMI_MDL_B.Compare_jl = (PubIfChassisHMI_MDL_B.UnitDelay3_bj ==
    false);

  /* Logic: '<S149>/Logical Operator8' */
  PubIfChassisHMI_MDL_B.LogicalOperator8_lf = (PubIfChassisHMI_MDL_B.Compare_jl &&
    PubIfChassisHMI_MDL_B.Compare_g1);

  /* UnitDelay: '<S149>/Unit Delay' */
  PubIfChassisHMI_MDL_B.UnitDelay_oo =
    PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n5;

  /* MATLAB Function: '<S149>/MATLAB Function1' */
  PubIfChassisHMI_MDL_MATLABFunction1_k(rtu_standstill, 0.0F,
    PubIfChassisHMI_MDL_B.LogicalOperator8_lf,
    PubIfChassisHMI_MDL_B.UnitDelay_oo,
    &PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mi);

  /* UnitDelay: '<S2>/Output' */
  HMI_Counter = PubIfChassisHMI_MDL_DW.Output_DSTATE;

  /* Sum: '<S5>/FixPt Sum1' incorporates:
   *  Constant: '<S5>/FixPt Constant'
   */
  PubIfChassisHMI_MDL_B.FixPtSum1 = (uint8_T)((uint32_T)HMI_Counter + ((uint8_T)
    1U));

  /* Switch: '<S6>/FixPt Switch' */
  if (PubIfChassisHMI_MDL_B.FixPtSum1 > ((uint8_T)255U)) {
    /* Switch: '<S6>/FixPt Switch' incorporates:
     *  Constant: '<S6>/Constant'
     */
    PubIfChassisHMI_MDL_B.FixPtSwitch = ((uint8_T)0U);
  } else {
    /* Switch: '<S6>/FixPt Switch' */
    PubIfChassisHMI_MDL_B.FixPtSwitch = PubIfChassisHMI_MDL_B.FixPtSum1;
  }

  /* End of Switch: '<S6>/FixPt Switch' */
}

/* Update for referenced model: 'PubIfChassisHMI_MDL' */
void PubIfChassisHMI_MDL_Update(const VSM_LON_CTRL_BUS *rtu_VSM_LON_CTRL, const
  VSM_HMI_BUS *rtu_VSM_HMI, const PLAN_HMI_BUS *rtu_PLAN_HMI_BUS, const
  TOS_ACCP0_BUS *rtu_TOS_ACCP0, const TOS_ACCP1_BUS *rtu_TOS_ACCP1, const
  TOS_ACCP2_BUS *rtu_TOS_ACCP2, const TOS_ACCP3_BUS *rtu_TOS_ACCP3, const
  TOS_ACCP4_BUS *rtu_TOS_ACCP4, const TOS_ACCP5_BUS *rtu_TOS_ACCP5, const
  boolean_T *rtu_standstill)
{
  /* Update for UnitDelay: '<S7>/Unit Delay5' */
  PubIfChassisHMI_MDL_DW.UnitDelay5_DSTATE = rtu_VSM_LON_CTRL->ACCSts;

  /* Update for UnitDelay: '<S7>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE = PubIfChassisHMI_MDL_B.Cnt_f;

  /* Update for UnitDelay: '<S7>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE = rtu_TOS_ACCP0->IDP0;

  /* Update for UnitDelay: '<S12>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_k =
    PubIfChassisHMI_MDL_B.RelationalOperator4;

  /* Update for UnitDelay: '<S12>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_mi =
    PubIfChassisHMI_MDL_B.UnitDelay1_ln;

  /* Update for UnitDelay: '<S12>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_g =
    PubIfChassisHMI_MDL_B.UnitDelay2_dt;

  /* Update for UnitDelay: '<S12>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_c =
    PubIfChassisHMI_MDL_B.UnitDelay3_k;

  /* Update for UnitDelay: '<S7>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_d = rtu_TOS_ACCP1->IDP1;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_b =
    PubIfChassisHMI_MDL_B.RelationalOperator3;

  /* Update for UnitDelay: '<S11>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_js =
    PubIfChassisHMI_MDL_B.UnitDelay1_fj;

  /* Update for UnitDelay: '<S11>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_o =
    PubIfChassisHMI_MDL_B.UnitDelay2_g;

  /* Update for UnitDelay: '<S11>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_n =
    PubIfChassisHMI_MDL_B.UnitDelay3_c;

  /* Update for UnitDelay: '<S36>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_pc = rtu_TOS_ACCP1->IDP1;

  /* Update for UnitDelay: '<S51>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_c =
    PubIfChassisHMI_MDL_B.RelationalOperator1;

  /* Update for UnitDelay: '<S36>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_j = rtu_TOS_ACCP1->ObjTypeP1;

  /* Update for UnitDelay: '<S51>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_j = PubIfChassisHMI_MDL_B.Merge;

  /* Update for UnitDelay: '<S36>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_a = PubIfChassisHMI_MDL_B.Switch1_g;

  /* Update for UnitDelay: '<S7>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_p = rtu_TOS_ACCP2->IDP2;

  /* Update for UnitDelay: '<S10>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h33 =
    PubIfChassisHMI_MDL_B.RelationalOperator2;

  /* Update for UnitDelay: '<S10>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_f =
    PubIfChassisHMI_MDL_B.UnitDelay1_ef;

  /* Update for UnitDelay: '<S10>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_c =
    PubIfChassisHMI_MDL_B.UnitDelay2_gw;

  /* Update for UnitDelay: '<S10>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_p =
    PubIfChassisHMI_MDL_B.UnitDelay3_kr;

  /* Update for UnitDelay: '<S37>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fj = rtu_TOS_ACCP2->IDP2;

  /* Update for UnitDelay: '<S56>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_f5 =
    PubIfChassisHMI_MDL_B.RelationalOperator1_k;

  /* Update for UnitDelay: '<S37>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_b = rtu_TOS_ACCP2->ObjTypeP2;

  /* Update for UnitDelay: '<S56>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h = PubIfChassisHMI_MDL_B.Merge_f;

  /* Update for UnitDelay: '<S37>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b = PubIfChassisHMI_MDL_B.Switch1_j;

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dx = rtu_TOS_ACCP3->IDP3;

  /* Update for UnitDelay: '<S9>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_l =
    PubIfChassisHMI_MDL_B.RelationalOperator1_o;

  /* Update for UnitDelay: '<S9>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_jh =
    PubIfChassisHMI_MDL_B.UnitDelay1_o1;

  /* Update for UnitDelay: '<S9>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_df =
    PubIfChassisHMI_MDL_B.UnitDelay2_p1;

  /* Update for UnitDelay: '<S9>/Unit Delay4' */
  PubIfChassisHMI_MDL_DW.UnitDelay4_DSTATE_o =
    PubIfChassisHMI_MDL_B.UnitDelay3_n;

  /* Update for UnitDelay: '<S38>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fu = rtu_TOS_ACCP3->IDP3;

  /* Update for UnitDelay: '<S61>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_o =
    PubIfChassisHMI_MDL_B.RelationalOperator1_f;

  /* Update for UnitDelay: '<S38>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_jk = rtu_TOS_ACCP3->ObjTypeP3;

  /* Update for UnitDelay: '<S61>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_d = PubIfChassisHMI_MDL_B.Merge_h;

  /* Update for UnitDelay: '<S38>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_h = PubIfChassisHMI_MDL_B.Switch1_m;

  /* Update for UnitDelay: '<S24>/Delay Input1' */
  PubIfChassisHMI_MDL_DW.DelayInput1_DSTATE_l =
    rtu_PLAN_HMI_BUS->IntelligentCurveActive;

  /* Update for UnitDelay: '<S7>/Unit Delay6' */
  PubIfChassisHMI_MDL_DW.UnitDelay6_DSTATE = PubIfChassisHMI_MDL_B.y_g;

  /* Update for UnitDelay: '<S7>/Unit Delay7' */
  PubIfChassisHMI_MDL_DW.UnitDelay7_DSTATE = PubIfChassisHMI_MDL_B.count_d;

  /* Update for UnitDelay: '<S35>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_is = rtu_TOS_ACCP0->IDP0;

  /* Update for UnitDelay: '<S46>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_ik =
    PubIfChassisHMI_MDL_B.RelationalOperator1_f4;

  /* Update for UnitDelay: '<S35>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_i = rtu_TOS_ACCP0->ObjTypeP0;

  /* Update for UnitDelay: '<S46>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_e = PubIfChassisHMI_MDL_B.Merge_i;

  /* Update for UnitDelay: '<S35>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_k = PubIfChassisHMI_MDL_B.Switch1_d;

  /* Update for UnitDelay: '<S25>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_in = PubIfChassisHMI_MDL_B.Switch20_o;

  /* Update for UnitDelay: '<S25>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bd = PubIfChassisHMI_MDL_B.Cnt;

  /* Update for UnitDelay: '<S25>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_oe =
    PubIfChassisHMI_MDL_B.FixPtRelationalOperator_o;

  /* Update for UnitDelay: '<S66>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_n =
    PubIfChassisHMI_MDL_B.RelationalOperator1_j;

  /* Update for UnitDelay: '<S39>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_h = rtu_TOS_ACCP4->ObjTypeP4;

  /* Update for UnitDelay: '<S66>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_h3 = PubIfChassisHMI_MDL_B.Merge_g;

  /* Update for UnitDelay: '<S39>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_d = PubIfChassisHMI_MDL_B.Switch1_gw;

  /* Update for UnitDelay: '<S71>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_l =
    PubIfChassisHMI_MDL_B.RelationalOperator1_a;

  /* Update for UnitDelay: '<S40>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE_m = rtu_TOS_ACCP5->ObjTypeP5;

  /* Update for UnitDelay: '<S71>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE_eg = PubIfChassisHMI_MDL_B.Merge_p;

  /* Update for UnitDelay: '<S40>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_m = PubIfChassisHMI_MDL_B.Switch1_e;

  /* Update for UnitDelay: '<S8>/Unit Delay1' */
  PubIfChassisHMI_MDL_DW.UnitDelay1_DSTATE = PubIfChassisHMI_MDL_B.Lcount;

  /* Update for UnitDelay: '<S8>/Unit Delay2' */
  PubIfChassisHMI_MDL_DW.UnitDelay2_DSTATE = PubIfChassisHMI_MDL_B.Rcount;

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE = PubIfChassisHMI_MDL_B.count;

  /* Update for UnitDelay: '<S128>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hm = *rtu_standstill;

  /* Update for UnitDelay: '<S128>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fm =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_om.recorder;

  /* Update for UnitDelay: '<S150>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ob = *rtu_standstill;

  /* Update for UnitDelay: '<S150>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dd =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ej.recorder;

  /* Update for UnitDelay: '<S146>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ks = *rtu_standstill;

  /* Update for UnitDelay: '<S146>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h0 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_lb.recorder;

  /* Update for UnitDelay: '<S147>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_j = *rtu_standstill;

  /* Update for UnitDelay: '<S147>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_lg =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_oq.recorder;

  /* Update for UnitDelay: '<S152>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bs = *rtu_standstill;

  /* Update for UnitDelay: '<S152>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_l4 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mn.recorder;

  /* Update for UnitDelay: '<S100>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_f = *rtu_standstill;

  /* Update for UnitDelay: '<S100>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n2 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m.recorder;

  /* Update for UnitDelay: '<S97>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_h2 = *rtu_standstill;

  /* Update for UnitDelay: '<S97>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o1 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e.recorder;

  /* Update for UnitDelay: '<S101>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cd = *rtu_standstill;

  /* Update for UnitDelay: '<S101>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ow =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_p.recorder;

  /* Update for UnitDelay: '<S143>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fx = *rtu_standstill;

  /* Update for UnitDelay: '<S143>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_i =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_i3.recorder;

  /* Update for UnitDelay: '<S144>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_c4 = *rtu_standstill;

  /* Update for UnitDelay: '<S144>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_b =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_go.recorder;

  /* Update for UnitDelay: '<S145>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kq = *rtu_standstill;

  /* Update for UnitDelay: '<S145>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_il =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_k3.recorder;

  /* Update for UnitDelay: '<S102>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hi = *rtu_standstill;

  /* Update for UnitDelay: '<S102>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_m =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ip.recorder;

  /* Update for UnitDelay: '<S103>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_e = *rtu_standstill;

  /* Update for UnitDelay: '<S103>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_j =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ky.recorder;

  /* Update for UnitDelay: '<S104>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b4 = *rtu_standstill;

  /* Update for UnitDelay: '<S104>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_a =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_kyo.recorder;

  /* Update for UnitDelay: '<S98>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dc = *rtu_standstill;

  /* Update for UnitDelay: '<S98>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_k =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_k.recorder;

  /* Update for UnitDelay: '<S108>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ju = *rtu_standstill;

  /* Update for UnitDelay: '<S108>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_d =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_g.recorder;

  /* Update for UnitDelay: '<S117>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_p = *rtu_standstill;

  /* Update for UnitDelay: '<S117>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h3 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ez.recorder;

  /* Update for UnitDelay: '<S105>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cp = *rtu_standstill;

  /* Update for UnitDelay: '<S105>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_mp =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_pl.recorder;

  /* Update for UnitDelay: '<S99>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ml = *rtu_standstill;

  /* Update for UnitDelay: '<S99>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ai =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_a.recorder;

  /* Update for UnitDelay: '<S110>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dv = *rtu_standstill;

  /* Update for UnitDelay: '<S110>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bs =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_an.recorder;

  /* Update for UnitDelay: '<S139>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fg = *rtu_standstill;

  /* Update for UnitDelay: '<S139>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_e3 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mb.recorder;

  /* Update for UnitDelay: '<S106>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_j5 = *rtu_standstill;

  /* Update for UnitDelay: '<S106>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e5.recorder;

  /* Update for UnitDelay: '<S112>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_dq = *rtu_standstill;

  /* Update for UnitDelay: '<S112>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_p =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_o.recorder;

  /* Update for UnitDelay: '<S113>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_i = *rtu_standstill;

  /* Update for UnitDelay: '<S113>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bk =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_gi.recorder;

  /* Update for UnitDelay: '<S151>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_iv = *rtu_standstill;

  /* Update for UnitDelay: '<S151>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aw =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m1.recorder;

  /* Update for UnitDelay: '<S107>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_n = *rtu_standstill;

  /* Update for UnitDelay: '<S107>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_b2 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_l.recorder;

  /* Update for UnitDelay: '<S116>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bv = *rtu_standstill;

  /* Update for UnitDelay: '<S116>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dv =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ok.recorder;

  /* Update for UnitDelay: '<S115>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_gg = *rtu_standstill;

  /* Update for UnitDelay: '<S115>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ih =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_kj.recorder;

  /* Update for UnitDelay: '<S153>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hy = *rtu_standstill;

  /* Update for UnitDelay: '<S153>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n4 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_p1.recorder;

  /* Update for UnitDelay: '<S119>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_nq = *rtu_standstill;

  /* Update for UnitDelay: '<S119>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_g =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_pi.recorder;

  /* Update for UnitDelay: '<S120>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_jm = *rtu_standstill;

  /* Update for UnitDelay: '<S120>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aa =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_e3.recorder;

  /* Update for UnitDelay: '<S122>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_bu = *rtu_standstill;

  /* Update for UnitDelay: '<S122>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ou =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_c.recorder;

  /* Update for UnitDelay: '<S123>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_pm = *rtu_standstill;

  /* Update for UnitDelay: '<S123>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_do =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ia.recorder;

  /* Update for UnitDelay: '<S124>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_du = *rtu_standstill;

  /* Update for UnitDelay: '<S124>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_m4 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_gif.recorder;

  /* Update for UnitDelay: '<S125>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_eb = *rtu_standstill;

  /* Update for UnitDelay: '<S125>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_gr =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_jy.recorder;

  /* Update for UnitDelay: '<S127>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kr = *rtu_standstill;

  /* Update for UnitDelay: '<S127>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_l =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cn.recorder;

  /* Update for UnitDelay: '<S129>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ed = *rtu_standstill;

  /* Update for UnitDelay: '<S129>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_mn =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_iab.recorder;

  /* Update for UnitDelay: '<S109>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_pl = *rtu_standstill;

  /* Update for UnitDelay: '<S109>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_bw =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_d.recorder;

  /* Update for UnitDelay: '<S111>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_l = *rtu_standstill;

  /* Update for UnitDelay: '<S111>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dr =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ao.recorder;

  /* Update for UnitDelay: '<S114>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_gq = *rtu_standstill;

  /* Update for UnitDelay: '<S114>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_oz =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_j.recorder;

  /* Update for UnitDelay: '<S118>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_da = *rtu_standstill;

  /* Update for UnitDelay: '<S118>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_kc =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_h.recorder;

  /* Update for UnitDelay: '<S121>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_oc = *rtu_standstill;

  /* Update for UnitDelay: '<S121>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_f =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_my.recorder;

  /* Update for UnitDelay: '<S126>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fo = *rtu_standstill;

  /* Update for UnitDelay: '<S126>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_i1 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_b.recorder;

  /* Update for UnitDelay: '<S130>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_ka = *rtu_standstill;

  /* Update for UnitDelay: '<S130>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_c =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_id.recorder;

  /* Update for UnitDelay: '<S131>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_b4y = *rtu_standstill;

  /* Update for UnitDelay: '<S131>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_h =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_n.recorder;

  /* Update for UnitDelay: '<S132>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_kx = *rtu_standstill;

  /* Update for UnitDelay: '<S132>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_aab =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cw.recorder;

  /* Update for UnitDelay: '<S133>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_f1 = *rtu_standstill;

  /* Update for UnitDelay: '<S133>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_lr =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cx.recorder;

  /* Update for UnitDelay: '<S134>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_aw = *rtu_standstill;

  /* Update for UnitDelay: '<S134>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_o4 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ih.recorder;

  /* Update for UnitDelay: '<S135>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fr = *rtu_standstill;

  /* Update for UnitDelay: '<S135>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dl =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ju.recorder;

  /* Update for UnitDelay: '<S136>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_fc = *rtu_standstill;

  /* Update for UnitDelay: '<S136>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_de =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_jq.recorder;

  /* Update for UnitDelay: '<S137>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_co = *rtu_standstill;

  /* Update for UnitDelay: '<S137>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_ol =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_m4.recorder;

  /* Update for UnitDelay: '<S138>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_n5 = *rtu_standstill;

  /* Update for UnitDelay: '<S138>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_fr =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_le.recorder;

  /* Update for UnitDelay: '<S140>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_cz = *rtu_standstill;

  /* Update for UnitDelay: '<S140>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_e =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_cxx.recorder;

  /* Update for UnitDelay: '<S141>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hig = *rtu_standstill;

  /* Update for UnitDelay: '<S141>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_dp =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mv.recorder;

  /* Update for UnitDelay: '<S142>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hb = *rtu_standstill;

  /* Update for UnitDelay: '<S142>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_ig.recorder;

  /* Update for UnitDelay: '<S42>/Delay Input1' */
  PubIfChassisHMI_MDL_DW.DelayInput1_DSTATE = rtu_VSM_HMI->ACC_DrvrOffDisp;

  /* Update for UnitDelay: '<S148>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_hc = *rtu_standstill;

  /* Update for UnitDelay: '<S148>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_pj =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_bq.recorder;

  /* Update for UnitDelay: '<S149>/Unit Delay3' */
  PubIfChassisHMI_MDL_DW.UnitDelay3_DSTATE_jv = *rtu_standstill;

  /* Update for UnitDelay: '<S149>/Unit Delay' */
  PubIfChassisHMI_MDL_DW.UnitDelay_DSTATE_n5 =
    PubIfChassisHMI_MDL_B.sf_MATLABFunction1_mi.recorder;

  /* Update for UnitDelay: '<S2>/Output' */
  PubIfChassisHMI_MDL_DW.Output_DSTATE = PubIfChassisHMI_MDL_B.FixPtSwitch;
}

/* Model initialize function */
void PubIfChassisHMI_MDL_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_PubIfChassisHMI_MDL_T *const PubIfChassisHMI_MDL_M =
    &(PubIfChassisHMI_MDL_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PubIfChassisHMI_MDL_M, 0,
                sizeof(RT_MODEL_PubIfChassisHMI_MDL_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(PubIfChassisHMI_MDL_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &PubIfChassisHMI_MDL_B), 0,
                sizeof(B_PubIfChassisHMI_MDL_c_T));

  /* exported global signals */
  HMI_Counter = 0U;

  /* states (dwork) */
  (void) memset((void *)&PubIfChassisHMI_MDL_DW, 0,
                sizeof(DW_PubIfChassisHMI_MDL_f_T));
}
