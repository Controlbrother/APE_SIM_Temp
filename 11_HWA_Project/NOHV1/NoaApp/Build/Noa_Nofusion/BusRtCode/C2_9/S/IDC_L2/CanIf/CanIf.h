/** !------------------------------------------------------------------------->
*
*  @file CanIf.h
*
*  @brief AUTOSAR CAN Interface module provides the interface to the services of
*  CAN driver for the upper communication services
*
*  @author
*    SajuJ
*
*  @description
*    This header file contains extern declarations of services to be used by the
*    upper layers and different version informations, Service Ids of the APIs
*    and Error Ids.
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*  @version
*
*!-------------------------------------------------------------------------->*/
#pragma once

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "Config.h"
#include "BusConfiguration.h"
#include "CanIf_Types.h"
#include "CanIf_Cfg.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/**
  * CanIf module is not initialized
  *
  */
#define CANIF_UNINITIALIZED 0

/**
  * CanIf module is initialized
  *
  */
#define CANIF_INITIALIZED 1

#define CANIF_MODULE_ID                          ((uint16)60)
#define CANIF_INSTANCE_ID                        ((uint8)0)
#define CANIF_VENDOR_ID                          ((uint8)35)

#define CANIF_H_AR_MAJOR_VERSION                 (0x03U)
#define CANIF_H_AR_MINOR_VERSION                 (0x02U)
#define CANIF_H_AR_PATCH_VERSION                 (0x01U)

#define CANIF_H_SW_MAJOR_VERSION                 (0x01)
#define CANIF_H_SW_MINOR_VERSION                 (0x00)
#define CANIF_H_SW_PATCH_VERSION                 (0x00)

/** Service ID of CanIf_InitController() */
#define CANIF_SID_INITCONTROLLER                 ((uint8)0x02)

/** Service ID of Canif_Init() */
#define CANIF_SID_INIT                           ((uint8)0x01)

/** Service ID of CanIf_SetController() */
#define CANIF_SID_SET_CNTRLR_MODE                ((uint8)0x03)

 /** Service ID of CanIf_GetControllerMode () */
#define CANIF_SID_GET_CNTRLR_MODE                ((uint8)0x04)

/** Service ID of CanIf_Transmit() */
#define CANIF_SID_TRANSMIT                       ((uint8)0x05)

/** Service ID of CanIf_ReadRxPduData() */
#define CANIF_SID_READ_RXPDU_DATA                ((uint8)0x06)

/** Service ID of CanIf_ReadTxNotifStatus() */
#define CANIF_SID_READ_TX_NOTIF_STATUS           ((uint8)0x07)

/** Service ID of Can_ReadRxNotifStatus() */
#define CANIF_SID_READ_RX_NOTIF_STATUS           ((uint8)0x08)

/** Service ID of CanIf_SetPduMode() */
#define CANIF_SID_SET_PDU_MODE                   ((uint8)0x09)

/** Service ID of CanIf_GetPduMode() */
#define CANIF_SID_GET_PDU_MODE                   ((uint8)0x0A)

/** Service ID of CanIf_GetVersionInfo() */
#define CANIF_SID_GET_VERSIONINFO                ((uint8)0x0B)

/** Service ID of CanIf_SetDynamicTxId() */
#define CANIF_SID_SET_DYNAMIC_TXID               ((uint8)0x0C)

 /** Service ID of CanIf_SetTransceiverMode() */
#define CANIF_SID_SET_TRCVR_MODE                 ((uint8)0x0D)

/** Service ID of CanIf_GetTransceiverMode() */
#define CANIF_SID_GET_TRCVR_MODE                 ((uint8)0x0E)

/** Service ID of CanIf_GetTrcvWakeupReason() */
#define CANIF_SID_GET_TRCVR_WKUP_REASON          ((uint8)0x0F)

/** Service ID of CanIf_SetTransceiverWakeupMode() */
#define CANIF_SID_SET_TRCVR_WKUP_MODE            ((uint8)0x10)

/** Service ID of CanIf_CheckWakeup() */
#define CANIF_SID_CHK_WAKEUP                     ((uint8)0x11)

 /** Service ID of CanIf_CheckValidation() */
#define CANIF_SID_CHK_VALIDATION                 ((uint8)0x12)

/** Service ID of CanIf_TxConfirmation() */
#define CANIF_SID_TX_CONFIRMATION                ((uint8)0x13)

/** Service ID of CanIf_RxIndication() */
#define CANIF_SID_RX_INDICATION                  ((uint8)0x14)

/** Service ID of CanIf_CancelTxConfirmation() */
#define CANIF_SID_CANCEL_TX_CONFIRMATION         ((uint8)0x15)

/** Service ID of CanIf_ControllerBusOff() */
#define CANIF_SID_CONTROLLER_BUS_OFF             ((uint8)0x16)

/** Service ID of CanIf_GetTxConfirmationState() */
#define CANIF_SID_GET_TX_CONFIRMATION_STATE      ((uint8)0x19)

/** Service ID of CanIf_ConfirmPnAvailability() */
#define CANIF_SID_CONFIRM_PN_AVAILABILITY        ((uint8)0x1A)

/** Service ID of CanIf_ClearTrcvWufFlag() */
#define CANIF_SID_CLEAR_TRCVR_WKUP_FLAG          ((uint8)0x1E)

/** Service ID of CanIf_CheckTrcvWakeFlag() */
#define CANIF_SID_CHECK_TRCVR_WKUP_FLAG          ((uint8)0x1F)
/**
 * \brief List of Error IDs which will be reported through
 *  Det_ReportError
 */

/** API service called with invalid CanId */
#define CANIF_E_PARAM_CANID                       ((uint8)10)

/** API service called with invalid DLC  */
#define CANIF_E_PARAM_DLC                         ((uint8)11)

/** API service called with invalid HRH  */
#define CANIF_E_PARAM_HRH                         ((uint8)12)

/** API service called with invalid channel */
#define CANIF_E_PARAM_CHANNEL                     ((uint8)13)

/** API service called with invalid controller */
#define CANIF_E_PARAM_CONTROLLER                   ((uint8)14)

/** API service called with invalid wakeup source */
#define CANIF_E_PARAM_WAKEUPSOURCE                 ((uint8)15)

 /** API service called with invalid pointer */
#define CANIF_E_PARAM_POINTER                      ((uint8)20)

 /** API service used without module initialization */
#define CANIF_E_UNINIT                              ((uint8)30)

/** CAN Interface is in STOPPED mode */
#define CANIF_E_STOPPED                             ((uint8)31)

/** Transmit buffers full */
#define CANIF_E_FULL_TX_BUFFER                      ((uint8)32)

 /** Requested API operation is not supported */
#define CANIF_E_NOK_NOSUPPORT                       ((uint8)40)

/** API service called with invalid transceiver parameter */
#define CANIF_TRCV_E_TRANSCEIVER                    ((uint8)50)

/** API service called with invalid parameter for CAN  transceiver
     operation mode */
#define CANIF_TRCV_E_TRCV_NOT_STANDBY               ((uint8)60)

/** API service called with invalid parameter for CAN transceiver
     operation mode */
#define CANIF_TRCV_E_TRCV_NOT_NORMAL                ((uint8)70)

/** Transmit PDU ID invalid  */
#define CANIF_E_INVALID_TXPDUID                     ((uint8)80)

/** Receive PDU ID invalid */
#define CANIF_E_INVALID_RXPDUID                     ((uint8)90)

/* Internal types which need not be exposed */

/* PN filter is available for the controller */

#define CANIF_PN_FILTER_AVAILABLE                 ((uint8)0x01)

/* The controller is enabled for PN filter */
#define CANIF_PN_FILTER_ENABLE                    ((uint8)0x02)

/**
  * The controller is locked for mode change
  *
  */
#define CANIF_CONTROLLER_LOCK                     ((uint8)0x04)

/**
  * Lock transmit to indicate transmission
  *
  */
#define CANIF_TRANSMIT_LOCK                       ((uint8)0x08)

#define CANIF_SET_CANID_MSB                        0x80000000UL

#define CANIF_MAX_DLC (64)

/**
  * \brief The maximum value of extended CAN ID
  *
  */
#define CANIF_EXT_CANID_MAXVAL        ((Can_IdType)0x1FFFFFFFU)

#define CANIF_WAKEUP_DETECTED                      0x01
#define CANIF_WAKEUP_CLEARED                       0x00
/**
  * \brief The maximum value of standard CAN ID
  *
  */
#define CANIF_STD_CANID_MAXVAL        ((Can_IdType)0x7FF)

/* External declarations of Link time configuration parameters */
extern VAR(uint8, AUTOMATIC) CanIf_DevErrorDetect;
extern VAR(uint8, AUTOMATIC) CanIf_MutltipleDriverSupport;
extern VAR(uint8, AUTOMATIC) CanIf_PublicPNSupport;
extern VAR(uint8, AUTOMATIC) CanIf_ReadRxPduDataApi;
extern VAR(uint8, AUTOMATIC) CanIf_ReadTxPduNotifyStatusApi;
extern VAR(uint8, AUTOMATIC) CanIf_ReadRxPduNotifyStatusApi;
extern VAR(uint8, AUTOMATIC) CanIf_SetDynamicTxIdApi;
extern VAR(uint8, AUTOMATIC) CanIf_DlcCheck;
extern VAR(uint8, AUTOMATIC) CanIf_WakeupSupport;
extern VAR(CanIfSoftwareFilterType_Type, AUTOMATIC) CanIf_SoftwareFilterType;
extern VAR(uint8, AUTOMATIC) CanIf_PublicWakeupCheckValidationSupport;
extern VAR(uint8, AUTOMATIC) CanIf_TransmitCancellation;
extern VAR(uint8, AUTOMATIC) CanIf_PublicTxConfirmPollingSupport;
extern VAR(uint8, AUTOMATIC) CanIf_VersionInfoApi;
extern VAR(uint8, AUTOMATIC) CanIf_MaxNumberOfHrh;
extern VAR(uint8, AUTOMATIC) CanIf_NumberOfCanHWUnits;


/* External declarations of APIs */
extern FUNC(void, CANIF_CODE)CanIf_InitFunction(P2CONST(void, AUTOMATIC, AUTOMATIC)ConfigPtr);

extern FUNC(void, CANIF_CODE)CanIf_InitController(VAR(uint8, AUTOMATIC)Controller, VAR(uint8, AUTOMATIC)ConfigurationIndex);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_SetControllerMode(VAR(uint8, AUTOMATIC)Controller, VAR(CanIf_ControllerModeType, AUTOMATIC)ControllerMode);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetControllerMode(VAR(uint8, AUTOMATIC)Controller, P2VAR(CanIf_ControllerModeType, AUTOMATIC, AUTOMATIC)ControllerModePtr);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_Transmit(VAR(PduIdType, AUTOMATIC)CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_ReadRxPduData(VAR(PduIdType, AUTOMATIC)CanRxPduId, P2VAR(PduInfoType, AUTOMATIC,AUTOMATIC)PduInfoPtr);

extern FUNC(CanIf_NotifStatusType, CANIF_CODE)CanIf_ReadTxNotifStatus(VAR(PduIdType, AUTOMATIC)CanTxPduId);

extern FUNC(CanIf_NotifStatusType, CANIF_CODE)CanIf_ReadRxNotifStatus(VAR(PduIdType, AUTOMATIC)CanRxPduId);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_SetPduMode(VAR(uint8, AUTOMATIC)Controller, VAR(CanIf_PduSetModeType, AUTOMATIC)PduModeRequest);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetPduMode(VAR(uint8, AUTOMATIC)Controller, P2VAR(CanIf_PduGetModeType, AUTOMATIC, AUTOMATIC)PduModePtr);

extern FUNC(void, CANIF_CODE)CanIf_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, AUTOMATIC)VersionInfo);

extern FUNC(void, CANIF_CODE)CanIf_SetDynamicTxId(VAR(PduIdType, AUTOMATIC)CanTxPduId, VAR(Can_IdType, AUTOMATIC)CanId);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_SetTransceiverMode(VAR(uint8, AUTOMATIC)Transceiver, VAR(CanIf_TransceiverModeType, AUTOMATIC)TransceiverMode);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetTransceiverMode(VAR(uint8, AUTOMATIC)Transceiver, P2VAR(CanIf_TransceiverModeType, AUTOMATIC, AUTOMATIC)TransceiverModePtr);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetTrcvWakeupReason(VAR(uint8, AUTOMATIC)Transceiver, P2VAR(CanIf_TrcvWakeupReasonType, AUTOMATIC, AUTOMATIC)TrcvWuReasonPtr);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_SetTransceiverWakeupMode(VAR(uint8, AUTOMATIC)Transceiver, VAR(CanIf_TrcvWakeupModeType, AUTOMATIC)TrcvWakeupMode);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_CheckWakeup(VAR(uint32, AUTOMATIC)WakeupSource);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_CheckValidation(VAR(uint32, AUTOMATIC)WakeupSource);

extern FUNC(CanIf_NotifStatusType, CANIF_CODE)CanIf_GetTxConfirmationState(VAR(uint8, AUTOMATIC)CanController);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_ClearTrcvWufFlag(VAR(uint8, AUTOMATIC)Transceiver);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_CheckTrcvWakeFlag(VAR(uint8, AUTOMATIC)Transceiver);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_TransmitFunction(VAR(PduIdType, AUTOMATIC)CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr);

extern FUNC(Std_ReturnType, CANIF_CODE)CanIf_TransmitFrameFunction(VAR(PduIdType, AUTOMATIC)CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr, VAR(uint32, AUTOMATIC)CanId, VAR(CanIfCanIdType, AUTOMATIC)CanIdType);

extern FUNC(void, CANIF_CODE)CanIf_DiscardMessages(void);

extern FUNC(void, CANIF_CODE)CanIf_UpdateBoards(void);

extern FUNC(void, CANIF_CODE)CanIf_SetRxInterruptEnabledState(VAR(uint32, AUTOMATIC)Index, VAR(uint8, AUTOMATIC) State);

#ifdef __cplusplus
}
#endif
