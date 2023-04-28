/*
 * plook_u32u8_binckan.c
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
#include "plook_u32u8_binckan.h"

uint32_T plook_u32u8_binckan(uint8_T u, const uint8_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'binary'
     Interpolation method: 'Use nearest'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32u8(u, bp, maxIndex >> 1U, maxIndex);
    if ((bpIndex < maxIndex) && ((uint8_T)((uint32_T)bp[bpIndex + 1U] - u) <=
         (uint8_T)((uint32_T)u - bp[bpIndex]))) {
      bpIndex++;
    }
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}
