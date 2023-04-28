/*
 * intrp1d_fu32fga_pw.c
 *
 * Code generation for model "PubIfDecisionPLAN_MDL".
 *
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 * Created for block: PubIfDecisionPLAN_MDL
 */

#include "rtwtypes.h"
#include "intrp1d_fu32fga_pw.h"

real32_T intrp1d_fu32fga_pw(uint32_T bpIndex, real32_T frac, const real32_T
  table[], uint32_T maxIndex)
{
  real32_T y;

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear Lagrange'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'portable wrapping'
   */
  if (bpIndex == maxIndex) {
    y = table[bpIndex];
  } else {
    y = (1.0F - frac) * table[bpIndex] + table[bpIndex + 1U] * frac;
  }

  return y;
}
