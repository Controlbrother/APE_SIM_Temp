/*
 * Interpol_zjiXKfGp.c
 *
 * Code generation for model "PubIfDecisionPLAN_MDL".
 *
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 * Created for block: PubIfDecisionPLAN_MDL
 */

#include "rtwtypes.h"
#include "Interpol_zjiXKfGp.h"

/* Function for MATLAB Function: '<S461>/DangerPlaus_Calculate_Radar' */
real32_T Interpol_zjiXKfGp(real_T x1, real_T z1, real32_T x2, real_T z2,
  real32_T x3, real_T z3, real32_T x4, real_T z4, real32_T In)
{
  real32_T Out;
  if (In <= x1) {
    Out = (real32_T)z1;
  } else if ((In > x1) && (In <= x2)) {
    Out = (In - (real32_T)x1) * (real32_T)(z2 - z1) / (x2 - (real32_T)x1) +
      (real32_T)z1;
  } else if ((In > x2) && (In <= x3)) {
    Out = (In - x2) * (real32_T)(z3 - z2) / (x3 - x2) + (real32_T)z2;
  } else if ((In > x3) && (In <= x4)) {
    Out = (In - x3) * (real32_T)(z4 - z3) / (x4 - x3) + (real32_T)z3;
  } else {
    Out = (real32_T)z4;
  }

  return Out;
}
