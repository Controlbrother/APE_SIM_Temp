/** <!------------------------------------------------------------------------->
*
*  @file CanIf.c
*
*  @brief Contains implementation of all the APIs for CAN Interface module
*
*  @author
*
*  @description
*    Can interface provides a unique interface to manage underlying CAN
*    communication device drivers of the corresponding ECU.The CAN Interface
*    fulfills main control flow and data flow requirements of the PDU Router and
*    upper layer communication modules of the AUTOSAR COM stack
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "CanIf_Internal.h"
#include "CanIf.h"
#include "CanIf_Cbk.h"
#include "SchM_CanIf.h"
#include "EcuM_Cbk.h"
#include "Det.h"
#include "Dem.h"
#if CANIF_CDD_SUPPORT == STD_ON
#include "CDD_CanIf.h"
#endif
#if CANIF_CANTSYN_SUPPORT == STD_ON
#include "CanTSyn_CanIf.h"
#endif
#if CANIF_J1939TP_SUPPORT == STD_ON
#include "J1939Tp_CanIf.h"
#endif
#include "Feature_Types.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

#define CANIF_C_AR_MAJOR_VERSION                 (0x03U)
#define CANIF_C_AR_MINOR_VERSION                 (0x02U)
#define CANIF_C_AR_PATCH_VERSION                 (0x01U)

#define CANIF_C_SW_MAJOR_VERSION                 (0x01)
#define CANIF_C_SW_MINOR_VERSION                 (0x0)
#define CANIF_C_SW_PATCH_VERSION                 (0x0)

/* CANIF021 */
#if( CANIF_C_AR_MAJOR_VERSION != CANIF_H_AR_MAJOR_VERSION)
    #error "CanIf.c : Mismatch in Specification Major Version with canif.h"
#endif
#if( CANIF_C_AR_MINOR_VERSION != CANIF_H_AR_MINOR_VERSION)
    #error "CanIf.c : Mismatch in Specification Minor Version with canif.h"
#endif
#if( CANIF_C_AR_PATCH_VERSION != CANIF_H_AR_PATCH_VERSION)
    #error "CanIf.c : Mismatch in Specification Patch Version with canif.h"
#endif

#if( CANIF_C_SW_MAJOR_VERSION != CANIF_H_SW_MAJOR_VERSION)
    #error "CanIf.c : Mismatch in Software Major Version with canif.h "
#endif
#if( CANIF_C_SW_MINOR_VERSION != CANIF_H_SW_MINOR_VERSION)
    #error "CanIf.c : Mismatch in Software Minor Version with canif.h "
#endif

#define EcuM_SetWakeupEvent(WakeupSource)

#ifdef __cplusplus
extern "C"
{
#endif

/*----------------------------------------------------------------------------*/
/* FORWARD DECLARATIONS OF STATIC FUNCTIONS */
/*----------------------------------------------------------------------------*/
static FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetControllerLock(VAR(uint8, AUTOMATIC)Controller, VAR(uint8, AUTOMATIC)RequestType);
static FUNC(void, CANIF_CODE)CanIf_ReleaseControllerLock(VAR(uint8, AUTOMATIC)Controller, VAR(uint8, AUTOMATIC)RequestType);
static FUNC(Std_ReturnType, CANIF_CODE)CanIf_CheckControllerLock(void);
static FUNC(Std_ReturnType, CANIF_CODE)CanIf_IsControllerNotLocked(uint8 Controller);
static FUNC(void, CANIF_CODE)CanIf_ReportRxIndication
(
    VAR(PduIdType, AUTOMATIC)RxPduId,
    VAR(uint8, AUTOMATIC)CanDlc,
    P2CONST(uint8, AUTOMATIC, AUTOMATIC)CanSduPtr,
    P2VAR(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr
);
static FUNC(void, CANIF_CODE)CanIf_CreateTxObjects(uint8 Controller);
static FUNC(void, CANIF_CODE)CanIf_CreateRxObjects(uint8 Controller);
static FUNC(void, CANIF_CODE)CanIf_CreateRxIntObjects(uint8 Controller);


static FUNC(void, CANIF_CODE)CanIf_ProcessRxData
(
    VAR(PduIdType, AUTOMATIC)CanRxPduId,
    VAR(uint8, AUTOMATIC)CanDlc,
    P2CONST(uint8, AUTOMATIC, CANIF_APPL_CONST)CanSduPtr,
    VAR(uint8, AUTOMATIC)Controller,
    P2VAR(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr
);

static FUNC(Std_ReturnType, CANIF_CODE)CanIf_PerformDLCCheck
(
    VAR(PduIdType, AUTOMATIC)CanRxPduId,
    VAR(uint8, AUTOMATIC)CanDlc,
    P2VAR(uint8, AUTOMATIC, AUTOMATIC)CanRxPduDLC
);

static FUNC(void, CANIF_CODE)CanIf_BufferRxMessage
(
    VAR(PduIdType, AUTOMATIC)CanRxPduId,
    VAR(uint8, AUTOMATIC)CanDlc,
    P2CONST(uint8, AUTOMATIC, CANIF_APPL_CONST)CanSduPtr
);

static FUNC(Std_ReturnType, CANIF_CODE) CanIf_BinarySearchRxPduId
(
    VAR(uint32, AUTOMATIC) CanId,
    P2VAR(PduIdType, AUTOMATIC, AUTOMATIC) CanRxPduId,
    VAR(uint8, AUTOMATIC)HrhID,
    VAR(CanIfCanIdType, AUTOMATIC) IdType
);

static FUNC(uint8, CANIF_CODE)CanIf_GetDlc
(
	VAR(PduIdType, AUTOMATIC)CanTxPduId,
	P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr
);

static FUNC(void, CANIF_CODE) CanIf_SetupMessage
(
    VAR(uint32, AUTOMATIC)CanId,
    VAR(CanIfCanIdType, AUTOMATIC)CanIdType,
    VAR(uint8, AUTOMATIC)FrameDlc,
    VAR(uint8, AUTOMATIC)UnusedBitPattern,
    P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr,
    DsSCanMsg_Item* pItemHandle
);

static FUNC(DsECanMsg_Format, CANIF_CODE) CanIf_ConvertMessageIdType(CanIfCanIdType CanIdType);
static FUNC(void, CANIF_CODE) CanIf_ConvertMessageIdTypeToCanIfIdType(const DsSCanMsg_Item* MsgItem, CanIfCanIdType* CanRxPduId);
static FUNC(void, CANIF_CODE) CanIf_DecrementCreditCounter(sint32 creditCounterStateIndex);

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/

/* This variable indicates whether CanIf module is initialized or not  */
static VAR(uint8, AUTOMATIC)g_CanIfInitStatus = CANIF_UNINITIALIZED;

static P2VAR(CanIf_ConfigType, AUTOMATIC, AUTOMATIC)gp_CanIfConfig;

static P2VAR(CanIfControllerConfig, AUTOMATIC, AUTOMATIC)gp_CanIfControllerConfig;

static P2VAR(CanIfInitConfiguration, AUTOMATIC, AUTOMATIC)gp_CanIfInitConfig;

/* Pointer to array of TxLpdu configuration*/
static P2VAR(CanIfTxPduConfig, AUTOMATIC, AUTOMATIC)gp_CanIfTxLPduConfig;

/* Pointer to array of RxLpdu configuration*/
static P2VAR(CanIfRxPduConfig, AUTOMATIC, AUTOMATIC)gp_CanIfRxLPduConfig;

static P2VAR(CanIfHthConfig, AUTOMATIC, AUTOMATIC)gp_CanIfHthConfig;

static P2VAR(CanIfHrhConfig, AUTOMATIC, AUTOMATIC)gp_CanIfHrhConfig;

static P2VAR(uint8, AUTOMATIC, AUTOMATIC)CanIfRxPduDataBuffer;


/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/

/** <!------------------------------------------------------------------------->
*   Initializes the internal resources for the further processing
*
*   @description Initializes the global variables of the module and the CAN
*   identifiers of the dynamic LPDU.
*
*
*   @parameters
*       @param ConfigPtr: Pointer to configuration parameter set
*
*   @return None
*
*   @note The CAN channel still remains not operational.
*         The pointer passed for *ConfigPtr to this function should be valid.
*         CanIf does not have a static configuration and hence not initialized if
*         an invalid pointer passed for *ConfigPtr.
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_InitFunction(P2CONST(void, AUTOMATIC, AUTOMATIC)ConfigPtr)
{
    /* variable indicates whether Controller STOPPED mode transition
    succeeded or not */
    STATIC VAR(uint8, AUTOMATIC)g_CanIfStopModeStatus = STD_ON;

    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    VAR(uint32, AUTOMATIC)Count = 0;
    VAR(uint8, AUTOMATIC)ControllerId = 0;

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (ConfigPtr == NULL_PTR)
        {
            /* Report DET error for a null pointer input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_INIT,
                            CANIF_E_PARAM_POINTER);
            /* Return from function to avoid null pointer access */
            return;
        }
    }

    /* Initialization from STOPPED mode */
    if (   (g_CanIfInitStatus != CANIF_UNINITIALIZED)
        || (g_CanIfStopModeStatus == STD_OFF))
    {
        /* Check whether all the controllers can be locked before initialization */
        CanIfRet = CanIf_CheckControllerLock();
        /* Set all CAN controllers to stopped mode */
        while (   (Count < CanIf_NumberOfCanHWUnits)
               && (CanIfRet == E_OK))
        {
            /* Set to STOPPED mode */
            CanIfRet = CanIf_SetControllerMode((uint8)Count, CANIF_CS_STOPPED);

            /* Update Controller Index */
            Count++;

        }
        if (E_OK != CanIfRet)
        {
            /* Set the status that stopped mode transition failed */
            g_CanIfStopModeStatus = STD_OFF;

            /* Set CanIf to "uninitialized" state */
            g_CanIfInitStatus = CANIF_UNINITIALIZED;
        }
    }

    if (CanIfRet == E_OK)
    {
        /* Storing the configuration data into the local pointers */

        gp_CanIfConfig = (CanIf_ConfigType*)ConfigPtr;

        gp_CanIfInitConfig = ((CanIf_ConfigType*)ConfigPtr)->InitConfig;

        gp_CanIfTxLPduConfig = ((CanIf_ConfigType*)ConfigPtr)->InitConfig->TxPduConfig;

        gp_CanIfRxLPduConfig = ((CanIf_ConfigType*)ConfigPtr)->InitConfig->RxPduConfig;

        gp_CanIfHthConfig = ((CanIf_ConfigType*)ConfigPtr)->InitConfig->HohConfig->HthConfig;

        gp_CanIfHrhConfig = ((CanIf_ConfigType*)ConfigPtr)->InitConfig->HohConfig->HrhConfig;

        /* Initialize the controller status variables */
        for (Count = 0; Count < (uint8)CanIf_NumberOfCanHWUnits; Count++)
        {
            g_CntrlFlags[Count].ControllerMode = CANIF_CS_STOPPED;

            g_CntrlFlags[Count].PduGetMode = CANIF_GET_OFFLINE;

            /* Clear controller flags */
            g_CntrlFlags[Count].ControllerFlags = 0;

            if (CanIf_PublicTxConfirmPollingSupport == STD_ON)
            {
                g_CntrlFlags[Count].TxConfirmationStatus = CANIF_NO_NOTIFICATION;
            }
        }
        if (CanIf_ReadRxPduDataApi == STD_ON)
        {
            CanIfRxPduDataBuffer = gp_CanIfConfig->gp_RxPduDataBuffer;
        }
        /* Initialize the notification flags for receive and transmit */

        if (CanIf_ReadRxPduNotifyStatusApi == STD_ON)
        {
            for (Count = 0; Count < (gp_CanIfInitConfig->CanIfNumberOfCanRxPduIds); Count++)
            {
                /* Clear the RxPdu notification flags */
                gp_CanIfConfig->gp_ReadRxPduNotifyStatus[Count] = 0;
            }
        }

        for (Count = 0; Count < (gp_CanIfInitConfig->CanIfNumberOfCanTxPduIds); Count++)
        {
            if (CanIf_ReadTxPduNotifyStatusApi == STD_ON)
            {
                /* Clear the TxPdu notification and PN filter enable flags */
                gp_CanIfConfig->gp_ReadTxPduNotifyStatus[Count] = 0;
            }
            /* CANIF748 Enable PN filter for a controller only if any Tx PDU
             configured as PNFilterPdu.
             Design Alternative:This can be done in generated code by adding a
             new parameter in the controller container */
            if (CanIf_PublicPNSupport == STD_ON)
            {
                if (gp_CanIfTxLPduConfig[Count].CanIfTxPduPnFilterPdu != FALSE)
                {
                    ControllerId = gp_CanIfHthConfig[gp_CanIfTxLPduConfig[Count].CanIfCanTxPduHthRef].CanIfCanControllerIdRef;
                    g_CntrlFlags[ControllerId].ControllerFlags |= (uint8)CANIF_PN_FILTER_AVAILABLE;
                }
            }

            if (CanIf_SetDynamicTxIdApi == STD_ON)
            {
                if (gp_CanIfTxLPduConfig[Count].CanIfCanTxPduType == CANIF_PDU_TYPE_DYNAMIC)
                {
                    gp_CanIfConfig->gp_DynamicTxPduCanId[gp_CanIfTxLPduConfig[Count].CanIfCanDynamicTxPduIndex] = \
                        gp_CanIfTxLPduConfig[Count].CanIfCanTxPduIdCanId;
                }
            }
        }

        g_CanIfStopModeStatus = STD_ON;

        g_CanIfInitStatus = CANIF_INITIALIZED;
    }
    /* Controller(s)not in stopped mode,initialization not possible */
}

/** <!------------------------------------------------------------------------->
*   Initialize the underlying controllers.
*
*   @description
*     Configures the call-back functions of the DsCan and create message objects
*
*   @parameters
*       @param Controller Controller Id
*       @param ConfigurationIndex Index to the configuration set
*
*   @return None
*
*   @note Values other than 0 for parameter ConfigurationIndex is blocked to avoid
*   invalid memory access
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_InitController(VAR(uint8, AUTOMATIC)Controller, VAR(uint8, AUTOMATIC)ConfigurationIndex)
{
    DsTCanCh ChannelHandle;

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_INITCONTROLLER,
                            CANIF_E_UNINIT);
            return;
        }
        if (Controller >= CanIf_NumberOfCanHWUnits)
        {
            /* Report DET Error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_INITCONTROLLER,
                            CANIF_E_PARAM_CONTROLLER);
            return;
        }
        /* PB selectable is not considered so multiple configuration set not expected
         * To avoid invalid memory access only 0 is allowed to parameter ConfigurationIndex
         * All other values for this parameter will report as error.This is to avoid an extra
         * parameter generated for Maximum number of Configuration index.
         */
        if (ConfigurationIndex != 0)
        {
            /* Report DET Error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_INITCONTROLLER,
                            CANIF_E_PARAM_POINTER);
            return;
        }
    }
    gp_CanIfControllerConfig = &((gp_CanIfConfig)->ControllerConfig[ConfigurationIndex]);

    /* Initialize transmit and receive LPDUs */
    CanIf_CreateTxObjects(Controller);
    if (gp_CanIfControllerConfig[Controller].CanIfRxObjectNeeded)
    {
        CanIf_CreateRxObjects(Controller);
        CanIf_CreateRxIntObjects(Controller);
    }

    ChannelHandle = gp_CanIfControllerConfig[Controller].CanIfControllerIdRef;
    /* Implementation specific,only one driver is there,so no need this parameter in
     * controller configuration,reusing it to identify the controller in call-back
     * functions. */
    gp_CanIfControllerConfig[Controller].CanIfDriverNameRef = Controller;

    /* Connect the wake up event for the channel */
    if (gp_CanIfControllerConfig[Controller].CanIfWakeupSupport != FALSE)
    {
        DsCanCh_connectEvent(ChannelHandle, DSCAN_CH_EV_WAKEUP, CanIf_CheckTrcvWakeFlagIndication, &gp_CanIfControllerConfig[Controller]);
    }
}


/** <!------------------------------------------------------------------------->
*   Initiate the transition to the requested mode
*
*   @description
*     Call the DsCan driver function to set the appropriate mode
*
*   @parameters
*       @param Controller Controller Id
*       @param ControllerMode Requested controller mode
*
*   @return E_OK: Mode request has been accepted
 *          E_NOT_OK: Mode request has not been accepted
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_SetControllerMode(VAR(uint8, AUTOMATIC)Controller, VAR(CanIf_ControllerModeType, AUTOMATIC)ControllerMode)
{
    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    DsTError DsCanRet;
    DsTCanCh ChannelHandle;
    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_SET_CNTRLR_MODE,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
        if (Controller >= CanIf_NumberOfCanHWUnits)
        {
            /* Report DET error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_SET_CNTRLR_MODE,
                            CANIF_E_PARAM_CONTROLLER);
            return E_NOT_OK;
        }
    }
    if (ControllerMode != g_CntrlFlags[Controller].ControllerMode)
    {
        /* Get the controller lock */
        CanIfRet = CanIf_GetControllerLock(Controller, CANIF_CONTROLLER_LOCK);

        if (CanIfRet == E_OK)
        {
            ChannelHandle = gp_CanIfControllerConfig[Controller].CanIfControllerIdRef;

            switch (ControllerMode)
            {
            case CANIF_CS_STOPPED:
            {
                DsCanRet = DsCanCh_stop(ChannelHandle);
                if (DsCanRet == DSCAN_NO_ERROR)
                {
                    g_CntrlFlags[Controller].ControllerMode = CANIF_CS_STOPPED;
                }
            }
            break;
            case CANIF_CS_STARTED:
            {
                (void)DsCanCh_setBusMode(ChannelHandle, DSCAN_CH_MODE_BUSON);
                DsCanRet = DsCanCh_apply(ChannelHandle);
                if (DsCanRet == DSCAN_NO_ERROR)
                {
                    DsCanRet = DsCanCh_start(ChannelHandle);
                    if (DsCanRet == DSCAN_NO_ERROR)
                    {
                        g_CntrlFlags[Controller].ControllerMode = CANIF_CS_STARTED;
                    }
                }
            }
            break;
            case CANIF_CS_SLEEP:
            {
                (void)DsCanCh_setBusMode(ChannelHandle, DSCAN_CH_MODE_SLEEP);
                DsCanRet = DsCanCh_apply(ChannelHandle);
                if (DsCanRet == DSCAN_NO_ERROR)
                {
                    DsCanRet = DsCanCh_start(ChannelHandle);
                    if (DsCanRet == DSCAN_NO_ERROR)
                    {
                        g_CntrlFlags[Controller].ControllerMode = CANIF_CS_SLEEP;
                        /* CANIF756 */
                        if (CanIf_PublicWakeupCheckValidationSupport == STD_ON)
                        {
                            g_CntrlFlags[Controller].RxIndicationStatus = (uint8)CANIF_NO_NOTIFICATION;
                        }
                    }
                }
            }
            break;
            default:
                /* CANIF_CS_UNINIT shall not be executed */
                break;

            }

        }
        CanIf_ReleaseControllerLock(Controller, CANIF_CONTROLLER_LOCK);
    }
    return CanIfRet;
}

/** <!------------------------------------------------------------------------->
*   Returns the current mode of CAN controller
*
*   @description
*     The mode which is stored in CanIf is returned.
*
*   @parameters
*       @param Controller Controller Id
*       @param ControllerModePtr Pointer for returning the current mode
*
*   @return E_OK: Request has been accepted and value returned correctly
 *          E_NOT_OK: Request has not been accepted and returned value not correct
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetControllerMode(VAR(uint8, AUTOMATIC)Controller, P2VAR(CanIf_ControllerModeType, AUTOMATIC, AUTOMATIC)ControllerModePtr)
{
    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_CNTRLR_MODE,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
        if (Controller >= CanIf_NumberOfCanHWUnits)
        {
            /* Report DET error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_CNTRLR_MODE,
                            CANIF_E_PARAM_CONTROLLER);
            return E_NOT_OK;
        }
        if (ControllerModePtr == NULL_PTR)
        {
            /* Report DET Error for a null pointer input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_CNTRLR_MODE,
                            CANIF_E_PARAM_POINTER);
            return E_NOT_OK;
        }
    }

    /* Get MUTEX */
    SchM_Enter_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
    *ControllerModePtr = (CanIf_ControllerModeType)(g_CntrlFlags[Controller].ControllerMode);
    /* Release MUTEX */
    SchM_Exit_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);

    return E_OK;
}

/** <!------------------------------------------------------------------------->
*   Initiate transmission
*
*   @description
*     initiates a request for the transmission of the CAN L-PDU specified by
*     CanTxPduId and CAN related data in the L-PDU structure
*
*   @parameters
*       @param CanTxPduId L-PDU handle of the CAN L-PDU to be transmitted
*       @param PduInfoPtr Pointer to the structure of CAN L-PDU related data
*
*   @return E_OK: Transmit request has been accepted
*           E_NOT_OK: Transmit request has not been accepted
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_Transmit(VAR(PduIdType, AUTOMATIC)CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr)
{
    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_TRANSMIT,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
    }

    if (gp_CanIfConfig->DispatchConfig->CanIfDispatchTransmit != NULL_PTR)
    {
        return(gp_CanIfConfig->DispatchConfig->CanIfDispatchTransmit(CanTxPduId, PduInfoPtr));
    }

    return E_NOT_OK;
}

/** <!------------------------------------------------------------------------->
*   Internal function which is called from CanIf_Transmit()
*
*   @description
*     Internal function which is called from CanIf_Transmit() which initiates a
*     request for the transmission of the CAN L-PDU
*
*   @parameters
*       @param CanTxPduId L-PDU handle of the CAN L-PDU to be transmitted
*       @param PduInfoPtr Pointer to the structure of CAN L-PDU related data
*
*   @return E_OK: Transmit request has been accepted
*           E_NOT_OK: Transmit request has not been accepted
*
*   @note This function is not an API but exported to header file to use in cfg.c
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_TransmitFunction(VAR(PduIdType, AUTOMATIC)CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr)
{
    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    DsTError DsCanRet = DSCAN_NO_ERROR;
    VAR(uint32, AUTOMATIC)HthId;
    DsTCanMsg MessageHandle;
    DsSCanMsg_Item ItemHandle = { 0 };
    VAR(uint8, AUTOMATIC)ControllerId;
    VAR(uint32, AUTOMATIC)QueueCount = 0;

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (CanTxPduId >= gp_CanIfInitConfig->CanIfNumberOfCanTxPduIds)
        {
            /* Report DET error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_TRANSMIT,
                            CANIF_E_INVALID_TXPDUID);
            return E_NOT_OK;
        }
        if ((PduInfoPtr == NULL_PTR) || (PduInfoPtr->SduDataPtr == NULL_PTR))
        {
            /* Report DET error for a null pointer input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_TRANSMIT,
                            CANIF_E_PARAM_POINTER);
            return E_NOT_OK;
        }
    }
    /* The logical Hth for this CanTxPduId */
    HthId = gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduHthRef;
    ControllerId = gp_CanIfHthConfig[HthId].CanIfCanControllerIdRef;

    /* Check Communication Controller enabled state */
    if (!StateManager_GetState(gp_CanIfControllerConfig[ControllerId].CanIf_StateManagerIndex))
    {
        if (gp_CanIfHthConfig[HthId].CanIfHthIdSymRef != NULL_PTR)
        {
            /* Call TxConfirmation to skip triggered PDUs during disabled state*/
            CanIf_TxConfirmation(&gp_CanIfTxLPduConfig[CanTxPduId], &ItemHandle);
        }

        /* Return E_OK because it is expected that no message is transmitted */
        return E_OK;
    }

    /* CANIF750 If PN filter of a controller is enabled, only PnFilterPdus are transmitted */
    if (CanIf_PublicPNSupport == STD_ON)
    {
        if ((g_CntrlFlags[ControllerId].ControllerFlags & CANIF_PN_FILTER_ENABLE) != 0)
        {
            if (gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduPnFilterPdu == FALSE)
            {
                CanIfRet = E_NOT_OK;
            }
        }
    }

    if (CanIfRet == E_OK)
    {
        if (E_OK == CanIf_GetControllerLock(ControllerId, CANIF_TRANSMIT_LOCK))
        {
            if (   (g_CntrlFlags[ControllerId].ControllerMode == CANIF_CS_STARTED)
                && (   (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_ONLINE)
                    || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_TX_ONLINE)))
            {
                if (gp_CanIfHthConfig[HthId].CanIfHthIdSymRef != NULL_PTR)
                {
                    MessageHandle = (DsTCanMsg)gp_CanIfHthConfig[HthId].CanIfHthIdSymRef;
                    DsCanRet = DsCanMsg_getTxQueueCount(MessageHandle, (UInt32*)&QueueCount);
                    if (DsCanRet != DSCAN_NO_ERROR)
                    {
                        CanIfRet = E_NOT_OK;
                    }
                    else if (QueueCount == gp_CanIfTxLPduConfig[CanTxPduId].QueueSize)
                    {
                        if (CanIf_DevErrorDetect == STD_ON)
                        {
                            /* Report DET error as the Tx buffer is full */
                            Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_TRANSMIT,
                                CANIF_E_FULL_TX_BUFFER);
                        }
                        CanIfRet = E_NOT_OK;
                    }
                    else
                    {
                        /* Check if Can pdu type is DYNAMIC */
                        if ((CanIf_SetDynamicTxIdApi == STD_ON)
                            && (gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduType == CANIF_PDU_TYPE_DYNAMIC))
                        {
                            /* Setup message */
                            CanIf_SetupMessage(gp_CanIfConfig->gp_DynamicTxPduCanId[gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanDynamicTxPduIndex],
                                gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduIdCanIdType,
								CanIf_GetDlc(CanTxPduId, PduInfoPtr),
                                gp_CanIfTxLPduConfig[CanTxPduId].UnusedBitPattern,
                                PduInfoPtr,
                                &ItemHandle);

                            /* Transmit message */
                            DsCanRet = DsCanMsg_transmitItem(MessageHandle, &ItemHandle);
                            if (DsCanRet != DSCAN_NO_ERROR)
                            {
                                CanIfRet = E_NOT_OK;
                            }

							/* Decrement credit counter, independent of transmission result. This will reduce load for subsequent calls  */
							CanIf_DecrementCreditCounter(gp_CanIfControllerConfig[ControllerId].CanIf_CreditCounterStateManagerIndex);
						}
                        /* Check if Can pdu type is STATIC */
                        else if (gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduType == CANIF_PDU_TYPE_STATIC)
                        {
                            /* Setup message */
                            CanIf_SetupMessage(gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduIdCanId,
                                gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduIdCanIdType,
								CanIf_GetDlc(CanTxPduId, PduInfoPtr), 
                                gp_CanIfTxLPduConfig[CanTxPduId].UnusedBitPattern,
                                PduInfoPtr,
                                &ItemHandle);

#if (CANIF_J1939TP_SUPPORT == STD_ON)
                            if (gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxUserType == CANIF_J1939TP)
                            {
                                if (PduInfoPtr->MetaDataPtr != NULL_PTR)
                                {
                                    ItemHandle.Id = (UInt32)((Feature_MetaData_Type*)PduInfoPtr->MetaDataPtr)->j1939TpMetaDataPtr->CanId;
                                }
                            }
#endif
                            /* Transmit message */
                            ItemHandle.pTx = MessageHandle;/*Temporary solution until update CR 555345 which will be included in the “RTLib Service Pack 4.4.1p2.”*/
                            DsCanRet = DsCanMsg_transmitItem(MessageHandle, &ItemHandle);
                            if (DsCanRet != DSCAN_NO_ERROR)
                            {
                                CanIfRet = E_NOT_OK;
                            }

							/* Decrement credit counter, independent of transmission result. This will reduce load for subsequent calls  */
							CanIf_DecrementCreditCounter(gp_CanIfControllerConfig[ControllerId].CanIf_CreditCounterStateManagerIndex);
						}
                        /* Check if Can pdu type is DYNAMIC CDD */
                        else if (gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduType == CANIF_PDU_TYPE_DYNAMIC_CDD)
                        {
                            /* no message is transmitted */
                            CanIfRet = E_OK;
                        }
                        else
                        {
                            /* unsupported pdu type */
                            CanIfRet = E_NOT_OK;
                        }
                    }
                }
                else
                {
                    /* Message handle not created, initialize the controller */
                    CanIfRet = E_NOT_OK;
                }
            }
            /* Check for transmit simulation */
            else if (   (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_OFFLINE_ACTIVE)
                     || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_OFFLINE_ACTIVE_RX_ONLINE))
            {
                gp_CanIfTxLPduConfig[CanTxPduId].CanIfUserTxConfirmation(gp_CanIfTxLPduConfig[CanTxPduId].PduIdRef);
            }
            else if (CanIf_DevErrorDetect == STD_ON)
            {
                /* Report DET error as the controller is in STOPPED mode */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_TRANSMIT,
                                CANIF_E_STOPPED);
                CanIfRet = E_NOT_OK;
            }
            else
            {
                CanIfRet = E_NOT_OK;
            }

            CanIf_ReleaseControllerLock(ControllerId, CANIF_TRANSMIT_LOCK);
        }
    }
    return CanIfRet;
}

#if (CDD_CANIF_SUPPORT == STD_ON)
/** <!------------------------------------------------------------------------->
*   Internal function which is called from CDD_Transmit()
*
*   @description
*     Internal function which is called from CDD_Transmit() which initiates a
*     request for the transmission of the CAN L-PDU
*
*   @parameters
*       @param CanTxPduId L-PDU handle of the CAN L-PDU to be transmitted
*       @param PduInfoPtr Pointer to the structure of CAN L-PDU related data
*       @param CanId      CAN identifier
*       @param CanIfCanIdType CAN id type
*
*   @return E_OK: Transmit request has been accepted
*           E_NOT_OK: Transmit request has not been accepted
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_TransmitFrameFunction(VAR(PduIdType, AUTOMATIC)CanTxPduId, P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr, VAR(uint32, AUTOMATIC)CanId, VAR(CanIfCanIdType, AUTOMATIC)CanIdType)
{
    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    DsTError DsCanRet = DSCAN_NO_ERROR;
    VAR(uint32, AUTOMATIC)HthId;
    DsTCanMsg MessageHandle;
    DsSCanMsg_Item ItemHandle = { 0 };
    VAR(uint8, AUTOMATIC)ControllerId;
    VAR(uint32, AUTOMATIC)QueueCount = 0;

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (CanTxPduId >= gp_CanIfInitConfig->CanIfNumberOfCanTxPduIds)
        {
            /* Report DET error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                CANIF_INSTANCE_ID,
                CANIF_SID_TRANSMIT,
                CANIF_E_INVALID_TXPDUID);
            return E_NOT_OK;
        }
        if ((PduInfoPtr == NULL_PTR) || (PduInfoPtr->SduDataPtr == NULL_PTR))
        {
            /* Report DET error for a null pointer input */
            Det_ReportError(CANIF_MODULE_ID,
                CANIF_INSTANCE_ID,
                CANIF_SID_TRANSMIT,
                CANIF_E_PARAM_POINTER);
            return E_NOT_OK;
        }
    }
    /* The logical Hth for this CanTxPduId */
    HthId = gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduHthRef;
    ControllerId = gp_CanIfHthConfig[HthId].CanIfCanControllerIdRef;

    /* Check Communication Controller enabled state */
    if (!StateManager_GetState(gp_CanIfControllerConfig[ControllerId].CanIf_StateManagerIndex))
    {
        if (gp_CanIfHthConfig[HthId].CanIfHthIdSymRef != NULL_PTR)
        {
            /* Call TxConfirmation to skip triggered PDUs during disabled state*/
            CanIf_TxConfirmation(&gp_CanIfTxLPduConfig[CanTxPduId], &ItemHandle);
        }

        /* Return E_OK because it is expected that no message is transmitted */
        return E_OK;
    }

    /* CANIF750 If PN filter of a controller is enabled, only PnFilterPdus are transmitted */
    if (CanIf_PublicPNSupport == STD_ON)
    {
        if ((g_CntrlFlags[ControllerId].ControllerFlags & CANIF_PN_FILTER_ENABLE) != 0)
        {
            if (gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduPnFilterPdu == FALSE)
            {
                CanIfRet = E_NOT_OK;
            }
        }
    }

    if (CanIfRet == E_OK)
    {
        if (E_OK == CanIf_GetControllerLock(ControllerId, CANIF_TRANSMIT_LOCK))
        {
            if ((g_CntrlFlags[ControllerId].ControllerMode == CANIF_CS_STARTED)
                && ((g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_ONLINE)
                    || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_TX_ONLINE)))
            {
                if (gp_CanIfHthConfig[HthId].CanIfHthIdSymRef != NULL_PTR)
                {
                    MessageHandle = (DsTCanMsg)gp_CanIfHthConfig[HthId].CanIfHthIdSymRef;
                    DsCanRet = DsCanMsg_getTxQueueCount(MessageHandle, (UInt32*)&QueueCount);
                    if (DsCanRet != DSCAN_NO_ERROR)
                    {
                        CanIfRet = E_NOT_OK;
                    }
                    else if (QueueCount == gp_CanIfTxLPduConfig[CanTxPduId].QueueSize)
                    {
                        if (CanIf_DevErrorDetect == STD_ON)
                        {
                            /* Report DET error as the Tx buffer is full */
                            Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_TRANSMIT,
                                CANIF_E_FULL_TX_BUFFER);
                        }
                        CanIfRet = E_NOT_OK;
                    }
                    else
                    {
                        /* Check if Can pdu type is DYNAMIC CDD */
                        if (gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduType == CANIF_PDU_TYPE_DYNAMIC_CDD)
                        {
                            /* Setup message */
                            CanIf_SetupMessage(CanId, CanIdType, 0, 0, PduInfoPtr, &ItemHandle);

                            /* Transmit message */
                            ItemHandle.pTx = MessageHandle;/*Temporary solution until update CR 555345 which will be included in the “RTLib Service Pack 4.4.1p2.”*/
                            DsCanRet = DsCanMsg_transmitItem(MessageHandle, &ItemHandle);
                            if (DsCanRet != DSCAN_NO_ERROR)
                            {
                                CanIfRet = E_NOT_OK;
                            }

							/* Decrement credit counter */
							CanIf_DecrementCreditCounter(gp_CanIfControllerConfig[ControllerId].CanIf_CreditCounterStateManagerIndex);
                        }
                        else
                        {
                            /* unsupported pdu type */
                            CanIfRet = E_NOT_OK;
                        }
                    }
                }
                else
                {
                    /* Message handle not created, initialize the controller */
                    CanIfRet = E_NOT_OK;
                }
            }
            /* Check for transmit simulation */
            else if ((g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_OFFLINE_ACTIVE)
                || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_OFFLINE_ACTIVE_RX_ONLINE))
            {
                gp_CanIfTxLPduConfig[CanTxPduId].CanIfUserTxConfirmation(gp_CanIfTxLPduConfig[CanTxPduId].PduIdRef);
            }
            else if (CanIf_DevErrorDetect == STD_ON)
            {
                /* Report DET error as the controller is in STOPPED mode */
                Det_ReportError(CANIF_MODULE_ID,
                    CANIF_INSTANCE_ID,
                    CANIF_SID_TRANSMIT,
                    CANIF_E_STOPPED);
                CanIfRet = E_NOT_OK;
            }
            else
            {
                CanIfRet = E_NOT_OK;
            }

            CanIf_ReleaseControllerLock(ControllerId, CANIF_TRANSMIT_LOCK);
        }
    }
    return CanIfRet;
}
#endif

/** <!------------------------------------------------------------------------->
*   To read out data without dependence of reception event
*
*   @description
*    This service provides the CAN DLC and the received data of the requested
*    CanRxPduId to the calling upper layer.
*
*   @parameters
*       @param CanRxPduId Receive L-PDU handle of CAN L-PDU.
*       @param PduInfoPtr Pointer to a structure with CAN L-PDU related data
*
*   @return E_OK: Request for L-PDU data has been accepted
*           E_NOT_OK: No valid data has been received.
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_ReadRxPduData(VAR(PduIdType, AUTOMATIC)CanRxPduId, P2VAR(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr)
{
    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    VAR(uint8, AUTOMATIC)ControllerId;
    VAR(uint32, AUTOMATIC) BufferIndex;
    VAR(uint8, AUTOMATIC) LoopInd;

    if (CanIf_ReadRxPduDataApi == STD_ON)
    {
        if (CanIf_DevErrorDetect == STD_ON)
        {
            if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
            {
                /* Report DET error for module not initialized */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_READ_RXPDU_DATA,
                                CANIF_E_UNINIT);
                return E_NOT_OK;
            }
            if (   (CanRxPduId >= gp_CanIfInitConfig->CanIfNumberOfCanRxPduIds)
                || (gp_CanIfRxLPduConfig[CanRxPduId].CanIfReadRxPduData == FALSE))
            {
                /* Report DET error for invalid input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_READ_RXPDU_DATA,
                                CANIF_E_INVALID_RXPDUID);
                return E_NOT_OK;
            }
            if ((PduInfoPtr == NULL_PTR) || (PduInfoPtr->SduDataPtr == NULL_PTR))
            {
                /* Report DET Error for a null pointer input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_READ_RXPDU_DATA,
                                CANIF_E_PARAM_POINTER);
                return E_NOT_OK;
            }
        }
        ControllerId = gp_CanIfHrhConfig[gp_CanIfRxLPduConfig[CanRxPduId].CanIfCanRxPduHrhRef].CanIfCanControllerHrhIdRef;

         if (   (g_CntrlFlags[ControllerId].ControllerMode == CANIF_CS_STARTED)
             && (   (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_ONLINE)
                 || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_RX_ONLINE)
                 || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_OFFLINE_ACTIVE_RX_ONLINE)))
        {

            /* Get the configured start index of the RxPdu in buffer */
            BufferIndex = gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxPduDataBufferInd;

            /* DLC is stored as first element of the array */
            SchM_Enter_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
            PduInfoPtr->SduLength = CanIfRxPduDataBuffer[BufferIndex];

            /* increment buffer index */
            BufferIndex++;

            /* Store the received data in the application Buffer */
            for (LoopInd = 0; LoopInd < PduInfoPtr->SduLength; LoopInd++)
            {
                PduInfoPtr->SduDataPtr[LoopInd] = CanIfRxPduDataBuffer[BufferIndex + LoopInd];
            }
            SchM_Exit_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
        }
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_READ_RXPDU_DATA,
                            CANIF_E_NOK_NOSUPPORT);
        }

        CanIfRet = E_NOT_OK;
    }
    return CanIfRet;
}

/** <!------------------------------------------------------------------------->
*   Provides the status of the CAN Tx LPDU
*
*   @description
*     This API service notifies the upper layer about any transmit confirmation
*     event to the corresponding requested CAN L-PDU. During this call the CAN
*     Tx L-PDU notification status is reset inside the CAN Interface.
*
*   @parameters
*       @param CanTxPduId L-PDU handle of CAN L-PDU
*
*   @return CanIf_NotifStatusType Current notification status of the corresponding
*           CAN L-PDU.
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
CanIf_NotifStatusType CanIf_ReadTxNotifStatus(VAR(PduIdType, AUTOMATIC)CanTxPduId)
{
    /* Local variable to keep the status of notification */
    VAR(CanIf_NotifStatusType, AUTOMATIC)CanIfRet = CANIF_TX_RX_NOTIFICATION;
    if (CanIf_ReadTxPduNotifyStatusApi == STD_ON)
    {
        if (CanIf_DevErrorDetect == STD_ON)
        {
            if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
            {
                /* Report DET error for module not initialized */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_READ_TX_NOTIF_STATUS,
                                CANIF_E_UNINIT);
                return CANIF_NO_NOTIFICATION;
            }
            if (   (CanTxPduId >= gp_CanIfInitConfig->CanIfNumberOfCanTxPduIds)
                || (gp_CanIfTxLPduConfig[CanTxPduId].CanIfReadTxPduNotifyStatus == FALSE))
            {
                /* Report DET error for invalid input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_READ_TX_NOTIF_STATUS,
                                CANIF_E_INVALID_TXPDUID);
                return CANIF_NO_NOTIFICATION;
            }
        }

        CanIfRet = (CanIf_NotifStatusType)gp_CanIfConfig->gp_ReadTxPduNotifyStatus[CanTxPduId];
        /* CANIF202 */
        gp_CanIfConfig->gp_ReadTxPduNotifyStatus[CanTxPduId] = 0;
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_READ_TX_NOTIF_STATUS,
                            CANIF_E_NOK_NOSUPPORT);
        }

        CanIfRet = CANIF_NO_NOTIFICATION;
    }
    return CanIfRet;
}

/** <!------------------------------------------------------------------------->
*   Provides the status of the CAN Rx L-PDU
*
*   @description
*     This API service notifies the upper layer about any receive indication event
*     to the corresponding requested CAN L-PDU. During this call the CAN Rx L-PDU
*     notification status is reset inside the CAN Interface.
*
*   @parameters
*       @param CanRxPduId L-PDU handle of CAN L-PDU
*
*   @return CanIf_NotifStatusType Current notification status of the corresponding
*           CAN L-PDU.
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
CanIf_NotifStatusType CanIf_ReadRxNotifStatus(VAR(PduIdType, AUTOMATIC)CanRxPduId)
{
    /* Local variable to keep the status of notification */
    VAR(CanIf_NotifStatusType, AUTOMATIC)CanIfRet = CANIF_TX_RX_NOTIFICATION;

    if (CanIf_ReadRxPduNotifyStatusApi == STD_ON)
    {
        if (CanIf_DevErrorDetect == STD_ON)
        {
            if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
            {
                /* Report DET error for module not initialized */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_READ_RX_NOTIF_STATUS,
                                CANIF_E_UNINIT);
                return CANIF_NO_NOTIFICATION;
            }
            else if (   (CanRxPduId >= gp_CanIfInitConfig->CanIfNumberOfCanRxPduIds)
                     || (gp_CanIfRxLPduConfig[CanRxPduId].CanIfReadRxPduNotifyStatus == FALSE))
            {
                /* Report DET error for invalid input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_READ_RX_NOTIF_STATUS,
                                CANIF_E_INVALID_RXPDUID);
                return CANIF_NO_NOTIFICATION;
            }
        }

        CanIfRet = (CanIf_NotifStatusType)gp_CanIfConfig->gp_ReadRxPduNotifyStatus[CanRxPduId];
        /* CANIF230 */
        gp_CanIfConfig->gp_ReadRxPduNotifyStatus[CanRxPduId] = 0;
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_READ_RX_NOTIF_STATUS,
                            CANIF_E_NOK_NOSUPPORT);
        }
        CanIfRet = CANIF_NO_NOTIFICATION;
    }
    return CanIfRet;
}


/** <!------------------------------------------------------------------------->
*   Set the requested mode for all L-PDUs of the predefined logical PDU channel
*
*   @description
*     Set the requested mode in CanIf module and not passed to the DsCan driver
*
*   @parameters
*       @param Controller Controller Id
*       @param PduModeRequest Requested PDU mode
*
*   @return E_OK: Mode request has been accepted
 *          E_NOT_OK: Mode request has not been accepted
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_SetPduMode(VAR(uint8, AUTOMATIC)Controller, VAR(CanIf_PduSetModeType, AUTOMATIC)PduModeRequest)
{
    STATIC CONST(uint8, CANIF_CONST)ga_CanIfPduMode[CANIF_REQUESTED_MODE][CANIF_CURRENT_MODE] =
        /* 0 : CANIF_GET_OFFLINE
           1 : CANIF_GET_RX_ONLINE
           2 : CANIF_GET_TX_ONLINE
           3 : CANIF_GET_ONLINE
           4 : CANIF_GET_TX_OFFLINE_ACTIVE
           5 : CANIF_GET_TX_OFFLINE_ACTIVE_RX_ONLINE */
    { {(uint8)0, (uint8)0, (uint8)0, (uint8)0, (uint8)0, (uint8)0}, /* CANIF_SET_OFFLINE */
      {(uint8)0, (uint8)0, (uint8)2, (uint8)2, (uint8)4, (uint8)4}, /* CANIF_SET_RX_OFFLINE */
      {(uint8)1, (uint8)1, (uint8)3, (uint8)3, (uint8)5, (uint8)5}, /* CANIF_SET_RX_ONLINE */
      {(uint8)0, (uint8)1, (uint8)0, (uint8)1, (uint8)0, (uint8)1}, /* CANIF_SET_TX_OFFLINE */
      {(uint8)2, (uint8)3, (uint8)2, (uint8)3, (uint8)2, (uint8)3}, /* CANIF_SET_TX_ONLINE */
      {(uint8)3, (uint8)3, (uint8)3, (uint8)3, (uint8)3, (uint8)3}, /* CANIF_SET_ONLINE */
      {(uint8)4, (uint8)5, (uint8)4, (uint8)5, (uint8)4, (uint8)5}  /* CANIF_SET_TX_OFFLINE_ACTIVE */
    };
    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    VAR(CanIf_PduSetModeType, AUTOMATIC)CurPduMode;
    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_SET_PDU_MODE,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
        if (Controller >= CanIf_NumberOfCanHWUnits)
        {
            /* Report DET error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_SET_PDU_MODE,
                            CANIF_E_PARAM_CONTROLLER);
            return E_NOT_OK;
        }
    }
    /* Get the controller lock */
    CanIfRet = CanIf_GetControllerLock(Controller, CANIF_CONTROLLER_LOCK);
    if ((CanIfRet == E_OK) && (PduModeRequest <= CANIF_SET_TX_OFFLINE_ACTIVE))
    {
        CurPduMode = (CanIf_PduSetModeType)(g_CntrlFlags[Controller].PduGetMode);
        g_CntrlFlags[Controller].PduGetMode = (CanIf_PduGetModeType)ga_CanIfPduMode[PduModeRequest][CurPduMode];
        /* CANIF749 PN filter of a controller is enabled */
        if (CanIf_PublicPNSupport == STD_ON)
        {
            if (   ((PduModeRequest == CANIF_SET_ONLINE) || (PduModeRequest == CANIF_SET_TX_ONLINE))
                && ((g_CntrlFlags[Controller].ControllerFlags & CANIF_PN_FILTER_AVAILABLE) != 0))
            {
                g_CntrlFlags[Controller].ControllerFlags |= (uint8)CANIF_PN_FILTER_ENABLE;
            }
        }
    }
    else
    {
        CanIfRet = E_NOT_OK;
    }
    CanIf_ReleaseControllerLock(Controller, CANIF_CONTROLLER_LOCK);

    return CanIfRet;
}
/** <!------------------------------------------------------------------------->
*   Reports the current mode of the requested PDU channel
*
*   @description
*     Reports the current mode of the requested PDU channel
*
*   @parameters
*       @param Controller: DsCan channel
*       @param PduModePtr: Pointer to which the current PDU mode is stored
*
*   @return Std_ReturnType
*   E_OK: The function returns correct information about the PDU mode
*   E_NOTOK:The call is not successful due to either module is not initialized or
*           input parameter is not valid
*   @note Returns the mode stored locally in CanIf.No DsCan API calls involved
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetPduMode(VAR(uint8, AUTOMATIC)Controller, P2VAR(CanIf_PduGetModeType, AUTOMATIC, AUTOMATIC)PduModePtr)
{
    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_PDU_MODE,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
        if (Controller >= CanIf_NumberOfCanHWUnits)
        {
            /* Report DET error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_PDU_MODE,
                            CANIF_E_PARAM_CONTROLLER);
            return E_NOT_OK;
        }
        if (PduModePtr == NULL_PTR)
        {
            /* Report DET error for a null pointer input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_PDU_MODE,
                            CANIF_E_PARAM_POINTER);
            return E_NOT_OK;
        }
    }
    if (CanIf_IsControllerNotLocked(Controller) == E_OK)
    {
        SchM_Enter_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
        *PduModePtr = (CanIf_PduGetModeType)(g_CntrlFlags[Controller].PduGetMode);
        SchM_Exit_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
    }
    else
    {
        CanIfRet = E_NOT_OK;
    }

    return CanIfRet;
}


/** <!------------------------------------------------------------------------->
*   Returns the version information of CanIf module
*
*   @description
*     Returns module id,vendor id and software version information of
*     CanIf module
*
*   @parameters
*       @param VersionInfo: Pointer to which the version information
*              of the CanIf module is stored
*
*   @return void
*
*   @note This function can be called before initialization of the module
*         This function will be available only if CanIf_VersionInfoApi is ON
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/

FUNC(void, CANIF_CODE)CanIf_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, AUTOMATIC)VersionInfo)
{
    if (CanIf_VersionInfoApi == STD_ON)
    {
        if (CanIf_DevErrorDetect == STD_ON)
        {
            if (VersionInfo == NULL_PTR)
            {
                /* Report DET error for a null pointer input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_GET_VERSIONINFO,
                                CANIF_E_PARAM_POINTER);
                return;
            }
        }
        /* Update the Module ID */
        VersionInfo->moduleID = CANIF_MODULE_ID;

        /* Update the Vendor ID */
        VersionInfo->vendorID = CANIF_VENDOR_ID;

        /* Update the Software Major Version */
        VersionInfo->sw_major_version = (uint8)CANIF_H_SW_MAJOR_VERSION;

        /* Update the Software Minor Version */
        VersionInfo->sw_minor_version = (uint8)CANIF_H_SW_MINOR_VERSION;

        /* Update the Software Patch Version */
        VersionInfo->sw_patch_version = (uint8)CANIF_H_SW_PATCH_VERSION;
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_VERSIONINFO,
                            CANIF_E_NOK_NOSUPPORT);
        }
    }
}

/** <!------------------------------------------------------------------------->
*   Reconfigures the CAN identifier of the requested CAN L-PDU.
*
*   @description
*     Service to reconfigure the can identifier of a Tx CAN L-PDU.
*
*   @parameters
*       @param CanTxPduId L-PDU handle of CAN L-PDU for transmission
*       @param CanId Standard/Extended CAN ID of CAN L-PDU that shall be transmitted
*
*   @return void
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_SetDynamicTxId(VAR(PduIdType, AUTOMATIC)CanTxPduId, VAR(Can_IdType, AUTOMATIC)CanId)
{
    if (CanIf_SetDynamicTxIdApi == STD_ON)
    {
        if (CanIf_DevErrorDetect == STD_ON)
        {
            if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
            {
                /* Report DET error for module not initialized */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_SET_DYNAMIC_TXID,
                                CANIF_E_UNINIT);
                return;
            }
            if (   (CanTxPduId >= gp_CanIfInitConfig->CanIfNumberOfCanTxPduIds)
                || (gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduType != CANIF_PDU_TYPE_DYNAMIC))
            {
                /* Report DET error for invalid input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_SET_DYNAMIC_TXID,
                                CANIF_E_INVALID_TXPDUID);
                return;
            }
            if (  (  (gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduIdCanIdType == STANDARD_CAN || gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduIdCanIdType == STANDARD_FD_CAN_BRS_OFF || gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduIdCanIdType == STANDARD_FD_CAN_BRS_ON)
                  && (CanId > CANIF_STD_CANID_MAXVAL))
                || ( (gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduIdCanIdType == EXTENDED_CAN || gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduIdCanIdType == EXTENDED_FD_CAN_BRS_OFF || gp_CanIfTxLPduConfig[CanTxPduId].CanIfTxPduIdCanIdType == EXTENDED_FD_CAN_BRS_ON)
                  && (CanId > CANIF_EXT_CANID_MAXVAL)))
            {
                /* Report DET error for invalid input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_SET_DYNAMIC_TXID,
                                CANIF_E_PARAM_CANID);
                return;
            }
        }

        SchM_Enter_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
        gp_CanIfConfig->gp_DynamicTxPduCanId[gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanDynamicTxPduIndex] = CanId;
        SchM_Exit_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_SET_DYNAMIC_TXID,
                            CANIF_E_NOK_NOSUPPORT);
        }
    }
}

/** <!------------------------------------------------------------------------->
*   Requests actual state of CAN transceiver driver
*
*   @description
*     Change the transceiver state to the requested mode by calling CanTrcv_SetOpMode
*
*   @parameters
*       @param Transceiver CAN transceiver requested for mode transition
*       @param TransceiverMode Requested mode transition
*
*   @return Std_ReturnType
*   E_OK: The transceiver state has been changed to the requested mode.
*   E_NOTOK: The he transceiver state change has failed or the parameter is out of the
*            allowed range. Transceiver remains in previous state.
*
*   @note Since no transceiver used,this API is not implemented(CANIF287)
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_SetTransceiverMode(VAR(uint8, AUTOMATIC)Transceiver, VAR(CanIf_TransceiverModeType, AUTOMATIC)TransceiverMode)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_SET_TRCVR_MODE,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
        if ((TransceiverMode != CANIF_TRCV_MODE_NORMAL) && (TransceiverMode != CANIF_TRCV_MODE_SLEEP))
        {
            /* Report DET error for invalid mode input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_SET_TRCVR_MODE,
                            CANIF_TRCV_E_TRCV_NOT_STANDBY);
            return E_NOT_OK;
        }
    }

    return E_OK;
}


/** <!------------------------------------------------------------------------->
*   Returns actual state of CAN transceiver driver
*
*   @description
*     Get the transceiver mode by calling CanTrcv_GetOpMode
*
*   @parameters
*       @param Transceiver CAN transceiver requested for mode information
*       @param TransceiverModePtr Variable to which mode information updated
*
*   @return Std_ReturnType
*   E_OK: The value updated correctly.
*   E_NOTOK: The value may be incorrect due to input improper call of the API
*
*   @note Since no transceiver used,this API is not implemented(CANIF288)
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetTransceiverMode(VAR(uint8, AUTOMATIC)Transceiver, P2VAR(CanIf_TransceiverModeType, AUTOMATIC, AUTOMATIC)TransceiverModePtr)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);
    INTENDED_UNREFERENCED_PARAMETER(TransceiverModePtr);

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_TRCVR_MODE,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
    }

    return E_OK;
}


/** <!------------------------------------------------------------------------->
*   Returns the reason for the wake up that the CAN transceiver has detected.
*
*   @description
*     The ability to detect and differentiate the possible wakeup reasons depends
*     strongly on the CAN transceiver hardware.
*
*   @parameters
*       @param Transceiver CAN transceiver to which the API call has to be applied
*       @param TrcvWuReasonPtr Variable to which wakeup reason updated
*
*   @return Std_ReturnType
*   E_OK: The value updated correctly.
*   E_NOTOK: The value may be incorrect due to input improper call of the API
*
*   @note Since no transceiver used,this API is not implemented(CANIF289)
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetTrcvWakeupReason(VAR(uint8, AUTOMATIC)Transceiver, P2VAR(CanIf_TrcvWakeupReasonType, AUTOMATIC, AUTOMATIC)TrcvWuReasonPtr)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);
    INTENDED_UNREFERENCED_PARAMETER(TrcvWuReasonPtr);

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_TRCVR_WKUP_REASON,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
    }

    return E_OK;
}
/** <!------------------------------------------------------------------------->
*   Enables, disables and clears the notification for wakeup events
*
*   @description
*     Enables, disables and clears the notification for wakeup events by calling
*     CanTrcv_SetWakeupMode for the addressed network
*
*   @parameters
*       @param Transceiver CAN transceiver to which the API call has to be applied
*       @param TrcvWakeupMode Requested transceiver wakeup reason
*
*   @return Std_ReturnType
*   E_OK: The wakeup state has been changed to the requested mode.
*   E_NOTOK: The wakeup state change has failed or the parameter is out of the
*            allowed range. Transceiver remains in previous state.
*
*   @note Since no transceiver used,this API is not implemented(CANIF290)
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_SetTransceiverWakeupMode(VAR(uint8, AUTOMATIC)Transceiver, VAR(CanIf_TrcvWakeupModeType, AUTOMATIC)TrcvWakeupMode)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);
    INTENDED_UNREFERENCED_PARAMETER(TrcvWakeupMode);

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_SET_TRCVR_WKUP_MODE,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
    }

    return E_OK;
}

/** <!------------------------------------------------------------------------->
*   Checks whether the CAN driver already signals a wakeup event by the CAN network
*
*   @description
*     Checks whether a wakeup event by the CAN network is happened or not
*
*   @parameters
*       @param WakeupSource Source device, who initiated the wakeup event
*
*   @return E_OK: Will be returned, if the request has been accepted.
*           E_NOT_OK: Will be returned, if the request has not been accepted.
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_CheckWakeup(VAR(EcuM_WakeupSourceType, AUTOMATIC)WakeupSource)
{
    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    if (CanIf_WakeupSupport == STD_ON)
    {
        if (CanIf_DevErrorDetect == STD_ON)
        {
            if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
            {
                /* Report DET error for module not initialized */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_CHK_WAKEUP,
                                CANIF_E_UNINIT);
                return E_NOT_OK;
            }
            if (WakeupSource >= CanIf_NumberOfCanHWUnits)
            {
                /* Report DET error for invalid input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_CHK_WAKEUP,
                                CANIF_E_PARAM_WAKEUPSOURCE);
                return E_NOT_OK;
            }
        }
        if (g_CntrlFlags[WakeupSource].WakeUpFlag != CANIF_WAKEUP_CLEARED)
        {
            EcuM_SetWakeupEvent(WakeupSource);
        }
        else
        {
            CanIfRet = E_NOT_OK;
        }
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_CHK_WAKEUP,
                            CANIF_E_NOK_NOSUPPORT);
        }
        CanIfRet = E_NOT_OK;
    }
    return CanIfRet;
}


/** <!------------------------------------------------------------------------->
*   This service is performed to validate a previous wakeup event.
*
*   @description
*     The CAN Interface checks whether a L-PDU was successful received after the
*     sleep.
*
*   @parameters
*       @param WakeupSource Source device, who initiated the wakeup event
*
*   @return E_OK: Will be returned, if the request has been accepted.
*           E_NOT_OK: Will be returned, if the request has not been accepted.
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_CheckValidation(VAR(EcuM_WakeupSourceType, AUTOMATIC)WakeupSource)
{
    /* Local variable to keep the status of error checking */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;

    if (CanIf_PublicWakeupCheckValidationSupport == STD_ON)
    {
        if (CanIf_DevErrorDetect == STD_ON)
        {
            if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
            {
                /* Report DET error for module not initialized */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_CHK_VALIDATION,
                                CANIF_E_UNINIT);
                return E_NOT_OK;
            }
            if (WakeupSource >= CanIf_NumberOfCanHWUnits)
            {
                /* Report DET error for invalid input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_CHK_VALIDATION,
                                CANIF_E_PARAM_WAKEUPSOURCE);
                return E_NOT_OK;
            }
        }
        if (g_CntrlFlags[WakeupSource].RxIndicationStatus == CANIF_TX_RX_NOTIFICATION)
        {
            gp_CanIfConfig->DispatchConfig->CanIfDispatchUserValidateWakeupEventName(WakeupSource);
        }
        else
        {
            CanIfRet = E_NOT_OK;
        }
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_CHK_VALIDATION,
                            CANIF_E_NOK_NOSUPPORT);
        }
        CanIfRet = E_NOT_OK;
    }

    return CanIfRet;
}

/** <!------------------------------------------------------------------------->
*   Reports any TX confirmation has been done for the CAN controller since the
*   last CAN controller start.
*
*   @description
*     CanSM calls this function to know any TX confirmation has been done for the
*     CAN controller since the last CAN controller start.
*
*   @parameters
*       @param CanController CanIf ControllerId which is assigned to a CAN controller
*
*   @return CanIf_NotifStatusType Combined TX confirmation status for all TX PDUs
*           of the CAN controller
*
*   @note As per CANIF736 CANIF_E_PARAM_CONTROLLERID need to be reported for an
*   invalid input parameter CanController.Since the parameter “CanController” is same
*   as ControllerId, CANIF_E_PARAM_CONTROLLER is reported for invalid input.
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
CanIf_NotifStatusType CanIf_GetTxConfirmationState(VAR(uint8, AUTOMATIC)CanController)
{
    CanIf_NotifStatusType ConfirmationStatus = CANIF_NO_NOTIFICATION;

    if (CanIf_PublicTxConfirmPollingSupport == STD_ON)
    {
        if (CanIf_DevErrorDetect == STD_ON)
        {
            if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
            {
                /* Report DET error for module not initialized */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_GET_TX_CONFIRMATION_STATE,
                                CANIF_E_UNINIT);
                return CANIF_NO_NOTIFICATION;
            }
            if (CanController >= CanIf_NumberOfCanHWUnits)
            {
                /* Report DET error for invalid input */
                Det_ReportError(CANIF_MODULE_ID,
                                CANIF_INSTANCE_ID,
                                CANIF_SID_GET_TX_CONFIRMATION_STATE,
                                CANIF_E_PARAM_CONTROLLER);
                return CANIF_NO_NOTIFICATION;
            }
        }
        /* Note:If elements of CanIf_NotifStatusType is changed this code will return wrong status */
        ConfirmationStatus = (CanIf_NotifStatusType)g_CntrlFlags[CanController].TxConfirmationStatus;
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_GET_TX_CONFIRMATION_STATE,
                            CANIF_E_NOK_NOSUPPORT);
        }
    }

    return (ConfirmationStatus);
}

/** <!------------------------------------------------------------------------->
*   Requests the CanIf module to clear the WUF flag of the CAN Transceiver
*
*   @description
*     Returns OK if input parameters are correct and no functionality implemented
*
*   @parameters
*       @param Transceiver CAN Transceiver
*
*   @return E_OK: Request has been accepted
*           E_NOT_OK: Request has not been accepted
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_ClearTrcvWufFlag(VAR(uint8, AUTOMATIC)Transceiver)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_CLEAR_TRCVR_WKUP_FLAG,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
    }

    return E_OK;
}


/** <!------------------------------------------------------------------------->
*   Requests the CanIf module to check the WUF flag of the CAN Transceiver
*
*   @description
*     Returns OK if input parameters are correct and no functionality implemented
*
*   @parameters
*       @param Transceiver CAN Transceiver
*
*   @return E_OK: Request has been accepted
*           E_NOT_OK: Request has not been accepted
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(Std_ReturnType, CANIF_CODE)CanIf_CheckTrcvWakeFlag(VAR(uint8, AUTOMATIC)Transceiver)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_CHECK_TRCVR_WKUP_FLAG,
                            CANIF_E_UNINIT);
            return E_NOT_OK;
        }
    }

    return E_OK;
}

/** <!------------------------------------------------------------------------->
*   Called by the CAN Driver after the CAN L-PDU has been transmitted
*
*   @description
*     Callout function implemented in CanIf and called by the CAN Driver after
*     the CAN L-PDU has been transmitted
*
*   @parameters
*       @param pCbArg The data handle registered during call back registration
*                     The TxLPDU configuration instance is registered
*       @param MsgItem CAN message item structure for the data exchange between
*                      DsCan API and application
*
*   @return
*
*   @note  Currently supported informations are ProcCount, TimeStamp,
*          Status and Id
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_TxConfirmation(void* pCbArg, const DsSCanMsg_Item* MsgItem)
{
    uint8 ControllerId = 0;
    CanIfTxPduConfig* TxPduConfig = (CanIfTxPduConfig*)pCbArg;
    DsSCanMsg_Item MyTxItem;
    INTENDED_UNREFERENCED_PARAMETER(MsgItem);

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_TX_CONFIRMATION,
                            CANIF_E_UNINIT);
            return;
        }
    }

    /* This read is important to avoid message overrun status */
    DsCanMsg_readTxItem((DsTCanMsg)(gp_CanIfHthConfig[TxPduConfig->CanIfCanTxPduHthRef].CanIfHthIdSymRef), &MyTxItem);

#if (CANIF_CANTSYN_SUPPORT == STD_ON)
    if (TxPduConfig->CanIfTxUserType == CANIF_CANTSYN)
    {
        CanTSyn_TxConfirmation(TxPduConfig->CanIfCanTxPduId, MsgItem);
    }
#endif

#if (CANIF_J1939TP_SUPPORT == STD_ON)
    if (TxPduConfig->CanIfTxUserType == CANIF_J1939TP)
    {
        J1939Tp_TxConfirmation(TxPduConfig->PduIdRef, MsgItem->Status == DSCAN_MSG_NEW ? E_OK : E_NOT_OK);
    }
#endif

    if (CanIf_PublicTxConfirmPollingSupport == STD_ON)
    {
        ControllerId = gp_CanIfHthConfig[TxPduConfig->CanIfCanTxPduHthRef].CanIfCanControllerIdRef;
        if (g_CntrlFlags[ControllerId].ControllerMode == CANIF_CS_STARTED)
        {
            g_CntrlFlags[ControllerId].TxConfirmationStatus = (uint8)CANIF_TX_RX_NOTIFICATION;
        }
    }

    if (CanIf_ReadTxPduNotifyStatusApi == STD_ON)
    {
        gp_CanIfConfig->gp_ReadTxPduNotifyStatus[TxPduConfig->CanIfCanTxPduId] = 1;
    }
    /* CANIF751 Disable the PN filter */
    if (CanIf_PublicPNSupport == STD_ON)
    {
        g_CntrlFlags[ControllerId].ControllerFlags &= ((uint8)~CANIF_PN_FILTER_ENABLE);
    }

    /* CANIF438 The call back function need not be configured */
    if (TxPduConfig->CanIfUserTxConfirmation != NULL_PTR)
    {
        TxPduConfig->CanIfUserTxConfirmation(TxPduConfig->PduIdRef);
    }
}


/** <!------------------------------------------------------------------------->
*   Called by the CAN Driver after a CAN L-PDU has been received
*
*   @description
*      CAN Interface translates the CanId into the configured target PDU ID and
*      routes this indication to the configured upper layer target service(s).
*
*   @parameters
*       @param pCbArg The data handle registered during call back registration
*                     A MetaData instance is registered which contains the hrh
*                     configuration instance
*       @param MsgItem CAN message item structure for the data exchange between
*                      DsCan API and application
*
*   @return None
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_RxIndication(void* pCbArg, const DsSCanMsg_Item* MsgItem)
{
    VAR(uint8, AUTOMATIC)ControllerId;
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    VAR(boolean, AUTOMATIC)HrhRangeFound = FALSE;
    /*Index variables*/
    VAR(uint8, AUTOMATIC)Index;
    P2VAR(CanIfHrhConfig, AUTOMATIC, AUTOMATIC) CanIfReceivedHrh;
    P2VAR(CanIf_RxIndicationMetaDataType, AUTOMATIC, AUTOMATIC) CanIf_RxIndicationMetaData;
    VAR(uint32, AUTOMATIC) CanId;
    VAR(PduIdType, AUTOMATIC) CanRxPduId = PDUR_RX_PDUID_NONE;
    VAR(CanIfCanIdType, AUTOMATIC) CanIdType;
    VAR(uint8, AUTOMATIC)CurDlc;
    P2CONST(uint8, AUTOMATIC, CANIF_APPL_CONST) CanSduPtr;
    DsSCanMsg_Item MyRxItem;

    VAR(PduInfoType, AUTOMATIC) PduInfo = { 0 };
#if (CANIF_RX_STATUS_SIM_SUPPORT == STD_ON)
    VAR(PduRxStatus_PduMetaData_Type, AUTOMATIC) PduRxStatusMetaData;
#endif
    VAR(Feature_MetaData_Type, AUTOMATIC) MetaData = { 0 };

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_RX_INDICATION,
                            CANIF_E_UNINIT);
            return;
        }
        if ((pCbArg == NULL_PTR) || (MsgItem == NULL_PTR))
        {
            /* Report DET error for a null pointer input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_RX_INDICATION,
                            CANIF_E_PARAM_POINTER);
            return;
        }
        if (((CanIf_RxIndicationMetaDataType*)pCbArg)->CanIfReceivedHrh->CanIfHrhId >= CanIf_MaxNumberOfHrh)
        {
            /* Report DET error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_RX_INDICATION,
                            CANIF_E_PARAM_HRH);
            return;
        }
        /* Commented due to the bug in DsCAN driver which always gives an invalid value for the CAN id
        if (  ((MsgItem->Format == EXTENDED_CAN) && (MsgItem->Id > CANIF_EXT_CANID_MAXVAL))
            ||((MsgItem->Format == STANDARD_CAN) && (MsgItem->Id > CANIF_STD_CANID_MAXVAL)))
        {
            // Report DET error for invalid input
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_RX_INDICATION,
                            CANIF_E_PARAM_CANID);
            return;

        } */
        /*  Parameter check for DLC */
        if (CANIF_MAX_DLC < MsgItem->Dlc)
        {
            /* Call the DET error with invalid DLC */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_RX_INDICATION,
                            CANIF_E_PARAM_DLC);
            return;
        }
    }

    CanIf_RxIndicationMetaData = (CanIf_RxIndicationMetaDataType*)pCbArg;
    CanIfReceivedHrh = CanIf_RxIndicationMetaData->CanIfReceivedHrh;
    ControllerId = CanIfReceivedHrh->CanIfCanControllerHrhIdRef;

    if (!StateManager_GetState(gp_CanIfConfig->BusConfigurationEnableStateManagerIndex) ||
        !StateManager_GetState(gp_CanIfControllerConfig[ControllerId].CanIf_StateManagerIndex))
    {
        if (   (g_CntrlFlags[ControllerId].ControllerMode == CANIF_CS_STARTED)
            &&    ((g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_ONLINE)
                || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_RX_ONLINE)
                || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_OFFLINE_ACTIVE_RX_ONLINE)))
        {
            if (!CanIf_RxIndicationMetaData->IsInterruptContext) {
                /* This read is important to clear the ring buffer to avoid increments of the messages lost counter */
                DsCanMsg_readRxItem((DsTCanMsg)(CanIfReceivedHrh->CanIfHrhIdSymRef), &MyRxItem);
            }
        }

        return;
    }

    if (   (g_CntrlFlags[ControllerId].ControllerMode == CANIF_CS_STARTED)
        && (   (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_ONLINE)
            || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_RX_ONLINE)
            || (g_CntrlFlags[ControllerId].PduGetMode == CANIF_GET_OFFLINE_ACTIVE_RX_ONLINE)))
    {
        /* fix for DsCan */
        CanId = MsgItem->Id & 0x1fffffff;
        CanSduPtr = MsgItem->Data;
        CurDlc = (uint8)MsgItem->Dlc;

        /* Map Message format and BRS flag to CanIf configurations Message format */
        CanIf_ConvertMessageIdTypeToCanIfIdType(MsgItem, &CanIdType);

        if (!CanIf_RxIndicationMetaData->IsInterruptContext) {
            /* This read is important to clear the ring buffer to avoid increments of the message lost counter */
            DsCanMsg_readRxItem((DsTCanMsg)(CanIfReceivedHrh->CanIfHrhIdSymRef), &MyRxItem);
        }
#if (CANIF_RX_STATUS_SIM_SUPPORT == STD_ON)
        /* set PduRxStatus specific MetaData */
        PduRxStatusMetaData.Timestamp = (float64)MsgItem->TimeStamp;
        /* set common feature MetaData */
        MetaData.pduRxStatusMetaDataPtr = &PduRxStatusMetaData;
#endif

        /* pass MetaDataPtr to PduInfo */
        PduInfo.MetaDataPtr = (uint8*)&MetaData;

        /* Hardware filtering */
        if (CanIfReceivedHrh->CanIfNumberofHrhRange > 0)
        {
            for (Index = 0; ((Index < CanIfReceivedHrh->CanIfNumberofHrhRange) && (HrhRangeFound == FALSE)); Index++)
            {
                if (   (CanId <= (CanIfReceivedHrh->HrhRangeConfig[Index].CanIfRxPduUpperCanId))
                    && (CanId >= (CanIfReceivedHrh->HrhRangeConfig[Index].CanIfRxPduLowerCanId)))
                {
                    HrhRangeFound = TRUE;

                    if (CanIf_RxIndicationMetaData->IsInterruptContext) {
                        /* For interrupt based RX Pdus the configuration index is already known */
                        CanRxPduId = CanIf_RxIndicationMetaData->CanRxPduId;
                    }
                    else {
                        /* Binary search to find out the CanIf PDU */
                        CanIfRet = CanIf_BinarySearchRxPduId(CanId, &CanRxPduId, CanIfReceivedHrh->CanIfHrhId, CanIdType);
                    }
                    if (CanIfRet == E_OK)
                    {
                        if (!CanIf_RxIndicationMetaData->IsInterruptContext &&
                            gp_CanIfRxLPduConfig[CanRxPduId].CanIf_RxInterruptAccessPoint != NULL_PTR) {
                            /* Message is already processed in interrupt context */
                            return;
                        }

                        /* Read the data from the buffer if the PDU is intended for the ECU */
#if (CANIF_CANTSYN_SUPPORT == STD_ON)
                        if (gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxUserType == CANIF_CANTSYN)
                        {
                            CanTSyn_RxIndication(gp_CanIfRxLPduConfig[CanRxPduId].CanIfCanRxPduId, MsgItem);
                        }
#endif
#if (CANIF_J1939TP_SUPPORT == STD_ON)
                        if (gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxUserType != CANIF_J1939TP)
#endif
#if (CANIF_CDD_SUPPORT == STD_ON)
                            if (gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxUserType != CANIF_CDD)
#endif
                            {
                                CanIf_ProcessRxData(CanRxPduId, CurDlc, CanSduPtr, ControllerId, &PduInfo);
                            }
                    }
                }
            }
        }
        else
        {
            if (CanIf_RxIndicationMetaData->IsInterruptContext) {
                /* For interrupt based RX Pdus the configuration index is already known */
                CanRxPduId = CanIf_RxIndicationMetaData->CanRxPduId;
            }
            else {
                /* Binary search to find out the CanIf PDU */
                CanIfRet = CanIf_BinarySearchRxPduId(CanId, &CanRxPduId, CanIfReceivedHrh->CanIfHrhId, CanIdType);
            }

            if (CanIfRet == E_OK)
            {
                if (!CanIf_RxIndicationMetaData->IsInterruptContext &&
                    gp_CanIfRxLPduConfig[CanRxPduId].CanIf_RxInterruptAccessPoint != NULL_PTR) {
                    /* Message is already processed in interrupt context */
                    return;
                }

                /* Read the data from the buffer if the PDU is intended for the ECU */
#if (CANIF_CANTSYN_SUPPORT == STD_ON)
                if (gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxUserType == CANIF_CANTSYN)
                {
                    CanTSyn_RxIndication(gp_CanIfRxLPduConfig[CanRxPduId].CanIfCanRxPduId, MsgItem);
                }
#endif
#if (CANIF_J1939TP_SUPPORT == STD_ON)
                if (gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxUserType != CANIF_J1939TP)
#endif
#if (CANIF_CDD_SUPPORT == STD_ON)
                    if (gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxUserType != CANIF_CDD)
#endif
                    {
                        CanIf_ProcessRxData(CanRxPduId, CurDlc, CanSduPtr, ControllerId, &PduInfo);
                    }
            }
        }

#if (CANIF_J1939TP_SUPPORT == STD_ON) || (CANIF_CDD_SUPPORT == STD_ON)
        PduInfo.SduDataPtr = (uint8*)CanSduPtr;
        PduInfo.SduLength = CurDlc;
#endif
#if (CANIF_J1939TP_SUPPORT == STD_ON)
        if (CanIdType == EXTENDED_CAN && (CanRxPduId == PDUR_RX_PDUID_NONE || gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxUserType == CANIF_J1939TP))
        {
            /* set J1939Tp specific MetaData */
            VAR(J1939Tp_PduMetaData_Type, AUTOMATIC) j1939TpMetaData;
            j1939TpMetaData.CanId = CanId;
            j1939TpMetaData.Result = MsgItem->Status == DSCAN_MSG_NEW ? E_OK : E_NOT_OK;
            j1939TpMetaData.RxTpDataCntPtr = NULL_PTR;
            MetaData.j1939TpMetaDataPtr = &j1939TpMetaData;
            J1939Tp_RxIndication(0, &PduInfo);
        }
#endif
#if (CANIF_CDD_SUPPORT == STD_ON)
        CDD_CanIfRxIndication(CanId, CanIdType, &PduInfo);
#endif
    }
}

/** <!------------------------------------------------------------------------->
*   Called by the CAN Driver after a CAN L-PDU has been received in the context
*   of RX Interrupts
*
*   @description
*      First the CanIf_RxIndication is called to process the upper layers
*      Finally the related Model Port Access Point is called to indicate the reception
*      of the CAN L-PDU in the model
*
*   @parameters
*       @param pCbArg The data handle registered during call back registration
*                     A MetaData instance is registered which contains the hrh
*                     configuration instance and the CaRxPduId                    //ToDO: UpDate!
*       @param MsgItem CAN message item structure for the data exchange between
*                      DsCan API and application
*
*   @return None
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE) CanIf_RxInterruptIndication(void* pCbArg, const DsSCanMsg_Item* MsgItem)
{
    CanIf_RxIndicationMetaDataType* CanIf_RxIndicationMetaData = (CanIf_RxIndicationMetaDataType*)pCbArg;

    /* Only process the CAN message if Bus Configuration and Com Controller are enabled */
    if (!StateManager_GetState(gp_CanIfConfig->BusConfigurationEnableStateManagerIndex) ||
        !StateManager_GetState(gp_CanIfControllerConfig[CanIf_RxIndicationMetaData->CanIfReceivedHrh->CanIfCanControllerHrhIdRef].CanIf_StateManagerIndex))
    {
        return;
    }

    /* Process all features for the received CAN Message */
    CanIf_RxIndication(pCbArg, MsgItem);

    if (StateManager_GetState(gp_CanIfRxLPduConfig[CanIf_RxIndicationMetaData->CanRxPduId].CanIf_RxInterruptEnableStateManagerIndex)) {
        /* Trigger Simulink runnable(s) */
        gp_CanIfRxLPduConfig[CanIf_RxIndicationMetaData->CanRxPduId].CanIf_RxInterruptAccessPoint();
    }
}

/** <!------------------------------------------------------------------------->
*   Callback notification service to inform successful transmit cancellation
*
*   @description
*     Service implemented in CAN Interface and called by the CAN Driver after a
*     previous request for cancellation of a pending L-PDU transmit request was
*     successfully performed.
*
*   @parameters
*       @param PduInfoPtr Pointer to a structure with CAN L-PDU related data
*
*   @return None
*
*   @note Not implemented
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_CancelTxConfirmation(P2CONST(Can_PduType, AUTOMATIC, CANIF_APPL_CONST)PduInfoPtr)
{
    INTENDED_UNREFERENCED_PARAMETER(PduInfoPtr);

    if (CanIf_TransmitCancellation == STD_ON)
    {
        /* Not implemented */
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_CANCEL_TX_CONFIRMATION,
                            CANIF_E_NOK_NOSUPPORT);
        }
    }
}

/** <!------------------------------------------------------------------------->
*   Indicates a CAN controller BusOff event of the corresponding CAN controller
*
*   @description
*     This service is called in case of a mode change notification of CAN Driver
*
*   @parameters
*       @param pCbArg The data handle registered during call back registration
*
*       @param Event CAN channel events
*
*   @return
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_ControllerBusOff(void* pCbArg, DsECanCh_Event Event)
{
    VAR(uint8, AUTOMATIC)Controller = ((CanIfControllerConfig*)pCbArg)->CanIfDriverNameRef;
    INTENDED_UNREFERENCED_PARAMETER(Event);

    if (CanIf_DevErrorDetect == STD_ON)
    {
        if (g_CanIfInitStatus == CANIF_UNINITIALIZED)
        {
            /* Report DET error for module not initialized */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_CONTROLLER_BUS_OFF,
                            CANIF_E_UNINIT);
            return;
        }
        if (Controller >= CanIf_NumberOfCanHWUnits)
        {
            /* Report DET error for invalid input */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_CONTROLLER_BUS_OFF,
                            CANIF_E_PARAM_CONTROLLER);
            return;
        }
    }
    /* CANIF118 The bus off notification need not be reported if PDU mode is OFFLINE */
    if (  (g_CntrlFlags[Controller].ControllerMode == CANIF_CS_STARTED)
        &&(g_CntrlFlags[Controller].PduGetMode != CANIF_GET_OFFLINE))
    {
        g_CntrlFlags[Controller].ControllerMode = CANIF_CS_STOPPED;
        /* CANIF724:The upper layer call back to be invoked
         * CANIF524:It is a mandatory interface,so function pointer should not be NULL pointer.
         * But we allow a NULL pointer anyway, because we are not a production ECU. */
        if (gp_CanIfConfig->DispatchConfig->CanIfDispatchUserCtrlBusOffName != NULL_PTR)
        {
            gp_CanIfConfig->DispatchConfig->CanIfDispatchUserCtrlBusOffName(Controller);
        }

        /* CANIF739:Clear information about a Txconfirmation */
        if (CanIf_PublicTxConfirmPollingSupport == STD_ON)
        {
            g_CntrlFlags[Controller].TxConfirmationStatus = CANIF_NO_NOTIFICATION;
        }
    }
}

/** <!------------------------------------------------------------------------->
*  Service indicates that the transceiver is running in PN communication mode
*
*   @description
*     Call back function implemented in CanIf module called by transceiver
*     to indicate that it is running in PN communication mode
*
*   @parameters
*       @param Transceiver CAN Transceiver
*
*   @return None
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_ConfirmPnAvailability(uint8 Transceiver)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);

    /* Call back called by transceiver to inform that Partial  network mode is activated */
    /* Not implemented as DsCan not support this */
    /* CANIF754 */
    if (CanIf_PublicPNSupport == STD_ON)
    {
        /* CANIF753 Inform CanSM
        CanSm_ConfirmPnAvailability(Transceiver);*/
    }
    else
    {
        /* CANIF295 */
        if (CanIf_DevErrorDetect == STD_ON)
        {
            /* Set error to indicate that the requested API is not supported */
            Det_ReportError(CANIF_MODULE_ID,
                            CANIF_INSTANCE_ID,
                            CANIF_SID_CONFIRM_PN_AVAILABILITY,
                            CANIF_E_NOK_NOSUPPORT);

        }
    }
}

/** <!------------------------------------------------------------------------->
*   Service indicates that the transceiver has cleared the WufFlag.
*
*   @description
*     Called from CanTrcv driver if a WufFlag clearing happened
*
*   @parameters
*       @param Transceiver CAN Transceiver
*
*   @return None
*
*   @note No transceiver driver available so function not implemented
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_ClearTrcvWufFlagIndication(uint8 Transceiver)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);
}

/** <!------------------------------------------------------------------------->
*   Called by the CAN Driver after a wake up detected on bus by controller
*
*   @description
*      Callout function implemented in CanIf and called by the CAN Driver after
*      a wake up detected on bus by controller
*
*   @parameters
*       @param pCbArg The data handle registered during call back registration
*              The controllerId is registered
*       @param Event The event for which the call back is invoked
*
*   @return None
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_CheckTrcvWakeFlagIndication(void* pCbArg, DsECanCh_Event Event)
{
    /* Updating the diver reference according the Controller needed to be wake-up */
    VAR(uint8, AUTOMATIC)Controller = ((CanIfControllerConfig*)pCbArg)->CanIfDriverNameRef;
    /* Check if the current mode is sleep mode */
    if ((g_CntrlFlags[Controller].ControllerMode == CANIF_CS_SLEEP))
    {
        if (Event == DSCAN_CH_EV_WAKEUP)
        {

            /* Set the wake-up detected flag */
            g_CntrlFlags[Controller].WakeUpFlag = CANIF_WAKEUP_DETECTED;
        }
    }
}

/** <!------------------------------------------------------------------------->
*   Service indicates that the transceiver mode has changed to TransceiverMode.
*
*   @description
*     Called from CanTrcv driver if a mode change happened
*
*   @parameters
*       @param Transceiver CAN Transceiver
*       @param TransceiverMode Indicated mode
*
*   @return None
*
*   @note No transceiver driver available so function not implemented
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE)CanIf_TrcvModeIndication(uint8 Transceiver, CanIf_TransceiverModeType TransceiverMode)
{
    INTENDED_UNREFERENCED_PARAMETER(Transceiver);
    INTENDED_UNREFERENCED_PARAMETER(TransceiverMode);
}

/*----------------------------------------------------------------------------*/
/* STATIC FUNCTIONS */
/*----------------------------------------------------------------------------*/
static FUNC(uint8, CANIF_CODE)CanIf_GetDlc
(
	VAR(PduIdType, AUTOMATIC)CanTxPduId,
	P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr
)
{
	uint8 dlc = gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduIdDlc;

	if (CANIF_DLC_DYNAMIC == gp_CanIfTxLPduConfig[CanTxPduId].CanIfCanTxPduIdDlcType
		&& dlc > (uint8)PduInfoPtr->SduLength)
	{
		dlc = (uint8)PduInfoPtr->SduLength;
		
	}

	return dlc;

}

static FUNC(void, CANIF_CODE)CanIf_SetupMessage
(
    VAR(uint32, AUTOMATIC)CanId,
    VAR(CanIfCanIdType, AUTOMATIC)CanIdType,
    VAR(uint8, AUTOMATIC)FrameDlc,
    VAR(uint8, AUTOMATIC)UnusedBitPattern,
    P2CONST(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr,
    DsSCanMsg_Item* pItemHandle
)
{
    VAR(uint8, AUTOMATIC)Count;

    pItemHandle->Id = CanId;
    /* saturate dlc if CanFd is not set */
    pItemHandle->Dlc = ((CanIdType == STANDARD_CAN || CanIdType == EXTENDED_CAN) && PduInfoPtr->SduLength > 8) ? 8 : (uint8)(PduInfoPtr->SduLength);
    /* copy pdu data bytes */
    for (Count = 0; Count < pItemHandle->Dlc; Count++)
    {
        pItemHandle->Data[Count] = *((PduInfoPtr->SduDataPtr) + Count);
    }
    /* in case the frame is longer than the pdu, copy unused bit pattern till the end of frame */
    if (FrameDlc > pItemHandle->Dlc)
    {
        while (Count < FrameDlc)
        {
            pItemHandle->Data[Count++] = UnusedBitPattern;
        }
        pItemHandle->Dlc = FrameDlc;
    }

    pItemHandle->Format = CanIf_ConvertMessageIdType(CanIdType);

    if (CanIdType == STANDARD_FD_CAN_BRS_ON || CanIdType == EXTENDED_FD_CAN_BRS_ON)
    {
        pItemHandle->Brs = DSCAN_MSG_BRS_ENABLED;
    }
    else if (CanIdType == STANDARD_FD_CAN_BRS_OFF || CanIdType == EXTENDED_FD_CAN_BRS_OFF)
    {
        pItemHandle->Brs = DSCAN_MSG_BRS_DISABLED;
    }

    pItemHandle->IsEnabled = DSCAN_MSG_STATE_ACTIVE;
    pItemHandle->Rtr = DSCAN_MSG_RTR_DISABLED;
}

static FUNC(Std_ReturnType, CANIF_CODE)CanIf_GetControllerLock
(
    VAR(uint8, AUTOMATIC)Controller,
    VAR(uint8, AUTOMATIC)RequestType
)
{
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    /* Check if the Controller is already locked */
    if ((g_CntrlFlags[Controller].ControllerFlags & RequestType) == 0)
    {
        /* Get MUTEX */
        SchM_Enter_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
        /* Get the Required lock on the Controller */
        g_CntrlFlags[Controller].ControllerFlags |= RequestType;
        /* Release MUTEX */
        SchM_Exit_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
    }

    else
    {
        /* Requested lock already exists for the Controller,
        Set Return Value to E_NOT_OK */
        CanIfRet = E_NOT_OK;

    }
    return CanIfRet;

}

static FUNC(void, CANIF_CODE)CanIf_ReleaseControllerLock
(
    VAR(uint8, AUTOMATIC)Controller,
    VAR(uint8, AUTOMATIC)LockRequest
)
{
    /* Get MUTEX */
    SchM_Enter_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
    /* Release the Requested Lock on the Controller */
    g_CntrlFlags[Controller].ControllerFlags &= ((uint8)~LockRequest);
    /* Release MUTEX */
    SchM_Exit_CanIf(CANIF_INSTANCE_ID, SCHM_CANIF_EXCLUSIVE_AREA0);
}

static FUNC(Std_ReturnType, CANIF_CODE)CanIf_CheckControllerLock(void)
{
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    VAR(uint8, AUTOMATIC)Count = 0;
    while (   (Count < CanIf_NumberOfCanHWUnits)
           && (CanIfRet == E_OK))
    {
        /* Check whether transmission/mode change in progress */
        if (   ((g_CntrlFlags[Count].ControllerFlags &
                CANIF_TRANSMIT_LOCK) != 0)
            || ((g_CntrlFlags[Count].ControllerFlags &
                CANIF_CONTROLLER_LOCK) != 0))
        {
            /* Mode change/transmission in progress for controller,
             Initialization not possible */
            CanIfRet = E_NOT_OK;

        }
        Count++;

    }
    return CanIfRet;
}

static FUNC(Std_ReturnType, CANIF_CODE)CanIf_IsControllerNotLocked
(
    VAR(uint8, AUTOMATIC)Controller
)
{
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_NOT_OK;

    if ((g_CntrlFlags[Controller].ControllerFlags & CANIF_CONTROLLER_LOCK) == 0)
    {
        /* The Controller is not locked,Set return value as E_OK */
        CanIfRet = E_OK;
    }
    return CanIfRet;
}

static FUNC(Std_ReturnType, CANIF_CODE)CanIf_PerformDLCCheck(
    VAR(PduIdType, AUTOMATIC)CanRxPduId,
    VAR(uint8, AUTOMATIC)CanDlc,
    P2VAR(uint8, AUTOMATIC, AUTOMATIC)CanRxPduDLC
)
{
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_OK;
    /* If DLC of received message is less than configured DLC */
    if (CanDlc < gp_CanIfRxLPduConfig[CanRxPduId].CanIfCanRxPduDlc)
    {
        /* Set return value as E_NOT_OK */
        CanIfRet = E_NOT_OK;
    }
    else
    {
        /* CANIF296:If DLC is configured as zero */
        if (0 == gp_CanIfRxLPduConfig[CanRxPduId].CanIfCanRxPduDlc)
        {
            /* Assign the DLC of the received message */
            *CanRxPduDLC = CanDlc;
        }
        else
        {
            /* Assign the configured DLC to the pointer */
            *CanRxPduDLC = gp_CanIfRxLPduConfig[CanRxPduId].CanIfCanRxPduDlc;
        }
    }
    return CanIfRet;
}

static FUNC(void, CANIF_CODE)CanIf_ProcessRxData
(
    VAR(PduIdType, AUTOMATIC)CanRxPduId,
    VAR(uint8, AUTOMATIC)CanDlc,
    P2CONST(uint8, AUTOMATIC, CANIF_APPL_CONST)CanSduPtr,
    VAR(uint8, AUTOMATIC)Controller,
    P2VAR(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr
)
{
    /* variable for holding return value */
    VAR(Std_ReturnType, AUTOMATIC) CanIfRet = E_OK;

    VAR(uint8, AUTOMATIC) CanRxPduDLC;

    /* if DLC check is enabled */
    if (CanIf_DlcCheck == STD_ON)
    {
        /* Call to perform DLC check and to get
        the number of bytes to be copied from received message */
        CanIfRet = CanIf_PerformDLCCheck(CanRxPduId, CanDlc, &CanRxPduDLC);
    }
    else
    {
        /* The number of bytes to be copied is the DLC of the received message */
        CanRxPduDLC = CanDlc;
    }
    /* if return value is OK */
    if (E_OK == CanIfRet)
    {
        if (CanIf_ReadRxPduDataApi == STD_ON)
        {
            /* Call to buffer Rx message */
            CanIf_BufferRxMessage(CanRxPduId, CanRxPduDLC, CanSduPtr);
        }

        if (CanIf_ReadRxPduNotifyStatusApi == STD_ON)
        {
            /* if ReadRxPduNotifyStatus is enabled for the RxPdu */
            if (gp_CanIfRxLPduConfig[CanRxPduId].CanIfReadRxPduNotifyStatus != FALSE)
            {
                gp_CanIfConfig->gp_ReadRxPduNotifyStatus[CanRxPduId] = 1;
            }
        }
        /* CANIF286 */
        if (CanIf_PublicWakeupCheckValidationSupport == STD_ON)
        {
            g_CntrlFlags[Controller].RxIndicationStatus = (uint8)CANIF_TX_RX_NOTIFICATION;
        }
        /* Report to upper layer about reception of message */
        CanIf_ReportRxIndication((PduIdType)CanRxPduId, CanRxPduDLC, CanSduPtr, PduInfoPtr);
    }

}

static FUNC(void, CANIF_CODE)CanIf_BufferRxMessage
(
    VAR(PduIdType, AUTOMATIC)CanRxPduId,
    VAR(uint8, AUTOMATIC)CanDlc,
    P2CONST(uint8, AUTOMATIC, CANIF_APPL_CONST)CanSduPtr
)
{
    /* variable for holding the loop index */
    VAR(uint8, AUTOMATIC) LoopInd;

    VAR(uint32, AUTOMATIC) BufferIndex;

    /* if ReadRxPduData is enabled for the RxPdu */
    if (gp_CanIfRxLPduConfig[CanRxPduId].CanIfReadRxPduData != FALSE)
    {
        /* Get the configured start index of the RxPdu in buffer */
        BufferIndex = gp_CanIfRxLPduConfig[CanRxPduId].CanIfRxPduDataBufferInd;

        /* CanIfRxPduDataBuffer : The global receive buffer */
        /* DLC is stored as first element of the array */

        CanIfRxPduDataBuffer[BufferIndex] = CanDlc;

        /* increment buffer index */
        BufferIndex++;

        /* Store the received data in the Rx Buffer */
        for (LoopInd = 0; LoopInd < CanDlc; LoopInd++)
        {
            CanIfRxPduDataBuffer[BufferIndex + LoopInd] = CanSduPtr[LoopInd];

        }
    }


}


FUNC(void, CANIF_CODE)CanIf_ReportRxIndication
(
    VAR(PduIdType, AUTOMATIC) RxPduId,
    VAR(uint8, AUTOMATIC) CanDlc,
    P2CONST(uint8, AUTOMATIC, AUTOMATIC) CanSduPtr,
    P2VAR(PduInfoType, AUTOMATIC, AUTOMATIC)PduInfoPtr
)
{
    VAR(PduIdType, AUTOMATIC)GlobalPduId;
    GlobalPduId = gp_CanIfRxLPduConfig[RxPduId].PduIdRef;
    PduInfoPtr->SduDataPtr = (uint8*)CanSduPtr;
    PduInfoPtr->SduLength = CanDlc;
    /* By CANIF197 the function pointer can be NULL */
    if (gp_CanIfRxLPduConfig[RxPduId].CanIfUserRxIndication != NULL_PTR)
    {
        gp_CanIfRxLPduConfig[RxPduId].CanIfUserRxIndication(GlobalPduId, PduInfoPtr);
    }

}


static FUNC(Std_ReturnType, CANIF_CODE) CanIf_BinarySearchRxPduId
(
    VAR(uint32, AUTOMATIC) CanId,
    P2VAR(PduIdType, AUTOMATIC, AUTOMATIC) CanRxPduId,
    VAR(uint8, AUTOMATIC) HrhID,
    VAR(CanIfCanIdType, AUTOMATIC) IdType
)
{
    /* Initialize return value to not ok */
    VAR(Std_ReturnType, AUTOMATIC)CanIfRet = E_NOT_OK;
    /* Variables for holding the index in binary search */
    VAR(sint32, AUTOMATIC) MinInd = 0;
    VAR(sint32, AUTOMATIC) MaxInd;
    VAR(sint32, AUTOMATIC) MidInd;
    /* variable for holding the RxPduId */
    VAR(PduIdType, AUTOMATIC) RxPduId;
    CanIfIndexRange indexRange;
    P2VAR(CanIfIndexMapping, AUTOMATIC, AUTOMATIC) indexMapping = gp_CanIfConfig->gp_CanIfIndexMapping;
    CanIfIndexRange(*indices)[6] = indexMapping->Indices;

    if (HrhID >= indexMapping->Count)
        return E_NOT_OK;

    indexRange = indices[HrhID][(int)IdType];
    MinInd = indexRange.MinIndex;
    MaxInd = indexRange.MaxIndex;
    if (MinInd < 0 || MaxInd < 0)
        return E_NOT_OK;

    /* while end of searching for RxPdus is not reached */
    while ((MinInd < MaxInd) && (E_OK != CanIfRet))
    {
        /* Get the RxPduId in the middle of RxPduList */
        MidInd = MinInd + ((MaxInd - MinInd) / 2);
        RxPduId = (PduIdType)MidInd;
        /* if received CanId is less than the corresponding RxPdu's CanId*/
        /*If range of CanID's are expected per one PduId*/
        if (gp_CanIfRxLPduConfig[RxPduId].RxPduCanIdRange != NULL_PTR)
        {
            if (CanId < (gp_CanIfRxLPduConfig[RxPduId].RxPduCanIdRange->CanIfRxPduCanIdRangeLowerCanId))
            {
                /* update max index to (mid index) */
                MaxInd = MidInd;
            }
            /* if received CanId is greater than the corresponding RxPdu's CanId*/
            else if (CanId > (gp_CanIfRxLPduConfig[RxPduId].RxPduCanIdRange->CanIfRxPduCanIdRangeUpperCanId))
            {
                /* update min index to (mid index + 1) */
                MinInd = MidInd + 1;
            }
            else if ((CanId >= (gp_CanIfRxLPduConfig[RxPduId].RxPduCanIdRange->CanIfRxPduCanIdRangeLowerCanId))
                && (CanId <= (gp_CanIfRxLPduConfig[RxPduId].RxPduCanIdRange->CanIfRxPduCanIdRangeUpperCanId)))
            {
                *CanRxPduId = RxPduId;
                CanIfRet = E_OK;
            }

        }
        else
        {
            /*If only one CanID is expected per PduId */
            if (CanId < gp_CanIfRxLPduConfig[RxPduId].CanIfCanRxPduCanId)
            {
                /* update max index to (mid index) */
                MaxInd = MidInd;
            }
            /* if received CanId is greater than the corresponding RxPdu's CanId*/
            else if (CanId > gp_CanIfRxLPduConfig[RxPduId].CanIfCanRxPduCanId)
            {
                /* update min index to (mid index + 1) */
                MinInd = MidInd + 1;
            }
            else
            {
                *CanRxPduId = RxPduId;
                CanIfRet = E_OK;
            }

        }

    }

    /* if RxPduId corresponding to CanId was not found until
    (MaxInd = MinInd) */
    if (E_OK != CanIfRet)
    {
        /* If the CanId of the RxPduId corresponding to MinInd
        (which is now equal to MaxInd) is equal to required CanId */
        RxPduId = (PduIdType)MinInd;

        if (gp_CanIfRxLPduConfig[RxPduId].RxPduCanIdRange != NULL_PTR)
        {
            if ((CanId >= (gp_CanIfRxLPduConfig[RxPduId].RxPduCanIdRange->CanIfRxPduCanIdRangeLowerCanId))
                && (CanId <= (gp_CanIfRxLPduConfig[RxPduId].RxPduCanIdRange->CanIfRxPduCanIdRangeUpperCanId)))
            {
                *CanRxPduId = RxPduId;
                CanIfRet = E_OK;

            }
        }
        else
        {
            if (CanId == gp_CanIfRxLPduConfig[RxPduId].CanIfCanRxPduCanId)
            {

                /* Update the RxPduId */
                *CanRxPduId = RxPduId;
                CanIfRet = E_OK;
            }
        }
    }
    return CanIfRet;
}
/* Create the Message handles and connect the Tx confirmation notification functions.
   The Bus manager should ensure that the relation between Tx LPDU and Hth is one to one */
static FUNC(void, CANIF_CODE)CanIf_CreateTxObjects(uint8 Controller)
{
    VAR(uint32, AUTOMATIC)Count;
    VAR(uint32, AUTOMATIC)HthId;
    VAR(uint8, AUTOMATIC)ControllerId;
    DsTCanMsg MessageHandle;
    DsTCanCh ChannelHandle;

    for (Count = 0; Count < gp_CanIfInitConfig->CanIfNumberOfCanTxPduIds; Count++)
    {

        HthId = gp_CanIfTxLPduConfig[Count].CanIfCanTxPduHthRef;
        ControllerId = gp_CanIfHthConfig[HthId].CanIfCanControllerIdRef;
        /* This TxLPDU is for the controller which is initialized */
        if (ControllerId == Controller)
        {
            ChannelHandle = gp_CanIfControllerConfig[Controller].CanIfControllerIdRef;

            /* Create transmit queue message object */
            DsCanMsg_createTxQueue(&MessageHandle, ChannelHandle);

            /* Modify queue size, by design it is set to the shortest possible */
            DsCanMsg_setQueueSize(MessageHandle, gp_CanIfTxLPduConfig[Count].QueueSize);
            /* Apply modifications */
            DsCanMsg_apply(MessageHandle);

            /* Enable message */
            DsCanMsg_start(MessageHandle);

            /* Register the call back function */
            DsCanMsg_connectEvent(MessageHandle, CanIf_TxConfirmation, &gp_CanIfTxLPduConfig[Count]);

            /* Update the message handle into the configuration structure */
            gp_CanIfHthConfig[HthId].CanIfHthIdSymRef = MessageHandle;
        }
    }
}

static FUNC(void, CANIF_CODE)CanIf_CreateRxObjects(uint8 Controller)
{
    VAR(uint8, AUTOMATIC)Count = 0;
    VAR(uint8, AUTOMATIC)ControllerId;
    DsTCanMsg MessageHandle;
    DsTCanCh ChannelHandle;

    for (Count = 0; Count < CanIf_MaxNumberOfHrh; Count++)
    {
        ControllerId = gp_CanIfHrhConfig[Count].CanIfCanControllerHrhIdRef;
        /* This RxLPDU is for the controller which is initialized */
        if (ControllerId == Controller)
        {
            ChannelHandle = gp_CanIfControllerConfig[Controller].CanIfControllerIdRef;

            /* Create Receive message object */
            DsCanMsg_createRxMonitor(&MessageHandle, ChannelHandle);

            /*  Modify queue size */
            DsCanMsg_setQueueSize(MessageHandle, 100);
            /* Apply modifications */
            DsCanMsg_apply(MessageHandle);

            /* Enable queue */
            DsCanMsg_start(MessageHandle);

            /* Setup data necessary in callback implementation */
            gp_CanIfConfig->gp_RxMetaData[Count].CanIfReceivedHrh = &gp_CanIfHrhConfig[Count];
            gp_CanIfConfig->gp_RxMetaData[Count].IsInterruptContext = FALSE;

            /* Register the call back function */
            DsCanMsg_connectEvent(MessageHandle, gp_CanIfConfig->DispatchConfig->CanIfDispatchRxIndication, &gp_CanIfConfig->gp_RxMetaData[Count]);

            /* Update the message handle into the configuration structure */
            gp_CanIfHrhConfig[Count].CanIfHrhIdSymRef = MessageHandle;

        }
    }
}

static FUNC(void, CANIF_CODE)CanIf_CreateRxIntObjects(uint8 Controller)
{
    VAR(uint8, AUTOMATIC)ControllerIndex = 0;
    VAR(PduIdType, AUTOMATIC)RxMsgIdx = 0;
    VAR(uint32, AUTOMATIC)MetaDataIndex = 0;
    VAR(uint8, AUTOMATIC)ControllerId;
    DsTCanMsg MessageHandle;
    DsTCanCh ChannelHandle;


    /*Initialize RX Interrupts in DsCan*/
    for (ControllerIndex = 0; ControllerIndex < CanIf_MaxNumberOfHrh; ControllerIndex++)
    {
        ControllerId = gp_CanIfHrhConfig[ControllerIndex].CanIfCanControllerHrhIdRef;
        /* This RxLPDU is for the controller which is initialized */
        if (ControllerId == Controller)
        {
            ChannelHandle = gp_CanIfControllerConfig[Controller].CanIfControllerIdRef;

            for (RxMsgIdx = 0; RxMsgIdx < (gp_CanIfInitConfig->CanIfNumberOfCanRxPduIds); RxMsgIdx++)
            {
                /* Only process interrupt PDUs */
                if (gp_CanIfRxLPduConfig[RxMsgIdx].CanIf_RxInterruptAccessPoint == NULL_PTR)
                    continue;

                /* Create Receive message object */
                DsCanMsg_createRx(&MessageHandle,
                                  ChannelHandle,
                                  gp_CanIfRxLPduConfig[RxMsgIdx].CanIfCanRxPduCanId,
                                  CanIf_ConvertMessageIdType(gp_CanIfRxLPduConfig[RxMsgIdx].CanIfRxPduIdCanIdType));

                /* Setup data necessary in callback implementation */
                gp_CanIfConfig->gp_RxInterruptMetaData[MetaDataIndex].CanIfReceivedHrh = &gp_CanIfHrhConfig[ControllerIndex];
                gp_CanIfConfig->gp_RxInterruptMetaData[MetaDataIndex].IsInterruptContext = TRUE;
                gp_CanIfConfig->gp_RxInterruptMetaData[MetaDataIndex].CanRxPduId = RxMsgIdx;


                DsCanCh_stop(ChannelHandle);

                /* Register the callback function */
                DsCanMsg_connectEventFilter(MessageHandle,
                                            CanIf_RxInterruptIndication,
                                            &gp_CanIfConfig->gp_RxInterruptMetaData[MetaDataIndex]);

                /* Apply modifications */
                DsCanMsg_apply(MessageHandle);

                DsCanCh_start(ChannelHandle);

                /* Enable RX Object */
                DsCanMsg_start(MessageHandle);

                MetaDataIndex++;
            }
        }
    }
}


/** <!------------------------------------------------------------------------->
*   This function discards all messages
*
*   @description This function discards all old messages on (re)start application
*
*   @parameters
*
*   @return void
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
FUNC(void, CANIF_CODE) CanIf_DiscardMessages(void)
{
    VAR(uint8, AUTOMATIC)Count;

    for (Count = 0; Count < CanIf_MaxNumberOfHrh; Count++)
    {
        if (gp_CanIfHrhConfig[Count].CanIfHrhIdSymRef != NULL_PTR)
        {
            DsCanMsg_stop(gp_CanIfHrhConfig[Count].CanIfHrhIdSymRef);
            DsCanMsg_start(gp_CanIfHrhConfig[Count].CanIfHrhIdSymRef);
        }
    }
}

static FUNC(DsECanMsg_Format, CANIF_CODE) CanIf_ConvertMessageIdType(CanIfCanIdType CanIdType)
{
    switch (CanIdType)
    {
    case EXTENDED_CAN:
        return DSCAN_MSG_FORMAT_EXT;
    case STANDARD_CAN:
        return DSCAN_MSG_FORMAT_STD;
    case EXTENDED_FD_CAN_BRS_OFF:
    case EXTENDED_FD_CAN_BRS_ON:
        return DSCAN_MSG_FORMAT_FD_EXT;
    case STANDARD_FD_CAN_BRS_OFF:
    case STANDARD_FD_CAN_BRS_ON:
        return DSCAN_MSG_FORMAT_FD_STD;
    default:
        return DSCAN_MSG_FORMAT_STD;
        break;
    }
}

static FUNC(void, CANIF_CODE) CanIf_ConvertMessageIdTypeToCanIfIdType(const DsSCanMsg_Item* MsgItem, CanIfCanIdType* CanRxPduId)
{
    /* Map Message format and BRS flag to CanIf configurations Message format */
    switch (MsgItem->Format)
    {
    case DSCAN_MSG_FORMAT_STD:
        *CanRxPduId = STANDARD_CAN;
        break;
    case DSCAN_MSG_FORMAT_EXT:
        *CanRxPduId = EXTENDED_CAN;
        break;
    case DSCAN_MSG_FORMAT_FD_STD:
        if (MsgItem->Brs == DSCAN_MSG_BRS_ENABLED)
            *CanRxPduId = STANDARD_FD_CAN_BRS_ON;
        else
            *CanRxPduId = STANDARD_FD_CAN_BRS_OFF;
        break;
    case DSCAN_MSG_FORMAT_FD_EXT:
        if (MsgItem->Brs == DSCAN_MSG_BRS_ENABLED)
            *CanRxPduId = EXTENDED_FD_CAN_BRS_ON;
        else
            *CanRxPduId = EXTENDED_FD_CAN_BRS_OFF;
        break;
    default:
        /* For unexpected values handle it as STANDARD_CAN */
        *CanRxPduId = STANDARD_CAN;
        break;
    }
}

/** <!------------------------------------------------------------------------->
*   This function decrements the StateManager credit counter
*
*   @description This function decrements the StateManager credit counter if a valid
*                index is provided
*
*   @parameters
*
*   @return void
*
*   @note
*
*   @messages
*
*
*<!-------------------------------------------------------------------------->*/
static FUNC(void, CANIF_CODE) CanIf_DecrementCreditCounter(sint32 creditCounterStateIndex)
{
	if (creditCounterStateIndex >= 0)
	{
		StateManager_DecrementCounterState(creditCounterStateIndex);
	}
}