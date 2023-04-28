/*
 * BINARYSEARCH_U8real_T.c
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

/* Lookup Binary Search Utility BINARYSEARCH_U8real_T */
void BINARYSEARCH_U8real_T(uint32_T *piLeft, uint32_T *piRght, uint8_T u, const
  real_T *pData, uint32_T iHi)
{
  real_T uCast;

  /* cast current input to the data type/scaling of the table data */
  uCast = (real_T)u;

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
