/**************************************************************************************************\
 *** ComStack_Types.h
 ***
 *** Definition of PDU router stack types.
 ***
 *** Author: Werner Grundkoetter
 *** Since:  2007-04-19
 ***
 *** Copyright 2015, dSPACE GmbH. All rights reserved.
\**************************************************************************************************/

#ifndef _COMSTACK_TYPES_H_
#define _COMSTACK_TYPES_H_

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

/* Standard AUTOSAR types. */
#include <Std_Types.h>

/* COM Stack configuration (depending on EcuC) */
#include "ComStack_Cfg.h"

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/* Action has been successfully finished:
message sent out (in case of confirmation),
message received (in case of indication) */
#define NTFRSLT_OK                          (uint8)0x00

/* Error notification:
message not successfully sent out (in case of confirmation),
message not successfully received (in case of indication) */
#define NTFRSLT_E_NOT_OK                    (uint8)0x01

/* Error notification:
Y timer N_Ar/N_As (according to ISO specification [ISONM]) has passed its time-out value N_Asmax/N_Armax. */
#define NTFRSLT_E_TIMEOUT_A                 (uint8)0x02

/* Error notification:
timer N_Bs has passed its time-out value N_Bsmax (according to ISO specification [ISONM]). */
#define NTFRSLT_E_TIMEOUT_BS                (uint8)0x03

/* Error notification:
timer N_Cr has passed its time-out value N_Crmax. */
#define NTFRSLT_E_TIMEOUT_CR                (uint8)0x04

/* Error notification:
unexpected sequence number (PCI.SN) value received. */
#define NTFRSLT_E_WRONG_SN                  (uint8)0x05

/* Error notification:
invalid or unknown FlowStatus value has been received in a flow control (FC) N_PDU. */
#define NTFRSLT_E_INVALID_FS                (uint8)0x06

/* Error notification:
unexpected protocol data unit received. */
#define NTFRSLT_E_UNEXP_PDU                 (uint8)0x07

/* Error notification:
flow control WAIT frame that exceeds the maximum counter N_WFTmax received. */
#define NTFRSLT_E_WFT_OVRN                  (uint8)0x08

/* Error notification:
flow control (FC) N_PDU with FlowStatus = OVFLW received. It indicates that the buffer on the receiver side of a segmented message transmission
cannot store the number of bytes specified by the FirstFrame DataLength (FF_DL) parameter in the FirstFrame and therefore the transmission of
the segmented message was aborted. No buffer within the TP available to transmit the segmented I-PDU. */
#define NTFRSLT_E_NO_BUFFER                 (uint8)0x09

/* Action has been successfully finished:
Requested cancellation has been executed. */
#define NTFRSLT_E_CANCELATION_OK            (uint8)0x0A

/* Error notification:
Due to an internal error the requested cancellation has not been executed. This will happen e.g., if the to
be canceled transmission has been executed already. */
#define NTFRSLT_E_CANCELATION_NOT_OK        (uint8)0x0B

/*
 * SWS_COMTYPE_00020:
 * There is no bus transceiver error seen by the driver or transceiver does not support the detection of bus errors.
 */
#define BUSTRCV_OK                          (uint8)0x00
/*
 * SWS_COMTYPE_00020:
 * Bus transceiver detected an unclassified error.
 */
#define BUSTRCV_E_ERROR                     (uint8)0x01

/* The standard common published information */
#define COMSTACKTYPE_VENDOR_ID              (uint16)0x23
#define COMSTACKTYPE_MODULE_ID              (uint16)0xC4
#define COMSTACKTYPE_AR_MAJOR_VERSION       (uint8)0x04
#define COMSTACKTYPE_AR_MINOR_VERSION       (uint8)0x02
#define COMSTACKTYPE_AR_PATCH_VERSION       (uint8)0x02
#define COMSTACKTYPE_SW_MAJOR_VERSION       (uint8)0x02
#define COMSTACKTYPE_SW_MINOR_VERSION       (uint8)0x00
#define COMSTACKTYPE_SW_PATCH_VERSION       (uint8)0x00

/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/

/*
 * Basic information about a PDU of any type.
 *
 * SWS_COMTYPE_00011 :
 * Variables of this type shall be used to store the basic information about a PDU of any type, namely a pointer variable pointing to its SDU (payload), and the corresponding length of the SDU in bytes.
 */
typedef struct _PduInfoType
{
    /* Pointer to the SDU (i.e. payload data) of the PDU. Depending on the global parameter MetaDataLength, additional bytes containing MetaData (e.g. the CAN ID) are appended after the payload data. The type of this pointer depends on the memory model being used at compile time. */
    uint8 *SduDataPtr;
    /* Pointer to the meta data (e.g. CAN ID, Socket  ID, diagnostic addresses) of the PDU, consisting of a sequence of meta data items. The length and type of the meta data items is statically configured with each PDU. Meta data items with more than 8 bits use platform byte order. */
    uint8 *MetaDataPtr;
    /* Violation of SWS_Comtype_00004: In some cases, legacy code uses initialization using C assignments. This will lead to error at runtime. */
    /* Length of the SDU in bytes, including MetaData. */
    PduLengthType SduLength;
} PduInfoType;

/*
 * SWS_COMTYPE_00036 :
 * Used to store the identifier of a partial network cluster
 */
typedef uint8 PNCHandleType;

/*
 * This enumeration contains the transport protocol parameters that can be requested to be changed using the ChangeParameter API.
 *
 * SWS_COMTYPE_00031 :
 * Specify the parameter to which the value has to be changed (BS or STmin).
 */
typedef enum _TPParameterType
{
    /* Separation time parameter */
    TP_STMIN   = 0x00,
    /* Block size parameter */
    TP_BS      = 0x01,
    /* The BandwidthControl parameter used in FlexRay transport protocol module. */
    TP_BC      = 0x02
} TPParameterType;

/*
 * SWS_COMTYPE_00012:
 * Variables of this type shall be used to store the result of a buffer request.
 */
typedef enum _BufReq_ReturnType
{
    /* Buffer request accomplished successful. This status shall have the value 0. */
    BUFREQ_OK           = 0x00,
    /* Buffer request not successful. Buffer cannot be accessed. This status shall have the value 1. */
    BUFREQ_E_NOT_OK     = 0x01,
    /* Temporarily no buffer available. It’s up the requestor to retry request for a certain time.This status shall have the value 2. */
    BUFREQ_E_BUSY       = 0x02,
    /* No Buffer of the required length can be provided.This status shall have the value 3. */
    BUFREQ_E_OVFL       = 0x03
} BufReq_ReturnType;

/*
 * SWS_COMTYPE_00020:
 * Variables of this type shall be used to return the bus status evaluated by a transceiver.
 *  - 0x00 – 0x1E: General return codes. A detailed specification is listed below.
 *  - 0x1F - 0x3C: Error notification: Error notification codes specific for the communication system CAN. For a detailed definition please refer to the AUTOSAR specification of CAN Transceiver Driver [CANTRCV].
 *  - 0x3D – 0x5A: Error notification: Error notification codes specific for the communication system LIN. A detailed definition is still open, because currently there is not AUTOSAR specification of Lin Interface.
 *  - 0x5B – 0x78: Error notification: Error notification codes specific for the communication system FlexRay.
Specification of Communication Stack Types
AUTOSAR Release 4.2.2
22 of 28 Document ID 050: AUTOSAR_SWS_CommunicationStackTypes
- AUTOSAR confidential -
For a detailed definition please refer to the AUTOSAR specification of FlexRay Transceiver Driver [FRTRCV].
 * - > 0x78      : Currently values in this range are invalid. In future it might be possible that further return codes are specified for other communication systems.
 */
/* The type was omitted in AR 4.3.0. For compatibility reasons, this type is still kept in the sources. This is an accepted violation of SWS_Comtype_00004 */
typedef uint8 BusTrcvErrorType;

/*
 * SWS_COMTYPE_00027 :
 * Variables of this type shall be used to store the state of TP buffer.
 */
typedef enum _TpDataStateType
{
    /* TP_DATACONF indicates that all data, that have been copied so far, are confirmed and can be removed from the TP buffer. Data copied by this API call are excluded and will be confirmed later. */
    TP_DATACONF = 0x00,
    /* 0x01: TP_DATARETRY indicates that this API call shall copy already copied data in order to recover from an error. In this case TxTpDataCnt specifies the offset of the first byte to be copied by the API call. */
    TP_DATARETRY = 0x01,
    /* 0x02: TP_CONFPENDING indicates that the previously copied data must remain in the TP. */
    TP_CONFPENDING = 0x02
} TpDataStateType;

/*
 * SWS_COMTYPE_00037 :
 * Variables of this type shall be used to store the information about Tp buffer handling.
 */
typedef struct _RetryInfoType
{
    /* The enum type to be used to store the state of Tp buffer. */
    TpDataStateType TpDataState;
    /* Offset from the current position which identifies the number of bytes to be retransmitted. */
    PduLengthType TxTpDataCnt;
} RetryInfoType;

/*
 * Zero-based integer number.
 * SWS_COMTYPE_00038 :
 * Variables of the type NetworkHandleType shall be used to store the identifier of a communication channel.
 */
typedef uint8 NetworkHandleType;

/*
 * SWS_COMTYPE_00039 :
 * IcomConfigIdType defines the configuration ID. An ID of 0 is the default configuration. An ID greater than 0 shall identify a configuration for Pretended Networking. There is more than 1 configuration possible.
 */
typedef uint8 IcomConfigIdType;

/*
 * SWS_COMTYPE_00040 :
 * IcomSwitch_ErrorType defines the errors which can occur when activating or deactivating Pretended Networking.
 */
typedef enum _IcomSwitch_ErrorType
{
    /* The activation of Pretended Networking was successful. */
    ICOM_SWITCH_E_OK = 0x00,
    /* The activation of Pretended Networking was not successful. */
    ICOM_SWITCH_E_FAILED = 0x01
} IcomSwitch_ErrorType;

/* COMTYPE013: Variables of this type shall be used to store the result status of a notification (confirmation or indication). */
/* The type was omitted in AR 4.2.0. For compatibility reasons, this type is still kept in the sources. This is an accepted violation of SWS_Comtype_00004 */
typedef uint8 NotifResultType;

#endif /* _COMSTACK_TYPES_H_ */

/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
