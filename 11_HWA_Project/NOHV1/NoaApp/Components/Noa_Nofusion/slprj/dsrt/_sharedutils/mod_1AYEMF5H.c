/*
 * mod_1AYEMF5H.c
 *
 * Code generation for model "PubIfDecisionPLAN_MDL".
 *
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 * Created for block: PubIfDecisionPLAN_MDL
 */

#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "mod_1AYEMF5H.h"

/* Function for MATLAB Function: '<S58>/spdPlanning' */
real32_T mod_1AYEMF5H(real32_T x)
{
  real32_T r;
  if (rtIsNaNF(x) || rtIsInfF(x)) {
    r = (rtNaNF);
  } else if (x == 0.0F) {
    r = 0.0F;
  } else {
    r = fmodf(x, 2.0F);
    if (r == 0.0F) {
      r = 0.0F;
    } else {
      if (x < 0.0F) {
        r += 2.0F;
      }
    }
  }

  return r;
}
