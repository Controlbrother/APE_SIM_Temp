/*
 * local_ismember_ubQD6XDC.c
 *
 * Code generation for model "PubIfDecisionPLAN_MDL".
 *
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 * Created for block: PubIfDecisionPLAN_MDL
 */

#include "rtwtypes.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "local_ismember_ubQD6XDC.h"

/* Function for MATLAB Function: '<S461>/DangerPlaus_Calculate_Radar' */
boolean_T local_ismember_ubQD6XDC(real_T a, const real_T s[11])
{
  real_T absx;
  int32_T exponent;
  int32_T k;
  boolean_T exitg1;
  boolean_T tf;
  tf = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 11)) {
    absx = fabs(s[k] / 2.0);
    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = (rtNaN);
    }

    if ((fabs(s[k] - a) < absx) || (rtIsInf(a) && rtIsInf(s[k]) && ((a > 0.0) ==
          (s[k] > 0.0)))) {
      tf = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return tf;
}
