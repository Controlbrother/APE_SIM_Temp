/*
 * polyfit_d3B7CmJq.c
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
#include "qrpf_zcB6QFlQ.h"
#include "polyfit_d3B7CmJq.h"

/* Function for MATLAB Function: '<S4>/LHLine1' */
void polyfit_d3B7CmJq(const real32_T x[6], const real32_T y[6], real32_T p[3])
{
  int32_T jpvt[3];
  int32_T c_i;
  int32_T k;
  real32_T V[18];
  real32_T B[6];
  real32_T tau[3];
  real32_T tol;
  for (k = 0; k < 6; k++) {
    tol = x[k];
    V[k + 12] = 1.0F;
    V[k + 6] = tol;
    V[k] = V[k + 6] * tol;
  }

  jpvt[0] = 1;
  tau[0] = 0.0F;
  jpvt[1] = 2;
  tau[1] = 0.0F;
  jpvt[2] = 3;
  tau[2] = 0.0F;
  qrpf_zcB6QFlQ(V, 1, 6, 3, tau, jpvt);
  k = 0;
  tol = 7.15255737E-6F * fabsf(V[0]);
  while ((k < 3) && (!(fabsf(V[6 * k + k]) <= tol))) {
    k++;
  }

  p[0] = 0.0F;
  p[1] = 0.0F;
  p[2] = 0.0F;
  for (c_i = 0; c_i < 6; c_i++) {
    B[c_i] = y[c_i];
  }

  if (tau[0] != 0.0F) {
    tol = B[0];
    for (c_i = 1; c_i + 1 < 7; c_i++) {
      tol += V[c_i] * B[c_i];
    }

    tol *= tau[0];
    if (tol != 0.0F) {
      B[0] -= tol;
      for (c_i = 1; c_i + 1 < 7; c_i++) {
        B[c_i] -= V[c_i] * tol;
      }
    }
  }

  if (tau[1] != 0.0F) {
    tol = B[1];
    for (c_i = 2; c_i + 1 < 7; c_i++) {
      tol += V[c_i + 6] * B[c_i];
    }

    tol *= tau[1];
    if (tol != 0.0F) {
      B[1] -= tol;
      for (c_i = 2; c_i + 1 < 7; c_i++) {
        B[c_i] -= V[c_i + 6] * tol;
      }
    }
  }

  if (tau[2] != 0.0F) {
    tol = B[2];
    for (c_i = 3; c_i + 1 < 7; c_i++) {
      tol += V[c_i + 12] * B[c_i];
    }

    tol *= tau[2];
    if (tol != 0.0F) {
      B[2] -= tol;
      for (c_i = 3; c_i + 1 < 7; c_i++) {
        B[c_i] -= V[c_i + 12] * tol;
      }
    }
  }

  for (c_i = 0; c_i < k; c_i++) {
    p[jpvt[c_i] - 1] = B[c_i];
  }

  for (k--; k + 1 > 0; k--) {
    p[jpvt[k] - 1] /= V[6 * k + k];
    for (c_i = 0; c_i < k; c_i++) {
      p[jpvt[c_i] - 1] -= V[6 * k + c_i] * p[jpvt[k] - 1];
    }
  }
}
