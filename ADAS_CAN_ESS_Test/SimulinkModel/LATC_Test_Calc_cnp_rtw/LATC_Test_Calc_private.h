/*
 * LATC_Test_Calc_private.h
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

#ifndef RTW_HEADER_LATC_Test_Calc_private_h_
#define RTW_HEADER_LATC_Test_Calc_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern real32_T rt_powf_snf(real32_T u0, real32_T u1);
extern real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iflf_binlcapw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look2_iflf_binlcapw(real32_T u0, real32_T u1, const real32_T
  bp0[], const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride);
extern real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look2_iu8dtf_binlcapw(uint8_T u0, real_T u1, const uint8_T bp0[],
  const real_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride);
extern void cnpenvin(SimStruct *rts);
extern void cnpenvout(SimStruct *rts);

#endif                                /* RTW_HEADER_LATC_Test_Calc_private_h_ */
