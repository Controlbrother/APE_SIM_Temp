/*
 * binsearch_u32u8.c
 *
 * Code generation for model "PubIfStateVSM_MDL".
 *
 * Model version              : 1.130
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:51 2022
 * Created for block: PubIfStateVSM_MDL
 */

#include "rtwtypes.h"
#include "binsearch_u32u8.h"

uint32_T binsearch_u32u8(uint8_T u, const uint8_T bp[], uint32_T startIndex,
  uint32_T maxIndex)
{
  uint32_T bpIdx;
  uint32_T bpIndex;
  uint32_T iRght;

  /* Binary Search */
  bpIdx = startIndex;
  bpIndex = 0U;
  iRght = maxIndex;
  while (iRght - bpIndex > 1U) {
    if (u < bp[bpIdx]) {
      iRght = bpIdx;
    } else {
      bpIndex = bpIdx;
    }

    bpIdx = (iRght + bpIndex) >> 1U;
  }

  return bpIndex;
}
