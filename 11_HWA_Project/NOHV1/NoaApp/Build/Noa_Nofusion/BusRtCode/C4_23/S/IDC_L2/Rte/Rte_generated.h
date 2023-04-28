/** !------------------------------------------------------------------------->
*
*  @file Rte_generated.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief Generated Rte configuration header file.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/

/* File ID: f3285310-5873-494e-87ff-b5bcbeabb1d3 */
#pragma once

#include "../Config.h"
#include "../../BusConfiguration.h"
#include "../Com/Com_generated.h"
#include <Std_Types.h>

/* Signal ID, uint16 does not match with TLSR callback. */
typedef Com_SignalIdType Rte_SignalIdType;

#define RTE_NO_SUCH_SIGNAL 0x75

/*------------------------------------------------------------------------------------------------*\
  GENERATED RTE SIGNAL IDs 
  RTE Signal Ids are identical to COM SignalIds for performance reasons
\*------------------------------------------------------------------------------------------------*/

/* RTE Signal definitions for the RTE module. */
#define Rte_Inst_323_Checksum_ACC11_207001_119633_232437 Com_X_Inst_323_Checksum_ACC11_207001_119633_232437
#define Rte_Inst_323_HWP_AccelOvrdActnReq_L2_207002_119633_232437 Com_X_Inst_323_HWP_AccelOvrdActnReq_L2_207002_119633_232437
#define Rte_Inst_323_HWP_SuprAvail_L2_207003_119633_232437 Com_X_Inst_323_HWP_SuprAvail_L2_207003_119633_232437
#define Rte_Inst_323_HWP_MotTypeReqMode_L2_207004_119633_232437 Com_X_Inst_323_HWP_MotTypeReqMode_L2_207004_119633_232437
#define Rte_Inst_323_HWP_MotTypeReqLong_L2_207005_119633_232437 Com_X_Inst_323_HWP_MotTypeReqLong_L2_207005_119633_232437
#define Rte_Inst_323_HWP_ShutdownReq_L2_207006_119633_232437 Com_X_Inst_323_HWP_ShutdownReq_L2_207006_119633_232437
#define Rte_Inst_323_HWP_UpperLimit_L2_207007_119633_232437 Com_X_Inst_323_HWP_UpperLimit_L2_207007_119633_232437
#define Rte_Inst_323_HWP_LowerLimit_L2_207008_119633_232437 Com_X_Inst_323_HWP_LowerLimit_L2_207008_119633_232437
#define Rte_Inst_323_HWP_SecureReq_L2_207009_119633_232437 Com_X_Inst_323_HWP_SecureReq_L2_207009_119633_232437
#define Rte_Inst_323_HWP_AEBAvail_207010_119633_232437 Com_X_Inst_323_HWP_AEBAvail_207010_119633_232437
#define Rte_Inst_323_HWP_ACCAvail_207011_119633_232437 Com_X_Inst_323_HWP_ACCAvail_207011_119633_232437
#define Rte_Inst_323_HWP_TgtAccelCmftUpprLimVal_L2_207012_119633_232437 Com_X_Inst_323_HWP_TgtAccelCmftUpprLimVal_L2_207012_119633_232437
#define Rte_Inst_323_HWP_TgtAccelCmftLwrLimVal_L2_207013_119633_232437 Com_X_Inst_323_HWP_TgtAccelCmftLwrLimVal_L2_207013_119633_232437
#define Rte_Inst_323_HWP_UseTgtAccelCmftUpprLimVal_L2_207014_119633_232437 Com_X_Inst_323_HWP_UseTgtAccelCmftUpprLimVal_L2_207014_119633_232437
#define Rte_Inst_323_RollingCounter_ACC11_207015_119633_232437 Com_X_Inst_323_RollingCounter_ACC11_207015_119633_232437
#define Rte_Inst_323_Checksum_ACC1_207016_119633_232437 Com_X_Inst_323_Checksum_ACC1_207016_119633_232437
#define Rte_Inst_323_Longctrl_VehHldReq_207017_119633_232437 Com_X_Inst_323_Longctrl_VehHldReq_207017_119633_232437
#define Rte_Inst_323_Longctrl_DrvOFF_Req_207018_119633_232437 Com_X_Inst_323_Longctrl_DrvOFF_Req_207018_119633_232437
#define Rte_Inst_323_Longctrl_ModSts_207019_119633_232437 Com_X_Inst_323_Longctrl_ModSts_207019_119633_232437
#define Rte_Inst_323_Longctrl_Decel_Req_207020_119633_232437 Com_X_Inst_323_Longctrl_Decel_Req_207020_119633_232437
#define Rte_Inst_323_Longctrl_EngTrqReq_207021_119633_232437 Com_X_Inst_323_Longctrl_EngTrqReq_207021_119633_232437
#define Rte_Inst_323_Longctrl_EngTrqReqActive_207022_119633_232437 Com_X_Inst_323_Longctrl_EngTrqReqActive_207022_119633_232437
#define Rte_Inst_323_Longctrl_FuelCutOffPrevn_207023_119633_232437 Com_X_Inst_323_Longctrl_FuelCutOffPrevn_207023_119633_232437
#define Rte_Inst_323_Longctrl_DecelToStopReq_207024_119633_232437 Com_X_Inst_323_Longctrl_DecelToStopReq_207024_119633_232437
#define Rte_Inst_323_Longctrl_ParkShiftReq_207025_119633_232437 Com_X_Inst_323_Longctrl_ParkShiftReq_207025_119633_232437
#define Rte_Inst_323_Longctrl_Decel_ReqValue_207026_119633_232437 Com_X_Inst_323_Longctrl_Decel_ReqValue_207026_119633_232437
#define Rte_Inst_323_ActualTargetSpeed_207027_119633_232437 Com_X_Inst_323_ActualTargetSpeed_207027_119633_232437
#define Rte_Inst_323_RollingCounter_ACC1_207028_119633_232437 Com_X_Inst_323_RollingCounter_ACC1_207028_119633_232437
#define Rte_Inst_323_Checksum_ACC2_207029_119633_232437 Com_X_Inst_323_Checksum_ACC2_207029_119633_232437
#define Rte_Inst_323_HWP_TgtAccel_L2_207030_119633_232437 Com_X_Inst_323_HWP_TgtAccel_L2_207030_119633_232437
#define Rte_Inst_323_IDC_L2_HADFuncCmdReqFlag_207031_119633_232437 Com_X_Inst_323_IDC_L2_HADFuncCmdReqFlag_207031_119633_232437
#define Rte_Inst_323_HWP_AngCmdReqVal_L2_207032_119633_232437 Com_X_Inst_323_HWP_AngCmdReqVal_L2_207032_119633_232437
#define Rte_Inst_323_HWP_AngCmdReqValVld_L2_207033_119633_232437 Com_X_Inst_323_HWP_AngCmdReqValVld_L2_207033_119633_232437
#define Rte_Inst_323_RollingCounter_ACC2_207034_119633_232437 Com_X_Inst_323_RollingCounter_ACC2_207034_119633_232437
#define Rte_Inst_323_ACC_CRInterface_207035_119633_232437 Com_X_Inst_323_ACC_CRInterface_207035_119633_232437
#define Rte_Inst_323_Checksum_ACC10_207036_119633_232437 Com_X_Inst_323_Checksum_ACC10_207036_119633_232437
#define Rte_Inst_323_Longctrl_HCUTrqReq_207037_119633_232437 Com_X_Inst_323_Longctrl_HCUTrqReq_207037_119633_232437
#define Rte_Inst_323_Longctrl_HCUTrqReqActive_207038_119633_232437 Com_X_Inst_323_Longctrl_HCUTrqReqActive_207038_119633_232437
#define Rte_Inst_323_RollingCounter_ACC10_207039_119633_232437 Com_X_Inst_323_RollingCounter_ACC10_207039_119633_232437
#define Rte_Inst_323_FreshnessValue_ACC_FD1_207040_119633_232437 Com_X_Inst_323_FreshnessValue_ACC_FD1_207040_119633_232437
#define Rte_Inst_323_MAC_Check_ACC_FD1_207041_119633_232437 Com_X_Inst_323_MAC_Check_ACC_FD1_207041_119633_232437

/* extern declaration of COM signal buffers */
extern uint8 Com_TX_Inst_323_Checksum_ACC11_207001_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_AccelOvrdActnReq_L2_207002_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_SuprAvail_L2_207003_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_MotTypeReqMode_L2_207004_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_MotTypeReqLong_L2_207005_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_ShutdownReq_L2_207006_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_UpperLimit_L2_207007_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_LowerLimit_L2_207008_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_SecureReq_L2_207009_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_AEBAvail_207010_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_ACCAvail_207011_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_TgtAccelCmftUpprLimVal_L2_207012_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_TgtAccelCmftLwrLimVal_L2_207013_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_UseTgtAccelCmftUpprLimVal_L2_207014_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Checksum_ACC1_207016_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_VehHldReq_207017_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_DrvOFF_Req_207018_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_ModSts_207019_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_Decel_Req_207020_119633_232437_sgn_val;
extern uint16 Com_TX_Inst_323_Longctrl_EngTrqReq_207021_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_EngTrqReqActive_207022_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_FuelCutOffPrevn_207023_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_DecelToStopReq_207024_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_ParkShiftReq_207025_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_Decel_ReqValue_207026_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_ActualTargetSpeed_207027_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Checksum_ACC2_207029_119633_232437_sgn_val;
extern uint16 Com_TX_Inst_323_HWP_TgtAccel_L2_207030_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_IDC_L2_HADFuncCmdReqFlag_207031_119633_232437_sgn_val;
extern uint16 Com_TX_Inst_323_HWP_AngCmdReqVal_L2_207032_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_HWP_AngCmdReqValVld_L2_207033_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_ACC_CRInterface_207035_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Checksum_ACC10_207036_119633_232437_sgn_val;
extern uint16 Com_TX_Inst_323_Longctrl_HCUTrqReq_207037_119633_232437_sgn_val;
extern uint8 Com_TX_Inst_323_Longctrl_HCUTrqReqActive_207038_119633_232437_sgn_val;
extern uint16 Com_TX_Inst_323_FreshnessValue_ACC_FD1_207040_119633_232437_sgn_val;
extern uint64 Com_TX_Inst_323_MAC_Check_ACC_FD1_207041_119633_232437_sgn_val;


#define SCALE_IDENTICAL(TARGET_TYPE,TARGET,SOURCE_TYPE,SOURCE,ROUND_SUFFIX) double tmp_val = (*((SOURCE_TYPE*) SOURCE)); \
if (ROUND_SUFFIX && tmp_val > 0) *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) (tmp_val + 0.5); else if (ROUND_SUFFIX && tmp_val < 0)  *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) (tmp_val - 0.5); \
else *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) tmp_val;

#define SCALE_LINEAR(TARGET_TYPE,TARGET,SOURCE_TYPE,SOURCE,N0,N1,D0,ROUND_SUFFIX) double tmp_val = (((( *((SOURCE_TYPE*) SOURCE) ) * N1) + N0) / ((double) D0) ); \
if (ROUND_SUFFIX && tmp_val > 0) *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) (tmp_val + 0.5); else if (ROUND_SUFFIX && tmp_val < 0)  *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) (tmp_val - 0.5); \
else *((TARGET_TYPE*) TARGET) = (TARGET_TYPE) tmp_val;

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_SetCodedValue
 *** 
 *** DESCRIPTION:
 ***     Calculates a new coded value, if the physical value has changed.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     uint8             always         Boolean flag which enforces calculation even if the physical signal did not change.
 *** 
 *** RETURNS:
 ***     uint8    Boolean flag which inidcates that a calculation was performed and the undelying 
 ***              PDU have to be updated.
 \**************************************************************************************************/
 uint8 Rte_SetCodedValue(Rte_SignalIdType SignalId, uint8 always);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_SetPhysicalValue
 *** 
 *** DESCRIPTION:
 ***     Calculates a new physical value, if the coded value has changed.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     uint8             always         Boolean flag which enforces calculation even if the coded signal did not change.
 ***                                      This behavior is used for initialization during startup
 *** 
\**************************************************************************************************/
void Rte_SetPhysicalValue(Rte_SignalIdType SignalId, uint8 always);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_WriteSignal
 *** 
 *** DESCRIPTION:
 ***     Updates the signal object identified by SignalId with the signal referenced by the
 ***     SignalDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Rte_WriteSignal(
    Rte_SignalIdType SignalId,
    const void * SignalDataPtr);


/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_ReadSignal
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the given memory location
 ***     and performs signal conversion.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be read.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Rte_ReadSignal(
        Rte_SignalIdType SignalId,
        void * SignalDataPtr);





#ifdef __cplusplus
}
#endif /* __cplusplus */ 


