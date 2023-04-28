/*
 * mldivide_B2iTACYT.c
 *
 * Code generation for model "PubIfControlLATC_MDL".
 *
 * Model version              : 3.732
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:23 2022
 * Created for block: PubIfControlLATC_MDL
 */

#include "rtwtypes.h"
#include <string.h>
#include "xgetrf_bmT7fcHY.h"
#include "mldivide_B2iTACYT.h"

/* Function for MATLAB Function: '<S42>/TarSteerAngleCalc' */
void mldivide_B2iTACYT(const real32_T A[36], const real_T B[6], real32_T Y[6])
{
  int32_T ipiv[6];
  int32_T b_i;
  int32_T i;
  int32_T kAcol;
  real32_T b_A[36];
  real32_T temp;
  memcpy(&b_A[0], &A[0], 36U * sizeof(real32_T));
  xgetrf_bmT7fcHY(b_A, ipiv, &i);
  for (i = 0; i < 6; i++) {
    Y[i] = (real32_T)B[i];
  }

  for (i = 0; i < 5; i++) {
    kAcol = ipiv[i];
    if (i + 1 != kAcol) {
      temp = Y[i];
      Y[i] = Y[kAcol - 1];
      Y[kAcol - 1] = temp;
    }
  }

  for (i = 0; i < 6; i++) {
    kAcol = 6 * i;
    if (Y[i] != 0.0F) {
      for (b_i = i + 1; b_i + 1 < 7; b_i++) {
        Y[b_i] -= b_A[b_i + kAcol] * Y[i];
      }
    }
  }

  for (i = 5; i >= 0; i--) {
    kAcol = 6 * i;
    if (Y[i] != 0.0F) {
      Y[i] /= b_A[i + kAcol];
      for (b_i = 0; b_i < i; b_i++) {
        Y[b_i] -= b_A[b_i + kAcol] * Y[i];
      }
    }
  }
}
