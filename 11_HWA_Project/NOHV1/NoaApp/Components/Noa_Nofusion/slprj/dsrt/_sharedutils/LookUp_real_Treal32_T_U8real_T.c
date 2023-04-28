/*
 * LookUp_real_Treal32_T_U8real_T.c
 *
 * Code generation for model "PubIfStateVSM_MDL".
 *
 * Model version              : 1.130
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:51 2022
 * Created for block: <S1355>/Lookup Table Dynamic2
 */

#include "rtwtypes.h"
#include "BINARYSEARCH_U8real_T.h"
#include "LookUp_real_Treal32_T_U8real_T.h"

/* Lookup Utility LookUp_real_Treal32_T_U8real_T */
void LookUp_real_Treal32_T_U8real_T(real_T *pY, const real32_T *pYData, uint8_T
  u, const real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_U8real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];

      /* cast current input to the data type/scaling of the breakpoint data */
      num = (real_T)u;
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
      (*pY) = yLeftCast;
    }
  }
}
