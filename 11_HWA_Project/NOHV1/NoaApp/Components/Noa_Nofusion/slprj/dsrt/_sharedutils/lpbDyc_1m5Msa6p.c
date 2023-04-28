/*
 * lpbDyc_1m5Msa6p.c
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
#include "lpbDyc_1m5Msa6p.h"

/* Function for MATLAB Function: '<S179>/Lpb' */
real32_T lpbDyc_1m5Msa6p(real32_T dyc, real32_T laneEdgeR, real32_T edgeWidthR,
  real32_T laneEdgeL, real32_T edgeWidthL)
{
  real32_T lpb;
  if (dyc < 0.0F) {
    if (edgeWidthR > 0.0F) {
      lpb = fmaxf(-edgeWidthR, fminf(edgeWidthR, laneEdgeR - fabsf(dyc))) /
        edgeWidthR;
    } else if (fabsf(dyc) <= laneEdgeR) {
      lpb = 1.0F;
    } else {
      lpb = -1.0F;
    }
  } else if (edgeWidthL > 0.0F) {
    lpb = fmaxf(-edgeWidthL, fminf(edgeWidthL, laneEdgeL - dyc)) / edgeWidthL;
  } else if (dyc <= laneEdgeL) {
    lpb = 1.0F;
  } else {
    lpb = -1.0F;
  }

  return lpb;
}
