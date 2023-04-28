/*
 * std_0jbjRmL9.c
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
#include "std_0jbjRmL9.h"

/* Function for MATLAB Function: '<S17>/VisLineFilter2' */
real32_T std_0jbjRmL9(const real32_T x[4])
{
  real32_T absdiff_idx_0;
  real32_T absdiff_idx_1;
  real32_T absdiff_idx_2;
  real32_T absdiff_idx_3;
  real32_T t;
  real32_T xbar;
  real32_T y;
  xbar = x[0];
  xbar += x[1];
  xbar += x[2];
  xbar += x[3];
  xbar /= 4.0F;
  absdiff_idx_0 = fabsf(x[0] - xbar);
  absdiff_idx_1 = fabsf(x[1] - xbar);
  absdiff_idx_2 = fabsf(x[2] - xbar);
  absdiff_idx_3 = fabsf(x[3] - xbar);
  xbar = 1.29246971E-26F;
  if (absdiff_idx_0 > 1.29246971E-26F) {
    y = 1.0F;
    xbar = absdiff_idx_0;
  } else {
    t = absdiff_idx_0 / 1.29246971E-26F;
    y = t * t;
  }

  absdiff_idx_0 = absdiff_idx_1;
  if (absdiff_idx_0 > xbar) {
    t = xbar / absdiff_idx_0;
    y = y * t * t + 1.0F;
    xbar = absdiff_idx_0;
  } else {
    t = absdiff_idx_0 / xbar;
    y += t * t;
  }

  absdiff_idx_0 = absdiff_idx_2;
  if (absdiff_idx_0 > xbar) {
    t = xbar / absdiff_idx_0;
    y = y * t * t + 1.0F;
    xbar = absdiff_idx_0;
  } else {
    t = absdiff_idx_0 / xbar;
    y += t * t;
  }

  absdiff_idx_0 = absdiff_idx_3;
  if (absdiff_idx_0 > xbar) {
    t = xbar / absdiff_idx_0;
    y = y * t * t + 1.0F;
    xbar = absdiff_idx_0;
  } else {
    t = absdiff_idx_0 / xbar;
    y += t * t;
  }

  y = xbar * sqrtf(y);
  y /= 1.73205078F;
  return y;
}
