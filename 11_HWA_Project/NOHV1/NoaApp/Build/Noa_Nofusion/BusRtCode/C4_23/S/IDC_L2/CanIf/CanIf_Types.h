/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Types.h
*
*  @brief Declaration of CanIf API types (ECU scope).
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


#ifndef CANIF_TYPES_H_
#define CANIF_TYPES_H_

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "../Common/ComStack_Types.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/* Requested Pdu Mode array index,CanIf_PduSetModeType */

#define CANIF_REQUESTED_MODE                         ((uint8)0x07)

/* Current Pdu Mode array index,CanIf_PduGetModeType */
#define CANIF_CURRENT_MODE                           ((uint8)0x06)

typedef uint32 Can_IdType;

/* CANIF136 */
typedef enum CanIf_ControllerModeType
{
    CANIF_CS_UNINIT = 0,
    CANIF_CS_STOPPED,
    CANIF_CS_STARTED,
    CANIF_CS_SLEEP
}CanIf_ControllerModeType;

/* CANIF137 */
typedef enum CanIf_PduSetModeType
{
    CANIF_SET_OFFLINE = 0,
    CANIF_SET_RX_OFFLINE,
    CANIF_SET_RX_ONLINE,
    CANIF_SET_TX_OFFLINE,
    CANIF_SET_TX_ONLINE,
    CANIF_SET_ONLINE,
    CANIF_SET_TX_OFFLINE_ACTIVE
}CanIf_PduSetModeType;

/* CANIF138 */
typedef enum CanIf_PduGetModeType
{
    CANIF_GET_OFFLINE = 0,
    CANIF_GET_RX_ONLINE,
    CANIF_GET_TX_ONLINE,
    CANIF_GET_ONLINE,
    CANIF_GET_OFFLINE_ACTIVE,
    CANIF_GET_OFFLINE_ACTIVE_RX_ONLINE
}CanIf_PduGetModeType;

typedef enum CanIf_NotifStatusType
{
    CANIF_NO_NOTIFICATION = 0,
    CANIF_TX_RX_NOTIFICATION
}CanIf_NotifStatusType;

typedef enum CanIf_TransceiverModeType
{
    CANIF_TRCV_MODE_NORMAL = 0,
    CANIF_TRCV_MODE_STANDBY,
    CANIF_TRCV_MODE_SLEEP
}CanIf_TransceiverModeType;

typedef enum CanIf_TrcvWakeupReasonType
{
    CANIF_TRCV_WU_ERROR = 0,
    CANIF_TRCV_WU_NOT_SUPPORTED,
    CANIF_TRCV_WU_BY_BUS,
    CANIF_TRCV_WU_INTERNALLY,
    CANIF_TRCV_WU_RESET,
    CANIF_TRCV_WU_POWER_ON,
    CANIF_TRCV_WU_BY_PIN,
    CANIF_TRCV_WU_BY_SYSERR
}CanIf_TrcvWakeupReasonType;

typedef enum CanIf_TrcvWakeupModeType
{
    CANIF_TRCV_WU_ENABLE = 0,
    CANIF_TRCV_WU_DISABLE,
    CANIF_TRCV_WU_CLEAR
}CanIf_TrcvWakeupModeType;

typedef enum CanIfCanTxPduType_Type
{
    CANIF_PDU_TYPE_DYNAMIC,
    CANIF_PDU_TYPE_STATIC,
    CANIF_PDU_TYPE_DYNAMIC_CDD
}CanIfCanTxPduType_Type;

typedef enum CanIfCanIdType
{
    EXTENDED_CAN,
    STANDARD_CAN,
    EXTENDED_FD_CAN_BRS_OFF,
    STANDARD_FD_CAN_BRS_OFF,
    EXTENDED_FD_CAN_BRS_ON,
    STANDARD_FD_CAN_BRS_ON
}CanIfCanIdType;

typedef enum CanIfUserType
{
    CANIF_CANNM,
    CANIF_CANTP,
    CANIF_CDD,
    CANIF_CANTSYN,
    CANIF_PDUR,
    CANIF_J1939TP
}CanIfUserType;

typedef enum CanIfDlcType
{
	CANIF_DLC_STANDARD,
	CANIF_DLC_DYNAMIC
}CanIfDlcType;

typedef enum CanIfHxhType
{
    BASIC_CAN,
    FULL_CAN
}CanIfHxhType;

typedef enum CanIfDispatchUserCtrlUL
{
    UL_CAN_SM,
    UL_CDD,
    UL_ECUM,
    UL_NONE
}CanIfDispatchUserCtrlUL;

typedef enum CanIfSoftwareFilterType_Type
{
    BINARY,
    INDEX,
    LINEAR,
    TABLE
}CanIfSoftwareFilterType_Type;

/* Pointer to user call back API for Tx Confirmation */
typedef P2FUNC(void, CANIF_APPL_CODE, CanIfUserTxConfirmationType)
(
    VAR(PduIdType, AUTOMATIC)CanTxPduId
);

/* Pointer to user call back API for Rx indication */
typedef P2FUNC(void, CANIF_APPL_CODE, CanIfUserRxIndicationType)
(
    VAR(PduIdType, AUTOMATIC)CanRxPduId, P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)CanSdu
);


/* Pointer to user call back API for controller BusOff */
typedef P2FUNC(void, CANIF_APPL_CODE, CanIfDispatchUserCtrlBusOffNameType)
(
    VAR(uint8, AUTOMATIC)Controller
);

/**< Notification performed when a previous wakeup event has been validated */
typedef P2FUNC(void, CANIF_APPL_CODE, CanIfValidationWakeupEventType)
(
    VAR(uint32, AUTOMATIC)CanWakupEvents
);

/* Pointer to API CanIf_Transmit */
typedef P2FUNC(Std_ReturnType, CANIF_APPL_CODE, CanIfTransmitType)
(
    VAR(PduIdType, AUTOMATIC)CanTxPduId,
    P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr
);

typedef P2FUNC(void, CANIF_APPL_CODE, RxInterruptFunctionPointerType)(void);

#endif /* CANIF_TYPES_H_ */