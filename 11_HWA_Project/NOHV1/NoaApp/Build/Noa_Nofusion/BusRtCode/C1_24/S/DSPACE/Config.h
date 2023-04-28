
/** !------------------------------------------------------------------------->
*
*  @file Config.h
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Config File for F:/05_dspace_Work_Files/11_HWA_Project/NOHV1/NoaApp/Build/Noa_Nofusion/BusRtCode/C1_24/S/DSPACE/Ecu.mk
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "../BusConfiguration.h"
#include "BMUtils.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/
#ifdef ECU_ID
#undef ECU_ID
#endif

#define ECU_ID DSPACE

/* User specific return values extending the Std_ReturnType, which is normally used with value E_OK or E_NOT_OK */
#define E_DISABLED    0x02u

/* Common */
#define QueuePush ASPECT_UNIQUE(QueuePush)

#define QueuePop ASPECT_UNIQUE(QueuePop)

#define QueuePeek ASPECT_UNIQUE(QueuePeek)

#define QueueClear ASPECT_UNIQUE(QueueClear)

#define QueueFree ASPECT_UNIQUE(QueueFree)

#define Det_Init ASPECT_UNIQUE(Det_Init)

#define Det_ReportError ASPECT_UNIQUE(Det_ReportError)

#define Det_Start ASPECT_UNIQUE(Det_Start)

#define Det_GetVersionInfo ASPECT_UNIQUE(Det_GetVersionInfo)


/* CanIf */
#define CanIf_InitFunction ASPECT_UNIQUE(CanIf_InitFunction)

#define CanIf_InitController ASPECT_UNIQUE(CanIf_InitController)

#define CanIf_SetControllerMode ASPECT_UNIQUE(CanIf_SetControllerMode)

#define CanIf_GetControllerMode ASPECT_UNIQUE(CanIf_GetControllerMode)

#define CanIf_Transmit ASPECT_UNIQUE(CanIf_Transmit)

#define CanIf_ReadRxPduData ASPECT_UNIQUE(CanIf_ReadRxPduData)

#define CanIf_ReadTxNotifStatus ASPECT_UNIQUE(CanIf_ReadTxNotifStatus)

#define CanIf_ReadRxNotifStatus ASPECT_UNIQUE(CanIf_ReadRxNotifStatus)

#define CanIf_SetPduMode ASPECT_UNIQUE(CanIf_SetPduMode)

#define CanIf_GetPduMode ASPECT_UNIQUE(CanIf_GetPduMode)

#define CanIf_GetVersionInfo ASPECT_UNIQUE(CanIf_GetVersionInfo)

#define CanIf_SetDynamicTxId ASPECT_UNIQUE(CanIf_SetDynamicTxId)

#define CanIf_SetTransceiverMode ASPECT_UNIQUE(CanIf_SetTransceiverMode)

#define CanIf_GetTransceiverMode ASPECT_UNIQUE(CanIf_GetTransceiverMode)

#define CanIf_GetTrcvWakeupReason ASPECT_UNIQUE(CanIf_GetTrcvWakeupReason)

#define CanIf_SetTransceiverWakeupMode ASPECT_UNIQUE(CanIf_SetTransceiverWakeupMode)

#define CanIf_CheckWakeup ASPECT_UNIQUE(CanIf_CheckWakeup)

#define CanIf_CheckValidation ASPECT_UNIQUE(CanIf_CheckValidation)

#define CanIf_GetTxConfirmationState ASPECT_UNIQUE(CanIf_GetTxConfirmationState)

#define CanIf_ClearTrcvWufFlag ASPECT_UNIQUE(CanIf_ClearTrcvWufFlag)

#define CanIf_CheckTrcvWakeFlag ASPECT_UNIQUE(CanIf_CheckTrcvWakeFlag)

#define CanIf_TransmitFunction ASPECT_UNIQUE(CanIf_TransmitFunction)

#define CanIf_TransmitFrameFunction ASPECT_UNIQUE(CanIf_TransmitFrameFunction)

#define CanIf_DiscardMessages ASPECT_UNIQUE(CanIf_DiscardMessages)

#define CanIf_UpdateBoards ASPECT_UNIQUE(CanIf_UpdateBoards)

#define CanIf_InitDefaultConfig ASPECT_UNIQUE(CanIf_InitDefaultConfig)

#define CanIf_Init ASPECT_UNIQUE(CanIf_Init)

#define CanIf_VariableInitialize ASPECT_UNIQUE(CanIf_VariableInitialize)

#define CanIf_OnStart ASPECT_UNIQUE(CanIf_OnStart)

#define CanIf_OnStop ASPECT_UNIQUE(CanIf_OnStop)

#define CanIf_TxConfirmation ASPECT_UNIQUE(CanIf_TxConfirmation)

#define CanIf_RxIndication ASPECT_UNIQUE(CanIf_RxIndication)

#define CanIf_RxInterruptIndication ASPECT_UNIQUE(CanIf_RxInterruptIndication)

#define CanIf_CancelTxConfirmation ASPECT_UNIQUE(CanIf_CancelTxConfirmation)

#define CanIf_ControllerBusOff ASPECT_UNIQUE(CanIf_ControllerBusOff)

#define CanIf_ConfirmPnAvailability ASPECT_UNIQUE(CanIf_ConfirmPnAvailability)

#define CanIf_ClearTrcvWufFlagIndication ASPECT_UNIQUE(CanIf_ClearTrcvWufFlagIndication)

#define CanIf_CheckTrcvWakeFlagIndication ASPECT_UNIQUE(CanIf_CheckTrcvWakeFlagIndication)

#define CanIf_TrcvModeIndication ASPECT_UNIQUE(CanIf_TrcvModeIndication)

#define gp_CanIf_ChannelAddress ASPECT_UNIQUE(gp_CanIf_ChannelAddress)

#define g_CntrlFlags ASPECT_UNIQUE(g_CntrlFlags)

#define CanIf_DevErrorDetect ASPECT_UNIQUE(CanIf_DevErrorDetect)

#define CanIf_MultipleDriverSupport ASPECT_UNIQUE(CanIf_MultipleDriverSupport)

#define CanIf_PublicPNSupport ASPECT_UNIQUE(CanIf_PublicPNSupport)

#define CanIf_ReadRxPduDataApi ASPECT_UNIQUE(CanIf_ReadRxPduDataApi)

#define CanIf_ReadTxPduNotifyStatusApi ASPECT_UNIQUE(CanIf_ReadTxPduNotifyStatusApi)

#define CanIf_ReadRxPduNotifyStatusApi ASPECT_UNIQUE(CanIf_ReadRxPduNotifyStatusApi)

#define CanIf_SetDynamicTxIdApi ASPECT_UNIQUE(CanIf_SetDynamicTxIdApi)

#define CanIf_DlcCheck ASPECT_UNIQUE(CanIf_DlcCheck)

#define CanIf_WakeupSupport ASPECT_UNIQUE(CanIf_WakeupSupport)

#define CanIf_SoftwareFilterType ASPECT_UNIQUE(CanIf_SoftwareFilterType)

#define CanIf_PublicWakeupCheckValidationSupport ASPECT_UNIQUE(CanIf_PublicWakeupCheckValidationSupport)

#define CanIf_TransmitCancellation ASPECT_UNIQUE(CanIf_TransmitCancellation)

#define CanIf_PublicTxConfirmPollingSupport ASPECT_UNIQUE(CanIf_PublicTxConfirmPollingSupport)

#define CanIf_VersionInfoApi ASPECT_UNIQUE(CanIf_VersionInfoApi)

#define CanIf_MaxNumberOfHrh ASPECT_UNIQUE(CanIf_MaxNumberOfHrh)

#define CanIf_NumberOfCanHWUnits ASPECT_UNIQUE(CanIf_NumberOfCanHWUnits)


/* Feature */
#define UserCode_Init ASPECT_UNIQUE(UserCode_Init)

#define UserCode_VariableInitialize ASPECT_UNIQUE(UserCode_VariableInitialize)

#define UserCode_OnStart ASPECT_UNIQUE(UserCode_OnStart)

#define UserCode_MainFunction ASPECT_UNIQUE(UserCode_MainFunction)

#define UserCode_SetValue ASPECT_UNIQUE(UserCode_SetValue)

#define UserCode_SetValueWithReset ASPECT_UNIQUE(UserCode_SetValueWithReset)

#define UserCode_GetValue ASPECT_UNIQUE(UserCode_GetValue)

#define UserCode_PreparePduSend ASPECT_UNIQUE(UserCode_PreparePduSend)

#define UserCode_PostReceive ASPECT_UNIQUE(UserCode_PostReceive)

#define UserCode_GetResult ASPECT_UNIQUE(UserCode_GetResult)

#define Feature_Init ASPECT_UNIQUE(Feature_Init)

#define Feature_VariableInitialize ASPECT_UNIQUE(Feature_VariableInitialize)

#define Feature_OnStart ASPECT_UNIQUE(Feature_OnStart)

#define Feature_MainFunction ASPECT_UNIQUE(Feature_MainFunction)

#define Feature_SetValue ASPECT_UNIQUE(Feature_SetValue)

#define Feature_SetValueWithReset ASPECT_UNIQUE(Feature_SetValueWithReset)

#define Feature_GetValue ASPECT_UNIQUE(Feature_GetValue)

#define Feature_ComPreparePduSend ASPECT_UNIQUE(Feature_ComPreparePduSend)

#define Feature_ComReworkPduRec ASPECT_UNIQUE(Feature_ComReworkPduRec)

#define Feature_ComReworkPduSend ASPECT_UNIQUE(Feature_ComReworkPduSend)

#define Feature_ComGetPduEnableState ASPECT_UNIQUE(Feature_ComGetPduEnableState)

#define Feature_ComCounterSignalCount ASPECT_UNIQUE(Feature_ComCounterSignalCount)

#define Feature_ComCounterSignalRevert ASPECT_UNIQUE(Feature_ComCounterSignalRevert)

#define Feature_ComCounterSignalAnalyze ASPECT_UNIQUE(Feature_ComCounterSignalAnalyze)

#define Feature_ComUserCodeInitPduVariables ASPECT_UNIQUE(Feature_ComUserCodeInitPduVariables)

#define Feature_Com_E2E_Status ASPECT_UNIQUE(Feature_Com_E2E_Status)

#define Feature_IpduMReworkPduRec ASPECT_UNIQUE(Feature_IpduMReworkPduRec)

#define Feature_IpduMReworkPduSend ASPECT_UNIQUE(Feature_IpduMReworkPduSend)

#define Feature_SecOCReworkPduRec ASPECT_UNIQUE(Feature_SecOCReworkPduRec)

#define Feature_SecOCReworkPduSend ASPECT_UNIQUE(Feature_SecOCReworkPduSend)


/* Rte */
#define Rte_ReadSignal ASPECT_UNIQUE(Rte_ReadSignal)

#define Rte_WriteSignal ASPECT_UNIQUE(Rte_WriteSignal)

#define Rte_SetCodedValue ASPECT_UNIQUE(Rte_SetCodedValue)

#define Rte_SetPhysicalValue ASPECT_UNIQUE(Rte_SetPhysicalValue)


/* Com */
#define Com_Init ASPECT_UNIQUE(Com_Init)

#define Com_DeInit ASPECT_UNIQUE(Com_DeInit)

#define Com_VariableInitialize ASPECT_UNIQUE(Com_VariableInitialize)

#define Com_OnStart ASPECT_UNIQUE(Com_OnStart)

#define Com_TriggerTransmit ASPECT_UNIQUE(Com_TriggerTransmit)

#define Com_SendSignal ASPECT_UNIQUE(Com_SendSignal)

#define Com_SendSignalGroup ASPECT_UNIQUE(Com_SendSignalGroup)

#define Com_UpdateShadowSignal ASPECT_UNIQUE(Com_UpdateShadowSignal)

#define Com_InvalidateSignal ASPECT_UNIQUE(Com_InvalidateSignal)

#define Com_InvalidateShadowSignal ASPECT_UNIQUE(Com_InvalidateShadowSignal)

#define Com_InvalidateSignalGroup ASPECT_UNIQUE(Com_InvalidateSignalGroup)

#define Com_TxConfirmation ASPECT_UNIQUE(Com_TxConfirmation)

#define Com_ReceiveSignal ASPECT_UNIQUE(Com_ReceiveSignal)

#define Com_ReceiveSignalGroup ASPECT_UNIQUE(Com_ReceiveSignalGroup)

#define Com_ReceiveShadowSignal ASPECT_UNIQUE(Com_ReceiveShadowSignal)

#define Com_RxIndication ASPECT_UNIQUE(Com_RxIndication)

#define Com_TriggerIPDUSend ASPECT_UNIQUE(Com_TriggerIPDUSend)

#define Com_TriggerIPDU ASPECT_UNIQUE(Com_TriggerIPDU)

#define Com_GetVersionInfo ASPECT_UNIQUE(Com_GetVersionInfo)

#define Com_GetStatus ASPECT_UNIQUE(Com_GetStatus)

#define Com_MainFunctionTx ASPECT_UNIQUE(Com_MainFunctionTx)

#define Com_MainFunctionRx ASPECT_UNIQUE(Com_MainFunctionRx)

#define Com_MainFunction ASPECT_UNIQUE(Com_MainFunction)

#define Com_TaskMain ASPECT_UNIQUE(Com_TaskMain)

#define Com_StartOfReception ASPECT_UNIQUE(Com_StartOfReception)

#define Com_TpRxIndication ASPECT_UNIQUE(Com_TpRxIndication)

#define Com_TpTxConfirmation ASPECT_UNIQUE(Com_TpTxConfirmation)

#define Com_CopyRxData ASPECT_UNIQUE(Com_CopyRxData)

#define Com_CopyTxData ASPECT_UNIQUE(Com_CopyTxData)


/* PduR */
#define PduR_GetVersionInfo ASPECT_UNIQUE(PduR_GetVersionInfo)

#define PduR_Init ASPECT_UNIQUE(PduR_Init)

#define PduR_VariableInitialize ASPECT_UNIQUE(PduR_VariableInitialize)

#define PduR_ComTransmit ASPECT_UNIQUE(PduR_ComTransmit)

#define PduR_MultiIfTransmit ASPECT_UNIQUE(PduR_MultiIfTransmit)

#define PduR_IpduMTransmit ASPECT_UNIQUE(PduR_IpduMTransmit)

#define PduR_IpduMTriggerTransmit ASPECT_UNIQUE(PduR_IpduMTriggerTransmit)

#define PduR_IpduMTxConfirmation ASPECT_UNIQUE(PduR_IpduMTxConfirmation)

#define PduR_IpduMRxIndication ASPECT_UNIQUE(PduR_IpduMRxIndication)

#define PduR_CanIfTxConfirmation ASPECT_UNIQUE(PduR_CanIfTxConfirmation)

#define PduR_CanIfRxIndication ASPECT_UNIQUE(PduR_CanIfRxIndication)

#define PduR_CanNmTxConfirmation ASPECT_UNIQUE(PduR_CanNmTxConfirmation)

#define PduR_CanNmTriggerTransmit ASPECT_UNIQUE(PduR_CanNmTriggerTransmit)

#define PduR_CanNmRxIndication ASPECT_UNIQUE(PduR_CanNmRxIndication)

#define PduR_LinIfTxConfirmation ASPECT_UNIQUE(PduR_LinIfTxConfirmation)

#define PduR_LinIfRxIndication ASPECT_UNIQUE(PduR_LinIfRxIndication)

#define PduR_LinIfTriggerTransmit ASPECT_UNIQUE(PduR_LinIfTriggerTransmit)

#define PduR_SecOCTransmit ASPECT_UNIQUE(PduR_SecOCTransmit)

#define PduR_SecOCTriggerTransmit ASPECT_UNIQUE(PduR_SecOCTriggerTransmit)

#define PduR_SecOCTxConfirmation ASPECT_UNIQUE(PduR_SecOCTxConfirmation)

#define PduR_SecOCRxIndication ASPECT_UNIQUE(PduR_SecOCRxIndication)

#define PduR_J1939TpCopyRxData ASPECT_UNIQUE(PduR_J1939TpCopyRxData)

#define PduR_J1939TpCopyTxData ASPECT_UNIQUE(PduR_J1939TpCopyTxData)

#define PduR_J1939TpRxIndication ASPECT_UNIQUE(PduR_J1939TpRxIndication)

#define PduR_J1939TpStartOfReception ASPECT_UNIQUE(PduR_J1939TpStartOfReception)

#define PduR_J1939TpTxConfirmation ASPECT_UNIQUE(PduR_J1939TpTxConfirmation)

#define PduR_J1939TpTriggerTransmit ASPECT_UNIQUE(PduR_J1939TpTriggerTransmit)

#define PduR_Config ASPECT_UNIQUE(PduR_Config)


/* SchM */
#define SchM_Init ASPECT_UNIQUE(SchM_Init)

#define SchM_DeInit ASPECT_UNIQUE(SchM_DeInit)

#define SchM_GetVersionInfo ASPECT_UNIQUE(SchM_GetVersionInfo)

#define SchM_Enter_CanIf ASPECT_UNIQUE(SchM_Enter_CanIf)

#define SchM_Exit_CanIf ASPECT_UNIQUE(SchM_Exit_CanIf)

#define SchM_Enter_LinIf ASPECT_UNIQUE(SchM_Enter_LinIf)

#define SchM_Exit_LinIf ASPECT_UNIQUE(SchM_Exit_LinIf)

#define SchM_Enter_IpduM ASPECT_UNIQUE(SchM_Enter_IpduM)

#define SchM_Exit_IpduM ASPECT_UNIQUE(SchM_Exit_IpduM)

#define SchM_Enter_SecOC ASPECT_UNIQUE(SchM_Enter_SecOC)

#define SchM_Exit_SecOC ASPECT_UNIQUE(SchM_Exit_SecOC)



#ifdef __cplusplus
extern "C"
{
#endif

/*----------------------------------------------------------------------------*/
/* FORWARD DECLARATIONS OF STATIC FUNCTIONS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif


