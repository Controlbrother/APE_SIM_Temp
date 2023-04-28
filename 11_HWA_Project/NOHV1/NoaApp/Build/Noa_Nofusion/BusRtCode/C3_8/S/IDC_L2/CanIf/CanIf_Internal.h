/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Internal.h
*
*  @brief Declaration of the internal CanIf types.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

#pragma once

#include "Config.h"
#include "BusConfiguration.h"

#include "CanIf_Types.h"
#include <Compiler.h>
#include <Std_Types.h>
#include <DsCanMsg.h>

/* Pointer to API CanIf_Receive */
typedef P2FUNC(void, CANIF_APPL_CODE, CanIfRxIndicationType)
(
    void* pCbArg,
    P2CONST(DsSCanMsg_Item, AUTOMATIC, AUTOMATIC)PduInfoPtr
);


/* Type of the DsCan channel handle */
typedef DsTCanCh CanControllerRef;

/*----------------------------------------------------------------------------*/
/* TYPEDEFS / STRUCTURES */
/*----------------------------------------------------------------------------*/

/* fake types */
typedef uint8 Can_HwHandleType;
typedef struct Can_PduType
{
    VAR(PduIdType, AUTOMATIC)swPduHandle;
    VAR(uint8, AUTOMATIC)length;
    VAR(Can_IdType, AUTOMATIC)id;
    P2VAR(uint8, AUTOMATIC, TYPEDEF)sdu;
}Can_PduType;


/* Bits can be used instead of Byte array,going for speed rather than ram */
typedef struct CanIfCanControllerFlags
{
    VAR(uint8, AUTOMATIC)ControllerFlags;
    VAR(uint8, AUTOMATIC)PduGetMode;
    VAR(uint8, AUTOMATIC)ControllerMode;
    VAR(uint8, AUTOMATIC)TxConfirmationStatus;
    VAR(uint8, AUTOMATIC)RxIndicationStatus;
    VAR(uint8, AUTOMATIC)WakeUpFlag;
}CanIfControllerFlags;


typedef struct CanIfHthConfig
{
    VAR(CanIfHxhType, AUTOMATIC)CanIfHthType;
    VAR(uint8, AUTOMATIC)CanIfCanControllerIdRef;
    /* CanHardwareObject, mapped to DsTCanMsg */
    void* CanIfHthIdSymRef;
}CanIfHthConfig;

typedef struct CanIfTxPduConfig
{
    VAR(PduIdType, AUTOMATIC)CanIfCanTxPduId;
    VAR(uint32, AUTOMATIC)CanIfCanTxPduIdCanId;
	VAR(CanIfDlcType, AUTOMATIC)CanIfCanTxPduIdDlcType;
    VAR(uint8, AUTOMATIC)CanIfCanTxPduIdDlc;
    VAR(CanIfCanTxPduType_Type, AUTOMATIC)CanIfCanTxPduType;
    VAR(uint8, AUTOMATIC)CanIfCanDynamicTxPduIndex;
    VAR(boolean, AUTOMATIC)CanIfReadTxPduNotifyStatus;
    VAR(CanIfCanIdType, AUTOMATIC)CanIfTxPduIdCanIdType;
    VAR(boolean, AUTOMATIC)CanIfTxPduPnFilterPdu;
    VAR(CanIfUserType, AUTOMATIC)CanIfTxUserType;
    VAR(CanIfUserTxConfirmationType, AUTOMATIC)CanIfUserTxConfirmation;
    VAR(uint32, AUTOMATIC)CanIfCanTxPduHthRef;
    VAR(PduIdType, AUTOMATIC)PduIdRef;
    VAR(uint32, AUTOMATIC)QueueSize;
    VAR(uint8, AUTOMATIC)UnusedBitPattern;
}CanIfTxPduConfig;

typedef struct CanIfRxPduCanIdRange
{
    uint32 CanIfRxPduCanIdRangeLowerCanId;
    uint32 CanIfRxPduCanIdRangeUpperCanId;
}CanIfRxPduCanIdRange;

typedef struct CanIfHrhRangeConfig
{
    VAR(uint32, AUTOMATIC)CanIfRxPduLowerCanId;
    VAR(CanIfCanIdType, AUTOMATIC)CanIfRxPduRangeCanIdType;
    VAR(uint32, AUTOMATIC)CanIfRxPduUpperCanId;
}CanIfHrhRangeConfig;

typedef struct CanIfHrhConfig
{
    VAR(uint8, AUTOMATIC)CanIfHrhId;
    VAR(CanIfHxhType, AUTOMATIC)CanIfHrhType;
    VAR(boolean, AUTOMATIC)CanIfSoftwareFilterHrh;
    VAR(uint8, AUTOMATIC)CanIfCanControllerHrhIdRef;
    /* CanHardwareObject, mapped to DsTCanMsg */
    void* CanIfHrhIdSymRef;
    P2VAR(CanIfHrhRangeConfig, AUTOMATIC, TYPEDEF)HrhRangeConfig;
    VAR(uint8, AUTOMATIC)CanIfNumberofHrhRange;
}CanIfHrhConfig;

typedef struct CanIfInitHohConfig
{
    void* CanIfRefConfigSet;
    P2VAR(CanIfHrhConfig, AUTOMATIC, TYPEDEF)HrhConfig;
    P2VAR(CanIfHthConfig, AUTOMATIC, TYPEDEF)HthConfig;
}CanIfInitHohConfig;

typedef struct CanIfRxPduConfig
{
    VAR(PduIdType, AUTOMATIC)CanIfCanRxPduId;
    VAR(uint32, AUTOMATIC)CanIfCanRxPduCanId;
    VAR(uint8, AUTOMATIC)CanIfCanRxPduDlc;
    VAR(boolean, AUTOMATIC)CanIfReadRxPduData;
    VAR(boolean, AUTOMATIC)CanIfReadRxPduNotifyStatus;
    VAR(CanIfCanIdType, AUTOMATIC)CanIfRxPduIdCanIdType;
    VAR(CanIfUserType, AUTOMATIC)CanIfRxUserType;
    VAR(CanIfUserRxIndicationType, AUTOMATIC)CanIfUserRxIndication;
    VAR(uint8, AUTOMATIC)CanIfCanRxPduHrhRef;
    VAR(PduIdType, AUTOMATIC)PduIdRef;
    /* If a range of frame Ids need to be mapped this PDU Id then the parameter will be valid otherwise make it NULL */
    P2VAR(CanIfRxPduCanIdRange, AUTOMATIC, AUTOMATIC)RxPduCanIdRange;
    VAR(uint32, AUTOMATIC) CanIfRxPduDataBufferInd;
    VAR(RxInterruptFunctionPointerType, AUTOMATIC)CanIf_RxInterruptAccessPoint;
    VAR(uint32, AUTOMATIC) CanIf_RxInterruptEnableStateManagerIndex;
}CanIfRxPduConfig;

typedef struct CanIfDispatchConfig
{
    VAR(CanIfDispatchUserCtrlBusOffNameType, AUTOMATIC)CanIfDispatchUserCtrlBusOffName;
    VAR(CanIfDispatchUserCtrlUL, AUTOMATIC)DispatchUserCtrlBusOffUL;
    VAR(CanIfValidationWakeupEventType, AUTOMATIC)CanIfDispatchUserValidateWakeupEventName;
    VAR(CanIfDispatchUserCtrlUL, AUTOMATIC)CanIfDispatchUserValidateWakeupEventUL;
    VAR(CanIfTransmitType, AUTOMATIC)CanIfDispatchTransmit;
    VAR(CanIfRxIndicationType, AUTOMATIC)CanIfDispatchRxIndication;
}CanIfDispatchConfig;

typedef struct CanIfControllerConfig
{
    VAR(boolean, AUTOMATIC)CanIfWakeupSupport;
    VAR(CanControllerRef, AUTOMATIC)CanIfControllerIdRef;
    VAR(uint8, AUTOMATIC)CanIfDriverNameRef;
    VAR(boolean, AUTOMATIC)CanIfRxObjectNeeded;
    VAR(uint8, AUTOMATIC)CanIf_ControllerEnabledState;
	VAR(sint32, AUTOMATIC)CanIf_StateManagerIndex;
	VAR(sint32, AUTOMATIC)CanIf_CreditCounterStateManagerIndex;
	VAR(DsTCanBoard, AUTOMATIC)CanBoard;
}CanIfControllerConfig;

typedef struct CanIfDriverConfig
{
    VAR(boolean, AUTOMATIC)CanIfBusoffNotification;
    VAR(boolean, AUTOMATIC)CanIfReceiveIndication;
    VAR(boolean, AUTOMATIC)CanIfTransmitCancellation;
    VAR(boolean, AUTOMATIC)CanIfTxConfirmation;
    VAR(boolean, AUTOMATIC)CanIfWakeupNotification;
    void* CanIfDriverNameRef;
    VAR(uint8, AUTOMATIC)InitHohConfigRef;
}CanIfDriverConfig;

typedef struct CanIfTransceiverDrvConfig
{
    VAR(boolean, AUTOMATIC)CanIfTrcvWakeupSupport;
    void* CanIfTrcvIdRef;
}CanIfTransceiverDrvConfig;

typedef struct CanIfInitConfiguration
{
    VAR(PduIdType, AUTOMATIC)CanIfNumberOfCanRxPduIds;
    VAR(PduIdType, AUTOMATIC)CanIfNumberOfCanTxPduIds;
    VAR(PduIdType, AUTOMATIC)CanIfNumberOfDynamicCanTxPduIds;
    P2VAR(CanIfInitHohConfig, AUTOMATIC, TYPEDEF)HohConfig;
    P2VAR(CanIfRxPduConfig, AUTOMATIC, TYPEDEF)RxPduConfig;
    P2VAR(CanIfTxPduConfig, AUTOMATIC, TYPEDEF)TxPduConfig;
}CanIfInitConfiguration;

typedef struct CanIfIndexRange {
    VAR(sint32, AUTOMATIC) MinIndex;
    VAR(sint32, AUTOMATIC) MaxIndex;
}CanIfIndexRange;

typedef struct CanIfIndexMapping {
    VAR(uint8, AUTOMATIC) Count;
    CanIfIndexRange(*Indices)[6];
}CanIfIndexMapping;

typedef struct CanIf_RxIndicationMetaDataType
{
    /* RxMonitor handle */
    P2VAR(CanIfHrhConfig, AUTOMATIC, TYPEDEF) CanIfReceivedHrh;
    /* Indicates whether the message item must be read from rx monitor */
    VAR(boolean, AUTOMATIC) IsInterruptContext;
    /* Index of the configuration element */
    VAR(PduIdType, AUTOMATIC) CanRxPduId;
}CanIf_RxIndicationMetaDataType;


typedef struct CanIf_ConfigType
{
    P2VAR(CanIfControllerConfig, AUTOMATIC, TYPEDEF)ControllerConfig;
    P2VAR(CanIfDispatchConfig, AUTOMATIC, TYPEDEF)DispatchConfig;
    P2VAR(CanIfDriverConfig, AUTOMATIC, TYPEDEF)DriverConfig;
    P2VAR(CanIfInitConfiguration, AUTOMATIC, TYPEDEF)InitConfig;
    /* Since cfg.h is not included,exclusion of these parameters with Pre-compile parameters
     *  not possible*/
     /* Points to RxPdu data RAM buffer  */
    P2VAR(uint8, AUTOMATIC, TYPEDEF)gp_RxPduDataBuffer;
    P2VAR(uint32, AUTOMATIC, TYPEDEF)gp_DynamicTxPduCanId;
    P2VAR(uint8, AUTOMATIC, TYPEDEF)gp_ReadRxPduNotifyStatus;
    P2VAR(uint8, AUTOMATIC, TYPEDEF)gp_ReadTxPduNotifyStatus;
    P2VAR(CanIfIndexMapping, AUTOMATIC, TYPEDEF) gp_CanIfIndexMapping;
    VAR(uint32, AUTOMATIC) BusConfigurationEnableStateManagerIndex;
    P2VAR(CanIf_RxIndicationMetaDataType, AUTOMATIC, TYPEDEF) gp_RxMetaData;
    P2VAR(CanIf_RxIndicationMetaDataType, AUTOMATIC, TYPEDEF) gp_RxInterruptMetaData;
}CanIf_ConfigType;

extern CanIfControllerFlags g_CntrlFlags[];
