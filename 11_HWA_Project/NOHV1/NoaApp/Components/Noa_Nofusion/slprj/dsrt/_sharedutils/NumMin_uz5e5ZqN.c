/*
 * NumMin_uz5e5ZqN.c
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
#include "NumMin_uz5e5ZqN.h"

/* Function for MATLAB Function: '<S58>/spdPlanning' */
real32_T NumMin_uz5e5ZqN(const real32_T PlanOptTemp1[40], real32_T numOpt1)
{
  int32_T ii;
  real32_T PointMin;
  real32_T iiEnd;
  real32_T resultMin1;
  resultMin1 = PlanOptTemp1[0];
  PointMin = 1.0F;
  iiEnd = (numOpt1 - 0.5F) * 2.0F;
  for (ii = 0; ii < (int32_T)(iiEnd + -1.0F); ii++) {
    if (PlanOptTemp1[(int32_T)((real32_T)ii + 2.0F) - 1] < resultMin1) {
      resultMin1 = PlanOptTemp1[(int32_T)((real32_T)ii + 2.0F) - 1];
      PointMin = ceilf(((real32_T)ii + 2.0F) / 2.0F);
    }
  }

  return PointMin;
}
