/*
 * qrpf_zcB6QFlQ.c
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
#include "rt_hypotf_snf.h"
#include "xnrm2_CUJxKSSN.h"
#include "qrpf_zcB6QFlQ.h"

/* Function for MATLAB Function: '<S4>/LHLine1' */
void qrpf_zcB6QFlQ(real32_T A[18], int32_T ia0, int32_T m, int32_T n, real32_T
                   tau[3], int32_T jpvt[3])
{
  int32_T b_j;
  int32_T b_k;
  int32_T c_ix;
  int32_T e;
  int32_T exitg1;
  int32_T ia;
  int32_T ii;
  int32_T ix;
  int32_T iy;
  int32_T minmn;
  int32_T mmi;
  int32_T nmi;
  int32_T pvt;
  real32_T vn1[3];
  real32_T vn2[3];
  real32_T work[3];
  real32_T c;
  real32_T smax;
  real32_T xnorm;
  boolean_T exitg2;
  if (m < n) {
    minmn = m;
  } else {
    minmn = n;
  }

  work[0] = 0.0F;
  vn1[0] = 0.0F;
  vn2[0] = 0.0F;
  work[1] = 0.0F;
  vn1[1] = 0.0F;
  vn2[1] = 0.0F;
  work[2] = 0.0F;
  vn1[2] = 0.0F;
  vn2[2] = 0.0F;
  for (b_j = 0; b_j < n; b_j++) {
    vn1[b_j] = xnrm2_CUJxKSSN(m, A, b_j * 6 + ia0);
    vn2[b_j] = vn1[b_j];
  }

  for (b_j = 0; b_j < minmn; b_j++) {
    ii = ((b_j * 6 + ia0) + b_j) - 1;
    nmi = n - b_j;
    mmi = m - b_j;
    if (nmi < 1) {
      pvt = -1;
    } else {
      pvt = 0;
      if (nmi > 1) {
        ix = b_j;
        smax = fabsf(vn1[b_j]);
        for (iy = 2; iy <= nmi; iy++) {
          ix++;
          c = fabsf(vn1[ix]);
          if (c > smax) {
            pvt = iy - 1;
            smax = c;
          }
        }
      }
    }

    pvt += b_j;
    if (pvt + 1 != b_j + 1) {
      ix = (pvt * 6 + ia0) - 1;
      iy = (b_j * 6 + ia0) - 1;
      for (b_k = 0; b_k < m; b_k++) {
        smax = A[ix];
        A[ix] = A[iy];
        A[iy] = smax;
        ix++;
        iy++;
      }

      ix = jpvt[pvt];
      jpvt[pvt] = jpvt[b_j];
      jpvt[b_j] = ix;
      vn1[pvt] = vn1[b_j];
      vn2[pvt] = vn2[b_j];
    }

    if (b_j + 1 < m) {
      smax = A[ii];
      c = 0.0F;
      if (mmi > 0) {
        xnorm = xnrm2_CUJxKSSN(mmi - 1, A, ii + 2);
        if (xnorm != 0.0F) {
          xnorm = rt_hypotf_snf(A[ii], xnorm);
          if (A[ii] >= 0.0F) {
            xnorm = -xnorm;
          }

          if (fabsf(xnorm) < 9.86076132E-32F) {
            pvt = -1;
            ix = ii + mmi;
            do {
              pvt++;
              for (iy = ii + 1; iy < ix; iy++) {
                A[iy] *= 1.01412048E+31F;
              }

              xnorm *= 1.01412048E+31F;
              smax *= 1.01412048E+31F;
            } while (!(fabsf(xnorm) >= 9.86076132E-32F));

            xnorm = rt_hypotf_snf(smax, xnrm2_CUJxKSSN(mmi - 1, A, ii + 2));
            if (smax >= 0.0F) {
              xnorm = -xnorm;
            }

            c = (xnorm - smax) / xnorm;
            smax = 1.0F / (smax - xnorm);
            ix = ii + mmi;
            for (iy = ii + 1; iy < ix; iy++) {
              A[iy] *= smax;
            }

            for (ix = 0; ix <= pvt; ix++) {
              xnorm *= 9.86076132E-32F;
            }

            smax = xnorm;
          } else {
            c = (xnorm - A[ii]) / xnorm;
            smax = 1.0F / (A[ii] - xnorm);
            pvt = ii + mmi;
            for (ix = ii + 1; ix < pvt; ix++) {
              A[ix] *= smax;
            }

            smax = xnorm;
          }
        }
      }

      tau[b_j] = c;
      A[ii] = smax;
    } else {
      tau[b_j] = 0.0F;
    }

    if (b_j + 1 < n) {
      smax = A[ii];
      A[ii] = 1.0F;
      if (tau[b_j] != 0.0F) {
        pvt = mmi - 1;
        ix = (ii + mmi) - 1;
        while ((pvt + 1 > 0) && (A[ix] == 0.0F)) {
          pvt--;
          ix--;
        }

        nmi -= 2;
        exitg2 = false;
        while ((!exitg2) && (nmi + 1 > 0)) {
          ix = (nmi * 6 + ii) + 7;
          iy = ix;
          do {
            exitg1 = 0;
            if (iy <= ix + pvt) {
              if (A[iy - 1] != 0.0F) {
                exitg1 = 1;
              } else {
                iy++;
              }
            } else {
              nmi--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        pvt = -1;
        nmi = -1;
      }

      if (pvt + 1 > 0) {
        if (nmi + 1 != 0) {
          for (ix = 0; ix <= nmi; ix++) {
            work[ix] = 0.0F;
          }

          ix = 0;
          iy = (6 * nmi + ii) + 7;
          for (b_k = ii + 7; b_k <= iy; b_k += 6) {
            c_ix = ii;
            c = 0.0F;
            e = b_k + pvt;
            for (ia = b_k; ia <= e; ia++) {
              c += A[ia - 1] * A[c_ix];
              c_ix++;
            }

            work[ix] += c;
            ix++;
          }
        }

        if (!(-tau[b_j] == 0.0F)) {
          ix = ii + 6;
          iy = 0;
          for (b_k = 0; b_k <= nmi; b_k++) {
            if (work[iy] != 0.0F) {
              c = work[iy] * -tau[b_j];
              c_ix = ii;
              e = pvt + ix;
              for (ia = ix; ia < e + 1; ia++) {
                A[ia] += A[c_ix] * c;
                c_ix++;
              }
            }

            iy++;
            ix += 6;
          }
        }
      }

      A[ii] = smax;
    }

    for (ii = b_j + 1; ii < n; ii++) {
      pvt = (ia0 + b_j) + ii * 6;
      if (vn1[ii] != 0.0F) {
        smax = fabsf(A[pvt - 1]) / vn1[ii];
        smax = 1.0F - smax * smax;
        if (smax < 0.0F) {
          smax = 0.0F;
        }

        c = vn1[ii] / vn2[ii];
        c = c * c * smax;
        if (c <= 0.000345266977F) {
          if (b_j + 1 < m) {
            vn1[ii] = xnrm2_CUJxKSSN(mmi - 1, A, pvt + 1);
            vn2[ii] = vn1[ii];
          } else {
            vn1[ii] = 0.0F;
            vn2[ii] = 0.0F;
          }
        } else {
          vn1[ii] *= sqrtf(smax);
        }
      }
    }
  }
}
