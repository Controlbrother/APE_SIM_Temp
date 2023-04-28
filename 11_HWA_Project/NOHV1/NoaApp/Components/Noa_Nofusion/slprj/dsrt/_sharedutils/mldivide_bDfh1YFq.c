/*
 * mldivide_bDfh1YFq.c
 *
 * Code generation for model "PubIfDecisionLSM_MDL".
 *
 * Model version              : 1.1192
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:28 2022
 * Created for block: PubIfDecisionLSM_MDL
 */

#include "rtwtypes.h"
#include <string.h>
#include "xzgetrf_qoSwvruO.h"
#include "mldivide_bDfh1YFq.h"

/* Function for MATLAB Function: '<S17>/VisLineFilter4' */
void mldivide_bDfh1YFq(const real32_T A[16], real32_T B[4])
{
  int32_T ipiv[4];
  int32_T info;
  real32_T b_A[16];
  real32_T temp;
  memcpy(&b_A[0], &A[0], sizeof(real32_T) << 4U);
  xzgetrf_qoSwvruO(b_A, ipiv, &info);
  info = ipiv[0];
  if (info != 1) {
    temp = B[0];
    B[0] = B[info - 1];
    B[info - 1] = temp;
  }

  info = ipiv[1];
  if (info != 2) {
    temp = B[1];
    B[1] = B[info - 1];
    B[info - 1] = temp;
  }

  info = ipiv[2];
  if (info != 3) {
    temp = B[2];
    B[2] = B[info - 1];
    B[info - 1] = temp;
  }

  if (B[0] != 0.0F) {
    for (info = 1; info + 1 < 5; info++) {
      B[info] -= B[0] * b_A[info];
    }
  }

  if (B[1] != 0.0F) {
    for (info = 2; info + 1 < 5; info++) {
      B[info] -= b_A[info + 4] * B[1];
    }
  }

  if (B[2] != 0.0F) {
    for (info = 3; info + 1 < 5; info++) {
      B[info] -= b_A[info + 8] * B[2];
    }
  }

  if (B[3] != 0.0F) {
    B[3] /= b_A[15];
    for (info = 0; info < 3; info++) {
      B[info] -= b_A[info + 12] * B[3];
    }
  }

  if (B[2] != 0.0F) {
    B[2] /= b_A[10];
    for (info = 0; info < 2; info++) {
      B[info] -= b_A[info + 8] * B[2];
    }
  }

  if (B[1] != 0.0F) {
    B[1] /= b_A[5];
    B[0] -= B[1] * b_A[4];
  }

  if (B[0] != 0.0F) {
    B[0] /= b_A[0];
  }
}
