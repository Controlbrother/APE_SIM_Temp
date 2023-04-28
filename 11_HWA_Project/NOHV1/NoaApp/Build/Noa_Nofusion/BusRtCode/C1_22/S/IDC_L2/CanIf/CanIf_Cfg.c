/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Cfg.c
*
*  @creationDate 09 March 2022 12:20:12
*
*  @brief Generated CanIf configuration source file.
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
*<!-------------------------------------------------------------------------->*/

/* -- Include directives. -- */
#include "CanIf_Internal.h"
#include "CanIf.h"
#include "PduR_CanIf.h"
#if CANIF_CANTSYN_SUPPORT == STD_ON
#include "CanTSyn_CanIf.h"
#endif
#if CANIF_J1939TP_SUPPORT == STD_ON
#include "J1939Tp_CanIf.h"
#endif
#if CANIF_CDD_SUPPORT == STD_ON
#include "CDD_CanIf.h"
#endif
#include "CanIf_Cbk.h"
#include "CanIf_Cfg_BusAccess.h"
#include "SchM_CanIf.h"

#ifdef HOST_DEBUG
// if we are compiling this for HOST Debugging we need to be aware
// of virtual bus functions.
#include <DsCanBus.h>
#endif


VAR(uint8, AUTOMATIC) CanIf_DevErrorDetect = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_MultipleDriverSupport = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_PublicPNSupport = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_ReadRxPduDataApi = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_ReadTxPduNotifyStatusApi = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_ReadRxPduNotifyStatusApi = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_SetDynamicTxIdApi = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_DlcCheck = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_WakeupSupport = STD_ON;
VAR(CanIfSoftwareFilterType_Type, AUTOMATIC) CanIf_SoftwareFilterType = BINARY;
VAR(uint8, AUTOMATIC) CanIf_PublicWakeupCheckValidationSupport = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_TransmitCancellation = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_PublicTxConfirmPollingSupport = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_VersionInfoApi = STD_OFF;
VAR(uint8, AUTOMATIC) CanIf_MaxNumberOfHrh = 1;
VAR(uint8, AUTOMATIC) CanIf_NumberOfCanHWUnits = 1;

VAR(CanIfControllerFlags, AUTOMATIC) g_CntrlFlags[1] = {0}; /* For C98 compatibility this array has length 1 */
static VAR(uint8, AUTOMATIC) ga_CanIfReadRxPduNotifyStatus[68] = {0}; /* For C98 compatibility this array has length 1 */
static VAR(uint8, AUTOMATIC) ga_CanIfReadTxPduNotifyStatus[10] = {0}; /* For C98 compatibility this array has length 1 */
STATIC VAR(uint8, AUTOMATIC) ga_CanIfRxPduDataBuffer[1] = {0}; /* For C98 compatibility this array has length 1 */
STATIC VAR(uint32, AUTOMATIC) ga_CanIfDynamicTxPduCanIdArray[1] = {0}; /* For C98 compatibility this array has length 1 */
STATIC VAR(CanIf_RxIndicationMetaDataType, AUTOMATIC) ga_CanIfRxMetaData[1] = {0}; /* For C98 compatibility this array has length 1 */
STATIC VAR(CanIf_RxIndicationMetaDataType, AUTOMATIC) ga_CanIfRxInterruptMetaData[1] = {0}; /* For C98 compatibility this array has length 1 */

static CanIfIndexRange ga_CanIfIndexRanges[][6] = {
    /* EXTENDED_CAN, STANDARD_CAN, EXTENDED_FD_CAN_BRS_OFF, STANDARD_FD_CAN_BRS_OFF, EXTENDED_FD_CAN_BRS_ON, STANDARD_FD_CAN_BRS_ON */
    {{-1, -1}, {0, 4}, {-1, -1}, {-1, -1}, {-1, -1}, {5, 67}},
};
static CanIfIndexMapping ga_CanIfIndexMapping = {1, ga_CanIfIndexRanges};

static CanIfTxPduConfig TxPduConfig[] = {
    /* V71-001-021MM01 C_Matrix for  ADAS-CANFD_V2.2 */
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD1_FrameTrig, /* CanIf Pdu Id */
        323, /* 0x00000143 CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        0, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD5_FrameTrig, /* CanIf Pdu Id */
        415, /* 0x0000019F CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        1, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD6_FrameTrig, /* CanIf Pdu Id */
        546, /* 0x00000222 CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        2, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD2_FrameTrig, /* CanIf Pdu Id */
        573, /* 0x0000023D CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        3, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD4_FrameTrig, /* CanIf Pdu Id */
        576, /* 0x00000240 CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        4, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD2_FrameTrig, /* CanIf Pdu Id */
        683, /* 0x000002AB CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        5, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD3_FrameTrig, /* CanIf Pdu Id */
        692, /* 0x000002B4 CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        6, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD4_FrameTrig, /* CanIf Pdu Id */
        696, /* 0x000002B8 CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        7, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD3_FrameTrig, /* CanIf Pdu Id */
        719, /* 0x000002CF CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        64, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        8, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD5_FrameTrig, /* CanIf Pdu Id */
        846, /* 0x0000034E CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        16, /* DLC */
        CANIF_PDU_TYPE_STATIC,
        0, /* Dynamic PDU index */
        FALSE, /* PduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        FALSE, /* GetTxPduPnFilterPdu */
        CANIF_PDUR, /* TX user */
        PduR_CanIfTxConfirmation, /* User confirmation */
        9, /* CanIfCanTxPduHthRef */
        0, /* PduIdRef */
        1, /* Queue size */
        0x00 /* Unused bit pattern */
    },
};

static CanIfHthConfig HthConfig[] = {
    /* V71-001-021MM01 C_Matrix for  ADAS-CANFD_V2.2 */
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
};

static VAR(CanIfRxPduConfig, AUTOMATIC) RxPduConfig[] =
{
    /* V71-001-021MM01 C_Matrix for  ADAS-CANFD_V2.2 */
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_GW_NM_FrameTrig, /* CanIf Pdu Id */
        1281, /* 0x00000501 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_CAN, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_GW_NM_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HC_NM_FrameTrig, /* CanIf Pdu Id */
        1305, /* 0x00000519 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_CAN, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HC_NM_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_RRR_NM_FrameTrig, /* CanIf Pdu Id */
        1309, /* 0x0000051D CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_CAN, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_RRR_NM_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_SRR_L_NM_FrameTrig, /* CanIf Pdu Id */
        1310, /* 0x0000051E CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_CAN, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_SRR_L_NM_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_SRR_R_NM_FrameTrig, /* CanIf Pdu Id */
        1311, /* 0x0000051F CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_CAN, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_SRR_R_NM_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT6_FrameTrig, /* CanIf Pdu Id */
        74, /* 0x0000004A CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT6_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HCU_FD1_FrameTrig, /* CanIf Pdu Id */
        96, /* 0x00000060 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HCU_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ECM_FD1_FrameTrig, /* CanIf Pdu Id */
        121, /* 0x00000079 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_ECM_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_DCT_FD1_FrameTrig, /* CanIf Pdu Id */
        124, /* 0x0000007C CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_DCT_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_CSA2_FrameTrig, /* CanIf Pdu Id */
        161, /* 0x000000A1 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_CSA2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HCU_HP8_FrameTrig, /* CanIf Pdu Id */
        249, /* 0x000000F9 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HCU_HP8_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ECM_FD2_FrameTrig, /* CanIf Pdu Id */
        259, /* 0x00000103 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_ECM_FD2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ECM1_FrameTrig, /* CanIf Pdu Id */
        273, /* 0x00000111 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_ECM1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_Ibooster_FD2_FrameTrig, /* CanIf Pdu Id */
        288, /* 0x00000120 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_Ibooster_FD2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HCU_FD3_FrameTrig, /* CanIf Pdu Id */
        303, /* 0x0000012F CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HCU_FD3_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ESP_FD2_FrameTrig, /* CanIf Pdu Id */
        311, /* 0x00000137 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_ESP_FD2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ESP_FD3_FrameTrig, /* CanIf Pdu Id */
        315, /* 0x0000013B CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_ESP_FD3_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_EPS_FD1_FrameTrig, /* CanIf Pdu Id */
        327, /* 0x00000147 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_EPS_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HAP_FD1_FrameTrig, /* CanIf Pdu Id */
        347, /* 0x0000015B CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HAP_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_CR_FD1_FrameTrig, /* CanIf Pdu Id */
        350, /* 0x0000015E CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_CR_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_CSA1_FrameTrig, /* CanIf Pdu Id */
        357, /* 0x00000165 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_CSA1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_RSDS_FD1_FrameTrig, /* CanIf Pdu Id */
        367, /* 0x0000016F CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_RSDS_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_AEB_FD1_FrameTrig, /* CanIf Pdu Id */
        395, /* 0x0000018B CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_AEB_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_F_PBox1_FrameTrig, /* CanIf Pdu Id */
        411, /* 0x0000019B CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_F_PBox1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_R_PBox1_FrameTrig, /* CanIf Pdu Id */
        412, /* 0x0000019C CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_R_PBox1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT33_FrameTrig, /* CanIf Pdu Id */
        493, /* 0x000001ED CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT33_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT15_FrameTrig, /* CanIf Pdu Id */
        494, /* 0x000001EE CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT15_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_DCT5_FrameTrig, /* CanIf Pdu Id */
        545, /* 0x00000221 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_DCT5_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_AEB_FD2_FrameTrig, /* CanIf Pdu Id */
        551, /* 0x00000227 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_AEB_FD2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_CSA4_FrameTrig, /* CanIf Pdu Id */
        555, /* 0x0000022B CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_CSA4_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_DCT_FD4_FrameTrig, /* CanIf Pdu Id */
        566, /* 0x00000236 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_DCT_FD4_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ABM2_FrameTrig, /* CanIf Pdu Id */
        581, /* 0x00000245 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_ABM2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_DMS_FD1_FrameTrig, /* CanIf Pdu Id */
        589, /* 0x0000024D CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_DMS_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_BLE1_FrameTrig, /* CanIf Pdu Id */
        604, /* 0x0000025C CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_BLE1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT32_FrameTrig, /* CanIf Pdu Id */
        623, /* 0x0000026F CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT32_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_Trailer1_FrameTrig, /* CanIf Pdu Id */
        627, /* 0x00000273 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_Trailer1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HAP_FD2_FrameTrig, /* CanIf Pdu Id */
        628, /* 0x00000274 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HAP_FD2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IP2_FrameTrig, /* CanIf Pdu Id */
        639, /* 0x0000027F CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_IP2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HAP_FD4_FrameTrig, /* CanIf Pdu Id */
        642, /* 0x00000282 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HAP_FD4_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HC1_FrameTrig, /* CanIf Pdu Id */
        647, /* 0x00000287 CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HC1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT_FD2_FrameTrig, /* CanIf Pdu Id */
        648, /* 0x00000288 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT_FD2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HAP_FD6_FrameTrig, /* CanIf Pdu Id */
        649, /* 0x00000289 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HAP_FD6_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HAP_FD5_FrameTrig, /* CanIf Pdu Id */
        657, /* 0x00000291 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HAP_FD5_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_PEPS2_FrameTrig, /* CanIf Pdu Id */
        661, /* 0x00000295 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_PEPS2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HAP_FD3_FrameTrig, /* CanIf Pdu Id */
        664, /* 0x00000298 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HAP_FD3_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_BCM8_FrameTrig, /* CanIf Pdu Id */
        671, /* 0x0000029F CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_BCM8_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_EEM1_FrameTrig, /* CanIf Pdu Id */
        680, /* 0x000002A8 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_EEM1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT_FD1_FrameTrig, /* CanIf Pdu Id */
        707, /* 0x000002C3 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_DDCM1_FrameTrig, /* CanIf Pdu Id */
        714, /* 0x000002CA CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_DDCM1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_PDCM1_FrameTrig, /* CanIf Pdu Id */
        717, /* 0x000002CD CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_PDCM1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT23_FrameTrig, /* CanIf Pdu Id */
        728, /* 0x000002D8 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT23_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT22_FrameTrig, /* CanIf Pdu Id */
        730, /* 0x000002DA CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT22_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT21_FrameTrig, /* CanIf Pdu Id */
        733, /* 0x000002DD CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT21_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT20_FrameTrig, /* CanIf Pdu Id */
        734, /* 0x000002DE CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT20_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_BCM10_FrameTrig, /* CanIf Pdu Id */
        743, /* 0x000002E7 CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_BCM10_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT_FD3_FrameTrig, /* CanIf Pdu Id */
        745, /* 0x000002E9 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT_FD3_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_DVR_FD1_FrameTrig, /* CanIf Pdu Id */
        748, /* 0x000002EC CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_DVR_FD1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HCU_PT4_FrameTrig, /* CanIf Pdu Id */
        762, /* 0x000002FA CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HCU_PT4_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ECM_FD3_FrameTrig, /* CanIf Pdu Id */
        769, /* 0x00000301 CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_ECM_FD3_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_RSDS_FD2_FrameTrig, /* CanIf Pdu Id */
        778, /* 0x0000030A CAN Id */
        64, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_RSDS_FD2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_BCM1_FrameTrig, /* CanIf Pdu Id */
        793, /* 0x00000319 CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_BCM1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_TPMS1_FrameTrig, /* CanIf Pdu Id */
        833, /* 0x00000341 CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_TPMS1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_BCM3_FrameTrig, /* CanIf Pdu Id */
        837, /* 0x00000345 CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_BCM3_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ABM1_FrameTrig, /* CanIf Pdu Id */
        849, /* 0x00000351 CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_ABM1_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT34_FrameTrig, /* CanIf Pdu Id */
        880, /* 0x00000370 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT34_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_AC2_FrameTrig, /* CanIf Pdu Id */
        901, /* 0x00000385 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_AC2_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_T_Box_FD3_FrameTrig, /* CanIf Pdu Id */
        1001, /* 0x000003E9 CAN Id */
        16, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_T_Box_FD3_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
    {
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_HUT19_FrameTrig, /* CanIf Pdu Id */
        1045, /* 0x00000415 CAN Id */
        8, /* DLC */
        FALSE, /* CanIfReadRxPduData */
        FALSE, /* CanIfReadRxPduNotifyStatus */
        STANDARD_FD_CAN_BRS_ON, /* CAN Id Type */
        CANIF_PDUR, /* RX user */
        PduR_CanIfRxIndication, /* User RX indication */
        0, /* CanIfCanRxPduHrhRef */
        PDUR_RX_HUT19_119615_232434_CanIf_Com, /* PduIdRef */
        0, /* RxPduCanIdRange */
        0, /* CanIfRxPduDataBufferInd */
        NULL_PTR, /* RX Interrupt function pointer */
        0, /*Rx Interrupt State Manager index */
    },
};

UNUSED static VAR(CanIfHrhRangeConfig, AUTOMATIC) HrhRangeConfig0[1] = { 0 };  /* For C98 compatibility this array has length 1 */

static VAR(CanIfHrhConfig, AUTOMATIC) HrhConfig[] = {
    { /* V71-001-021MM01 C_Matrix for  ADAS-CANFD_V2.2 */
        0, /* CanIfHrhId */
        BASIC_CAN,       /* CanIfHrhType */
        FALSE,           /* CanIfSoftwareFilterHrh */
        0,               /* CanIfCanControllerHrhIdRef */
        0,               /* CanIfHrhIdSymRef */
        HrhRangeConfig0, /* HrhRangeConfig */
        0                /* CanIfNumberofHrhRange */
    },
};

static CanIfInitHohConfig InitHohConfig[] =
{
    {
            0,            /* RefConfigSet */
            HrhConfig,
            HthConfig
    }
};

static CanIfInitConfiguration InitConfiguration[] =
{
    {
            68, /* Number of CAN RX PDU IDs */
            10, /* Number of CAN TX PDU IDs */
            0, /* Number of dynamic CAN TX PDU IDs*/
            InitHohConfig,
            RxPduConfig,
            TxPduConfig
    }
};

static CanIfDriverConfig DriverConfig[1] =
{
    {
            FALSE, /* CanIfBusoffNotification */
            FALSE, /* CanIfReceiveIndication */
            FALSE, /* CanIfTransmitCancellation */
            FALSE, /* CanIfTxConfirmation */
            FALSE, /* CanIfWakeupNotification */
            0,     /* CanIfDriverNameRef */
            0      /* InitHohConfigRef */
    }
};

static CanIfDispatchConfig DispatchConfig[1] =
{
    {
            0,          /* CanIfDispatchUserCtrlBusOffName */
            UL_NONE,    /* DispatchUserCtrlBusOffUL */
            0,          /* CanIfDispatchUserValidateWakeupEventName */
            UL_NONE,    /* CanIfDispatchUserValidateWakeupEventUL */
            CanIf_TransmitFunction, /* CanIfDispatchTransmit */
            CanIf_RxIndication      /* CanIfDispatchRxIndication */
    }
};

static CanIfControllerConfig ControllerConfig[CHANNEL_ADDRESS_COUNT] =
{
     {
            FALSE, /* CanIfWakeupSupport */
            0,     /* CanIfControllerIdRef */
            0,     /* CanIfDriverNameRef */
            TRUE, /* CanIfRxObjectNeeded */
            1,     /* CanIf_ControllerEnabledState */
            4,     /* Index in StateManager to handle ComControllerEnable state */
            0,    /* Index in StateManager for used credit counter */
            (DsTCanBoard)0 /* CanBoard */
    },
};

static CanIf_ConfigType ga_CanIfConfig[1] =
{
    {       /* ga_CanIfConfig */
            ControllerConfig,
            DispatchConfig,
            DriverConfig,
            InitConfiguration,
            ga_CanIfRxPduDataBuffer,
            ga_CanIfDynamicTxPduCanIdArray,
            ga_CanIfReadRxPduNotifyStatus,
            ga_CanIfReadTxPduNotifyStatus,
            &ga_CanIfIndexMapping,
            5,
            ga_CanIfRxMetaData,
            ga_CanIfRxInterruptMetaData,
    }
};

UNUSED static uint32 gClusterId[CHANNEL_ADDRESS_COUNT] = { 1 };

void
CanIf_InitDefaultConfig(void)
{
    uint8 i;

    for (i = 0; i < CHANNEL_ADDRESS_COUNT; i++)
    {
      DsTCanBoard CanBoard;
      DsTCanCh    CanChannel;
      
      DsCanBoard_create(&CanBoard, *gp_CanIf_ChannelAddress[i]);
      DsCanCh_create(&CanChannel, CanBoard, *gp_CanIf_ChannelAddress[i]);
      
#if defined(HOST_DEBUG)
      {
        DsTCanBus pBus;
        DsCanBus_create(&pBus, gClusterId[i]);
        DsCanBus_connectChannel(pBus, CanChannel);
      }
#endif

      ga_CanIfConfig->ControllerConfig[i].CanBoard = CanBoard;
      ga_CanIfConfig->ControllerConfig[i].CanIfControllerIdRef = CanChannel;
    }

}

void
CanIf_Init(const void * ConfigStruct)
{
    INTENDED_UNREFERENCED_PARAMETER(ConfigStruct);
}

STATIC int doFirstStepInitialization = 1;

void CanIf_VariableInitialize(void)
{
    uint8 controllerState;
    /* do other modules need CanIf to be initialized earlier? */
    CanIf_InitFunction((const void *) ga_CanIfConfig);
    
    if (doFirstStepInitialization)
    {
        CanIf_InitController(0, 0);
    }
    CanIf_SetControllerMode(0, CANIF_CS_STARTED);
    CanIf_SetPduMode(0, CANIF_SET_RX_ONLINE);
    CanIf_SetPduMode(0, CANIF_SET_TX_ONLINE);/**/
    controllerState = 1;
    /* The Controller state is set to the default state depending on first or on every application start */
    StateManager_SetState_Mutex(4,controllerState);
 
        
    doFirstStepInitialization = 0;
}

void CanIf_UpdateBoards(void)
{
    int i;
    for (i = 0; i < CHANNEL_ADDRESS_COUNT; i++) {
        DsCanBoard_update(ga_CanIfConfig->ControllerConfig[i].CanBoard);
    }
}

void CanIf_OnStart(void)
{
    VAR(uint8, AUTOMATIC)Count;

    CanIf_UpdateBoards();

    for (Count = 0; Count < CanIf_MaxNumberOfHrh; Count++)
    {
        if (HrhConfig[Count].CanIfHrhIdSymRef != NULL_PTR)
        {
            DsCanMsg_start(HrhConfig[Count].CanIfHrhIdSymRef);
        }
    }
}

void CanIf_OnStop(void)
{
    VAR(uint8, AUTOMATIC)Count;

    for (Count = 0; Count < CanIf_MaxNumberOfHrh; Count++)
    {
        if (HrhConfig[Count].CanIfHrhIdSymRef != NULL_PTR)
        {
            DsCanMsg_stop(HrhConfig[Count].CanIfHrhIdSymRef);
        }
    }

    CanIf_UpdateBoards();
}


/* [EOF] */
