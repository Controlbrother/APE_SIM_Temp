/*
 * LookUp_real32_Treal_T_real32_Treal_T.c
 *
 * Code generation for model "PubIfDecisionLSM_MDL".
 *
 * Model version              : 1.1192
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:28 2022
 * Created for block: <S50>/Lookup Table Dynamic
 */

#include "rtwtypes.h"
#include "BINARYSEARCH_real32_Treal_T.h"
#include "LookUp_real32_Treal_T_real32_Treal_T.h"

/* Lookup Utility LookUp_real32_Treal_T_real32_Treal_T */
void LookUp_real32_Treal_T_real32_Treal_T(real32_T *pY, const real_T *pYData,
  real32_T u, const real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real32_Treal_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = (real32_T)yLeftCast;
    }
  }
}
