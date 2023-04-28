/*
 * CalcSPW_3AVs5igj.c
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
#include "CalcSPW_3AVs5igj.h"

/* Function for MATLAB Function: '<S179>/Spw' */
real32_T CalcSPW_3AVs5igj(real32_T absDyc, real32_T dyLaneWidth, real32_T
  dyKapErr)
{
  real32_T t_spw;
  real32_T temp2;
  real32_T temp3;
  temp3 = dyLaneWidth / 2.0F;
  temp2 = fminf(temp3 + dyKapErr, dyLaneWidth);
  if (absDyc <= temp3 - dyKapErr) {
    t_spw = 1.0F;
  } else if (absDyc >= temp2) {
    t_spw = 0.0F;
  } else {
    t_spw = (temp2 - absDyc) / (2.0F * dyKapErr);
  }

  return t_spw;
}
