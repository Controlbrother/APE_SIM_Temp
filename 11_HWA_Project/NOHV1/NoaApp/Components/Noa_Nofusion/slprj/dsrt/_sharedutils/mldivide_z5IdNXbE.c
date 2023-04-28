/*
 * mldivide_z5IdNXbE.c
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
#include "mldivide_z5IdNXbE.h"

/* Function for MATLAB Function: '<S42>/TarSteerAngleCalc' */
void mldivide_z5IdNXbE(const real32_T A[36], const real_T B[132], real32_T Y[132])
{
  int32_T ipiv[6];
  int32_T b_i;
  int32_T info;
  int32_T ip;
  int32_T j;
  int32_T kAcol;
  real32_T b_A[36];
  real32_T temp;
  memcpy(&b_A[0], &A[0], 36U * sizeof(real32_T));
  xgetrf_bmT7fcHY(b_A, ipiv, &info);
  for (info = 0; info < 132; info++) {
    Y[info] = (real32_T)B[info];
  }

  for (info = 0; info < 5; info++) {
    ip = ipiv[info];
    if (info + 1 != ip) {
      ip--;
      for (j = 0; j < 22; j++) {
        temp = Y[6 * j + info];
        Y[info + 6 * j] = Y[6 * j + ip];
        Y[ip + 6 * j] = temp;
      }
    }
  }

  for (info = 0; info < 22; info++) {
    ip = 6 * info;
    for (j = 0; j < 6; j++) {
      kAcol = 6 * j;
      if (Y[j + ip] != 0.0F) {
        for (b_i = j + 2; b_i < 7; b_i++) {
          Y[(b_i + ip) - 1] -= b_A[(b_i + kAcol) - 1] * Y[j + ip];
        }
      }
    }
  }

  for (info = 0; info < 22; info++) {
    ip = 6 * info;
    for (j = 5; j >= 0; j--) {
      kAcol = 6 * j;
      if (Y[j + ip] != 0.0F) {
        Y[j + ip] /= b_A[j + kAcol];
        for (b_i = 0; b_i < j; b_i++) {
          Y[b_i + ip] -= Y[j + ip] * b_A[b_i + kAcol];
        }
      }
    }
  }
}
