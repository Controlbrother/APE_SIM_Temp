/*
 * LATC_Test_Calc_private.h
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 3.98
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Mar  1 14:24:20 2022
 *
 * Target selection: cnp.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LATC_Test_Calc_private_h_
#define RTW_HEADER_LATC_Test_Calc_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "LATC_Test_Calc.h"

extern real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern void cnpenvin(SimStruct *rts);
extern void cnpenvout(SimStruct *rts);
extern void LATC__SwitchCaseActionSubsystem(real_T rtu_In1, real_T *rty_Out1);

#endif                                /* RTW_HEADER_LATC_Test_Calc_private_h_ */
