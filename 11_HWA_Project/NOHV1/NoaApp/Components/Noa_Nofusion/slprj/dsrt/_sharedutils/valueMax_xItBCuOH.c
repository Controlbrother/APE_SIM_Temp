/*
 * valueMax_xItBCuOH.c
 *
 * Code generation for model "PubIfDecisionPLAN_MDL".
 *
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 * Created for block: PubIfDecisionPLAN_MDL
 */

#include "rtwtypes.h"
#include "valueMax_xItBCuOH.h"

/* Function for MATLAB Function: '<S58>/spdPlanning' */
real32_T valueMax_xItBCuOH(const real32_T PlanOptTemp2[40], real32_T numOpt2)
{
  int32_T ii;
  real32_T iiEnd;
  real32_T resultMax;
  resultMax = PlanOptTemp2[0];
  iiEnd = (numOpt2 - 0.5F) * 2.0F;
  for (ii = 0; ii < (int32_T)(iiEnd + -1.0F); ii++) {
    if (PlanOptTemp2[(int32_T)((real32_T)ii + 2.0F) - 1] > resultMax) {
      resultMax = PlanOptTemp2[(int32_T)((real32_T)ii + 2.0F) - 1];
    }
  }

  return resultMax;
}
