/** !------------------------------------------------------------------------->
*
*  @file PduR.h
*
*  @brief AUTOSAR PDU Router module provides services for routing of Interaction
*         Layer Protocol Data Units
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
*!-------------------------------------------------------------------------->*/
#pragma once

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/

#include "Config.h"
#include "BusConfiguration.h"

#include "Compiler.h"
#include "PduR_Cfg.h"
#include "PduR_Types.h"

#if (PDUR_SOAD_SUPPORT == STD_ON)
#include "SoAd.h"
#endif

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

#if (PDUR_ZERO_COST_OPERATION == STD_ON)
/* PDUR335 */
#define PduR_Init(ConfigPtr)

/* PDUR234 */
#define PduR_GetVersionInfo(versionInfo)
#endif

/** Service ID of PduR_Init() */
#define PDUR_SID_INIT                       ((uint8)0x00)

/** Service ID of PduR_GetVersionInfo() */
#define PDUR_SID_GET_VERSIONINFO            ((uint8)0x17)

/** Service ID of PduR_GetConfigurationId() */
#define PDUR_SID_GET_CONFIGURATIONID        ((uint8)0x18)

/** Service ID of PduR_DisableRouting() */
#define PDUR_SID_DISABLE_ROUTING            ((uint8)0x23)

/** Service ID of PduR_EnableRouting() */
#define PDUR_SID_ENABLE_ROUTING             ((uint8)0x22)


/* For CAN interaction */

/** Service ID of PduR_CanIfRxIndication() */
#define PDUR_SID_CANIF_RX_INDICATION       ((uint8)0x01)

/** Service ID of PduR_CanIfTxConfirmation() */
#define PDUR_SID_CANIF_TX_CONFIRMATION      ((uint8)0x02)

/** Service ID of PduR_CanNmRxIndication() */
#define PDUR_SID_CANNM_RX_INDICATION        ((uint8)0x25)

/** Service ID of PduR_CanNmTriggerTransmit() */
#define PDUR_SID_CANNM_TRIGGER_TRANSMIT ((uint8)0x27)

/** Service ID of PduR_CanNmTxConfirmation() */
#define PDUR_SID_CANNM_TX_CONFIRMATION      ((uint8)0x28)

/** Service ID of PduR_CanTpProvideRxBuffer() */
#define PDUR_SID_CANTP_PROVIDE_RXBUFFER     ((uint8)0x03)

/** Service ID of PduR_CanTpRxIndication() */
#define PDUR_SID_CANTP_RX_INDICATION        ((uint8)0x04)

/** Service ID of PduR_CanTpProvideRxBuffer() */
#define PDUR_SID_CANTP_PROVIDE_TXBUFFER     ((uint8)0x05)

/** Service ID of PduR_CanTpTxConfirmation() */
#define PDUR_SID_CANTP_TX_CONFIRMATION      ((uint8)0x06)


/* For LIN interaction */

/** Service ID of PduR_LinIfRxIndication() */
#define PDUR_SID_LINIF_RX_INDICATION        ((uint8)0x0E)

/** Service ID of PduR_LinIfTxConfirmation() */
#define PDUR_SID_LINIF_TX_CONFIRMATION      ((uint8)0x0F)

/** Service ID of PduR_LinIfTriggerTransmit() */
#define PDUR_SID_LINIF_TRIGGER_TRANSMIT     ((uint8)0x10)

/** Service ID of PduR_LinTpProvideRxBuffer() */
#define PDUR_SID_LINTP_PROVIDE_RXBUFFER     ((uint8)0x11)

/** Service ID of PduR_LinTpRxIndication() */
#define PDUR_SID_LINTP_RX_INDICATION        ((uint8)0x12)

/** Service ID of PduR_LinTpProvideTxBuffer() */
#define PDUR_SID_LINTP_PROVIDE_TXBUFFER     ((uint8)0x13)

/** Service ID of PduR_LinTpTxConfirmation() */
#define PDUR_SID_LINTP_TX_CONFIRMATION      ((uint8)0x14)


/* For COM interaction */

/** Service ID of PduR_ComTransmit() */
#define PDUR_SID_COM_TRANSMIT               ((uint8)0x15)


/* For DCM interaction */

/** Service ID of PduR_DcmTransmit() */
#define PDUR_SID_DCM_TRANSMIT               ((uint8)0x16)

/** Service ID of PduR_DcmCancelReceive() */
#define PDUR_SID_DCM_CANCEL_RECEIVE         ((uint8)0x21)

/** Service ID of PduR_DcmCancelTransmit() */
#define PDUR_SID_DCM_CANCEL_TRANSMIT        ((uint8)0x1C)

/** Service ID of PduR_DcmChangeParameter() */
#define PDUR_SID_DCM_CHANGE_PARAMETER       ((uint8)0x1D)


/* For CDD interaction - Communication Interface */

/** Service ID of PduR_<Cdd>Transmit() */
#define PDUR_SID_CDD_TRANSMIT               ((uint8)0x30)

/* For CDD interaction - Transport Protocol */

/** Service ID of PduR_<CddTp>Transmit() */
#define PDUR_SID_CDDTP_TRANSMIT             ((uint8)0x31)

/** Service ID of PduR_<CddTp>CancelReceive() */
#define PDUR_SID_CDDTP_CANCEL_RECEIVE       ((uint8)0x36)

/** Service ID of PduR_<CddTp>CancelTransmit() */
#define PDUR_SID_CDDTP_CANCEL_TRANSMIT      ((uint8)0x34)

/** Service ID of PduR_<CddTp>ChangeParameter() */
#define PDUR_SID_CDDTP_CHANGE_PARAMETER     ((uint8)0x35)


/* For IPDUM interaction */

/** Service ID of PduR_IpduMTransmit() */
#define PDUR_SID_IPDUM_TRANSMIT             ((uint8)0x19)

/** Service ID of PduR_IpduMTxConfirmation() */
#define PDUR_SID_IPDUM_TX_CONFIRMATION      ((uint8)0x1A)

/** Service ID of PduR_IpduMRxIndication() */
#define PDUR_SID_IPDUM_RX_INDICATION        ((uint8)0x1B)

/** Service ID of PduR_IpduMTriggerTransmit() */
#define PDUR_SID_IPDUM_TRIGGER_TRANSMIT     ((uint8)0x37)


/* For SecOC interaction */

/** Service ID of PduR_SecOCTransmit() */
#define PDUR_SID_SECOC_TRANSMIT             ((uint8)0x38)

/** Service ID of PduR_SecOCTxConfirmation() */
#define PDUR_SID_SECOC_TX_CONFIRMATION      ((uint8)0x39)

/** Service ID of PduR_SecOCRxIndication() */
#define PDUR_SID_SECOC_RX_INDICATION        ((uint8)0x3A)

/** Service ID of PduR_SecOCTriggerTransmit() */
#define PDUR_SID_SECOC_TRIGGER_TRANSMIT     ((uint8)0x3B)


/* For J1939Tp interaction */

/** Service ID of PduR_J1939TpCopyRxData() */
#define PDUR_SID_J1939TP_COPY_RX_DATA       ((uint8)0x44)

/** Service ID of PduR_J1939TpCopyTxData() */
#define PDUR_SID_J1939TP_COPY_TX_DATA       ((uint8)0x43)

/** Service ID of PduR_J1939TpRxIndication() */
#define PDUR_SID_J1939TP_RX_INDICATION      ((uint8)0x45)

/** Service ID of PduR_J1939TpStartOfReception() */
#define PDUR_SID_J1939TP_START_OF_RECEPTION ((uint8)0x46)

/** Service ID of PduR_J1939TpTxConfirmation() */
#define PDUR_SID_J1939TP_TX_CONFIRMATION    ((uint8)0x48)

/** Service ID of PduR_J1939TpTriggerTransmit() */
/** Note: This SID is a Design decision, due to the fact that a PduR_<xx>TpTriggerTransmit() function according to AUTOSAR4.4.0, does not exist, */
/*        but is implemented for automatically retransmission of a J1939-IPdu after receiving an ABORT or an EOM with wrong data */
#define PDUR_SID_J1939TP_TRIGGER_TRANSMIT   ((uint8)0x49)

/**
 * \brief List of Error IDs which will be reported through
 *  Det_ReportError
 */

 /** API service called with invalid Configuration pointer*/
#define PDUR_E_CONFIG_PTR_INVALID           ((uint8)00)

/** API service used without module initialization*/
#define PDUR_E_INVALID_REQUEST              ((uint8)01)

/** API service called with invalid PDU Identifier*/
#define PDUR_E_PDU_ID_INVALID               ((uint8)02)

/** Tp module rejects a transmit request for a valid PDU id*/
#define PDUR_E_TP_TX_REQ_REJECTED           ((uint8)03)

/** Data pointer is NULL*/
#define PDUR_E_DATA_PTR_INVALID             ((uint8)05)

/** Routing table is invalid*/
#define PDUR_E_ROUTING_TABLE_ID_INVALID     ((uint8)08)

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */ 

    /*----------------------------------------------------------------------------*/
    /* EXTERNAL VARIBALE DECLARATION */
    /*----------------------------------------------------------------------------*/
    extern PduR_PBConfigType PduR_Config;

    /*----------------------------------------------------------------------------*/
    /* EXTERNAL FUNCTION DECLARATION */
    /*----------------------------------------------------------------------------*/

#if (PDUR_ZERO_COST_OPERATION == STD_OFF)

/* Static function declaration which is used by configuration */
/* extern Std_ReturnType PduR_MultiIfTransmit(PduR_TransmitIfType* p_PduRXTx,
                                                           PduIdType MPduId,
                                                           const PduInfoType* PduInfoPtr); */

    extern void PduR_Init(const PduR_PBConfigType* ConfigPtr);

    extern void PduR_GetVersionInfo(Std_VersionInfoType* versionInfo);

#endif

    extern void PduR_VariableInitialize(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */ 
