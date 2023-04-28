/*
 * Noa_Nofusion.h
 *
 * Code generation for model "Noa_Nofusion".
 *
 * Model version              : 1.579
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Mar  9 12:18:59 2022
 *
 * Target selection: dsrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Noa_Nofusion_h_
#define RTW_HEADER_Noa_Nofusion_h_
#include <math.h>
#include <string.h>
#ifndef Noa_Nofusion_COMMON_INCLUDES_
#define Noa_Nofusion_COMMON_INCLUDES_
#include <math.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Noa_Nofusion_types.h"
#include "Noa_Nofusion_dsmpbap.h"
#include "can_fd_message.h"
#include "roadfus_L3.h"
#include "RFMResult.h"
#include "mcuEQ4.h"
#endif                                 /* Noa_Nofusion_COMMON_INCLUDES_ */

#include "Noa_Nofusion_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#define PubIfControlLATC_MDL_MDLREF_HIDE_CHILD_
#include "PubIfControlLATC_MDL.h"
#define PubIfControlLONC_MDL_MDLREF_HIDE_CHILD_
#include "PubIfControlLONC_MDL.h"
#define PubIfDecisionLSM_MDL_MDLREF_HIDE_CHILD_
#include "PubIfDecisionLSM_MDL.h"
#define PubIfDecisionPLAN_MDL_MDLREF_HIDE_CHILD_
#include "PubIfDecisionPLAN_MDL.h"
#define PubIfStateVSM_MDL_MDLREF_HIDE_CHILD_
#include "PubIfStateVSM_MDL.h"
#define PubIfCommonVIE_MDL_MDLREF_HIDE_CHILD_
#include "PubIfCommonVIE_MDL.h"
#define PubIfChassisHMI_MDL_MDLREF_HIDE_CHILD_
#include "PubIfChassisHMI_MDL.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

/* Block signals for system '<S30>/CL' */
typedef struct {
  real32_T ObjDx[6];                   /* '<S30>/CL' */
  real32_T ObjDy[6];                   /* '<S30>/CL' */
  real32_T ObjVx[6];                   /* '<S30>/CL' */
  real32_T ObjVy[6];                   /* '<S30>/CL' */
  real32_T ObjAx[6];                   /* '<S30>/CL' */
  uint8_T P[6];                        /* '<S30>/CL' */
  uint8_T ObjMoveSts[6];               /* '<S30>/CL' */
  uint8_T ObjFusType[6];               /* '<S30>/CL' */
  uint8_T ObjID[6];                    /* '<S30>/CL' */
  uint8_T ObjAge[6];                   /* '<S30>/CL' */
} B_CL_Noa_Nofusion_T;

/* Block signals for system '<S9>/For Each Subsystem1' */
typedef struct {
  EQ4_LH_ELEM_BUS BusAssignment4;      /* '<S106>/Bus Assignment4' */
} B_CoreSubsys_Noa_Nofusion_T;

/* Block signals for system '<S9>/For Each Subsystem2' */
typedef struct {
  EQ4_LRE_ELEM_BUS BusAssignment4;     /* '<S107>/Bus Assignment4' */
} B_CoreSubsys_Noa_Nofusion_c_T;

/* Block signals for system '<S9>/For Each Subsystem3' */
typedef struct {
  EQ4_LA_ELEM_BUS BusAssignment4;      /* '<S108>/Bus Assignment4' */
} B_CoreSubsys_Noa_Nofusion_ca_T;

/* Block signals for system '<S9>/For Each Subsystem4' */
typedef struct {
  EQ4_LAP_ELEM_BUS BusAssignment4;     /* '<S109>/Bus Assignment4' */
} B_CoreSubsys_Noa_Nofusion_cau_T;

/* Block signals for system '<S6>/CheckSum8Bclc2' */
typedef struct {
  uint8_T MsgByte[64];                 /* '<S6>/CheckSum8Bclc2' */
} B_CheckSum8Bclc2_Noa_Nofusion_T;

/* Block signals for system '<S132>/For Each Subsystem1' */
typedef struct {
  EQ4_LH_ELEM_BUS BusAssignment4;      /* '<S136>/Bus Assignment4' */
} B_CoreSubsys_Noa_Nofusion_caua_T;

/* Block signals for system '<S132>/For Each Subsystem2' */
typedef struct {
  EQ4_LRE_ELEM_BUS BusAssignment4;     /* '<S137>/Bus Assignment4' */
} B_CoreSubsys_Noa_Nofusion_cauao_T;

/* Block signals for system '<S132>/For Each Subsystem3' */
typedef struct {
  EQ4_LA_ELEM_BUS BusAssignment4;      /* '<S138>/Bus Assignment4' */
} B_CoreSubsys_Noa_Nofusion_cauaoh_T;

/* Block signals for system '<S22>/MATLAB Function5' */
typedef struct {
  real32_T a0;                         /* '<S22>/MATLAB Function5' */
  real32_T a1;                         /* '<S22>/MATLAB Function5' */
  real32_T a2;                         /* '<S22>/MATLAB Function5' */
  real32_T a3;                         /* '<S22>/MATLAB Function5' */
  real32_T Rmin;                       /* '<S22>/MATLAB Function5' */
  real32_T Rmax;                       /* '<S22>/MATLAB Function5' */
} B_MATLABFunction5_Noa_Nofusion_T;

/* Block signals for system '<S179>/ACC_DisplayBar' */
typedef struct {
  uint8_T DisplayBar;                  /* '<S179>/ACC_DisplayBar' */
} B_ACC_DisplayBar_Noa_Nofusion_T;

/* Block signals for system '<S179>/Dyc' */
typedef struct {
  real32_T kapTrajFilt;                /* '<S179>/Dyc' */
  real32_T kapCourseErr;               /* '<S179>/Dyc' */
  real32_T dxC0;                       /* '<S179>/Dyc' */
  real32_T aPC0;                       /* '<S179>/Dyc' */
  real32_T bPC0;                       /* '<S179>/Dyc' */
  real32_T cPC0;                       /* '<S179>/Dyc' */
  real32_T aPC1;                       /* '<S179>/Dyc' */
  real32_T bPC1;                       /* '<S179>/Dyc' */
  real32_T cPC1;                       /* '<S179>/Dyc' */
  real32_T ObjDyc[15];                 /* '<S179>/Dyc' */
} B_Dyc_Noa_Nofusion_T;

/* Block signals for system '<S179>/DycCutIn' */
typedef struct {
  real32_T ObjDycCutIn[15];            /* '<S179>/DycCutIn' */
  real32_T ObjDycFilt[15];             /* '<S179>/DycCutIn' */
  boolean_T ObjMove_b[15];             /* '<S179>/DycCutIn' */
} B_DycCutIn_Noa_Nofusion_T;

/* Block signals for system '<S179>/DycHistCalc' */
typedef struct {
  real32_T ObjDycHist[15];             /* '<S179>/DycHistCalc' */
  real32_T ObjqDycHist[15];            /* '<S179>/DycHistCalc' */
} B_DycHistCalc_Noa_Nofusion_T;

/* Block signals for system '<S179>/LostTargetCalc' */
typedef struct {
  real32_T ReRange;                    /* '<S179>/LostTargetCalc' */
  real32_T ReArG;                      /* '<S179>/LostTargetCalc' */
  real32_T ReDx;                       /* '<S179>/LostTargetCalc' */
  real32_T ReDy;                       /* '<S179>/LostTargetCalc' */
  real32_T ReVx;                       /* '<S179>/LostTargetCalc' */
  real32_T ReDyc;                      /* '<S179>/LostTargetCalc' */
  real32_T ReVyc;                      /* '<S179>/LostTargetCalc' */
  real32_T tTargetLost;                /* '<S179>/LostTargetCalc' */
  uint8_T ReID;                        /* '<S179>/LostTargetCalc' */
  boolean_T ReCutIn_b;                 /* '<S179>/LostTargetCalc' */
  boolean_T TargetLost_b;              /* '<S179>/LostTargetCalc' */
  boolean_T Covered_b;                 /* '<S179>/LostTargetCalc' */
} B_LostTargetCalc_Noa_Nofusion_T;

/* Block signals for system '<S179>/Lpb' */
typedef struct {
  real32_T ObjLpb[15];                 /* '<S179>/Lpb' */
  real32_T ObjLpbL[15];                /* '<S179>/Lpb' */
  real32_T ObjLpbR[15];                /* '<S179>/Lpb' */
} B_Lpb_Noa_Nofusion_T;

/* Block signals for system '<S190>/P0TrajHistCalc01' */
typedef struct {
  real32_T P0Dyc;                      /* '<S190>/P0TrajHistCalc01' */
  real32_T P0TrajHistDxv[24];          /* '<S190>/P0TrajHistCalc01' */
  real32_T P0TrajHistDyv[24];          /* '<S190>/P0TrajHistCalc01' */
  uint8_T P0TrajHistNum;               /* '<S190>/P0TrajHistCalc01' */
} B_P0TrajHistCalc01_Noa_Nofusion_T;

/* Block signals for system '<S190>/P0TrajHistCalc1' */
typedef struct {
  real32_T P0TrajHistDxv[48];          /* '<S190>/P0TrajHistCalc1' */
  real32_T P0TrajHistDyv[48];          /* '<S190>/P0TrajHistCalc1' */
  real32_T a;                          /* '<S190>/P0TrajHistCalc1' */
  real32_T b;                          /* '<S190>/P0TrajHistCalc1' */
  real32_T c;                          /* '<S190>/P0TrajHistCalc1' */
  real32_T d;                          /* '<S190>/P0TrajHistCalc1' */
  real32_T dxMin;                      /* '<S190>/P0TrajHistCalc1' */
  real32_T dxMax;                      /* '<S190>/P0TrajHistCalc1' */
  uint8_T P0TrajHistNum;               /* '<S190>/P0TrajHistCalc1' */
  boolean_T LineValid;                 /* '<S190>/P0TrajHistCalc1' */
} B_P0TrajHistCalc1_Noa_Nofusion_T;

/* Block signals for system '<S179>/Plaus' */
typedef struct {
  real32_T ObjPlaus[15];               /* '<S179>/Plaus' */
  real32_T ObjPlausLeft[15];           /* '<S179>/Plaus' */
  real32_T ObjPlausRight[15];          /* '<S179>/Plaus' */
} B_Plaus_Noa_Nofusion_T;

/* Block signals for system '<S179>/Spw' */
typedef struct {
  real32_T ObjSpw[15];                 /* '<S179>/Spw' */
  real32_T ObjSpwLeft[15];             /* '<S179>/Spw' */
  real32_T ObjSpwRight[15];            /* '<S179>/Spw' */
  real32_T ObjOnLeft[15];              /* '<S179>/Spw' */
  real32_T ObjOnRight[15];             /* '<S179>/Spw' */
  real32_T ObjDycASI[15];              /* '<S179>/Spw' */
  real32_T ObjDyKapErr[15];            /* '<S179>/Spw' */
} B_Spw_Noa_Nofusion_T;

/* Block signals for system '<S179>/Std' */
typedef struct {
  real32_T y;                          /* '<S179>/Std' */
} B_Std_Noa_Nofusion_T;

/* Block signals for system '<S179>/TargetBrake' */
typedef struct {
  real32_T TargetVxG;                  /* '<S179>/TargetBrake' */
  real32_T TargetVyG;                  /* '<S179>/TargetBrake' */
  boolean_T TargetBrake_b;             /* '<S179>/TargetBrake' */
} B_TargetBrake_Noa_Nofusion_T;

/* Block signals for system '<S179>/TimeCalc' */
typedef struct {
  real32_T tSameHandleT;               /* '<S179>/TimeCalc' */
} B_TimeCalc_Noa_Nofusion_T;

/* Block signals for system '<S179>/Trajectory' */
typedef struct {
  real32_T Memory25[240];              /* '<S206>/Memory25' */
  real32_T Memory26[240];              /* '<S206>/Memory26' */
  real32_T Memory27[240];              /* '<S206>/Memory27' */
  real32_T Memory28[24];               /* '<S206>/Memory28' */
  real32_T Memory29[24];               /* '<S206>/Memory29' */
  real32_T Memory30[24];               /* '<S206>/Memory30' */
  real32_T Pa;                         /* '<S206>/StoreEgoTrajectory' */
  real32_T Pb;                         /* '<S206>/StoreEgoTrajectory' */
  real32_T Pc;                         /* '<S206>/StoreEgoTrajectory' */
  real32_T Pd;                         /* '<S206>/StoreEgoTrajectory' */
  real32_T EgoTrajHistDxv[24];         /* '<S206>/StoreEgoTrajectory' */
  real32_T EgoTrajHistDyv[24];         /* '<S206>/StoreEgoTrajectory' */
  real32_T EgoTrajHistTTimeStamp[24];  /* '<S206>/StoreEgoTrajectory' */
  real32_T ObjPrio[15];                /* '<S206>/Priority' */
  real32_T ObjMatrix[15];              /* '<S206>/Priority' */
  real32_T dDeltaX;                    /* '<S206>/CalcEgoVehMove' */
  real32_T dDeltaY;                    /* '<S206>/CalcEgoVehMove' */
  real32_T CosOfPsi;                   /* '<S206>/CalcEgoVehMove' */
  real32_T SinOfPsi;                   /* '<S206>/CalcEgoVehMove' */
  real32_T SlipDislim;                 /* '<S206>/CalcEgoVehMove' */
  real32_T TrajHistBufferDxv[240];     /* '<S206>/CalcCompensateEgoVehMove' */
  real32_T TrajHistBufferDyv[240];     /* '<S206>/CalcCompensateEgoVehMove' */
  real32_T TrajHistBufferTTimeStamp[240];/* '<S206>/CalcCompensateEgoVehMove' */
  real32_T TrajHistBufferDxv_c[240];   /* '<S206>/AssignHighPriorityObjects' */
  real32_T TrajHistBufferDyv_p[240];   /* '<S206>/AssignHighPriorityObjects' */
  real32_T TrajHistBufferTTimeStamp_m[240];/* '<S206>/AssignHighPriorityObjects' */
  uint8_T Memory36[10];                /* '<S206>/Memory36' */
  uint8_T Memory40[15];                /* '<S206>/Memory40' */
  uint8_T Memory37[10];                /* '<S206>/Memory37' */
  uint8_T Memory42[240];               /* '<S206>/Memory42' */
  uint8_T Memory31;                    /* '<S206>/Memory31' */
  uint8_T EgoTrajHistCurrentIndex;     /* '<S206>/StoreEgoTrajectory' */
  uint8_T ObjTrajNumber[15];           /* '<S206>/ReleaseLowPriorityObjects' */
  uint8_T ObjTrajNumber_k[15];         /* '<S206>/AssignHighPriorityObjects' */
  uint8_T TrajCurrentIndex[10];        /* '<S206>/AssignHighPriorityObjects' */
  uint8_T TrajHistBufferClass[240];    /* '<S206>/AssignHighPriorityObjects' */
  boolean_T Memory38[240];             /* '<S206>/Memory38' */
  boolean_T Memory41[10];              /* '<S206>/Memory41' */
  boolean_T Memory24[240];             /* '<S206>/Memory24' */
  boolean_T TrajUsed[10];              /* '<S206>/ReleaseLowPriorityObjects' */
  boolean_T TrajHistBufferBTrajEnd[240];/* '<S206>/ReleaseLowPriorityObjects' */
  boolean_T TrajHistBufferBValid[240]; /* '<S206>/CalcCompensateEgoVehMove' */
  boolean_T TrajUsed_l[10];            /* '<S206>/AssignHighPriorityObjects' */
  boolean_T TrajHistBufferBTrajEnd_m[240];/* '<S206>/AssignHighPriorityObjects' */
  boolean_T TrajHistBufferBValid_l[240];/* '<S206>/AssignHighPriorityObjects' */
} B_Trajectory_Noa_Nofusion_T;

/* Block states (default storage) for system '<S179>/Trajectory' */
typedef struct {
  real32_T Memory25_PreviousInput[240];/* '<S206>/Memory25' */
  real32_T Memory26_PreviousInput[240];/* '<S206>/Memory26' */
  real32_T Memory27_PreviousInput[240];/* '<S206>/Memory27' */
  real32_T Memory28_PreviousInput[24]; /* '<S206>/Memory28' */
  real32_T Memory29_PreviousInput[24]; /* '<S206>/Memory29' */
  real32_T Memory30_PreviousInput[24]; /* '<S206>/Memory30' */
  uint8_T Memory36_PreviousInput[10];  /* '<S206>/Memory36' */
  uint8_T Memory40_PreviousInput[15];  /* '<S206>/Memory40' */
  uint8_T Memory37_PreviousInput[10];  /* '<S206>/Memory37' */
  uint8_T Memory42_PreviousInput[240]; /* '<S206>/Memory42' */
  uint8_T Memory31_PreviousInput;      /* '<S206>/Memory31' */
  boolean_T Memory38_PreviousInput[240];/* '<S206>/Memory38' */
  boolean_T Memory41_PreviousInput[10];/* '<S206>/Memory41' */
  boolean_T Memory24_PreviousInput[240];/* '<S206>/Memory24' */
} DW_Trajectory_Noa_Nofusion_T;

/* Block signals for system '<S179>/VycCalc' */
typedef struct {
  real32_T ObjVyc[15];                 /* '<S179>/VycCalc' */
  real32_T ObjYawAngle[15];            /* '<S179>/VycCalc' */
} B_VycCalc_Noa_Nofusion_T;

/* Block signals for system '<S179>/dyLaneWidthSteerAdapt' */
typedef struct {
  real32_T dyLaneAdaptLeft;            /* '<S179>/dyLaneWidthSteerAdapt' */
  real32_T dyLaneAdaptRight;           /* '<S179>/dyLaneWidthSteerAdapt' */
} B_dyLaneWidthSteerAdapt_Noa_Nofusion_T;

/* Block signals for system '<S179>/wCutInVy' */
typedef struct {
  real32_T DycASI[15];                 /* '<S179>/wCutInVy' */
  real32_T ObjtPrediction4CutIn[15];   /* '<S179>/wCutInVy' */
  real32_T ObjDycCutInPredict[15];     /* '<S179>/wCutInVy' */
  real32_T ObjwCutInVy[15];            /* '<S179>/wCutInVy' */
  boolean_T ObjCutIn_b[15];            /* '<S179>/wCutInVy' */
} B_wCutInVy_Noa_Nofusion_T;

/* Block signals for system '<S179>/wCutOutVy' */
typedef struct {
  real32_T ObjtPrediction4CutOut[15];  /* '<S179>/wCutOutVy' */
  real32_T ObjDycCutOutPredict[15];    /* '<S179>/wCutOutVy' */
  real32_T ObjwCutOutTurnOff[15];      /* '<S179>/wCutOutVy' */
  real32_T ObjwCutoutVy[15];           /* '<S179>/wCutOutVy' */
} B_wCutOutVy_Noa_Nofusion_T;

/* Block signals (default storage) */
typedef struct {
  SPI2SOC_VISIONS_BUS RateTransition1; /* '<S23>/Rate Transition1' */
  SPI2SOC_VISIONS_BUS RateTransition16;/* '<Root>/Rate Transition16' */
  SPI2SOC_VISIONS_BUS SFunction_o2;    /* '<S26>/S-Function' */
  VCAN_BUS VCANBus;                    /* '<S27>/Data Inport S-Fcn' */
  L3_RFMResult_st lonbus;              /* '<Root>/Rate Transition21' */
  L3_RFMResult_st SFunction1;          /* '<S21>/S-Function1' */
  TOS_LC_BUS BusAssignment3;           /* '<S5>/Bus Assignment3' */
  TOS_LCKIE_BUS TOS_LCKIE;             /* '<S23>/Rate Transition20' */
  TOS_LCKIE_BUS BusCreator;            /* '<S176>/Bus Creator' */
  TOS_ELK_BUS TOS_ELK;                 /* '<S23>/Rate Transition19' */
  EQ4_LA_BUS BusAssignment3_g;         /* '<S132>/Bus Assignment3' */
  EQ4_LH_BUS BusAssignment1;           /* '<S132>/Bus Assignment1' */
  AEB_DVR_INFO_BUS AEB_DVR_INFO;       /* '<Root>/Unit Delay3' */
  VCAN_HUT_MSG_BUS BusAssignment2;     /* '<S126>/Bus Assignment2' */
  VCAN_HUT_MSG_BUS BusAssignment2_h;   /* '<S86>/Bus Assignment2' */
  RFM_ROAD_BUS RFM_ROAD;               /* '<S140>/BusCreator' */
  RFM_ROAD_BUS RFM_ROAD_o;             /* '<S20>/Bus Assignment5' */
  RFM_ROAD_BUS BusAssignment;          /* '<S8>/Bus Assignment' */
  EQ4_LRE_BUS BusAssignment2_j;        /* '<S132>/Bus Assignment2' */
  VCAN_CR_MSG_BUS BusAssignment1_a;    /* '<S126>/Bus Assignment1' */
  TOS_AEB_LONOBJ_BUS TOS_AEB_LONOBJ;   /* '<S23>/Rate Transition22' */
  HMI_ACC_FD2_BUS HMI_ACC_FD2;         /* '<S86>/LightControl' */
  TOS_AEB_LATOBJ_BUS TOS_AEB_LATOBJ;   /* '<S23>/Rate Transition23' */
  TOS_AEB_JAOBJ_BUS TOS_AEB_JAOBJ;     /* '<S23>/Rate Transition24' */
  EQ4_LH_ELEM_BUS MatrixConcatenate[2];/* '<S132>/Matrix Concatenate' */
  EQ4_LH_ELEM_BUS ImpAsg_InsertedFor_Out1_at_inport_0[2];/* '<S136>/Bus Assignment4' */
  EQ4_LH_ELEM_BUS ImpAsg_InsertedFor_Out1_at_inport_0_k[2];/* '<S106>/Bus Assignment4' */
  VCAN_ESP_MSG_BUS BusAssignment2_a;   /* '<S8>/Bus Assignment2' */
  VCAN_ESP_MSG_BUS BusAssignment_e;    /* '<S124>/Bus Assignment' */
  VCAN_ESP_MSG_BUS BusAssignment2_g;   /* '<S7>/Bus Assignment2' */
  LSM_HWA_BUS LSM_HWA;                 /* '<Root>/Unit Delay6' */
  LSM_HWA_BUS LSM_HWA_n;               /* '<Root>/Unit Delay4' */
  LSM_HWA_BUS LSM_o3;                  /* '<S132>/LSM' */
  IDC_L3_FD1_MSG_BUS BusAssignment_p;  /* '<S6>/Bus Assignment' */
  EQ4_LAP_HDR_BUS BusAssignment5;      /* '<S9>/Bus Assignment5' */
  HMI_IFC_FD5_BUS HMI_IFC_FD5;         /* '<S86>/LightControl' */
  AEB_IPHUT_INFO_BUS AEB_IPHUT_INFO;   /* '<Root>/Unit Delay3' */
  EQ4_LA_ELEM_BUS MatrixConcatenate1[4];/* '<S132>/Matrix Concatenate1' */
  EQ4_LA_ELEM_BUS ImpAsg_InsertedFor_Out1_at_inport_0_ke[4];/* '<S138>/Bus Assignment4' */
  EQ4_LA_ELEM_BUS ImpAsg_InsertedFor_Out1_at_inport_0_ke3[4];/* '<S108>/Bus Assignment4' */
  CAN_FD_MESSAGE_BUS CANFDPack;        /* '<S169>/CAN FD Pack' */
  CAN_FD_MESSAGE_BUS CANFDPack1;       /* '<S6>/CAN FD Pack1' */
  CAN_FD_MESSAGE_BUS CANFDPack2;       /* '<S6>/CAN FD Pack2' */
  CAN_FD_MESSAGE_BUS CANFDPack3;       /* '<S6>/CAN FD Pack3' */
  CAN_FD_MESSAGE_BUS CANFDPack4;       /* '<S6>/CAN FD Pack4' */
  CAN_FD_MESSAGE_BUS CANFDPack5;       /* '<S6>/CAN FD Pack5' */
  CAN_FD_MESSAGE_BUS CANFDPack6;       /* '<S6>/CAN FD Pack6' */
  CAN_FD_MESSAGE_BUS CANFDPack7;       /* '<S6>/CAN FD Pack7' */
  CAN_FD_MESSAGE_BUS CANFDPack1_l;     /* '<S87>/CAN FD Pack1' */
  HMI_ACC_FD4_BUS HMI_ACC_FD4;         /* '<S86>/LightControl' */
  LSM_ESS_BUS LSM_ESS;                 /* '<Root>/Unit Delay6' */
  LSM_ESS_BUS LSM_ESS_o;               /* '<Root>/Unit Delay4' */
  LSM_ESS_BUS LSM_o4;                  /* '<S132>/LSM' */
  HMI_IFC_FD6_BUS HMI_IFC_FD6;         /* '<S86>/LightControl' */
  VCAN_ECM_MSG_BUS BusAssignment3_l;   /* '<S105>/Bus Assignment3' */
  VCAN_ECM_MSG_BUS BusAssignment_b;    /* '<S123>/Bus Assignment' */
  TOS_ACCP0_BUS TOS_ACCP0;             /* '<S23>/Rate Transition7' */
  TOS_ACCP0_BUS BusCreator1;           /* '<S174>/Bus Creator1' */
  TOS_ACCP0_BUS BusCreator1_f;         /* '<S172>/Bus Creator1' */
  RFM_TSR_BUS RFM_TSR;                 /* '<S141>/BusCreator' */
  RFM_TSR_BUS RFM_TSR_l;               /* '<S20>/Bus Assignment5' */
  EQ4_LRE_ELEM_BUS MatrixConcatenate2[2];/* '<S132>/Matrix Concatenate2' */
  EQ4_LRE_ELEM_BUS ImpAsg_InsertedFor_Out1_at_inport_0_ke3s[2];/* '<S137>/Bus Assignment4' */
  EQ4_LRE_ELEM_BUS ImpAsg_InsertedFor_Out1_at_inport_0_ke3sc[2];/* '<S107>/Bus Assignment4' */
  ACC_FD1_MSG_BUS BusAssignment_d;     /* '<S88>/Bus Assignment' */
  VSM_HMI_BUS VSM_HMI;                 /* '<Root>/Unit Delay' */
  VSM_HMI_BUS VSM_HMI_p;               /* '<S17>/Unit Delay4' */
  VSM_HMI_BUS VSM_o3;                  /* '<S133>/VSM' */
  VCAN_HAP_MSG_BUS BusAssignment2_o;   /* '<S125>/Bus Assignment2' */
  HMI_IFC_FD2_BUS HMI_IFC_FD2;         /* '<S86>/LightControl' */
  VSM_CTRL_LINE_BUS VSM_CTRL_LINE;     /* '<Root>/Unit Delay' */
  VSM_CTRL_LINE_BUS VSM_CTRL_LINE_l;   /* '<S17>/Unit Delay4' */
  VSM_CTRL_LINE_BUS VSM_o4;            /* '<S133>/VSM' */
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_22_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_23_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_25_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_26_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_28_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_29_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_18_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_19_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_20_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_21_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_24_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_27_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_30_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LSM_at_inport_31_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_PLAN_at_inport_0_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_PLAN_at_inport_1_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_VSM_at_inport_19_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_VSM_at_inport_20_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_VSM_at_inport_21_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_VSM_at_inport_22_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LightControl_at_inport_11_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LightControl_at_inport_12_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LightControl_at_inport_13_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LightControl_at_inport_14_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LightControl_at_inport_15_BusCreator1;
  RFM_LINE_BUS BusConversion_InsertedFor_LightControl_at_inport_16_BusCreator1;
  VSM_DATACLCT_INFO_BUS DangerPlausMatrix;/* '<Root>/Unit Delay' */
  VSM_DATACLCT_INFO_BUS DangerPlausMatrix_j;/* '<S17>/Unit Delay4' */
  VSM_DATACLCT_INFO_BUS VSM_o8;        /* '<S133>/VSM' */
  VCAN_EPS_MSG_BUS BusAssignment1_m;   /* '<S124>/Bus Assignment1' */
  VCAN_CSA_MSG_BUS BusAssignment2_hv;  /* '<S120>/Bus Assignment2' */
  VCAN_CSA_MSG_BUS BusAssignment1_e;   /* '<S7>/Bus Assignment1' */
  TOS_ACCP3_BUS TOS_ACCP3;             /* '<S23>/Rate Transition15' */
  TOS_ACCP3_BUS BusCreator4;           /* '<S174>/Bus Creator4' */
  TOS_ACCP3_BUS BusCreator4_o;         /* '<S172>/Bus Creator4' */
  TOS_ACCP2_BUS TOS_ACCP2;             /* '<S23>/Rate Transition11' */
  TOS_ACCP2_BUS BusCreator3;           /* '<S174>/Bus Creator3' */
  TOS_ACCP2_BUS BusCreator3_p;         /* '<S172>/Bus Creator3' */
  VSM_LAT_CTRL_BUS VSM_LAT_CTRL;       /* '<Root>/Unit Delay' */
  VSM_LAT_CTRL_BUS VSM_LAT_CTRL_a;     /* '<S17>/Unit Delay4' */
  VSM_LAT_CTRL_BUS VSM_o2;             /* '<S133>/VSM' */
  VCAN_HCU_MSG_BUS BusAssignment4;     /* '<S8>/Bus Assignment4' */
  VCAN_HCU_MSG_BUS BusAssignment4_k;   /* '<S131>/Bus Assignment4' */
  TOS_P0_TARGET_LINE_BUS TOS_P0_TARGET_LINE;/* '<S23>/Rate Transition6' */
  TOS_P0_TARGET_LINE_BUS BusCreator2;  /* '<S174>/Bus Creator2' */
  TOS_P0_TARGET_LINE_BUS BusCreator2_p;/* '<S172>/Bus Creator2' */
  TOS_ACCP1_BUS TOS_ACCP1;             /* '<S23>/Rate Transition8' */
  VCAN_HC_MSG_BUS BusAssignment2_h1;   /* '<S129>/Bus Assignment2' */
  VCAN_ABM_MSG_BUS BusAssignment2_gv;  /* '<S118>/Bus Assignment2' */
  VCAN_ABM_MSG_BUS BusAssignment3_p;   /* '<S7>/Bus Assignment3' */
  RFM_LANE_BUS BusConversion_InsertedFor_LSM_at_inport_11_BusCreator1;
  RFM_LANE_BUS BusConversion_InsertedFor_LSM_at_inport_12_BusCreator1;
  RFM_LANE_BUS BusConversion_InsertedFor_LSM_at_inport_13_BusCreator1;
  RFM_LANE_BUS BusConversion_InsertedFor_LSM_at_inport_14_BusCreator1;
  PLAN_ACCPLAN_BUS PLAN_ACCPLAN;       /* '<Root>/Unit Delay5' */
  PLAN_ACCPLAN_BUS PLAN_ACCPLAN_i;     /* '<S17>/PLAN' */
  PLAN_ACCPLAN_BUS PLAN_ACCPLAN_j;     /* '<S17>/Unit Delay3' */
  LSM_TJA_ICA_BUS LSM_TJA_ICA;         /* '<Root>/Unit Delay6' */
  LSM_TJA_ICA_BUS LSM_TJA_ICA_g;       /* '<Root>/Unit Delay4' */
  LSM_TJA_ICA_BUS LSM_o1;              /* '<S132>/LSM' */
  LSM_LCK_BUS LSM_LCK;                 /* '<Root>/Unit Delay6' */
  LSM_LCK_BUS LSM_LCK_d;               /* '<Root>/Unit Delay4' */
  LSM_LCK_BUS LSM_o2;                  /* '<S132>/LSM' */
  IFC_FD1_MSG_BUS BusAssignment_i;     /* '<S87>/Bus Assignment' */
  EQ4_LAP_ELEM_BUS ImpAsg_InsertedFor_Out1_at_inport_0_ke3scg[8];/* '<S109>/Bus Assignment4' */
  VSM_UOM_LC_BUS VSM_UOM_LC_BUS_c;     /* '<Root>/Unit Delay' */
  VSM_UOM_LC_BUS VSM_UOM_LC_BUS_g;     /* '<S17>/Unit Delay4' */
  VSM_UOM_LC_BUS VSM_o7;               /* '<S133>/VSM' */
  VSM_TSR_REMAIN_BUS VSM_TSR_REMAIN;   /* '<Root>/Unit Delay' */
  VSM_TSR_REMAIN_BUS VSM_TSR_REMAIN_j; /* '<S17>/Unit Delay4' */
  VSM_TSR_REMAIN_BUS VSM_o6;           /* '<S133>/VSM' */
  VSM_TSR_BUS VSM_TSR;                 /* '<Root>/Unit Delay' */
  VSM_TSR_BUS VSM_TSR_m;               /* '<S17>/Unit Delay4' */
  VSM_TSR_BUS VSM_o5;                  /* '<S133>/VSM' */
  VSM_LON_CTRL_BUS VSM_LON_CTRL;       /* '<Root>/Unit Delay' */
  VSM_LON_CTRL_BUS VSM_LON_CTRL_c;     /* '<S17>/Unit Delay4' */
  VSM_LON_CTRL_BUS VSM_o1;             /* '<S133>/VSM' */
  VCAN_IP_MSG_BUS BusAssignment2_d;    /* '<S128>/Bus Assignment2' */
  VCAN_DCT_MSG_BUS BusAssignment1_e5;  /* '<S8>/Bus Assignment1' */
  VCAN_DCT_MSG_BUS BusAssignment_c;    /* '<S122>/Bus Assignment' */
  VCAN_BCM_MSG_BUS BusAssignment2_jt;  /* '<S119>/Bus Assignment2' */
  TOS_ACCP5_BUS TOS_ACCP5;             /* '<S23>/Rate Transition17' */
  TOS_ACCP4_BUS TOS_ACCP4;             /* '<S23>/Rate Transition16' */
  RFM_REC_LANES_BUS BusConversion_InsertedFor_LSM_at_inport_17_BusCreator1;
  RFM_INTERSEC_ALERT_BUS BusConversion_InsertedFor_LSM_at_inport_15_BusCreator1;
  RFM_BRANCH_BUS BusConversion_InsertedFor_LSM_at_inport_16_BusCreator1;
  PLAN_DPC_ESS_BUS PLAN_DPC_ESS;       /* '<Root>/Unit Delay5' */
  PLAN_DPC_ESS_BUS PLAN_DPC_ESS_k;     /* '<S17>/PLAN' */
  PLAN_DPC_ESS_BUS PLAN_DPC_ESS_d;     /* '<S17>/Unit Delay3' */
  PLAN_ALC_DECS_BUS PLAN_ALC_DECS;     /* '<Root>/Unit Delay5' */
  PLAN_ALC_DECS_BUS PLAN_ALC_DECS_m;   /* '<S17>/PLAN' */
  PLAN_ALC_DECS_BUS PLAN_ALC_DECS_g;   /* '<S17>/Unit Delay3' */
  LONC_CTRL_OUT_BUS LONC_CTRL_OUT;     /* '<Root>/Unit Delay2' */
  LONC_CTRL_OUT_BUS LONC_CTRL_OUT_g;   /* '<S8>/LON' */
  LATC_VCAN_EPS_BUS BusAssignment3_i;  /* '<S8>/Bus Assignment3' */
  LATC_VCAN_CSA_BUS BusConversion_InsertedFor_LATC_at_inport_9_BusCreator1;
  EQ4_LRE_HDR_BUS BusAssignment4_n;    /* '<S9>/Bus Assignment4' */
  EQ4_LH_HDR_BUS BusAssignment6;       /* '<S9>/Bus Assignment6' */
  AEB_BRK_INFO_BUS AEB_BRK_INFO;       /* '<Root>/Unit Delay3' */
  real_T Product1;                     /* '<S22>/Product1' */
  real_T Product;                      /* '<S22>/Product' */
  real_T RateTransition12;             /* '<Root>/Rate Transition12' */
  real_T RateTransition29;             /* '<Root>/Rate Transition29' */
  real_T RateTransition36;             /* '<Root>/Rate Transition36' */
  real_T RateTransition6;              /* '<Root>/Rate Transition6' */
  real_T UnitDelay;                    /* '<S221>/Unit Delay' */
  real_T Sum;                          /* '<S221>/Sum' */
  real_T Switch;                       /* '<S221>/Switch' */
  real_T UnitDelay_n;                  /* '<S181>/Unit Delay' */
  real_T Sum_i;                        /* '<S181>/Sum' */
  real_T Switch_b;                     /* '<S181>/Switch' */
  real_T UnitDelay_d;                  /* '<S89>/Unit Delay' */
  real_T Sum_c;                        /* '<S89>/Sum' */
  real_T Switch_c;                     /* '<S89>/Switch' */
  real_T UnitDelay_m;                  /* '<S90>/Unit Delay' */
  real_T Sum_d;                        /* '<S90>/Sum' */
  real_T Switch_n;                     /* '<S90>/Switch' */
  real_T UnitDelay_o;                  /* '<S92>/Unit Delay' */
  real_T Sum_g;                        /* '<S92>/Sum' */
  real_T Switch_cz;                    /* '<S92>/Switch' */
  real_T UnitDelay_g;                  /* '<S91>/Unit Delay' */
  real_T Sum_k;                        /* '<S91>/Sum' */
  real_T Switch_b2;                    /* '<S91>/Switch' */
  real_T UnitDelay_h;                  /* '<S97>/Unit Delay' */
  real_T Sum_gl;                       /* '<S97>/Sum' */
  real_T Switch_h;                     /* '<S97>/Switch' */
  real_T RSDS_R_ObjExistProb_1Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjObstacleProb_1Value;/* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistX_1Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistY_1Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelX_1Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelY_1Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelX_1Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelY_1Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistXStd_1Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistYStd_1Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelXStd_1Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelYStd_1Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelXStd_1Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelYStd_1Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjWidth_1Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjLength_1Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjExistProb_2Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjObstacleProb_2Value;/* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistX_2Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistY_2Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelX_2Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelY_2Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelX_2Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelY_2Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistXStd_2Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistYStd_2Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelXStd_2Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelYStd_2Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelXStd_2Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelYStd_2Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjWidth_2Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjLength_2Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjExistProb_3Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjObstacleProb_3Value;/* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistX_3Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistY_3Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelX_3Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelY_3Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelX_3Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelY_3Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistXStd_3Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistYStd_3Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelXStd_3Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelYStd_3Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelXStd_3Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelYStd_3Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjWidth_3Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjLength_3Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjExistProb_4Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjObstacleProb_4Value;/* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistX_4Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistY_4Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelX_4Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelY_4Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelX_4Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelY_4Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistXStd_4Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistYStd_4Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelXStd_4Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelYStd_4Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelXStd_4Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelYStd_4Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjWidth_4Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjLength_4Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjExistProb_5Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjObstacleProb_5Value;/* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistX_5Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistY_5Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelX_5Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelY_5Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelX_5Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelY_5Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistXStd_5Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistYStd_5Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelXStd_5Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelYStd_5Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelXStd_5Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelYStd_5Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjWidth_5Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjLength_5Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjExistProb_6Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjObstacleProb_6Value;/* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistX_6Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistY_6Value;       /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelX_6Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelY_6Value;     /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelX_6Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelAccelY_6Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistXStd_6Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjDistYStd_6Value;    /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelXStd_6Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRelVelYStd_6Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelXStd_6Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_ObjRAccelYStd_6Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjWidth_6Value;   /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_R_VFC_ObjLength_6Value;  /* '<S72>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjExistProb_1Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjObstacleProb_1Value;/* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistX_1Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistY_1Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelX_1Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelY_1Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelX_1Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelY_1Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistXStd_1Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistYStd_1Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelXStd_1Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelYStd_1Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelXStd_1Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelYStd_1Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjWidth_1Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjLength_1Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjExistProb_2Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjObstacleProb_2Value;/* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistX_2Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistY_2Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelX_2Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelY_2Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelX_2Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelY_2Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistXStd_2Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistYStd_2Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelXStd_2Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelYStd_2Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelXStd_2Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelYStd_2Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjWidth_2Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjLength_2Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjExistProb_3Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjObstacleProb_3Value;/* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistX_3Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistY_3Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelX_3Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelY_3Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelX_3Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelY_3Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistXStd_3Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistYStd_3Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelXStd_3Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelYStd_3Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelXStd_3Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelYStd_3Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjWidth_3Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjLength_3Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjExistProb_4Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjObstacleProb_4Value;/* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistX_4Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistY_4Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelX_4Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelY_4Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelX_4Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelY_4Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistXStd_4Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistYStd_4Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelXStd_4Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelYStd_4Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelXStd_4Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelYStd_4Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjWidth_4Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjLength_4Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjExistProb_5Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjObstacleProb_5Value;/* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistX_5Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistY_5Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelX_5Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelY_5Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelX_5Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelY_5Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistXStd_5Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistYStd_5Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelXStd_5Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelYStd_5Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelXStd_5Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelYStd_5Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjWidth_5Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjLength_5Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjExistProb_6Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjObstacleProb_6Value;/* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistX_6Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistY_6Value;       /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelX_6Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelY_6Value;     /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelX_6Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelAccelY_6Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistXStd_6Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjDistYStd_6Value;    /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelXStd_6Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRelVelYStd_6Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelXStd_6Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_ObjRAccelYStd_6Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjWidth_6Value;   /* '<S63>/Data Inport S-Fcn' */
  real_T RSDS_L_VFC_ObjLength_6Value;  /* '<S63>/Data Inport S-Fcn' */
  real_T CR_R_ObjExistProb_1Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjObstacleProb_1Value;  /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistX_1Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistY_1Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelX_1Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelY_1Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelX_1Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelY_1Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistXStd_1Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistYStd_1Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelXStd_1Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelYStd_1Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelXStd_1Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelYStd_1Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjWidth_1Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjLength_1Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjExistProb_2Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjObstacleProb_2Value;  /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistX_2Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistY_2Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelX_2Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelY_2Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelX_2Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelY_2Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistXStd_2Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistYStd_2Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelXStd_2Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelYStd_2Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelXStd_2Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelYStd_2Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjWidth_2Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjLength_2Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjExistProb_3Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjObstacleProb_3Value;  /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistX_3Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistY_3Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelX_3Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelY_3Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelX_3Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelY_3Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistXStd_3Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistYStd_3Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelXStd_3Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelYStd_3Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelXStd_3Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelYStd_3Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjWidth_3Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjLength_3Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjExistProb_4Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjObstacleProb_4Value;  /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistX_4Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistY_4Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelX_4Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelY_4Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelX_4Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelY_4Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistXStd_4Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistYStd_4Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelXStd_4Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelYStd_4Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelXStd_4Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelYStd_4Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjWidth_4Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjLength_4Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjExistProb_5Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjObstacleProb_5Value;  /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistX_5Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistY_5Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelX_5Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelY_5Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelX_5Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelY_5Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistXStd_5Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistYStd_5Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelXStd_5Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelYStd_5Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelXStd_5Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelYStd_5Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjWidth_5Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjLength_5Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjExistProb_6Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjObstacleProb_6Value;  /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistX_6Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistY_6Value;         /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelX_6Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelY_6Value;       /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelX_6Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelAccelY_6Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistXStd_6Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjDistYStd_6Value;      /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelXStd_6Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRelVelYStd_6Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelXStd_6Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_ObjRAccelYStd_6Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjWidth_6Value;     /* '<S54>/Data Inport S-Fcn' */
  real_T CR_R_VFC_ObjLength_6Value;    /* '<S54>/Data Inport S-Fcn' */
  real_T CR_L_ObjExistProb_1Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjObstacleProb_1Value;  /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistX_1Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistY_1Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelX_1Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelY_1Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelX_1Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelY_1Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistXStd_1Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistYStd_1Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelXStd_1Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelYStd_1Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelXStd_1Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelYStd_1Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjWidth_1Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjLength_1Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjExistProb_2Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjObstacleProb_2Value;  /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistX_2Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistY_2Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelX_2Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelY_2Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelX_2Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelY_2Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistXStd_2Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistYStd_2Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelXStd_2Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelYStd_2Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelXStd_2Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelYStd_2Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjWidth_2Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjLength_2Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjExistProb_3Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjObstacleProb_3Value;  /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistX_3Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistY_3Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelX_3Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelY_3Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelX_3Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelY_3Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistXStd_3Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistYStd_3Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelXStd_3Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelYStd_3Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelXStd_3Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelYStd_3Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjWidth_3Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjLength_3Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjExistProb_4Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjObstacleProb_4Value;  /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistX_4Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistY_4Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelX_4Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelY_4Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelX_4Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelY_4Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistXStd_4Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistYStd_4Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelXStd_4Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelYStd_4Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelXStd_4Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelYStd_4Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjWidth_4Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjLength_4Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjExistProb_5Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjObstacleProb_5Value;  /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistX_5Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistY_5Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelX_5Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelY_5Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelX_5Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelY_5Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistXStd_5Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistYStd_5Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelXStd_5Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelYStd_5Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelXStd_5Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelYStd_5Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjWidth_5Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjLength_5Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjExistProb_6Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjObstacleProb_6Value;  /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistX_6Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistY_6Value;         /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelX_6Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelY_6Value;       /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelX_6Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelAccelY_6Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistXStd_6Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjDistYStd_6Value;      /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelXStd_6Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRelVelYStd_6Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelXStd_6Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_ObjRAccelYStd_6Value;    /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjWidth_6Value;     /* '<S45>/Data Inport S-Fcn' */
  real_T CR_L_VFC_ObjLength_6Value;    /* '<S45>/Data Inport S-Fcn' */
  VCAN_PEPS_MSG_BUS BusAssignment2_l;  /* '<S124>/Bus Assignment2' */
  VCAN_PBOX_MSG_BUS BusAssignment2_i;  /* '<S130>/Bus Assignment2' */
  VCAN_AC_MSG_BUS BusAssignment2_e;    /* '<S127>/Bus Assignment2' */
  PLAN_HMI_BUS BusConversion_InsertedFor_LightControl_at_inport_4_BusCreator1;
  LONC_Hybrid_CTRL_OUT_BUS LONC_Hybrid_CTRL_OUT;/* '<Root>/Unit Delay2' */
  LONC_Hybrid_CTRL_OUT_BUS LONC_Hybrid_CTRL_OUT_j;/* '<S8>/LON' */
  HMI_IFC_FD3_BUS HMI_IFC_FD3;         /* '<S86>/LightControl' */
  HMI_ACC_FD1_BUS HMI_ACC_FD1;         /* '<S86>/LightControl' */
  EQ4_LA_HDR_BUS BusAssignment_bp;     /* '<S9>/Bus Assignment' */
  uint32_T CR_L_AD3Counter;            /* '<S31>/Data Inport S-Fcn' */
  uint32_T Uk1;                        /* '<S34>/Delay Input1' */
  uint32_T CR_R_AD3Counter;            /* '<S33>/Data Inport S-Fcn' */
  uint32_T Uk1_l;                      /* '<S35>/Delay Input1' */
  uint32_T RSDS_L_AD3Counter;          /* '<S41>/Data Inport S-Fcn' */
  uint32_T Uk1_a;                      /* '<S36>/Delay Input1' */
  uint32_T RSDS_R_AD3Counter;          /* '<S43>/Data Inport S-Fcn' */
  uint32_T Uk1_e;                      /* '<S37>/Delay Input1' */
  uint32_T ADAS_ProfLong_Value;        /* '<Root>/Switch' */
  uint32_T RFframe_count;              /* '<S18>/Data Inport S-Fcn' */
  uint32_T TSR_Sign_Long_Distance;     /* '<S18>/Data Inport S-Fcn' */
  uint32_T RFM_UpdateCnt;              /* '<S18>/Data Inport S-Fcn' */
  uint32_T DataTypeConversion;         /* '<S9>/Data Type Conversion' */
  uint32_T LSM_UpdateCnt_b;            /* '<Root>/Unit Delay6' */
  uint32_T TOS_UpdateCnt;              /* '<S23>/Rate Transition25' */
  uint32_T LSM_UpdateCnt_m;            /* '<Root>/Unit Delay4' */
  uint32_T DataTypeConversion_k;       /* '<S26>/Data Type Conversion' */
  uint32_T DataTypeConversion_i;       /* '<S170>/Data Type Conversion' */
  uint32_T LSM_o5;                     /* '<S132>/LSM' */
  uint32_T DataTypeConversion1;        /* '<S17>/Data Type Conversion1' */
  real32_T MatrixConcatenate8[24];     /* '<S5>/Matrix Concatenate8' */
  real32_T USS_FRCNear_Obj_Pos_Y;      /* '<Root>/Switch' */
  real32_T USS_FRCNear_Obj_Confidence; /* '<Root>/Switch' */
  real32_T USS_FRCNear_Obj_Pos_X;      /* '<Root>/Switch' */
  real32_T USS_FRMNear_Obj_Pos_Y;      /* '<Root>/Switch' */
  real32_T USS_FRMNear_Obj_Confidence; /* '<Root>/Switch' */
  real32_T USS_FRMNear_Obj_Pos_X;      /* '<Root>/Switch' */
  real32_T USS_FLMNear_Obj_Pos_Y;      /* '<Root>/Switch' */
  real32_T USS_FLMNear_Obj_Confidence; /* '<Root>/Switch' */
  real32_T USS_FLMNear_Obj_Pos_X;      /* '<Root>/Switch' */
  real32_T USS_FLCNear_Obj_Pos_Y;      /* '<Root>/Switch' */
  real32_T USS_FLCNear_Obj_Confidence; /* '<Root>/Switch' */
  real32_T USS_FLCNear_Obj_Pos_X;      /* '<Root>/Switch' */
  real32_T USS_RRSide2_Dist;           /* '<Root>/Switch' */
  real32_T USS_FRSide1_Dist;           /* '<Root>/Switch' */
  real32_T USS_RLSide2_Dist;           /* '<Root>/Switch' */
  real32_T USS_FLSide1_Dist;           /* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj4_Ground_Pos_Y;/* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj4_Ground_Pos_X;/* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj4_Confidence; /* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj3_Ground_Pos_Y;/* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj3_Ground_Pos_X;/* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj3_Confidence; /* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj2_Ground_Pos_Y;/* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj2_Ground_Pos_X;/* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj2_Confidence; /* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj1_Ground_Pos_Y;/* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj1_Ground_Pos_X;/* '<Root>/Switch' */
  real32_T HAP_RtSide_Obj1_Confidence; /* '<Root>/Switch' */
  real32_T Freespace_47_distance;      /* '<Root>/Switch' */
  real32_T Freespace_48_distance;      /* '<Root>/Switch' */
  real32_T Freespace_46_distance;      /* '<Root>/Switch' */
  real32_T Freespace_45_distance;      /* '<Root>/Switch' */
  real32_T Freespace_43_distance;      /* '<Root>/Switch' */
  real32_T Freespace_44_distance;      /* '<Root>/Switch' */
  real32_T Freespace_42_distance;      /* '<Root>/Switch' */
  real32_T Freespace_41_distance;      /* '<Root>/Switch' */
  real32_T Freespace_39_distance;      /* '<Root>/Switch' */
  real32_T Freespace_40_distance;      /* '<Root>/Switch' */
  real32_T Freespace_38_distance;      /* '<Root>/Switch' */
  real32_T Freespace_37_distance;      /* '<Root>/Switch' */
  real32_T Freespace_35_distance;      /* '<Root>/Switch' */
  real32_T Freespace_36_distance;      /* '<Root>/Switch' */
  real32_T Freespace_34_distance;      /* '<Root>/Switch' */
  real32_T Freespace_33_distance;      /* '<Root>/Switch' */
  real32_T Freespace_31_distance;      /* '<Root>/Switch' */
  real32_T Freespace_32_distance;      /* '<Root>/Switch' */
  real32_T Freespace_30_distance;      /* '<Root>/Switch' */
  real32_T Freespace_29_distance;      /* '<Root>/Switch' */
  real32_T Freespace_27_distance;      /* '<Root>/Switch' */
  real32_T Freespace_28_distance;      /* '<Root>/Switch' */
  real32_T Freespace_26_distance;      /* '<Root>/Switch' */
  real32_T Freespace_25_distance;      /* '<Root>/Switch' */
  real32_T Freespace_23_distance;      /* '<Root>/Switch' */
  real32_T Freespace_24_distance;      /* '<Root>/Switch' */
  real32_T Freespace_22_distance;      /* '<Root>/Switch' */
  real32_T Freespace_21_distance;      /* '<Root>/Switch' */
  real32_T Freespace_19_distance;      /* '<Root>/Switch' */
  real32_T Freespace_20_distance;      /* '<Root>/Switch' */
  real32_T Freespace_18_distance;      /* '<Root>/Switch' */
  real32_T Freespace_17_distance;      /* '<Root>/Switch' */
  real32_T Freespace_15_distance;      /* '<Root>/Switch' */
  real32_T Freespace_16_distance;      /* '<Root>/Switch' */
  real32_T Freespace_14_distance;      /* '<Root>/Switch' */
  real32_T Freespace_13_distance;      /* '<Root>/Switch' */
  real32_T Freespace_11_distance;      /* '<Root>/Switch' */
  real32_T Freespace_12_distance;      /* '<Root>/Switch' */
  real32_T Freespace_10_distance;      /* '<Root>/Switch' */
  real32_T Freespace_9_distance;       /* '<Root>/Switch' */
  real32_T Freespace_7_distance;       /* '<Root>/Switch' */
  real32_T Freespace_8_distance;       /* '<Root>/Switch' */
  real32_T Freespace_6_distance;       /* '<Root>/Switch' */
  real32_T Freespace_5_distance;       /* '<Root>/Switch' */
  real32_T Freespace_3_distance;       /* '<Root>/Switch' */
  real32_T Freespace_4_distance;       /* '<Root>/Switch' */
  real32_T Freespace_2_distance;       /* '<Root>/Switch' */
  real32_T Freespace_1_distance;       /* '<Root>/Switch' */
  real32_T OD_Obj7_Ground_Pos_Y;       /* '<Root>/Switch' */
  real32_T OD_Obj7_Ground_Pos_X;       /* '<Root>/Switch' */
  real32_T OD_Obj7_length;             /* '<Root>/Switch' */
  real32_T OD_Obj7_height;             /* '<Root>/Switch' */
  real32_T OD_Obj7_Confidence;         /* '<Root>/Switch' */
  real32_T OD_Obj7_width;              /* '<Root>/Switch' */
  real32_T OD_Obj6_Ground_Pos_Y;       /* '<Root>/Switch' */
  real32_T OD_Obj6_Ground_Pos_X;       /* '<Root>/Switch' */
  real32_T OD_Obj6_length;             /* '<Root>/Switch' */
  real32_T OD_Obj6_height;             /* '<Root>/Switch' */
  real32_T OD_Obj6_Confidence;         /* '<Root>/Switch' */
  real32_T OD_Obj6_width;              /* '<Root>/Switch' */
  real32_T OD_Obj5_Ground_Pos_Y;       /* '<Root>/Switch' */
  real32_T OD_Obj5_Ground_Pos_X;       /* '<Root>/Switch' */
  real32_T OD_Obj5_length;             /* '<Root>/Switch' */
  real32_T OD_Obj5_height;             /* '<Root>/Switch' */
  real32_T OD_Obj5_Confidence;         /* '<Root>/Switch' */
  real32_T OD_Obj5_width;              /* '<Root>/Switch' */
  real32_T OD_Obj4_Ground_Pos_Y;       /* '<Root>/Switch' */
  real32_T OD_Obj4_Ground_Pos_X;       /* '<Root>/Switch' */
  real32_T OD_Obj4_length;             /* '<Root>/Switch' */
  real32_T OD_Obj4_height;             /* '<Root>/Switch' */
  real32_T OD_Obj4_Confidence;         /* '<Root>/Switch' */
  real32_T OD_Obj4_width;              /* '<Root>/Switch' */
  real32_T OD_Obj3_Ground_Pos_Y;       /* '<Root>/Switch' */
  real32_T OD_Obj3_Ground_Pos_X;       /* '<Root>/Switch' */
  real32_T OD_Obj3_length;             /* '<Root>/Switch' */
  real32_T OD_Obj3_height;             /* '<Root>/Switch' */
  real32_T OD_Obj3_Confidence;         /* '<Root>/Switch' */
  real32_T OD_Obj3_width;              /* '<Root>/Switch' */
  real32_T OD_Obj2_Ground_Pos_Y;       /* '<Root>/Switch' */
  real32_T OD_Obj2_Ground_Pos_X;       /* '<Root>/Switch' */
  real32_T OD_Obj2_length;             /* '<Root>/Switch' */
  real32_T OD_Obj2_height;             /* '<Root>/Switch' */
  real32_T OD_Obj2_Confidence;         /* '<Root>/Switch' */
  real32_T OD_Obj2_width;              /* '<Root>/Switch' */
  real32_T OD_Obj1_Ground_Pos_Y;       /* '<Root>/Switch' */
  real32_T OD_Obj1_Ground_Pos_X;       /* '<Root>/Switch' */
  real32_T OD_Obj1_length;             /* '<Root>/Switch' */
  real32_T OD_Obj1_height;             /* '<Root>/Switch' */
  real32_T OD_Obj1_Confidence;         /* '<Root>/Switch' */
  real32_T OD_Obj1_width;              /* '<Root>/Switch' */
  real32_T RtCobfi;                    /* '<Root>/Switch' */
  real32_T Rtlntcep;                   /* '<Root>/Switch' */
  real32_T RtCurVtur;                  /* '<Root>/Switch' */
  real32_T RtSlope;                    /* '<Root>/Switch' */
  real32_T LtCobfi;                    /* '<Root>/Switch' */
  real32_T Ltlntcep;                   /* '<Root>/Switch' */
  real32_T LtCurVtur;                  /* '<Root>/Switch' */
  real32_T LtSlope;                    /* '<Root>/Switch' */
  real32_T HAP_ESP_LSMvMaxRq;          /* '<Root>/Switch' */
  real32_T MEB_BrkgReqValue;           /* '<Root>/Switch' */
  real32_T APS_ESP_SpdLimn;            /* '<Root>/Switch' */
  real32_T APS_ReqEPSTgtAng;           /* '<Root>/Switch' */
  real32_T RRWheelSpd;                 /* '<Root>/Switch' */
  real32_T RLWheelSpd;                 /* '<Root>/Switch' */
  real32_T VehSpd;                     /* '<Root>/Switch' */
  real32_T FRWheelSpd;                 /* '<Root>/Switch' */
  real32_T FLWheelSpd;                 /* '<Root>/Switch' */
  real32_T RSDS_MidTgt_02_dy;          /* '<Root>/Switch' */
  real32_T RSDS_MidTgt_02_dx;          /* '<Root>/Switch' */
  real32_T RSDS_MidTgt_01_dy;          /* '<Root>/Switch' */
  real32_T RSDS_MidTgt_01_dx;          /* '<Root>/Switch' */
  real32_T RSDS_RiTgt_02_dy;           /* '<Root>/Switch' */
  real32_T RSDS_RiTgt_02_dx;           /* '<Root>/Switch' */
  real32_T RSDS_RiTgt_01_dy;           /* '<Root>/Switch' */
  real32_T RSDS_RiTgt_01_dx;           /* '<Root>/Switch' */
  real32_T RSDS_LeTgt_02_dy;           /* '<Root>/Switch' */
  real32_T RSDS_LeTgt_02_dx;           /* '<Root>/Switch' */
  real32_T RSDS_LeTgt_01_dx;           /* '<Root>/Switch' */
  real32_T RSDS_LeTgt_01_dy;           /* '<Root>/Switch' */
  real32_T BSD_LCA_Right_TTC;          /* '<Root>/Switch' */
  real32_T RCW_TTC;                    /* '<Root>/Switch' */
  real32_T BSD_LCA_Left_TTC;           /* '<Root>/Switch' */
  real32_T RCTA_B_TTC;                 /* '<Root>/Switch' */
  real32_T RSDS_ObjRelAccelY_Ri;       /* '<Root>/Switch' */
  real32_T RSDS_ObjRelAccelX_Ri;       /* '<Root>/Switch' */
  real32_T RSDS_ObjRelAccelX_Le;       /* '<Root>/Switch' */
  real32_T RSDS_ObjRAccelXStd_Ri;      /* '<Root>/Switch' */
  real32_T RSDS_ObjRAccelYStd_Ri;      /* '<Root>/Switch' */
  real32_T RSDS_ObjRelVelYStd_Ri;      /* '<Root>/Switch' */
  real32_T RSDS_ObjRelVelXStd_Ri;      /* '<Root>/Switch' */
  real32_T RSDS_ObjDistXStd_Ri;        /* '<Root>/Switch' */
  real32_T RSDS_ObjDistYStd_Ri;        /* '<Root>/Switch' */
  real32_T RSDS_ObjRAccelXStd_Le;      /* '<Root>/Switch' */
  real32_T RSDS_ObjRAccelYStd_Le;      /* '<Root>/Switch' */
  real32_T RSDS_ObjRelVelYStd_Le;      /* '<Root>/Switch' */
  real32_T RSDS_ObjDistYStd_Le;        /* '<Root>/Switch' */
  real32_T RSDS_ObjRelVelXStd_Le;      /* '<Root>/Switch' */
  real32_T RSDS_ObjDistXStd_Le;        /* '<Root>/Switch' */
  real32_T ObjTTCRi;                   /* '<Root>/Switch' */
  real32_T ObjLatSpdCurvRi;            /* '<Root>/Switch' */
  real32_T ObjLgtSpdCurvRi;            /* '<Root>/Switch' */
  real32_T ObjLatPosnCurvRi;           /* '<Root>/Switch' */
  real32_T ObjLgtPosnCurvRi;           /* '<Root>/Switch' */
  real32_T ObjWidthRi;                 /* '<Root>/Switch' */
  real32_T ObjWidthLe;                 /* '<Root>/Switch' */
  real32_T ObjTTCLe;                   /* '<Root>/Switch' */
  real32_T ObjLatSpdCurvLe;            /* '<Root>/Switch' */
  real32_T ObjLgtSpdCurvLe;            /* '<Root>/Switch' */
  real32_T ObjLatPosnCurvLe;           /* '<Root>/Switch' */
  real32_T ObjLgtPosnCurvLe;           /* '<Root>/Switch' */
  real32_T RSDS_BrkgReqVal;            /* '<Root>/Switch' */
  real32_T RSDS_ObjRelAccelY_Le;       /* '<Root>/Switch' */
  real32_T CR_ObjRAccelXStd_Ri;        /* '<Root>/Switch' */
  real32_T CR_ObjRAccelYStd_Ri;        /* '<Root>/Switch' */
  real32_T CR_ObjRelVelYStd_Ri;        /* '<Root>/Switch' */
  real32_T CR_ObjRelVelXStd_Ri;        /* '<Root>/Switch' */
  real32_T CR_ObjDistXStd_Ri;          /* '<Root>/Switch' */
  real32_T CR_ObjDistYStd_Ri;          /* '<Root>/Switch' */
  real32_T CR_ObjRAccelXStd_Le;        /* '<Root>/Switch' */
  real32_T CR_ObjRAccelYStd_Le;        /* '<Root>/Switch' */
  real32_T CR_ObjRelVelYStd_Le;        /* '<Root>/Switch' */
  real32_T CR_ObjDistYStd_Le;          /* '<Root>/Switch' */
  real32_T CR_ObjRelVelXStd_Le;        /* '<Root>/Switch' */
  real32_T CR_ObjDistXStd_Le;          /* '<Root>/Switch' */
  real32_T CR_ObjRelVelY_Le;           /* '<Root>/Switch' */
  real32_T CR_ObjRelVelY_Ri;           /* '<Root>/Switch' */
  real32_T CR_ObjRelAccelY_Le;         /* '<Root>/Switch' */
  real32_T CR_ObjRelAccelY_Ri;         /* '<Root>/Switch' */
  real32_T CR_ObjRelAccelX_Ri;         /* '<Root>/Switch' */
  real32_T CR_ObjRelVelX_Ri;           /* '<Root>/Switch' */
  real32_T CR_ObjDistX_Ri;             /* '<Root>/Switch' */
  real32_T CR_ObjDistY_Ri;             /* '<Root>/Switch' */
  real32_T CR_ObjRelAccelX_Le;         /* '<Root>/Switch' */
  real32_T CR_ObjRelVelX_Le;           /* '<Root>/Switch' */
  real32_T CR_ObjDistX_Le;             /* '<Root>/Switch' */
  real32_T CR_ObjDistY_Le;             /* '<Root>/Switch' */
  real32_T FCTA_B_TTC;                 /* '<Root>/Switch' */
  real32_T CR_BrkgReqVal;              /* '<Root>/Switch' */
  real32_T IP_VehTotDistance;          /* '<Root>/Switch' */
  real32_T HWP_SpdMaxLim;              /* '<Root>/Switch' */
  real32_T EgoVehSpd;                  /* '<Root>/Switch' */
  real32_T HWP_TgtAccelCmftLwrLimVal;  /* '<Root>/Switch' */
  real32_T HWP_TgtAccelCmftUpprLimVal; /* '<Root>/Switch' */
  real32_T HWP_LowerLimit;             /* '<Root>/Switch' */
  real32_T HWP_UpperLimit;             /* '<Root>/Switch' */
  real32_T HWP_TgtAccel;               /* '<Root>/Switch' */
  real32_T HWP_Lgt_HCUTrqReq;          /* '<Root>/Switch' */
  real32_T HWP_AEB_DecelCtrlReqVal;    /* '<Root>/Switch' */
  real32_T HWP_lgt_Decel_ReqValue;     /* '<Root>/Switch' */
  real32_T HWP_Lgtctrl_EngTrqReq;      /* '<Root>/Switch' */
  real32_T HWP_TrqOvlCmdReqValue;      /* '<Root>/Switch' */
  real32_T HWP_AngCmdReqVal;           /* '<Root>/Switch' */
  real32_T HUT_FSD18_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD16_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD17_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD15_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD14_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD12_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD13_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD11_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD10_distance;         /* '<Root>/Switch' */
  real32_T HUT_FSD8_distance;          /* '<Root>/Switch' */
  real32_T HUT_FSD9_distance;          /* '<Root>/Switch' */
  real32_T HUT_FSD7_distance;          /* '<Root>/Switch' */
  real32_T HUT_FSD6_distance;          /* '<Root>/Switch' */
  real32_T HUT_FSD5_distance;          /* '<Root>/Switch' */
  real32_T HUT_FSD3_distance;          /* '<Root>/Switch' */
  real32_T HUT_FSD4_distance;          /* '<Root>/Switch' */
  real32_T HUT_FSD2_distance;          /* '<Root>/Switch' */
  real32_T HUT_FSD1_distance;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj7_Ground_Pos_Y;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj7_Ground_Pos_X;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj7_width;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj7_Confidence;     /* '<Root>/Switch' */
  real32_T HUT_OD_Obj6_Ground_Pos_Y;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj6_Ground_Pos_X;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj6_width;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj6_Confidence;     /* '<Root>/Switch' */
  real32_T HUT_OD_Obj5_Ground_Pos_Y;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj5_Ground_Pos_X;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj5_width;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj5_Confidence;     /* '<Root>/Switch' */
  real32_T HUT_OD_Obj4_Ground_Pos_Y;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj4_Ground_Pos_X;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj4_width;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj4_Confidence;     /* '<Root>/Switch' */
  real32_T HUT_OD_Obj3_Ground_Pos_Y;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj3_Ground_Pos_X;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj3_width;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj3_Confidence;     /* '<Root>/Switch' */
  real32_T HUT_OD_Obj2_Ground_Pos_Y;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj2_Ground_Pos_X;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj2_width;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj2_Confidence;     /* '<Root>/Switch' */
  real32_T HUT_OD_Obj1_Ground_Pos_Y;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj1_Ground_Pos_X;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj1_width;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj1_Confidence;     /* '<Root>/Switch' */
  real32_T HUT_OD_Obj0_Ground_Pos_Y;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj0_Ground_Pos_X;   /* '<Root>/Switch' */
  real32_T HUT_OD_Obj0_width;          /* '<Root>/Switch' */
  real32_T HUT_OD_Obj0_Confidence;     /* '<Root>/Switch' */
  real32_T ADAS_Posn_Rehead;           /* '<Root>/Switch' */
  real32_T ADAS_Posn_Spd;              /* '<Root>/Switch' */
  real32_T ADAS_Posn_PosProbb;         /* '<Root>/Switch' */
  real32_T ADAS_Stub_TurnAngl;         /* '<Root>/Switch' */
  real32_T ADAS_Stub_RelProbb;         /* '<Root>/Switch' */
  real32_T ADAS_Seg_RelProbb;          /* '<Root>/Switch' */
  real32_T HCU_AccelPedalPosn_Diag;    /* '<Root>/Switch' */
  real32_T EPS_SteerWheelSpd;          /* '<Root>/Switch' */
  real32_T EPS_SteerWheelAng;          /* '<Root>/Switch' */
  real32_T EPS_LKATorqOvrlDlvd;        /* '<Root>/Switch' */
  real32_T EPS_DrvInpTrqVal_HighReslolution;/* '<Root>/Switch' */
  real32_T RRWheelSpd_j;               /* '<Root>/Switch' */
  real32_T RLWheelSpd_p;               /* '<Root>/Switch' */
  real32_T FRWheelSpd_m;               /* '<Root>/Switch' */
  real32_T FLWheelSpd_p;               /* '<Root>/Switch' */
  real32_T VehSpd_e;                   /* '<Root>/Switch' */
  real32_T EngTrqReq;                  /* '<Root>/Switch' */
  real32_T ESP_MasterCylBrkPress;      /* '<Root>/Switch' */
  real32_T AccelPedalPosn;             /* '<Root>/Switch' */
  real32_T AccelPedlPosnDiagc;         /* '<Root>/Switch' */
  real32_T EngSpd;                     /* '<Root>/Switch' */
  real32_T TrqLoss;                    /* '<Root>/Switch' */
  real32_T EngTrqMaxActSpd;            /* '<Root>/Switch' */
  real32_T EngTrqMinAct;               /* '<Root>/Switch' */
  real32_T DrvEngTrqReq;               /* '<Root>/Switch' */
  real32_T NetEngTrq;                  /* '<Root>/Switch' */
  real32_T EngSpd_l;                   /* '<Root>/Switch' */
  real32_T RatAct;                     /* '<Root>/Switch' */
  real32_T SteerWheelSpd;              /* '<Root>/Switch' */
  real32_T SteerWheelAng;              /* '<Root>/Switch' */
  real32_T VehYawRate;                 /* '<Root>/Switch' */
  real32_T VehLatAccel;                /* '<Root>/Switch' */
  real32_T VehLgtAccel;                /* '<Root>/Switch' */
  real32_T ACAmbTemp;                  /* '<Root>/Switch' */
  real32_T LATC_IFCAngCmdReqValue;     /* '<Root>/Unit Delay1' */
  real32_T IfLATBus;                   /* '<Root>/Unit Delay1' */
  real32_T LONC_VLC_InternalAcc;       /* '<Root>/Unit Delay2' */
  real32_T dCurrentLaneWidth;          /* '<S18>/Data Inport S-Fcn' */
  real32_T dLeftLaneWidth;             /* '<S18>/Data Inport S-Fcn' */
  real32_T dRightLaneWidth;            /* '<S18>/Data Inport S-Fcn' */
  real32_T fCurrentLaneFreeDis;        /* '<S18>/Data Inport S-Fcn' */
  real32_T fLeftLaneFreeDis;           /* '<S18>/Data Inport S-Fcn' */
  real32_T fRighLaneFreeDis;           /* '<S18>/Data Inport S-Fcn' */
  real32_T f_toll_distance;            /* '<S18>/Data Inport S-Fcn' */
  real32_T f_tunnel_distance;          /* '<S18>/Data Inport S-Fcn' */
  real32_T f_bridge_distance;          /* '<S18>/Data Inport S-Fcn' */
  real32_T f_distance_to_jam;          /* '<S18>/Data Inport S-Fcn' */
  real32_T f_distance_to_accident;     /* '<S18>/Data Inport S-Fcn' */
  real32_T i_road_curvature;           /* '<S18>/Data Inport S-Fcn' */
  real32_T i_road_curvature_far;       /* '<S18>/Data Inport S-Fcn' */
  real32_T i_road_curvature_value_matrix[10];/* '<S18>/Data Inport S-Fcn' */
  real32_T SPL_Sup1_Confidence;        /* '<S18>/Data Inport S-Fcn' */
  real32_T SPL_Sup2_Confidence;        /* '<S18>/Data Inport S-Fcn' */
  real32_T TS_Confidence;              /* '<S18>/Data Inport S-Fcn' */
  real32_T TSR_Sign_Lateral_Distance;  /* '<S18>/Data Inport S-Fcn' */
  real32_T dC0V;                       /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V;                       /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V;                       /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V;                       /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart;                  /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront;                  /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality;                   /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_d;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_m;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_h;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_c;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_b;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_c;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_j;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_o;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_n;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_h;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_g;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_j;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_m;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_m;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_e;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_k;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_l;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_e;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_j;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_ja;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_be;              /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_g;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_j1;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_f;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_dc;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_n;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_l;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_p;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_l;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_e;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_c;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_ff;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_j;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_c;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_d;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_g;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_k;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_f;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_f;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_e;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_g;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_k;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_a;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_k;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_g;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_ct;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_es;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_a;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_c;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_hx;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_k;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_d;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_kw;              /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_fr;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_l;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_i;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_f;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_ms;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_l4;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_i;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_n;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_h;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_jg;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_kk;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_h;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_g;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_m;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_g1;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_kl;              /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_mm;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_m;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_g;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_e;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_mb;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_hf;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_ps;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_p;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_k;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_k;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_n;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_f1;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_f;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_c;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_l;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_i;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_kh;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_cc;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_ko;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_ge;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_b;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_o;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_dm;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_bt;              /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_hj;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_o;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_h;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T dC0V_ld;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC1V_en;                    /* '<S29>/Data Inport S-Fcn' */
  real32_T dC2V_e;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dC3V_e;                     /* '<S29>/Data Inport S-Fcn' */
  real32_T dLaneWidth_e;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisStart_b;                /* '<S29>/Data Inport S-Fcn' */
  real32_T dDisFront_ll;               /* '<S29>/Data Inport S-Fcn' */
  real32_T dQuality_c;                 /* '<S29>/Data Inport S-Fcn' */
  real32_T DataTypeConversion19;       /* '<S22>/Data Type Conversion19' */
  real32_T DataTypeConversion17;       /* '<S22>/Data Type Conversion17' */
  real32_T A0;                         /* '<S22>/Function Caller' */
  real32_T A1;                         /* '<S22>/Function Caller' */
  real32_T A2;                         /* '<S22>/Function Caller' */
  real32_T A3;                         /* '<S22>/Function Caller' */
  real32_T Rmin;                       /* '<S22>/Function Caller' */
  real32_T Rmax;                       /* '<S22>/Function Caller' */
  real32_T FunctionCaller1_o1;         /* '<S22>/Function Caller1' */
  real32_T FunctionCaller1_o2;         /* '<S22>/Function Caller1' */
  real32_T FunctionCaller1_o3;         /* '<S22>/Function Caller1' */
  real32_T FunctionCaller1_o4;         /* '<S22>/Function Caller1' */
  real32_T Rmin_f;                     /* '<S22>/Function Caller1' */
  real32_T Rmax_m;                     /* '<S22>/Function Caller1' */
  real32_T FunctionCaller2_o1;         /* '<S22>/Function Caller2' */
  real32_T FunctionCaller2_o2;         /* '<S22>/Function Caller2' */
  real32_T FunctionCaller2_o3;         /* '<S22>/Function Caller2' */
  real32_T FunctionCaller2_o4;         /* '<S22>/Function Caller2' */
  real32_T Rmin_c;                     /* '<S22>/Function Caller2' */
  real32_T Rmax_k;                     /* '<S22>/Function Caller2' */
  real32_T FunctionCaller3_o1;         /* '<S22>/Function Caller3' */
  real32_T FunctionCaller3_o2;         /* '<S22>/Function Caller3' */
  real32_T FunctionCaller3_o3;         /* '<S22>/Function Caller3' */
  real32_T FunctionCaller3_o4;         /* '<S22>/Function Caller3' */
  real32_T Rmin_ff;                    /* '<S22>/Function Caller3' */
  real32_T Rmax_g;                     /* '<S22>/Function Caller3' */
  real32_T DataTypeConversion_h;       /* '<S22>/Data Type Conversion' */
  real32_T DataTypeConversion1_l;      /* '<S22>/Data Type Conversion1' */
  real32_T DataTypeConversion3;        /* '<S22>/Data Type Conversion3' */
  real32_T DataTypeConversion4;        /* '<S22>/Data Type Conversion4' */
  real32_T DataTypeConversion5;        /* '<S22>/Data Type Conversion5' */
  real32_T DataTypeConversion6;        /* '<S22>/Data Type Conversion6' */
  real32_T DataTypeConversion9;        /* '<S22>/Data Type Conversion9' */
  real32_T DataTypeConversion8;        /* '<S22>/Data Type Conversion8' */
  real32_T DataTypeConversion11;       /* '<S22>/Data Type Conversion11' */
  real32_T DataTypeConversion14;       /* '<S22>/Data Type Conversion14' */
  real32_T DataTypeConversion12;       /* '<S22>/Data Type Conversion12' */
  real32_T DataTypeConversion13;       /* '<S22>/Data Type Conversion13' */
  real32_T RFM_L1_dC2V;                /* '<S22>/Signal Copy3' */
  real32_T MatrixConcatenate7[24];     /* '<S5>/Matrix Concatenate7' */
  real32_T MatrixConcatenate6[24];     /* '<S5>/Matrix Concatenate6' */
  real32_T MatrixConcatenate5[24];     /* '<S5>/Matrix Concatenate5' */
  real32_T MatrixConcatenate4[24];     /* '<S5>/Matrix Concatenate4' */
  real32_T DataTypeConversion_l[11];   /* '<S5>/Data Type Conversion' */
  real32_T f_spd_change_dis;           /* '<S16>/Data Inport S-Fcn' */
  real32_T f_width;                    /* '<S16>/Data Inport S-Fcn' */
  real32_T f_vanish_pt_dis;            /* '<S16>/Data Inport S-Fcn' */
  real32_T f_spd_change_dis_n;         /* '<S16>/Data Inport S-Fcn' */
  real32_T f_width_f;                  /* '<S16>/Data Inport S-Fcn' */
  real32_T f_vanish_pt_dis_n;          /* '<S16>/Data Inport S-Fcn' */
  real32_T f_spd_change_dis_k;         /* '<S16>/Data Inport S-Fcn' */
  real32_T f_width_e;                  /* '<S16>/Data Inport S-Fcn' */
  real32_T f_vanish_pt_dis_n2;         /* '<S16>/Data Inport S-Fcn' */
  real32_T f_spd_change_dis_h;         /* '<S16>/Data Inport S-Fcn' */
  real32_T f_width_k;                  /* '<S16>/Data Inport S-Fcn' */
  real32_T f_vanish_pt_dis_c;          /* '<S16>/Data Inport S-Fcn' */
  real32_T f_start_distance;           /* '<S16>/Data Inport S-Fcn' */
  real32_T f_end_distance;             /* '<S16>/Data Inport S-Fcn' */
  real32_T f_turning_angle;            /* '<S16>/Data Inport S-Fcn' */
  real32_T RateTransition24;           /* '<Root>/Rate Transition24' */
  real32_T DataTypeConversion16;       /* '<S172>/Data Type Conversion16' */
  real32_T DataTypeConversion17_n;     /* '<S172>/Data Type Conversion17' */
  real32_T ObjDx_m[20];                /* '<S180>/Sum5' */
  real32_T Bias[15];                   /* '<S172>/Bias' */
  real32_T DataTypeConversion18;       /* '<S172>/Data Type Conversion18' */
  real32_T DataTypeConversion16_g;     /* '<S174>/Data Type Conversion16' */
  real32_T DataTypeConversion17_e;     /* '<S174>/Data Type Conversion17' */
  real32_T ObjDx_m_g[20];              /* '<S175>/Sum5' */
  real32_T Bias_l[15];                 /* '<S174>/Bias' */
  real32_T DataTypeConversion18_c;     /* '<S174>/Data Type Conversion18' */
  real32_T DataTypeConversion49;       /* '<S172>/Data Type Conversion49' */
  real32_T DataTypeConversion50;       /* '<S172>/Data Type Conversion50' */
  real32_T DataTypeConversion51;       /* '<S172>/Data Type Conversion51' */
  real32_T ObjRange_m[20];             /* '<S180>/Sum1' */
  real32_T Divide3;                    /* '<S198>/Divide3' */
  real32_T Sum1;                       /* '<S198>/Sum1' */
  real32_T Divide4;                    /* '<S198>/Divide4' */
  real32_T TrigonometricFunction;      /* '<S198>/Trigonometric Function' */
  real32_T Gain9;                      /* '<S198>/Gain9' */
  real32_T Gain10;                     /* '<S198>/Gain10' */
  real32_T TrigonometricFunction1;     /* '<S198>/Trigonometric Function1' */
  real32_T Divide5;                    /* '<S198>/Divide5' */
  real32_T Vx[15];                     /* '<S198>/Sum10' */
  real32_T Memory8;                    /* '<S179>/Memory8' */
  real32_T DataTypeConversion1_p;      /* '<S172>/Data Type Conversion1' */
  real32_T DataTypeConversion2;        /* '<S172>/Data Type Conversion2' */
  real32_T Memory1[15];                /* '<S179>/Memory1' */
  real32_T Memory4[15];                /* '<S179>/Memory4' */
  real32_T DataTypeConversion20;       /* '<S172>/Data Type Conversion20' */
  real32_T dxMaxFollowPO;              /* '<S179>/dxMaxFollowPO' */
  real32_T Abs1;                       /* '<S179>/Abs1' */
  real32_T t_dyLaneWidthSteerAdapt;    /* '<S179>/t_dyLaneWidthSteerAdapt' */
  real32_T Product_p;                  /* '<S179>/Product' */
  real32_T Gain3;                      /* '<S179>/Gain3' */
  real32_T Product1_l;                 /* '<S179>/Product1' */
  real32_T dyAdapt;                    /* '<S179>/Abs' */
  real32_T dyLaneWidthSteerAdaptRight; /* '<S179>/MinMax1' */
  real32_T dyLaneWidthMin;             /* '<S179>/dyLaneWidthMin' */
  real32_T dyLaneWidthMinHalf;         /* '<S179>/Gain' */
  real32_T Sum1_p;                     /* '<S179>/Sum1' */
  real32_T Gain5;                      /* '<S179>/Gain5' */
  real32_T Product2[15];               /* '<S179>/Product2' */
  real32_T Sum2[15];                   /* '<S179>/Sum2' */
  real32_T MinMax2[15];                /* '<S179>/MinMax2' */
  real32_T Sum4[15];                   /* '<S179>/Sum4' */
  real32_T Gain6[15];                  /* '<S179>/Gain6' */
  real32_T Product3[15];               /* '<S179>/Product3' */
  real32_T Gain4[15];                  /* '<S179>/Gain4' */
  real32_T Product4[15];               /* '<S179>/Product4' */
  real32_T Sum8[15];                   /* '<S179>/Sum8' */
  real32_T dyEdgeWidthRight[15];       /* '<S179>/Sum9' */
  real32_T dyLaneWidthSteerAdaptLeft;  /* '<S179>/MinMax' */
  real32_T Sum3[15];                   /* '<S179>/Sum3' */
  real32_T Gain2[15];                  /* '<S179>/Gain2' */
  real32_T dyEdgeWidthLeft[15];        /* '<S179>/Sum10' */
  real32_T Memory14[15];               /* '<S179>/Memory14' */
  real32_T Memory13[15];               /* '<S179>/Memory13' */
  real32_T Memory6[15];                /* '<S179>/Memory6' */
  real32_T DataTypeConversion21;       /* '<S172>/Data Type Conversion21' */
  real32_T TappedDelay[5];             /* '<S179>/Tapped Delay' */
  real32_T Fac;                        /* '<S179>/Fac' */
  real32_T Memory15;                   /* '<S179>/Memory15' */
  real32_T DeltaDx;                    /* '<S179>/DeltaDx' */
  real32_T Product5;                   /* '<S179>/Product5' */
  real32_T Memory16;                   /* '<S179>/Memory16' */
  real32_T DeltaDy;                    /* '<S179>/DeltaDy' */
  real32_T Memory18;                   /* '<S179>/Memory18' */
  real32_T Memory20;                   /* '<S179>/Memory20' */
  real32_T Memory21;                   /* '<S179>/Memory21' */
  real32_T Memory19;                   /* '<S179>/Memory19' */
  real32_T Memory28;                   /* '<S179>/Memory28' */
  real32_T Memory22;                   /* '<S179>/Memory22' */
  real32_T Memory25;                   /* '<S179>/Memory25' */
  real32_T Memory27;                   /* '<S179>/Memory27' */
  real32_T Sum11;                      /* '<S179>/Sum11' */
  real32_T Gain8;                      /* '<S179>/Gain8' */
  real32_T Product6;                   /* '<S179>/Product6' */
  real32_T Sum13;                      /* '<S179>/Sum13' */
  real32_T MinMax4;                    /* '<S179>/MinMax4' */
  real32_T uDLookupTable1;             /* '<S179>/1-D Lookup Table1' */
  real32_T Product7;                   /* '<S179>/Product7' */
  real32_T Gain1;                      /* '<S179>/Gain1' */
  real32_T MinMax5;                    /* '<S179>/MinMax5' */
  real32_T MinMax6;                    /* '<S179>/MinMax6' */
  real32_T Memory3;                    /* '<S179>/Memory3' */
  real32_T Memory32[24];               /* '<S190>/Memory32' */
  real32_T Memory31[24];               /* '<S190>/Memory31' */
  real32_T DataTypeConversion49_p;     /* '<S174>/Data Type Conversion49' */
  real32_T DataTypeConversion50_h;     /* '<S174>/Data Type Conversion50' */
  real32_T DataTypeConversion51_m;     /* '<S174>/Data Type Conversion51' */
  real32_T ObjRange_m_c[20];           /* '<S175>/Sum1' */
  real32_T Divide3_d;                  /* '<S238>/Divide3' */
  real32_T Sum1_c;                     /* '<S238>/Sum1' */
  real32_T Divide4_d;                  /* '<S238>/Divide4' */
  real32_T TrigonometricFunction_m;    /* '<S238>/Trigonometric Function' */
  real32_T Gain9_g;                    /* '<S238>/Gain9' */
  real32_T Gain10_c;                   /* '<S238>/Gain10' */
  real32_T TrigonometricFunction1_m;   /* '<S238>/Trigonometric Function1' */
  real32_T Divide5_n;                  /* '<S238>/Divide5' */
  real32_T Vx_k[15];                   /* '<S238>/Sum10' */
  real32_T Memory8_m;                  /* '<S220>/Memory8' */
  real32_T DataTypeConversion1_pi;     /* '<S174>/Data Type Conversion1' */
  real32_T DataTypeConversion2_i;      /* '<S174>/Data Type Conversion2' */
  real32_T DataTypeConversion20_i;     /* '<S174>/Data Type Conversion20' */
  real32_T Memory1_m[15];              /* '<S220>/Memory1' */
  real32_T Memory4_a[15];              /* '<S220>/Memory4' */
  real32_T dxMaxFollowPO_d;            /* '<S220>/dxMaxFollowPO' */
  real32_T Abs1_e;                     /* '<S220>/Abs1' */
  real32_T t_dyLaneWidthSteerAdapt_j;  /* '<S220>/t_dyLaneWidthSteerAdapt' */
  real32_T Product_j;                  /* '<S220>/Product' */
  real32_T Gain3_a;                    /* '<S220>/Gain3' */
  real32_T Product1_a;                 /* '<S220>/Product1' */
  real32_T dyAdapt_j;                  /* '<S220>/Abs' */
  real32_T dyLaneWidthSteerAdaptRight_i;/* '<S220>/MinMax1' */
  real32_T dyLaneWidthMin_g;           /* '<S220>/dyLaneWidthMin' */
  real32_T dyLaneWidthMinHalf_l;       /* '<S220>/Gain' */
  real32_T Sum1_n;                     /* '<S220>/Sum1' */
  real32_T Gain5_i;                    /* '<S220>/Gain5' */
  real32_T Product2_d[15];             /* '<S220>/Product2' */
  real32_T Sum2_b[15];                 /* '<S220>/Sum2' */
  real32_T MinMax2_o[15];              /* '<S220>/MinMax2' */
  real32_T Sum4_i[15];                 /* '<S220>/Sum4' */
  real32_T Gain6_a[15];                /* '<S220>/Gain6' */
  real32_T Product3_g[15];             /* '<S220>/Product3' */
  real32_T Gain4_m[15];                /* '<S220>/Gain4' */
  real32_T Product4_d[15];             /* '<S220>/Product4' */
  real32_T Sum8_a[15];                 /* '<S220>/Sum8' */
  real32_T dyEdgeWidthRight_i[15];     /* '<S220>/Sum9' */
  real32_T dyLaneWidthSteerAdaptLeft_g;/* '<S220>/MinMax' */
  real32_T Sum3_c[15];                 /* '<S220>/Sum3' */
  real32_T Gain2_o[15];                /* '<S220>/Gain2' */
  real32_T dyEdgeWidthLeft_p[15];      /* '<S220>/Sum10' */
  real32_T Memory14_j[15];             /* '<S220>/Memory14' */
  real32_T Memory13_g[15];             /* '<S220>/Memory13' */
  real32_T Memory6_f[15];              /* '<S220>/Memory6' */
  real32_T DataTypeConversion21_p;     /* '<S174>/Data Type Conversion21' */
  real32_T TappedDelay_n[5];           /* '<S220>/Tapped Delay' */
  real32_T Fac_k;                      /* '<S220>/Fac' */
  real32_T Memory15_p;                 /* '<S220>/Memory15' */
  real32_T DeltaDx_p;                  /* '<S220>/DeltaDx' */
  real32_T Product5_f;                 /* '<S220>/Product5' */
  real32_T Memory16_n;                 /* '<S220>/Memory16' */
  real32_T DeltaDy_m;                  /* '<S220>/DeltaDy' */
  real32_T Memory18_b;                 /* '<S220>/Memory18' */
  real32_T Memory20_h;                 /* '<S220>/Memory20' */
  real32_T Memory21_p;                 /* '<S220>/Memory21' */
  real32_T Memory19_l;                 /* '<S220>/Memory19' */
  real32_T Memory28_e;                 /* '<S220>/Memory28' */
  real32_T Memory22_p;                 /* '<S220>/Memory22' */
  real32_T Memory25_o;                 /* '<S220>/Memory25' */
  real32_T Memory27_j;                 /* '<S220>/Memory27' */
  real32_T Sum11_f;                    /* '<S220>/Sum11' */
  real32_T Gain8_n;                    /* '<S220>/Gain8' */
  real32_T Product6_j;                 /* '<S220>/Product6' */
  real32_T Sum13_j;                    /* '<S220>/Sum13' */
  real32_T MinMax4_g;                  /* '<S220>/MinMax4' */
  real32_T uDLookupTable1_g;           /* '<S220>/1-D Lookup Table1' */
  real32_T Product7_l;                 /* '<S220>/Product7' */
  real32_T Gain1_k;                    /* '<S220>/Gain1' */
  real32_T MinMax5_h;                  /* '<S220>/MinMax5' */
  real32_T MinMax6_e;                  /* '<S220>/MinMax6' */
  real32_T Memory3_n;                  /* '<S220>/Memory3' */
  real32_T Memory32_n[24];             /* '<S230>/Memory32' */
  real32_T Memory31_d[24];             /* '<S230>/Memory31' */
  real32_T TrigonometricFunction2;     /* '<S238>/Trigonometric Function2' */
  real32_T Divide11;                   /* '<S238>/Divide11' */
  real32_T Vy[15];                     /* '<S238>/Sum11' */
  real32_T Memory2[15];                /* '<S220>/Memory2' */
  real32_T TrigonometricFunction2_f;   /* '<S198>/Trigonometric Function2' */
  real32_T Divide11_i;                 /* '<S198>/Divide11' */
  real32_T Vy_h[15];                   /* '<S198>/Sum11' */
  real32_T Memory2_f[15];              /* '<S179>/Memory2' */
  real32_T SignalCopy[6];              /* '<S176>/Signal Copy' */
  real32_T SignalCopy1[6];             /* '<S176>/Signal Copy1' */
  real32_T DataTypeConversion34;       /* '<S176>/Data Type Conversion34' */
  real32_T Gain8_p[2];                 /* '<S176>/Gain8' */
  real32_T Gain4_e[2];                 /* '<S176>/Gain4' */
  real32_T Gain[5];                    /* '<S176>/Gain' */
  real32_T Object_DX[9];               /* '<S176>/Data Type Conversion' */
  real32_T Gain9_m[2];                 /* '<S176>/Gain9' */
  real32_T Gain5_b[2];                 /* '<S176>/Gain5' */
  real32_T Gain1_o[5];                 /* '<S176>/Gain1' */
  real32_T Object_DY[9];               /* '<S176>/Data Type Conversion1' */
  real32_T Gain10_e[2];                /* '<S176>/Gain10' */
  real32_T Gain6_m[2];                 /* '<S176>/Gain6' */
  real32_T Gain2_f[5];                 /* '<S176>/Gain2' */
  real32_T Object_VX[9];               /* '<S176>/Data Type Conversion2' */
  real32_T DataTypeConversion2_h[9];   /* '<S170>/Data Type Conversion2' */
  real32_T DataTypeConversion7;        /* '<S220>/Data Type Conversion7' */
  real32_T DesireDistance;             /* '<S220>/DesireDistance' */
  real32_T DataTypeConversion7_f;      /* '<S179>/Data Type Conversion7' */
  real32_T DesireDistance_c;           /* '<S179>/DesireDistance' */
  real32_T OTL_C3;                     /* '<S174>/Data Type Conversion7' */
  real32_T OTL_C2;                     /* '<S174>/Data Type Conversion8' */
  real32_T OTL_C1;                     /* '<S174>/Data Type Conversion9' */
  real32_T OTL_C0;                     /* '<S174>/Data Type Conversion10' */
  real32_T OTL_Range;                  /* '<S174>/Data Type Conversion11' */
  real32_T ACCTgtObjCntAlive;          /* '<S174>/Data Type Conversion37' */
  real32_T dxP0_b;                     /* '<S174>/Data Type Conversion23' */
  real32_T vxRelP0;                    /* '<S174>/Data Type Conversion24' */
  real32_T ACCTgtObjVy;                /* '<S174>/Data Type Conversion25' */
  real32_T axAbsGroundP0;              /* '<S174>/Data Type Conversion26' */
  real32_T rangeP0;                    /* '<S174>/Data Type Conversion27' */
  real32_T ObjDYP0;                    /* '<S174>/Data Type Conversion33' */
  real32_T ACCTgtObjExist;             /* '<S174>/Data Type Conversion38' */
  real32_T dxP2;                       /* '<S174>/Data Type Conversion12' */
  real32_T rangeP2;                    /* '<S174>/Add' */
  real32_T vxRelP2;                    /* '<S174>/Data Type Conversion13' */
  real32_T axAbsGroundP2;              /* '<S174>/Data Type Conversion36' */
  real32_T ObjDYP2;                    /* '<S174>/Data Type Conversion41' */
  real32_T dxP3;                       /* '<S174>/Data Type Conversion43' */
  real32_T rangeP3;                    /* '<S174>/Add1' */
  real32_T vxRelP3;                    /* '<S174>/Data Type Conversion44' */
  real32_T axAbsGroundP3;              /* '<S174>/Data Type Conversion45' */
  real32_T ObjDYP3;                    /* '<S174>/Data Type Conversion48' */
  real32_T Abs;                        /* '<S190>/Abs' */
  real32_T OTL_C3_b;                   /* '<S172>/Data Type Conversion7' */
  real32_T OTL_C2_d;                   /* '<S172>/Data Type Conversion8' */
  real32_T OTL_C1_h;                   /* '<S172>/Data Type Conversion9' */
  real32_T OTL_C0_c;                   /* '<S172>/Data Type Conversion10' */
  real32_T OTL_Range_o;                /* '<S172>/Data Type Conversion11' */
  real32_T ACCTgtObjCntAlive_c;        /* '<S172>/Data Type Conversion37' */
  real32_T vxRelP0_n;                  /* '<S172>/Data Type Conversion24' */
  real32_T ACCTgtObjVy_g;              /* '<S172>/Data Type Conversion25' */
  real32_T axAbsGroundP0_b;            /* '<S172>/Data Type Conversion26' */
  real32_T rangeP0_n;                  /* '<S172>/Data Type Conversion27' */
  real32_T ObjDYP0_p;                  /* '<S172>/Data Type Conversion33' */
  real32_T ACCTgtObjExist_o;           /* '<S172>/Data Type Conversion38' */
  real32_T P0HeadingAngle;             /* '<S172>/Data Type Conversion39' */
  real32_T dxP2_b;                     /* '<S172>/Data Type Conversion12' */
  real32_T rangeP2_l;                  /* '<S172>/Add' */
  real32_T vxRelP2_e;                  /* '<S172>/Data Type Conversion13' */
  real32_T axAbsGroundP2_m;            /* '<S172>/Data Type Conversion36' */
  real32_T ObjDYP2_l;                  /* '<S172>/Data Type Conversion41' */
  real32_T dxP3_l;                     /* '<S172>/Data Type Conversion43' */
  real32_T rangeP3_j;                  /* '<S172>/Add1' */
  real32_T vxRelP3_j;                  /* '<S172>/Data Type Conversion44' */
  real32_T axAbsGroundP3_n;            /* '<S172>/Data Type Conversion45' */
  real32_T ObjDYP3_k;                  /* '<S172>/Data Type Conversion48' */
  real32_T DataTypeConversion4_k;      /* '<S172>/Data Type Conversion4' */
  real32_T Sum1_a;                     /* '<S172>/Sum1' */
  real32_T Gain9_a;                    /* '<S172>/Gain9' */
  real32_T FilterTime6;                /* '<S172>/FilterTime6' */
  real32_T Sum4_m;                     /* '<S172>/Sum4' */
  real32_T FilterTime3;                /* '<S172>/FilterTime3' */
  real32_T DataTypeConversion19_f;     /* '<S172>/Data Type Conversion19' */
  real32_T Abs2;                       /* '<S179>/Abs2' */
  real32_T AlpWheelAngleFactor;        /* '<S179>/1-D Lookup Table2' */
  real32_T DataTypeConversion4_kd;     /* '<S174>/Data Type Conversion4' */
  real32_T Sum1_g;                     /* '<S174>/Sum1' */
  real32_T Gain9_i;                    /* '<S174>/Gain9' */
  real32_T FilterTime6_k;              /* '<S174>/FilterTime6' */
  real32_T Sum4_d;                     /* '<S174>/Sum4' */
  real32_T FilterTime3_j;              /* '<S174>/FilterTime3' */
  real32_T DataTypeConversion19_i;     /* '<S174>/Data Type Conversion19' */
  real32_T Abs2_p;                     /* '<S220>/Abs2' */
  real32_T AlpWheelAngleFactor_o;      /* '<S220>/1-D Lookup Table2' */
  real32_T Dx[5];                      /* '<S176>/MATLAB Function3' */
  real32_T Dy[5];                      /* '<S176>/MATLAB Function3' */
  real32_T Vx_b[5];                    /* '<S176>/MATLAB Function3' */
  real32_T Width[5];                   /* '<S176>/MATLAB Function3' */
  real32_T Dx_c[2];                    /* '<S176>/MATLAB Function2' */
  real32_T Dy_n[2];                    /* '<S176>/MATLAB Function2' */
  real32_T Vx_f[2];                    /* '<S176>/MATLAB Function2' */
  real32_T Width_n[2];                 /* '<S176>/MATLAB Function2' */
  real32_T Dx_n[2];                    /* '<S176>/MATLAB Function1' */
  real32_T Dy_ny[2];                   /* '<S176>/MATLAB Function1' */
  real32_T Vx_c[2];                    /* '<S176>/MATLAB Function1' */
  real32_T Width_i[2];                 /* '<S176>/MATLAB Function1' */
  real32_T ObjLatPos[20];              /* '<S252>/MATLAB Function1' */
  real32_T ObjLatVel[20];              /* '<S252>/MATLAB Function1' */
  real32_T ObjLongAccel[20];           /* '<S252>/MATLAB Function1' */
  real32_T ObjLongVel[20];             /* '<S252>/MATLAB Function1' */
  real32_T ObjWidth[20];               /* '<S252>/MATLAB Function1' */
  real32_T ObjLongPos[20];             /* '<S252>/MATLAB Function1' */
  real32_T ImpAsg_InsertedFor_width_at_inport_0[20];/* '<S253>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_confidence_at_inport_0[20];/* '<S253>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_LongDis_at_inport_0[20];/* '<S253>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_LatDis_at_inport_0[20];/* '<S253>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_AbsLongVel_at_inport_0[20];/* '<S253>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_AbsLongAcc_at_inport_0[20];/* '<S253>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_AbsLatVel_at_inport_0[20];/* '<S253>/Bus Selector' */
  real32_T P0Range;                    /* '<S220>/TargetSelect' */
  real32_T P2Range;                    /* '<S220>/TargetSelect' */
  real32_T P3Range;                    /* '<S220>/TargetSelect' */
  real32_T P0Vr;                       /* '<S220>/TargetSelect' */
  real32_T P2Vr;                       /* '<S220>/TargetSelect' */
  real32_T P3Vr;                       /* '<S220>/TargetSelect' */
  real32_T P0ArG;                      /* '<S220>/TargetSelect' */
  real32_T P2ArG;                      /* '<S220>/TargetSelect' */
  real32_T P3ArG;                      /* '<S220>/TargetSelect' */
  real32_T P0Dx;                       /* '<S220>/TargetSelect' */
  real32_T P2Dx;                       /* '<S220>/TargetSelect' */
  real32_T P3Dx;                       /* '<S220>/TargetSelect' */
  real32_T P0Dy;                       /* '<S220>/TargetSelect' */
  real32_T P2Dy;                       /* '<S220>/TargetSelect' */
  real32_T P3Dy;                       /* '<S220>/TargetSelect' */
  real32_T P0Dyc;                      /* '<S220>/TargetSelect' */
  real32_T P0Vyc;                      /* '<S220>/TargetSelect' */
  real32_T ObjLatPos_l[20];            /* '<S213>/MATLAB Function1' */
  real32_T ObjLatVel_p[20];            /* '<S213>/MATLAB Function1' */
  real32_T ObjLongAccel_k[20];         /* '<S213>/MATLAB Function1' */
  real32_T ObjLongVel_b[20];           /* '<S213>/MATLAB Function1' */
  real32_T ObjWidth_p[20];             /* '<S213>/MATLAB Function1' */
  real32_T ObjLongPos_b[20];           /* '<S213>/MATLAB Function1' */
  real32_T ImpAsg_InsertedFor_width_at_inport_0_h[20];/* '<S214>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_confidence_at_inport_0_n[20];/* '<S214>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_LongDis_at_inport_0_o[20];/* '<S214>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_LatDis_at_inport_0_j[20];/* '<S214>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_AbsLongVel_at_inport_0_i[20];/* '<S214>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_AbsLongAcc_at_inport_0_d[20];/* '<S214>/Bus Selector' */
  real32_T ImpAsg_InsertedFor_AbsLatVel_at_inport_0_k[20];/* '<S214>/Bus Selector' */
  real32_T P0Range_g;                  /* '<S179>/TargetSelect' */
  real32_T P2Range_f;                  /* '<S179>/TargetSelect' */
  real32_T P3Range_i;                  /* '<S179>/TargetSelect' */
  real32_T P0Vr_f;                     /* '<S179>/TargetSelect' */
  real32_T P2Vr_k;                     /* '<S179>/TargetSelect' */
  real32_T P3Vr_k;                     /* '<S179>/TargetSelect' */
  real32_T P0ArG_e;                    /* '<S179>/TargetSelect' */
  real32_T P2ArG_k;                    /* '<S179>/TargetSelect' */
  real32_T P3ArG_d;                    /* '<S179>/TargetSelect' */
  real32_T P0Dx_f;                     /* '<S179>/TargetSelect' */
  real32_T P2Dx_o;                     /* '<S179>/TargetSelect' */
  real32_T P3Dx_d;                     /* '<S179>/TargetSelect' */
  real32_T P0Dy_h;                     /* '<S179>/TargetSelect' */
  real32_T P2Dy_o;                     /* '<S179>/TargetSelect' */
  real32_T P3Dy_g;                     /* '<S179>/TargetSelect' */
  real32_T P0Dyc_j;                    /* '<S179>/TargetSelect' */
  real32_T P0Vyc_g;                    /* '<S179>/TargetSelect' */
  real32_T A0_g;                       /* '<S167>/A0' */
  real32_T TmpSignalConversionAtA0Outport1;/* '<S167>/A0' */
  real32_T A1_i;                       /* '<S167>/A1' */
  real32_T TmpSignalConversionAtA1Outport1;/* '<S167>/A1' */
  real32_T A2_l;                       /* '<S167>/A2' */
  real32_T TmpSignalConversionAtA2Outport1;/* '<S167>/A2' */
  real32_T A3_g;                       /* '<S167>/A3' */
  real32_T TmpSignalConversionAtA3Outport1;/* '<S167>/A3' */
  real32_T Range_min;                  /* '<S167>/Range_min' */
  real32_T TmpSignalConversionAtRange_minOutport1;/* '<S167>/Range_min' */
  real32_T Range_max;                  /* '<S167>/Range_max' */
  real32_T TmpSignalConversionAtRange_maxOutport1;/* '<S167>/Range_max' */
  real32_T Rmax_h;                     /* '<S167>/MATLAB Function3' */
  real32_T Rmin_h;                     /* '<S167>/MATLAB Function3' */
  real32_T A0_b;                       /* '<S167>/MATLAB Function3' */
  real32_T A1_o;                       /* '<S167>/MATLAB Function3' */
  real32_T A2_m;                       /* '<S167>/MATLAB Function3' */
  real32_T A3_o;                       /* '<S167>/MATLAB Function3' */
  real32_T LH1C0;                      /* '<S22>/LHLine' */
  real32_T LH1C1;                      /* '<S22>/LHLine' */
  real32_T LH1C2;                      /* '<S22>/LHLine' */
  real32_T LH1C3;                      /* '<S22>/LHLine' */
  real32_T LH1DxMin;                   /* '<S22>/LHLine' */
  real32_T LH1DxMax;                   /* '<S22>/LHLine' */
  real32_T LH1Width;                   /* '<S22>/LHLine' */
  real32_T LH1Reliable;                /* '<S22>/LHLine' */
  real32_T LH2C0;                      /* '<S22>/LHLine' */
  real32_T LH2C1;                      /* '<S22>/LHLine' */
  real32_T LH2C2;                      /* '<S22>/LHLine' */
  real32_T LH2C3;                      /* '<S22>/LHLine' */
  real32_T LH2DxMin;                   /* '<S22>/LHLine' */
  real32_T LH2DxMax;                   /* '<S22>/LHLine' */
  real32_T LH2Width;                   /* '<S22>/LHLine' */
  real32_T LH2Reliable;                /* '<S22>/LHLine' */
  real32_T L1C0;                       /* '<S22>/LALine' */
  real32_T L1C1;                       /* '<S22>/LALine' */
  real32_T L1C2;                       /* '<S22>/LALine' */
  real32_T L1C3;                       /* '<S22>/LALine' */
  real32_T L1DxMin;                    /* '<S22>/LALine' */
  real32_T L1DxMax;                    /* '<S22>/LALine' */
  real32_T L1Width;                    /* '<S22>/LALine' */
  real32_T L1Reliable;                 /* '<S22>/LALine' */
  real32_T L2C0;                       /* '<S22>/LALine' */
  real32_T L2C1;                       /* '<S22>/LALine' */
  real32_T L2C2;                       /* '<S22>/LALine' */
  real32_T L2C3;                       /* '<S22>/LALine' */
  real32_T L2DxMin;                    /* '<S22>/LALine' */
  real32_T L2DxMax;                    /* '<S22>/LALine' */
  real32_T L2Width;                    /* '<S22>/LALine' */
  real32_T L2Reliable;                 /* '<S22>/LALine' */
  real32_T L3C0;                       /* '<S22>/LALine' */
  real32_T L3C1;                       /* '<S22>/LALine' */
  real32_T L3C2;                       /* '<S22>/LALine' */
  real32_T L3C3;                       /* '<S22>/LALine' */
  real32_T L3DxMin;                    /* '<S22>/LALine' */
  real32_T L3DxMax;                    /* '<S22>/LALine' */
  real32_T L3Width;                    /* '<S22>/LALine' */
  real32_T L3Reliable;                 /* '<S22>/LALine' */
  real32_T L4C0;                       /* '<S22>/LALine' */
  real32_T L4C1;                       /* '<S22>/LALine' */
  real32_T L4C2;                       /* '<S22>/LALine' */
  real32_T L4C3;                       /* '<S22>/LALine' */
  real32_T L4DxMin;                    /* '<S22>/LALine' */
  real32_T L4DxMax;                    /* '<S22>/LALine' */
  real32_T L4Width;                    /* '<S22>/LALine' */
  real32_T L4Reliable;                 /* '<S22>/LALine' */
  real32_T DataTypeConversion_m;       /* '<S8>/Data Type Conversion' */
  real32_T SignalCopy_e;               /* '<S8>/Signal Copy' */
  real32_T IfLATBus_g;                 /* '<S8>/LATC' */
  real32_T LATC_IFCAngCmdReqValue_a;   /* '<S8>/LATC' */
  real32_T UnitDelay1;                 /* '<S17>/Unit Delay1' */
  real32_T axvRefMs2;                  /* '<S7>/VIE' */
  real32_T vxvRefMs;                   /* '<S7>/VIE' */
  real32_T axvRoadSlopeMs2;            /* '<S7>/VIE' */
  real32_T axRefMs2;                   /* '<S7>/VIE' */
  real32_T axRefDt;                    /* '<S7>/VIE' */
  real32_T psiDtOpt;                   /* '<S7>/VIE' */
  real32_T ayvRefMs2;                  /* '<S7>/VIE' */
  real32_T alpSideSlipAngle;           /* '<S7>/VIE' */
  real32_T kapTraj;                    /* '<S7>/VIE' */
  real32_T alpSumSlideCurveness;       /* '<S7>/VIE' */
  real32_T SteerAngleOffset_deg;       /* '<S7>/VIE' */
  real32_T Product_f;                  /* '<S143>/Product' */
  real32_T Gain2_ox;                   /* '<S87>/Gain2' */
  real32_T DataTypeConversion1_j[6];   /* '<S42>/Data Type Conversion1' */
  real32_T DataTypeConversion2_g[6];   /* '<S42>/Data Type Conversion2' */
  real32_T DataTypeConversion3_n[6];   /* '<S42>/Data Type Conversion3' */
  real32_T DataTypeConversion4_a[6];   /* '<S42>/Data Type Conversion4' */
  real32_T DataTypeConversion5_k[6];   /* '<S42>/Data Type Conversion5' */
  real32_T DataTypeConversion1_d[6];   /* '<S40>/Data Type Conversion1' */
  real32_T DataTypeConversion2_n[6];   /* '<S40>/Data Type Conversion2' */
  real32_T DataTypeConversion3_k[6];   /* '<S40>/Data Type Conversion3' */
  real32_T DataTypeConversion4_l[6];   /* '<S40>/Data Type Conversion4' */
  real32_T DataTypeConversion5_c[6];   /* '<S40>/Data Type Conversion5' */
  real32_T ObjDx[11];                  /* '<S5>/MATLAB Function2' */
  real32_T ObjDy[11];                  /* '<S5>/MATLAB Function2' */
  real32_T ObjVx[11];                  /* '<S5>/MATLAB Function2' */
  real32_T ObjVy[11];                  /* '<S5>/MATLAB Function2' */
  real32_T ObjAx[11];                  /* '<S5>/MATLAB Function2' */
  real32_T ObjPrio[24];                /* '<S5>/MATLAB Function1' */
  real32_T ObjMatrix[24];              /* '<S5>/MATLAB Function1' */
  real32_T DataTypeConversion1_b[6];   /* '<S32>/Data Type Conversion1' */
  real32_T DataTypeConversion2_o[6];   /* '<S32>/Data Type Conversion2' */
  real32_T DataTypeConversion3_f[6];   /* '<S32>/Data Type Conversion3' */
  real32_T DataTypeConversion4_b[6];   /* '<S32>/Data Type Conversion4' */
  real32_T DataTypeConversion5_m[6];   /* '<S32>/Data Type Conversion5' */
  real32_T DataTypeConversion1_a[6];   /* '<S30>/Data Type Conversion1' */
  real32_T DataTypeConversion2_i5[6];  /* '<S30>/Data Type Conversion2' */
  real32_T DataTypeConversion3_e[6];   /* '<S30>/Data Type Conversion3' */
  real32_T DataTypeConversion4_i[6];   /* '<S30>/Data Type Conversion4' */
  real32_T DataTypeConversion5_n[6];   /* '<S30>/Data Type Conversion5' */
  uint16_T FreshnessValue_HAP_FD3;     /* '<Root>/Switch' */
  uint16_T APS_Coordinate_Angle;       /* '<Root>/Switch' */
  uint16_T AVM_3DAngSts;               /* '<Root>/Switch' */
  uint16_T FreshnessValue_HAP_FD1;     /* '<Root>/Switch' */
  uint16_T HAP_ESP_LSMDistToStop;      /* '<Root>/Switch' */
  uint16_T APS_ESP_BrkDistance;        /* '<Root>/Switch' */
  uint16_T FreshnessValue_IP2;         /* '<Root>/Switch' */
  uint16_T FreshnessValue_IDC_L3_FD3;  /* '<Root>/Switch' */
  uint16_T FreshnessValue_IDC_L3_FD2;  /* '<Root>/Switch' */
  uint16_T FreshnessValue_IDC_L3_FD1;  /* '<Root>/Switch' */
  uint16_T HWP_TrqOvlCmdProtnValue;    /* '<Root>/Switch' */
  uint16_T HUT_OD_Obj_Timestamp;       /* '<Root>/Switch' */
  uint16_T FreshnessValue_HUT_FD1;     /* '<Root>/Switch' */
  uint16_T ADAS_Posn_Age;              /* '<Root>/Switch' */
  uint16_T ADAS_Posn_Offset;           /* '<Root>/Switch' */
  uint16_T NavCtryType;                /* '<Root>/Switch' */
  uint16_T NavVehToTrafEyeDist;        /* '<Root>/Switch' */
  uint16_T YLvl;                       /* '<Root>/Switch' */
  uint16_T XLvl;                       /* '<Root>/Switch' */
  uint16_T ADAS_Stub_Offset;           /* '<Root>/Switch' */
  uint16_T ADAS_Seg_Offset;            /* '<Root>/Switch' */
  uint16_T ADAS_ProfShort_Value1;      /* '<Root>/Switch' */
  uint16_T ADAS_ProfShort_Value0;      /* '<Root>/Switch' */
  uint16_T ADAS_ProfShort_Dist1;       /* '<Root>/Switch' */
  uint16_T ADAS_ProfShort_Offset;      /* '<Root>/Switch' */
  uint16_T ADAS_ProfLong_Offset;       /* '<Root>/Switch' */
  uint16_T ADAS_Meta_RegionCode;       /* '<Root>/Switch' */
  uint16_T ADAS_Meta_HwVer;            /* '<Root>/Switch' */
  uint16_T ADAS_Meta_CountryCode;      /* '<Root>/Switch' */
  uint16_T HCU_TrqLimMax_Norm;         /* '<Root>/Switch' */
  uint16_T FreshnessValue_HCU_FD3;     /* '<Root>/Switch' */
  uint16_T HCU_VehSpdLimit;            /* '<Root>/Switch' */
  uint16_T FreshnessValue_HCU_FD1;     /* '<Root>/Switch' */
  uint16_T FreshnessValue_EPS_FD1;     /* '<Root>/Switch' */
  uint16_T FreshnessValue_ESP_FD3;     /* '<Root>/Switch' */
  uint16_T FreshnessValue_ESP_FD2;     /* '<Root>/Switch' */
  uint16_T FourWhlsBrkTrq;             /* '<Root>/Switch' */
  uint16_T MaxEngTrqNorm;              /* '<Root>/Switch' */
  uint16_T FreshnessValue_ECM_FD2;     /* '<Root>/Switch' */
  uint16_T FreshnessValue_ECM_FD1;     /* '<Root>/Switch' */
  uint16_T FreshnessValue_DCT_FD4;     /* '<Root>/Switch' */
  uint16_T FreshnessValue_DCT_FD1;     /* '<Root>/Switch' */
  uint16_T FreshnessValue_BCM3;        /* '<Root>/Switch' */
  uint16_T FreshnessValue_BCM10;       /* '<Root>/Switch' */
  uint16_T FreshnessValue_BCM1;        /* '<Root>/Switch' */
  uint16_T FreshnessValue_ABM1;        /* '<Root>/Switch' */
  uint16_T FreshnessValue_R_PBox1;     /* '<Root>/Switch' */
  uint16_T i_road_curvature_far_distance;/* '<S18>/Data Inport S-Fcn' */
  uint16_T i_road_curvature_distance_matrix[10];/* '<S18>/Data Inport S-Fcn' */
  uint16_T CtryType;                   /* '<S18>/Data Inport S-Fcn' */
  uint16_T VehToTrafEyeDist;           /* '<S18>/Data Inport S-Fcn' */
  uint16_T ReceivedBytes;              /* '<S258>/Data Inport S-Fcn' */
  uint16_T SourcePort;                 /* '<S258>/Data Inport S-Fcn' */
  uint16_T ReceivedBytes_a;            /* '<S162>/Data Inport S-Fcn' */
  uint16_T SourcePort_n;               /* '<S162>/Data Inport S-Fcn' */
  uint16_T ImpAsg_InsertedFor_Age_at_inport_0[20];/* '<S253>/Bus Selector' */
  uint16_T ImpAsg_InsertedFor_Age_at_inport_0_o[20];/* '<S214>/Bus Selector' */
  uint16_T LSM_PilotSPLDist;           /* '<S132>/LSM' */
  uint16_T LSM_o8;                     /* '<S132>/LSM' */
  uint16_T UnitDelay_p;                /* '<S149>/Unit Delay' */
  uint16_T Switch_f;                   /* '<S149>/Switch' */
  uint16_T Sum_m;                      /* '<S149>/Sum' */
  uint16_T Switch1;                    /* '<S149>/Switch1' */
  uint16_T Saturation1;                /* '<S149>/Saturation1' */
  uint16_T UnitDelay_ge;               /* '<S148>/Unit Delay' */
  uint16_T Switch_p;                   /* '<S148>/Switch' */
  uint16_T Sum_gj;                     /* '<S148>/Sum' */
  uint16_T Switch1_k;                  /* '<S148>/Switch1' */
  uint16_T Saturation1_a;              /* '<S148>/Saturation1' */
  uint16_T Sum_n;                      /* '<S87>/Sum' */
  uint16_T Sum1_j;                     /* '<S87>/Sum1' */
  uint16_T Gain11[2];                  /* '<S176>/Gain11' */
  uint16_T Gain7[2];                   /* '<S176>/Gain7' */
  uint16_T Gain3_p[5];                 /* '<S176>/Gain3' */
  int16_T APS_Coordinate_Y;            /* '<Root>/Switch' */
  int16_T APS_Coordinate_X;            /* '<Root>/Switch' */
  int16_T MinPsblWheelTrq;             /* '<Root>/Switch' */
  int16_T TotWheelTrq;                 /* '<Root>/Switch' */
  int16_T MaxPsblWheelTrq;             /* '<Root>/Switch' */
  int16_T ActWheelTrqDmd;              /* '<Root>/Switch' */
  int16_T GazePosnZ;                   /* '<Root>/Switch' */
  int16_T GazePosnY;                   /* '<Root>/Switch' */
  int16_T GazePosnX;                   /* '<Root>/Switch' */
  int16_T HeadPosnZ;                   /* '<Root>/Switch' */
  int16_T HeadPosnY;                   /* '<Root>/Switch' */
  int16_T HeadPosnX;                   /* '<Root>/Switch' */
  uint8_T MatrixConcatenate1_n[24];    /* '<S5>/Matrix Concatenate1' */
  uint8_T USS_FrontSys_Status;         /* '<Root>/Switch' */
  uint8_T USS_FLSide1_Status;          /* '<Root>/Switch' */
  uint8_T USS_RLSide2_Status;          /* '<Root>/Switch' */
  uint8_T USS_FRSide1_Status;          /* '<Root>/Switch' */
  uint8_T USS_RRSide2_Status;          /* '<Root>/Switch' */
  uint8_T HAP_RtSide_Obj4_ID;          /* '<Root>/Switch' */
  uint8_T HAP_RtSide_Obj4_type;        /* '<Root>/Switch' */
  uint8_T HAP_RtSide_Obj3_ID;          /* '<Root>/Switch' */
  uint8_T HAP_RtSide_Obj3_type;        /* '<Root>/Switch' */
  uint8_T HAP_RtSide_Obj2_ID;          /* '<Root>/Switch' */
  uint8_T HAP_RtSide_Obj2_type;        /* '<Root>/Switch' */
  uint8_T HAP_RtCam_WorkSts;           /* '<Root>/Switch' */
  uint8_T HAP_RtSide_Obj1_ID;          /* '<Root>/Switch' */
  uint8_T HAP_RtSide_Obj1_type;        /* '<Root>/Switch' */
  uint8_T OD_Obj7_ID;                  /* '<Root>/Switch' */
  uint8_T OD_Obj7_type;                /* '<Root>/Switch' */
  uint8_T OD_Obj6_ID;                  /* '<Root>/Switch' */
  uint8_T OD_Obj6_type;                /* '<Root>/Switch' */
  uint8_T OD_Obj5_ID;                  /* '<Root>/Switch' */
  uint8_T OD_Obj5_type;                /* '<Root>/Switch' */
  uint8_T OD_Obj4_ID;                  /* '<Root>/Switch' */
  uint8_T OD_Obj4_type;                /* '<Root>/Switch' */
  uint8_T OD_Obj3_ID;                  /* '<Root>/Switch' */
  uint8_T OD_Obj3_type;                /* '<Root>/Switch' */
  uint8_T OD_Obj2_ID;                  /* '<Root>/Switch' */
  uint8_T OD_Obj2_type;                /* '<Root>/Switch' */
  uint8_T OD_Obj1_ID;                  /* '<Root>/Switch' */
  uint8_T OD_Obj1_type;                /* '<Root>/Switch' */
  uint8_T HAPob_WorkSts;               /* '<Root>/Switch' */
  uint8_T RmtPrkgFinishReq;            /* '<Root>/Switch' */
  uint8_T APA_MenuDispCtrlCmd;         /* '<Root>/Switch' */
  uint8_T HAP_TextIconDispCtrl;        /* '<Root>/Switch' */
  uint8_T OrvmCtrlCmd;                 /* '<Root>/Switch' */
  uint8_T APA_FuncSts;                 /* '<Root>/Switch' */
  uint8_T P2P_FuncSts;                 /* '<Root>/Switch' */
  uint8_T RADS_FuncSts;                /* '<Root>/Switch' */
  uint8_T FADS_FuncSts;                /* '<Root>/Switch' */
  uint8_T FPAS_NearBrrdstn;            /* '<Root>/Switch' */
  uint8_T FPAS_SoundIndcn;             /* '<Root>/Switch' */
  uint8_T FPAS_WorkSts;                /* '<Root>/Switch' */
  uint8_T FPAS_ObjFRCornrAr1;          /* '<Root>/Switch' */
  uint8_T FPAS_ObjFRCornrAr2;          /* '<Root>/Switch' */
  uint8_T FPAS_ObjFRMidlAr1;           /* '<Root>/Switch' */
  uint8_T FPAS_ObjFRMidlAr2;           /* '<Root>/Switch' */
  uint8_T FPAS_ObjFLMidlAr1;           /* '<Root>/Switch' */
  uint8_T FPAS_ObjFLMidlAr2;           /* '<Root>/Switch' */
  uint8_T FPAS_ObjFLCornrAr1;          /* '<Root>/Switch' */
  uint8_T FPAS_ObjFLCornrAr2;          /* '<Root>/Switch' */
  uint8_T RPAS_SoundIndcn;             /* '<Root>/Switch' */
  uint8_T MEBWorkSts;                  /* '<Root>/Switch' */
  uint8_T RPAS_WorkSts;                /* '<Root>/Switch' */
  uint8_T RPAS_ObjRLCornrAr1;          /* '<Root>/Switch' */
  uint8_T RPAS_ObjRLCornrAr2;          /* '<Root>/Switch' */
  uint8_T RPAS_ObjRLMidlAr1;           /* '<Root>/Switch' */
  uint8_T RPAS_ObjRLMidlAr2;           /* '<Root>/Switch' */
  uint8_T RPAS_ObjRRMidlAr1;           /* '<Root>/Switch' */
  uint8_T RPAS_ObjRRMidlAr2;           /* '<Root>/Switch' */
  uint8_T RPAS_ObjRRCornrAr1;          /* '<Root>/Switch' */
  uint8_T RPAS_ObjRRCornrAr2;          /* '<Root>/Switch' */
  uint8_T SDW_SoundIndcn;              /* '<Root>/Switch' */
  uint8_T APS_ObjLeSideAr4;            /* '<Root>/Switch' */
  uint8_T APS_ObjLeSideAr5;            /* '<Root>/Switch' */
  uint8_T APS_ObjLeSideAr2;            /* '<Root>/Switch' */
  uint8_T APS_ObjLeSideAr3;            /* '<Root>/Switch' */
  uint8_T APS_ObjRiSideAr5;            /* '<Root>/Switch' */
  uint8_T APS_ObjLeSideAr1;            /* '<Root>/Switch' */
  uint8_T APS_ObjRiSideAr3;            /* '<Root>/Switch' */
  uint8_T APS_ObjRiSideAr4;            /* '<Root>/Switch' */
  uint8_T APS_ObjRiSideAr1;            /* '<Root>/Switch' */
  uint8_T APS_ObjRiSideAr2;            /* '<Root>/Switch' */
  uint8_T RPAS_NearBrrdstn;            /* '<Root>/Switch' */
  uint8_T DVRWorkSts;                  /* '<Root>/Switch' */
  uint8_T CarMdlTrsprcySts;            /* '<Root>/Switch' */
  uint8_T LaneCalSts;                  /* '<Root>/Switch' */
  uint8_T LaneCalFltSts;               /* '<Root>/Switch' */
  uint8_T GuidOvlSts;                  /* '<Root>/Switch' */
  uint8_T RadarDispSts;                /* '<Root>/Switch' */
  uint8_T MdlColrSts;                  /* '<Root>/Switch' */
  uint8_T HAP_Hmi_Index;               /* '<Root>/Switch' */
  uint8_T AVM_CurrSts;                 /* '<Root>/Switch' */
  uint8_T SigViewIndcn;                /* '<Root>/Switch' */
  uint8_T APS_MovgDirc;                /* '<Root>/Switch' */
  uint8_T P2P_SelfDetSts;              /* '<Root>/Switch' */
  uint8_T HAP_SwtDispCtrlCmd;          /* '<Root>/Switch' */
  uint8_T P2P_SelfDetErrCode;          /* '<Root>/Switch' */
  uint8_T APS_PASSwtReq;               /* '<Root>/Switch' */
  uint8_T HAP_PrkgModCurrSts;          /* '<Root>/Switch' */
  uint8_T P2P_PahDelSts;               /* '<Root>/Switch' */
  uint8_T HAP_ESP_LSMSubMTLong;        /* '<Root>/Switch' */
  uint8_T HAP_ESP_LSMVehDirRq;         /* '<Root>/Switch' */
  uint8_T HAP_ESP_LSMComfBrakeReq;     /* '<Root>/Switch' */
  uint8_T HAP_ESP_LSMSubMTLevel;       /* '<Root>/Switch' */
  uint8_T HAP_ESP_LSMSubMTReq;         /* '<Root>/Switch' */
  uint8_T RollingCounter_APS4;         /* '<Root>/Switch' */
  uint8_T APS_BrkModSts;               /* '<Root>/Switch' */
  uint8_T APS_WorkSts;                 /* '<Root>/Switch' */
  uint8_T APS_BrkFctnMod;              /* '<Root>/Switch' */
  uint8_T APS_ESP_TgtGearReq;          /* '<Root>/Switch' */
  uint8_T APS_BrkCategory;             /* '<Root>/Switch' */
  uint8_T Checksum_APS4;               /* '<Root>/Switch' */
  uint8_T RollingCounter_APS1;         /* '<Root>/Switch' */
  uint8_T APS_PrkgTyp;                 /* '<Root>/Switch' */
  uint8_T APS_PrkgMod;                 /* '<Root>/Switch' */
  uint8_T TurnLightsCmd;               /* '<Root>/Switch' */
  uint8_T APS_ProcBar;                 /* '<Root>/Switch' */
  uint8_T APS_TextDisp;                /* '<Root>/Switch' */
  uint8_T APS_SysSoundIndcn;           /* '<Root>/Switch' */
  uint8_T APS_SlotDisp;                /* '<Root>/Switch' */
  uint8_T Checksum_APS1;               /* '<Root>/Switch' */
  uint8_T SysPowerMod;                 /* '<Root>/Switch' */
  uint8_T RollingCounter_ABS2;         /* '<Root>/Switch' */
  uint8_T WssRLEdgesSum;               /* '<Root>/Switch' */
  uint8_T WssRREdgesSum;               /* '<Root>/Switch' */
  uint8_T RRWheelDriveDirection;       /* '<Root>/Switch' */
  uint8_T RLWheelDriveDirection;       /* '<Root>/Switch' */
  uint8_T CheckSum_ABS2;               /* '<Root>/Switch' */
  uint8_T RollingCounter_Booster_FD2_5;/* '<Root>/Switch' */
  uint8_T L3mainVMCavailiable;         /* '<Root>/Switch' */
  uint8_T CheckSum_IBooster_FD2_5;     /* '<Root>/Switch' */
  uint8_T RollingCounter_ABS3;         /* '<Root>/Switch' */
  uint8_T CheckSum_ABS3;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ABS1;         /* '<Root>/Switch' */
  uint8_T WssFREdgesSum;               /* '<Root>/Switch' */
  uint8_T WssFLEdgesSum;               /* '<Root>/Switch' */
  uint8_T FRWheelDriveDirection;       /* '<Root>/Switch' */
  uint8_T FLWheelDriveDirection;       /* '<Root>/Switch' */
  uint8_T CheckSum_ABS1;               /* '<Root>/Switch' */
  uint8_T RollingCounter_EPB1;         /* '<Root>/Switch' */
  uint8_T EPBSts;                      /* '<Root>/Switch' */
  uint8_T CheckSum_EPB1;               /* '<Root>/Switch' */
  uint8_T IB_BrkPedalAppldVld;         /* '<Root>/Switch' */
  uint8_T RollingCounter_RSDS_R_5;     /* '<Root>/Switch' */
  uint8_T RiTarSts;                    /* '<Root>/Switch' */
  uint8_T ObjIDRi;                     /* '<Root>/Switch' */
  uint8_T Checksum_RSDS_R_5;           /* '<Root>/Switch' */
  uint8_T RollingCounter_RSDS_R_4;     /* '<Root>/Switch' */
  uint8_T ZoneIndRi;                   /* '<Root>/Switch' */
  uint8_T ObjStsRi;                    /* '<Root>/Switch' */
  uint8_T ZoneIndLe;                   /* '<Root>/Switch' */
  uint8_T ObjStsLe;                    /* '<Root>/Switch' */
  uint8_T ObjRinRi;                    /* '<Root>/Switch' */
  uint8_T ObjLenLe;                    /* '<Root>/Switch' */
  uint8_T Checksum_RSDS_R_4;           /* '<Root>/Switch' */
  uint8_T RollingCounter_RSDS_R_3;     /* '<Root>/Switch' */
  uint8_T LeTarSts;                    /* '<Root>/Switch' */
  uint8_T ObjIDLe;                     /* '<Root>/Switch' */
  uint8_T Checksum_RSDS_R_3;           /* '<Root>/Switch' */
  uint8_T RollingCounter_RSDS_R_2;     /* '<Root>/Switch' */
  uint8_T RSDS_RCW_Trigger;            /* '<Root>/Switch' */
  uint8_T BSD_LCA_warningReqRight;     /* '<Root>/Switch' */
  uint8_T BSD_LCA_warningReqleft;      /* '<Root>/Switch' */
  uint8_T DOW_warningReqRight;         /* '<Root>/Switch' */
  uint8_T DOW_warningReqleft;          /* '<Root>/Switch' */
  uint8_T RSDS_LEDLightReqLeft;        /* '<Root>/Switch' */
  uint8_T RSDS_LEDLightReqRight;       /* '<Root>/Switch' */
  uint8_T RSDS_IPSoundReq;             /* '<Root>/Switch' */
  uint8_T Checksum_RSDS_R_2;           /* '<Root>/Switch' */
  uint8_T RollingCounter_CR_R_4;       /* '<Root>/Switch' */
  uint8_T Checksum_CR_R_4;             /* '<Root>/Switch' */
  uint8_T CR_ObjMotionType_Ri;         /* '<Root>/Switch' */
  uint8_T RollingCounter_CR_R_3;       /* '<Root>/Switch' */
  uint8_T CR_ObjSts_Ri;                /* '<Root>/Switch' */
  uint8_T CR_ObjID_Ri;                 /* '<Root>/Switch' */
  uint8_T Checksum_CR_R_3;             /* '<Root>/Switch' */
  uint8_T CR_ObjMotionType_Le;         /* '<Root>/Switch' */
  uint8_T RollingCounter_CR_R_2;       /* '<Root>/Switch' */
  uint8_T CR_ObjSts_Le;                /* '<Root>/Switch' */
  uint8_T CR_ObjID_Le;                 /* '<Root>/Switch' */
  uint8_T Checksum_CR_R_2;             /* '<Root>/Switch' */
  uint8_T RollingCounter_CR_R_1;       /* '<Root>/Switch' */
  uint8_T FCTB_ABA_Level;              /* '<Root>/Switch' */
  uint8_T FCTA_B_FuncSts;              /* '<Root>/Switch' */
  uint8_T Checksum_CR_R_1;             /* '<Root>/Switch' */
  uint8_T OpCode_IDC_L3_NM;            /* '<Root>/Switch' */
  uint8_T Destination_IDC_L3_NM;       /* '<Root>/Switch' */
  uint8_T HWP_HAP_Cmd;                 /* '<Root>/Switch' */
  uint8_T RollingCounter_IDC_L3_2;     /* '<Root>/Switch' */
  uint8_T HWP_TextWarn;                /* '<Root>/Switch' */
  uint8_T HWP_ChimeWarn;               /* '<Root>/Switch' */
  uint8_T HWP_OperSts;                 /* '<Root>/Switch' */
  uint8_T HWP_OperStsDecision;         /* '<Root>/Switch' */
  uint8_T HWP_CrsSpdSetVal;            /* '<Root>/Switch' */
  uint8_T Checksum_IDC_L3_2;           /* '<Root>/Switch' */
  uint8_T HWP_WorkReq_KBCM;            /* '<Root>/Switch' */
  uint8_T HWP_TextWarn_AC;             /* '<Root>/Switch' */
  uint8_T HWP_TarWind;                 /* '<Root>/Switch' */
  uint8_T HWP_TarTemp;                 /* '<Root>/Switch' */
  uint8_T HWP_CenCtrllockReq;          /* '<Root>/Switch' */
  uint8_T HWP_TrkReq;                  /* '<Root>/Switch' */
  uint8_T HWP_FWiperReq;               /* '<Root>/Switch' */
  uint8_T HWP_RWiperReq;               /* '<Root>/Switch' */
  uint8_T HWP_FWshrReq;                /* '<Root>/Switch' */
  uint8_T HWP_TurnlLightReq;           /* '<Root>/Switch' */
  uint8_T HWP_MotTypeReqMode;          /* '<Root>/Switch' */
  uint8_T HWP_MotTypeReqLong;          /* '<Root>/Switch' */
  uint8_T RollingCounter_IDC_L3_4;     /* '<Root>/Switch' */
  uint8_T Checksum_IDC_L3_4;           /* '<Root>/Switch' */
  uint8_T RollingCounter_IDC_L3_5;     /* '<Root>/Switch' */
  uint8_T HWP_AEB_AWB_Lvl;             /* '<Root>/Switch' */
  uint8_T HWP_AEB_ABALvl;              /* '<Root>/Switch' */
  uint8_T Checksum_IDC_L3_5;           /* '<Root>/Switch' */
  uint8_T RollingCounter_IDC_L3_3;     /* '<Root>/Switch' */
  uint8_T HWP_lgt_ModSts;              /* '<Root>/Switch' */
  uint8_T HWP_WorkReq;                 /* '<Root>/Switch' */
  uint8_T HWP_TgtGearReq;              /* '<Root>/Switch' */
  uint8_T Checksum_IDC_L3_3;           /* '<Root>/Switch' */
  uint8_T RollingCounter_IDC_L3_1;     /* '<Root>/Switch' */
  uint8_T HWP_HapcWarnReq;             /* '<Root>/Switch' */
  uint8_T HWP_FuncTrqCmdReqFlag;       /* '<Root>/Switch' */
  uint8_T Checksum_IDC_L3_1;           /* '<Root>/Switch' */
  uint8_T HUT_OD_WorkSts;              /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj7_type;            /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj7_ID;              /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj6_type;            /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj6_ID;              /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj5_type;            /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj5_ID;              /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj4_type;            /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj4_ID;              /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj3_type;            /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj3_ID;              /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj2_type;            /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj2_ID;              /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj1_type;            /* '<Root>/Switch' */
  uint8_T HTU_OD_Obj1_ID;              /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj0_type;            /* '<Root>/Switch' */
  uint8_T HUT_OD_Obj0_ID;              /* '<Root>/Switch' */
  uint8_T ADAS_Posn_PosConfdc;         /* '<Root>/Switch' */
  uint8_T ADAS_Posn_CurLane;           /* '<Root>/Switch' */
  uint8_T ADAS_Posn_Idx;               /* '<Root>/Switch' */
  uint8_T ADAS_Posn_CycCnt;            /* '<Root>/Switch' */
  uint8_T ADAS_Posn_Pathldx;           /* '<Root>/Switch' */
  uint8_T ADAS_Posn_MsgTye;            /* '<Root>/Switch' */
  uint8_T NavRoadType;                 /* '<Root>/Switch' */
  uint8_T NavSpdLimType;               /* '<Root>/Switch' */
  uint8_T HWA_SnvtySet;                /* '<Root>/Switch' */
  uint8_T NavTSRTrafSign;              /* '<Root>/Switch' */
  uint8_T NavSpdLimSignSts;            /* '<Root>/Switch' */
  uint8_T NavSpdLimValue;              /* '<Root>/Switch' */
  uint8_T NavSpdLimUnit_HUT;           /* '<Root>/Switch' */
  uint8_T LSSWarnFormSwtReq;           /* '<Root>/Switch' */
  uint8_T FCW_SnvtySet;                /* '<Root>/Switch' */
  uint8_T IFC_SnvtySet;                /* '<Root>/Switch' */
  uint8_T Sgl_View_Sel;                /* '<Root>/Switch' */
  uint8_T Time_Day;                    /* '<Root>/Switch' */
  uint8_T Time_Month;                  /* '<Root>/Switch' */
  uint8_T Time_Year_Left;              /* '<Root>/Switch' */
  uint8_T Time_Year_Right;             /* '<Root>/Switch' */
  uint8_T Time_Second;                 /* '<Root>/Switch' */
  uint8_T Time_Minutes;                /* '<Root>/Switch' */
  uint8_T Time_Hour;                   /* '<Root>/Switch' */
  uint8_T SelPrkgFctnCmd;              /* '<Root>/Switch' */
  uint8_T SelPrkOutDirReq;             /* '<Root>/Switch' */
  uint8_T PrkInDirChoice;              /* '<Root>/Switch' */
  uint8_T PrkStraightModSel_HUT;       /* '<Root>/Switch' */
  uint8_T RollingCounter_HUT32;        /* '<Root>/Switch' */
  uint8_T ScrnOpSts;                   /* '<Root>/Switch' */
  uint8_T PrkStraightSuspendOrFinishReq_HUT;/* '<Root>/Switch' */
  uint8_T ContnPrkgReq;                /* '<Root>/Switch' */
  uint8_T PrkgCtrlModReq;              /* '<Root>/Switch' */
  uint8_T CheckSum_HUT32;              /* '<Root>/Switch' */
  uint8_T ADAS_Stub_RtOfWay;           /* '<Root>/Switch' */
  uint8_T ADAS_Stub_NumOfLaneOppDir;   /* '<Root>/Switch' */
  uint8_T ADAS_Stub_NumOfLaneDrvDir;   /* '<Root>/Switch' */
  uint8_T ADAS_Stub_PartOfCalcRoute;   /* '<Root>/Switch' */
  uint8_T ADAS_Stub_CmplxInsct;        /* '<Root>/Switch' */
  uint8_T ADAS_Stub_FormOfWay;         /* '<Root>/Switch' */
  uint8_T ADAS_Stub_FuncRoadClass;     /* '<Root>/Switch' */
  uint8_T ADAS_Stub_StubPathIdx;       /* '<Root>/Switch' */
  uint8_T ADAS_Stub_CycCnt;            /* '<Root>/Switch' */
  uint8_T ADAS_Stub_PathIdx;           /* '<Root>/Switch' */
  uint8_T ADAS_Stub_MsgTyp;            /* '<Root>/Switch' */
  uint8_T ADAS_Seg_DivideRoad;         /* '<Root>/Switch' */
  uint8_T ADAS_Seg_NumOfLaneOppDir;    /* '<Root>/Switch' */
  uint8_T ADAS_Seg_NumOfLaneDrvDir;    /* '<Root>/Switch' */
  uint8_T ADAS_Seg_EffSpdLmt;          /* '<Root>/Switch' */
  uint8_T ADAS_Seg_EffSpdLmtTyp;       /* '<Root>/Switch' */
  uint8_T ADAS_Seg_PartOfCalcRoute;    /* '<Root>/Switch' */
  uint8_T ADAS_Seg_CmplxInsct;         /* '<Root>/Switch' */
  uint8_T ADAS_Seg_FormOfWay;          /* '<Root>/Switch' */
  uint8_T ADAS_Seg_FuncRoadClass;      /* '<Root>/Switch' */
  uint8_T ADAS_Seg_Tunnel;             /* '<Root>/Switch' */
  uint8_T ADAS_Seg_Brdg;               /* '<Root>/Switch' */
  uint8_T ADAS_Seg_BuildUpArea;        /* '<Root>/Switch' */
  uint8_T ADAS_Seg_CycCnt;             /* '<Root>/Switch' */
  uint8_T ADAS_Seg_PathIdx;            /* '<Root>/Switch' */
  uint8_T ADAS_Seg_MsgTyp;             /* '<Root>/Switch' */
  uint8_T ADAS_ProfShort_AccurClass;   /* '<Root>/Switch' */
  uint8_T ADAS_ProfShort_ProfTyp;      /* '<Root>/Switch' */
  uint8_T ADAS_ProfShort_CycCnt;       /* '<Root>/Switch' */
  uint8_T ADAS_ProfShort_PathIdx;      /* '<Root>/Switch' */
  uint8_T ADAS_ProfShort_MsgTyp;       /* '<Root>/Switch' */
  uint8_T ADAS_ProfLong_ProfTyp;       /* '<Root>/Switch' */
  uint8_T ADAS_ProfLong_CycCnt;        /* '<Root>/Switch' */
  uint8_T ADAS_ProfLong_PathIdx;       /* '<Root>/Switch' */
  uint8_T ADAS_ProfLong_MsgTyp;        /* '<Root>/Switch' */
  uint8_T ADAS_Meta_ProtVer_Minor;     /* '<Root>/Switch' */
  uint8_T ADAS_Meta_MapVerQtr;         /* '<Root>/Switch' */
  uint8_T ADAS_Meta_MapVerYear;        /* '<Root>/Switch' */
  uint8_T ADAS_Meta_CycCnt;            /* '<Root>/Switch' */
  uint8_T ADAS_Meta_ProtVer_Major;     /* '<Root>/Switch' */
  uint8_T ADAS_Meta_ProtVer_MinorSub;  /* '<Root>/Switch' */
  uint8_T ADAS_Meta_MsgTyp;            /* '<Root>/Switch' */
  uint8_T ADAS_Meta_MapProvider;       /* '<Root>/Switch' */
  uint8_T APSSwtReq_VR;                /* '<Root>/Switch' */
  uint8_T APSPrkgTypSeln;              /* '<Root>/Switch' */
  uint8_T HCU_GearSts;                 /* '<Root>/Switch' */
  uint8_T RollingCounter_HCU_PT5;      /* '<Root>/Switch' */
  uint8_T DrvTrqReqOvld;               /* '<Root>/Switch' */
  uint8_T HCU_DrvMod;                  /* '<Root>/Switch' */
  uint8_T HCU_PTDrvMod;                /* '<Root>/Switch' */
  uint8_T Checksum_HCU_PT5;            /* '<Root>/Switch' */
  uint8_T ACU_ShiftInProgress;         /* '<Root>/Switch' */
  uint8_T HCU_PowertrainSts;           /* '<Root>/Switch' */
  uint8_T RollingCounter_HCU_PT9;      /* '<Root>/Switch' */
  uint8_T Checksum_HCU_PT9;            /* '<Root>/Switch' */
  uint8_T RollingCounter_HCU_PT1;      /* '<Root>/Switch' */
  uint8_T HCU_BrkPedalSts;             /* '<Root>/Switch' */
  uint8_T Checksum_HCU_PT1;            /* '<Root>/Switch' */
  uint8_T RollingCounter_EPS3;         /* '<Root>/Switch' */
  uint8_T ElecPwrSteerCpby;            /* '<Root>/Switch' */
  uint8_T CheckSum_EPS3;               /* '<Root>/Switch' */
  uint8_T EPS_LKATrqOvlDlvdSts;        /* '<Root>/Switch' */
  uint8_T RollingCounter_EPS2;         /* '<Root>/Switch' */
  uint8_T CheckSum_EPS2;               /* '<Root>/Switch' */
  uint8_T RollingCounter_EPS1;         /* '<Root>/Switch' */
  uint8_T EPS_SteerMod;                /* '<Root>/Switch' */
  uint8_T EPS_AvailSts;                /* '<Root>/Switch' */
  uint8_T EPS_FailSts;                 /* '<Root>/Switch' */
  uint8_T CheckSum_EPS1;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ESP_FD3_7;    /* '<Root>/Switch' */
  uint8_T L3mainVMCavailiable_g;       /* '<Root>/Switch' */
  uint8_T VLC_ESP_State;               /* '<Root>/Switch' */
  uint8_T Lsm12ComfortAvl;             /* '<Root>/Switch' */
  uint8_T Lsm12EmergencyAvl;           /* '<Root>/Switch' */
  uint8_T Lsm23Avl;                    /* '<Root>/Switch' */
  uint8_T LSMGearRequest;              /* '<Root>/Switch' */
  uint8_T LSMPosLongACapbl;            /* '<Root>/Switch' */
  uint8_T LSMSubMTLevelEcho;           /* '<Root>/Switch' */
  uint8_T LSMSubMTLongEcho;            /* '<Root>/Switch' */
  uint8_T LSMSubMTReqEcho;             /* '<Root>/Switch' */
  uint8_T CheckSum_ESP_FD3_7;          /* '<Root>/Switch' */
  uint8_T RollingCounter_ABS2_c;       /* '<Root>/Switch' */
  uint8_T WssRLEdgesSum_c;             /* '<Root>/Switch' */
  uint8_T WssRREdgesSum_m;             /* '<Root>/Switch' */
  uint8_T RRWheelDriveDirection_c;     /* '<Root>/Switch' */
  uint8_T RLWheelDriveDirection_e;     /* '<Root>/Switch' */
  uint8_T CheckSum_ABS2_k;             /* '<Root>/Switch' */
  uint8_T RollingCounter_EPB1_m;       /* '<Root>/Switch' */
  uint8_T EPB_SwtPosn;                 /* '<Root>/Switch' */
  uint8_T EPBSts_e;                    /* '<Root>/Switch' */
  uint8_T EPBErrSts;                   /* '<Root>/Switch' */
  uint8_T CheckSum_EPB1_i;             /* '<Root>/Switch' */
  uint8_T RollingCounter_ABS1_m;       /* '<Root>/Switch' */
  uint8_T WssFREdgesSum_p;             /* '<Root>/Switch' */
  uint8_T WssFLEdgesSum_h;             /* '<Root>/Switch' */
  uint8_T FRWheelDriveDirection_j;     /* '<Root>/Switch' */
  uint8_T FLWheelDriveDirection_h;     /* '<Root>/Switch' */
  uint8_T CheckSum_ABS1_h;             /* '<Root>/Switch' */
  uint8_T RollingCounter_ABS3_n;       /* '<Root>/Switch' */
  uint8_T CheckSum_ABS3_e;             /* '<Root>/Switch' */
  uint8_T LgtCtrlrAvail;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ESP7;         /* '<Root>/Switch' */
  uint8_T LgtCtrlrSts;                 /* '<Root>/Switch' */
  uint8_T LgtCtrlrFailr;               /* '<Root>/Switch' */
  uint8_T CheckSum_ESP7;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ESP1;         /* '<Root>/Switch' */
  uint8_T CheckSum_ESP1;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ESP2;         /* '<Root>/Switch' */
  uint8_T DrivingModDis;               /* '<Root>/Switch' */
  uint8_T DrivingModReq_ESP;           /* '<Root>/Switch' */
  uint8_T AVHSts;                      /* '<Root>/Switch' */
  uint8_T AVHErrSts;                   /* '<Root>/Switch' */
  uint8_T HDCCtrl;                     /* '<Root>/Switch' */
  uint8_T VehStandstill;               /* '<Root>/Switch' */
  uint8_T CheckSum_ESP2;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ESP_FD2_1;    /* '<Root>/Switch' */
  uint8_T CheckSum_ESP_FD2_1;          /* '<Root>/Switch' */
  uint8_T EngState_PHEV;               /* '<Root>/Switch' */
  uint8_T EngState;                    /* '<Root>/Switch' */
  uint8_T RollingCounter_ECM2;         /* '<Root>/Switch' */
  uint8_T AccelPedalPosnVldty;         /* '<Root>/Switch' */
  uint8_T Checksum_ECM2;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ECM10;        /* '<Root>/Switch' */
  uint8_T EngFail;                     /* '<Root>/Switch' */
  uint8_T Checksum_ECM10;              /* '<Root>/Switch' */
  uint8_T RollingCounter_ECM9;         /* '<Root>/Switch' */
  uint8_T Checksum_ECM9;               /* '<Root>/Switch' */
  uint8_T EngSpdVldty;                 /* '<Root>/Switch' */
  uint8_T RollingCounter_ECM1;         /* '<Root>/Switch' */
  uint8_T Start_StopSts;               /* '<Root>/Switch' */
  uint8_T BrkPedalSts;                 /* '<Root>/Switch' */
  uint8_T Checksum_ECM1;               /* '<Root>/Switch' */
  uint8_T HCU_PowertrainSts_P0;        /* '<Root>/Switch' */
  uint8_T HCU_Start_StopSts;           /* '<Root>/Switch' */
  uint8_T RollingCounter_ECM4;         /* '<Root>/Switch' */
  uint8_T Checksum_ECM4;               /* '<Root>/Switch' */
  uint8_T EngSpdVldty_j;               /* '<Root>/Switch' */
  uint8_T LEyeOpenSts;                 /* '<Root>/Switch' */
  uint8_T REyeOpenSts;                 /* '<Root>/Switch' */
  uint8_T RobustGazeAngQlty;           /* '<Root>/Switch' */
  uint8_T REyeOpenStsQlty;             /* '<Root>/Switch' */
  uint8_T LEyeOpenStsQlty;             /* '<Root>/Switch' */
  uint8_T DMSSts;                      /* '<Root>/Switch' */
  uint8_T HeadRotAngQlty;              /* '<Root>/Switch' */
  uint8_T HeadPosQlty;                 /* '<Root>/Switch' */
  uint8_T DistrctnLvl_ACC;             /* '<Root>/Switch' */
  uint8_T DrowsnsLvl_ACC;              /* '<Root>/Switch' */
  uint8_T DrowsnsLvlQlty_ACC;          /* '<Root>/Switch' */
  uint8_T DistrctnLvlQlty_ACC;         /* '<Root>/Switch' */
  uint8_T DrvFaiMsg;                   /* '<Root>/Switch' */
  uint8_T RollingCounter_DCT5;         /* '<Root>/Switch' */
  uint8_T CURRENT_GEAR;                /* '<Root>/Switch' */
  uint8_T TGS_LEVER;                   /* '<Root>/Switch' */
  uint8_T TARGET_GEAR;                 /* '<Root>/Switch' */
  uint8_T CheckSum_DCT5;               /* '<Root>/Switch' */
  uint8_T RollingCounter_CSA4;         /* '<Root>/Switch' */
  uint8_T HOD_HandOffSts;              /* '<Root>/Switch' */
  uint8_T HOD_ErrInfo;                 /* '<Root>/Switch' */
  uint8_T CheckSum_CSA4;               /* '<Root>/Switch' */
  uint8_T ManualShiftReq;              /* '<Root>/Switch' */
  uint8_T Rollingcounter_CSA2;         /* '<Root>/Switch' */
  uint8_T SAS_Sts;                     /* '<Root>/Switch' */
  uint8_T Checksum_CSA2;               /* '<Root>/Switch' */
  uint8_T PLAN_NOH_SetSpdAdjVal;       /* '<Root>/Unit Delay5' */
  uint8_T ACC_RiTgtObjBarDisp;         /* '<Root>/Unit Delay5' */
  uint8_T ACC_LeTgtObjBarDisp;         /* '<Root>/Unit Delay5' */
  uint8_T ACC_TgtObjBarDisp;           /* '<Root>/Unit Delay5' */
  uint8_T FrntWshrSwtSts;              /* '<Root>/Switch' */
  uint8_T FrntWiprSwtSts;              /* '<Root>/Switch' */
  uint8_T Rollingcounter_BCM8;         /* '<Root>/Switch' */
  uint8_T WiprReq_F_PBOX;              /* '<Root>/Switch' */
  uint8_T Checksum_BCM8;               /* '<Root>/Switch' */
  uint8_T BCM_HWPWorkSts;              /* '<Root>/Switch' */
  uint8_T Rollingcounter_BCM10;        /* '<Root>/Switch' */
  uint8_T ChildLockProtWorkCmd;        /* '<Root>/Switch' */
  uint8_T Checksum_BCM10;              /* '<Root>/Switch' */
  uint8_T ParkBrkSts;                  /* '<Root>/Switch' */
  uint8_T ReversGearSts;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ABM2;         /* '<Root>/Switch' */
  uint8_T CheckSum_ABM2;               /* '<Root>/Switch' */
  uint8_T RollingCounter_ABM1;         /* '<Root>/Switch' */
  uint8_T SecRowRSBR_Visual;           /* '<Root>/Switch' */
  uint8_T SecRowMidSBR_Visual;         /* '<Root>/Switch' */
  uint8_T SecRowLSBR_Visual;           /* '<Root>/Switch' */
  uint8_T PassSBR_Visual;              /* '<Root>/Switch' */
  uint8_T DrvSBR_Visual;               /* '<Root>/Switch' */
  uint8_T CrashOutputSts;              /* '<Root>/Switch' */
  uint8_T CheckSum_ABM1;               /* '<Root>/Switch' */
  uint8_T ACFrntBlwrSpd;               /* '<Root>/Switch' */
  uint8_T OpCode_HC_NM;                /* '<Root>/Switch' */
  uint8_T Destination_HC_NM;           /* '<Root>/Switch' */
  uint8_T RollingCounter_HC1;          /* '<Root>/Switch' */
  uint8_T HBStatusSegment4;            /* '<Root>/Switch' */
  uint8_T HBStatusSegment5;            /* '<Root>/Switch' */
  uint8_T HBStatusSegment6;            /* '<Root>/Switch' */
  uint8_T HBStatusSegment7;            /* '<Root>/Switch' */
  uint8_T HBStatusSegment0;            /* '<Root>/Switch' */
  uint8_T HBStatusSegment1;            /* '<Root>/Switch' */
  uint8_T HBStatusSegment2;            /* '<Root>/Switch' */
  uint8_T HBStatusSegment3;            /* '<Root>/Switch' */
  uint8_T ADBstatus;                   /* '<Root>/Switch' */
  uint8_T CheckSum_HC1;                /* '<Root>/Switch' */
  uint8_T LATC_IFCFuncAngCmdReqFlag;   /* '<Root>/Unit Delay1' */
  uint8_T IFCFuncTrqCmdReqFlag;        /* '<Root>/Unit Delay1' */
  uint8_T nLaneID;                     /* '<S18>/Data Inport S-Fcn' */
  uint8_T nLaneNum;                    /* '<S18>/Data Inport S-Fcn' */
  uint8_T bCurrentLaneFree;            /* '<S18>/Data Inport S-Fcn' */
  uint8_T bLeftLaneFree;               /* '<S18>/Data Inport S-Fcn' */
  uint8_T bRightLaneFree;              /* '<S18>/Data Inport S-Fcn' */
  uint8_T b_toll;                      /* '<S18>/Data Inport S-Fcn' */
  uint8_T b_tunnel;                    /* '<S18>/Data Inport S-Fcn' */
  uint8_T b_bridge;                    /* '<S18>/Data Inport S-Fcn' */
  uint8_T b_traffic_jam;               /* '<S18>/Data Inport S-Fcn' */
  uint8_T b_traffic_accident;          /* '<S18>/Data Inport S-Fcn' */
  uint8_T en_weather;                  /* '<S18>/Data Inport S-Fcn' */
  uint8_T i_mapvalid;                  /* '<S18>/Data Inport S-Fcn' */
  uint8_T i_on_nav_path;               /* '<S18>/Data Inport S-Fcn' */
  uint8_T i_road_curvature_matrix_size;/* '<S18>/Data Inport S-Fcn' */
  uint8_T FUSSts;                      /* '<S18>/Data Inport S-Fcn' */
  uint8_T RoadType;                    /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_TypeCurRoad;             /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_ValueCurRoad;            /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_Unit;                    /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_End;                     /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_noSupp_Value;            /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_whSupp_Value;            /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_Sup1_SignName;           /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_Sup2_SignName;           /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_noSupp_LongDistance;     /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_whSupp_LongDistance;     /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_LeftLaneValue;           /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_RightLaneValue;          /* '<S18>/Data Inport S-Fcn' */
  uint8_T TSR_ID;                      /* '<S18>/Data Inport S-Fcn' */
  uint8_T TS_SignName;                 /* '<S18>/Data Inport S-Fcn' */
  uint8_T TS_LongDistance;             /* '<S18>/Data Inport S-Fcn' */
  uint8_T VehInLeftmostLane;           /* '<S18>/Data Inport S-Fcn' */
  uint8_T VehInRightmostLane;          /* '<S18>/Data Inport S-Fcn' */
  uint8_T SPL_LaneChanged;             /* '<S18>/Data Inport S-Fcn' */
  uint8_T bIsLineExist;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour;                     /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType;                     /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_g;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_l;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_b;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_i;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_i;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_i;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_o;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_a;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_g;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_f;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_m;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_g;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_b1;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_m;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_fx;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_n;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_gj;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_i;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_h;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_k;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_i4;             /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_j;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_c;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_hd;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_a;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_c;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_jq;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_j;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_f;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_p;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_b;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_ol;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_b3;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_l;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_pk;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_d;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_m;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_cn;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_k;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_ke;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_m1;             /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_a;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_b4;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_hp;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_d;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_k;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_a0;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_o;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_hj;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_de;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_cs;             /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_f;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_m;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_kl;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_d5;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_f;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_c;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_n;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_b;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_n;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T bIsLineExist_o;              /* '<S29>/Data Inport S-Fcn' */
  uint8_T eLineType_ac;                /* '<S29>/Data Inport S-Fcn' */
  uint8_T eColour_h;                   /* '<S29>/Data Inport S-Fcn' */
  uint8_T eFuType_mf;                  /* '<S29>/Data Inport S-Fcn' */
  uint8_T nTrackAge_c;                 /* '<S29>/Data Inport S-Fcn' */
  uint8_T DataTypeConversion3_ne;      /* '<S9>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_dj;      /* '<S9>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_gw;      /* '<S22>/Data Type Conversion2' */
  uint8_T DataTypeConversion7_d;       /* '<S22>/Data Type Conversion7' */
  uint8_T DataTypeConversion10;        /* '<S22>/Data Type Conversion10' */
  uint8_T DataTypeConversion15;        /* '<S22>/Data Type Conversion15' */
  uint8_T DataTypeConversion2_gs;      /* '<S9>/Data Type Conversion2' */
  uint8_T MatrixConcatenate_o[24];     /* '<S5>/Matrix Concatenate' */
  uint8_T MatrixConcatenate3[24];      /* '<S5>/Matrix Concatenate3' */
  uint8_T MatrixConcatenate2_c[24];    /* '<S5>/Matrix Concatenate2' */
  uint8_T MRCReq;                      /* '<Root>/Unit Delay' */
  uint8_T LSM_PilotSts;                /* '<Root>/Unit Delay6' */
  uint8_T LSM_PilotTurnSwSts;          /* '<Root>/Unit Delay6' */
  uint8_T DataTypeConversion4_ip;      /* '<S9>/Data Type Conversion4' */
  uint8_T b_is_avalible;               /* '<S16>/Data Inport S-Fcn' */
  uint8_T en_lane_type;                /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_speed_max;                 /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_change_spd_max;            /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_vanish_valid;              /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_is_avalible_b;             /* '<S16>/Data Inport S-Fcn' */
  uint8_T en_lane_type_n;              /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_speed_max_i;               /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_change_spd_max_j;          /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_vanish_valid_a;            /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_is_avalible_e;             /* '<S16>/Data Inport S-Fcn' */
  uint8_T en_lane_type_h;              /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_speed_max_o;               /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_change_spd_max_e;          /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_vanish_valid_g;            /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_is_avalible_eh;            /* '<S16>/Data Inport S-Fcn' */
  uint8_T en_lane_type_f;              /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_speed_max_f;               /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_change_spd_max_l;          /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_vanish_valid_j;            /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_is_available;              /* '<S16>/Data Inport S-Fcn' */
  uint8_T en_direction;                /* '<S16>/Data Inport S-Fcn' */
  uint8_T en_type;                     /* '<S16>/Data Inport S-Fcn' */
  uint8_T b_available;                 /* '<S16>/Data Inport S-Fcn' */
  uint8_T en_RoadClass;                /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_rec_lanes_num;             /* '<S16>/Data Inport S-Fcn' */
  uint8_T i_rec_lanes[8];              /* '<S16>/Data Inport S-Fcn' */
  uint8_T lanebus;                     /* '<Root>/Rate Transition25' */
  uint8_T LSM_PilotTurnSwSts_h;        /* '<Root>/Unit Delay4' */
  uint8_T LSM_PilotSts_d;              /* '<Root>/Unit Delay4' */
  uint8_T DataVector[10240];           /* '<S258>/Data Inport S-Fcn' */
  uint8_T SourceIPAddress[4];          /* '<S258>/Data Inport S-Fcn' */
  uint8_T SFunction_o1;                /* '<S26>/S-Function' */
  uint8_T DataVector_c[1500];          /* '<S162>/Data Inport S-Fcn' */
  uint8_T SourceIPAddress_h[4];        /* '<S162>/Data Inport S-Fcn' */
  uint8_T In1[1500];                   /* '<S161>/In1' */
  uint8_T Sum_p;                       /* '<S180>/Sum' */
  uint8_T UnitDelay1_j[20];            /* '<S213>/Unit Delay1' */
  uint8_T Sum_l;                       /* '<S175>/Sum' */
  uint8_T UnitDelay1_b[20];            /* '<S252>/Unit Delay1' */
  uint8_T DataTypeConversion3_g;       /* '<S172>/Data Type Conversion3' */
  uint8_T DataTypeConversion15_n;      /* '<S172>/Data Type Conversion15' */
  uint8_T Memory17;                    /* '<S179>/Memory17' */
  uint8_T Memory30;                    /* '<S179>/Memory30' */
  uint8_T Memory12;                    /* '<S179>/Memory12' */
  uint8_T Memory33;                    /* '<S190>/Memory33' */
  uint8_T DataTypeConversion3_i;       /* '<S174>/Data Type Conversion3' */
  uint8_T DataTypeConversion15_p;      /* '<S174>/Data Type Conversion15' */
  uint8_T Memory17_p;                  /* '<S220>/Memory17' */
  uint8_T Memory30_j;                  /* '<S220>/Memory30' */
  uint8_T Memory12_f;                  /* '<S220>/Memory12' */
  uint8_T Memory33_c;                  /* '<S230>/Memory33' */
  uint8_T Object_Type_p[9];            /* '<S176>/Data Type Conversion5' */
  uint8_T Object_ID[9];                /* '<S176>/Data Type Conversion3' */
  uint8_T DataTypeConversion1_a4[9];   /* '<S170>/Data Type Conversion1' */
  uint8_T DataTypeConversion14_h;      /* '<S174>/Data Type Conversion14' */
  uint8_T Memory10;                    /* '<S220>/Memory10' */
  uint8_T DataTypeConversion14_l;      /* '<S172>/Data Type Conversion14' */
  uint8_T Memory10_n;                  /* '<S179>/Memory10' */
  uint8_T OTL_Cnt;                     /* '<S174>/Data Type Conversion5' */
  uint8_T IDP0;                        /* '<S174>/Data Type Conversion22' */
  uint8_T IDP2;                        /* '<S174>/Data Type Conversion' */
  uint8_T IDP3;                        /* '<S174>/Data Type Conversion42' */
  uint8_T OTL_Cnt_g;                   /* '<S172>/Data Type Conversion5' */
  uint8_T IDP0_k;                      /* '<S172>/Data Type Conversion22' */
  uint8_T IDP2_m;                      /* '<S172>/Data Type Conversion' */
  uint8_T IDP3_g;                      /* '<S172>/Data Type Conversion42' */
  uint8_T Cnt;                         /* '<S180>/Data Type Conversion' */
  uint8_T DataTypeConversion46;        /* '<S172>/Data Type Conversion46' */
  uint8_T Cnt_k;                       /* '<S175>/Data Type Conversion' */
  uint8_T ID[5];                       /* '<S176>/MATLAB Function3' */
  uint8_T Class[5];                    /* '<S176>/MATLAB Function3' */
  uint8_T FusType[5];                  /* '<S176>/MATLAB Function3' */
  uint8_T ID_j[2];                     /* '<S176>/MATLAB Function2' */
  uint8_T Class_m[2];                  /* '<S176>/MATLAB Function2' */
  uint8_T FusType_b[2];                /* '<S176>/MATLAB Function2' */
  uint8_T ID_n[2];                     /* '<S176>/MATLAB Function1' */
  uint8_T Class_c[2];                  /* '<S176>/MATLAB Function1' */
  uint8_T FusType_e[2];                /* '<S176>/MATLAB Function1' */
  uint8_T P[20];                       /* '<S252>/MATLAB Function1' */
  uint8_T ObjBrakeLightIndic[20];      /* '<S252>/MATLAB Function1' */
  uint8_T ObjClassification[20];       /* '<S252>/MATLAB Function1' */
  uint8_T ObjCnt[20];                  /* '<S252>/MATLAB Function1' */
  uint8_T ObjMoveSts[20];              /* '<S252>/MATLAB Function1' */
  uint8_T ObjID[20];                   /* '<S252>/MATLAB Function1' */
  uint8_T ImpAsg_InsertedFor_motionSts_at_inport_0[20];/* '<S253>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_motionOrientation_at_inport_0[20];/* '<S253>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_motionCategory_at_inport_0[20];/* '<S253>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_id_at_inport_0[20];/* '<S253>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_classification_at_inport_0[20];/* '<S253>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_BrakeLight_at_inport_0[20];/* '<S253>/Bus Selector' */
  uint8_T P0ID;                        /* '<S220>/TargetSelect' */
  uint8_T P2ID;                        /* '<S220>/TargetSelect' */
  uint8_T P3ID;                        /* '<S220>/TargetSelect' */
  uint8_T TargetReplacedCnt;           /* '<S220>/TargetSelect' */
  uint8_T P_e[20];                     /* '<S213>/MATLAB Function1' */
  uint8_T ObjBrakeLightIndic_m[20];    /* '<S213>/MATLAB Function1' */
  uint8_T ObjClass[20];                /* '<S213>/MATLAB Function1' */
  uint8_T ObjClassification_f[20];     /* '<S213>/MATLAB Function1' */
  uint8_T ObjCnt_b[20];                /* '<S213>/MATLAB Function1' */
  uint8_T ObjMoveSts_n[20];            /* '<S213>/MATLAB Function1' */
  uint8_T ObjID_b[20];                 /* '<S213>/MATLAB Function1' */
  uint8_T ImpAsg_InsertedFor_motionSts_at_inport_0_b[20];/* '<S214>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_motionOrientation_at_inport_0_h[20];/* '<S214>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_motionCategory_at_inport_0_a[20];/* '<S214>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_id_at_inport_0_f[20];/* '<S214>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_classification_at_inport_0_b[20];/* '<S214>/Bus Selector' */
  uint8_T ImpAsg_InsertedFor_BrakeLight_at_inport_0_a[20];/* '<S214>/Bus Selector' */
  uint8_T P0ID_e;                      /* '<S179>/TargetSelect' */
  uint8_T P2ID_c;                      /* '<S179>/TargetSelect' */
  uint8_T P3ID_h;                      /* '<S179>/TargetSelect' */
  uint8_T TargetReplacedCnt_i;         /* '<S179>/TargetSelect' */
  uint8_T LH1Conf;                     /* '<S22>/LHLine' */
  uint8_T LH1Type;                     /* '<S22>/LHLine' */
  uint8_T LH1DLM;                      /* '<S22>/LHLine' */
  uint8_T LeftLaneChange;              /* '<S22>/LHLine' */
  uint8_T LH2Conf;                     /* '<S22>/LHLine' */
  uint8_T LH2Type;                     /* '<S22>/LHLine' */
  uint8_T LH2DLM;                      /* '<S22>/LHLine' */
  uint8_T RightLaneChange;             /* '<S22>/LHLine' */
  uint8_T L1Conf;                      /* '<S22>/LALine' */
  uint8_T L1Type;                      /* '<S22>/LALine' */
  uint8_T L1DLM;                       /* '<S22>/LALine' */
  uint8_T L2Conf;                      /* '<S22>/LALine' */
  uint8_T L2Type;                      /* '<S22>/LALine' */
  uint8_T L2DLM;                       /* '<S22>/LALine' */
  uint8_T L3Conf;                      /* '<S22>/LALine' */
  uint8_T L3Type;                      /* '<S22>/LALine' */
  uint8_T L3DLM;                       /* '<S22>/LALine' */
  uint8_T L4Conf;                      /* '<S22>/LALine' */
  uint8_T L4Type;                      /* '<S22>/LALine' */
  uint8_T L4DLM;                       /* '<S22>/LALine' */
  uint8_T IFCFuncTrqCmdReqFlag_c;      /* '<S8>/LATC' */
  uint8_T LATC_IFCFuncAngCmdReqFlag_k; /* '<S8>/LATC' */
  uint8_T UnitDelay2;                  /* '<S17>/Unit Delay2' */
  uint8_T DataTypeConversion_g;        /* '<S17>/Data Type Conversion' */
  uint8_T LSM_o6;                      /* '<S132>/LSM' */
  uint8_T LSM_o7;                      /* '<S132>/LSM' */
  uint8_T LSM_PilotSPL;                /* '<S132>/LSM' */
  uint8_T Output;                      /* '<S121>/Output' */
  uint8_T ACC_TgtObjBarDisp_i;         /* '<S17>/PLAN' */
  uint8_T ACC_LeTgtObjBarDisp_i;       /* '<S17>/PLAN' */
  uint8_T ACC_RiTgtObjBarDisp_f;       /* '<S17>/PLAN' */
  uint8_T PLAN_NOH_SetSpdAdjVal_g;     /* '<S17>/Unit Delay3' */
  uint8_T ACC_TgtObjBarDisp_in;        /* '<S17>/Unit Delay3' */
  uint8_T ACC_LeTgtObjBarDisp_k;       /* '<S17>/Unit Delay3' */
  uint8_T ACC_RiTgtObjBarDisp_d;       /* '<S17>/Unit Delay3' */
  uint8_T FixPtSum1;                   /* '<S134>/FixPt Sum1' */
  uint8_T FixPtSwitch;                 /* '<S135>/FixPt Switch' */
  uint8_T MRCReq_g;                    /* '<S17>/Unit Delay4' */
  uint8_T MRCReq_p;                    /* '<S133>/Constant' */
  uint8_T PLAN_NOH_SetSpdAdjVal_k;     /* '<S17>/PLAN' */
  uint8_T LSM_o11;                     /* '<S132>/LSM' */
  uint8_T LSM_o13;                     /* '<S132>/LSM' */
  uint8_T UnitDelay_p2;                /* '<S143>/Unit Delay' */
  uint8_T CSASim_LampReq;              /* '<S19>/BCMsim' */
  uint8_T IFCVibrationWarning;         /* '<S86>/LightControl' */
  uint8_T Switch_j;                    /* '<S6>/Switch' */
  uint8_T UnitDelay_dk;                /* '<S98>/Unit Delay' */
  uint8_T Sum_p5;                      /* '<S98>/Sum' */
  uint8_T Switch_bj;                   /* '<S98>/Switch' */
  uint8_T Output_l;                    /* '<S85>/Output' */
  uint8_T FixPtSum1_f;                 /* '<S93>/FixPt Sum1' */
  uint8_T FixPtSwitch_i;               /* '<S94>/FixPt Switch' */
  uint8_T MsgByte[64];                 /* '<S87>/CheckSum8Bclc4' */
  uint8_T MsgByte_h[64];               /* '<S6>/CheckSum8Bclc3' */
  uint8_T MsgByte_i[64];               /* '<S6>/CheckSum8Bclc1' */
  uint8_T UnitDelay1_bi[6];            /* '<S42>/Unit Delay1' */
  uint8_T RSDS_R_ObjID_1Value;         /* '<S72>/Data Inport S-Fcn' */
  uint8_T RSDS_R_ObjID_2Value;         /* '<S72>/Data Inport S-Fcn' */
  uint8_T RSDS_R_ObjID_3Value;         /* '<S72>/Data Inport S-Fcn' */
  uint8_T RSDS_R_ObjID_4Value;         /* '<S72>/Data Inport S-Fcn' */
  uint8_T RSDS_R_ObjID_5Value;         /* '<S72>/Data Inport S-Fcn' */
  uint8_T RSDS_R_ObjID_6Value;         /* '<S72>/Data Inport S-Fcn' */
  uint8_T DataTypeConversion_e[6];     /* '<S42>/Data Type Conversion' */
  uint8_T UnitDelay_a[6];              /* '<S42>/Unit Delay' */
  uint8_T UnitDelay1_e[6];             /* '<S40>/Unit Delay1' */
  uint8_T RSDS_L_ObjID_1Value;         /* '<S63>/Data Inport S-Fcn' */
  uint8_T RSDS_L_ObjID_2Value;         /* '<S63>/Data Inport S-Fcn' */
  uint8_T RSDS_L_ObjID_3Value;         /* '<S63>/Data Inport S-Fcn' */
  uint8_T RSDS_L_ObjID_4Value;         /* '<S63>/Data Inport S-Fcn' */
  uint8_T RSDS_L_ObjID_5Value;         /* '<S63>/Data Inport S-Fcn' */
  uint8_T RSDS_L_ObjID_6Value;         /* '<S63>/Data Inport S-Fcn' */
  uint8_T DataTypeConversion_b[6];     /* '<S40>/Data Type Conversion' */
  uint8_T UnitDelay_l[6];              /* '<S40>/Unit Delay' */
  uint8_T ObjID_c[11];                 /* '<S5>/MATLAB Function2' */
  uint8_T ObjAge[11];                  /* '<S5>/MATLAB Function2' */
  uint8_T ObjMoveSts_e[11];            /* '<S5>/MATLAB Function2' */
  uint8_T ObjFusType[11];              /* '<S5>/MATLAB Function2' */
  uint8_T UnitDelay1_k[6];             /* '<S32>/Unit Delay1' */
  uint8_T CR_R_ObjID_1Value;           /* '<S54>/Data Inport S-Fcn' */
  uint8_T CR_R_ObjID_2Value;           /* '<S54>/Data Inport S-Fcn' */
  uint8_T CR_R_ObjID_3Value;           /* '<S54>/Data Inport S-Fcn' */
  uint8_T CR_R_ObjID_4Value;           /* '<S54>/Data Inport S-Fcn' */
  uint8_T CR_R_ObjID_5Value;           /* '<S54>/Data Inport S-Fcn' */
  uint8_T CR_R_ObjID_6Value;           /* '<S54>/Data Inport S-Fcn' */
  uint8_T DataTypeConversion_d[6];     /* '<S32>/Data Type Conversion' */
  uint8_T UnitDelay_hv[6];             /* '<S32>/Unit Delay' */
  uint8_T UnitDelay1_bl[6];            /* '<S30>/Unit Delay1' */
  uint8_T CR_L_ObjID_1Value;           /* '<S45>/Data Inport S-Fcn' */
  uint8_T CR_L_ObjID_2Value;           /* '<S45>/Data Inport S-Fcn' */
  uint8_T CR_L_ObjID_3Value;           /* '<S45>/Data Inport S-Fcn' */
  uint8_T CR_L_ObjID_4Value;           /* '<S45>/Data Inport S-Fcn' */
  uint8_T CR_L_ObjID_5Value;           /* '<S45>/Data Inport S-Fcn' */
  uint8_T CR_L_ObjID_6Value;           /* '<S45>/Data Inport S-Fcn' */
  uint8_T DataTypeConversion_p[6];     /* '<S30>/Data Type Conversion' */
  uint8_T UnitDelay_gw[6];             /* '<S30>/Unit Delay' */
  uint8_T Output_b;                    /* '<S173>/Output' */
  uint8_T FixPtSum1_g;                 /* '<S216>/FixPt Sum1' */
  uint8_T FixPtSwitch_g;               /* '<S217>/FixPt Switch' */
  int8_T TSR_SnvtySet;                 /* '<Root>/Switch' */
  int8_T RobustGazePitchAng;           /* '<Root>/Switch' */
  int8_T RobustGazeYawAng;             /* '<Root>/Switch' */
  int8_T HeadRollAng;                  /* '<Root>/Switch' */
  int8_T HeadPitchAng;                 /* '<Root>/Switch' */
  int8_T HeadYawAng;                   /* '<Root>/Switch' */
  boolean_T FixPtRelationalOperator;   /* '<S34>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_g; /* '<S35>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_h; /* '<S36>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_n; /* '<S37>/FixPt Relational Operator' */
  boolean_T RmtPrkgSts;                /* '<Root>/Switch' */
  boolean_T FPAS_FLCornrSnsrFailSts;   /* '<Root>/Switch' */
  boolean_T FPAS_FLMiddlSnsrFailSts;   /* '<Root>/Switch' */
  boolean_T FPAS_FRMiddlSnsrFailSts;   /* '<Root>/Switch' */
  boolean_T FPAS_FRCornrSnsrFailSts;   /* '<Root>/Switch' */
  boolean_T FPAS_DispCmd;              /* '<Root>/Switch' */
  boolean_T FPAS_AutoModSts;           /* '<Root>/Switch' */
  boolean_T MEB_EnableSts;             /* '<Root>/Switch' */
  boolean_T RPAS_RLCornrSnsrFailSts;   /* '<Root>/Switch' */
  boolean_T RPAS_RLMiddlSnsrFailSts;   /* '<Root>/Switch' */
  boolean_T RPAS_RRMiddlSnsrFailSts;   /* '<Root>/Switch' */
  boolean_T RPAS_RRCornrSnsrFailSts;   /* '<Root>/Switch' */
  boolean_T APS_FRSideSnsrFailSts;     /* '<Root>/Switch' */
  boolean_T APS_FLSideSnsrFailSts;     /* '<Root>/Switch' */
  boolean_T APS_RRSideSnsrFailSts;     /* '<Root>/Switch' */
  boolean_T APS_RLSideSnsrFailSts;     /* '<Root>/Switch' */
  boolean_T SDWActiveSts;              /* '<Root>/Switch' */
  boolean_T HAP_DispCmd;               /* '<Root>/Switch' */
  boolean_T RiCamInpFailSts;           /* '<Root>/Switch' */
  boolean_T LeCamInpFailSts;           /* '<Root>/Switch' */
  boolean_T RearCamInpFailSts;         /* '<Root>/Switch' */
  boolean_T FrntCamInpFailSts;         /* '<Root>/Switch' */
  boolean_T EolNotCmpltd;              /* '<Root>/Switch' */
  boolean_T OvlOpFailSts;              /* '<Root>/Switch' */
  boolean_T CurrCalResultSts;          /* '<Root>/Switch' */
  boolean_T MOD_WorkSts;               /* '<Root>/Switch' */
  boolean_T MOD_AlarmSts;              /* '<Root>/Switch' */
  boolean_T CarMdlDispSts;             /* '<Root>/Switch' */
  boolean_T AutoViewChgFuncSts;        /* '<Root>/Switch' */
  boolean_T AutoAVMSwtSet_Sts;         /* '<Root>/Switch' */
  boolean_T P2P_Pah2Avail;             /* '<Root>/Switch' */
  boolean_T RmtPrkgReq;                /* '<Root>/Switch' */
  boolean_T LParaPrkgOutVald;          /* '<Root>/Switch' */
  boolean_T RParaPrkgOutVald;          /* '<Root>/Switch' */
  boolean_T HeadVertPrkgOutVald;       /* '<Root>/Switch' */
  boolean_T TailVertPrkgOutVald;       /* '<Root>/Switch' */
  boolean_T P2P_Pah1Avail;             /* '<Root>/Switch' */
  boolean_T HAP_ESP_LSMVehSecReq;      /* '<Root>/Switch' */
  boolean_T HAP_ESP_LSMNudgeReq;       /* '<Root>/Switch' */
  boolean_T HAP_ESP_SafeDrvrHandoverReq;/* '<Root>/Switch' */
  boolean_T HAP_ESP_LSMPrefill;        /* '<Root>/Switch' */
  boolean_T HAP_ESP_DriverPresenceExternal;/* '<Root>/Switch' */
  boolean_T MEB_AVHReq;                /* '<Root>/Switch' */
  boolean_T MEBErrSts;                 /* '<Root>/Switch' */
  boolean_T MEB_BrkgReq;               /* '<Root>/Switch' */
  boolean_T APS_SwtSts;                /* '<Root>/Switch' */
  boolean_T APS_ReqEPSTgtAngValid;     /* '<Root>/Switch' */
  boolean_T APS_ReqCtrlEPS;            /* '<Root>/Switch' */
  boolean_T SysPowerModVld;            /* '<Root>/Switch' */
  boolean_T WssRLEdgesSumVld;          /* '<Root>/Switch' */
  boolean_T WssRREdgesSumVld;          /* '<Root>/Switch' */
  boolean_T RRWheelSpdVld;             /* '<Root>/Switch' */
  boolean_T RLWheelSpdVld;             /* '<Root>/Switch' */
  boolean_T L3VLCADactive;             /* '<Root>/Switch' */
  boolean_T EBDActv;                   /* '<Root>/Switch' */
  boolean_T ABSActv;                   /* '<Root>/Switch' */
  boolean_T ABSFailSts;                /* '<Root>/Switch' */
  boolean_T EBDFailSts;                /* '<Root>/Switch' */
  boolean_T VehSpdVld;                 /* '<Root>/Switch' */
  boolean_T WssFLEdgesSumVld;          /* '<Root>/Switch' */
  boolean_T WssFREdgesSumVld;          /* '<Root>/Switch' */
  boolean_T FRWheelSpdVld;             /* '<Root>/Switch' */
  boolean_T FLWheelSpdVld;             /* '<Root>/Switch' */
  boolean_T IB_BrkPedalAppld;          /* '<Root>/Switch' */
  boolean_T RSDS_MidTgt_02;            /* '<Root>/Switch' */
  boolean_T RSDS_MidTgt_01;            /* '<Root>/Switch' */
  boolean_T RSDS_RiTgt_02;             /* '<Root>/Switch' */
  boolean_T RSDS_RiTgt_01;             /* '<Root>/Switch' */
  boolean_T RSDS_LeTgt_02;             /* '<Root>/Switch' */
  boolean_T RSDS_LeTgt_01;             /* '<Root>/Switch' */
  boolean_T ObjStatyRi;                /* '<Root>/Switch' */
  boolean_T ObjStatyLe;                /* '<Root>/Switch' */
  boolean_T RSDS_RCTABrkResp;          /* '<Root>/Switch' */
  boolean_T RSDS_CTA_Actv;             /* '<Root>/Switch' */
  boolean_T RCTA_warningReqRight;      /* '<Root>/Switch' */
  boolean_T RCTA_warningReqLeft;       /* '<Root>/Switch' */
  boolean_T RSDS_ErrSts;               /* '<Root>/Switch' */
  boolean_T RSDS_BrkgTrig;             /* '<Root>/Switch' */
  boolean_T RSDS_BliSts;               /* '<Root>/Switch' */
  boolean_T RSDS_TrailerSts;           /* '<Root>/Switch' */
  boolean_T RSDS_LCAResp;              /* '<Root>/Switch' */
  boolean_T RSDS_DOWResp;              /* '<Root>/Switch' */
  boolean_T RSDS_RCWResp;              /* '<Root>/Switch' */
  boolean_T RSDS_RCTAResp;             /* '<Root>/Switch' */
  boolean_T RSDS_Brk_ErrSts;           /* '<Root>/Switch' */
  boolean_T RSDS_BrkgReq;              /* '<Root>/Switch' */
  boolean_T FCTB_ABP_Req;              /* '<Root>/Switch' */
  boolean_T CR_ErrSts;                 /* '<Root>/Switch' */
  boolean_T CR_BliSts;                 /* '<Root>/Switch' */
  boolean_T CR_BrkgReq;                /* '<Root>/Switch' */
  boolean_T FCTBTrig;                  /* '<Root>/Switch' */
  boolean_T FCTB_ABA_Req;              /* '<Root>/Switch' */
  boolean_T CR_FCTA_Resp;              /* '<Root>/Switch' */
  boolean_T CR_FCTB_Resp;              /* '<Root>/Switch' */
  boolean_T FCTA_Warn;                 /* '<Root>/Switch' */
  boolean_T IP_VehSpdUnit;             /* '<Root>/Switch' */
  boolean_T IP_Err;                    /* '<Root>/Switch' */
  boolean_T IP_ACCErr;                 /* '<Root>/Switch' */
  boolean_T IP_VehTotDistanceValid;    /* '<Root>/Switch' */
  boolean_T HWP_VehSpdUnit;            /* '<Root>/Switch' */
  boolean_T HWP_WorkReqVld_KBCM;       /* '<Root>/Switch' */
  boolean_T HWP_KBCM_Req;              /* '<Root>/Switch' */
  boolean_T HWP_BrkLmpReq;             /* '<Root>/Switch' */
  boolean_T HWP_BackupReq;             /* '<Root>/Switch' */
  boolean_T HWP_AC_Req;                /* '<Root>/Switch' */
  boolean_T HWP_RWshrReq;              /* '<Root>/Switch' */
  boolean_T HWP_EmgyLightReq;          /* '<Root>/Switch' */
  boolean_T HWP_HornReq;               /* '<Root>/Switch' */
  boolean_T HWP_DippedBeamReq;         /* '<Root>/Switch' */
  boolean_T HWP_HiBeamtReq;            /* '<Root>/Switch' */
  boolean_T HWP_FFogLightReq;          /* '<Root>/Switch' */
  boolean_T HWP_RFogLightReq;          /* '<Root>/Switch' */
  boolean_T HWP_ShutdownReq;           /* '<Root>/Switch' */
  boolean_T HWP_UseTgtAccelCmftUpprLimVal;/* '<Root>/Switch' */
  boolean_T HWP_SecureReq;             /* '<Root>/Switch' */
  boolean_T HWP_SuprAvail;             /* '<Root>/Switch' */
  boolean_T HWP_Lgt_HCUTrqReqVld;      /* '<Root>/Switch' */
  boolean_T HWP_Lgt_HCUTrqReqActv;     /* '<Root>/Switch' */
  boolean_T HWP_Lgt_HCUTrqReqActvVld;  /* '<Root>/Switch' */
  boolean_T HWP_HCUOvrdReq;            /* '<Root>/Switch' */
  boolean_T HWP_EPBCtrlReq;            /* '<Root>/Switch' */
  boolean_T HWP_EPBCtrlReqVld;         /* '<Root>/Switch' */
  boolean_T HWP_AEB_VehHldReq;         /* '<Root>/Switch' */
  boolean_T HWP_AEB_DecelCtrlReq;      /* '<Root>/Switch' */
  boolean_T HWP_AEB_AWB_Req;           /* '<Root>/Switch' */
  boolean_T HWP_AEB_ABP_Req;           /* '<Root>/Switch' */
  boolean_T HWP_lgt_VehHldReq;         /* '<Root>/Switch' */
  boolean_T HWP_lgt_DrvOFF_Req;        /* '<Root>/Switch' */
  boolean_T HWP_lgt_Decel_Req;         /* '<Root>/Switch' */
  boolean_T HWP_lgt_DecelToStopReq;    /* '<Root>/Switch' */
  boolean_T HWP_AEB_ABAReq;            /* '<Root>/Switch' */
  boolean_T HWP_EBA_DecelCtrlReq;      /* '<Root>/Switch' */
  boolean_T HWP_WorkReqVld;            /* '<Root>/Switch' */
  boolean_T HWP_Lgtctrl_EngTrqReqVld;  /* '<Root>/Switch' */
  boolean_T HWP_TgtGearReqVld;         /* '<Root>/Switch' */
  boolean_T HWP_Lgtctrl_EngTrqReqActv; /* '<Root>/Switch' */
  boolean_T HWP_Lgtctrl_FuelCutOffReq; /* '<Root>/Switch' */
  boolean_T HWP_ECMOvrdReq;            /* '<Root>/Switch' */
  boolean_T HWP_EngTrqReqActvVld;      /* '<Root>/Switch' */
  boolean_T HWP_ReqCtrlEPS;            /* '<Root>/Switch' */
  boolean_T HWP_ReqCtrlEPSVld;         /* '<Root>/Switch' */
  boolean_T HWP_AngCmdReqValVld;       /* '<Root>/Switch' */
  boolean_T FCTASwtReq;                /* '<Root>/Switch' */
  boolean_T FCTABrkSwtReq;             /* '<Root>/Switch' */
  boolean_T AEB_JASwtReq;              /* '<Root>/Switch' */
  boolean_T AESSwtReq;                 /* '<Root>/Switch' */
  boolean_T ALC_SwtReq;                /* '<Root>/Switch' */
  boolean_T HWA_SwtReq;                /* '<Root>/Switch' */
  boolean_T ICA_HandsOffSwtReq;        /* '<Root>/Switch' */
  boolean_T ISLSwtReq;                 /* '<Root>/Switch' */
  boolean_T IntelligentEvaSwtReq;      /* '<Root>/Switch' */
  boolean_T LSSSwtReq;                 /* '<Root>/Switch' */
  boolean_T AEB_PedSwtReq;             /* '<Root>/Switch' */
  boolean_T DOWSwtReq;                 /* '<Root>/Switch' */
  boolean_T TSRSwtReq;                 /* '<Root>/Switch' */
  boolean_T TSRWarnSwtReq;             /* '<Root>/Switch' */
  boolean_T AEB_VehSwtReq;             /* '<Root>/Switch' */
  boolean_T LKASwtReq;                 /* '<Root>/Switch' */
  boolean_T LCKSwtReq;                 /* '<Root>/Switch' */
  boolean_T ELKSwtReq;                 /* '<Root>/Switch' */
  boolean_T ESS_PedSwtReq;             /* '<Root>/Switch' */
  boolean_T ESS_VehSwtReq;             /* '<Root>/Switch' */
  boolean_T LDWSwtReq;                 /* '<Root>/Switch' */
  boolean_T LCASwtReq;                 /* '<Root>/Switch' */
  boolean_T RCTASwtReq;                /* '<Root>/Switch' */
  boolean_T RCTABrkSwtReq;             /* '<Root>/Switch' */
  boolean_T RCWSwtReq;                 /* '<Root>/Switch' */
  boolean_T CarMdlDispCmd;             /* '<Root>/Switch' */
  boolean_T MODChgReq;                 /* '<Root>/Switch' */
  boolean_T MEBSwtSet;                 /* '<Root>/Switch' */
  boolean_T FPAS_AutoModSwt;           /* '<Root>/Switch' */
  boolean_T View_SoftswitchCmd;        /* '<Root>/Switch' */
  boolean_T SwToFieldCalRstCmd;        /* '<Root>/Switch' */
  boolean_T AutoAVMSwSet_Cmd;          /* '<Root>/Switch' */
  boolean_T WshSoftSwt;                /* '<Root>/Switch' */
  boolean_T AutoViewChgCmd;            /* '<Root>/Switch' */
  boolean_T MdlColrChgCmd;             /* '<Root>/Switch' */
  boolean_T CarMdlTrsprcySwtCmd;       /* '<Root>/Switch' */
  boolean_T LaneCalActvtCmd;           /* '<Root>/Switch' */
  boolean_T Radar_DispCmd;             /* '<Root>/Switch' */
  boolean_T Guid_Ovl_Display_Cmd;      /* '<Root>/Switch' */
  boolean_T TimeIndcn;                 /* '<Root>/Switch' */
  boolean_T TimeMod;                   /* '<Root>/Switch' */
  boolean_T DeletePath1Cmd;            /* '<Root>/Switch' */
  boolean_T StartPrkgPath1Cmd;         /* '<Root>/Switch' */
  boolean_T DeletePath2Cmd;            /* '<Root>/Switch' */
  boolean_T StartPrkgPath2Cmd;         /* '<Root>/Switch' */
  boolean_T BackReq_APS;               /* '<Root>/Switch' */
  boolean_T ParkMdlCmd;                /* '<Root>/Switch' */
  boolean_T PathLrngStartCmd;          /* '<Root>/Switch' */
  boolean_T PathLrngFinshCmd;          /* '<Root>/Switch' */
  boolean_T PrkStraightSts_HUT;        /* '<Root>/Switch' */
  boolean_T PrkStraightContinueReq_HUT;/* '<Root>/Switch' */
  boolean_T PrkStraightStrtReq_HUT;    /* '<Root>/Switch' */
  boolean_T PrkStraightVehStrtReq_HUT_Valid;/* '<Root>/Switch' */
  boolean_T PrkStraightSwtReq_HUT;     /* '<Root>/Switch' */
  boolean_T PrkgCtrlModReqValid;       /* '<Root>/Switch' */
  boolean_T DetVideoLost;              /* '<Root>/Switch' */
  boolean_T ContnPrkgReqValid;         /* '<Root>/Switch' */
  boolean_T ADAS_Stub_LastStub;        /* '<Root>/Switch' */
  boolean_T ADAS_Stub_Retr;            /* '<Root>/Switch' */
  boolean_T ADAS_Stub_Update;          /* '<Root>/Switch' */
  boolean_T ADAS_Seg_Retr;             /* '<Root>/Switch' */
  boolean_T ADAS_Seg_Update;           /* '<Root>/Switch' */
  boolean_T ADAS_ProfShort_CtrlPoint;  /* '<Root>/Switch' */
  boolean_T ADAS_ProfShort_Retr;       /* '<Root>/Switch' */
  boolean_T ADAS_ProfShort_Update;     /* '<Root>/Switch' */
  boolean_T ADAS_ProfLong_CtrlPoint;   /* '<Root>/Switch' */
  boolean_T ADAS_ProfLong_Retr;        /* '<Root>/Switch' */
  boolean_T ADAS_ProfLong_Update;      /* '<Root>/Switch' */
  boolean_T ADAS_Meta_SpdUnits;        /* '<Root>/Switch' */
  boolean_T ADAS_Meta_DrvSide;         /* '<Root>/Switch' */
  boolean_T SDWSwtSet;                 /* '<Root>/Switch' */
  boolean_T HCU_RdyLmpSts;             /* '<Root>/Switch' */
  boolean_T HCU_APS_Available;         /* '<Root>/Switch' */
  boolean_T HCU_HWPInterface;          /* '<Root>/Switch' */
  boolean_T HCU_RespHWP;               /* '<Root>/Switch' */
  boolean_T HCU_ACCInterface;          /* '<Root>/Switch' */
  boolean_T HCU_AccelPedalPosn_DiagValid;/* '<Root>/Switch' */
  boolean_T HCU_BrkPedalStsValid;      /* '<Root>/Switch' */
  boolean_T EPS_SteerWheelSpdSign;     /* '<Root>/Switch' */
  boolean_T EPS_SteerWheelAngSign;     /* '<Root>/Switch' */
  boolean_T EPS_HWPHndShkResp;         /* '<Root>/Switch' */
  boolean_T EPS_LKATorqOvrlDlvdVld;    /* '<Root>/Switch' */
  boolean_T EPS_InterferDetd;          /* '<Root>/Switch' */
  boolean_T EPS_InterferDetdVld;       /* '<Root>/Switch' */
  boolean_T EPS_TrqSnsrSts;            /* '<Root>/Switch' */
  boolean_T ParkPawlRequest;           /* '<Root>/Switch' */
  boolean_T L3VLCADactive_c;           /* '<Root>/Switch' */
  boolean_T VLC_ESP_FuelCutOffPrevention;/* '<Root>/Switch' */
  boolean_T LSMSubMTReqAvailable;      /* '<Root>/Switch' */
  boolean_T WssRLEdgesSumVld_f;        /* '<Root>/Switch' */
  boolean_T WssRREdgesSumVld_k;        /* '<Root>/Switch' */
  boolean_T RRWheelSpdVld_o;           /* '<Root>/Switch' */
  boolean_T RLWheelSpdVld_l;           /* '<Root>/Switch' */
  boolean_T EPB_SwtPosnVld;            /* '<Root>/Switch' */
  boolean_T WssFLEdgesSumVld_k;        /* '<Root>/Switch' */
  boolean_T WssFREdgesSumVld_k;        /* '<Root>/Switch' */
  boolean_T FRWheelSpdVld_a;           /* '<Root>/Switch' */
  boolean_T FLWheelSpdVld_l;           /* '<Root>/Switch' */
  boolean_T EBDActv_c;                 /* '<Root>/Switch' */
  boolean_T ABSActv_e;                 /* '<Root>/Switch' */
  boolean_T ABSFailSts_o;              /* '<Root>/Switch' */
  boolean_T EBDFailSts_l;              /* '<Root>/Switch' */
  boolean_T VehSpdVld_m;               /* '<Root>/Switch' */
  boolean_T APS_EngTrqReqEna;          /* '<Root>/Switch' */
  boolean_T ESP_MEBBrkAvail;           /* '<Root>/Switch' */
  boolean_T MSRActv_RA;                /* '<Root>/Switch' */
  boolean_T BTCActv;                   /* '<Root>/Switch' */
  boolean_T PTCActv;                   /* '<Root>/Switch' */
  boolean_T MSRActv;                   /* '<Root>/Switch' */
  boolean_T VDCActv;                   /* '<Root>/Switch' */
  boolean_T ESP_MasterCylBrkPressVld;  /* '<Root>/Switch' */
  boolean_T ESPFailSts;                /* '<Root>/Switch' */
  boolean_T ESPBrkLmpCtrl;             /* '<Root>/Switch' */
  boolean_T ESPFuncOffSts;             /* '<Root>/Switch' */
  boolean_T BTCActv_RA;                /* '<Root>/Switch' */
  boolean_T PTCActv_RA;                /* '<Root>/Switch' */
  boolean_T AWBActv;                   /* '<Root>/Switch' */
  boolean_T AWBAvailable;              /* '<Root>/Switch' */
  boolean_T CDDAvailable;              /* '<Root>/Switch' */
  boolean_T CDDActv;                   /* '<Root>/Switch' */
  boolean_T ABAactv;                   /* '<Root>/Switch' */
  boolean_T ABAavailable;              /* '<Root>/Switch' */
  boolean_T ABPActv;                   /* '<Root>/Switch' */
  boolean_T ABPAvailable;              /* '<Root>/Switch' */
  boolean_T AEBAvailable;              /* '<Root>/Switch' */
  boolean_T AEBBAActv;                 /* '<Root>/Switch' */
  boolean_T AEBIBActv;                 /* '<Root>/Switch' */
  boolean_T NoBrkForce;                /* '<Root>/Switch' */
  boolean_T BrkDskOvrheatd;            /* '<Root>/Switch' */
  boolean_T CTABrkAvailable;           /* '<Root>/Switch' */
  boolean_T L12VLCADactive;            /* '<Root>/Switch' */
  boolean_T L12mainVMCavailiable;      /* '<Root>/Switch' */
  boolean_T EngLimpHomeSts;            /* '<Root>/Switch' */
  boolean_T ECMHWPinterface;           /* '<Root>/Switch' */
  boolean_T AccPedalOverride_HWP;      /* '<Root>/Switch' */
  boolean_T ECMRespACC;                /* '<Root>/Switch' */
  boolean_T ECMACCInterface;           /* '<Root>/Switch' */
  boolean_T AccPedalOverride;          /* '<Root>/Switch' */
  boolean_T ECM_interfaceAPS;          /* '<Root>/Switch' */
  boolean_T TrqLossVldty;              /* '<Root>/Switch' */
  boolean_T DrvEngTrqReqVld;           /* '<Root>/Switch' */
  boolean_T HeadDetn;                  /* '<Root>/Switch' */
  boolean_T TmLimpHomeValid;           /* '<Root>/Switch' */
  boolean_T TCUResponseHWP;            /* '<Root>/Switch' */
  boolean_T ShiftInPrgValid;           /* '<Root>/Switch' */
  boolean_T TCU_APS_Available;         /* '<Root>/Switch' */
  boolean_T CurrentGearValid;          /* '<Root>/Switch' */
  boolean_T SHIFT_IN_PROGRESS;         /* '<Root>/Switch' */
  boolean_T TargetGearValid;           /* '<Root>/Switch' */
  boolean_T HWA_OK_OFFSwt;             /* '<Root>/Switch' */
  boolean_T CC_ACC_IncSetSpd_ResuSwt;  /* '<Root>/Switch' */
  boolean_T CC_ACC_DecSetSpd_SetSwt;   /* '<Root>/Switch' */
  boolean_T CC_ACCSwtErr;              /* '<Root>/Switch' */
  boolean_T CC_ACC_CRUISE_OFFSwt;      /* '<Root>/Switch' */
  boolean_T CC_ACC_CANCEL_OFFSwt;      /* '<Root>/Switch' */
  boolean_T ACC_TimeGap_IncSetSwt;     /* '<Root>/Switch' */
  boolean_T ACC_TimeGap_DecSetSwt;     /* '<Root>/Switch' */
  boolean_T SteerWheelSpdSign;         /* '<Root>/Switch' */
  boolean_T SteerWheelAngSign;         /* '<Root>/Switch' */
  boolean_T AutoLmpSwtSts;             /* '<Root>/Switch' */
  boolean_T AutoHiLowBeamSwtSts;       /* '<Root>/Switch' */
  boolean_T OverVehBeamSwtSts;         /* '<Root>/Switch' */
  boolean_T HiBeamSwtSts;              /* '<Root>/Switch' */
  boolean_T LowBeamSwtSts;             /* '<Root>/Switch' */
  boolean_T FrntFogLmpSwtSts;          /* '<Root>/Switch' */
  boolean_T PLAN_NOH_SetSpdAdjReq;     /* '<Root>/Unit Delay5' */
  boolean_T PLAN_DriverOffConditionFulfilled;/* '<Root>/Unit Delay5' */
  boolean_T PLAN_Longctrl_DecelToStopReq;/* '<Root>/Unit Delay5' */
  boolean_T IntelligentCurveActive;    /* '<Root>/Unit Delay5' */
  boolean_T tor;                       /* '<Root>/Unit Delay5' */
  boolean_T RateTransition46;          /* '<Root>/Rate Transition46' */
  boolean_T RTurnLmpSwtSts;            /* '<Root>/Switch' */
  boolean_T RateTransition28;          /* '<Root>/Rate Transition28' */
  boolean_T LTurnLmpSwtSts;            /* '<Root>/Switch' */
  boolean_T KL30BRelaySts;             /* '<Root>/Switch' */
  boolean_T RViewMirrorSts;            /* '<Root>/Switch' */
  boolean_T PASWorkCmd;                /* '<Root>/Switch' */
  boolean_T HazardLmpSwtSts;           /* '<Root>/Switch' */
  boolean_T LasHdLmpWorkCmd;           /* '<Root>/Switch' */
  boolean_T LCornrLmpWorkCmd;          /* '<Root>/Switch' */
  boolean_T RCornrLmpWorkCmd;          /* '<Root>/Switch' */
  boolean_T RHorseRaceLmpWorkCmd;      /* '<Root>/Switch' */
  boolean_T LHorseRaceLmpWorkCmd;      /* '<Root>/Switch' */
  boolean_T TrunkLmpWorkCmd;           /* '<Root>/Switch' */
  boolean_T AsstPosnLmpSts;            /* '<Root>/Switch' */
  boolean_T LicPlateLmpWorkCmd;        /* '<Root>/Switch' */
  boolean_T ReversLampWorkCmd;         /* '<Root>/Switch' */
  boolean_T BrkLmpWorkCmd;             /* '<Root>/Switch' */
  boolean_T RFogLmpWorkCmd;            /* '<Root>/Switch' */
  boolean_T FFogLmpAsstSts;            /* '<Root>/Switch' */
  boolean_T HornWorkCmd;               /* '<Root>/Switch' */
  boolean_T RDayRunngLmpWorkCmd;       /* '<Root>/Switch' */
  boolean_T LDayRunngLmpWorkCmd;       /* '<Root>/Switch' */
  boolean_T RFFogLmpWorkCmd;           /* '<Root>/Switch' */
  boolean_T LFFogLmpWorkCmd;           /* '<Root>/Switch' */
  boolean_T HiBeamWorkCmd;             /* '<Root>/Switch' */
  boolean_T LowBeamWorkCmd;            /* '<Root>/Switch' */
  boolean_T RTurnLmpWorkCmd;           /* '<Root>/Switch' */
  boolean_T LTurnLampWorkCmd;          /* '<Root>/Switch' */
  boolean_T RLSFailSts;                /* '<Root>/Switch' */
  boolean_T PosnLightReq;              /* '<Root>/Switch' */
  boolean_T BrkPedalFailSts;           /* '<Root>/Switch' */
  boolean_T TrunkSts;                  /* '<Root>/Switch' */
  boolean_T DrvDoorSts;                /* '<Root>/Switch' */
  boolean_T LRDoorSts;                 /* '<Root>/Switch' */
  boolean_T PassengerDoorSts;          /* '<Root>/Switch' */
  boolean_T RRDoorSts;                 /* '<Root>/Switch' */
  boolean_T WindshldWiprActvSts;       /* '<Root>/Switch' */
  boolean_T BrkPedalSts_BCM;           /* '<Root>/Switch' */
  boolean_T VehLgtAccelVld;            /* '<Root>/Switch' */
  boolean_T VehLatAccelVld;            /* '<Root>/Switch' */
  boolean_T VehDynYawRateVld;          /* '<Root>/Switch' */
  boolean_T PABSwtSts;                 /* '<Root>/Switch' */
  boolean_T SecRowLSBR;                /* '<Root>/Switch' */
  boolean_T AirbFailLmpCmd;            /* '<Root>/Switch' */
  boolean_T SecRowMidSBR;              /* '<Root>/Switch' */
  boolean_T DrvSBR;                    /* '<Root>/Switch' */
  boolean_T SecRowRSBR;                /* '<Root>/Switch' */
  boolean_T PassSBR;                   /* '<Root>/Switch' */
  boolean_T ALSDrvSide_FB;             /* '<Root>/Switch' */
  boolean_T HighBeamSts_HC;            /* '<Root>/Switch' */
  boolean_T LeftLowBeamFailSts;        /* '<Root>/Switch' */
  boolean_T RightLowBeamFailSts;       /* '<Root>/Switch' */
  boolean_T LeftHighBeamFailSts;       /* '<Root>/Switch' */
  boolean_T RightHighBeamFailSts;      /* '<Root>/Switch' */
  boolean_T ALS_FailSts;               /* '<Root>/Switch' */
  boolean_T LHeadLmpFailSts;           /* '<Root>/Switch' */
  boolean_T RHeadLmpFailSts;           /* '<Root>/Switch' */
  boolean_T HoodSts_F_Pbox;            /* '<Root>/Switch' */
  boolean_T HiBeamSts_F_Pbox;          /* '<Root>/Switch' */
  boolean_T LowBeamSts_F_Pbox;         /* '<Root>/Switch' */
  boolean_T FFogLmpSts_F_Pbox;         /* '<Root>/Switch' */
  boolean_T LTurnLmpSts_R_Pbox;        /* '<Root>/Switch' */
  boolean_T RTurnLmpSts_R_Pbox;        /* '<Root>/Switch' */
  boolean_T RFogLmpFailSts_R_Pbox;     /* '<Root>/Switch' */
  boolean_T RFogLmpSts_R_Pbox;         /* '<Root>/Switch' */
  boolean_T HiPosnBrkLmpFailSts;       /* '<Root>/Switch' */
  boolean_T LBrkLmpFailSts;            /* '<Root>/Switch' */
  boolean_T RBrkLmpFailSts;            /* '<Root>/Switch' */
  boolean_T PosnLmpOutpSts_R_Pbox;     /* '<Root>/Switch' */
  boolean_T Status;                    /* '<S258>/Data Inport S-Fcn' */
  boolean_T Status_o;                  /* '<S162>/Data Inport S-Fcn' */
  boolean_T Compare;                   /* '<S160>/Compare' */
  boolean_T DataTypeConversion47;      /* '<S172>/Data Type Conversion47' */
  boolean_T Compare_c;                 /* '<S183>/Compare' */
  boolean_T Memory26;                  /* '<S179>/Memory26' */
  boolean_T Memory24;                  /* '<S179>/Memory24' */
  boolean_T RelationalOperator1;       /* '<S179>/Relational Operator1' */
  boolean_T DataTypeConversion47_d;    /* '<S174>/Data Type Conversion47' */
  boolean_T Compare_b;                 /* '<S223>/Compare' */
  boolean_T Memory26_j;                /* '<S220>/Memory26' */
  boolean_T Memory24_c;                /* '<S220>/Memory24' */
  boolean_T RelationalOperator1_m;     /* '<S220>/Relational Operator1' */
  boolean_T Compare_g[15];             /* '<S224>/Compare' */
  boolean_T Compare_j[15];             /* '<S184>/Compare' */
  boolean_T SignalCopy3;               /* '<S176>/Signal Copy3' */
  boolean_T OTL_Valid;                 /* '<S174>/Data Type Conversion6' */
  boolean_T RelationalOperator;        /* '<S221>/Relational Operator' */
  boolean_T targetExistP0;             /* '<S174>/Data Type Conversion28' */
  boolean_T P0CutInflg;                /* '<S174>/Data Type Conversion40' */
  boolean_T Compare_i;                 /* '<S218>/Compare' */
  boolean_T Compare_k;                 /* '<S219>/Compare' */
  boolean_T LogicalOperator1;          /* '<S190>/Logical Operator1' */
  boolean_T UnitDelay_f;               /* '<S190>/Unit Delay' */
  boolean_T LogicalOperator;           /* '<S190>/Logical Operator' */
  boolean_T OTL_Valid_p;               /* '<S172>/Data Type Conversion6' */
  boolean_T RelationalOperator_o;      /* '<S181>/Relational Operator' */
  boolean_T targetExistP0_f;           /* '<S172>/Data Type Conversion28' */
  boolean_T P0CutInflg_g;              /* '<S172>/Data Type Conversion40' */
  boolean_T Compare_e;                 /* '<S177>/Compare' */
  boolean_T Compare_n;                 /* '<S178>/Compare' */
  boolean_T ObjValid[20];              /* '<S252>/MATLAB Function1' */
  boolean_T TargetCutIn_b;             /* '<S220>/TargetSelect' */
  boolean_T TargetExist;               /* '<S220>/TargetSelect' */
  boolean_T ObjValid_k[20];            /* '<S213>/MATLAB Function1' */
  boolean_T TargetCutIn_b_e;           /* '<S179>/TargetSelect' */
  boolean_T TargetExist_g;             /* '<S179>/TargetSelect' */
  boolean_T Valid;                     /* '<S190>/MATLAB Function' */
  boolean_T tor_a;                     /* '<S17>/PLAN' */
  boolean_T IntelligentCurveActive_n;  /* '<S17>/PLAN' */
  boolean_T PLAN_Longctrl_DecelToStopReq_p;/* '<S17>/PLAN' */
  boolean_T PLAN_DriverOffConditionFulfilled_i;/* '<S17>/PLAN' */
  boolean_T PLAN_DriverOffConditionFulfilled_g;/* '<S17>/Unit Delay3' */
  boolean_T PLAN_NOH_SetSpdAdjReq_c;   /* '<S17>/Unit Delay3' */
  boolean_T tor_g;                     /* '<S17>/Unit Delay3' */
  boolean_T IntelligentCurveActive_m;  /* '<S17>/Unit Delay3' */
  boolean_T PLAN_Longctrl_DecelToStopReq_g;/* '<S17>/Unit Delay3' */
  boolean_T PLAN_NOH_SetSpdAdjReq_k;   /* '<S17>/PLAN' */
  boolean_T Compare_f;                 /* '<S157>/Compare' */
  boolean_T Compare_fj;                /* '<S156>/Compare' */
  boolean_T AND;                       /* '<S149>/AND' */
  boolean_T Uk1_b;                     /* '<S158>/Delay Input1' */
  boolean_T FixPtRelationalOperator_l; /* '<S158>/FixPt Relational Operator' */
  boolean_T Compare_m;                 /* '<S150>/Compare' */
  boolean_T Uk1_f;                     /* '<S154>/Delay Input1' */
  boolean_T FixPtRelationalOperator_f; /* '<S154>/FixPt Relational Operator' */
  boolean_T Compare_a;                 /* '<S152>/Compare' */
  boolean_T Compare_p;                 /* '<S151>/Compare' */
  boolean_T AND_m;                     /* '<S148>/AND' */
  boolean_T Uk1_k;                     /* '<S153>/Delay Input1' */
  boolean_T FixPtRelationalOperator_ga;/* '<S153>/FixPt Relational Operator' */
  boolean_T Compare_f4;                /* '<S147>/Compare' */
  boolean_T Compare_eg;                /* '<S146>/Compare' */
  boolean_T AND_e;                     /* '<S143>/AND' */
  boolean_T OR2;                       /* '<S143>/OR2' */
  boolean_T Compare_f2;                /* '<S155>/Compare' */
  boolean_T Uk1_g;                     /* '<S159>/Delay Input1' */
  boolean_T FixPtRelationalOperator_k; /* '<S159>/FixPt Relational Operator' */
  boolean_T OR3;                       /* '<S143>/OR3' */
  boolean_T OR1;                       /* '<S143>/OR1' */
  boolean_T OR;                        /* '<S143>/OR' */
  boolean_T SwtSts;                    /* '<S143>/Chart2' */
  boolean_T SwtSts_i;                  /* '<S143>/Chart1' */
  boolean_T DataTypeConversion_h5;     /* '<S6>/Data Type Conversion' */
  boolean_T ESSErrSts;                 /* '<S86>/LightControl' */
  boolean_T AESErrSts;                 /* '<S86>/LightControl' */
  boolean_T RelationalOperator_g;      /* '<S89>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S90>/Relational Operator' */
  boolean_T RelationalOperator_k;      /* '<S92>/Relational Operator' */
  boolean_T RelationalOperator_k1;     /* '<S91>/Relational Operator' */
  boolean_T RelationalOperator_l;      /* '<S97>/Relational Operator' */
  boolean_T RelationalOperator_c;      /* '<S98>/Relational Operator' */
  B_wCutOutVy_Noa_Nofusion_T sf_wCutOutVy_j;/* '<S220>/wCutOutVy' */
  B_wCutInVy_Noa_Nofusion_T sf_wCutInVy_a;/* '<S220>/wCutInVy' */
  B_dyLaneWidthSteerAdapt_Noa_Nofusion_T sf_dyLaneWidthSteerAdapt_b;/* '<S220>/dyLaneWidthSteerAdapt' */
  B_VycCalc_Noa_Nofusion_T sf_VycCalc_m;/* '<S220>/VycCalc' */
  B_Trajectory_Noa_Nofusion_T Trajectory_o;/* '<S220>/Trajectory' */
  B_TimeCalc_Noa_Nofusion_T sf_TimeCalc_f;/* '<S220>/TimeCalc' */
  B_TargetBrake_Noa_Nofusion_T sf_TargetBrake_d;/* '<S220>/TargetBrake' */
  B_Std_Noa_Nofusion_T sf_Std_o;       /* '<S220>/Std' */
  B_Spw_Noa_Nofusion_T sf_Spw_b;       /* '<S220>/Spw' */
  B_Plaus_Noa_Nofusion_T sf_Plaus_i;   /* '<S220>/Plaus' */
  B_P0TrajHistCalc1_Noa_Nofusion_T sf_P0TrajHistCalc1_c;/* '<S230>/P0TrajHistCalc1' */
  B_P0TrajHistCalc01_Noa_Nofusion_T sf_P0TrajHistCalc01_c;/* '<S230>/P0TrajHistCalc01' */
  B_Lpb_Noa_Nofusion_T sf_Lpb_g;       /* '<S220>/Lpb' */
  B_LostTargetCalc_Noa_Nofusion_T sf_LostTargetCalc_f;/* '<S220>/LostTargetCalc' */
  B_DycHistCalc_Noa_Nofusion_T sf_DycHistCalc_d;/* '<S220>/DycHistCalc' */
  B_DycCutIn_Noa_Nofusion_T sf_DycCutIn_c;/* '<S220>/DycCutIn' */
  B_Dyc_Noa_Nofusion_T sf_Dyc_i;       /* '<S220>/Dyc' */
  B_ACC_DisplayBar_Noa_Nofusion_T sf_ACC_DisplayBar_n;/* '<S220>/ACC_DisplayBar' */
  B_wCutOutVy_Noa_Nofusion_T sf_wCutOutVy;/* '<S179>/wCutOutVy' */
  B_wCutInVy_Noa_Nofusion_T sf_wCutInVy;/* '<S179>/wCutInVy' */
  B_dyLaneWidthSteerAdapt_Noa_Nofusion_T sf_dyLaneWidthSteerAdapt;/* '<S179>/dyLaneWidthSteerAdapt' */
  B_VycCalc_Noa_Nofusion_T sf_VycCalc; /* '<S179>/VycCalc' */
  B_Trajectory_Noa_Nofusion_T Trajectory;/* '<S179>/Trajectory' */
  B_TimeCalc_Noa_Nofusion_T sf_TimeCalc;/* '<S179>/TimeCalc' */
  B_TargetBrake_Noa_Nofusion_T sf_TargetBrake;/* '<S179>/TargetBrake' */
  B_Std_Noa_Nofusion_T sf_Std;         /* '<S179>/Std' */
  B_Spw_Noa_Nofusion_T sf_Spw;         /* '<S179>/Spw' */
  B_Plaus_Noa_Nofusion_T sf_Plaus;     /* '<S179>/Plaus' */
  B_P0TrajHistCalc1_Noa_Nofusion_T sf_P0TrajHistCalc1;/* '<S190>/P0TrajHistCalc1' */
  B_P0TrajHistCalc01_Noa_Nofusion_T sf_P0TrajHistCalc01;/* '<S190>/P0TrajHistCalc01' */
  B_Lpb_Noa_Nofusion_T sf_Lpb;         /* '<S179>/Lpb' */
  B_LostTargetCalc_Noa_Nofusion_T sf_LostTargetCalc;/* '<S179>/LostTargetCalc' */
  B_DycHistCalc_Noa_Nofusion_T sf_DycHistCalc;/* '<S179>/DycHistCalc' */
  B_DycCutIn_Noa_Nofusion_T sf_DycCutIn;/* '<S179>/DycCutIn' */
  B_Dyc_Noa_Nofusion_T sf_Dyc;         /* '<S179>/Dyc' */
  B_ACC_DisplayBar_Noa_Nofusion_T sf_ACC_DisplayBar;/* '<S179>/ACC_DisplayBar' */
  B_MATLABFunction5_Noa_Nofusion_T sf_MATLABFunction3;/* '<S167>/MATLAB Function3' */
  B_MATLABFunction5_Noa_Nofusion_T sf_MATLABFunction6;/* '<S22>/MATLAB Function6' */
  B_MATLABFunction5_Noa_Nofusion_T sf_MATLABFunction5;/* '<S22>/MATLAB Function5' */
  B_CoreSubsys_Noa_Nofusion_cauaoh_T CoreSubsys_pnaevv[4];/* '<S132>/For Each Subsystem3' */
  B_CoreSubsys_Noa_Nofusion_cauao_T CoreSubsys_pnaev[2];/* '<S132>/For Each Subsystem2' */
  B_CoreSubsys_Noa_Nofusion_caua_T CoreSubsys_pnae[2];/* '<S132>/For Each Subsystem1' */
  B_CheckSum8Bclc2_Noa_Nofusion_T sf_CheckSum8Bclc4;/* '<S6>/CheckSum8Bclc4' */
  B_CheckSum8Bclc2_Noa_Nofusion_T sf_CheckSum8Bclc2;/* '<S6>/CheckSum8Bclc2' */
  B_CoreSubsys_Noa_Nofusion_cau_T CoreSubsys_pna[8];/* '<S9>/For Each Subsystem4' */
  B_CoreSubsys_Noa_Nofusion_ca_T CoreSubsys_pn[4];/* '<S9>/For Each Subsystem3' */
  B_CoreSubsys_Noa_Nofusion_c_T CoreSubsys_p[2];/* '<S9>/For Each Subsystem2' */
  B_CoreSubsys_Noa_Nofusion_T CoreSubsys[2];/* '<S9>/For Each Subsystem1' */
  B_CL_Noa_Nofusion_T sf_RSDS_R;       /* '<S42>/RSDS_R' */
  B_CL_Noa_Nofusion_T sf_RSDS_L;       /* '<S40>/RSDS_L' */
  B_CL_Noa_Nofusion_T sf_CR;           /* '<S32>/CR' */
  B_CL_Noa_Nofusion_T sf_CL;           /* '<S30>/CL' */
} B_Noa_Nofusion_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  AEB_DVR_INFO_BUS UnitDelay3_2_DSTATE;/* '<Root>/Unit Delay3' */
  LSM_HWA_BUS UnitDelay6_3_DSTATE;     /* '<Root>/Unit Delay6' */
  LSM_HWA_BUS UnitDelay4_3_DSTATE;     /* '<Root>/Unit Delay4' */
  AEB_IPHUT_INFO_BUS UnitDelay3_3_DSTATE;/* '<Root>/Unit Delay3' */
  LSM_ESS_BUS UnitDelay6_4_DSTATE;     /* '<Root>/Unit Delay6' */
  LSM_ESS_BUS UnitDelay4_4_DSTATE;     /* '<Root>/Unit Delay4' */
  VSM_HMI_BUS UnitDelay_3_DSTATE;      /* '<Root>/Unit Delay' */
  VSM_HMI_BUS UnitDelay4_3_DSTATE_h;   /* '<S17>/Unit Delay4' */
  VSM_CTRL_LINE_BUS UnitDelay_4_DSTATE;/* '<Root>/Unit Delay' */
  VSM_CTRL_LINE_BUS UnitDelay4_4_DSTATE_m;/* '<S17>/Unit Delay4' */
  VSM_DATACLCT_INFO_BUS UnitDelay_8_DSTATE;/* '<Root>/Unit Delay' */
  VSM_DATACLCT_INFO_BUS UnitDelay4_8_DSTATE;/* '<S17>/Unit Delay4' */
  VSM_LAT_CTRL_BUS UnitDelay_2_DSTATE; /* '<Root>/Unit Delay' */
  VSM_LAT_CTRL_BUS UnitDelay4_2_DSTATE;/* '<S17>/Unit Delay4' */
  PLAN_ACCPLAN_BUS UnitDelay5_3_DSTATE;/* '<Root>/Unit Delay5' */
  PLAN_ACCPLAN_BUS UnitDelay3_3_DSTATE_f;/* '<S17>/Unit Delay3' */
  LSM_TJA_ICA_BUS UnitDelay6_1_DSTATE; /* '<Root>/Unit Delay6' */
  LSM_TJA_ICA_BUS UnitDelay4_1_DSTATE; /* '<Root>/Unit Delay4' */
  LSM_LCK_BUS UnitDelay6_2_DSTATE;     /* '<Root>/Unit Delay6' */
  LSM_LCK_BUS UnitDelay4_2_DSTATE_f;   /* '<Root>/Unit Delay4' */
  VSM_LON_CTRL_BUS UnitDelay_1_DSTATE; /* '<Root>/Unit Delay' */
  VSM_LON_CTRL_BUS UnitDelay4_1_DSTATE_m;/* '<S17>/Unit Delay4' */
  AEB_BRK_INFO_BUS UnitDelay3_1_DSTATE;/* '<Root>/Unit Delay3' */
  LONC_CTRL_OUT_BUS UnitDelay2_1_DSTATE;/* '<Root>/Unit Delay2' */
  VSM_UOM_LC_BUS UnitDelay_7_DSTATE;   /* '<Root>/Unit Delay' */
  VSM_UOM_LC_BUS UnitDelay4_7_DSTATE;  /* '<S17>/Unit Delay4' */
  PLAN_DPC_ESS_BUS UnitDelay5_1_DSTATE;/* '<Root>/Unit Delay5' */
  PLAN_DPC_ESS_BUS UnitDelay3_1_DSTATE_h;/* '<S17>/Unit Delay3' */
  PLAN_ALC_DECS_BUS UnitDelay5_2_DSTATE;/* '<Root>/Unit Delay5' */
  PLAN_ALC_DECS_BUS UnitDelay3_2_DSTATE_o;/* '<S17>/Unit Delay3' */
  VSM_TSR_BUS UnitDelay_5_DSTATE;      /* '<Root>/Unit Delay' */
  VSM_TSR_BUS UnitDelay4_5_DSTATE;     /* '<S17>/Unit Delay4' */
  VSM_TSR_REMAIN_BUS UnitDelay_6_DSTATE;/* '<Root>/Unit Delay' */
  VSM_TSR_REMAIN_BUS UnitDelay4_6_DSTATE;/* '<S17>/Unit Delay4' */
  real_T UnitDelay_DSTATE;             /* '<S221>/Unit Delay' */
  real_T UnitDelay_DSTATE_c;           /* '<S181>/Unit Delay' */
  real_T UnitDelay_DSTATE_p;           /* '<S89>/Unit Delay' */
  real_T UnitDelay_DSTATE_b;           /* '<S90>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S92>/Unit Delay' */
  real_T UnitDelay_DSTATE_c0;          /* '<S91>/Unit Delay' */
  real_T UnitDelay_DSTATE_h;           /* '<S97>/Unit Delay' */
  LONC_Hybrid_CTRL_OUT_BUS UnitDelay2_2_DSTATE;/* '<Root>/Unit Delay2' */
  void *DataInportSFcn_PWORK;          /* '<S31>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_c;        /* '<S33>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_g;        /* '<S41>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_f;        /* '<S43>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_gy;       /* '<S27>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_e[59];    /* '<S18>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_o[182];   /* '<S29>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_d[42];    /* '<S16>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_k[5];     /* '<S258>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_k2[5];    /* '<S162>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_kt[102];  /* '<S72>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_b[102];   /* '<S63>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_gr[102];  /* '<S54>/Data Inport S-Fcn' */
  void *DataInportSFcn_PWORK_i[102];   /* '<S45>/Data Inport S-Fcn' */
  real32_T UnitDelay1_4_DSTATE;        /* '<Root>/Unit Delay1' */
  real32_T UnitDelay1_1_DSTATE;        /* '<Root>/Unit Delay1' */
  real32_T UnitDelay2_3_DSTATE;        /* '<Root>/Unit Delay2' */
  real32_T TappedDelay_X[4];           /* '<S179>/Tapped Delay' */
  real32_T TappedDelay_X_e[4];         /* '<S220>/Tapped Delay' */
  real32_T UnitDelay1_DSTATE;          /* '<S17>/Unit Delay1' */
  uint32_T DelayInput1_DSTATE;         /* '<S34>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_c;       /* '<S35>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_i;       /* '<S36>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_k;       /* '<S37>/Delay Input1' */
  uint32_T UnitDelay6_5_DSTATE;        /* '<Root>/Unit Delay6' */
  uint32_T UnitDelay4_5_DSTATE_g;      /* '<Root>/Unit Delay4' */
  real32_T Memory8_PreviousInput;      /* '<S179>/Memory8' */
  real32_T Memory1_PreviousInput[15];  /* '<S179>/Memory1' */
  real32_T Memory4_PreviousInput[15];  /* '<S179>/Memory4' */
  real32_T Memory14_PreviousInput[15]; /* '<S179>/Memory14' */
  real32_T Memory13_PreviousInput[15]; /* '<S179>/Memory13' */
  real32_T Memory6_PreviousInput[15];  /* '<S179>/Memory6' */
  real32_T Memory15_PreviousInput;     /* '<S179>/Memory15' */
  real32_T Memory16_PreviousInput;     /* '<S179>/Memory16' */
  real32_T Memory18_PreviousInput;     /* '<S179>/Memory18' */
  real32_T Memory20_PreviousInput;     /* '<S179>/Memory20' */
  real32_T Memory21_PreviousInput;     /* '<S179>/Memory21' */
  real32_T Memory19_PreviousInput;     /* '<S179>/Memory19' */
  real32_T Memory28_PreviousInput;     /* '<S179>/Memory28' */
  real32_T Memory22_PreviousInput;     /* '<S179>/Memory22' */
  real32_T Memory25_PreviousInput;     /* '<S179>/Memory25' */
  real32_T Memory27_PreviousInput;     /* '<S179>/Memory27' */
  real32_T Memory3_PreviousInput;      /* '<S179>/Memory3' */
  real32_T Memory32_PreviousInput[24]; /* '<S190>/Memory32' */
  real32_T Memory31_PreviousInput[24]; /* '<S190>/Memory31' */
  real32_T Memory8_PreviousInput_a;    /* '<S220>/Memory8' */
  real32_T Memory1_PreviousInput_d[15];/* '<S220>/Memory1' */
  real32_T Memory4_PreviousInput_j[15];/* '<S220>/Memory4' */
  real32_T Memory14_PreviousInput_o[15];/* '<S220>/Memory14' */
  real32_T Memory13_PreviousInput_c[15];/* '<S220>/Memory13' */
  real32_T Memory6_PreviousInput_m[15];/* '<S220>/Memory6' */
  real32_T Memory15_PreviousInput_n;   /* '<S220>/Memory15' */
  real32_T Memory16_PreviousInput_i;   /* '<S220>/Memory16' */
  real32_T Memory18_PreviousInput_m;   /* '<S220>/Memory18' */
  real32_T Memory20_PreviousInput_n;   /* '<S220>/Memory20' */
  real32_T Memory21_PreviousInput_g;   /* '<S220>/Memory21' */
  real32_T Memory19_PreviousInput_f;   /* '<S220>/Memory19' */
  real32_T Memory28_PreviousInput_e;   /* '<S220>/Memory28' */
  real32_T Memory22_PreviousInput_a;   /* '<S220>/Memory22' */
  real32_T Memory25_PreviousInput_o;   /* '<S220>/Memory25' */
  real32_T Memory27_PreviousInput_h;   /* '<S220>/Memory27' */
  real32_T Memory3_PreviousInput_p;    /* '<S220>/Memory3' */
  real32_T Memory32_PreviousInput_b[24];/* '<S230>/Memory32' */
  real32_T Memory31_PreviousInput_m[24];/* '<S230>/Memory31' */
  real32_T Memory2_PreviousInput[15];  /* '<S220>/Memory2' */
  real32_T Memory2_PreviousInput_e[15];/* '<S179>/Memory2' */
  real32_T Sum_DWORK1;                 /* '<S87>/Sum' */
  uint32_T FixPtSum1_DWORK1;           /* '<S216>/FixPt Sum1' */
  int_T CANFDPack_ModeSignalID;        /* '<S169>/CAN FD Pack' */
  int_T CANFDPack1_ModeSignalID;       /* '<S6>/CAN FD Pack1' */
  int_T CANFDPack2_ModeSignalID;       /* '<S6>/CAN FD Pack2' */
  int_T CANFDPack3_ModeSignalID;       /* '<S6>/CAN FD Pack3' */
  int_T CANFDPack4_ModeSignalID;       /* '<S6>/CAN FD Pack4' */
  int_T CANFDPack5_ModeSignalID;       /* '<S6>/CAN FD Pack5' */
  int_T CANFDPack6_ModeSignalID;       /* '<S6>/CAN FD Pack6' */
  int_T CANFDPack7_ModeSignalID;       /* '<S6>/CAN FD Pack7' */
  int_T CANFDPack1_ModeSignalID_a;     /* '<S87>/CAN FD Pack1' */
  uint16_T UnitDelay_DSTATE_ci;        /* '<S149>/Unit Delay' */
  uint16_T UnitDelay_DSTATE_m;         /* '<S148>/Unit Delay' */
  uint8_T UnitDelay5_12_DSTATE;        /* '<Root>/Unit Delay5' */
  uint8_T UnitDelay5_7_DSTATE;         /* '<Root>/Unit Delay5' */
  uint8_T UnitDelay5_6_DSTATE;         /* '<Root>/Unit Delay5' */
  uint8_T UnitDelay5_5_DSTATE;         /* '<Root>/Unit Delay5' */
  uint8_T UnitDelay1_3_DSTATE;         /* '<Root>/Unit Delay1' */
  uint8_T UnitDelay1_2_DSTATE;         /* '<Root>/Unit Delay1' */
  uint8_T UnitDelay_9_DSTATE;          /* '<Root>/Unit Delay' */
  uint8_T UnitDelay6_7_DSTATE;         /* '<Root>/Unit Delay6' */
  uint8_T UnitDelay6_6_DSTATE;         /* '<Root>/Unit Delay6' */
  uint8_T UnitDelay4_6_DSTATE_g;       /* '<Root>/Unit Delay4' */
  uint8_T UnitDelay4_7_DSTATE_j;       /* '<Root>/Unit Delay4' */
  uint8_T UnitDelay1_DSTATE_d[20];     /* '<S213>/Unit Delay1' */
  uint8_T UnitDelay1_DSTATE_i[20];     /* '<S252>/Unit Delay1' */
  uint8_T UnitDelay2_DSTATE;           /* '<S17>/Unit Delay2' */
  uint8_T Output_DSTATE;               /* '<S121>/Output' */
  uint8_T UnitDelay3_12_DSTATE;        /* '<S17>/Unit Delay3' */
  uint8_T UnitDelay3_5_DSTATE;         /* '<S17>/Unit Delay3' */
  uint8_T UnitDelay3_6_DSTATE;         /* '<S17>/Unit Delay3' */
  uint8_T UnitDelay3_7_DSTATE;         /* '<S17>/Unit Delay3' */
  uint8_T UnitDelay4_9_DSTATE;         /* '<S17>/Unit Delay4' */
  uint8_T UnitDelay_DSTATE_b1;         /* '<S143>/Unit Delay' */
  uint8_T UnitDelay_DSTATE_k;          /* '<S98>/Unit Delay' */
  uint8_T Output_DSTATE_e;             /* '<S85>/Output' */
  uint8_T UnitDelay1_DSTATE_dh[6];     /* '<S42>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_l[6];       /* '<S42>/Unit Delay' */
  uint8_T UnitDelay1_DSTATE_p[6];      /* '<S40>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_j[6];       /* '<S40>/Unit Delay' */
  uint8_T UnitDelay1_DSTATE_j[6];      /* '<S32>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_kz[6];      /* '<S32>/Unit Delay' */
  uint8_T UnitDelay1_DSTATE_b[6];      /* '<S30>/Unit Delay1' */
  uint8_T UnitDelay_DSTATE_f[6];       /* '<S30>/Unit Delay' */
  boolean_T UnitDelay5_11_DSTATE;      /* '<Root>/Unit Delay5' */
  boolean_T UnitDelay5_10_DSTATE;      /* '<Root>/Unit Delay5' */
  boolean_T UnitDelay5_9_DSTATE;       /* '<Root>/Unit Delay5' */
  boolean_T UnitDelay5_8_DSTATE;       /* '<Root>/Unit Delay5' */
  boolean_T UnitDelay5_4_DSTATE;       /* '<Root>/Unit Delay5' */
  boolean_T UnitDelay_DSTATE_g;        /* '<S190>/Unit Delay' */
  boolean_T UnitDelay3_10_DSTATE;      /* '<S17>/Unit Delay3' */
  boolean_T UnitDelay3_11_DSTATE;      /* '<S17>/Unit Delay3' */
  boolean_T UnitDelay3_4_DSTATE;       /* '<S17>/Unit Delay3' */
  boolean_T UnitDelay3_8_DSTATE;       /* '<S17>/Unit Delay3' */
  boolean_T UnitDelay3_9_DSTATE;       /* '<S17>/Unit Delay3' */
  boolean_T DelayInput1_DSTATE_n;      /* '<S158>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ch;     /* '<S154>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k2;     /* '<S153>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_j;      /* '<S159>/Delay Input1' */
  uint8_T Output_DSTATE_p;             /* '<S173>/Output' */
  uint8_T Memory17_PreviousInput;      /* '<S179>/Memory17' */
  uint8_T Memory30_PreviousInput;      /* '<S179>/Memory30' */
  uint8_T Memory12_PreviousInput;      /* '<S179>/Memory12' */
  uint8_T Memory33_PreviousInput;      /* '<S190>/Memory33' */
  uint8_T Memory17_PreviousInput_d;    /* '<S220>/Memory17' */
  uint8_T Memory30_PreviousInput_a;    /* '<S220>/Memory30' */
  uint8_T Memory12_PreviousInput_m;    /* '<S220>/Memory12' */
  uint8_T Memory33_PreviousInput_e;    /* '<S230>/Memory33' */
  uint8_T Memory10_PreviousInput;      /* '<S220>/Memory10' */
  uint8_T Memory10_PreviousInput_i;    /* '<S179>/Memory10' */
  uint8_T is_active_c25_Noa_Nofusion;  /* '<S143>/Chart2' */
  uint8_T is_c25_Noa_Nofusion;         /* '<S143>/Chart2' */
  uint8_T is_active_c17_Noa_Nofusion;  /* '<S143>/Chart1' */
  uint8_T is_c17_Noa_Nofusion;         /* '<S143>/Chart1' */
  boolean_T Memory26_PreviousInput;    /* '<S179>/Memory26' */
  boolean_T Memory24_PreviousInput;    /* '<S179>/Memory24' */
  boolean_T Memory26_PreviousInput_d;  /* '<S220>/Memory26' */
  boolean_T Memory24_PreviousInput_i;  /* '<S220>/Memory24' */
  DW_Trajectory_Noa_Nofusion_T Trajectory_o;/* '<S220>/Trajectory' */
  DW_Trajectory_Noa_Nofusion_T Trajectory;/* '<S179>/Trajectory' */
} DW_Noa_Nofusion_T;

/* Invariant block signals (default storage) */
typedef struct {
  const CAL_VSM_CONFIG_BUS CAL_VSM_CONFIG;/* '<S4>/Bus Assignment' */
  const real_T DataTypeConversion2;    /* '<S87>/Data Type Conversion2' */
  const CAL_AHBC_CONFIG_BUS CAL_AHBC_CONFIG;/* '<S4>/Bus Assignment1' */
  const uint32_T Gain1;                /* '<S87>/Gain1' */
  const real32_T ACCTgtObjObstcl;      /* '<S172>/Data Type Conversion34' */
  const real32_T ACCTgtObjAy;          /* '<S172>/Data Type Conversion35' */
  const real32_T ACCTgtObjObstcl_o;    /* '<S174>/Data Type Conversion34' */
  const real32_T ACCTgtObjAy_n;        /* '<S174>/Data Type Conversion35' */
  const real32_T P0HeadingAngle;       /* '<S174>/Data Type Conversion39' */
  const real32_T Object_YawAngle[9];   /* '<S176>/Data Type Conversion10' */
  const real32_T Object_VY[9];         /* '<S176>/Data Type Conversion13' */
  const real32_T Object_AX[9];         /* '<S176>/Data Type Conversion14' */
  const real32_T Object_AY[9];         /* '<S176>/Data Type Conversion15' */
  const real32_T Object_Std_Length[9]; /* '<S176>/Data Type Conversion16' */
  const real32_T Object_Std_Width[9];  /* '<S176>/Data Type Conversion17' */
  const real32_T Object_Std_AX[9];     /* '<S176>/Data Type Conversion18' */
  const real32_T Object_Std_AY[9];     /* '<S176>/Data Type Conversion19' */
  const real32_T Object_Std_DX[9];     /* '<S176>/Data Type Conversion20' */
  const real32_T Object_Std_DY[9];     /* '<S176>/Data Type Conversion21' */
  const real32_T Object_Std_VX[9];     /* '<S176>/Data Type Conversion22' */
  const real32_T Object_Std_VY[9];     /* '<S176>/Data Type Conversion23' */
  const real32_T CurrentLane_Prob[9];  /* '<S176>/Data Type Conversion24' */
  const real32_T LeftLane_Prob[9];     /* '<S176>/Data Type Conversion25' */
  const real32_T RightLane_Prob[9];    /* '<S176>/Data Type Conversion26' */
  const real32_T Object_Std_HeadingAngle[9];/* '<S176>/Data Type Conversion28' */
  const real32_T Object_Type_Prob[9];  /* '<S176>/Data Type Conversion29' */
  const real32_T Object_ExistProb[9];  /* '<S176>/Data Type Conversion30' */
  const real32_T Object_ObstacleProb[9];/* '<S176>/Data Type Conversion31' */
  const real32_T Object_Age[9];        /* '<S176>/Data Type Conversion32' */
  const real32_T Object_Width[9];      /* '<S176>/Data Type Conversion4' */
  const real32_T Object_Length[9];     /* '<S176>/Data Type Conversion7' */
  const real32_T Object_Hight[9];      /* '<S176>/Data Type Conversion8' */
  const real32_T Object_HeadingAngle[9];/* '<S176>/Data Type Conversion9' */
  const real32_T TmpSignalConversionAtPLANInport40[10];
  const real32_T TmpSignalConversionAtPLANInport41[10];
  const real32_T TmpSignalConversionAtPLANInport43[10];
  const real32_T TmpSignalConversionAtPLANInport44[10];
  const real32_T Gain;                 /* '<S87>/Gain' */
  const real32_T RoundingFunction;     /* '<S87>/Rounding Function' */
  const uint16_T DataTypeConversion;   /* '<S87>/Data Type Conversion' */
  const uint16_T DataTypeConversion3;  /* '<S87>/Data Type Conversion3' */
  const uint8_T Switch;                /* '<S20>/Switch' */
  const uint8_T Switch1;               /* '<S20>/Switch1' */
  const uint8_T DataTypeConversion16;  /* '<S22>/Data Type Conversion16' */
  const uint8_T DataTypeConversion18;  /* '<S22>/Data Type Conversion18' */
  const uint8_T DataTypeConversion20;  /* '<S22>/Data Type Conversion20' */
  const uint8_T DataTypeConversion21;  /* '<S22>/Data Type Conversion21' */
  const uint8_T fu_typeP0;             /* '<S172>/Data Type Conversion29' */
  const uint8_T ObjMovingStateP0;      /* '<S172>/Data Type Conversion30' */
  const uint8_T Object_Orientation;    /* '<S172>/Data Type Conversion31' */
  const uint8_T ObjTypeP0;             /* '<S172>/Data Type Conversion32' */
  const uint8_T fu_typeP0_p;           /* '<S174>/Data Type Conversion29' */
  const uint8_T ObjMovingStateP0_l;    /* '<S174>/Data Type Conversion30' */
  const uint8_T Object_Orientation_p;  /* '<S174>/Data Type Conversion31' */
  const uint8_T ObjTypeP0_k;           /* '<S174>/Data Type Conversion32' */
  const uint8_T Object_MovingState[9]; /* '<S176>/Data Type Conversion11' */
  const uint8_T Object_Orientation_l[9];/* '<S176>/Data Type Conversion12' */
  const uint8_T ObjectIn_Lane[9];      /* '<S176>/Data Type Conversion27' */
  const uint8_T cutIn[9];              /* '<S176>/Data Type Conversion33' */
  const uint8_T Object_Fus_Type[9];    /* '<S176>/Data Type Conversion6' */
  const int8_T DataTypeConversion_l;   /* '<S88>/Data Type Conversion' */
} ConstB_Noa_Nofusion_T;

/* Real-time Model Data Structure */
struct tag_RTM_Noa_Nofusion_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint32_T TID[3];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern B_Noa_Nofusion_T Noa_Nofusion_B;

/* Block states (default storage) */
extern DW_Noa_Nofusion_T Noa_Nofusion_DW;

/* External data declarations for dependent source files */
extern const real_T Noa_Nofusion_RGND; /* real_T ground */
extern const real32_T Noa_Nofusion_R32GND;/* real32_T ground */
extern const uint8_T Noa_Nofusion_U8GND;/* uint8_T ground */
extern const uint16_T Noa_Nofusion_U16GND;/* uint16_T ground */
extern const TOS_LC_BUS Noa_Nofusion_rtZTOS_LC_BUS;/* TOS_LC_BUS ground */
extern const IDC_L3_FD1_MSG_BUS Noa_Nofusion_rtZIDC_L3_FD1_MSG_BUS;/* IDC_L3_FD1_MSG_BUS ground */
extern const ACC_FD1_MSG_BUS Noa_Nofusion_rtZACC_FD1_MSG_BUS;/* ACC_FD1_MSG_BUS ground */
extern const VCAN_HUT_MSG_BUS Noa_Nofusion_rtZVCAN_HUT_MSG_BUS;/* VCAN_HUT_MSG_BUS ground */
extern const VSM_LON_CTRL_BUS Noa_Nofusion_rtZVSM_LON_CTRL_BUS;/* VSM_LON_CTRL_BUS ground */
extern const VSM_HMI_BUS Noa_Nofusion_rtZVSM_HMI_BUS;/* VSM_HMI_BUS ground */
extern const DMON_SENS_ERR_BUS Noa_Nofusion_rtZDMON_SENS_ERR_BUS;/* DMON_SENS_ERR_BUS ground */
extern const TOS_ACCP1_BUS Noa_Nofusion_rtZTOS_ACCP1_BUS;/* TOS_ACCP1_BUS ground */
extern const TOS_ACCP4_BUS Noa_Nofusion_rtZTOS_ACCP4_BUS;/* TOS_ACCP4_BUS ground */
extern const TOS_ACCP5_BUS Noa_Nofusion_rtZTOS_ACCP5_BUS;/* TOS_ACCP5_BUS ground */
extern const EHRV2_ROAD_INFO_BUS Noa_Nofusion_rtZEHRV2_ROAD_INFO_BUS;/* EHRV2_ROAD_INFO_BUS ground */
extern const RFM_ROAD_BUS Noa_Nofusion_rtZRFM_ROAD_BUS;/* RFM_ROAD_BUS ground */
extern const RFM_INTERSEC_ALERT_BUS Noa_Nofusion_rtZRFM_INTERSEC_ALERT_BUS;/* RFM_INTERSEC_ALERT_BUS ground */
extern const EHRV2_HDR_BUS Noa_Nofusion_rtZEHRV2_HDR_BUS;/* EHRV2_HDR_BUS ground */
extern const AEB_BRK_INFO_BUS Noa_Nofusion_rtZAEB_BRK_INFO_BUS;/* AEB_BRK_INFO_BUS ground */
extern const AEB_IPHUT_INFO_BUS Noa_Nofusion_rtZAEB_IPHUT_INFO_BUS;/* AEB_IPHUT_INFO_BUS ground */
extern const LONC_CTRL_OUT_BUS Noa_Nofusion_rtZLONC_CTRL_OUT_BUS;/* LONC_CTRL_OUT_BUS ground */
extern const IFC_FD1_MSG_BUS Noa_Nofusion_rtZIFC_FD1_MSG_BUS;/* IFC_FD1_MSG_BUS ground */
extern const VCAN_CSA_MSG_BUS Noa_Nofusion_rtZVCAN_CSA_MSG_BUS;/* VCAN_CSA_MSG_BUS ground */
extern const VCAN_ABM_MSG_BUS Noa_Nofusion_rtZVCAN_ABM_MSG_BUS;/* VCAN_ABM_MSG_BUS ground */
extern const VCAN_ESP_MSG_BUS Noa_Nofusion_rtZVCAN_ESP_MSG_BUS;/* VCAN_ESP_MSG_BUS ground */
extern const LATC_VCAN_EPS_BUS Noa_Nofusion_rtZLATC_VCAN_EPS_BUS;/* LATC_VCAN_EPS_BUS ground */
extern const VCAN_DCT_MSG_BUS Noa_Nofusion_rtZVCAN_DCT_MSG_BUS;/* VCAN_DCT_MSG_BUS ground */
extern const VCAN_HCU_MSG_BUS Noa_Nofusion_rtZVCAN_HCU_MSG_BUS;/* VCAN_HCU_MSG_BUS ground */
extern const VSM_LAT_CTRL_BUS Noa_Nofusion_rtZVSM_LAT_CTRL_BUS;/* VSM_LAT_CTRL_BUS ground */
extern const VCAN_ECM_MSG_BUS Noa_Nofusion_rtZVCAN_ECM_MSG_BUS;/* VCAN_ECM_MSG_BUS ground */
extern const PLAN_ACCPLAN_BUS Noa_Nofusion_rtZPLAN_ACCPLAN_BUS;/* PLAN_ACCPLAN_BUS ground */
extern const LONC_Hybrid_CTRL_OUT_BUS Noa_Nofusion_rtZLONC_Hybrid_CTRL_OUT_BUS;/* LONC_Hybrid_CTRL_OUT_BUS ground */
extern const EQ4_LA_HDR_BUS Noa_Nofusion_rtZEQ4_LA_HDR_BUS;/* EQ4_LA_HDR_BUS ground */
extern const EQ4_LA_ELEM_BUS Noa_Nofusion_rtZEQ4_LA_ELEM_BUS;/* EQ4_LA_ELEM_BUS ground */
extern const EQ4_LA_BUS Noa_Nofusion_rtZEQ4_LA_BUS;/* EQ4_LA_BUS ground */
extern const EQ4_LH_HDR_BUS Noa_Nofusion_rtZEQ4_LH_HDR_BUS;/* EQ4_LH_HDR_BUS ground */
extern const EQ4_LH_ELEM_BUS Noa_Nofusion_rtZEQ4_LH_ELEM_BUS;/* EQ4_LH_ELEM_BUS ground */
extern const EQ4_LH_BUS Noa_Nofusion_rtZEQ4_LH_BUS;/* EQ4_LH_BUS ground */
extern const EQ4_LRE_HDR_BUS Noa_Nofusion_rtZEQ4_LRE_HDR_BUS;/* EQ4_LRE_HDR_BUS ground */
extern const EQ4_LRE_ELEM_BUS Noa_Nofusion_rtZEQ4_LRE_ELEM_BUS;/* EQ4_LRE_ELEM_BUS ground */
extern const EQ4_LRE_BUS Noa_Nofusion_rtZEQ4_LRE_BUS;/* EQ4_LRE_BUS ground */
extern const EQ4_LAP_HDR_BUS Noa_Nofusion_rtZEQ4_LAP_HDR_BUS;/* EQ4_LAP_HDR_BUS ground */
extern const EQ4_LAP_ELEM_BUS Noa_Nofusion_rtZEQ4_LAP_ELEM_BUS;/* EQ4_LAP_ELEM_BUS ground */
extern const EQ4_LAP_BUS Noa_Nofusion_rtZEQ4_LAP_BUS;/* EQ4_LAP_BUS ground */
extern const VCAN_BCM_MSG_BUS Noa_Nofusion_rtZVCAN_BCM_MSG_BUS;/* VCAN_BCM_MSG_BUS ground */
extern const VCAN_EPS_MSG_BUS Noa_Nofusion_rtZVCAN_EPS_MSG_BUS;/* VCAN_EPS_MSG_BUS ground */
extern const VCAN_PEPS_MSG_BUS Noa_Nofusion_rtZVCAN_PEPS_MSG_BUS;/* VCAN_PEPS_MSG_BUS ground */
extern const VCAN_HAP_MSG_BUS Noa_Nofusion_rtZVCAN_HAP_MSG_BUS;/* VCAN_HAP_MSG_BUS ground */
extern const VCAN_CR_MSG_BUS Noa_Nofusion_rtZVCAN_CR_MSG_BUS;/* VCAN_CR_MSG_BUS ground */
extern const LSM_HWA_BUS Noa_Nofusion_rtZLSM_HWA_BUS;/* LSM_HWA_BUS ground */
extern const LSM_ESS_BUS Noa_Nofusion_rtZLSM_ESS_BUS;/* LSM_ESS_BUS ground */
extern const VSM_UOM_LC_BUS Noa_Nofusion_rtZVSM_UOM_LC_BUS;/* VSM_UOM_LC_BUS ground */
extern const PLAN_DPC_ESS_BUS Noa_Nofusion_rtZPLAN_DPC_ESS_BUS;/* PLAN_DPC_ESS_BUS ground */
extern const PLAN_ALC_DECS_BUS Noa_Nofusion_rtZPLAN_ALC_DECS_BUS;/* PLAN_ALC_DECS_BUS ground */
extern const VCAN_AC_MSG_BUS Noa_Nofusion_rtZVCAN_AC_MSG_BUS;/* VCAN_AC_MSG_BUS ground */
extern const VCAN_IP_MSG_BUS Noa_Nofusion_rtZVCAN_IP_MSG_BUS;/* VCAN_IP_MSG_BUS ground */
extern const VCAN_HC_MSG_BUS Noa_Nofusion_rtZVCAN_HC_MSG_BUS;/* VCAN_HC_MSG_BUS ground */
extern const VCAN_PBOX_MSG_BUS Noa_Nofusion_rtZVCAN_PBOX_MSG_BUS;/* VCAN_PBOX_MSG_BUS ground */
extern const LSM_TJA_ICA_BUS Noa_Nofusion_rtZLSM_TJA_ICA_BUS;/* LSM_TJA_ICA_BUS ground */
extern const LSM_LCK_BUS Noa_Nofusion_rtZLSM_LCK_BUS;/* LSM_LCK_BUS ground */
extern const DFIM_VSM_STS_BUS Noa_Nofusion_rtZDFIM_VSM_STS_BUS;/* DFIM_VSM_STS_BUS ground */
extern const TOS_AEB_LONOBJ_BUS Noa_Nofusion_rtZTOS_AEB_LONOBJ_BUS;/* TOS_AEB_LONOBJ_BUS ground */
extern const TOS_ELK_BUS Noa_Nofusion_rtZTOS_ELK_BUS;/* TOS_ELK_BUS ground */
extern const VSM_TSR_INIT_BUS Noa_Nofusion_rtZVSM_TSR_INIT_BUS;/* VSM_TSR_INIT_BUS ground */
extern const VSM_CTRL_LINE_BUS Noa_Nofusion_rtZVSM_CTRL_LINE_BUS;/* VSM_CTRL_LINE_BUS ground */
extern const VSM_TSR_BUS Noa_Nofusion_rtZVSM_TSR_BUS;/* VSM_TSR_BUS ground */
extern const VSM_TSR_REMAIN_BUS Noa_Nofusion_rtZVSM_TSR_REMAIN_BUS;/* VSM_TSR_REMAIN_BUS ground */
extern const VSM_DATACLCT_INFO_BUS Noa_Nofusion_rtZVSM_DATACLCT_INFO_BUS;/* VSM_DATACLCT_INFO_BUS ground */
extern const TOS_AEB_LATOBJ_BUS Noa_Nofusion_rtZTOS_AEB_LATOBJ_BUS;/* TOS_AEB_LATOBJ_BUS ground */
extern const TOS_AEB_JAOBJ_BUS Noa_Nofusion_rtZTOS_AEB_JAOBJ_BUS;/* TOS_AEB_JAOBJ_BUS ground */
extern const SPI2SOC_VISIONS_BUS Noa_Nofusion_rtZSPI2SOC_VISIONS_BUS;/* SPI2SOC_VISIONS_BUS ground */
extern const AEB_DVR_INFO_BUS Noa_Nofusion_rtZAEB_DVR_INFO_BUS;/* AEB_DVR_INFO_BUS ground */
extern const ConstB_Noa_Nofusion_T Noa_Nofusion_ConstB;/* constant block i/o */

/* Model block global parameters (default storage) */
extern real_T rtP_P_PLAN_ALC_OverTkCutOutDyRWFactor;
                                  /* Variable: P_PLAN_ALC_OverTkCutOutDyRWFactor
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real_T rtP_P_PLAN_ALC_PreCurvatureFactor;
                                      /* Variable: P_PLAN_ALC_PreCurvatureFactor
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real_T rtP_P_PLAN_ALC_PreCurvaturePreTime;
                                     /* Variable: P_PLAN_ALC_PreCurvaturePreTime
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real_T rtP_P_VSM_LDW_AccRateOutTime;/* Variable: P_VSM_LDW_AccRateOutTime
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T rtP_P_LongCtrl_ALCAccLimitByDangerXAxis[5];
                                /* Variable: P_LongCtrl_ALCAccLimitByDangerXAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_ALCAccLimitByDangerYAxis[5];
                                /* Variable: P_LongCtrl_ALCAccLimitByDangerYAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_ALaLowerChar[4];/* Variable: P_LongCtrl_ALaLowerChar
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern real32_T rtP_P_LongCtrl_ALaUpperCharEco[15];/* Variable: P_LongCtrl_ALaUpperCharEco
                                                    * Referenced by: '<S17>/PLAN'
                                                    */
extern real32_T rtP_P_LongCtrl_ALaUpperCharNormal[15];
                                      /* Variable: P_LongCtrl_ALaUpperCharNormal
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_ALaUpperCharSport[15];/* Variable: P_LongCtrl_ALaUpperCharSport
                                                      * Referenced by: '<S17>/PLAN'
                                                      */
extern real32_T rtP_P_LongCtrl_ALvAcceleLowerChar[4];
                                      /* Variable: P_LongCtrl_ALvAcceleLowerChar
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_ALvAcceleUpperCharEco[15];
                                   /* Variable: P_LongCtrl_ALvAcceleUpperCharEco
                                    * Referenced by: '<S17>/PLAN'
                                    */
extern real32_T rtP_P_LongCtrl_ALvAcceleUpperCharNormal[15];
                                /* Variable: P_LongCtrl_ALvAcceleUpperCharNormal
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_ALvAcceleUpperCharSport[15];
                                 /* Variable: P_LongCtrl_ALvAcceleUpperCharSport
                                  * Referenced by: '<S17>/PLAN'
                                  */
extern real32_T rtP_P_LongCtrl_AddVelAccelChange;/* Variable: P_LongCtrl_AddVelAccelChange
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_LongCtrl_AddVelAccelThrd;/* Variable: P_LongCtrl_AddVelAccelThrd
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern real32_T rtP_P_LongCtrl_AddVelDistDesThrd;/* Variable: P_LongCtrl_AddVelDistDesThrd
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_LongCtrl_AddVelRefMsThrd;/* Variable: P_LongCtrl_AddVelRefMsThrd
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern real32_T rtP_P_LongCtrl_CCLCIncSetSpdAdd;/* Variable: P_LongCtrl_CCLCIncSetSpdAdd
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
extern real32_T rtP_P_LongCtrl_CCLCIncSetSpdAddCntStartValue;
                           /* Variable: P_LongCtrl_CCLCIncSetSpdAddCntStartValue
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_LongCtrl_CCResumeDelayDeltaVel;
                                   /* Variable: P_LongCtrl_CCResumeDelayDeltaVel
                                    * Referenced by: '<S17>/PLAN'
                                    */
extern real32_T rtP_P_LongCtrl_CCaMinNegAcceleLowerBand;
                                /* Variable: P_LongCtrl_CCaMinNegAcceleLowerBand
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_CCaMinNegAcceleUpperBand;
                                /* Variable: P_LongCtrl_CCaMinNegAcceleUpperBand
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_CCaMinPosAcceleLowerBand;
                                /* Variable: P_LongCtrl_CCaMinPosAcceleLowerBand
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_CCaMinPosAcceleUpperBand;
                                /* Variable: P_LongCtrl_CCaMinPosAcceleUpperBand
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_CCaccelCCNeg2PosJerk;
                                    /* Variable: P_LongCtrl_CCaccelCCNeg2PosJerk
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_CCaccelCCPosJerk;/* Variable: P_LongCtrl_CCaccelCCPosJerk
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
extern real32_T rtP_P_LongCtrl_CCaccelLowerIsLaneChange;
                                /* Variable: P_LongCtrl_CCaccelLowerIsLaneChange
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_CCaccelMaxLCActive;
                                      /* Variable: P_LongCtrl_CCaccelMaxLCActive
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_CCaccelMinECOAL;/* Variable: P_LongCtrl_CCaccelMinECOAL
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern real32_T rtP_P_LongCtrl_CCaccelMinFastDecel;
                                     /* Variable: P_LongCtrl_CCaccelMinFastDecel
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_LongCtrl_CCaccelMinNoFastDecel;
                                   /* Variable: P_LongCtrl_CCaccelMinNoFastDecel
                                    * Referenced by: '<S17>/PLAN'
                                    */
extern real32_T rtP_P_LongCtrl_CCaccelMinNormAL;/* Variable: P_LongCtrl_CCaccelMinNormAL
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
extern real32_T rtP_P_LongCtrl_CCaccelMinSportAL;/* Variable: P_LongCtrl_CCaccelMinSportAL
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_LongCtrl_CCaccelUpperCC;/* Variable: P_LongCtrl_CCaccelUpperCC
                                               * Referenced by: '<S17>/PLAN'
                                               */
extern real32_T rtP_P_LongCtrl_CCaccelUpperCCSafeStop;
                                  /* Variable: P_LongCtrl_CCaccelUpperCCSafeStop
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_CCbECO; /* Variable: P_LongCtrl_CCbECO
                                        * Referenced by: '<S17>/PLAN'
                                        */
extern real32_T rtP_P_LongCtrl_CCbNorm;/* Variable: P_LongCtrl_CCbNorm
                                        * Referenced by: '<S17>/PLAN'
                                        */
extern real32_T rtP_P_LongCtrl_CCbSport;/* Variable: P_LongCtrl_CCbSport
                                         * Referenced by: '<S17>/PLAN'
                                         */
extern real32_T rtP_P_LongCtrl_CCcoefESPSpd2IPSpd1;
                                     /* Variable: P_LongCtrl_CCcoefESPSpd2IPSpd1
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_LongCtrl_CCcoefESPSpd2IPSpd2;
                                     /* Variable: P_LongCtrl_CCcoefESPSpd2IPSpd2
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_LongCtrl_CCdecelCCJerk;/* Variable: P_LongCtrl_CCdecelCCJerk
                                              * Referenced by: '<S17>/PLAN'
                                              */
extern real32_T rtP_P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc;
                          /* Variable: P_LongCtrl_CCdecelCCJerkNegVLCInternalAcc
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_CCfacNegAcceleLowerBand;
                                 /* Variable: P_LongCtrl_CCfacNegAcceleLowerBand
                                  * Referenced by: '<S17>/PLAN'
                                  */
extern real32_T rtP_P_LongCtrl_CCfacNegAcceleUpperBand;
                                 /* Variable: P_LongCtrl_CCfacNegAcceleUpperBand
                                  * Referenced by: '<S17>/PLAN'
                                  */
extern real32_T rtP_P_LongCtrl_CCfacPosAcceleLowerBand;
                                 /* Variable: P_LongCtrl_CCfacPosAcceleLowerBand
                                  * Referenced by: '<S17>/PLAN'
                                  */
extern real32_T rtP_P_LongCtrl_CCfacPosAcceleUpperBand;
                                 /* Variable: P_LongCtrl_CCfacPosAcceleUpperBand
                                  * Referenced by: '<S17>/PLAN'
                                  */
extern real32_T rtP_P_LongCtrl_CCkECO; /* Variable: P_LongCtrl_CCkECO
                                        * Referenced by: '<S17>/PLAN'
                                        */
extern real32_T rtP_P_LongCtrl_CCkNorm;/* Variable: P_LongCtrl_CCkNorm
                                        * Referenced by: '<S17>/PLAN'
                                        */
extern real32_T rtP_P_LongCtrl_CCkSport;/* Variable: P_LongCtrl_CCkSport
                                         * Referenced by: '<S17>/PLAN'
                                         */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimeNeg;/* Variable: P_LongCtrl_CCtAcceleTimeNeg
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimeNegCorrXAxis[2];
                               /* Variable: P_LongCtrl_CCtAcceleTimeNegCorrXAxis
                                * Referenced by: '<S17>/PLAN'
                                */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimeNegCorrYAxis[2];
                               /* Variable: P_LongCtrl_CCtAcceleTimeNegCorrYAxis
                                * Referenced by: '<S17>/PLAN'
                                */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimePos;/* Variable: P_LongCtrl_CCtAcceleTimePos
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimePosCorrXAxis[2];
                               /* Variable: P_LongCtrl_CCtAcceleTimePosCorrXAxis
                                * Referenced by: '<S17>/PLAN'
                                */
extern real32_T rtP_P_LongCtrl_CCtAcceleTimePosCorrYAxis[2];
                               /* Variable: P_LongCtrl_CCtAcceleTimePosCorrYAxis
                                * Referenced by: '<S17>/PLAN'
                                */
extern real32_T rtP_P_LongCtrl_CCtStepVelPlan;/* Variable: P_LongCtrl_CCtStepVelPlan
                                               * Referenced by: '<S17>/PLAN'
                                               */
extern real32_T rtP_P_LongCtrl_CCtTotVelPlan;/* Variable: P_LongCtrl_CCtTotVelPlan
                                              * Referenced by: '<S17>/PLAN'
                                              */
extern real32_T rtP_P_LongCtrl_DangerLevelEnterThrd;
                                    /* Variable: P_LongCtrl_DangerLevelEnterThrd
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_DangerLevelExitThrd;
                                     /* Variable: P_LongCtrl_DangerLevelExitThrd
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_LongCtrl_FollowAccelAddSlopeAssistXAxis[2];
                          /* Variable: P_LongCtrl_FollowAccelAddSlopeAssistXAxis
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowAccelAddSlopeAssistYAxis[2];
                          /* Variable: P_LongCtrl_FollowAccelAddSlopeAssistYAxis
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T
  rtP_P_LongCtrl_FollowAccelCharNegVlcAcc2CoefEnlargeAccelJerkXAxis[2];
      /* Variable: P_LongCtrl_FollowAccelCharNegVlcAcc2CoefEnlargeAccelJerkXAxis
       * Referenced by: '<S17>/PLAN'
       */
extern real32_T rtP_P_LongCtrl_FollowAccelDesThresStartUpAssistEnable;
                  /* Variable: P_LongCtrl_FollowAccelDesThresStartUpAssistEnable
                   * Referenced by: '<S17>/PLAN'
                   */
extern real32_T rtP_P_LongCtrl_FollowAccelJerkNegFollowAccel;
                           /* Variable: P_LongCtrl_FollowAccelJerkNegFollowAccel
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_LongCtrl_FollowAccelSlopeAssistStep;
                              /* Variable: P_LongCtrl_FollowAccelSlopeAssistStep
                               * Referenced by: '<S17>/PLAN'
                               */
extern real32_T rtP_P_LongCtrl_FollowCoefCharCoefEnlargeAccelJerkYAxis[2];
                 /* Variable: P_LongCtrl_FollowCoefCharCoefEnlargeAccelJerkYAxis
                  * Referenced by: '<S17>/PLAN'
                  */
extern real32_T
  rtP_P_LongCtrl_FollowCoefCharDistCoefEnlargeAccelStartUpAssistYAxis[2];
    /* Variable: P_LongCtrl_FollowCoefCharDistCoefEnlargeAccelStartUpAssistYAxis
     * Referenced by: '<S17>/PLAN'
     */
extern real32_T
  rtP_P_LongCtrl_FollowCoefCharVelCoefEnlargeAccelStartUpAssistYAxis[2];
     /* Variable: P_LongCtrl_FollowCoefCharVelCoefEnlargeAccelStartUpAssistYAxis
      * Referenced by: '<S17>/PLAN'
      */
extern real32_T rtP_P_LongCtrl_FollowCoefStartUpAssistFadeOut;
                          /* Variable: P_LongCtrl_FollowCoefStartUpAssistFadeOut
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableTTCThres;
            /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableTTCThres
             * Referenced by: '<S17>/PLAN'
             */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableVelSubjThres;
        /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrEnableVelSubjThres
         * Referenced by: '<S17>/PLAN'
         */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrXAxis[2];
                     /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrXAxis
                      * Referenced by: '<S17>/PLAN'
                      */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrYAxis[2];
                     /* Variable: P_LongCtrl_FollowDecelJerkDiffTTC2GapCorrYAxis
                      * Referenced by: '<S17>/PLAN'
                      */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkForceSlopeXAxis[2];
                          /* Variable: P_LongCtrl_FollowDecelJerkForceSlopeXAxis
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowDecelJerkForceSlopeYAxis[2];
                          /* Variable: P_LongCtrl_FollowDecelJerkForceSlopeYAxis
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowDistDesAddForceStop;
                               /* Variable: P_LongCtrl_FollowDistDesAddForceStop
                                * Referenced by: '<S17>/PLAN'
                                */
extern real32_T rtP_P_LongCtrl_FollowDistDesCompensionVelRelThresMax;
                   /* Variable: P_LongCtrl_FollowDistDesCompensionVelRelThresMax
                    * Referenced by: '<S17>/PLAN'
                    */
extern real32_T rtP_P_LongCtrl_FollowDistDesCompensionVelRelThresMin;
                   /* Variable: P_LongCtrl_FollowDistDesCompensionVelRelThresMin
                    * Referenced by: '<S17>/PLAN'
                    */
extern real32_T rtP_P_LongCtrl_FollowDistDiff2VelSubjThresEnableStop[2];
                   /* Variable: P_LongCtrl_FollowDistDiff2VelSubjThresEnableStop
                    * Referenced by: '<S17>/PLAN'
                    */
extern real32_T
  rtP_P_LongCtrl_FollowDistDiffCharCoefEnlargeAccelStartUpAssistXAxis[2];
    /* Variable: P_LongCtrl_FollowDistDiffCharCoefEnlargeAccelStartUpAssistXAxis
     * Referenced by: '<S17>/PLAN'
     */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistCorrDistFullFillOverride;
                /* Variable: P_LongCtrl_FollowDrvOffDistCorrDistFullFillOverride
                 * Referenced by: '<S17>/PLAN'
                 */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistCorrVelFullFillOverride;
                 /* Variable: P_LongCtrl_FollowDrvOffDistCorrVelFullFillOverride
                  * Referenced by: '<S17>/PLAN'
                  */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistExitNoOverride;
                          /* Variable: P_LongCtrl_FollowDrvOffDistExitNoOverride
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistExitOverride;
                            /* Variable: P_LongCtrl_FollowDrvOffDistExitOverride
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff;
                /* Variable: P_LongCtrl_FollowDrvOffDistOffsetdDesiredAutoDrvOff
                 * Referenced by: '<S17>/PLAN'
                 */
extern real32_T rtP_P_LongCtrl_FollowDrvOffStandstillVelThres;
                          /* Variable: P_LongCtrl_FollowDrvOffStandstillVelThres
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelCorrVelFullFillOverride;
                  /* Variable: P_LongCtrl_FollowDrvOffVelCorrVelFullFillOverride
                   * Referenced by: '<S17>/PLAN'
                   */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelExitDistCorrNoOverride;
                   /* Variable: P_LongCtrl_FollowDrvOffVelExitDistCorrNoOverride
                    * Referenced by: '<S17>/PLAN'
                    */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelExitDistCorrOverride;
                     /* Variable: P_LongCtrl_FollowDrvOffVelExitDistCorrOverride
                      * Referenced by: '<S17>/PLAN'
                      */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelExitVelCorrNoOverride;
                    /* Variable: P_LongCtrl_FollowDrvOffVelExitVelCorrNoOverride
                     * Referenced by: '<S17>/PLAN'
                     */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelExitVelCorrOverride;
                      /* Variable: P_LongCtrl_FollowDrvOffVelExitVelCorrOverride
                       * Referenced by: '<S17>/PLAN'
                       */
extern real32_T rtP_P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff;
                         /* Variable: P_LongCtrl_FollowDrvOffVelRelMinAutoDrvOff
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff;
                        /* Variable: P_LongCtrl_FollowDrvOffdistRelMinAutoDrvOff
                         * Referenced by: '<S17>/PLAN'
                         */
extern real32_T rtP_P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions;
                   /* Variable: P_LongCtrl_FollowDrvOffvSetMinDriveOffConditions
                    * Referenced by: '<S17>/PLAN'
                    */
extern real32_T rtP_P_LongCtrl_FollowJerkCharAccelJerkYAxis[7];
                            /* Variable: P_LongCtrl_FollowJerkCharAccelJerkYAxis
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowQuickAccelTargAbsEnableThres;
                      /* Variable: P_LongCtrl_FollowQuickAccelTargAbsEnableThres
                       * Referenced by: '<S17>/PLAN'
                       */
extern real32_T rtP_P_LongCtrl_FollowQuickDecelAccelDesMax;
                             /* Variable: P_LongCtrl_FollowQuickDecelAccelDesMax
                              * Referenced by: '<S17>/PLAN'
                              */
extern real32_T rtP_P_LongCtrl_FollowQuickDecelDiffDistRel2DesThres;
                    /* Variable: P_LongCtrl_FollowQuickDecelDiffDistRel2DesThres
                     * Referenced by: '<S17>/PLAN'
                     */
extern real32_T rtP_P_LongCtrl_FollowQuickDecelVelSubjThres;
                            /* Variable: P_LongCtrl_FollowQuickDecelVelSubjThres
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowQuickDecelVelTargRelThres;
                         /* Variable: P_LongCtrl_FollowQuickDecelVelTargRelThres
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_FollowRateJConditionStep;
                                /* Variable: P_LongCtrl_FollowRateJConditionStep
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_FollowRateJDirStep;
                                      /* Variable: P_LongCtrl_FollowRateJDirStep
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_FollowTFiltP0XAxis[2];
                                      /* Variable: P_LongCtrl_FollowTFiltP0XAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_FollowTFiltP0YAxis[2];
                                      /* Variable: P_LongCtrl_FollowTFiltP0YAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_FollowVelCharAccelJerkXAxis[7];
                             /* Variable: P_LongCtrl_FollowVelCharAccelJerkXAxis
                              * Referenced by: '<S17>/PLAN'
                              */
extern real32_T rtP_P_LongCtrl_FollowVelCharCoefEnlargeAccelStartUpAssistXAxis[2];
         /* Variable: P_LongCtrl_FollowVelCharCoefEnlargeAccelStartUpAssistXAxis
          * Referenced by: '<S17>/PLAN'
          */
extern real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddX1Axis[2];
                      /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddX1Axis
                       * Referenced by: '<S17>/PLAN'
                       */
extern real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddX2Axis[2];
                      /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddX2Axis
                       * Referenced by: '<S17>/PLAN'
                       */
extern real32_T rtP_P_LongCtrl_FollowVelSubjNegToleranceAddYAxis[4];
                       /* Variable: P_LongCtrl_FollowVelSubjNegToleranceAddYAxis
                        * Referenced by: '<S17>/PLAN'
                        */
extern real32_T rtP_P_LongCtrl_FollowVelSubjThresForceStopXAxis[2];
                        /* Variable: P_LongCtrl_FollowVelSubjThresForceStopXAxis
                         * Referenced by: '<S17>/PLAN'
                         */
extern real32_T rtP_P_LongCtrl_FollowVelSubjThresForceStopYAxis[2];
                        /* Variable: P_LongCtrl_FollowVelSubjThresForceStopYAxis
                         * Referenced by: '<S17>/PLAN'
                         */
extern real32_T rtP_P_LongCtrl_FollowVelSubjThresStartUpAssistEnable;
                   /* Variable: P_LongCtrl_FollowVelSubjThresStartUpAssistEnable
                    * Referenced by: '<S17>/PLAN'
                    */
extern real32_T rtP_P_LongCtrl_FollowVelTargAbsThresStartUpAssistEnable;
                /* Variable: P_LongCtrl_FollowVelTargAbsThresStartUpAssistEnable
                 * Referenced by: '<S17>/PLAN'
                 */
extern real32_T rtP_P_LongCtrl_FollowVelTargetAbsSmoothNum;
                             /* Variable: P_LongCtrl_FollowVelTargetAbsSmoothNum
                              * Referenced by: '<S17>/PLAN'
                              */
extern real32_T rtP_P_LongCtrl_FollowWdCoefXAxis[3];/* Variable: P_LongCtrl_FollowWdCoefXAxis
                                                     * Referenced by: '<S17>/PLAN'
                                                     */
extern real32_T rtP_P_LongCtrl_FollowWdCoefYAxis[3];/* Variable: P_LongCtrl_FollowWdCoefYAxis
                                                     * Referenced by: '<S17>/PLAN'
                                                     */
extern real32_T rtP_P_LongCtrl_FollowWvCoefXAxis[4];/* Variable: P_LongCtrl_FollowWvCoefXAxis
                                                     * Referenced by: '<S17>/PLAN'
                                                     */
extern real32_T rtP_P_LongCtrl_FollowWvCoefYAxis[4];/* Variable: P_LongCtrl_FollowWvCoefYAxis
                                                     * Referenced by: '<S17>/PLAN'
                                                     */
extern real32_T rtP_P_LongCtrl_FollowaccelFollowDesThresEnableStopXAxis[2];
                /* Variable: P_LongCtrl_FollowaccelFollowDesThresEnableStopXAxis
                 * Referenced by: '<S17>/PLAN'
                 */
extern real32_T rtP_P_LongCtrl_FollowaccelFollowDesThresEnableStopYAxis[2];
                /* Variable: P_LongCtrl_FollowaccelFollowDesThresEnableStopYAxis
                 * Referenced by: '<S17>/PLAN'
                 */
extern real32_T rtP_P_LongCtrl_FollowaccelForceStopMinCharXAxis[2];
                        /* Variable: P_LongCtrl_FollowaccelForceStopMinCharXAxis
                         * Referenced by: '<S17>/PLAN'
                         */
extern real32_T rtP_P_LongCtrl_FollowaccelForceStopMinCharYAxis[2];
                        /* Variable: P_LongCtrl_FollowaccelForceStopMinCharYAxis
                         * Referenced by: '<S17>/PLAN'
                         */
extern real32_T rtP_P_LongCtrl_FollowaccelMinAccelSupressionEnter;
                      /* Variable: P_LongCtrl_FollowaccelMinAccelSupressionEnter
                       * Referenced by: '<S17>/PLAN'
                       */
extern real32_T rtP_P_LongCtrl_FollowaccelMinAccelSupressionExit;
                       /* Variable: P_LongCtrl_FollowaccelMinAccelSupressionExit
                        * Referenced by: '<S17>/PLAN'
                        */
extern real32_T rtP_P_LongCtrl_FollowaccelStopMax;
                                      /* Variable: P_LongCtrl_FollowaccelStopMax
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_FollowaccelSupressionAccelThres;
                         /* Variable: P_LongCtrl_FollowaccelSupressionAccelThres
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableNegJerk;
                         /* Variable: P_LongCtrl_FollowaccelTargAbsEnableNegJerk
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableNegMax;
                          /* Variable: P_LongCtrl_FollowaccelTargAbsEnableNegMax
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnablePosJerk;
                         /* Variable: P_LongCtrl_FollowaccelTargAbsEnablePosJerk
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsEnableRangeMax;
                        /* Variable: P_LongCtrl_FollowaccelTargAbsEnableRangeMax
                         * Referenced by: '<S17>/PLAN'
                         */
extern real32_T rtP_P_LongCtrl_FollowaccelTargAbsExitNegMin;
                            /* Variable: P_LongCtrl_FollowaccelTargAbsExitNegMin
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowaccelTargThresEnableStop;
                          /* Variable: P_LongCtrl_FollowaccelTargThresEnableStop
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowaccelTargThresForceStop;
                           /* Variable: P_LongCtrl_FollowaccelTargThresForceStop
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_LongCtrl_FollowaccelThresActiveTOR;
                               /* Variable: P_LongCtrl_FollowaccelThresActiveTOR
                                * Referenced by: '<S17>/PLAN'
                                */
extern real32_T rtP_P_LongCtrl_FollowcoefAccelFadeOutPlauCheck;
                         /* Variable: P_LongCtrl_FollowcoefAccelFadeOutPlauCheck
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_FollowcoefAccelStandstillOverride;
                       /* Variable: P_LongCtrl_FollowcoefAccelStandstillOverride
                        * Referenced by: '<S17>/PLAN'
                        */
extern real32_T rtP_P_LongCtrl_FollowcoefDistEnlargeDecToStop;
                          /* Variable: P_LongCtrl_FollowcoefDistEnlargeDecToStop
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_FollowcoefDistRelThresActiveTOR;
                         /* Variable: P_LongCtrl_FollowcoefDistRelThresActiveTOR
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_FollowcoefVelEnlargeDecToStop;
                           /* Variable: P_LongCtrl_FollowcoefVelEnlargeDecToStop
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_LongCtrl_FollowdecelJerkCharXAxis[6];
                                /* Variable: P_LongCtrl_FollowdecelJerkCharXAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_FollowdecelJerkCharYAxis[6];
                                /* Variable: P_LongCtrl_FollowdecelJerkCharYAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_FollowdistDesCompensionXAxis[2];
                            /* Variable: P_LongCtrl_FollowdistDesCompensionXAxis
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowdistDesCompensionYAxis[2];
                            /* Variable: P_LongCtrl_FollowdistDesCompensionYAxis
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowdistDesStopMin;
                                    /* Variable: P_LongCtrl_FollowdistDesStopMin
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_FollowdistDesX2Axis[6];
                                     /* Variable: P_LongCtrl_FollowdistDesX2Axis
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_LongCtrl_FollowdistDesYAxis[24];
                                      /* Variable: P_LongCtrl_FollowdistDesYAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_FollowdistRelDevCalcDistConst;
                           /* Variable: P_LongCtrl_FollowdistRelDevCalcDistConst
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_LongCtrl_FollowdistRelMaxJudgeStationaryTarget;
                   /* Variable: P_LongCtrl_FollowdistRelMaxJudgeStationaryTarget
                    * Referenced by: '<S17>/PLAN'
                    */
extern real32_T rtP_P_LongCtrl_FollowdistRelThresEnablePlauCheck;
                       /* Variable: P_LongCtrl_FollowdistRelThresEnablePlauCheck
                        * Referenced by: '<S17>/PLAN'
                        */
extern real32_T rtP_P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres;
                /* Variable: P_LongCtrl_FollowdistTargRelEnableAccelTargAbsThres
                 * Referenced by: '<S17>/PLAN'
                 */
extern real32_T rtP_P_LongCtrl_FollowdistThresEnableStop;
                               /* Variable: P_LongCtrl_FollowdistThresEnableStop
                                * Referenced by: '<S17>/PLAN'
                                */
extern real32_T rtP_P_LongCtrl_FollowgapThresActiveTOR;
                                 /* Variable: P_LongCtrl_FollowgapThresActiveTOR
                                  * Referenced by: '<S17>/PLAN'
                                  */
extern real32_T rtP_P_LongCtrl_FollowjerkForceStopCharXAxis[3];
                            /* Variable: P_LongCtrl_FollowjerkForceStopCharXAxis
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowjerkForceStopCharYAxis[3];
                            /* Variable: P_LongCtrl_FollowjerkForceStopCharYAxis
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowtStartUpAssistEnableMax;
                           /* Variable: P_LongCtrl_FollowtStartUpAssistEnableMax
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_LongCtrl_FollowttcCorrDecelJerkXAxis[4];
                             /* Variable: P_LongCtrl_FollowttcCorrDecelJerkXAxis
                              * Referenced by: '<S17>/PLAN'
                              */
extern real32_T rtP_P_LongCtrl_FollowttcCorrDecelJerkYAxis[4];
                             /* Variable: P_LongCtrl_FollowttcCorrDecelJerkYAxis
                              * Referenced by: '<S17>/PLAN'
                              */
extern real32_T rtP_P_LongCtrl_FollowvelRelThresEnablePlauCheck;
                        /* Variable: P_LongCtrl_FollowvelRelThresEnablePlauCheck
                         * Referenced by: '<S17>/PLAN'
                         */
extern real32_T rtP_P_LongCtrl_FollowvelSubjMaxEnablePlauCheck;
                         /* Variable: P_LongCtrl_FollowvelSubjMaxEnablePlauCheck
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_FollowvelSubjThresEnablePlauCheck;
                       /* Variable: P_LongCtrl_FollowvelSubjThresEnablePlauCheck
                        * Referenced by: '<S17>/PLAN'
                        */
extern real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStop;
                            /* Variable: P_LongCtrl_FollowvelSubjThresEnableStop
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStopAddXAxis[2];
                    /* Variable: P_LongCtrl_FollowvelSubjThresEnableStopAddXAxis
                     * Referenced by: '<S17>/PLAN'
                     */
extern real32_T rtP_P_LongCtrl_FollowvelSubjThresEnableStopAddYAxis[2];
                    /* Variable: P_LongCtrl_FollowvelSubjThresEnableStopAddYAxis
                     * Referenced by: '<S17>/PLAN'
                     */
extern real32_T rtP_P_LongCtrl_FollowvelTarAbsThresForceStop;
                           /* Variable: P_LongCtrl_FollowvelTarAbsThresForceStop
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_LongCtrl_FollowvelTargAbsMaxJudgeStationaryTarget;
                /* Variable: P_LongCtrl_FollowvelTargAbsMaxJudgeStationaryTarget
                 * Referenced by: '<S17>/PLAN'
                 */
extern real32_T rtP_P_LongCtrl_FollowvelTargRelThresActiveTOR;
                          /* Variable: P_LongCtrl_FollowvelTargRelThresActiveTOR
                           * Referenced by: '<S17>/PLAN'
                           */
extern real32_T rtP_P_LongCtrl_ICCurvatureLimitSpdXAxis[10];
                                /* Variable: P_LongCtrl_ICCurvatureLimitSpdXAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_ICCurvatureLimitSpdYAxis[10];
                                /* Variable: P_LongCtrl_ICCurvatureLimitSpdYAxis
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_LongCtrl_ICCurvatureMapLimitSpdXAxis[10];
                             /* Variable: P_LongCtrl_ICCurvatureMapLimitSpdXAxis
                              * Referenced by: '<S17>/PLAN'
                              */
extern real32_T rtP_P_LongCtrl_ICCurvatureMapLimitSpdYAxis[10];
                             /* Variable: P_LongCtrl_ICCurvatureMapLimitSpdYAxis
                              * Referenced by: '<S17>/PLAN'
                              */
extern real32_T rtP_P_LongCtrl_ICKapLimitAccelXAxis[10];
                                    /* Variable: P_LongCtrl_ICKapLimitAccelXAxis
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_ICKapLimitAccelYAxis[10];
                                    /* Variable: P_LongCtrl_ICKapLimitAccelYAxis
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_ICKapLimitSpdXAxis[10];
                                      /* Variable: P_LongCtrl_ICKapLimitSpdXAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_ICKapLimitSpdYAxis[10];
                                      /* Variable: P_LongCtrl_ICKapLimitSpdYAxis
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_LongCtrl_ICKapUpperJerkMin;/* Variable: P_LongCtrl_ICKapUpperJerkMin
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_LongCtrl_ICUpperJerkNegVLCInternalAcc;
                            /* Variable: P_LongCtrl_ICUpperJerkNegVLCInternalAcc
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_ICaccelThresEnableLine;
                                  /* Variable: P_LongCtrl_ICaccelThresEnableLine
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_ICcoefCurvatureCharX1[4];
                                   /* Variable: P_LongCtrl_ICcoefCurvatureCharX1
                                    * Referenced by: '<S17>/PLAN'
                                    */
extern real32_T rtP_P_LongCtrl_ICcoefCurvatureCharX2[4];
                                   /* Variable: P_LongCtrl_ICcoefCurvatureCharX2
                                    * Referenced by: '<S17>/PLAN'
                                    */
extern real32_T rtP_P_LongCtrl_ICcoefCurvatureCharY[16];
                                    /* Variable: P_LongCtrl_ICcoefCurvatureCharY
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_ICdeltaAccelLowerBand;
                                   /* Variable: P_LongCtrl_ICdeltaAccelLowerBand
                                    * Referenced by: '<S17>/PLAN'
                                    */
extern real32_T rtP_P_LongCtrl_ICdeltaAccelUpperBand;
                                   /* Variable: P_LongCtrl_ICdeltaAccelUpperBand
                                    * Referenced by: '<S17>/PLAN'
                                    */
extern real32_T rtP_P_LongCtrl_IClowerJerkICCharXAxis[3];
                                  /* Variable: P_LongCtrl_IClowerJerkICCharXAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_IClowerJerkICCharYAxis[3];
                                  /* Variable: P_LongCtrl_IClowerJerkICCharYAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_IClowerJerkPosVLCInternalAccMax;
                         /* Variable: P_LongCtrl_IClowerJerkPosVLCInternalAccMax
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_IClowerJerkPosVLCInternalAccMin;
                         /* Variable: P_LongCtrl_IClowerJerkPosVLCInternalAccMin
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_ICtAcceleTimeNegCurvatureMap;
                            /* Variable: P_LongCtrl_ICtAcceleTimeNegCurvatureMap
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_ICtAcceleTimePosCurvatureMap;
                            /* Variable: P_LongCtrl_ICtAcceleTimePosCurvatureMap
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_LongCtrl_ICtDecel;/* Variable: P_LongCtrl_ICtDecel
                                         * Referenced by: '<S17>/PLAN'
                                         */
extern real32_T rtP_P_LongCtrl_ICupperJerkICCharXAxis[4];
                                  /* Variable: P_LongCtrl_ICupperJerkICCharXAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_ICupperJerkICCharYAxis[4];
                                  /* Variable: P_LongCtrl_ICupperJerkICCharYAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_KeepLaneSurDis;/* Variable: P_LongCtrl_KeepLaneSurDis
                                               * Referenced by: '<S17>/PLAN'
                                               */
extern real32_T rtP_P_LongCtrl_KeepLaneTime;/* Variable: P_LongCtrl_KeepLaneTime
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_LongCtrl_LaneAvailDis;/* Variable: P_LongCtrl_LaneAvailDis
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_LongCtrl_LaneAvailStd;/* Variable: P_LongCtrl_LaneAvailStd
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_LongCtrl_LaneAvailStdAverage;
                                     /* Variable: P_LongCtrl_LaneAvailStdAverage
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_LongCtrl_LaneAvailStdMax;/* Variable: P_LongCtrl_LaneAvailStdMax
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern real32_T rtP_P_LongCtrl_LaneAvailTime;/* Variable: P_LongCtrl_LaneAvailTime
                                              * Referenced by: '<S17>/PLAN'
                                              */
extern real32_T rtP_P_LongCtrl_ORDaccelDevLowerBand;
                                    /* Variable: P_LongCtrl_ORDaccelDevLowerBand
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_ORDaccelDevUpperBand;
                                    /* Variable: P_LongCtrl_ORDaccelDevUpperBand
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_ORDlowerJerk;/* Variable: P_LongCtrl_ORDlowerJerk
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_LongCtrl_ORDtAcceleTimeNeg;/* Variable: P_LongCtrl_ORDtAcceleTimeNeg
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_LongCtrl_ORDtAcceleTimePos;/* Variable: P_LongCtrl_ORDtAcceleTimePos
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_LongCtrl_ORDupperJerk;/* Variable: P_LongCtrl_ORDupperJerk
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_LongCtrl_ORDvelDeltaEnableThres;
                                  /* Variable: P_LongCtrl_ORDvelDeltaEnableThres
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_SJVlcInternalAccThresEnableBrkPrefer;
                    /* Variable: P_LongCtrl_SJVlcInternalAccThresEnableBrkPrefer
                     * Referenced by: '<S17>/PLAN'
                     */
extern real32_T rtP_P_LongCtrl_SJaccelFollowThresEnableBrkPrefer;
                       /* Variable: P_LongCtrl_SJaccelFollowThresEnableBrkPrefer
                        * Referenced by: '<S17>/PLAN'
                        */
extern real32_T rtP_P_LongCtrl_SJaccelSubjPlanOptThresEnableBrkPrefer;
                  /* Variable: P_LongCtrl_SJaccelSubjPlanOptThresEnableBrkPrefer
                   * Referenced by: '<S17>/PLAN'
                   */
extern real32_T rtP_P_LongCtrl_SJaccelSubjThresEnableBrkPrefer;
                         /* Variable: P_LongCtrl_SJaccelSubjThresEnableBrkPrefer
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_LongCtrl_SJaxvRoadSlopeThresEnableBrkPrefer;
                      /* Variable: P_LongCtrl_SJaxvRoadSlopeThresEnableBrkPrefer
                       * Referenced by: '<S17>/PLAN'
                       */
extern real32_T rtP_P_LongCtrl_SJdStop;/* Variable: P_LongCtrl_SJdStop
                                        * Referenced by: '<S17>/PLAN'
                                        */
extern real32_T rtP_P_LongCtrl_SJttcThresEnableBrkPrefer;
                               /* Variable: P_LongCtrl_SJttcThresEnableBrkPrefer
                                * Referenced by: '<S17>/PLAN'
                                */
extern real32_T rtP_P_LongCtrl_SJvelSubjThresEnableBrkPrefer;
                           /* Variable: P_LongCtrl_SJvelSubjThresEnableBrkPrefer
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_LongCtrl_WaitTime;/* Variable: P_LongCtrl_WaitTime
                                         * Referenced by: '<S17>/PLAN'
                                         */
extern real32_T rtP_P_LongCtrl_accelTargAbsThrd;/* Variable: P_LongCtrl_accelTargAbsThrd
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
extern real32_T rtP_P_LongCtrl_distThreDecToStopXAxis[3];
                                  /* Variable: P_LongCtrl_distThreDecToStopXAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_distThreDecToStopYAxis[3];
                                  /* Variable: P_LongCtrl_distThreDecToStopYAxis
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_LongCtrl_tCycle; /* Variable: P_LongCtrl_tCycle
                                        * Referenced by: '<S17>/PLAN'
                                        */
extern real32_T rtP_P_LongCtrl_velSubjThreDecToStop;
                                    /* Variable: P_LongCtrl_velSubjThreDecToStop
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_LongCtrl_velTargetThreDecleToStop;
                                /* Variable: P_LongCtrl_velTargetThreDecleToStop
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv1;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv1
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv2;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv2
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_PLAN_ALC_DPCthresholdLcDrvLv3;
                                    /* Variable: P_PLAN_ALC_DPCthresholdLcDrvLv3
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_PLAN_ALC_DynamicDPCthreshold;
                                     /* Variable: P_PLAN_ALC_DynamicDPCthreshold
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_PLAN_ALC_FWheelPreTime;/* Variable: P_PLAN_ALC_FWheelPreTime
                                              * Referenced by: '<S17>/PLAN'
                                              */
extern real32_T rtP_P_PLAN_ALC_LCDeltaTmeGap;/* Variable: P_PLAN_ALC_LCDeltaTmeGap
                                              * Referenced by: '<S17>/PLAN'
                                              */
extern real32_T rtP_P_PLAN_ALC_LcCancelDPCThreshold;
                                    /* Variable: P_PLAN_ALC_LcCancelDPCThreshold
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_PLAN_ALC_LcCancelRoadWidthOffset;
                                 /* Variable: P_PLAN_ALC_LcCancelRoadWidthOffset
                                  * Referenced by: '<S17>/PLAN'
                                  */
extern real32_T rtP_P_PLAN_ALC_LcCancelRoadWidthOffsetForDPC;
                           /* Variable: P_PLAN_ALC_LcCancelRoadWidthOffsetForDPC
                            * Referenced by: '<S17>/PLAN'
                            */
extern real32_T rtP_P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints[14];
                     /* Variable: P_PLAN_ALC_LcCurvatureInhibitionValueBrkPoints
                      * Referenced by: '<S17>/PLAN'
                      */
extern real32_T rtP_P_PLAN_ALC_LcCurvatureInhibitionValueTable[14];
                         /* Variable: P_PLAN_ALC_LcCurvatureInhibitionValueTable
                          * Referenced by: '<S17>/PLAN'
                          */
extern real32_T rtP_P_PLAN_ALC_LcDrvHMILineValidFtime;
                                  /* Variable: P_PLAN_ALC_LcDrvHMILineValidFtime
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_PLAN_ALC_LcDrv_DyDiffThreshold;
                                   /* Variable: P_PLAN_ALC_LcDrv_DyDiffThreshold
                                    * Referenced by: '<S17>/PLAN'
                                    */
extern real32_T rtP_P_PLAN_ALC_LcFinishDyDiffBrkPoint[4];
                                  /* Variable: P_PLAN_ALC_LcFinishDyDiffBrkPoint
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern real32_T rtP_P_PLAN_ALC_LcFinishDyDiffRwFactorForAP;
                             /* Variable: P_PLAN_ALC_LcFinishDyDiffRwFactorForAP
                              * Referenced by: '<S17>/PLAN'
                              */
extern real32_T rtP_P_PLAN_ALC_LcFinishDyDiffRwFactorForHMI;
                            /* Variable: P_PLAN_ALC_LcFinishDyDiffRwFactorForHMI
                             * Referenced by: '<S17>/PLAN'
                             */
extern real32_T rtP_P_PLAN_ALC_LcFinishDyDiffTableValue[4];
                                /* Variable: P_PLAN_ALC_LcFinishDyDiffTableValue
                                 * Referenced by: '<S17>/PLAN'
                                 */
extern real32_T rtP_P_PLAN_ALC_LcOverTkDPCthreshold;
                                    /* Variable: P_PLAN_ALC_LcOverTkDPCthreshold
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_PLAN_ALC_LcOverTkRearVehTTClimit;
                                 /* Variable: P_PLAN_ALC_LcOverTkRearVehTTClimit
                                  * Referenced by: '<S17>/PLAN'
                                  */
extern real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv1;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv1
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv2;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv2
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_PLAN_ALC_LciOverTkDeltaSpdLv3;
                                    /* Variable: P_PLAN_ALC_LciOverTkDeltaSpdLv3
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern real32_T rtP_P_PLAN_ALC_OveTkrSupDist;/* Variable: P_PLAN_ALC_OveTkrSupDist
                                              * Referenced by: '<S17>/PLAN'
                                              */
extern real32_T rtP_P_PLAN_ALC_vMinPreLC_Noh;/* Variable: P_PLAN_ALC_vMinPreLC_Noh
                                              * Referenced by: '<S17>/PLAN'
                                              */
extern real32_T rtP_P_PLAN_ALC_vMinPreLC_OverTk;/* Variable: P_PLAN_ALC_vMinPreLC_OverTk
                                                 * Referenced by: '<S17>/PLAN'
                                                 */
extern real32_T rtP_P_PLAN_DPC_FrontObj_DX_00[24];/* Variable: P_PLAN_DPC_FrontObj_DX_00
                                                   * Referenced by: '<S17>/PLAN'
                                                   */
extern real32_T rtP_P_PLAN_DPC_FrontObj_DX_03[24];/* Variable: P_PLAN_DPC_FrontObj_DX_03
                                                   * Referenced by: '<S17>/PLAN'
                                                   */
extern real32_T rtP_P_PLAN_DPC_FrontObj_DX_08[24];/* Variable: P_PLAN_DPC_FrontObj_DX_08
                                                   * Referenced by: '<S17>/PLAN'
                                                   */
extern real32_T rtP_P_PLAN_DPC_FrontObj_DX_1[24];/* Variable: P_PLAN_DPC_FrontObj_DX_1
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_PLAN_DPC_HWALineRearA2Factor;
                                     /* Variable: P_PLAN_DPC_HWALineRearA2Factor
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_PLAN_DPC_HWALineRearA3Factor;
                                     /* Variable: P_PLAN_DPC_HWALineRearA3Factor
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern real32_T rtP_P_PLAN_DPC_HearObj_DX_00[24];/* Variable: P_PLAN_DPC_HearObj_DX_00
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_PLAN_DPC_HearObj_DX_03[24];/* Variable: P_PLAN_DPC_HearObj_DX_03
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_PLAN_DPC_HearObj_DX_08[24];/* Variable: P_PLAN_DPC_HearObj_DX_08
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_PLAN_DPC_HearObj_DX_11[24];/* Variable: P_PLAN_DPC_HearObj_DX_11
                                                  * Referenced by: '<S17>/PLAN'
                                                  */
extern real32_T rtP_P_PLAN_DPC_ObjAxLPalpha;/* Variable: P_PLAN_DPC_ObjAxLPalpha
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_PLAN_DPC_ObjDxLPalpha;/* Variable: P_PLAN_DPC_ObjDxLPalpha
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_PLAN_DPC_ObjDyLPalpha;/* Variable: P_PLAN_DPC_ObjDyLPalpha
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_PLAN_DPC_ObjVxLPalpha;/* Variable: P_PLAN_DPC_ObjVxLPalpha
                                             * Referenced by: '<S17>/PLAN'
                                             */
extern real32_T rtP_P_PLAN_DPC_danqianleida_maxDx;
                                      /* Variable: P_PLAN_DPC_danqianleida_maxDx
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_PLAN_DPC_danqianleida_minDx;
                                      /* Variable: P_PLAN_DPC_danqianleida_minDx
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern real32_T rtP_P_PLAN_DPC_xiangduisudu_kmh[24];/* Variable: P_PLAN_DPC_xiangduisudu_kmh
                                                     * Referenced by: '<S17>/PLAN'
                                                     */
extern uint16_T rtP_P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt;
                         /* Variable: P_PLAN_ALC_LcCancelLaneChangeReqDspTimeCnt
                          * Referenced by: '<S17>/PLAN'
                          */
extern boolean_T rtP_P_LongCtrl_AddVelEnable;/* Variable: P_LongCtrl_AddVelEnable
                                              * Referenced by: '<S17>/PLAN'
                                              */
extern boolean_T rtP_P_LongCtrl_CCLCIncSetSpdEnable;
                                     /* Variable: P_LongCtrl_CCLCIncSetSpdEnable
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern boolean_T rtP_P_LongCtrl_FollowStartUpAssist;
                                     /* Variable: P_LongCtrl_FollowStartUpAssist
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern boolean_T rtP_P_LongCtrl_FollowVelSubjForceStopEnable;
                            /* Variable: P_LongCtrl_FollowVelSubjForceStopEnable
                             * Referenced by: '<S17>/PLAN'
                             */
extern boolean_T rtP_P_LongCtrl_ICCurveDecelEnable;
                                      /* Variable: P_LongCtrl_ICCurveDecelEnable
                                       * Referenced by: '<S17>/PLAN'
                                       */
extern boolean_T rtP_P_LongCtrl_IC_EHRV2Enable;/* Variable: P_LongCtrl_IC_EHRV2Enable
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern boolean_T rtP_P_LongCtrl_ORDdecelEnable;/* Variable: P_LongCtrl_ORDdecelEnable
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern boolean_T rtP_P_PLAN_DPC_danqianleida_kaiguan;
                                    /* Variable: P_PLAN_DPC_danqianleida_kaiguan
                                     * Referenced by: '<S17>/PLAN'
                                     */
extern boolean_T rtP_P_PLAN_LcCancelTestEnable;/* Variable: P_PLAN_LcCancelTestEnable
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntDrv;
                         /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntDrv
                          * Referenced by: '<S17>/PLAN'
                          */
extern uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntNoh;
                         /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntNoh
                          * Referenced by: '<S17>/PLAN'
                          */
extern uint8_T rtP_P_PLAN_ALC_DPCExtraMultiFrameConfirmCntOverTk;
                      /* Variable: P_PLAN_ALC_DPCExtraMultiFrameConfirmCntOverTk
                       * Referenced by: '<S17>/PLAN'
                       */
extern uint8_T rtP_P_PLAN_ALC_LcDelayCntSetNoh;/* Variable: P_PLAN_ALC_LcDelayCntSetNoh
                                                * Referenced by: '<S17>/PLAN'
                                                */
extern uint8_T rtP_P_PLAN_ALC_LcDelayCntSetOverTk;
                                     /* Variable: P_PLAN_ALC_LcDelayCntSetOverTk
                                      * Referenced by: '<S17>/PLAN'
                                      */
extern uint8_T rtP_P_PLAN_ALC_LciDrvExistDefaultDisp;
                                  /* Variable: P_PLAN_ALC_LciDrvExistDefaultDisp
                                   * Referenced by: '<S17>/PLAN'
                                   */
extern uint8_T rtP_P_PLAN_ALC_NOHLcSwt;/* Variable: P_PLAN_ALC_NOHLcSwt
                                        * Referenced by: '<S17>/PLAN'
                                        */
extern uint8_T rtP_P_PLAN_ALC_NOHTurnSts;/* Variable: P_PLAN_ALC_NOHTurnSts
                                          * Referenced by: '<S17>/PLAN'
                                          */
extern uint8_T rtP_P_PLAN_ALC_TurnLmpType;/* Variable: P_PLAN_ALC_TurnLmpType
                                           * Referenced by: '<S17>/PLAN'
                                           */
extern uint8_T rtP_P_PLAN_ALC_vMinPreLC_Drv;/* Variable: P_PLAN_ALC_vMinPreLC_Drv
                                             * Referenced by: '<S17>/PLAN'
                                             */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern SPI2SOC_VISIONS_BUS visMsg;     /* '<Root>/Rate Transition31' */
extern EQ4_LA_BUS mcuEQ4_LA;           /* '<S9>/Bus Assignment3' */
extern EQ4_LAP_BUS mcuEQ4_LAP;         /* '<S9>/Bus Assignment7' */
extern EQ4_LH_BUS mcuEQ4_LH;           /* '<S9>/Bus Assignment1' */
extern EQ4_LRE_BUS mcuEQ4_LRE;         /* '<S9>/Bus Assignment2' */
extern real32_T RFM_R1_dDisFront;      /* '<S22>/Signal Copy12' */
extern real32_T RFM_R1_dDisStart;      /* '<S22>/Signal Copy14' */
extern real32_T RFM_R1_dC3V;           /* '<S22>/Signal Copy11' */
extern real32_T RFM_R1_dC2V;           /* '<S22>/Signal Copy10' */
extern real32_T RFM_R1_dC1V;           /* '<S22>/Signal Copy9' */
extern real32_T RFM_R1_dC0V;           /* '<S22>/Signal Copy8' */
extern real32_T RFM_L1_dDisFront;      /* '<S22>/Signal Copy6' */
extern real32_T RFM_L1_dDisStart;      /* '<S22>/Signal Copy5' */
extern real32_T RFM_L1_dC3V;           /* '<S22>/Signal Copy4' */
extern real32_T RFM_L1_dC1V;           /* '<S22>/Signal Copy2' */
extern real32_T RFM_L1_dC0V;           /* '<S22>/Signal Copy1' */
extern real32_T EQ4_DX[20];            /* '<S176>/Signal Copy2' */
extern real32_T LCKIE_DX[9];           /* '<S176>/Signal Conversion' */
extern real32_T LCKIE_DY[9];           /* '<S176>/Signal Conversion1' */
extern real32_T LCKIE_VX[9];           /* '<S176>/Signal Conversion2' */
extern real32_T dxP0;                  /* '<S172>/Data Type Conversion23' */
extern real32_T LongCtrl_VlcInternalAcc;/* '<S8>/LON' */
extern uint16_T LCKIE_ID[9];           /* '<S176>/Signal Conversion3' */
extern uint8_T RFM_R1_eLineType;       /* '<S22>/Signal Copy15' */
extern uint8_T RFM_R1_bIsLineExist;    /* '<S22>/Signal Copy7' */
extern uint8_T RFM_L1_eLineType;       /* '<S22>/Signal Copy13' */
extern uint8_T RFM_L1_bIsLineExist;    /* '<S22>/Signal Copy' */
extern uint8_T EQ4_Type[20];           /* '<S176>/Signal Copy4' */
extern uint8_T Object_Type[9];         /* '<S176>/Signal Conversion4' */
extern uint8_T LSM_Line_source;        /* '<S132>/LSM' */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T P_EQ4_BC0Gain;           /* Variable: P_EQ4_BC0Gain
                                        * Referenced by:
                                        *   '<S22>/Constant2'
                                        *   '<S22>/Constant3'
                                        */
extern real_T P_HWA_TOS_P0HeadingAngle;/* Variable: P_HWA_TOS_P0HeadingAngle
                                        * Referenced by: '<S172>/Constant18'
                                        */
extern real_T P_LCS_ESSOverrideTime1;  /* Variable: P_LCS_ESSOverrideTime1
                                        * Referenced by: '<S8>/LATC'
                                        */
extern real_T P_LCS_ESSOverrideTime2;  /* Variable: P_LCS_ESSOverrideTime2
                                        * Referenced by: '<S8>/LATC'
                                        */
extern real_T P_LCS_ESSOverrideTime3;  /* Variable: P_LCS_ESSOverrideTime3
                                        * Referenced by: '<S8>/LATC'
                                        */
extern real_T P_LCS_LATC_StateActiveHoldTime_TabY_st[15];
                             /* Variable: P_LCS_LATC_StateActiveHoldTime_TabY_st
                              * Referenced by: '<S8>/LATC'
                              */
extern real_T P_LCS_LATC_TarAngleFliterWindowSize;
                                /* Variable: P_LCS_LATC_TarAngleFliterWindowSize
                                 * Referenced by: '<S8>/LATC'
                                 */
extern real_T P_LCS_NoOverRideTime_TH_s;/* Variable: P_LCS_NoOverRideTime_TH_s
                                         * Referenced by: '<S8>/LATC'
                                         */
extern real_T P_LCS_OverRideDetect_b;  /* Variable: P_LCS_OverRideDetect_b
                                        * Referenced by: '<S8>/LATC'
                                        */
extern real_T P_LCS_OverRideTime_TH_s; /* Variable: P_LCS_OverRideTime_TH_s
                                        * Referenced by: '<S8>/LATC'
                                        */
extern real_T P_LCS_PLAN_StateActiveHoldTime_TabY_s[15];
                              /* Variable: P_LCS_PLAN_StateActiveHoldTime_TabY_s
                               * Referenced by: '<S8>/LATC'
                               */
extern real_T P_LSM_DOP_C0_EN_Limit;   /* Variable: P_LSM_DOP_C0_EN_Limit
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real_T P_LSM_DOP_C0_out_Limit;  /* Variable: P_LSM_DOP_C0_out_Limit
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real_T P_LSM_NOH_Switch;        /* Variable: P_LSM_NOH_Switch
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real_T P_VSM_LCK_AbsEspInTime;  /* Variable: P_VSM_LCK_AbsEspInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_AccRateInTime; /* Variable: P_VSM_LCK_AccRateInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_AccrPelRateOut;/* Variable: P_VSM_LCK_AccrPelRateOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_BrakePressInTime;/* Variable: P_VSM_LCK_BrakePressInTime
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real_T P_VSM_LCK_C0;            /* Variable: P_VSM_LCK_C0
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_DrvInputTrqValueInTime;
                                   /* Variable: P_VSM_LCK_DrvInputTrqValueInTime
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real_T P_VSM_LCK_LCOverrideTime;/* Variable: P_VSM_LCK_LCOverrideTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_LanechangeSwitch;/* Variable: P_VSM_LCK_LanechangeSwitch
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real_T P_VSM_LCK_Lanewidthswitch;/* Variable: P_VSM_LCK_Lanewidthswitch
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real_T P_VSM_LCK_LateralAcceInTime;/* Variable: P_VSM_LCK_LateralAcceInTime
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real_T P_VSM_LCK_LongitudeAccInTime;/* Variable: P_VSM_LCK_LongitudeAccInTime
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real_T P_VSM_LCK_OverrideInTime;/* Variable: P_VSM_LCK_OverrideInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_OverrideTime;  /* Variable: P_VSM_LCK_OverrideTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_ParamA1[4];    /* Variable: P_VSM_LCK_ParamA1
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_State_ESSSts_enable;
                                      /* Variable: P_VSM_LCK_State_ESSSts_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real_T P_VSM_LCK_State_LaneChange_enable;
                                  /* Variable: P_VSM_LCK_State_LaneChange_enable
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real_T P_VSM_LCK_State_Param_LaneCurve[4];
                                    /* Variable: P_VSM_LCK_State_Param_LaneCurve
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real_T P_VSM_LCK_State_Param_LaneCurve_Offset[4];
                             /* Variable: P_VSM_LCK_State_Param_LaneCurve_Offset
                              * Referenced by: '<S133>/VSM'
                              */
extern real_T P_VSM_LCK_State_Param_LaneWidth[7];
                                    /* Variable: P_VSM_LCK_State_Param_LaneWidth
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real_T P_VSM_LCK_State_Param_LaneWidth_Offset[7];
                             /* Variable: P_VSM_LCK_State_Param_LaneWidth_Offset
                              * Referenced by: '<S133>/VSM'
                              */
extern real_T P_VSM_LCK_SteerAngleSpdInTime;
                                      /* Variable: P_VSM_LCK_SteerAngleSpdInTime
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real_T P_VSM_LCK_SteerWheelAngleInTime;
                                    /* Variable: P_VSM_LCK_SteerWheelAngleInTime
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real_T P_VSM_LCK_T0;            /* Variable: P_VSM_LCK_T0
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_TargetInSwitch;/* Variable: P_VSM_LCK_TargetInSwitch
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_YawRateInTime; /* Variable: P_VSM_LCK_YawRateInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LCK_dypreFactor;   /* Variable: P_VSM_LCK_dypreFactor
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LDW_AbsEspInTime;  /* Variable: P_VSM_LDW_AbsEspInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LDW_AccRateInTime; /* Variable: P_VSM_LDW_AccRateInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LDW_BrakePressInTime;/* Variable: P_VSM_LDW_BrakePressInTime
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real_T P_VSM_LDW_LaneChangeOffset;/* Variable: P_VSM_LDW_LaneChangeOffset
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real_T P_VSM_LDW_LateralAcceInTime;/* Variable: P_VSM_LDW_LateralAcceInTime
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real_T P_VSM_LDW_LongitudeAccInTime;/* Variable: P_VSM_LDW_LongitudeAccInTime
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real_T P_VSM_LDW_State_ESSSts_enable;
                                      /* Variable: P_VSM_LDW_State_ESSSts_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real_T P_VSM_LDW_SteerWheelAngleInTime;
                                    /* Variable: P_VSM_LDW_SteerWheelAngleInTime
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real_T P_VSM_LDW_SteerWheelSpdInTime;
                                      /* Variable: P_VSM_LDW_SteerWheelSpdInTime
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real_T P_VSM_LDW_TurnLightInTime;/* Variable: P_VSM_LDW_TurnLightInTime
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real_T P_VSM_LDW_YawRateInTime; /* Variable: P_VSM_LDW_YawRateInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_AbsEspInTime;  /* Variable: P_VSM_LKA_AbsEspInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_AccPedalRateOutTime;
                                      /* Variable: P_VSM_LKA_AccPedalRateOutTime
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real_T P_VSM_LKA_AccRateInTime; /* Variable: P_VSM_LKA_AccRateInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_BrakePressInTime;/* Variable: P_VSM_LKA_BrakePressInTime
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real_T P_VSM_LKA_CurveFactor;   /* Variable: P_VSM_LKA_CurveFactor
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_DriverInputTrqValueInTime;
                                /* Variable: P_VSM_LKA_DriverInputTrqValueInTime
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real_T P_VSM_LKA_EndSwitch;     /* Variable: P_VSM_LKA_EndSwitch
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_LaneChangeOffset;/* Variable: P_VSM_LKA_LaneChangeOffset
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real_T P_VSM_LKA_LateralAcceInTime;/* Variable: P_VSM_LKA_LateralAcceInTime
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real_T P_VSM_LKA_OverrideInTime;/* Variable: P_VSM_LKA_OverrideInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_OverrideTime;  /* Variable: P_VSM_LKA_OverrideTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_State_ESSSts_enable;
                                      /* Variable: P_VSM_LKA_State_ESSSts_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real_T P_VSM_LKA_State_Param_LaneCurve[4];
                                    /* Variable: P_VSM_LKA_State_Param_LaneCurve
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real_T P_VSM_LKA_State_Param_LaneCurve_Offset[4];
                             /* Variable: P_VSM_LKA_State_Param_LaneCurve_Offset
                              * Referenced by: '<S133>/VSM'
                              */
extern real_T P_VSM_LKA_SteerWheelAngleInTime;
                                    /* Variable: P_VSM_LKA_SteerWheelAngleInTime
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real_T P_VSM_LKA_SteerWheelSpdInTime;
                                      /* Variable: P_VSM_LKA_SteerWheelSpdInTime
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real_T P_VSM_LKA_TurnLightInTime;/* Variable: P_VSM_LKA_TurnLightInTime
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real_T P_VSM_LKA_WarnInTime;    /* Variable: P_VSM_LKA_WarnInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_YawRateInTime; /* Variable: P_VSM_LKA_YawRateInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_LKA_absLongitudeAcceInTime;
                                   /* Variable: P_VSM_LKA_absLongitudeAcceInTime
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real_T P_VSM_NOH_Swt_Req_SW;    /* Variable: P_VSM_NOH_Swt_Req_SW
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real_T P_VSM_SOSSpdLimit;       /* Variable: P_VSM_SOSSpdLimit
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_Global_CharSpd_ms;   /* Variable: P_Global_CharSpd_ms
                                        * Referenced by:
                                        *   '<S7>/VIE'
                                        *   '<S8>/LATC'
                                        */
extern real32_T P_Global_DxvFrontBumper_m;/* Variable: P_Global_DxvFrontBumper_m
                                           * Referenced by:
                                           *   '<S17>/PLAN'
                                           *   '<S179>/dyLaneWidthMinHalfStatObj1'
                                           *   '<S220>/dyLaneWidthMinHalfStatObj1'
                                           */
extern real32_T P_Global_DxvRearBumper_m;/* Variable: P_Global_DxvRearBumper_m
                                          * Referenced by:
                                          *   '<S17>/PLAN'
                                          *   '<S133>/VSM'
                                          */
extern real32_T P_Global_EQ2RearAxisX_m;/* Variable: P_Global_EQ2RearAxisX_m
                                         * Referenced by:
                                         *   '<S22>/Constant12'
                                         *   '<S22>/Constant14'
                                         *   '<S167>/Constant4'
                                         *   '<S198>/Constant2'
                                         *   '<S238>/Constant2'
                                         */
extern real32_T P_Global_EQ2RearAxisY_m;/* Variable: P_Global_EQ2RearAxisY_m
                                         * Referenced by:
                                         *   '<S22>/Constant13'
                                         *   '<S22>/Constant15'
                                         *   '<S167>/Constant5'
                                         */
extern real32_T P_Global_FrontAxleToCenter_m;/* Variable: P_Global_FrontAxleToCenter_m
                                              * Referenced by: '<S7>/VIE'
                                              */
extern real32_T P_Global_IEnvironment_RefPX_Front_Bumper;
                           /* Variable: P_Global_IEnvironment_RefPX_Front_Bumper
                            * Referenced by: '<S133>/VSM'
                            */
extern real32_T P_Global_RearAxleToCenter_m;/* Variable: P_Global_RearAxleToCenter_m
                                             * Referenced by: '<S7>/VIE'
                                             */
extern real32_T P_Global_SideSlipAnglefactor;/* Variable: P_Global_SideSlipAnglefactor
                                              * Referenced by: '<S7>/VIE'
                                              */
extern real32_T P_Global_SteeringAngleRatio;/* Variable: P_Global_SteeringAngleRatio
                                             * Referenced by:
                                             *   '<S7>/VIE'
                                             *   '<S8>/LATC'
                                             *   '<S172>/Constant9'
                                             *   '<S174>/Constant9'
                                             */
extern real32_T P_Global_TireRadius_m; /* Variable: P_Global_TireRadius_m
                                        * Referenced by: '<S8>/LON'
                                        */
extern real32_T P_Global_VehicleWidthMin_m;/* Variable: P_Global_VehicleWidthMin_m
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_Global_Vehicle_Length_m;/* Variable: P_Global_Vehicle_Length_m
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_Global_Weight_N;     /* Variable: P_Global_Weight_N
                                        * Referenced by: '<S8>/LON'
                                        */
extern real32_T P_Global_WheelBase_m;  /* Variable: P_Global_WheelBase_m
                                        * Referenced by:
                                        *   '<S7>/VIE'
                                        *   '<S8>/LATC'
                                        *   '<S17>/PLAN'
                                        *   '<S133>/VSM'
                                        */
extern real32_T P_Global_WheelTrack_m; /* Variable: P_Global_WheelTrack_m
                                        * Referenced by:
                                        *   '<S7>/VIE'
                                        *   '<S17>/PLAN'
                                        */
extern real32_T P_HMI_LDW_LKAWarnTime; /* Variable: P_HMI_LDW_LKAWarnTime
                                        * Referenced by: '<S86>/LightControl'
                                        */
extern real32_T P_HMI_ObjectTypeFilter;/* Variable: P_HMI_ObjectTypeFilter
                                        * Referenced by: '<S86>/LightControl'
                                        */
extern real32_T P_LCS_DetNoOverRide_DrvTrq_TH;
                                      /* Variable: P_LCS_DetNoOverRide_DrvTrq_TH
                                       * Referenced by: '<S8>/LATC'
                                       */
extern real32_T P_LCS_DetOverRide_DrvTrq_TH;/* Variable: P_LCS_DetOverRide_DrvTrq_TH
                                             * Referenced by: '<S8>/LATC'
                                             */
extern real32_T P_LCS_ESSOverrideValue1;/* Variable: P_LCS_ESSOverrideValue1
                                         * Referenced by: '<S8>/LATC'
                                         */
extern real32_T P_LCS_ESSOverrideValue2;/* Variable: P_LCS_ESSOverrideValue2
                                         * Referenced by: '<S8>/LATC'
                                         */
extern real32_T P_LCS_ESS_NotActiveFlgDelayTime;
                                    /* Variable: P_LCS_ESS_NotActiveFlgDelayTime
                                     * Referenced by: '<S8>/LATC'
                                     */
extern real32_T P_LCS_ESS_NotActiveFlgDelayTimeSW;
                                  /* Variable: P_LCS_ESS_NotActiveFlgDelayTimeSW
                                   * Referenced by: '<S8>/LATC'
                                   */
extern real32_T P_LCS_ESS_SteerAngleErr[12];/* Variable: P_LCS_ESS_SteerAngleErr
                                             * Referenced by: '<S8>/LATC'
                                             */
extern real32_T P_LCS_ESS_SteerAngleFilterTime;
                                     /* Variable: P_LCS_ESS_SteerAngleFilterTime
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_ESS_TarAngleFilterTime;/* Variable: P_LCS_ESS_TarAngleFilterTime
                                              * Referenced by: '<S8>/LATC'
                                              */
extern real32_T P_LCS_IN_Offset_Test_Value;/* Variable: P_LCS_IN_Offset_Test_Value
                                            * Referenced by: '<S8>/LATC'
                                            */
extern real32_T P_LCS_LATC_CurOffsetA2FliterT_s;
                                    /* Variable: P_LCS_LATC_CurOffsetA2FliterT_s
                                     * Referenced by: '<S8>/LATC'
                                     */
extern real32_T P_LCS_LATC_CurOffsetCurveFliterTime_Tab_s[10];
                          /* Variable: P_LCS_LATC_CurOffsetCurveFliterTime_Tab_s
                           * Referenced by: '<S8>/LATC'
                           */
extern real32_T P_LCS_LATC_CurOffsetCurve_TabX_m[10];
                                   /* Variable: P_LCS_LATC_CurOffsetCurve_TabX_m
                                    * Referenced by: '<S8>/LATC'
                                    */
extern real32_T P_LCS_LATC_CurOffsetVehicleSpdLimitValue_degs;
                      /* Variable: P_LCS_LATC_CurOffsetVehicleSpdLimitValue_degs
                       * Referenced by: '<S8>/LATC'
                       */
extern real32_T P_LCS_LATC_ELKAngleSlope_ratio[16];
                                     /* Variable: P_LCS_LATC_ELKAngleSlope_ratio
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_LATC_ELKMaxLatAcc_ms2[16];/* Variable: P_LCS_LATC_ELKMaxLatAcc_ms2
                                                 * Referenced by: '<S8>/LATC'
                                                 */
extern real32_T P_LCS_LATC_ESSAngleSlope_ratio[16];
                                     /* Variable: P_LCS_LATC_ESSAngleSlope_ratio
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_LATC_ESSMaxLatAcc_ms2[16];/* Variable: P_LCS_LATC_ESSMaxLatAcc_ms2
                                                 * Referenced by: '<S8>/LATC'
                                                 */
extern real32_T P_LCS_LATC_LCAngleSlope_ratio[16];
                                      /* Variable: P_LCS_LATC_LCAngleSlope_ratio
                                       * Referenced by: '<S8>/LATC'
                                       */
extern real32_T P_LCS_LATC_LCCancleMaxLatAcc_ms2[16];
                                   /* Variable: P_LCS_LATC_LCCancleMaxLatAcc_ms2
                                    * Referenced by: '<S8>/LATC'
                                    */
extern real32_T P_LCS_LATC_LCEcoAngleSlope_ratio[16];
                                   /* Variable: P_LCS_LATC_LCEcoAngleSlope_ratio
                                    * Referenced by: '<S8>/LATC'
                                    */
extern real32_T P_LCS_LATC_LCEcoMaxLatAcc_ms2[16];
                                      /* Variable: P_LCS_LATC_LCEcoMaxLatAcc_ms2
                                       * Referenced by: '<S8>/LATC'
                                       */
extern real32_T P_LCS_LATC_LCKAngleSlope_ratio[16];
                                     /* Variable: P_LCS_LATC_LCKAngleSlope_ratio
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_LATC_LCKIEAngleSlope_ratio[16];
                                   /* Variable: P_LCS_LATC_LCKIEAngleSlope_ratio
                                    * Referenced by: '<S8>/LATC'
                                    */
extern real32_T P_LCS_LATC_LCKIEMaxLatAcc_ms2[16];
                                      /* Variable: P_LCS_LATC_LCKIEMaxLatAcc_ms2
                                       * Referenced by: '<S8>/LATC'
                                       */
extern real32_T P_LCS_LATC_LCKMaxLatAcc_ms2[16];/* Variable: P_LCS_LATC_LCKMaxLatAcc_ms2
                                                 * Referenced by: '<S8>/LATC'
                                                 */
extern real32_T P_LCS_LATC_LCNormalAngleSlope_ratio[16];
                                /* Variable: P_LCS_LATC_LCNormalAngleSlope_ratio
                                 * Referenced by: '<S8>/LATC'
                                 */
extern real32_T P_LCS_LATC_LCNormalMaxLatAcc_ms2[16];
                                   /* Variable: P_LCS_LATC_LCNormalMaxLatAcc_ms2
                                    * Referenced by: '<S8>/LATC'
                                    */
extern real32_T P_LCS_LATC_LCSportAngleSlope_ratio[16];
                                 /* Variable: P_LCS_LATC_LCSportAngleSlope_ratio
                                  * Referenced by: '<S8>/LATC'
                                  */
extern real32_T P_LCS_LATC_LCSportMaxLatAcc_ms2[16];
                                    /* Variable: P_LCS_LATC_LCSportMaxLatAcc_ms2
                                     * Referenced by: '<S8>/LATC'
                                     */
extern real32_T P_LCS_LATC_LKAAngleSlope_ratio[16];
                                     /* Variable: P_LCS_LATC_LKAAngleSlope_ratio
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_LATC_LKAMaxLatAcc_ms2[16];/* Variable: P_LCS_LATC_LKAMaxLatAcc_ms2
                                                 * Referenced by: '<S8>/LATC'
                                                 */
extern real32_T P_LCS_LATC_MPCDeltaT_s;/* Variable: P_LCS_LATC_MPCDeltaT_s
                                        * Referenced by: '<S8>/LATC'
                                        */
extern real32_T P_LCS_LATC_MPCMatrixQ1_st[16];/* Variable: P_LCS_LATC_MPCMatrixQ1_st
                                               * Referenced by: '<S8>/LATC'
                                               */
extern real32_T P_LCS_LATC_MPCMatrixQ2_st[16];/* Variable: P_LCS_LATC_MPCMatrixQ2_st
                                               * Referenced by: '<S8>/LATC'
                                               */
extern real32_T P_LCS_LATC_MPCMatrixR_st[16];/* Variable: P_LCS_LATC_MPCMatrixR_st
                                              * Referenced by: '<S8>/LATC'
                                              */
extern real32_T P_LCS_LATC_MPCMaxSterAngleSpd_degs;
                                 /* Variable: P_LCS_LATC_MPCMaxSterAngleSpd_degs
                                  * Referenced by: '<S8>/LATC'
                                  */
extern real32_T P_LCS_LATC_MPCMaxSterAngle_deg;
                                     /* Variable: P_LCS_LATC_MPCMaxSterAngle_deg
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_LATC_StateActivAngleSlopeLimit_ratio[75];
                         /* Variable: P_LCS_LATC_StateActivAngleSlopeLimit_ratio
                          * Referenced by: '<S8>/LATC'
                          */
extern real32_T P_LCS_LATC_VehicleSpd_TabX_Kph[12];
                                     /* Variable: P_LCS_LATC_VehicleSpd_TabX_Kph
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_LCC_HeadingErRrateTime_s;
                                     /* Variable: P_LCS_LCC_HeadingErRrateTime_s
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_LCC_HeadingErrTime_s;/* Variable: P_LCS_LCC_HeadingErrTime_s
                                            * Referenced by: '<S8>/LATC'
                                            */
extern real32_T P_LCS_LCC_LaterErrRateTime_s;/* Variable: P_LCS_LCC_LaterErrRateTime_s
                                              * Referenced by: '<S8>/LATC'
                                              */
extern real32_T P_LCS_LCC_LaterErrTime_s;/* Variable: P_LCS_LCC_LaterErrTime_s
                                          * Referenced by: '<S8>/LATC'
                                          */
extern real32_T P_LCS_LCC_RefThetaTime_s;/* Variable: P_LCS_LCC_RefThetaTime_s
                                          * Referenced by: '<S8>/LATC'
                                          */
extern real32_T P_LCS_LCC_RefcurveTime_s;/* Variable: P_LCS_LCC_RefcurveTime_s
                                          * Referenced by: '<S8>/LATC'
                                          */
extern real32_T P_LCS_PLAN_A2FliterTime_s;/* Variable: P_LCS_PLAN_A2FliterTime_s
                                           * Referenced by: '<S8>/LATC'
                                           */
extern real32_T P_LCS_PLAN_DesLineA0_TabX_m[7];/* Variable: P_LCS_PLAN_DesLineA0_TabX_m
                                                * Referenced by: '<S8>/LATC'
                                                */
extern real32_T P_LCS_PLAN_DesLineA0_TabY_m[7];/* Variable: P_LCS_PLAN_DesLineA0_TabY_m
                                                * Referenced by: '<S8>/LATC'
                                                */
extern real32_T P_LCS_PLAN_DisFac_Tab_ratio;/* Variable: P_LCS_PLAN_DisFac_Tab_ratio
                                             * Referenced by: '<S8>/LATC'
                                             */
extern real32_T P_LCS_PLAN_LCCompletePreDisFac_Tab_ratio[45];
                           /* Variable: P_LCS_PLAN_LCCompletePreDisFac_Tab_ratio
                            * Referenced by: '<S8>/LATC'
                            */
extern real32_T P_LCS_PLAN_LCKAyDtLimit_Tab_ms3[208];
                                    /* Variable: P_LCS_PLAN_LCKAyDtLimit_Tab_ms3
                                     * Referenced by: '<S8>/LATC'
                                     */
extern real32_T P_LCS_PLAN_LCPreDisFac_ratio[21];/* Variable: P_LCS_PLAN_LCPreDisFac_ratio
                                                  * Referenced by: '<S8>/LATC'
                                                  */
extern real32_T P_LCS_PLAN_MinDis_m;   /* Variable: P_LCS_PLAN_MinDis_m
                                        * Referenced by: '<S8>/LATC'
                                        */
extern real32_T P_LCS_PLAN_PreDisCurve_TabX_m[13];
                                      /* Variable: P_LCS_PLAN_PreDisCurve_TabX_m
                                       * Referenced by: '<S8>/LATC'
                                       */
extern real32_T P_LCS_PLAN_PreDis_Tab_m[16];/* Variable: P_LCS_PLAN_PreDis_Tab_m
                                             * Referenced by: '<S8>/LATC'
                                             */
extern real32_T P_LCS_PLAN_StateActivAngleSlope_Tab_ratio[75];
                          /* Variable: P_LCS_PLAN_StateActivAngleSlope_Tab_ratio
                           * Referenced by: '<S8>/LATC'
                           */
extern real32_T P_LCS_PLAN_StateCompleteAngleSlope_Tab_ratio[45];
                       /* Variable: P_LCS_PLAN_StateCompleteAngleSlope_Tab_ratio
                        * Referenced by: '<S8>/LATC'
                        */
extern real32_T P_LCS_PLAN_TarDangerlLevel_Tabx_st[3];
                                 /* Variable: P_LCS_PLAN_TarDangerlLevel_Tabx_st
                                  * Referenced by: '<S8>/LATC'
                                  */
extern real32_T P_LCS_PLAN_VehicleSpd_TabY_Kph[16];
                                     /* Variable: P_LCS_PLAN_VehicleSpd_TabY_Kph
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_PlLAN_PreDisFac_Tab_ratio[91];
                                    /* Variable: P_LCS_PlLAN_PreDisFac_Tab_ratio
                                     * Referenced by: '<S8>/LATC'
                                     */
extern real32_T P_LCS_Plan_A2Pretime_s;/* Variable: P_LCS_Plan_A2Pretime_s
                                        * Referenced by: '<S8>/LATC'
                                        */
extern real32_T P_LCS_Plan_ELKAyDtLimit_Tab_ms3[208];
                                    /* Variable: P_LCS_Plan_ELKAyDtLimit_Tab_ms3
                                     * Referenced by: '<S8>/LATC'
                                     */
extern real32_T P_LCS_Plan_LCAyDtLimit_Tab_ms3[208];
                                     /* Variable: P_LCS_Plan_LCAyDtLimit_Tab_ms3
                                      * Referenced by: '<S8>/LATC'
                                      */
extern real32_T P_LCS_Plan_LCKIEAyDtLimit_Tab_ms3[208];
                                  /* Variable: P_LCS_Plan_LCKIEAyDtLimit_Tab_ms3
                                   * Referenced by: '<S8>/LATC'
                                   */
extern real32_T P_LCS_Plan_LCNomalAyDtLimit_Tab_ms3[208];
                                /* Variable: P_LCS_Plan_LCNomalAyDtLimit_Tab_ms3
                                 * Referenced by: '<S8>/LATC'
                                 */
extern real32_T P_LCS_Plan_LCSportAyDtLimit_Tab_ms3[208];
                                /* Variable: P_LCS_Plan_LCSportAyDtLimit_Tab_ms3
                                 * Referenced by: '<S8>/LATC'
                                 */
extern real32_T P_LCS_Plan_LKAAyDtLimit_Tab_ms3[208];
                                    /* Variable: P_LCS_Plan_LKAAyDtLimit_Tab_ms3
                                     * Referenced by: '<S8>/LATC'
                                     */
extern real32_T P_LCS_VehicleSpd_TabX_Kph[16];/* Variable: P_LCS_VehicleSpd_TabX_Kph
                                               * Referenced by: '<S8>/LATC'
                                               */
extern real32_T P_LSM_DOPValid_CheckTime;/* Variable: P_LSM_DOPValid_CheckTime
                                          * Referenced by: '<S132>/LSM'
                                          */
extern real32_T P_LSM_DOP_C1AndC2_Lim_X[7];/* Variable: P_LSM_DOP_C1AndC2_Lim_X
                                            * Referenced by: '<S132>/LSM'
                                            */
extern real32_T P_LSM_DOP_C1_EN_Limit[7];/* Variable: P_LSM_DOP_C1_EN_Limit
                                          * Referenced by: '<S132>/LSM'
                                          */
extern real32_T P_LSM_DOP_C1_out_Limit[7];/* Variable: P_LSM_DOP_C1_out_Limit
                                           * Referenced by: '<S132>/LSM'
                                           */
extern real32_T P_LSM_DOP_C2_EN_Limit[7];/* Variable: P_LSM_DOP_C2_EN_Limit
                                          * Referenced by: '<S132>/LSM'
                                          */
extern real32_T P_LSM_DOP_C2_out_Limit[7];/* Variable: P_LSM_DOP_C2_out_Limit
                                           * Referenced by: '<S132>/LSM'
                                           */
extern real32_T P_LSM_DOP_In_Pre2Dop_Dis;/* Variable: P_LSM_DOP_In_Pre2Dop_Dis
                                          * Referenced by: '<S132>/LSM'
                                          */
extern real32_T P_LSM_DOP_Out_Pre2Dop_Dis;/* Variable: P_LSM_DOP_Out_Pre2Dop_Dis
                                           * Referenced by: '<S132>/LSM'
                                           */
extern real32_T P_LSM_DOP_PreDis_X[16];/* Variable: P_LSM_DOP_PreDis_X
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_DOP_PreDis_Y[16];/* Variable: P_LSM_DOP_PreDis_Y
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_DoubleLine_Curr2Cent_Dislimit;
                                /* Variable: P_LSM_DoubleLine_Curr2Cent_Dislimit
                                 * Referenced by: '<S132>/LSM'
                                 */
extern real32_T P_LSM_DoubleLine_DOPOut_C1[7];/* Variable: P_LSM_DoubleLine_DOPOut_C1
                                               * Referenced by: '<S132>/LSM'
                                               */
extern real32_T P_LSM_DoubleLine_Dop2Cent_Dislimit;
                                 /* Variable: P_LSM_DoubleLine_Dop2Cent_Dislimit
                                  * Referenced by: '<S132>/LSM'
                                  */
extern real32_T P_LSM_DoubleLine_Pre2Cent_Dislimit;
                                 /* Variable: P_LSM_DoubleLine_Pre2Cent_Dislimit
                                  * Referenced by: '<S132>/LSM'
                                  */
extern real32_T P_LSM_IFV2CenterAxis;  /* Variable: P_LSM_IFV2CenterAxis
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_IFV2RearAxis;    /* Variable: P_LSM_IFV2RearAxis
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_LineSTD_Limit;   /* Variable: P_LSM_LineSTD_Limit
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_LineWijCal_C12;  /* Variable: P_LSM_LineWijCal_C12
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_LineWijCal_C13;  /* Variable: P_LSM_LineWijCal_C13
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_PosLineLcFac;    /* Variable: P_LSM_PosLineLcFac
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_Pre_t;           /* Variable: P_LSM_Pre_t
                                        * Referenced by: '<S132>/LSM'
                                        */
extern real32_T P_LSM_SingleLine_Cent2Edge_Dislimit;
                                /* Variable: P_LSM_SingleLine_Cent2Edge_Dislimit
                                 * Referenced by: '<S132>/LSM'
                                 */
extern real32_T P_LSM_SingleLine_Curr2Cent_Dislimit;
                                /* Variable: P_LSM_SingleLine_Curr2Cent_Dislimit
                                 * Referenced by: '<S132>/LSM'
                                 */
extern real32_T P_LSM_SingleLine_DOPOut_C1[7];/* Variable: P_LSM_SingleLine_DOPOut_C1
                                               * Referenced by: '<S132>/LSM'
                                               */
extern real32_T P_LSM_SingleLine_Dop2Cent_Dislimit;
                                 /* Variable: P_LSM_SingleLine_Dop2Cent_Dislimit
                                  * Referenced by: '<S132>/LSM'
                                  */
extern real32_T P_LSM_SingleLine_Pre2Cent_Dislimit;
                                 /* Variable: P_LSM_SingleLine_Pre2Cent_Dislimit
                                  * Referenced by: '<S132>/LSM'
                                  */
extern real32_T P_LongCtrl_AxvRoadSlopeThrd;/* Variable: P_LongCtrl_AxvRoadSlopeThrd
                                             * Referenced by: '<S8>/LON'
                                             */
extern real32_T P_LongCtrl_TotWheelTrqRatio;/* Variable: P_LongCtrl_TotWheelTrqRatio
                                             * Referenced by: '<S8>/LON'
                                             */
extern real32_T P_LongCtrl_VLCAxTarDtThreEnableI;
                                   /* Variable: P_LongCtrl_VLCAxTarDtThreEnableI
                                    * Referenced by: '<S8>/LON'
                                    */
extern real32_T P_LongCtrl_VLCAxvTracMinDC1FullFillXAxis[4];
                           /* Variable: P_LongCtrl_VLCAxvTracMinDC1FullFillXAxis
                            * Referenced by: '<S8>/LON'
                            */
extern real32_T P_LongCtrl_VLCAxvTracMinDC1FullFillYAxis[4];
                           /* Variable: P_LongCtrl_VLCAxvTracMinDC1FullFillYAxis
                            * Referenced by: '<S8>/LON'
                            */
extern real32_T P_LongCtrl_VLCCounterAxvTracMinTimeout;
                             /* Variable: P_LongCtrl_VLCCounterAxvTracMinTimeout
                              * Referenced by: '<S8>/LON'
                              */
extern real32_T P_LongCtrl_VLCCounterDC2ECTorqDelay;
                                /* Variable: P_LongCtrl_VLCCounterDC2ECTorqDelay
                                 * Referenced by: '<S8>/LON'
                                 */
extern real32_T P_LongCtrl_VLCCounterDrvOff2EC;
                                     /* Variable: P_LongCtrl_VLCCounterDrvOff2EC
                                      * Referenced by: '<S8>/LON'
                                      */
extern real32_T P_LongCtrl_VLCDtAxvRef2UpperBandDC5;
                                /* Variable: P_LongCtrl_VLCDtAxvRef2UpperBandDC5
                                 * Referenced by: '<S8>/LON'
                                 */
extern real32_T P_LongCtrl_VLCIACompensionNeg;
                                      /* Variable: P_LongCtrl_VLCIACompensionNeg
                                       * Referenced by: '<S8>/LON'
                                       */
extern real32_T P_LongCtrl_VLCIACompensionPos;
                                      /* Variable: P_LongCtrl_VLCIACompensionPos
                                       * Referenced by: '<S8>/LON'
                                       */
extern real32_T P_LongCtrl_VLCLowerJerkCounterDrvOff2EC;
                            /* Variable: P_LongCtrl_VLCLowerJerkCounterDrvOff2EC
                             * Referenced by: '<S8>/LON'
                             */
extern real32_T P_LongCtrl_VLCMaRatioCharMaYAxis[18];
                                   /* Variable: P_LongCtrl_VLCMaRatioCharMaYAxis
                                    * Referenced by: '<S8>/LON'
                                    */
extern real32_T P_LongCtrl_VLCTorqDiffThreAxvTracMinTimeout;
                        /* Variable: P_LongCtrl_VLCTorqDiffThreAxvTracMinTimeout
                         * Referenced by: '<S8>/LON'
                         */
extern real32_T P_LongCtrl_VLCTrRatioCharMaXAxis[18];
                                   /* Variable: P_LongCtrl_VLCTrRatioCharMaXAxis
                                    * Referenced by: '<S8>/LON'
                                    */
extern real32_T P_LongCtrl_VLCTrTatioMax;/* Variable: P_LongCtrl_VLCTrTatioMax
                                          * Referenced by: '<S8>/LON'
                                          */
extern real32_T P_LongCtrl_VLCTrTatioMin;/* Variable: P_LongCtrl_VLCTrTatioMin
                                          * Referenced by: '<S8>/LON'
                                          */
extern real32_T P_LongCtrl_VLCUpperJerkCounterDrvOff2EC;
                            /* Variable: P_LongCtrl_VLCUpperJerkCounterDrvOff2EC
                             * Referenced by: '<S8>/LON'
                             */
extern real32_T P_LongCtrl_VLCVlcAccThresAxvTracMinTimeout;
                         /* Variable: P_LongCtrl_VLCVlcAccThresAxvTracMinTimeout
                          * Referenced by: '<S8>/LON'
                          */
extern real32_T P_LongCtrl_VLC_WindArea;/* Variable: P_LongCtrl_VLC_WindArea
                                         * Referenced by: '<S8>/LON'
                                         */
extern real32_T P_LongCtrl_VLC_fRollCoef;/* Variable: P_LongCtrl_VLC_fRollCoef
                                          * Referenced by: '<S8>/LON'
                                          */
extern real32_T P_LongCtrl_VLCaDiffCharCoefKiEnableXAxis[6];
                           /* Variable: P_LongCtrl_VLCaDiffCharCoefKiEnableXAxis
                            * Referenced by: '<S8>/LON'
                            */
extern real32_T P_LongCtrl_VLCaDiffCharCoefKiXAxis[11];
                                 /* Variable: P_LongCtrl_VLCaDiffCharCoefKiXAxis
                                  * Referenced by: '<S8>/LON'
                                  */
extern real32_T P_LongCtrl_VLCaDtThresUpdateTorq;
                                   /* Variable: P_LongCtrl_VLCaDtThresUpdateTorq
                                    * Referenced by: '<S8>/LON'
                                    */
extern real32_T P_LongCtrl_VLCaXCDeadZoneProp_Y[7];
                                    /* Variable: P_LongCtrl_VLCaXCDeadZoneProp_Y
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCaccelMinHoldXAxis[2];
                                    /* Variable: P_LongCtrl_VLCaccelMinHoldXAxis
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCaccelMinHoldYAxis[2];
                                    /* Variable: P_LongCtrl_VLCaccelMinHoldYAxis
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCaccelMinSlidHoldXAxis[7];
                                /* Variable: P_LongCtrl_VLCaccelMinSlidHoldXAxis
                                 * Referenced by: '<S8>/LON'
                                 */
extern real32_T P_LongCtrl_VLCaccelMinSlidHoldYAxis[7];
                                /* Variable: P_LongCtrl_VLCaccelMinSlidHoldYAxis
                                 * Referenced by: '<S8>/LON'
                                 */
extern real32_T P_LongCtrl_VLCaxCtrlDevDeadZoneChar_Y[5];
                              /* Variable: P_LongCtrl_VLCaxCtrlDevDeadZoneChar_Y
                               * Referenced by: '<S8>/LON'
                               */
extern real32_T P_LongCtrl_VLCaxCtrlDevEC2DCMax;
                                    /* Variable: P_LongCtrl_VLCaxCtrlDevEC2DCMax
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCaxCtrlDevFastQuitDCMode;
                              /* Variable: P_LongCtrl_VLCaxCtrlDevFastQuitDCMode
                               * Referenced by: '<S8>/LON'
                               */
extern real32_T P_LongCtrl_VLCaxCtrlDevThresAddEC2DCCharYAxis[5];
                      /* Variable: P_LongCtrl_VLCaxCtrlDevThresAddEC2DCCharYAxis
                       * Referenced by: '<S8>/LON'
                       */
extern real32_T P_LongCtrl_VLCaxCtrlDevTresAddDC2ECYAxis[5];
                           /* Variable: P_LongCtrl_VLCaxCtrlDevTresAddDC2ECYAxis
                            * Referenced by: '<S8>/LON'
                            */
extern real32_T P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddDC2ECXAxis[5];
                   /* Variable: P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddDC2ECXAxis
                    * Referenced by: '<S8>/LON'
                    */
extern real32_T P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddEC2DCXAxis[5];
                   /* Variable: P_LongCtrl_VLCaxDtCharAxCtrlDevTresAddEC2DCXAxis
                    * Referenced by: '<S8>/LON'
                    */
extern real32_T P_LongCtrl_VLCaxvRoadSlopeDC4CharXAxis[5];
                             /* Variable: P_LongCtrl_VLCaxvRoadSlopeDC4CharXAxis
                              * Referenced by: '<S8>/LON'
                              */
extern real32_T P_LongCtrl_VLCaxvRoadSlopeDC4CharYAxis[5];
                             /* Variable: P_LongCtrl_VLCaxvRoadSlopeDC4CharYAxis
                              * Referenced by: '<S8>/LON'
                              */
extern real32_T P_LongCtrl_VLCcoefFXAxis[10];/* Variable: P_LongCtrl_VLCcoefFXAxis
                                              * Referenced by: '<S8>/LON'
                                              */
extern real32_T P_LongCtrl_VLCcoefFYAxis[10];/* Variable: P_LongCtrl_VLCcoefFYAxis
                                              * Referenced by: '<S8>/LON'
                                              */
extern real32_T P_LongCtrl_VLCcoefIFadeOut1Calc;
                                    /* Variable: P_LongCtrl_VLCcoefIFadeOut1Calc
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCcoefIFadeOut1Condition;
                               /* Variable: P_LongCtrl_VLCcoefIFadeOut1Condition
                                * Referenced by: '<S8>/LON'
                                */
extern real32_T P_LongCtrl_VLCcoefIFadeOut2Calc;
                                    /* Variable: P_LongCtrl_VLCcoefIFadeOut2Calc
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCcoefIFadeOut2Condition;
                               /* Variable: P_LongCtrl_VLCcoefIFadeOut2Condition
                                * Referenced by: '<S8>/LON'
                                */
extern real32_T P_LongCtrl_VLCcoefIFadeOut3Calc;
                                    /* Variable: P_LongCtrl_VLCcoefIFadeOut3Calc
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCcoefIFadeOut3Condition;
                               /* Variable: P_LongCtrl_VLCcoefIFadeOut3Condition
                                * Referenced by: '<S8>/LON'
                                */
extern real32_T P_LongCtrl_VLCcoefKiDiffDtEnlargeYAxis[6];
                             /* Variable: P_LongCtrl_VLCcoefKiDiffDtEnlargeYAxis
                              * Referenced by: '<S8>/LON'
                              */
extern real32_T P_LongCtrl_VLCcoefKiEnableYAxis[6];
                                    /* Variable: P_LongCtrl_VLCcoefKiEnableYAxis
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCcoefKiEnlargeADiffYAxis[11];
                              /* Variable: P_LongCtrl_VLCcoefKiEnlargeADiffYAxis
                               * Referenced by: '<S8>/LON'
                               */
extern real32_T P_LongCtrl_VLCcoefPIYAxis[4];/* Variable: P_LongCtrl_VLCcoefPIYAxis
                                              * Referenced by: '<S8>/LON'
                                              */
extern real32_T P_LongCtrl_VLCdaxTarEC2DCMax;/* Variable: P_LongCtrl_VLCdaxTarEC2DCMax
                                              * Referenced by: '<S8>/LON'
                                              */
extern real32_T P_LongCtrl_VLCdiffDtCharCoefKiEnlargeXAxis[6];
                         /* Variable: P_LongCtrl_VLCdiffDtCharCoefKiEnlargeXAxis
                          * Referenced by: '<S8>/LON'
                          */
extern real32_T P_LongCtrl_VLCdriveOffAxUpLimXAxix[5];
                                 /* Variable: P_LongCtrl_VLCdriveOffAxUpLimXAxix
                                  * Referenced by: '<S8>/LON'
                                  */
extern real32_T P_LongCtrl_VLCdriveOffAxUpLimYAxix[5];
                                 /* Variable: P_LongCtrl_VLCdriveOffAxUpLimYAxix
                                  * Referenced by: '<S8>/LON'
                                  */
extern real32_T P_LongCtrl_VLCengEfficientCharYAxis[5];
                                /* Variable: P_LongCtrl_VLCengEfficientCharYAxis
                                 * Referenced by: '<S8>/LON'
                                 */
extern real32_T P_LongCtrl_VLCengInverseEfficientYAxis[5];
                             /* Variable: P_LongCtrl_VLCengInverseEfficientYAxis
                              * Referenced by: '<S8>/LON'
                              */
extern real32_T P_LongCtrl_VLCjerkHoldXAxis[2];/* Variable: P_LongCtrl_VLCjerkHoldXAxis
                                                * Referenced by: '<S8>/LON'
                                                */
extern real32_T P_LongCtrl_VLCjerkHoldYAxis[2];/* Variable: P_LongCtrl_VLCjerkHoldYAxis
                                                * Referenced by: '<S8>/LON'
                                                */
extern real32_T P_LongCtrl_VLCjerkSlidHoldXAxis[7];
                                    /* Variable: P_LongCtrl_VLCjerkSlidHoldXAxis
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCjerkSlidHoldYAxis[7];
                                    /* Variable: P_LongCtrl_VLCjerkSlidHoldYAxis
                                     * Referenced by: '<S8>/LON'
                                     */
extern real32_T P_LongCtrl_VLCki;      /* Variable: P_LongCtrl_VLCki
                                        * Referenced by: '<S8>/LON'
                                        */
extern real32_T P_LongCtrl_VLCkp;      /* Variable: P_LongCtrl_VLCkp
                                        * Referenced by: '<S8>/LON'
                                        */
extern real32_T P_LongCtrl_VLCks;      /* Variable: P_LongCtrl_VLCks
                                        * Referenced by: '<S8>/LON'
                                        */
extern real32_T P_LongCtrl_VLCtorqCharEngEfficientXAxis[5];
                            /* Variable: P_LongCtrl_VLCtorqCharEngEfficientXAxis
                             * Referenced by: '<S8>/LON'
                             */
extern real32_T P_LongCtrl_VLCtorqCharEngInverseEfficientXAxis[5];
                     /* Variable: P_LongCtrl_VLCtorqCharEngInverseEfficientXAxis
                      * Referenced by: '<S8>/LON'
                      */
extern real32_T P_LongCtrl_VLCvelCharAxCtrlDevDeadZoneXAxis[5];
                        /* Variable: P_LongCtrl_VLCvelCharAxCtrlDevDeadZoneXAxis
                         * Referenced by: '<S8>/LON'
                         */
extern real32_T P_LongCtrl_VLCvelCharCoefPIXAxis[4];
                                   /* Variable: P_LongCtrl_VLCvelCharCoefPIXAxis
                                    * Referenced by: '<S8>/LON'
                                    */
extern real32_T P_LongCtrl_VLCvelThresUpdateTorq;
                                   /* Variable: P_LongCtrl_VLCvelThresUpdateTorq
                                    * Referenced by: '<S8>/LON'
                                    */
extern real32_T P_LongCtrl_VxvRefThrd; /* Variable: P_LongCtrl_VxvRefThrd
                                        * Referenced by: '<S8>/LON'
                                        */
extern real32_T P_TOSS_DxOffset;       /* Variable: P_TOSS_DxOffset
                                        * Referenced by: '<S172>/Bias'
                                        */
extern real32_T P_VSM_ACC_BOMEntry_ACCDecReqValue;
                                  /* Variable: P_VSM_ACC_BOMEntry_ACCDecReqValue
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_ACC_BOMEntry_AxvRefMs2;/* Variable: P_VSM_ACC_BOMEntry_AxvRefMs2
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_ACC_BOMExit_ACCDecReqValue;
                                   /* Variable: P_VSM_ACC_BOMExit_ACCDecReqValue
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_ACC_RadarOffset; /* Variable: P_VSM_ACC_RadarOffset
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_ELK_Lane_Width_Table[7];/* Variable: P_VSM_ELK_Lane_Width_Table
                                               * Referenced by: '<S133>/VSM'
                                               */
extern real32_T P_VSM_ELK_Lane_Width_Table_Calibration[7];
                             /* Variable: P_VSM_ELK_Lane_Width_Table_Calibration
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_ELK_OnComing_Lateral;/* Variable: P_VSM_ELK_OnComing_Lateral
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_ELK_OnComing_TTC;/* Variable: P_VSM_ELK_OnComing_TTC
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_ELK_OverTaking_Lateral;/* Variable: P_VSM_ELK_OverTaking_Lateral
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_ELK_OverTaking_TTC;/* Variable: P_VSM_ELK_OverTaking_TTC
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_ELK_Sensitive_Table[3];/* Variable: P_VSM_ELK_Sensitive_Table
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_ELK_Sensitive_Table_Calibration[3];
                              /* Variable: P_VSM_ELK_Sensitive_Table_Calibration
                               * Referenced by: '<S133>/VSM'
                               */
extern real32_T P_VSM_ELK_State_Absesp_enable;
                                      /* Variable: P_VSM_ELK_State_Absesp_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_ELK_State_Accpedalrate_enable;
                                /* Variable: P_VSM_ELK_State_Accpedalrate_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_ELK_State_Breakpressure_enable;
                               /* Variable: P_VSM_ELK_State_Breakpressure_enable
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_ELK_State_DriverInputTrqValue_enable;
                         /* Variable: P_VSM_ELK_State_DriverInputTrqValue_enable
                          * Referenced by: '<S133>/VSM'
                          */
extern real32_T P_VSM_ELK_State_ESSSts_enable;
                                      /* Variable: P_VSM_ELK_State_ESSSts_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_ELK_State_Eps_enable;/* Variable: P_VSM_ELK_State_Eps_enable
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_ELK_State_Failsafe_enable;
                                    /* Variable: P_VSM_ELK_State_Failsafe_enable
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_ELK_State_GEAR_enable;/* Variable: P_VSM_ELK_State_GEAR_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_ELK_State_Headingangle_enable;
                                /* Variable: P_VSM_ELK_State_Headingangle_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_ELK_State_LaneChange_enable;
                                  /* Variable: P_VSM_ELK_State_LaneChange_enable
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_ELK_State_Lane_enable;/* Variable: P_VSM_ELK_State_Lane_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_ELK_State_Lanecurve_enable;
                                   /* Variable: P_VSM_ELK_State_Lanecurve_enable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_ELK_State_LateralAcce_enable;
                                 /* Variable: P_VSM_ELK_State_LateralAcce_enable
                                  * Referenced by: '<S133>/VSM'
                                  */
extern real32_T P_VSM_ELK_State_LongitudeAcc_enable;
                                /* Variable: P_VSM_ELK_State_LongitudeAcc_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_ELK_State_Overide_enable;
                                     /* Variable: P_VSM_ELK_State_Overide_enable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_ELK_State_Param_AngleOffset;
                                  /* Variable: P_VSM_ELK_State_Param_AngleOffset
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_ELK_State_Param_OnTime[16];/* Variable: P_VSM_ELK_State_Param_OnTime
                                                  * Referenced by: '<S133>/VSM'
                                                  */
extern real32_T P_VSM_ELK_State_Param_Oncoming;
                                     /* Variable: P_VSM_ELK_State_Param_Oncoming
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_ELK_State_Param_OutOffset;
                                    /* Variable: P_VSM_ELK_State_Param_OutOffset
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_ELK_State_Param_OvTime[16];/* Variable: P_VSM_ELK_State_Param_OvTime
                                                  * Referenced by: '<S133>/VSM'
                                                  */
extern real32_T P_VSM_ELK_State_Param_Over;/* Variable: P_VSM_ELK_State_Param_Over
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_ELK_State_Param_Speed[16];/* Variable: P_VSM_ELK_State_Param_Speed
                                                 * Referenced by: '<S133>/VSM'
                                                 */
extern real32_T P_VSM_ELK_State_SteerWheelAngle_enable;
                             /* Variable: P_VSM_ELK_State_SteerWheelAngle_enable
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_ELK_State_SteerWheelSpd_enable;
                               /* Variable: P_VSM_ELK_State_SteerWheelSpd_enable
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_ELK_State_Vehspeed_enable;
                                    /* Variable: P_VSM_ELK_State_Vehspeed_enable
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_ELK_State_Yawsup_enable;
                                      /* Variable: P_VSM_ELK_State_Yawsup_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_ESS_ACtiveTime;  /* Variable: P_VSM_ESS_ACtiveTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_ESS_AccPedlPosn_Param;/* Variable: P_VSM_ESS_AccPedlPosn_Param
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_ESS_AngleSpdTable_deg[6];/* Variable: P_VSM_ESS_AngleSpdTable_deg
                                                * Referenced by: '<S133>/VSM'
                                                */
extern real32_T P_VSM_ESS_DangerPlausLeft;/* Variable: P_VSM_ESS_DangerPlausLeft
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_ESS_DangerPlausRight;/* Variable: P_VSM_ESS_DangerPlausRight
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_ESS_DelayTime;   /* Variable: P_VSM_ESS_DelayTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_ESS_DriveIn[6];  /* Variable: P_VSM_ESS_DriveIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_ESS_DriveIn_BP[6];/* Variable: P_VSM_ESS_DriveIn_BP
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_ESS_DriverInputTrq_Param[6];
                                     /* Variable: P_VSM_ESS_DriverInputTrq_Param
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_ESS_DrvOverTime_Param;/* Variable: P_VSM_ESS_DrvOverTime_Param
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_ESS_IPSpeed_kmh[6];/* Variable: P_VSM_ESS_IPSpeed_kmh
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_ESS_LgtAccelLower_Param;
                                      /* Variable: P_VSM_ESS_LgtAccelLower_Param
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_ESS_LgtAccelUpper_Param;
                                      /* Variable: P_VSM_ESS_LgtAccelUpper_Param
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_ESS_MasterCylindBrake;/* Variable: P_VSM_ESS_MasterCylindBrake
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_ESS_MaxLateral_mss[6];/* Variable: P_VSM_ESS_MaxLateral_mss
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_ESS_SafeDistance_m;/* Variable: P_VSM_ESS_SafeDistance_m
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_ESS_SpdPoint_kmh[6];/* Variable: P_VSM_ESS_SpdPoint_kmh
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_ESS_SpdTime_s[6];/* Variable: P_VSM_ESS_SpdTime_s
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_ESS_SteerWheelSpd_BP[6];/* Variable: P_VSM_ESS_SteerWheelSpd_BP
                                               * Referenced by: '<S133>/VSM'
                                               */
extern real32_T P_VSM_ESS_SteerWheelSpd_Param[6];
                                      /* Variable: P_VSM_ESS_SteerWheelSpd_Param
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_ESS_StopA0_Param;/* Variable: P_VSM_ESS_StopA0_Param
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_ESS_StopA1Time_Param;/* Variable: P_VSM_ESS_StopA1Time_Param
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_ESS_StopA1_Param;/* Variable: P_VSM_ESS_StopA1_Param
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_HOD_DrvTrqFlterTIme;/* Variable: P_VSM_HOD_DrvTrqFlterTIme
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_HOD_HWA_HandsOffLev1TimeCnt;
                                  /* Variable: P_VSM_HOD_HWA_HandsOffLev1TimeCnt
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_HOD_HWA_HandsOffLev2TimeCnt;
                                  /* Variable: P_VSM_HOD_HWA_HandsOffLev2TimeCnt
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_HOD_HWA_HandsOffLev3TimeCnt;
                                  /* Variable: P_VSM_HOD_HWA_HandsOffLev3TimeCnt
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_HOD_HWA_HandsOffLev4TimeCnt;
                                  /* Variable: P_VSM_HOD_HWA_HandsOffLev4TimeCnt
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_HOD_HandsOff_Tr; /* Variable: P_VSM_HOD_HandsOff_Tr
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_HOD_HandsOn_Tr;  /* Variable: P_VSM_HOD_HandsOn_Tr
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_HOD_Handson_TimeInsertPoint[5];
                                  /* Variable: P_VSM_HOD_Handson_TimeInsertPoint
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_HOD_Handson_TrqInsertPoint[5];
                                   /* Variable: P_VSM_HOD_Handson_TrqInsertPoint
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_HOD_LCKTJA_HandsOffLev1TimeCnt;
                               /* Variable: P_VSM_HOD_LCKTJA_HandsOffLev1TimeCnt
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_HOD_LCKTJA_HandsOffLev2TimeCnt;
                               /* Variable: P_VSM_HOD_LCKTJA_HandsOffLev2TimeCnt
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_HOD_LCKTJA_HandsOffLev3TimeCnt;
                               /* Variable: P_VSM_HOD_LCKTJA_HandsOffLev3TimeCnt
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_HOD_LCKTJA_HandsOffLev4TimeCnt;
                               /* Variable: P_VSM_HOD_LCKTJA_HandsOffLev4TimeCnt
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_HWAActivation_NOAMOd_Spd;
                                     /* Variable: P_VSM_HWAActivation_NOAMOd_Spd
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_HWAActivation_Spd_Low;/* Variable: P_VSM_HWAActivation_Spd_Low
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_HWAActivation_Spd_Up;/* Variable: P_VSM_HWAActivation_Spd_Up
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCKIE_ClassInput;/* Variable: P_VSM_LCKIE_ClassInput
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCKIE_LATC_LimitDis[5];/* Variable: P_VSM_LCKIE_LATC_LimitDis
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LCKIE_LATC_LimitDis_BP[5];/* Variable: P_VSM_LCKIE_LATC_LimitDis_BP
                                                 * Referenced by: '<S133>/VSM'
                                                 */
extern real32_T P_VSM_LCKIE_Laneoffset[5];/* Variable: P_VSM_LCKIE_Laneoffset
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LCKIE_Laneoffset_BP[5];/* Variable: P_VSM_LCKIE_Laneoffset_BP
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LCKIE_LatC_DisOffofLanWidth[4];
                                  /* Variable: P_VSM_LCKIE_LatC_DisOffofLanWidth
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_LCKIE_LatC_DisOffofSpd[6];/* Variable: P_VSM_LCKIE_LatC_DisOffofSpd
                                                 * Referenced by: '<S133>/VSM'
                                                 */
extern real32_T P_VSM_LCKIE_LatC_DisSW;/* Variable: P_VSM_LCKIE_LatC_DisSW
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCKIE_LatC_LanWidth[4];/* Variable: P_VSM_LCKIE_LatC_LanWidth
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LCKIE_LatC_LimitDisEgoToObjSelt;
                              /* Variable: P_VSM_LCKIE_LatC_LimitDisEgoToObjSelt
                               * Referenced by: '<S133>/VSM'
                               */
extern real32_T P_VSM_LCKIE_LatC_LimitEgoToOppLane;
                                 /* Variable: P_VSM_LCKIE_LatC_LimitEgoToOppLane
                                  * Referenced by: '<S133>/VSM'
                                  */
extern real32_T P_VSM_LCKIE_LatC_MoveEnableDis;
                                     /* Variable: P_VSM_LCKIE_LatC_MoveEnableDis
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_LCKIE_LatC_RESafDis;/* Variable: P_VSM_LCKIE_LatC_RESafDis
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LCKIE_LatC_SafeDisofLanWidth[4];
                                 /* Variable: P_VSM_LCKIE_LatC_SafeDisofLanWidth
                                  * Referenced by: '<S133>/VSM'
                                  */
extern real32_T P_VSM_LCKIE_LatC_Spd[6];/* Variable: P_VSM_LCKIE_LatC_Spd
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LCKIE_LatC_maxLimitDisREToLane;
                               /* Variable: P_VSM_LCKIE_LatC_maxLimitDisREToLane
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LCKIE_LatC_minLimitDisREToLane;
                               /* Variable: P_VSM_LCKIE_LatC_minLimitDisREToLane
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LCKIE_LongC_DetaSpd[3];/* Variable: P_VSM_LCKIE_LongC_DetaSpd
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LCKIE_LongC_DirecChangeDis;
                                   /* Variable: P_VSM_LCKIE_LongC_DirecChangeDis
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LCKIE_LongC_FleetOff;/* Variable: P_VSM_LCKIE_LongC_FleetOff
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCKIE_LongC_ShutDownLongDis;
                                  /* Variable: P_VSM_LCKIE_LongC_ShutDownLongDis
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_LCKIE_LongC_ShutDownTTC;
                                      /* Variable: P_VSM_LCKIE_LongC_ShutDownTTC
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LCKIE_LongC_Spd[6];/* Variable: P_VSM_LCKIE_LongC_Spd
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCKIE_LongC_d1[6];/* Variable: P_VSM_LCKIE_LongC_d1
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LCKIE_LongC_d2[3];/* Variable: P_VSM_LCKIE_LongC_d2
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LCKIE_LongC_maxDis;/* Variable: P_VSM_LCKIE_LongC_maxDis
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCKIE_LongC_minDis;/* Variable: P_VSM_LCKIE_LongC_minDis
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCKIE_LongC_toff;/* Variable: P_VSM_LCKIE_LongC_toff
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCKIE_OFC_ActDis;/* Variable: P_VSM_LCKIE_OFC_ActDis
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCKIE_OFC_DownDis;/* Variable: P_VSM_LCKIE_OFC_DownDis
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LCKIE_OFC_DownTTC;/* Variable: P_VSM_LCKIE_OFC_DownTTC
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LCKIE_OFC_SafDis;/* Variable: P_VSM_LCKIE_OFC_SafDis
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCKIE_OFC_Toff;  /* Variable: P_VSM_LCKIE_OFC_Toff
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCKIE_ORC_LatDis;/* Variable: P_VSM_LCKIE_ORC_LatDis
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCKIE_ORC_LimitDis1;/* Variable: P_VSM_LCKIE_ORC_LimitDis1
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LCKIE_ORC_LimitDis2;/* Variable: P_VSM_LCKIE_ORC_LimitDis2
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LCKIE_ORC_LimitTTC;/* Variable: P_VSM_LCKIE_ORC_LimitTTC
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCKIE_ORC_LowSpd;/* Variable: P_VSM_LCKIE_ORC_LowSpd
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCKIE_POC_Delaytime[6];/* Variable: P_VSM_LCKIE_POC_Delaytime
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LCKIE_POC_LimitDis;/* Variable: P_VSM_LCKIE_POC_LimitDis
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCKIE_POC_LimitTTC;/* Variable: P_VSM_LCKIE_POC_LimitTTC
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCKIE_POC_detaSpd[6];/* Variable: P_VSM_LCKIE_POC_detaSpd
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCKIE_STATE_ORCObjenable;
                                     /* Variable: P_VSM_LCKIE_STATE_ORCObjenable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_LCKIE_State_CurveMax;/* Variable: P_VSM_LCKIE_State_CurveMax
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCKIE_State_CurveMin;/* Variable: P_VSM_LCKIE_State_CurveMin
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCKIE_State_DriverInputTrqValue_enable;
                       /* Variable: P_VSM_LCKIE_State_DriverInputTrqValue_enable
                        * Referenced by: '<S133>/VSM'
                        */
extern real32_T P_VSM_LCKIE_State_ELKObjClc;/* Variable: P_VSM_LCKIE_State_ELKObjClc
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LCKIE_State_HWASts_disable;
                                   /* Variable: P_VSM_LCKIE_State_HWASts_disable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LCKIE_State_IEObjClc;/* Variable: P_VSM_LCKIE_State_IEObjClc
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCKIE_State_IFVReady;/* Variable: P_VSM_LCKIE_State_IFVReady
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCKIE_State_LaneWidth_enable;
                                 /* Variable: P_VSM_LCKIE_State_LaneWidth_enable
                                  * Referenced by: '<S133>/VSM'
                                  */
extern real32_T P_VSM_LCKIE_State_Lanecurve_enable;
                                 /* Variable: P_VSM_LCKIE_State_Lanecurve_enable
                                  * Referenced by: '<S133>/VSM'
                                  */
extern real32_T P_VSM_LCKIE_State_Off2on;/* Variable: P_VSM_LCKIE_State_Off2on
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCKIE_State_OppObjClc;/* Variable: P_VSM_LCKIE_State_OppObjClc
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LCKIE_State_Vehspeed_enable;
                                  /* Variable: P_VSM_LCKIE_State_Vehspeed_enable
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_LCKIE_State_detaspd;/* Variable: P_VSM_LCKIE_State_detaspd
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LCKIE_State_detaspd_enable;
                                   /* Variable: P_VSM_LCKIE_State_detaspd_enable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LCKIE_State_lamb_enable;
                                      /* Variable: P_VSM_LCKIE_State_lamb_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LCKIE_State_wiper_enable;
                                     /* Variable: P_VSM_LCKIE_State_wiper_enable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_LCKIE_tcycle;    /* Variable: P_VSM_LCKIE_tcycle
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_AccRateIn;   /* Variable: P_VSM_LCK_AccRateIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_AccRateOut;  /* Variable: P_VSM_LCK_AccRateOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_AccrPelOut;  /* Variable: P_VSM_LCK_AccrPelOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_BrakePressIn;/* Variable: P_VSM_LCK_BrakePressIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_BrakePressOut;/* Variable: P_VSM_LCK_BrakePressOut
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LCK_DrvInputTrqValueIn;/* Variable: P_VSM_LCK_DrvInputTrqValueIn
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LCK_DrvInputTrqValueOut;
                                      /* Variable: P_VSM_LCK_DrvInputTrqValueOut
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LCK_IdleInTime;  /* Variable: P_VSM_LCK_IdleInTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_LCDrvInputTrqValueOut;
                                    /* Variable: P_VSM_LCK_LCDrvInputTrqValueOut
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_LCK_LCOverrideValue;/* Variable: P_VSM_LCK_LCOverrideValue
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LCK_LateralAcceIn;/* Variable: P_VSM_LCK_LateralAcceIn
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LCK_LateralAcceOut;/* Variable: P_VSM_LCK_LateralAcceOut
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCK_LongitudeAccIn;/* Variable: P_VSM_LCK_LongitudeAccIn
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LCK_LongitudeAccOut;/* Variable: P_VSM_LCK_LongitudeAccOut
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LCK_OverrideValue;/* Variable: P_VSM_LCK_OverrideValue
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LCK_State_Absesp_enable;
                                      /* Variable: P_VSM_LCK_State_Absesp_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LCK_State_Accpedalrate_enable;
                                /* Variable: P_VSM_LCK_State_Accpedalrate_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LCK_State_Breakpressure_enable;
                               /* Variable: P_VSM_LCK_State_Breakpressure_enable
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LCK_State_DriverInputTrqValue_enable;
                         /* Variable: P_VSM_LCK_State_DriverInputTrqValue_enable
                          * Referenced by: '<S133>/VSM'
                          */
extern real32_T P_VSM_LCK_State_Eps_enable;/* Variable: P_VSM_LCK_State_Eps_enable
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCK_State_GEAR_enable;/* Variable: P_VSM_LCK_State_GEAR_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LCK_State_Handson_enable;
                                     /* Variable: P_VSM_LCK_State_Handson_enable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_LCK_State_IdleInTime_enable;
                                  /* Variable: P_VSM_LCK_State_IdleInTime_enable
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_LCK_State_LSMLine_enable;
                                     /* Variable: P_VSM_LCK_State_LSMLine_enable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_LCK_State_LaneCurve_enable;
                                   /* Variable: P_VSM_LCK_State_LaneCurve_enable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LCK_State_Lane_enable;/* Variable: P_VSM_LCK_State_Lane_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LCK_State_LateralAcce_enable;
                                 /* Variable: P_VSM_LCK_State_LateralAcce_enable
                                  * Referenced by: '<S133>/VSM'
                                  */
extern real32_T P_VSM_LCK_State_LongitudeAcc_enable;
                                /* Variable: P_VSM_LCK_State_LongitudeAcc_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LCK_State_Overide_enable;
                                     /* Variable: P_VSM_LCK_State_Overide_enable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_LCK_State_SteerWheelAngle_enable;
                             /* Variable: P_VSM_LCK_State_SteerWheelAngle_enable
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_LCK_State_SteerWheelSpd_enable;
                               /* Variable: P_VSM_LCK_State_SteerWheelSpd_enable
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LCK_State_TargetLaneIn_enable;
                                /* Variable: P_VSM_LCK_State_TargetLaneIn_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LCK_State_TurnLight_enable;
                                   /* Variable: P_VSM_LCK_State_TurnLight_enable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LCK_State_Vehspeed_enable;
                                    /* Variable: P_VSM_LCK_State_Vehspeed_enable
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_LCK_State_Yawsup_enable;
                                      /* Variable: P_VSM_LCK_State_Yawsup_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LCK_SteerAngleSpdIn;/* Variable: P_VSM_LCK_SteerAngleSpdIn
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LCK_SteerAngleSpdOut;/* Variable: P_VSM_LCK_SteerAngleSpdOut
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LCK_SteerWheelAngleIn;/* Variable: P_VSM_LCK_SteerWheelAngleIn
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LCK_SteerWheelAngleOut;/* Variable: P_VSM_LCK_SteerWheelAngleOut
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LCK_Warnarea1;   /* Variable: P_VSM_LCK_Warnarea1
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_Warnarea2;   /* Variable: P_VSM_LCK_Warnarea2
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_YawRateIn;   /* Variable: P_VSM_LCK_YawRateIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_YawRateOut;  /* Variable: P_VSM_LCK_YawRateOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LCK_absLongitudeAccIn;/* Variable: P_VSM_LCK_absLongitudeAccIn
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LCK_absLongitudeAccOut;/* Variable: P_VSM_LCK_absLongitudeAccOut
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LDW_AccPedalOut; /* Variable: P_VSM_LDW_AccPedalOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_AccRateIn;   /* Variable: P_VSM_LDW_AccRateIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_AccRateOut;  /* Variable: P_VSM_LDW_AccRateOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_BrakePressIn;/* Variable: P_VSM_LDW_BrakePressIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_BrakePressOut;/* Variable: P_VSM_LDW_BrakePressOut
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LDW_LaneCurveIn; /* Variable: P_VSM_LDW_LaneCurveIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_LaneCurveOut;/* Variable: P_VSM_LDW_LaneCurveOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_LateralAcceIn;/* Variable: P_VSM_LDW_LateralAcceIn
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LDW_LateralAcceOut;/* Variable: P_VSM_LDW_LateralAcceOut
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LDW_LongitudeAccIn;/* Variable: P_VSM_LDW_LongitudeAccIn
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LDW_LongitudeAccOut;/* Variable: P_VSM_LDW_LongitudeAccOut
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LDW_State_Absesp_enable;
                                      /* Variable: P_VSM_LDW_State_Absesp_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LDW_State_Accpedalrate_enable;
                                /* Variable: P_VSM_LDW_State_Accpedalrate_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LDW_State_Breakpressure_enable;
                               /* Variable: P_VSM_LDW_State_Breakpressure_enable
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LDW_State_Failsafe_enable;
                                    /* Variable: P_VSM_LDW_State_Failsafe_enable
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_LDW_State_GEAR_enable;/* Variable: P_VSM_LDW_State_GEAR_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LDW_State_Headingangle_enable;
                                /* Variable: P_VSM_LDW_State_Headingangle_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LDW_State_LaneChange_enable;
                                  /* Variable: P_VSM_LDW_State_LaneChange_enable
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_LDW_State_Lane_enable;/* Variable: P_VSM_LDW_State_Lane_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LDW_State_Lanecurve_enable;
                                   /* Variable: P_VSM_LDW_State_Lanecurve_enable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LDW_State_LateralAcce_enable;
                                 /* Variable: P_VSM_LDW_State_LateralAcce_enable
                                  * Referenced by: '<S133>/VSM'
                                  */
extern real32_T P_VSM_LDW_State_LongitudeAcc_enable;
                                /* Variable: P_VSM_LDW_State_LongitudeAcc_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LDW_State_Param_LaneTime[16];
                                     /* Variable: P_VSM_LDW_State_Param_LaneTime
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_LDW_State_Param_LaneWidth_Offset[7];
                             /* Variable: P_VSM_LDW_State_Param_LaneWidth_Offset
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_LDW_State_Param_REWarningZoneIn;
                              /* Variable: P_VSM_LDW_State_Param_REWarningZoneIn
                               * Referenced by: '<S133>/VSM'
                               */
extern real32_T P_VSM_LDW_State_Param_Sensitive_Offset[3];
                             /* Variable: P_VSM_LDW_State_Param_Sensitive_Offset
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_LDW_State_Param_Speed[16];/* Variable: P_VSM_LDW_State_Param_Speed
                                                 * Referenced by: '<S133>/VSM'
                                                 */
extern real32_T P_VSM_LDW_State_Param_WarningZoneIn;
                                /* Variable: P_VSM_LDW_State_Param_WarningZoneIn
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LDW_State_Param_WarningZoneOut;
                               /* Variable: P_VSM_LDW_State_Param_WarningZoneOut
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LDW_State_SteerWheelAngle_enable;
                             /* Variable: P_VSM_LDW_State_SteerWheelAngle_enable
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_LDW_State_SteerWheelSpd_enable;
                               /* Variable: P_VSM_LDW_State_SteerWheelSpd_enable
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LDW_State_TurnLight_enable;
                                   /* Variable: P_VSM_LDW_State_TurnLight_enable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LDW_State_Vehspeed_enable;
                                    /* Variable: P_VSM_LDW_State_Vehspeed_enable
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_LDW_State_Yawsup_enable;
                                      /* Variable: P_VSM_LDW_State_Yawsup_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LDW_SteerWheelAngleIn;/* Variable: P_VSM_LDW_SteerWheelAngleIn
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LDW_SteerWheelAngleOut;/* Variable: P_VSM_LDW_SteerWheelAngleOut
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LDW_SteerWheelSpdIn;/* Variable: P_VSM_LDW_SteerWheelSpdIn
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LDW_SteerWheelSpdOut;/* Variable: P_VSM_LDW_SteerWheelSpdOut
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LDW_WhelDy;      /* Variable: P_VSM_LDW_WhelDy
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_YawRateIn;   /* Variable: P_VSM_LDW_YawRateIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_YawRateOut;  /* Variable: P_VSM_LDW_YawRateOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LDW_absLongitudeAccIn;/* Variable: P_VSM_LDW_absLongitudeAccIn
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LDW_absLongitudeAccOut;/* Variable: P_VSM_LDW_absLongitudeAccOut
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LKA_AccPedalPosnOut;/* Variable: P_VSM_LKA_AccPedalPosnOut
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LKA_AccRateIn;   /* Variable: P_VSM_LKA_AccRateIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_AccRateOut;  /* Variable: P_VSM_LKA_AccRateOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_BrakePressIn;/* Variable: P_VSM_LKA_BrakePressIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_BrakePressOut;/* Variable: P_VSM_LKA_BrakePressOut
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LKA_DriverInputTrqValueIn;
                                    /* Variable: P_VSM_LKA_DriverInputTrqValueIn
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_LKA_DriverInputTrqValueOut;
                                   /* Variable: P_VSM_LKA_DriverInputTrqValueOut
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LKA_LaneCurveIn; /* Variable: P_VSM_LKA_LaneCurveIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_LaneCurveOut;/* Variable: P_VSM_LKA_LaneCurveOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_LateralAcceIn;/* Variable: P_VSM_LKA_LateralAcceIn
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LKA_LateralAcceOut;/* Variable: P_VSM_LKA_LateralAcceOut
                                          * Referenced by: '<S133>/VSM'
                                          */
extern real32_T P_VSM_LKA_LongitudeAcceIn;/* Variable: P_VSM_LKA_LongitudeAcceIn
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LKA_LongitudeAcceOut;/* Variable: P_VSM_LKA_LongitudeAcceOut
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LKA_OverrideValue;/* Variable: P_VSM_LKA_OverrideValue
                                         * Referenced by: '<S133>/VSM'
                                         */
extern real32_T P_VSM_LKA_State_Absesp_enable;
                                      /* Variable: P_VSM_LKA_State_Absesp_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LKA_State_Accpedalrate_enable;
                                /* Variable: P_VSM_LKA_State_Accpedalrate_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LKA_State_Breakpressure_enable;
                               /* Variable: P_VSM_LKA_State_Breakpressure_enable
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LKA_State_DriverInputTrqValue_enable;
                         /* Variable: P_VSM_LKA_State_DriverInputTrqValue_enable
                          * Referenced by: '<S133>/VSM'
                          */
extern real32_T P_VSM_LKA_State_Eps_enable;/* Variable: P_VSM_LKA_State_Eps_enable
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LKA_State_Failsafe_enable;
                                    /* Variable: P_VSM_LKA_State_Failsafe_enable
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_LKA_State_GEAR_enable;/* Variable: P_VSM_LKA_State_GEAR_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LKA_State_Headingangle_enable;
                                /* Variable: P_VSM_LKA_State_Headingangle_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LKA_State_LaneChange_enable;
                                  /* Variable: P_VSM_LKA_State_LaneChange_enable
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_LKA_State_Lane_enable;/* Variable: P_VSM_LKA_State_Lane_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LKA_State_Lanecurve_enable;
                                   /* Variable: P_VSM_LKA_State_Lanecurve_enable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LKA_State_LateralAcce_enable;
                                 /* Variable: P_VSM_LKA_State_LateralAcce_enable
                                  * Referenced by: '<S133>/VSM'
                                  */
extern real32_T P_VSM_LKA_State_LongitudeAcc_enable;
                                /* Variable: P_VSM_LKA_State_LongitudeAcc_enable
                                 * Referenced by: '<S133>/VSM'
                                 */
extern real32_T P_VSM_LKA_State_Overide_enable;
                                     /* Variable: P_VSM_LKA_State_Overide_enable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern real32_T P_VSM_LKA_State_Param_AngleOffset;
                                  /* Variable: P_VSM_LKA_State_Param_AngleOffset
                                   * Referenced by: '<S133>/VSM'
                                   */
extern real32_T P_VSM_LKA_State_Param_InterventionZoneIn;
                           /* Variable: P_VSM_LKA_State_Param_InterventionZoneIn
                            * Referenced by: '<S133>/VSM'
                            */
extern real32_T P_VSM_LKA_State_Param_InterventionZoneOut;
                          /* Variable: P_VSM_LKA_State_Param_InterventionZoneOut
                           * Referenced by: '<S133>/VSM'
                           */
extern real32_T P_VSM_LKA_State_Param_LaneWidth_Offset[7];
                             /* Variable: P_VSM_LKA_State_Param_LaneWidth_Offset
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_LKA_State_Param_Offset;/* Variable: P_VSM_LKA_State_Param_Offset
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LKA_State_Param_OutOffset;
                                    /* Variable: P_VSM_LKA_State_Param_OutOffset
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_LKA_State_Param_REInterventionZoneIn;
                         /* Variable: P_VSM_LKA_State_Param_REInterventionZoneIn
                          * Referenced by: '<S133>/VSM'
                          */
extern real32_T P_VSM_LKA_State_Param_Sensitive_Offset[3];
                             /* Variable: P_VSM_LKA_State_Param_Sensitive_Offset
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_LKA_State_SteerWheelAngle_enable;
                             /* Variable: P_VSM_LKA_State_SteerWheelAngle_enable
                              * Referenced by: '<S133>/VSM'
                              */
extern real32_T P_VSM_LKA_State_SteerWheelSpd_enable;
                               /* Variable: P_VSM_LKA_State_SteerWheelSpd_enable
                                * Referenced by: '<S133>/VSM'
                                */
extern real32_T P_VSM_LKA_State_TJASts_enable;
                                      /* Variable: P_VSM_LKA_State_TJASts_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LKA_State_TurnLight_enable;
                                   /* Variable: P_VSM_LKA_State_TurnLight_enable
                                    * Referenced by: '<S133>/VSM'
                                    */
extern real32_T P_VSM_LKA_State_Vehspeed_enable;
                                    /* Variable: P_VSM_LKA_State_Vehspeed_enable
                                     * Referenced by: '<S133>/VSM'
                                     */
extern real32_T P_VSM_LKA_State_Yawsup_enable;
                                      /* Variable: P_VSM_LKA_State_Yawsup_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LKA_SteerWheelAngleIn;/* Variable: P_VSM_LKA_SteerWheelAngleIn
                                             * Referenced by: '<S133>/VSM'
                                             */
extern real32_T P_VSM_LKA_SteerWheelAngleOut;/* Variable: P_VSM_LKA_SteerWheelAngleOut
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LKA_SteerWheelSpdIn;/* Variable: P_VSM_LKA_SteerWheelSpdIn
                                           * Referenced by: '<S133>/VSM'
                                           */
extern real32_T P_VSM_LKA_SteerWheelSpdOut;/* Variable: P_VSM_LKA_SteerWheelSpdOut
                                            * Referenced by: '<S133>/VSM'
                                            */
extern real32_T P_VSM_LKA_Warnarea1;   /* Variable: P_VSM_LKA_Warnarea1
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_Warnarea2;   /* Variable: P_VSM_LKA_Warnarea2
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_WhelDy;      /* Variable: P_VSM_LKA_WhelDy
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_YawRateIn;   /* Variable: P_VSM_LKA_YawRateIn
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_YawRateOut;  /* Variable: P_VSM_LKA_YawRateOut
                                        * Referenced by: '<S133>/VSM'
                                        */
extern real32_T P_VSM_LKA_absLongitudeAcceIn;/* Variable: P_VSM_LKA_absLongitudeAcceIn
                                              * Referenced by: '<S133>/VSM'
                                              */
extern real32_T P_VSM_LKA_absLongitudeAcceOut;
                                      /* Variable: P_VSM_LKA_absLongitudeAcceOut
                                       * Referenced by: '<S133>/VSM'
                                       */
extern real32_T P_VSM_LSMC_SampleTime; /* Variable: P_VSM_LSMC_SampleTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern uint16_T P_LCS_LATC_StateHoldTime_st;/* Variable: P_LCS_LATC_StateHoldTime_st
                                             * Referenced by: '<S8>/LATC'
                                             */
extern uint16_T P_LCS_PLAN_StateHoldTime_st;/* Variable: P_LCS_PLAN_StateHoldTime_st
                                             * Referenced by: '<S8>/LATC'
                                             */
extern uint16_T P_VSM_ACCExit_AccOverride;/* Variable: P_VSM_ACCExit_AccOverride
                                           * Referenced by: '<S133>/VSM'
                                           */
extern uint16_T P_VSM_ACCExit_StandWaitTime;/* Variable: P_VSM_ACCExit_StandWaitTime
                                             * Referenced by: '<S133>/VSM'
                                             */
extern uint16_T P_VSM_ACC_BrakeOnlyNum;/* Variable: P_VSM_ACC_BrakeOnlyNum
                                        * Referenced by: '<S133>/VSM'
                                        */
extern uint16_T P_VSM_ACC_StandActiveNumACCMode;
                                    /* Variable: P_VSM_ACC_StandActiveNumACCMode
                                     * Referenced by: '<S133>/VSM'
                                     */
extern uint16_T P_VSM_ACC_StandActiveNumHWAMode;
                                    /* Variable: P_VSM_ACC_StandActiveNumHWAMode
                                     * Referenced by: '<S133>/VSM'
                                     */
extern uint16_T P_VSM_SOSContinueTime; /* Variable: P_VSM_SOSContinueTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern uint16_T P_VSM_TJA_ActiveWaitNum;/* Variable: P_VSM_TJA_ActiveWaitNum
                                         * Referenced by: '<S133>/VSM'
                                         */
extern uint16_T P_VSM_TLS_LCCancelTime;/* Variable: P_VSM_TLS_LCCancelTime
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_LCS_ESS_LogicTest_Enable;/* Variable: P_LCS_ESS_LogicTest_Enable
                                             * Referenced by: '<S8>/LATC'
                                             */
extern boolean_T P_LongCtrl_SlideFlagEnable;/* Variable: P_LongCtrl_SlideFlagEnable
                                             * Referenced by: '<S8>/LON'
                                             */
extern boolean_T P_VSM_ACCSOS_SW;      /* Variable: P_VSM_ACCSOS_SW
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_ACC_AutoGoSW;   /* Variable: P_VSM_ACC_AutoGoSW
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_AESSwtReq;      /* Variable: P_VSM_AESSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_ALCSwtReq;      /* Variable: P_VSM_ALCSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_ELKSwtReq;      /* Variable: P_VSM_ELKSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_ESS_AEBFlag_enable;/* Variable: P_VSM_ESS_AEBFlag_enable
                                           * Referenced by: '<S133>/VSM'
                                           */
extern boolean_T P_VSM_ESS_AccelPed_enable;/* Variable: P_VSM_ESS_AccelPed_enable
                                            * Referenced by: '<S133>/VSM'
                                            */
extern boolean_T P_VSM_ESS_DoorSts_enable;/* Variable: P_VSM_ESS_DoorSts_enable
                                           * Referenced by: '<S133>/VSM'
                                           */
extern boolean_T P_VSM_ESS_DrvSBR_enable;/* Variable: P_VSM_ESS_DrvSBR_enable
                                          * Referenced by: '<S133>/VSM'
                                          */
extern boolean_T P_VSM_ESS_ESPActive_enable;/* Variable: P_VSM_ESS_ESPActive_enable
                                             * Referenced by: '<S133>/VSM'
                                             */
extern boolean_T P_VSM_ESS_ESPFuncOffSts_enable;
                                     /* Variable: P_VSM_ESS_ESPFuncOffSts_enable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern boolean_T P_VSM_ESS_FcwDisFlag_enable;/* Variable: P_VSM_ESS_FcwDisFlag_enable
                                              * Referenced by: '<S133>/VSM'
                                              */
extern boolean_T P_VSM_ESS_FcwSw_enable;/* Variable: P_VSM_ESS_FcwSw_enable
                                         * Referenced by: '<S133>/VSM'
                                         */
extern boolean_T P_VSM_ESS_HiLoBeam_enable;/* Variable: P_VSM_ESS_HiLoBeam_enable
                                            * Referenced by: '<S133>/VSM'
                                            */
extern boolean_T P_VSM_ESS_LateralAccel_enable;
                                      /* Variable: P_VSM_ESS_LateralAccel_enable
                                       * Referenced by: '<S133>/VSM'
                                       */
extern boolean_T P_VSM_ESS_OVERRIDE_SW;/* Variable: P_VSM_ESS_OVERRIDE_SW
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_ESS_SteerWheelSpd_enable;
                                     /* Variable: P_VSM_ESS_SteerWheelSpd_enable
                                      * Referenced by: '<S133>/VSM'
                                      */
extern boolean_T P_VSM_ESS_TrailerSts_enable;/* Variable: P_VSM_ESS_TrailerSts_enable
                                              * Referenced by: '<S133>/VSM'
                                              */
extern boolean_T P_VSM_ESS_VehLgtAccel_enable;/* Variable: P_VSM_ESS_VehLgtAccel_enable
                                               * Referenced by: '<S133>/VSM'
                                               */
extern boolean_T P_VSM_ESS_VehSwtReq;  /* Variable: P_VSM_ESS_VehSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_ESS_Vehspeed_enable;/* Variable: P_VSM_ESS_Vehspeed_enable
                                            * Referenced by: '<S133>/VSM'
                                            */
extern boolean_T P_VSM_ESS_WiprReq_enable;/* Variable: P_VSM_ESS_WiprReq_enable
                                           * Referenced by: '<S133>/VSM'
                                           */
extern boolean_T P_VSM_HWA_ALCStsSW;   /* Variable: P_VSM_HWA_ALCStsSW
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_HWA_EHR_Enable; /* Variable: P_VSM_HWA_EHR_Enable
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_ICA_HandsOffSwtReq;/* Variable: P_VSM_ICA_HandsOffSwtReq
                                           * Referenced by: '<S133>/VSM'
                                           */
extern boolean_T P_VSM_ISLSwtReq;      /* Variable: P_VSM_ISLSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_IntelligentEvaSwtReq;/* Variable: P_VSM_IntelligentEvaSwtReq
                                             * Referenced by: '<S133>/VSM'
                                             */
extern boolean_T P_VSM_LCKSwtReq;      /* Variable: P_VSM_LCKSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_LDWSwtReq;      /* Variable: P_VSM_LDWSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_LKASwtReq;      /* Variable: P_VSM_LKASwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_LSSSwtReq;      /* Variable: P_VSM_LSSSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_NOH_Act_Req;    /* Variable: P_VSM_NOH_Act_Req
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_NOH_Swt_Req;    /* Variable: P_VSM_NOH_Swt_Req
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_TSRSwtReq;      /* Variable: P_VSM_TSRSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_TSRWarnSwtReq;  /* Variable: P_VSM_TSRWarnSwtReq
                                        * Referenced by: '<S133>/VSM'
                                        */
extern boolean_T P_VSM_TimeGapHMI_SW;  /* Variable: P_VSM_TimeGapHMI_SW
                                        * Referenced by: '<S133>/VSM'
                                        */
extern uint8_T P_Global_VehiclePowerType;/* Variable: P_Global_VehiclePowerType
                                          * Referenced by: '<S133>/VSM'
                                          */
extern uint8_T P_LCS_IN_Offset_Test_SW;/* Variable: P_LCS_IN_Offset_Test_SW
                                        * Referenced by: '<S8>/LATC'
                                        */
extern uint8_T P_LCS_LATC_StateActiveFlg_TabX_st[5];
                                  /* Variable: P_LCS_LATC_StateActiveFlg_TabX_st
                                   * Referenced by: '<S8>/LATC'
                                   */
extern uint8_T P_LCS_PLAN_StateActiveFlg_TabX_st[5];
                                  /* Variable: P_LCS_PLAN_StateActiveFlg_TabX_st
                                   * Referenced by: '<S8>/LATC'
                                   */
extern uint8_T P_LCS_PLAN_StateCompleteFlg_TabX_st[3];
                                /* Variable: P_LCS_PLAN_StateCompleteFlg_TabX_st
                                 * Referenced by: '<S8>/LATC'
                                 */
extern uint8_T P_LCS_Trq_Switch;       /* Variable: P_LCS_Trq_Switch
                                        * Referenced by: '<S8>/LATC'
                                        */
extern uint8_T P_LSM_ALC_Enable;       /* Variable: P_LSM_ALC_Enable
                                        * Referenced by: '<S132>/LSM'
                                        */
extern uint8_T P_RFM_RoadType;         /* Variable: P_RFM_RoadType
                                        * Referenced by: '<S20>/Constant4'
                                        */
extern uint8_T P_RFM_mapvalid;         /* Variable: P_RFM_mapvalid
                                        * Referenced by: '<S20>/Constant'
                                        */
extern uint8_T P_VSM_CruiseFunUserInputMappingWays;
                                /* Variable: P_VSM_CruiseFunUserInputMappingWays
                                 * Referenced by: '<S133>/VSM'
                                 */
extern uint8_T P_VSM_ISL_TimeInformDis;/* Variable: P_VSM_ISL_TimeInformDis
                                        * Referenced by: '<S133>/VSM'
                                        */
extern uint8_T P_VSM_ISL_TimeTakeOver; /* Variable: P_VSM_ISL_TimeTakeOver
                                        * Referenced by: '<S133>/VSM'
                                        */
extern uint8_T P_VSM_LCK_A1;           /* Variable: P_VSM_LCK_A1
                                        * Referenced by: '<S133>/VSM'
                                        */
extern uint8_T P_VSM_NOH_PilotSelc_SW; /* Variable: P_VSM_NOH_PilotSelc_SW
                                        * Referenced by: '<S133>/VSM'
                                        */

/* Model entry point functions */
extern void Noa_Nofusion_initialize(void);
extern void Noa_Nofusion_output(void);
extern void Noa_Nofusion_update(void);
extern void Noa_Nofusion_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Noa_Nofusion_T *const Noa_Nofusion_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Noa_Nofusion'
 * '<S1>'   : 'Noa_Nofusion/ACC_FD1'
 * '<S2>'   : 'Noa_Nofusion/ACC_FD2'
 * '<S3>'   : 'Noa_Nofusion/ACC_FD4'
 * '<S4>'   : 'Noa_Nofusion/CAL'
 * '<S5>'   : 'Noa_Nofusion/CR_RSDS_Input'
 * '<S6>'   : 'Noa_Nofusion/Chassis1'
 * '<S7>'   : 'Noa_Nofusion/Common'
 * '<S8>'   : 'Noa_Nofusion/Control1'
 * '<S9>'   : 'Noa_Nofusion/EQ4_Lane_Pack1'
 * '<S10>'  : 'Noa_Nofusion/IDC_L3_FD1_MSG'
 * '<S11>'  : 'Noa_Nofusion/IFC_FD1'
 * '<S12>'  : 'Noa_Nofusion/IFC_FD2'
 * '<S13>'  : 'Noa_Nofusion/IFC_FD3'
 * '<S14>'  : 'Noa_Nofusion/IFC_FD5'
 * '<S15>'  : 'Noa_Nofusion/IFC_FD6'
 * '<S16>'  : 'Noa_Nofusion/IfRFM_LANES_In'
 * '<S17>'  : 'Noa_Nofusion/LPV'
 * '<S18>'  : 'Noa_Nofusion/RFM_Road'
 * '<S19>'  : 'Noa_Nofusion/SimBCM'
 * '<S20>'  : 'Noa_Nofusion/Subsystem1'
 * '<S21>'  : 'Noa_Nofusion/Subsystem3'
 * '<S22>'  : 'Noa_Nofusion/Subsystem4'
 * '<S23>'  : 'Noa_Nofusion/TOS'
 * '<S24>'  : 'Noa_Nofusion/UDP Receive (3)\Data Received'
 * '<S25>'  : 'Noa_Nofusion/UDP Receive 2\Data Received'
 * '<S26>'  : 'Noa_Nofusion/UDP_Received'
 * '<S27>'  : 'Noa_Nofusion/VCANBus'
 * '<S28>'  : 'Noa_Nofusion/aeb'
 * '<S29>'  : 'Noa_Nofusion/ifLaneBus_out_In'
 * '<S30>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus'
 * '<S31>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_Left_ObjUpdate_b'
 * '<S32>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus'
 * '<S33>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_Right_ObjUpdate_b'
 * '<S34>'  : 'Noa_Nofusion/CR_RSDS_Input/Detect Change2'
 * '<S35>'  : 'Noa_Nofusion/CR_RSDS_Input/Detect Change3'
 * '<S36>'  : 'Noa_Nofusion/CR_RSDS_Input/Detect Change4'
 * '<S37>'  : 'Noa_Nofusion/CR_RSDS_Input/Detect Change5'
 * '<S38>'  : 'Noa_Nofusion/CR_RSDS_Input/MATLAB Function1'
 * '<S39>'  : 'Noa_Nofusion/CR_RSDS_Input/MATLAB Function2'
 * '<S40>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus'
 * '<S41>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_Left_ObjUpdate_b'
 * '<S42>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus'
 * '<S43>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_Right_ObjUpdate_b'
 * '<S44>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CL'
 * '<S45>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj'
 * '<S46>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj/Ad'
 * '<S47>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj/Ad/Ad'
 * '<S48>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj/Ad/Ad1'
 * '<S49>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj/Ad/Ad2'
 * '<S50>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj/Ad/Ad3'
 * '<S51>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj/Ad/Ad4'
 * '<S52>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj/Ad/Ad5'
 * '<S53>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR'
 * '<S54>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj'
 * '<S55>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj/Ad'
 * '<S56>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj/Ad/Ad'
 * '<S57>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj/Ad/Ad1'
 * '<S58>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj/Ad/Ad2'
 * '<S59>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj/Ad/Ad3'
 * '<S60>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj/Ad/Ad4'
 * '<S61>'  : 'Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj/Ad/Ad5'
 * '<S62>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_L'
 * '<S63>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj'
 * '<S64>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj/Ad'
 * '<S65>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj/Ad/Ad'
 * '<S66>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj/Ad/Ad1'
 * '<S67>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj/Ad/Ad2'
 * '<S68>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj/Ad/Ad3'
 * '<S69>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj/Ad/Ad4'
 * '<S70>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj/Ad/Ad5'
 * '<S71>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_R'
 * '<S72>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj'
 * '<S73>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj/Ad'
 * '<S74>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj/Ad/Ad'
 * '<S75>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj/Ad/Ad1'
 * '<S76>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj/Ad/Ad2'
 * '<S77>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj/Ad/Ad3'
 * '<S78>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj/Ad/Ad4'
 * '<S79>'  : 'Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj/Ad/Ad5'
 * '<S80>'  : 'Noa_Nofusion/Chassis1/ACC_FD1MSG'
 * '<S81>'  : 'Noa_Nofusion/Chassis1/CheckSum8Bclc1'
 * '<S82>'  : 'Noa_Nofusion/Chassis1/CheckSum8Bclc2'
 * '<S83>'  : 'Noa_Nofusion/Chassis1/CheckSum8Bclc3'
 * '<S84>'  : 'Noa_Nofusion/Chassis1/CheckSum8Bclc4'
 * '<S85>'  : 'Noa_Nofusion/Chassis1/Counter Limited'
 * '<S86>'  : 'Noa_Nofusion/Chassis1/HMI'
 * '<S87>'  : 'Noa_Nofusion/Chassis1/Subsystem'
 * '<S88>'  : 'Noa_Nofusion/Chassis1/Subsystem1'
 * '<S89>'  : 'Noa_Nofusion/Chassis1/rollingcounter 1'
 * '<S90>'  : 'Noa_Nofusion/Chassis1/rollingcounter 2'
 * '<S91>'  : 'Noa_Nofusion/Chassis1/rollingcounter 3'
 * '<S92>'  : 'Noa_Nofusion/Chassis1/rollingcounter 4'
 * '<S93>'  : 'Noa_Nofusion/Chassis1/Counter Limited/Increment Real World'
 * '<S94>'  : 'Noa_Nofusion/Chassis1/Counter Limited/Wrap To Zero'
 * '<S95>'  : 'Noa_Nofusion/Chassis1/Subsystem/CheckSum8Bclc4'
 * '<S96>'  : 'Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1'
 * '<S97>'  : 'Noa_Nofusion/Chassis1/Subsystem/rollingcounter 1'
 * '<S98>'  : 'Noa_Nofusion/Chassis1/Subsystem/rollingcounter 2'
 * '<S99>'  : 'Noa_Nofusion/Common/CAL'
 * '<S100>' : 'Noa_Nofusion/Common/Data Outport'
 * '<S101>' : 'Noa_Nofusion/Common/Data Outport1'
 * '<S102>' : 'Noa_Nofusion/Common/Subsystem7'
 * '<S103>' : 'Noa_Nofusion/Common/Data Outport/Ad'
 * '<S104>' : 'Noa_Nofusion/Common/Data Outport1/Ad'
 * '<S105>' : 'Noa_Nofusion/Control1/Subsystem'
 * '<S106>' : 'Noa_Nofusion/EQ4_Lane_Pack1/For Each Subsystem1'
 * '<S107>' : 'Noa_Nofusion/EQ4_Lane_Pack1/For Each Subsystem2'
 * '<S108>' : 'Noa_Nofusion/EQ4_Lane_Pack1/For Each Subsystem3'
 * '<S109>' : 'Noa_Nofusion/EQ4_Lane_Pack1/For Each Subsystem4'
 * '<S110>' : 'Noa_Nofusion/IfRFM_LANES_In/Ad'
 * '<S111>' : 'Noa_Nofusion/IfRFM_LANES_In/Ad/Ad'
 * '<S112>' : 'Noa_Nofusion/IfRFM_LANES_In/Ad/Ad1'
 * '<S113>' : 'Noa_Nofusion/IfRFM_LANES_In/Ad/Ad2'
 * '<S114>' : 'Noa_Nofusion/IfRFM_LANES_In/Ad/Ad3'
 * '<S115>' : 'Noa_Nofusion/IfRFM_LANES_In/Ad/Ad4'
 * '<S116>' : 'Noa_Nofusion/IfRFM_LANES_In/Ad/Ad5'
 * '<S117>' : 'Noa_Nofusion/IfRFM_LANES_In/Ad/Ad6'
 * '<S118>' : 'Noa_Nofusion/LPV/ABM_Pack'
 * '<S119>' : 'Noa_Nofusion/LPV/BCM_Pack'
 * '<S120>' : 'Noa_Nofusion/LPV/CSA_Pack'
 * '<S121>' : 'Noa_Nofusion/LPV/Counter Limited'
 * '<S122>' : 'Noa_Nofusion/LPV/DCT_Pack'
 * '<S123>' : 'Noa_Nofusion/LPV/ECM_Pack'
 * '<S124>' : 'Noa_Nofusion/LPV/ESP_Pack'
 * '<S125>' : 'Noa_Nofusion/LPV/HAP_Pack'
 * '<S126>' : 'Noa_Nofusion/LPV/HUT_Pack'
 * '<S127>' : 'Noa_Nofusion/LPV/Subsystem'
 * '<S128>' : 'Noa_Nofusion/LPV/Subsystem1'
 * '<S129>' : 'Noa_Nofusion/LPV/Subsystem2'
 * '<S130>' : 'Noa_Nofusion/LPV/Subsystem3'
 * '<S131>' : 'Noa_Nofusion/LPV/Subsystem4'
 * '<S132>' : 'Noa_Nofusion/LPV/Subsystem5'
 * '<S133>' : 'Noa_Nofusion/LPV/VSM'
 * '<S134>' : 'Noa_Nofusion/LPV/Counter Limited/Increment Real World'
 * '<S135>' : 'Noa_Nofusion/LPV/Counter Limited/Wrap To Zero'
 * '<S136>' : 'Noa_Nofusion/LPV/Subsystem5/For Each Subsystem1'
 * '<S137>' : 'Noa_Nofusion/LPV/Subsystem5/For Each Subsystem2'
 * '<S138>' : 'Noa_Nofusion/LPV/Subsystem5/For Each Subsystem3'
 * '<S139>' : 'Noa_Nofusion/RFM_Road/Ad'
 * '<S140>' : 'Noa_Nofusion/RFM_Road/Ad/Ad'
 * '<S141>' : 'Noa_Nofusion/RFM_Road/Ad/Ad1'
 * '<S142>' : 'Noa_Nofusion/SimBCM/BCMsim'
 * '<S143>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim'
 * '<S144>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Chart1'
 * '<S145>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Chart2'
 * '<S146>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Compare To Constant'
 * '<S147>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Compare To Constant1'
 * '<S148>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter1'
 * '<S149>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter4'
 * '<S150>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter1/Compare To Constant1'
 * '<S151>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter1/Compare To Constant3'
 * '<S152>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter1/Compare To Constant4'
 * '<S153>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter1/Detect Increase'
 * '<S154>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter1/Detect Increase1'
 * '<S155>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter4/Compare To Constant1'
 * '<S156>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter4/Compare To Constant3'
 * '<S157>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter4/Compare To Constant4'
 * '<S158>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter4/Detect Increase'
 * '<S159>' : 'Noa_Nofusion/SimBCM/CSALampCtrlSim/Counter4/Detect Increase1'
 * '<S160>' : 'Noa_Nofusion/Subsystem3/Compare To Constant'
 * '<S161>' : 'Noa_Nofusion/Subsystem3/Subsystem2'
 * '<S162>' : 'Noa_Nofusion/Subsystem3/UDP Receive (3)'
 * '<S163>' : 'Noa_Nofusion/Subsystem4/LALine'
 * '<S164>' : 'Noa_Nofusion/Subsystem4/LHLine'
 * '<S165>' : 'Noa_Nofusion/Subsystem4/MATLAB Function5'
 * '<S166>' : 'Noa_Nofusion/Subsystem4/MATLAB Function6'
 * '<S167>' : 'Noa_Nofusion/Subsystem4/Simulink Function'
 * '<S168>' : 'Noa_Nofusion/Subsystem4/Simulink Function/MATLAB Function3'
 * '<S169>' : 'Noa_Nofusion/TOS/Subsystem'
 * '<S170>' : 'Noa_Nofusion/TOS/Subsystem2'
 * '<S171>' : 'Noa_Nofusion/TOS/TOS_ACC_P0 Raw Data5'
 * '<S172>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM'
 * '<S173>' : 'Noa_Nofusion/TOS/Subsystem2/Counter Free-Running'
 * '<S174>' : 'Noa_Nofusion/TOS/Subsystem2/DOP'
 * '<S175>' : 'Noa_Nofusion/TOS/Subsystem2/ObjMatrixTransit'
 * '<S176>' : 'Noa_Nofusion/TOS/Subsystem2/Subsystem'
 * '<S177>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/Compare To Constant'
 * '<S178>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/Compare To Constant1'
 * '<S179>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1'
 * '<S180>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/ObjMatrixTransit'
 * '<S181>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/rollingcounter 1'
 * '<S182>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/ACC_DisplayBar'
 * '<S183>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Compare To Constant'
 * '<S184>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Compare To Constant1'
 * '<S185>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Dyc'
 * '<S186>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/DycCutIn'
 * '<S187>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/DycHistCalc'
 * '<S188>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/LostTargetCalc'
 * '<S189>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Lpb'
 * '<S190>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/OTL1'
 * '<S191>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Plaus'
 * '<S192>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Spw'
 * '<S193>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Std'
 * '<S194>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/TargetBrake'
 * '<S195>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/TargetSelect'
 * '<S196>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/TimeCalc'
 * '<S197>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Trajectory'
 * '<S198>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/VxVy'
 * '<S199>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/VycCalc'
 * '<S200>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/dyLaneWidthSteerAdapt'
 * '<S201>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/wCutInVy'
 * '<S202>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/wCutOutVy'
 * '<S203>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/OTL1/MATLAB Function'
 * '<S204>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/OTL1/P0TrajHistCalc01'
 * '<S205>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/OTL1/P0TrajHistCalc1'
 * '<S206>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Trajectory/Trajectory'
 * '<S207>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Trajectory/Trajectory/AssignHighPriorityObjects'
 * '<S208>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Trajectory/Trajectory/CalcCompensateEgoVehMove'
 * '<S209>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Trajectory/Trajectory/CalcEgoVehMove'
 * '<S210>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Trajectory/Trajectory/Priority'
 * '<S211>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Trajectory/Trajectory/ReleaseLowPriorityObjects'
 * '<S212>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/HWA_Task100ms1/Trajectory/Trajectory/StoreEgoTrajectory'
 * '<S213>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/ObjMatrixTransit/Subsystem'
 * '<S214>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/ObjMatrixTransit/Subsystem/For Each Subsystem'
 * '<S215>' : 'Noa_Nofusion/TOS/Subsystem2/ACCOSM/ObjMatrixTransit/Subsystem/MATLAB Function1'
 * '<S216>' : 'Noa_Nofusion/TOS/Subsystem2/Counter Free-Running/Increment Real World'
 * '<S217>' : 'Noa_Nofusion/TOS/Subsystem2/Counter Free-Running/Wrap To Zero'
 * '<S218>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/Compare To Constant'
 * '<S219>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/Compare To Constant1'
 * '<S220>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1'
 * '<S221>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/rollingcounter 1'
 * '<S222>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/ACC_DisplayBar'
 * '<S223>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Compare To Constant'
 * '<S224>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Compare To Constant1'
 * '<S225>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Dyc'
 * '<S226>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/DycCutIn'
 * '<S227>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/DycHistCalc'
 * '<S228>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/LostTargetCalc'
 * '<S229>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Lpb'
 * '<S230>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/OTL1'
 * '<S231>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Plaus'
 * '<S232>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Spw'
 * '<S233>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Std'
 * '<S234>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/TargetBrake'
 * '<S235>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/TargetSelect'
 * '<S236>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/TimeCalc'
 * '<S237>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Trajectory'
 * '<S238>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/VxVy'
 * '<S239>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/VycCalc'
 * '<S240>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/dyLaneWidthSteerAdapt'
 * '<S241>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/wCutInVy'
 * '<S242>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/wCutOutVy'
 * '<S243>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/OTL1/P0TrajHistCalc01'
 * '<S244>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/OTL1/P0TrajHistCalc1'
 * '<S245>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Trajectory/Trajectory'
 * '<S246>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Trajectory/Trajectory/AssignHighPriorityObjects'
 * '<S247>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Trajectory/Trajectory/CalcCompensateEgoVehMove'
 * '<S248>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Trajectory/Trajectory/CalcEgoVehMove'
 * '<S249>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Trajectory/Trajectory/Priority'
 * '<S250>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Trajectory/Trajectory/ReleaseLowPriorityObjects'
 * '<S251>' : 'Noa_Nofusion/TOS/Subsystem2/DOP/HWA_Task100ms1/Trajectory/Trajectory/StoreEgoTrajectory'
 * '<S252>' : 'Noa_Nofusion/TOS/Subsystem2/ObjMatrixTransit/Subsystem'
 * '<S253>' : 'Noa_Nofusion/TOS/Subsystem2/ObjMatrixTransit/Subsystem/For Each Subsystem'
 * '<S254>' : 'Noa_Nofusion/TOS/Subsystem2/ObjMatrixTransit/Subsystem/MATLAB Function1'
 * '<S255>' : 'Noa_Nofusion/TOS/Subsystem2/Subsystem/MATLAB Function1'
 * '<S256>' : 'Noa_Nofusion/TOS/Subsystem2/Subsystem/MATLAB Function2'
 * '<S257>' : 'Noa_Nofusion/TOS/Subsystem2/Subsystem/MATLAB Function3'
 * '<S258>' : 'Noa_Nofusion/UDP_Received/UDP Receive (2)'
 * '<S259>' : 'Noa_Nofusion/aeb/Subsystem'
 * '<S260>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad'
 * '<S261>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad'
 * '<S262>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad1'
 * '<S263>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad10'
 * '<S264>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad11'
 * '<S265>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad12'
 * '<S266>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad13'
 * '<S267>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad2'
 * '<S268>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad3'
 * '<S269>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad4'
 * '<S270>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad5'
 * '<S271>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad6'
 * '<S272>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad7'
 * '<S273>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad8'
 * '<S274>' : 'Noa_Nofusion/ifLaneBus_out_In/Ad/Ad9'
 */
#endif                                 /* RTW_HEADER_Noa_Nofusion_h_ */
