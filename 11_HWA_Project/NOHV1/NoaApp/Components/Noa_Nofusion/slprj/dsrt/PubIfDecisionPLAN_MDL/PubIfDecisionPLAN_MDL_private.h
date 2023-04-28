/*
 * PubIfDecisionPLAN_MDL_private.h
 *
 * Code generation for model "PubIfDecisionPLAN_MDL".
 *
 * Model version              : 1.99
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:04:00 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PubIfDecisionPLAN_MDL_private_h_
#define RTW_HEADER_PubIfDecisionPLAN_MDL_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "PubIfDecisionPLAN_MDL.h"

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

extern const real_T rtCP_pooled_zkiJnPGhNMBI[2];
extern const real_T rtCP_pooled_tlsSEsNARtD1[2];
extern const real_T rtCP_pooled_czKndpu6HQ30[11];
extern const real32_T rtCP_pooled_5kX5JMu0jTCk[4];
extern const real32_T rtCP_pooled_ZrnH9lFmjJfC[4];
extern const real32_T rtCP_pooled_b185jh09PzIh[4];
extern const real32_T rtCP_pooled_yv07bOgEH2h8[2];
extern const real32_T rtCP_pooled_yvKpZPimIoqY[2];
extern const real32_T rtCP_pooled_8uS6YudXpITt[2];
extern const real32_T rtCP_pooled_h78bhId3bsMw[6];
extern const real32_T rtCP_pooled_8lZlFs1TcCcz[6];
extern const real32_T rtCP_pooled_wkMdhk5Ywaq1[12];
extern const real32_T rtCP_pooled_Ih1kz6OCnVht[3];
extern const real32_T rtCP_pooled_7vIdJFYuHnqD[3];
extern const real32_T rtCP_pooled_zPJMGN0R5QSi[11];
extern const real32_T rtCP_pooled_dseSpE1whyRF[4];
extern const real32_T rtCP_pooled_6XIgCpwJ0YId[4];
extern const real32_T rtCP_pooled_wFxC14fgrmo8[5];
extern const real32_T rtCP_pooled_xBooDU8y2rYf[5];
extern const uint32_T rtCP_pooled_6ctZZI6rDglB[2];
extern const uint32_T rtCP_pooled_oBc9SmOqSpNv[2];
extern const uint32_T rtCP_pooled_wI2Ssoe1OxCP[2];
extern const uint8_T rtCP_pooled_tHfAIErDYVEc[11];
extern const uint8_T rtCP_pooled_kEDv7Ol9lOjy[5];

#define rtCP_uDLookupTable1_tableData  rtCP_pooled_zkiJnPGhNMBI  /* Expression: [35 90]
                                                                  * Referenced by: '<S132>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data   rtCP_pooled_tlsSEsNARtD1  /* Expression: [11.1 27.7]
                                                                  * Referenced by: '<S132>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable2_tableData  rtCP_pooled_zkiJnPGhNMBI  /* Expression: [35 90]
                                                                  * Referenced by: '<S133>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp01Data   rtCP_pooled_tlsSEsNARtD1  /* Expression: [11.1 27.7]
                                                                  * Referenced by: '<S133>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_tableData_p rtCP_pooled_zkiJnPGhNMBI /* Expression: [35 90]
                                                                  * Referenced by: '<S134>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp01Data_h rtCP_pooled_tlsSEsNARtD1  /* Expression: [11.1 27.7]
                                                                  * Referenced by: '<S134>/1-D Lookup Table2'
                                                                  */
#define rtCP_Constant2_Value_d         rtCP_pooled_czKndpu6HQ30  /* Expression: zeros(1,11)
                                                                  * Referenced by: '<S488>/Constant2'
                                                                  */
#define rtCP_UnitDelay4_InitialCondition rtCP_pooled_czKndpu6HQ30/* Computed Parameter: rtCP_UnitDelay4_InitialCondition
                                                                  * Referenced by: '<S460>/Unit Delay4'
                                                                  */
#define rtCP_uDLookupTable_tableData   rtCP_pooled_5kX5JMu0jTCk  /* Computed Parameter: rtCP_uDLookupTable_tableData
                                                                  * Referenced by: '<S82>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_ZrnH9lFmjJfC  /* Computed Parameter: rtCP_uDLookupTable_bp01Data
                                                                  * Referenced by: '<S82>/1-D Lookup Table'
                                                                  */
#define rtCP_DesireDistance3_bp01Data  rtCP_pooled_b185jh09PzIh  /* Computed Parameter: rtCP_DesireDistance3_bp01Data
                                                                  * Referenced by: '<S52>/DesireDistance3'
                                                                  */
#define rtCP_DesireDistance1_bp01Data  rtCP_pooled_b185jh09PzIh  /* Computed Parameter: rtCP_DesireDistance1_bp01Data
                                                                  * Referenced by: '<S52>/DesireDistance1'
                                                                  */
#define rtCP_uDLookupTable_tableData_n rtCP_pooled_yv07bOgEH2h8  /* Computed Parameter: rtCP_uDLookupTable_tableData_n
                                                                  * Referenced by: '<S53>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_b  rtCP_pooled_yv07bOgEH2h8  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_b
                                                                  * Referenced by: '<S53>/1-D Lookup Table'
                                                                  */
#define rtCP_DesireDistance2_bp01Data  rtCP_pooled_b185jh09PzIh  /* Computed Parameter: rtCP_DesireDistance2_bp01Data
                                                                  * Referenced by: '<S52>/DesireDistance2'
                                                                  */
#define rtCP_uDLookupTable2_tableData_o rtCP_pooled_yvKpZPimIoqY /* Computed Parameter: rtCP_uDLookupTable2_tableData_o
                                                                  * Referenced by: '<S74>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable2_bp01Data_h1 rtCP_pooled_8uS6YudXpITt /* Computed Parameter: rtCP_uDLookupTable2_bp01Data_h1
                                                                  * Referenced by: '<S74>/1-D Lookup Table2'
                                                                  */
#define rtCP_uDLookupTable_tableData_c rtCP_pooled_h78bhId3bsMw  /* Computed Parameter: rtCP_uDLookupTable_tableData_c
                                                                  * Referenced by: '<S130>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_l  rtCP_pooled_8lZlFs1TcCcz  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_l
                                                                  * Referenced by: '<S130>/1-D Lookup Table'
                                                                  */
#define rtCP_Constant18_Value          rtCP_pooled_wkMdhk5Ywaq1  /* Computed Parameter: rtCP_Constant18_Value
                                                                  * Referenced by: '<S154>/Constant18'
                                                                  */
#define rtCP_uDLookupTable_tableData_b rtCP_pooled_Ih1kz6OCnVht  /* Computed Parameter: rtCP_uDLookupTable_tableData_b
                                                                  * Referenced by: '<S107>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_i  rtCP_pooled_7vIdJFYuHnqD  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_i
                                                                  * Referenced by: '<S107>/1-D Lookup Table'
                                                                  */
#define rtCP_Constant3_Value_g         rtCP_pooled_zPJMGN0R5QSi  /* Computed Parameter: rtCP_Constant3_Value_g
                                                                  * Referenced by: '<S484>/Constant3'
                                                                  */
#define rtCP_uDLookupTable1_tableData_g rtCP_pooled_dseSpE1whyRF /* Computed Parameter: rtCP_uDLookupTable1_tableData_g
                                                                  * Referenced by: '<S484>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable8_tableData  rtCP_pooled_6XIgCpwJ0YId  /* Computed Parameter: rtCP_uDLookupTable8_tableData
                                                                  * Referenced by: '<S484>/1-D Lookup Table8'
                                                                  */
#define rtCP_Constant1_Value_l         rtCP_pooled_zPJMGN0R5QSi  /* Computed Parameter: rtCP_Constant1_Value_l
                                                                  * Referenced by: '<S486>/Constant1'
                                                                  */
#define rtCP_Constant3_Value_o         rtCP_pooled_zPJMGN0R5QSi  /* Computed Parameter: rtCP_Constant3_Value_o
                                                                  * Referenced by: '<S486>/Constant3'
                                                                  */
#define rtCP_uDLookupTable1_tableData_k rtCP_pooled_dseSpE1whyRF /* Computed Parameter: rtCP_uDLookupTable1_tableData_k
                                                                  * Referenced by: '<S486>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable8_tableData_d rtCP_pooled_6XIgCpwJ0YId /* Computed Parameter: rtCP_uDLookupTable8_tableData_d
                                                                  * Referenced by: '<S486>/1-D Lookup Table8'
                                                                  */
#define rtCP_SafeDistance_tableData    rtCP_pooled_wFxC14fgrmo8  /* Computed Parameter: rtCP_SafeDistance_tableData
                                                                  * Referenced by: '<S461>/SafeDistance'
                                                                  */
#define rtCP_SafeDistance_bp01Data     rtCP_pooled_xBooDU8y2rYf  /* Computed Parameter: rtCP_SafeDistance_bp01Data
                                                                  * Referenced by: '<S461>/SafeDistance'
                                                                  */
#define rtCP_UnitDelay8_InitialCondition rtCP_pooled_zPJMGN0R5QSi/* Expression: single(zeros(11,1))
                                                                  * Referenced by: '<S460>/Unit Delay8'
                                                                  */
#define rtCP_UnitDelay7_InitialCondition rtCP_pooled_zPJMGN0R5QSi/* Expression: single(zeros(11,1))
                                                                  * Referenced by: '<S460>/Unit Delay7'
                                                                  */
#define rtCP_UnitDelay5_InitialCondition rtCP_pooled_zPJMGN0R5QSi/* Expression: single(zeros(11,1))
                                                                  * Referenced by: '<S460>/Unit Delay5'
                                                                  */
#define rtCP_UnitDelay6_InitialCondition rtCP_pooled_zPJMGN0R5QSi/* Expression: single(zeros(11,1))
                                                                  * Referenced by: '<S460>/Unit Delay6'
                                                                  */
#define rtCP_UnitDelay9_InitialCondition rtCP_pooled_zPJMGN0R5QSi/* Expression: single(zeros(11,1))
                                                                  * Referenced by: '<S460>/Unit Delay9'
                                                                  */
#define rtCP_DesireDistance1_maxIndex  rtCP_pooled_6ctZZI6rDglB  /* Computed Parameter: rtCP_DesireDistance1_maxIndex
                                                                  * Referenced by: '<S52>/DesireDistance1'
                                                                  */
#define rtCP_DesireDistance2_maxIndex  rtCP_pooled_6ctZZI6rDglB  /* Computed Parameter: rtCP_DesireDistance2_maxIndex
                                                                  * Referenced by: '<S52>/DesireDistance2'
                                                                  */
#define rtCP_velSubjNegToleranceAdd_maxIndex rtCP_pooled_oBc9SmOqSpNv/* Computed Parameter: rtCP_velSubjNegToleranceAdd_maxIndex
                                                                      * Referenced by: '<S58>/velSubjNegToleranceAdd'
                                                                      */
#define rtCP_uDLookupTable1_maxIndex   rtCP_pooled_wI2Ssoe1OxCP  /* Computed Parameter: rtCP_uDLookupTable1_maxIndex
                                                                  * Referenced by: '<S128>/2-D Lookup Table1'
                                                                  */
#define rtCP_UnitDelay11_InitialCondition rtCP_pooled_tHfAIErDYVEc/* Expression: uint8(zeros(11,1))
                                                                   * Referenced by: '<S460>/Unit Delay11'
                                                                   */
#define rtCP_UnitDelay10_InitialCondition rtCP_pooled_tHfAIErDYVEc/* Computed Parameter: rtCP_UnitDelay10_InitialCondition
                                                                   * Referenced by: '<S460>/Unit Delay10'
                                                                   */
#define rtCP_DirectLookupTablenD_table rtCP_pooled_kEDv7Ol9lOjy  /* Computed Parameter: rtCP_DirectLookupTablenD_table
                                                                  * Referenced by: '<S189>/Direct Lookup Table (n-D)'
                                                                  */

/* Invariant block signals (default storage) */
extern const ConstB_PubIfDecisionPLAN_MDL_h_T PubIfDecisionPLAN_MDL_ConstB;
extern void PubIfDecisionPLAN_MDL_PointPre(real32_T rtu_mPointX, real32_T
  rtu_mPointY, real32_T rtu_kapTraj, real32_T rtu_mpsTrajSpd, real32_T
  rtu_sPreTime, real32_T *rty_mPrePointX, real32_T *rty_mPrePointY);
extern void PubIfDecisionPLAN_MDL_FrenetCS(real32_T rtu_LaneC0, real32_T
  rtu_LaneC1, real32_T rtu_LaneC2, real32_T rtu_PointX, real32_T rtu_PointY,
  real32_T *rty_PointFrenetD);

#endif                         /* RTW_HEADER_PubIfDecisionPLAN_MDL_private_h_ */
