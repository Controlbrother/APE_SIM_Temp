/*
 * xzgetrf_qoSwvruO.c
 *
 * Code generation for model "PubIfDecisionPLAN_MDL".
 *
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 * Created for block: PubIfDecisionPLAN_MDL
 */

#include "rtwtypes.h"
#include <math.h>
#include "xzgetrf_qoSwvruO.h"

/* Function for MATLAB Function: '<S111>/KeepLane' */
void xzgetrf_qoSwvruO(real32_T A[16], int32_T ipiv[4], int32_T *info)
{
  int32_T c;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T ix;
  int32_T iy;
  int32_T j;
  int32_T jA;
  real32_T smax;
  real32_T y;
  ipiv[0] = 1;
  ipiv[1] = 2;
  ipiv[2] = 3;
  ipiv[3] = 4;
  *info = 0;
  for (j = 0; j < 3; j++) {
    c = j * 5;
    jA = 0;
    ix = c;
    smax = fabsf(A[c]);
    for (iy = 2; iy <= 4 - j; iy++) {
      ix++;
      y = fabsf(A[ix]);
      if (y > smax) {
        jA = iy - 1;
        smax = y;
      }
    }

    if (A[c + jA] != 0.0F) {
      if (jA != 0) {
        ipiv[j] = (j + jA) + 1;
        ix = j;
        iy = j + jA;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix += 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix += 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix += 4;
        iy += 4;
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
      }

      jA = (c - j) + 4;
      for (ix = c + 1; ix < jA; ix++) {
        A[ix] /= A[c];
      }
    } else {
      *info = j + 1;
    }

    jA = c;
    ix = c + 4;
    for (iy = 0; iy <= 2 - j; iy++) {
      if (A[ix] != 0.0F) {
        smax = -A[ix];
        c_ix = c + 1;
        d = (jA - j) + 8;
        for (ijA = jA + 5; ijA < d; ijA++) {
          A[ijA] += A[c_ix] * smax;
          c_ix++;
        }
      }

      ix += 4;
      jA += 4;
    }
  }

  if ((*info == 0) && (!(A[15] != 0.0F))) {
    *info = 4;
  }
}
