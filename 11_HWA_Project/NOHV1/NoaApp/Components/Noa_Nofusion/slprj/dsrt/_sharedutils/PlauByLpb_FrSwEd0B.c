/*
 * PlauByLpb_FrSwEd0B.c
 *
 * Code generation for model "Noa_Nofusion".
 *
 * Model version              : 1.579
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:09:02 2022
 * Created for block: Noa_Nofusion
 */

#include "rtwtypes.h"
#include <math.h>
#include "PlauByLpb_FrSwEd0B.h"

/* Function for MATLAB Function: '<S179>/Plaus' */
real32_T PlauByLpb_FrSwEd0B(real32_T Lpb, real_T dVarYv, real32_T PlausK1,
  real32_T dx, real32_T dycHist, real32_T qDycHist, real32_T SpwLeft, real32_T
  SpwRight)
{
  real32_T t_dtPlaus;
  real32_T t_fak2uLeft;
  real32_T t_fak2uOverDx;
  real32_T t_fak2uRight;
  if (dx <= 10.0F) {
    t_dtPlaus = 3.0F;
  } else if (dx >= 20.0F) {
    t_dtPlaus = 1.0F;
  } else {
    t_dtPlaus = (dx - 10.0F) * -2.0F / 10.0F + 3.0F;
  }

  t_fak2uOverDx = 1.0F;
  if ((qDycHist > 0.0F) && (fabsf(dycHist) > 2.0F)) {
    if (dx <= 80.0F) {
      t_fak2uOverDx = 0.3F;
    } else if (dx >= 150.0F) {
      t_fak2uOverDx = 0.1F;
    } else {
      t_fak2uOverDx = (dx - 80.0F) * -0.200000018F / 70.0F + 0.3F;
    }

    t_fak2uOverDx = fmaxf(fminf(1.0F, t_fak2uOverDx / qDycHist), 0.2F);
  }

  if (dx >= 80.0F) {
    if (SpwLeft <= 0.0F) {
      t_fak2uLeft = 1.0F;
    } else if (SpwLeft >= 1.0F) {
      t_fak2uLeft = 0.0F;
    } else {
      t_fak2uLeft = -SpwLeft + 1.0F;
    }

    if (SpwRight <= 0.0F) {
      t_fak2uRight = 1.0F;
    } else if (SpwRight >= 1.0F) {
      t_fak2uRight = 0.0F;
    } else {
      t_fak2uRight = -SpwRight + 1.0F;
    }

    t_fak2uOverDx = fminf(t_fak2uOverDx, fminf(t_fak2uLeft, t_fak2uRight));
    t_fak2uOverDx = fmaxf(t_fak2uOverDx, 0.2F);
  }

  t_fak2uLeft = fminf(1.0F, 0.1F * fabsf(Lpb) * t_dtPlaus);
  t_dtPlaus = t_fak2uLeft;
  t_fak2uLeft *= t_fak2uOverDx;
  if (dVarYv > 2.6) {
    t_fak2uOverDx = 0.0F;
  } else {
    t_fak2uOverDx = t_fak2uLeft;
  }

  t_fak2uLeft = fmaxf(0.0F, fminf(1.0F, Lpb + 0.4F));
  if (Lpb < 0.0F) {
    t_fak2uOverDx = fmaxf(PlausK1 - t_dtPlaus, 0.0F);
    if (t_fak2uOverDx >= 0.4) {
      t_fak2uOverDx = fmaxf(PlausK1 - 0.25F, 0.4F);
    }
  } else if (PlausK1 < t_fak2uLeft) {
    t_fak2uOverDx = fminf(PlausK1 + t_fak2uOverDx, t_fak2uLeft);
  } else {
    t_fak2uOverDx = fmaxf(PlausK1 - 0.25F, t_fak2uLeft);
  }

  return fminf(1.0F, t_fak2uOverDx);
}
