/*
 * LATC_Test_Calc_types.h
 *
 * Code generation for model "LATC_Test_Calc".
 *
 * Model version              : 3.98
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Mar  1 14:24:20 2022
 *
 * Target selection: cnp.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LATC_Test_Calc_types_h_
#define RTW_HEADER_LATC_Test_Calc_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_struct_bTTZyxyxuDcmsFApRufjFG_
#define DEFINED_TYPEDEF_FOR_struct_bTTZyxyxuDcmsFApRufjFG_

typedef struct {
  real_T LongitudeAcc;
  real_T LateralAcce;
  real_T VehDynYawRate;
  real_T LongitudeAccValid;
  real_T LateralAcceValid;
  real_T VehDynYawRateValid;
} struct_bTTZyxyxuDcmsFApRufjFG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_QyXi3PMtN3g8xWIIuMmZME_
#define DEFINED_TYPEDEF_FOR_struct_QyXi3PMtN3g8xWIIuMmZME_

typedef struct {
  real_T FLWheelDriveDirection;
  real_T FLWheelSpdValid;
  real_T FLWheelSpd;
  real_T FRWheelDriveDirection;
  real_T FRWheelSpdValid;
  real_T FRWheelSpd;
  real_T RLWheelDriveDirection;
  real_T RLWheelSpdValid;
  real_T RLWheelSpd;
  real_T RRWheelDriveDirection;
  real_T RRWheelSpdValid;
  real_T RRWheelSpd;
  real_T ABSFailSts;
  real_T EBDFailSts;
  real_T VehicleSpdValid;
  real_T VehicleSpd;
  real_T ABSActive;
} struct_QyXi3PMtN3g8xWIIuMmZME;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_V0gwnlHg7sidAN96TKDbeD_
#define DEFINED_TYPEDEF_FOR_struct_V0gwnlHg7sidAN96TKDbeD_

typedef struct {
  real_T LeftTurnSWSts;
  real_T RightTurnSWSts;
} struct_V0gwnlHg7sidAN96TKDbeD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_A4xuVyfauj6Anh7YSrMPN_
#define DEFINED_TYPEDEF_FOR_struct_A4xuVyfauj6Anh7YSrMPN_

typedef struct {
  real_T ESPFailSts;
  real_T ESP_MasterCylindBrakePressValid;
  real_T MSRActive;
  real_T VDCActive;
  real_T PTCActive;
  real_T BTCActive;
  real_T ESP_MasterCylindBrakePress;
  real_T NoBrakeForce;
  real_T VehicleStandstill;
} struct_A4xuVyfauj6Anh7YSrMPN;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_MRXCkPvPdnBi8ZtzlOdUZE_
#define DEFINED_TYPEDEF_FOR_struct_MRXCkPvPdnBi8ZtzlOdUZE_

typedef struct {
  real_T LCKSwtReq;
} struct_MRXCkPvPdnBi8ZtzlOdUZE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_HY9uUcPaz4aUI8NJyhyWwF_
#define DEFINED_TYPEDEF_FOR_struct_HY9uUcPaz4aUI8NJyhyWwF_

typedef struct {
  real_T signal1;
  real_T VehSpdUnit;
  real_T signal3;
  real_T signal4;
} struct_HY9uUcPaz4aUI8NJyhyWwF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_f59vY4eIEEuuSP7sQ1Tx8F_
#define DEFINED_TYPEDEF_FOR_struct_f59vY4eIEEuuSP7sQ1Tx8F_

typedef struct {
  real_T SteerWheelAngle;
  real_T SteerWheelAngleSign;
  real_T SteerWheelSpd;
  real_T SteerWheelSpdSign;
} struct_f59vY4eIEEuuSP7sQ1Tx8F;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eE7qXPC4YUOzo10cRpg16C_
#define DEFINED_TYPEDEF_FOR_struct_eE7qXPC4YUOzo10cRpg16C_

typedef struct {
  real_T CURRENT_GEAR;
  real_T SHIFT_IN_PROGRESS;
} struct_eE7qXPC4YUOzo10cRpg16C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_bKeRPNB3OwDcFhH96z9fEB_
#define DEFINED_TYPEDEF_FOR_struct_bKeRPNB3OwDcFhH96z9fEB_

typedef struct {
  real_T EPS_DiverInputTrqValue;
  real_T EPS_FailSts;
  real_T EPS_SteerMod;
  real_T signal4;
  real_T signal5;
  real_T signal6;
  real_T signal7;
  real_T EPS_LKATorqOvrlDlvd;
  real_T EPS_LKATorqOvrlDlvdValid;
  real_T EPS_LKATrqOvlDlvdSts;
  real_T signal11;
  real_T signal12;
} struct_bKeRPNB3OwDcFhH96z9fEB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Sggx0dqYN0iw95fWhRVxvD_
#define DEFINED_TYPEDEF_FOR_struct_Sggx0dqYN0iw95fWhRVxvD_

typedef struct {
  real_T AccPedPosValidity;
  real_T AccPedalOverride;
  real_T AccPedalPos;
  real_T AccrPedlPosnDiagc;
  real_T NetEngTrq;
  real_T MaxEngTrqNorm;
  real_T EngTrqMinAct;
  real_T EngTrqMaxActSpd;
  real_T EngSpd;
} struct_Sggx0dqYN0iw95fWhRVxvD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_SWeaXBy0hNBwp2PTmrWfyG_
#define DEFINED_TYPEDEF_FOR_struct_SWeaXBy0hNBwp2PTmrWfyG_

typedef struct {
  real_T HazardLightSwSts;
} struct_SWeaXBy0hNBwp2PTmrWfyG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_jLlTlPObDGibb75w9d5WBH_
#define DEFINED_TYPEDEF_FOR_struct_jLlTlPObDGibb75w9d5WBH_

typedef struct {
  real_T HCU_AccelPedalPosn_Diag;
  real_T ACU_ShiftInProgress;
  real_T HCU_PTDrvMod;
  real_T TotWheelTrq;
  real_T MinPsblWheelTrq;
} struct_jLlTlPObDGibb75w9d5WBH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_SCd3AHpWDADSK5HxKjCn7D_
#define DEFINED_TYPEDEF_FOR_struct_SCd3AHpWDADSK5HxKjCn7D_

typedef struct {
  struct_bTTZyxyxuDcmsFApRufjFG ABM;
  struct_QyXi3PMtN3g8xWIIuMmZME ABS;
  struct_V0gwnlHg7sidAN96TKDbeD BCM;
  struct_A4xuVyfauj6Anh7YSrMPN ESP;
  struct_MRXCkPvPdnBi8ZtzlOdUZE HUT;
  struct_HY9uUcPaz4aUI8NJyhyWwF IP;
  struct_f59vY4eIEEuuSP7sQ1Tx8F SAS;
  struct_eE7qXPC4YUOzo10cRpg16C DTC;
  struct_bKeRPNB3OwDcFhH96z9fEB EPS;
  struct_Sggx0dqYN0iw95fWhRVxvD ECM;
  struct_SWeaXBy0hNBwp2PTmrWfyG GWA;
  struct_jLlTlPObDGibb75w9d5WBH HCU;
} struct_SCd3AHpWDADSK5HxKjCn7D;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_LATC_Test_Calc_T RT_MODEL_LATC_Test_Calc_T;

#endif                                 /* RTW_HEADER_LATC_Test_Calc_types_h_ */
