/*
 * power_D4iaDoLm.c
 *
 * Code generation for model "PubIfDecisionLSM_MDL".
 *
 * Model version              : 1.1192
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:28 2022
 * Created for block: PubIfDecisionLSM_MDL
 */

#include "rtwtypes.h"
#include "rt_powf_snf.h"
#include "power_D4iaDoLm.h"

/* Function for MATLAB Function: '<S17>/HWALineCalc' */
void power_D4iaDoLm(const real32_T a[4], real32_T y[4])
{
  y[0] = rt_powf_snf(a[0], 3.0F);
  y[1] = rt_powf_snf(a[1], 3.0F);
  y[2] = rt_powf_snf(a[2], 3.0F);
  y[3] = rt_powf_snf(a[3], 3.0F);
}
