/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Cfg.c
*
*  @creationDate 09 March 2022 12:20:13
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
VAR(uint8, AUTOMATIC) CanIf_MaxNumberOfHrh = 0;
VAR(uint8, AUTOMATIC) CanIf_NumberOfCanHWUnits = 1;

VAR(CanIfControllerFlags, AUTOMATIC) g_CntrlFlags[1] = {0}; /* For C98 compatibility this array has length 1 */
static VAR(uint8, AUTOMATIC) ga_CanIfReadRxPduNotifyStatus[1] = {0}; /* For C98 compatibility this array has length 1 */
static VAR(uint8, AUTOMATIC) ga_CanIfReadTxPduNotifyStatus[1] = {0}; /* For C98 compatibility this array has length 1 */
STATIC VAR(uint8, AUTOMATIC) ga_CanIfRxPduDataBuffer[1] = {0}; /* For C98 compatibility this array has length 1 */
STATIC VAR(uint32, AUTOMATIC) ga_CanIfDynamicTxPduCanIdArray[1] = {0}; /* For C98 compatibility this array has length 1 */
STATIC VAR(CanIf_RxIndicationMetaDataType, AUTOMATIC) ga_CanIfRxMetaData[1] = {0}; /* For C98 compatibility this array has length 1 */
STATIC VAR(CanIf_RxIndicationMetaDataType, AUTOMATIC) ga_CanIfRxInterruptMetaData[1] = {0}; /* For C98 compatibility this array has length 1 */

static CanIfIndexRange ga_CanIfIndexRanges[][6] = {
    0 /* For C98 compatibility this array has length 1 */
};
static CanIfIndexMapping ga_CanIfIndexMapping = {0, ga_CanIfIndexRanges};

static CanIfTxPduConfig TxPduConfig[] = {
    /* CR-ADAS-Private__V0.4 */
    {
        CanIf_CRminusADASminusPrivate__V0_4_ADAS_AD1_FrameTrig, /* CanIf Pdu Id */
        1136, /* 0x00000470 CAN Id */
        CANIF_DLC_STANDARD, /* DLC TYPE */
        16, /* DLC */
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
};

static CanIfHthConfig HthConfig[] = {
    /* CR-ADAS-Private__V0.4 */
    {
            FULL_CAN, /* CanIfHthType */
            0,        /* CanIfCanControllerIdRef */
            0         /* CanIfHthIdSymRef */
    },
};

static VAR(CanIfRxPduConfig, AUTOMATIC) RxPduConfig[] =
{
    0 /* For C98 compatibility this array has length 1 */
};

UNUSED static VAR(CanIfHrhRangeConfig, AUTOMATIC) HrhRangeConfig0[1] = { 0 };  /* For C98 compatibility this array has length 1 */

static VAR(CanIfHrhConfig, AUTOMATIC) HrhConfig[] = {
    0 /* For C98 compatibility this array has length 1 */
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
            0, /* Number of CAN RX PDU IDs */
            1, /* Number of CAN TX PDU IDs */
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
            NULL_PTR      /* CanIfDispatchRxIndication */
    }
};

static CanIfControllerConfig ControllerConfig[CHANNEL_ADDRESS_COUNT] =
{
     {
            FALSE, /* CanIfWakeupSupport */
            0,     /* CanIfControllerIdRef */
            0,     /* CanIfDriverNameRef */
            FALSE, /* CanIfRxObjectNeeded */
            1,     /* CanIf_ControllerEnabledState */
            8,     /* Index in StateManager to handle ComControllerEnable state */
            1,    /* Index in StateManager for used credit counter */
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
            9,
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
    StateManager_SetState_Mutex(8,controllerState);
 
        
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
