/*
 * BINARYSEARCH_real32_Treal_T.c
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

/* Lookup Binary Search Utility BINARYSEARCH_real32_Treal_T */
void BINARYSEARCH_real32_Treal_T(uint32_T *piLeft, uint32_T *piRght, real32_T u,
  const real_T *pData, uint32_T iHi)
{
  real_T uCast;

  /* cast current input to the data type/scaling of the table data */
  uCast = u;

  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (uCast < pData[0] ) {
    /* Less than the smallest point in the table. */
    *piRght = 0U;
  } else if (uCast >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (uCast < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}
