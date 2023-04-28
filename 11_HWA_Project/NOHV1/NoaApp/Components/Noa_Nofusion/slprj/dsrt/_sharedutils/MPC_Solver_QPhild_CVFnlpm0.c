/*
 * MPC_Solver_QPhild_CVFnlpm0.c
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
#include "mldivide_B2iTACYT.h"
#include "mldivide_z5IdNXbE.h"
#include "MPC_Solver_QPhild_CVFnlpm0.h"

/* Function for MATLAB Function: '<S42>/TarSteerAngleCalc' */
void MPC_Solver_QPhild_CVFnlpm0(const real32_T H[36], const real_T f[6], const
  real_T A_Const[132], const real32_T b[22], real32_T eta[6])
{
  real_T A_Const_0[132];
  real_T lambda[22];
  real_T lambda_0;
  real_T lambda_p;
  int32_T b_i;
  int32_T i;
  int32_T i_0;
  real32_T P[484];
  real32_T b_b[132];
  real32_T H_0[36];
  real32_T d[22];
  real32_T c_b[6];
  real32_T A_Const_1;
  uint8_T kk;
  boolean_T exitg1;
  for (i_0 = 0; i_0 < 36; i_0++) {
    H_0[i_0] = -H[i_0];
  }

  mldivide_B2iTACYT(H_0, f, eta);
  kk = 0U;
  for (i = 0; i < 22; i++) {
    A_Const_1 = 0.0F;
    for (i_0 = 0; i_0 < 6; i_0++) {
      A_Const_1 += (real32_T)A_Const[22 * i_0 + i] * eta[i_0];
    }

    if (A_Const_1 > b[i]) {
      i_0 = (int32_T)(kk + 1U);
      if ((uint32_T)i_0 > 255U) {
        i_0 = 255;
      }

      kk = (uint8_T)i_0;
    }
  }

  if (kk != 0) {
    for (i_0 = 0; i_0 < 22; i_0++) {
      for (i = 0; i < 6; i++) {
        A_Const_0[i + 6 * i_0] = A_Const[22 * i + i_0];
      }
    }

    mldivide_z5IdNXbE(H, A_Const_0, b_b);
    for (i_0 = 0; i_0 < 22; i_0++) {
      for (i = 0; i < 22; i++) {
        P[i + 22 * i_0] = 0.0F;
        for (b_i = 0; b_i < 6; b_i++) {
          A_Const_1 = P[22 * i_0 + i];
          A_Const_1 += (real32_T)A_Const[22 * b_i + i] * b_b[6 * i_0 + b_i];
          P[i + 22 * i_0] = A_Const_1;
        }
      }
    }

    mldivide_B2iTACYT(H, f, c_b);
    for (i = 0; i < 22; i++) {
      A_Const_1 = 0.0F;
      for (i_0 = 0; i_0 < 6; i_0++) {
        A_Const_1 += (real32_T)A_Const[22 * i_0 + i] * c_b[i_0];
      }

      d[i] = A_Const_1 + b[i];
      lambda[i] = 0.0;
    }

    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 38)) {
      lambda_0 = 0.0;
      for (b_i = 0; b_i < 22; b_i++) {
        lambda_p = lambda[b_i];
        A_Const_1 = 0.0F;
        for (i_0 = 0; i_0 < 22; i_0++) {
          A_Const_1 += P[22 * i_0 + b_i] * (real32_T)lambda[i_0];
        }

        lambda[b_i] = fmaxf(0.0F, -((A_Const_1 - P[22 * b_i + b_i] * (real32_T)
          lambda[b_i]) + d[b_i]) / P[22 * b_i + b_i]);
        lambda_0 += (lambda[b_i] - lambda_p) * (lambda[b_i] - lambda_p);
      }

      if (lambda_0 < 1.0E-7) {
        exitg1 = true;
      } else {
        i++;
      }
    }

    for (i_0 = 0; i_0 < 22; i_0++) {
      for (i = 0; i < 6; i++) {
        A_Const_0[i + 6 * i_0] = A_Const[22 * i + i_0];
      }
    }

    mldivide_z5IdNXbE(H, A_Const_0, b_b);
    for (i_0 = 0; i_0 < 36; i_0++) {
      H_0[i_0] = -H[i_0];
    }

    mldivide_B2iTACYT(H_0, f, c_b);
    for (i_0 = 0; i_0 < 6; i_0++) {
      A_Const_1 = 0.0F;
      for (i = 0; i < 22; i++) {
        A_Const_1 += b_b[6 * i + i_0] * (real32_T)lambda[i];
      }

      eta[i_0] = c_b[i_0] - A_Const_1;
    }
  }
}
