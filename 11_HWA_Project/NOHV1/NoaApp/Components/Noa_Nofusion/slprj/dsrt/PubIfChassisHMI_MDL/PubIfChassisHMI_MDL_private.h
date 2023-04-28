/*
 * PubIfChassisHMI_MDL_private.h
 *
 * Code generation for model "PubIfChassisHMI_MDL".
 *
 * Model version              : 3.97
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:03:19 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfChassisHMI_MDL_private_h_
#define RTW_HEADER_PubIfChassisHMI_MDL_private_h_
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

extern const uint8_T rtCP_pooled_Zmi8SeGwJZSV[9];
extern const uint8_T rtCP_pooled_GwTGz1LIdwoW[6];
extern const uint8_T rtCP_pooled_tgPraOiimkLg[2];
extern const uint8_T rtCP_pooled_mOgC2pKdFv8B[10];
extern const uint8_T rtCP_pooled_a9VGCyNtPwgV[21];

#define rtCP_DirectLookupTablenD1_table rtCP_pooled_Zmi8SeGwJZSV /* Computed Parameter: rtCP_DirectLookupTablenD1_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)1'
                                                                  */
#define rtCP_DirectLookupTablenD2_table rtCP_pooled_Zmi8SeGwJZSV /* Computed Parameter: rtCP_DirectLookupTablenD2_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)2'
                                                                  */
#define rtCP_DirectLookupTablenD3_table rtCP_pooled_Zmi8SeGwJZSV /* Computed Parameter: rtCP_DirectLookupTablenD3_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)3'
                                                                  */
#define rtCP_DirectLookupTablenD_table rtCP_pooled_Zmi8SeGwJZSV  /* Computed Parameter: rtCP_DirectLookupTablenD_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)'
                                                                  */
#define rtCP_DirectLookupTablenD8_table rtCP_pooled_Zmi8SeGwJZSV /* Computed Parameter: rtCP_DirectLookupTablenD8_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)8'
                                                                  */
#define rtCP_DirectLookupTablenD9_table rtCP_pooled_Zmi8SeGwJZSV /* Computed Parameter: rtCP_DirectLookupTablenD9_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)9'
                                                                  */
#define rtCP_DirectLookupTablenD4_table rtCP_pooled_GwTGz1LIdwoW /* Computed Parameter: rtCP_DirectLookupTablenD4_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)4'
                                                                  */
#define rtCP_DirectLookupTablenD5_table rtCP_pooled_tgPraOiimkLg /* Computed Parameter: rtCP_DirectLookupTablenD5_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)5'
                                                                  */
#define rtCP_DirectLookupTablenD10_table rtCP_pooled_mOgC2pKdFv8B/* Computed Parameter: rtCP_DirectLookupTablenD10_table
                                                                  * Referenced by: '<S7>/Direct Lookup Table (n-D)10'
                                                                  */
#define rtCP_DirectLookupTablenD_table_i rtCP_pooled_a9VGCyNtPwgV/* Computed Parameter: rtCP_DirectLookupTablenD_table_i
                                                                  * Referenced by: '<S8>/Direct Lookup Table (n-D)'
                                                                  */
#define rtCP_DirectLookupTablenD3_table_l rtCP_pooled_a9VGCyNtPwgV/* Computed Parameter: rtCP_DirectLookupTablenD3_table_l
                                                                   * Referenced by: '<S8>/Direct Lookup Table (n-D)3'
                                                                   */
#define rtCP_DirectLookupTablenD4_table_b rtCP_pooled_a9VGCyNtPwgV/* Computed Parameter: rtCP_DirectLookupTablenD4_table_b
                                                                   * Referenced by: '<S8>/Direct Lookup Table (n-D)4'
                                                                   */
#define rtCP_DirectLookupTablenD1_table_c rtCP_pooled_a9VGCyNtPwgV/* Computed Parameter: rtCP_DirectLookupTablenD1_table_c
                                                                   * Referenced by: '<S8>/Direct Lookup Table (n-D)1'
                                                                   */

/* Invariant block signals (default storage) */
extern const ConstB_PubIfChassisHMI_MDL_h_T PubIfChassisHMI_MDL_ConstB;

#endif                           /* RTW_HEADER_PubIfChassisHMI_MDL_private_h_ */
