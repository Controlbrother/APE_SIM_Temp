/*
 * PubIfControlLONC_MDL_private.h
 *
 * Code generation for model "PubIfControlLONC_MDL".
 *
 * Model version              : 3.55
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:11 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfControlLONC_MDL_private_h_
#define RTW_HEADER_PubIfControlLONC_MDL_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const real32_T rtCP_pooled_NW5S123tNzBV[7];
extern const real32_T rtCP_pooled_AkOvM3SvKtry[6];
extern const real32_T rtCP_pooled_e5bDGxlXPyBM[6];
extern const real32_T rtCP_pooled_z4jblpbiRtrs[5];
extern const real32_T rtCP_pooled_YlHnZD2tMsOJ[5];
extern const real32_T rtCP_pooled_aiQYguqdg9dw[4];
extern const real32_T rtCP_pooled_dFPJch8bwLM0[4];
extern const real32_T rtCP_pooled_4vRqyzYqph23[4];
extern const real32_T rtCP_pooled_vTISHgIuFMxf[5];
extern const real32_T rtCP_pooled_B3P2tRpxEYU2[5];
extern const real32_T rtCP_pooled_XAGbwgWD2Lg6[3];
extern const real32_T rtCP_pooled_jfTR2E3OW13e[3];
extern const real32_T rtCP_pooled_hpniypTOXcR6[11];
extern const real32_T rtCP_pooled_DPPMmRDbYjFC[11];

#define rtCP_Constant_Value_g          rtCP_pooled_NW5S123tNzBV  /* Computed Parameter: rtCP_Constant_Value_g
                                                                  * Referenced by: '<S14>/Constant'
                                                                  */
#define rtCP_uDLookupTable_tableData   rtCP_pooled_AkOvM3SvKtry  /* Computed Parameter: rtCP_uDLookupTable_tableData
                                                                  * Referenced by: '<S14>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_e5bDGxlXPyBM  /* Computed Parameter: rtCP_uDLookupTable_bp01Data
                                                                  * Referenced by: '<S14>/1-D Lookup Table'
                                                                  */
#define rtCP_FilterTime_tableData      rtCP_pooled_z4jblpbiRtrs  /* Computed Parameter: rtCP_FilterTime_tableData
                                                                  * Referenced by: '<S23>/FilterTime'
                                                                  */
#define rtCP_FilterTime_bp01Data       rtCP_pooled_YlHnZD2tMsOJ  /* Computed Parameter: rtCP_FilterTime_bp01Data
                                                                  * Referenced by: '<S23>/FilterTime'
                                                                  */
#define rtCP_tfxvCvFilter1_tableData   rtCP_pooled_aiQYguqdg9dw  /* Computed Parameter: rtCP_tfxvCvFilter1_tableData
                                                                  * Referenced by: '<S22>/tfxvCvFilter1 '
                                                                  */
#define rtCP_tfxvCvFilter1_bp01Data    rtCP_pooled_dFPJch8bwLM0  /* Computed Parameter: rtCP_tfxvCvFilter1_bp01Data
                                                                  * Referenced by: '<S22>/tfxvCvFilter1 '
                                                                  */
#define rtCP_tfxvCvFilter2_tableData   rtCP_pooled_4vRqyzYqph23  /* Computed Parameter: rtCP_tfxvCvFilter2_tableData
                                                                  * Referenced by: '<S22>/tfxvCvFilter2'
                                                                  */
#define rtCP_tfxvCvFilter2_bp01Data    rtCP_pooled_dFPJch8bwLM0  /* Computed Parameter: rtCP_tfxvCvFilter2_bp01Data
                                                                  * Referenced by: '<S22>/tfxvCvFilter2'
                                                                  */
#define rtCP_FilterTime_tableData_g    rtCP_pooled_vTISHgIuFMxf  /* Computed Parameter: rtCP_FilterTime_tableData_g
                                                                  * Referenced by: '<S31>/FilterTime'
                                                                  */
#define rtCP_FilterTime_bp01Data_h     rtCP_pooled_B3P2tRpxEYU2  /* Computed Parameter: rtCP_FilterTime_bp01Data_h
                                                                  * Referenced by: '<S31>/FilterTime'
                                                                  */
#define rtCP_P_VlcdFxLimPosChar_tableData rtCP_pooled_XAGbwgWD2Lg6/* Computed Parameter: rtCP_P_VlcdFxLimPosChar_tableData
                                                                   * Referenced by: '<S10>/P_VlcdFxLimPosChar '
                                                                   */
#define rtCP_P_VlcdFxLimPosChar_bp01Data rtCP_pooled_jfTR2E3OW13e/* Computed Parameter: rtCP_P_VlcdFxLimPosChar_bp01Data
                                                                  * Referenced by: '<S10>/P_VlcdFxLimPosChar '
                                                                  */
#define rtCP_uDLookupTable_tableData_a rtCP_pooled_hpniypTOXcR6  /* Computed Parameter: rtCP_uDLookupTable_tableData_a
                                                                  * Referenced by: '<S25>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_l  rtCP_pooled_DPPMmRDbYjFC  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_l
                                                                  * Referenced by: '<S25>/1-D Lookup Table'
                                                                  */

/* Invariant block signals (default storage) */
extern const ConstB_PubIfControlLONC_MDL_h_T PubIfControlLONC_MDL_ConstB;

#endif                          /* RTW_HEADER_PubIfControlLONC_MDL_private_h_ */
