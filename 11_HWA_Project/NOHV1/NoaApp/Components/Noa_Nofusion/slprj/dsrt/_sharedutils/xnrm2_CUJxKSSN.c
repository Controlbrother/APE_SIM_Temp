/*
 * xnrm2_CUJxKSSN.c
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
#include "xnrm2_CUJxKSSN.h"

/* Function for MATLAB Function: '<S4>/LHLine1' */
real32_T xnrm2_CUJxKSSN(int32_T n, const real32_T x[18], int32_T ix0)
{
  int32_T k;
  int32_T kend;
  real32_T absxk;
  real32_T scale;
  real32_T t;
  real32_T y;
  y = 0.0F;
  if (n >= 1) {
    if (n == 1) {
      y = fabsf(x[ix0 - 1]);
    } else {
      scale = 1.29246971E-26F;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabsf(x[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0F;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrtf(y);
    }
  }

  return y;
}
