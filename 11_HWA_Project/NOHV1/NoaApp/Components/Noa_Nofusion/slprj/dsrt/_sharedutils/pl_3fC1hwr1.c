/*
 * pl_3fC1hwr1.c
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
#include "rt_powf_snf.h"
#include "xzgetrf_qoSwvruO.h"
#include "pl_3fC1hwr1.h"

/* Function for MATLAB Function: '<S17>/HWALineCalc' */
void pl_3fC1hwr1(const real32_T X[4], const real32_T Y[4], real32_T *A, real32_T
                 *B, real32_T *C, real32_T *D)
{
  int32_T ipiv[4];
  int32_T info;
  real32_T MatrixA[16];
  real32_T b_A[16];
  real32_T b_B[4];
  real32_T temp;
  real32_T tmp;
  real32_T tmp_0;
  real32_T tmp_1;
  boolean_T isodd;
  temp = rt_powf_snf(X[0], 3.0F);
  tmp = rt_powf_snf(X[1], 3.0F);
  tmp_0 = rt_powf_snf(X[2], 3.0F);
  tmp_1 = rt_powf_snf(X[3], 3.0F);
  MatrixA[0] = temp;
  MatrixA[4] = X[0] * X[0];
  MatrixA[8] = X[0];
  MatrixA[12] = 1.0F;
  MatrixA[1] = tmp;
  MatrixA[5] = X[1] * X[1];
  MatrixA[9] = X[1];
  MatrixA[13] = 1.0F;
  MatrixA[2] = tmp_0;
  MatrixA[6] = X[2] * X[2];
  MatrixA[10] = X[2];
  MatrixA[14] = 1.0F;
  MatrixA[3] = tmp_1;
  MatrixA[7] = X[3] * X[3];
  MatrixA[11] = X[3];
  MatrixA[15] = 1.0F;
  memcpy(&b_A[0], &MatrixA[0], sizeof(real32_T) << 4U);
  xzgetrf_qoSwvruO(b_A, ipiv, &info);
  temp = b_A[0];
  isodd = false;
  temp *= b_A[5];
  if (ipiv[0] > 1) {
    isodd = true;
  }

  temp *= b_A[10];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }

  temp *= b_A[15];
  if (ipiv[2] > 3) {
    isodd = !isodd;
  }

  if (isodd) {
    temp = -temp;
  }

  if (temp == 0.0F) {
    *A = 0.0F;
    *B = 0.0F;
    *C = 0.0F;
    *D = 0.0F;
  } else {
    xzgetrf_qoSwvruO(MatrixA, ipiv, &info);
    b_B[0] = Y[0];
    b_B[1] = Y[1];
    b_B[2] = Y[2];
    b_B[3] = Y[3];
    info = ipiv[0];
    if (info != 1) {
      temp = b_B[0];
      b_B[0] = b_B[info - 1];
      b_B[info - 1] = temp;
    }

    info = ipiv[1];
    if (info != 2) {
      temp = b_B[1];
      b_B[1] = b_B[info - 1];
      b_B[info - 1] = temp;
    }

    info = ipiv[2];
    if (info != 3) {
      temp = b_B[2];
      b_B[2] = b_B[info - 1];
      b_B[info - 1] = temp;
    }

    if (b_B[0] != 0.0F) {
      for (info = 1; info + 1 < 5; info++) {
        b_B[info] -= b_B[0] * MatrixA[info];
      }
    }

    if (b_B[1] != 0.0F) {
      for (info = 2; info + 1 < 5; info++) {
        b_B[info] -= MatrixA[info + 4] * b_B[1];
      }
    }

    if (b_B[2] != 0.0F) {
      for (info = 3; info + 1 < 5; info++) {
        b_B[info] -= MatrixA[info + 8] * b_B[2];
      }
    }

    if (b_B[3] != 0.0F) {
      b_B[3] /= MatrixA[15];
      for (info = 0; info < 3; info++) {
        b_B[info] -= MatrixA[info + 12] * b_B[3];
      }
    }

    if (b_B[2] != 0.0F) {
      b_B[2] /= MatrixA[10];
      for (info = 0; info < 2; info++) {
        b_B[info] -= MatrixA[info + 8] * b_B[2];
      }
    }

    if (b_B[1] != 0.0F) {
      b_B[1] /= MatrixA[5];
      b_B[0] -= b_B[1] * MatrixA[4];
    }

    if (b_B[0] != 0.0F) {
      b_B[0] /= MatrixA[0];
    }

    *A = b_B[0];
    *B = b_B[1];
    *C = b_B[2];
    *D = b_B[3];
  }
}
