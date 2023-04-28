/*
 * PubIfCommonVIE_MDL_private.h
 *
 * Code generation for model "PubIfCommonVIE_MDL".
 *
 * Model version              : 3.34
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:54 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfCommonVIE_MDL_private_h_
#define RTW_HEADER_PubIfCommonVIE_MDL_private_h_
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

extern const real32_T rtCP_pooled_q1FmMa19NGHd[3];
extern const real32_T rtCP_pooled_xTlG0JdIhEgg[3];
extern const real32_T rtCP_pooled_6zLTJuYhVjz5[4];
extern const real32_T rtCP_pooled_1AtWNn9xu4UB[4];
extern const real32_T rtCP_pooled_vv91xKbMhYyv[4];
extern const real32_T rtCP_pooled_JQJZI755I2nj[4];

#define rtCP_t_tauAxvRef_tableData     rtCP_pooled_q1FmMa19NGHd  /* Computed Parameter: rtCP_t_tauAxvRef_tableData
                                                                  * Referenced by: '<S8>/t_tauAxvRef'
                                                                  */
#define rtCP_t_tauAxvRef_bp01Data      rtCP_pooled_xTlG0JdIhEgg  /* Computed Parameter: rtCP_t_tauAxvRef_bp01Data
                                                                  * Referenced by: '<S8>/t_tauAxvRef'
                                                                  */
#define rtCP_t_FiltaxvRoadSlope_tableData rtCP_pooled_6zLTJuYhVjz5/* Computed Parameter: rtCP_t_FiltaxvRoadSlope_tableData
                                                                   * Referenced by: '<S12>/t_FiltaxvRoadSlope'
                                                                   */
#define rtCP_t_FiltaxvRoadSlope_bp01Data rtCP_pooled_1AtWNn9xu4UB/* Computed Parameter: rtCP_t_FiltaxvRoadSlope_bp01Data
                                                                  * Referenced by: '<S12>/t_FiltaxvRoadSlope'
                                                                  */
#define rtCP_W_tableData               rtCP_pooled_vv91xKbMhYyv  /* Computed Parameter: rtCP_W_tableData
                                                                  * Referenced by: '<S3>/W'
                                                                  */
#define rtCP_W_bp01Data                rtCP_pooled_JQJZI755I2nj  /* Computed Parameter: rtCP_W_bp01Data
                                                                  * Referenced by: '<S3>/W'
                                                                  */

/* Invariant block signals (default storage) */
extern const ConstB_PubIfCommonVIE_MDL_h_T PubIfCommonVIE_MDL_ConstB;

#endif                            /* RTW_HEADER_PubIfCommonVIE_MDL_private_h_ */
