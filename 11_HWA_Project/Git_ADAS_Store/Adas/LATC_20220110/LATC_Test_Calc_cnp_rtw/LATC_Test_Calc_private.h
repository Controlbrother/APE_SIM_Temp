/*
 * LATC_Test_Calc_private.h
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 1.17
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Sun Oct 10 16:13:52 2021
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

extern real32_T rt_powf_snf(real32_T u0, real32_T u1);
extern real32_T rt_atan2f_snf(real32_T u0, real32_T u1);
extern real_T look2_binlcapw(real_T u0, real_T u1, const real_T bp0[], const
  real_T bp1[], const real_T table[], const uint32_T maxIndex[], uint32_T stride);
extern void cnpenvin(SimStruct *rts);
extern void cnpenvout(SimStruct *rts);

#endif                                /* RTW_HEADER_LATC_Test_Calc_private_h_ */
