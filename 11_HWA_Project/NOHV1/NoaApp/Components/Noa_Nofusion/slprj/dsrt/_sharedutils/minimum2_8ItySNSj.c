/*
 * minimum2_8ItySNSj.c
 *
 * Code generation for model "PubIfDecisionLSM_MDL".
 *
 * Model version              : 1.1192
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:28 2022
 * Created for block: PubIfDecisionLSM_MDL
 */

#include "rtwtypes.h"
#include <math.h>
#include "minimum2_8ItySNSj.h"

/* Function for MATLAB Function: '<S17>/VisLineFilter2' */
void minimum2_8ItySNSj(const real32_T x[4], real32_T y, real32_T ex[4])
{
  ex[0] = fminf(x[0], y);
  ex[1] = fminf(x[1], y);
  ex[2] = fminf(x[2], y);
  ex[3] = fminf(x[3], y);
}
