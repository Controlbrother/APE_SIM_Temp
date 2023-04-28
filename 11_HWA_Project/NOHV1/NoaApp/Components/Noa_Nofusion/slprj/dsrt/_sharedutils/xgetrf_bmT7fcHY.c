/*
 * xgetrf_bmT7fcHY.c
 *
 * Code generation for model "PubIfControlLATC_MDL".
 *
 * Model version              : 3.732
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:23 2022
 * Created for block: PubIfControlLATC_MDL
 */

#include "rtwtypes.h"
#include <math.h>
#include "xgetrf_bmT7fcHY.h"

/* Function for MATLAB Function: '<S42>/TarSteerAngleCalc' */
void xgetrf_bmT7fcHY(real32_T A[36], int32_T ipiv[6], int32_T *info)
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
  for (j = 0; j < 6; j++) {
    ipiv[j] = j + 1;
  }

  *info = 0;
  for (j = 0; j < 5; j++) {
    c = j * 7;
    jA = 0;
    ix = c;
    smax = fabsf(A[c]);
    for (iy = 2; iy <= 6 - j; iy++) {
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
        for (jA = 0; jA < 6; jA++) {
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
          ix += 6;
          iy += 6;
        }
      }

      jA = (c - j) + 6;
      for (ix = c + 1; ix < jA; ix++) {
        A[ix] /= A[c];
      }
    } else {
      *info = j + 1;
    }

    jA = c;
    ix = c + 6;
    for (iy = 0; iy <= 4 - j; iy++) {
      smax = A[ix];
      if (A[ix] != 0.0F) {
        c_ix = c + 1;
        d = (jA - j) + 12;
        for (ijA = jA + 7; ijA < d; ijA++) {
          A[ijA] += A[c_ix] * -smax;
          c_ix++;
        }
      }

      ix += 6;
      jA += 6;
    }
  }

  if ((*info == 0) && (!(A[35] != 0.0F))) {
    *info = 6;
  }
}
