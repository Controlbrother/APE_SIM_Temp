/** <!------------------------------------------------------------------------->
*
*  @file Com_generated.c 
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Definition of AUTOSAR COM header.
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

/*------------------------------------------------------------------------------------------------*\
  INCLUDES 
\*------------------------------------------------------------------------------------------------*/
#include "Com.h"
#include "Com_Cbk.h"
#include "EncodeDecode.h"
#include "PduR_Com.h"
#include <float.h>
#include <limits.h>
#include <string.h>
#include "StateManager_generated.h"
#include "ADAS_CAN_232434_external.h"
#include "Rte_generated.h"
#if (PDUR_J1939TP_SUPPORT == STD_ON)
#include "Feature_Types.h"
#endif
#include "Feature_Com.h"




/* Profiler */
#ifdef COM_ENABLE_PROFILING
#ifndef COM_MAINFUNCTIONTX_ENABLE_PROFILING
#define COM_MAINFUNCTIONTX_ENABLE_PROFILING
#endif
#ifndef COM_TRIGGERIPDU_ENABLE_PROFILING
#define COM_TRIGGERIPDU_ENABLE_PROFILING
#endif
#ifndef COM_TRIGGERIPDUSEND_ENABLE_PROFILING
#define COM_TRIGGERIPDUSEND_ENABLE_PROFILING
#endif
#endif

#if defined(COM_MAINFUNCTIONTX_ENABLE_PROFILING) || defined(COM_TRIGGERIPDU_ENABLE_PROFILING) || defined(COM_TRIGGERIPDUSEND_ENABLE_PROFILING)
#include <DsApplicationInterface.h>
#endif

#ifdef COM_MAINFUNCTIONTX_ENABLE_PROFILING
static DsTProfilerSource Com_MainFunctionTx_PROFILER_SRC;
#endif
#ifdef COM_TRIGGERIPDU_ENABLE_PROFILING
static DsTProfilerSource Com_TriggerIPDU_PROFILER_SRC;
#endif
#ifdef COM_TRIGGERIPDUSEND_ENABLE_PROFILING
static DsTProfilerSource Com_TriggerIPDUSend_PROFILER_SRC;
#endif

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  VARIABLE DEFINITIONS
\*------------------------------------------------------------------------------------------------*/
/* Definition of the TX and RX I-PDUs and ISignals that are available in the COM module. */
 
static uint8 Com_Frame_RX_Com_SecOC_SyncMsg_209577_119641_232434 [16];
static PduInfoType Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434;
uint16 Com_RX_Inst_1121_resetCnt_208682_119641_232434_sgn_val;
uint32 Com_RX_Inst_1121_tripCnt_208683_119641_232434_sgn_val;



/* The communication status of the COM module. */
static Com_StatusType Com_Status = COM_UNINIT;




/*------------------------------------------------------------------------------------------------*\
  PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*------------------------------------------------------------------------------------------------*/


 


/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_Init
 *** 
 *** DESCRIPTION:
 ***     Initializes internal and external interfaces and variables of the AUTOSAR COM layer for
 ***     further processing. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     Type                    Name    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     const Com_ConfigType *  config  Pointer to the COM configuration data.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_Init(const Com_ConfigType* config)
{
    INTENDED_UNREFERENCED_PARAMETER(config);

#ifdef COM_MAINFUNCTIONTX_ENABLE_PROFILING
    Com_MainFunctionTx_PROFILER_SRC = dsProfilerCreateSource(MACRO_NAME_TOSTR(ECU_ID)"_Com_MainFunctionTx");
#endif
#ifdef COM_TRIGGERIPDU_ENABLE_PROFILING
    Com_TriggerIPDU_PROFILER_SRC = dsProfilerCreateSource(MACRO_NAME_TOSTR(ECU_ID)"_Com_TriggerIPDU");
#endif
#ifdef COM_TRIGGERIPDUSEND_ENABLE_PROFILING
    Com_TriggerIPDUSend_PROFILER_SRC = dsProfilerCreateSource(MACRO_NAME_TOSTR(ECU_ID)"_Com_TriggerIPDUSend");
#endif

    /* Initialization of the TX I-PDU data structs */

    /* Initialization of the RX I-PDU data structs */
    Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434.SduDataPtr = Com_Frame_RX_Com_SecOC_SyncMsg_209577_119641_232434;
    Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434.SduLength  = 16;
    Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434.MetaDataPtr = NULL_PTR;


    /* Register callback for ComControllerEnable state */



    Com_Status = COM_INIT;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_DeInit
 *** 
 *** DESCRIPTION:
 ***     This service stops the inter-ECU communication. All started I-PDU groups are stopped and
 ***     have to be started again, if needed, after Com_Init is called.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_DeInit(void)
{
    Com_Status = COM_UNINIT;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_VariableInitialize
 *** 
 *** DESCRIPTION:
 ***    This function is called before the application starts and may be used to extend the
 ***    initialization phase. Depending on InitialValueUsage parameter, it is called either in OnInit
 ***    or OnStart application phase.
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_VariableInitialize(void)
{
    /* Initialization of the TX I-PDUs with unused bit pattern */
    /* Initialization of the TX signals and triggers */

    /* Initialization of the RX I-PDUs with unused bit pattern */
    memset(Com_Frame_RX_Com_SecOC_SyncMsg_209577_119641_232434, 0x00, sizeof(Com_Frame_RX_Com_SecOC_SyncMsg_209577_119641_232434));
    /* Initialization of the RX signals and triggers */
    Com_RX_Inst_1121_resetCnt_208682_119641_232434_sgn_val = (uint16) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1121_resetCnt_208682_119641_232434, 1);
    Com_RX_Inst_1121_tripCnt_208683_119641_232434_sgn_val = (uint32) 0;
    Rte_SetPhysicalValue(Com_X_Inst_1121_tripCnt_208683_119641_232434, 1);

}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_OnStart
 *** 
 *** DESCRIPTION:
 ***    This function is called before the application starts and may be used to extend the
 ***    initialization phase. It is called in OnStart application phase.
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_OnStart(void)
{

    /* Initial timing offset for cyclic Pdus */


}



/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerIPDUSend
 *** 
 *** DESCRIPTION:
 ***     Trigger the I-PDU with the specified ID for transmission.
 *** 
 *** PARAMETERS:
 ***     Type       Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType  ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
#ifdef COM_TRIGGERIPDUSEND_ENABLE_PROFILING
static inline Std_ReturnType Com_TriggerIPDUSend_PROFILED(PduIdType ComTxPduId);

Std_ReturnType Com_TriggerIPDUSend(PduIdType ComTxPduId)
{
    Std_ReturnType rval;

    dsProfilerWriteEvent (Com_TriggerIPDUSend_PROFILER_SRC, UserTimespanStart, 0, ComTxPduId);
    rval = Com_TriggerIPDUSend_PROFILED(ComTxPduId);
    dsProfilerWriteEvent (Com_TriggerIPDUSend_PROFILER_SRC, UserTimespanEnd, 0, 0);

    return rval;
}

static inline Std_ReturnType Com_TriggerIPDUSend_PROFILED(PduIdType ComTxPduId)
#else
Std_ReturnType Com_TriggerIPDUSend(PduIdType ComTxPduId)
#endif
{
    Std_ReturnType result = E_NOT_OK;
    if (Com_Status != COM_INIT)
    {
        return result;
    }
    switch (ComTxPduId)
    {
    }
    return E_NOT_OK;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerTransmit
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer when an AUTOSAR COM I-PDU must be transmitted.
 ***     In this function, AUTOSAR COM copies the contents of its I-PDU transmit buffer to the
 ***     L-PDU buffer specified by SduDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type           Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType      ComTxPduId  The I-PDU ID to be triggered for sending.
 ***     PduInfoType *  PduInfoPtr  Contains the length (SduLength) of the received I-PDU and a
 ***                                pointer to a buffer (SduDataPtr) containing the I-PDU.
 *** 
 *** RETURNS:
 ***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
Std_ReturnType Com_TriggerTransmit(PduIdType ComTxPduId, PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);
    
    switch (ComTxPduId)
    {
    }
    return E_NOT_OK;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerIPDU
 *** 
 *** DESCRIPTION:
 ***     This function is called by all IPDU triggers coming from the COM module.
 ***     The function routes the trigger command to the right trigger function depending on the used protocol.
 *** 
 *** PARAMETERS:
 ***     Type           Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType      ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
 ***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
#ifdef COM_TRIGGERIPDU_ENABLE_PROFILING
static inline Std_ReturnType Com_TriggerIPDU_PROFILED(PduIdType ComTxPduId);

Std_ReturnType Com_TriggerIPDU(PduIdType ComTxPduId)
{
    Std_ReturnType rval;

    dsProfilerWriteEvent(Com_TriggerIPDU_PROFILER_SRC, UserTimespanStart, 0, ComTxPduId);
    rval = Com_TriggerIPDU_PROFILED(ComTxPduId);
    dsProfilerWriteEvent(Com_TriggerIPDU_PROFILER_SRC, UserTimespanEnd, 0, 0);

    return rval;
}

static inline Std_ReturnType Com_TriggerIPDU_PROFILED(PduIdType ComTxPduId)
#else
Std_ReturnType Com_TriggerIPDU(PduIdType ComTxPduId)
#endif
{
    Std_ReturnType result = E_NOT_OK;
    if (Com_Status != COM_INIT || StateManager_GetState(5) != 1)
    {
        return result;
    }
    switch (ComTxPduId)
    {
    }
    return E_NOT_OK;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_GetStatus
 *** 
 *** DESCRIPTION:
 ***     Returns the status of the AUTOSAR COM module.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     Com_StatusType    The status code of the function call.
\**************************************************************************************************/
Com_StatusType Com_GetStatus(void)
{
    return Com_Status;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_SendSignal
 *** 
 *** DESCRIPTION:
 ***     Updates the signal object identified by SignalId with the signal referenced by the
 ***     SignalDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_SendSignal(Com_SignalIdType SignalId, const void * SignalDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalDataPtr);

    switch (SignalId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_SendSignalGroup
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the associated I-PDU.
 ***     Before this call, all group signals should be updated in the shadow buffer by calling
 ***     Com_UpdateShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_SendSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
    switch (SignalGroupId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_UpdateShadowSignal
 *** 
 *** DESCRIPTION:
 ***     Updates a group signal with the data referenced by SignalDataPtr. The group signal data is
 ***     updated in the shadow buffer, not in the I-PDU. To send out the shadow buffer,
 ***     Com_SendSignalGroup has to be called.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_UpdateShadowSignal(Com_SignalIdType SignalId, const void * SignalDataPtr)
{
    INTENDED_UNREFERENCED_PARAMETER(SignalDataPtr);
    switch (SignalId)
    {
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateSignal
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that it cannot
 ***     provide a valid value for the signal.
 *** 
 *** PARAMETERS:
 ***     Type              Name      Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_InvalidateSignal(Com_SignalIdType SignalId)
{
    switch (SignalId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateShadowSignal
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that it cannot
 ***     provide a valid value for the group signal, e.g., the sensor is faulty.
 *** 
 *** PARAMETERS:
 ***     Type              Name      Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_InvalidateShadowSignal(Com_SignalIdType SignalId)
{
    switch (SignalId)
    {
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateSignalGroup
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that cannot provide
 ***     a valid value for the signal group.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_InvalidateSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
    switch (SignalGroupId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}




/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_MainFunctionTx
 *** 
 *** DESCRIPTION:
 ***     This function processes the AUTOSAR COM transmission activities that are not directly
 ***     initiated by the calls from the RTE and PDU-R.
 *** 
 *** PARAMETERS:
 ***     sint64 period      Com main function period
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
#ifdef COM_MAINFUNCTIONTX_ENABLE_PROFILING
static inline void Com_MainFunctionTx_PROFILED(sint64 period); 

void Com_MainFunctionTx(sint64 period)
{
    dsProfilerWriteEvent (Com_MainFunctionTx_PROFILER_SRC, UserTimespanStart , 0, 0);
    Com_MainFunctionTx_PROFILED(period);
    dsProfilerWriteEvent (Com_MainFunctionTx_PROFILER_SRC, UserTimespanEnd , 0, 0);
}

static inline void Com_MainFunctionTx_PROFILED(sint64 period)
#else
void Com_MainFunctionTx(sint64 period)
#endif
{
    POSSIBLE_UNREFERENCED_PARAMETER(period);

    if (Com_Status != COM_INIT)
    {
       return;
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TxConfirmation
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer after the PDU has been transmitted on the
 ***     network.
 *** 
 *** PARAMETERS:
 ***     Type       Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType  ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_TxConfirmation(PduIdType ComTxPduId)
{
    INTENDED_UNREFERENCED_PARAMETER(ComTxPduId);
    if (Com_Status != COM_INIT)
    {
        return;
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveSignal
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the associated I-PDU.
 ***     Before this call, all group signals should be updated in the shadow buffer by calling
 ***     Com_UpdateShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_ReceiveSignal(Com_SignalIdType SignalId, void * SignalDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalDataPtr);

    switch (SignalId)
    {
        case Com_X_Inst_1121_resetCnt_208682_119641_232434:
        {
            *((uint16*) SignalDataPtr) = Com_RX_Inst_1121_resetCnt_208682_119641_232434_sgn_val;
            return E_OK;
        }
        case Com_X_Inst_1121_tripCnt_208683_119641_232434:
        {
            *((uint32*) SignalDataPtr) = Com_RX_Inst_1121_tripCnt_208683_119641_232434_sgn_val;
            return E_OK;
        }
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveSignalGroup
 *** 
 *** DESCRIPTION:
 ***     The function copies the received signal group from the I-PDU to the shadow buffer. After
 ***     this call, the group signals can be copied from the shadow buffer to the upper layer by
 ***     calling Com_ReceiveShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Com_ReceiveSignalGroup(Com_SignalGroupIdType SignalGroupId)
{
    switch (SignalGroupId)
    {
    }
    return COM_SERVICE_NOT_AVAILABLE;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveShadowSignal
 *** 
 *** DESCRIPTION:
 ***     The function updates the group signal which is referenced by SignalDataPtr with the data
 ***     in the shadow buffer. The data in the shadow buffer should be updated by calling the
 ***     Com_ReceiveSignalGroup service before calling Com_ReceiveShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_ReceiveShadowSignal(Com_SignalIdType SignalId, void * SignalDataPtr)
{
    INTENDED_UNREFERENCED_PARAMETER(SignalDataPtr);
    INTENDED_UNREFERENCED_PARAMETER(SignalId);
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_MainFunctionRx
 *** 
 *** DESCRIPTION:
 ***     This function performs the AUTOSAR COM receive processes that are not directly initiated
 ***     by the calls from the RTE and PDU-R.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_MainFunctionRx(void)
{
    if (Com_Status != COM_INIT)
    {
        return;
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_RxIndication
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer after an I-PDU has been received.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            ComRxPduId  ID of AUTOSAR COM I-PDU that has been received.
 ***                                      Identifies the data that has been received.
 ***     const PduInfoType *  PduInfoPtr  Contains the length (SduLength) of the received I-PDU and
 ***                                      a pointer to a buffer (SduDataPtr) containing the I-PDU.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#elif _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4189 ) // initialized, but unreferenced variable (multiplexed/container variables)
#pragma warning( disable : 4101 ) // unreferenced variable (multiplexed/container variables)
#endif

void Com_RxIndication(PduIdType ComRxPduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    if (Com_Status != COM_INIT)
    {
        return;
    }
	switch (ComRxPduId)
	{
	case Com_SecOC_SyncMsg_209577_119641_232434:
	{
	uint32 copyLength = PduInfoPtr->SduLength < Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434.SduLength ? PduInfoPtr->SduLength : Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434.SduLength;
	memcpy(Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434.SduDataPtr, PduInfoPtr->SduDataPtr, copyLength);
	/* call to PDU Features on RxIndication */
	Feature_ComReworkPduRec(Feature_SecOC_SyncMsg_209577_119641_232434_RX, PduInfoPtr);
	/* Scalar signal: resetCnt */
	if (copyLength >= 5)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434.SduDataPtr;
	        uint16 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 2; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[3 + copyCounter];
	        *((uint16*)(&Com_RX_Inst_1121_resetCnt_208682_119641_232434_sgn_val)) = (uint16)((INT16_FROM_BE(tempResult) >> 0) & (uint16)0xFFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1121_resetCnt_208682_119641_232434, 0);
	/* Scalar signal: tripCnt */
	if (copyLength >= 3)
	{
	    {
	        int copyCounter;
	        uint8* destData = (uint8*)Com_Pdu_RX_Com_SecOC_SyncMsg_209577_119641_232434.SduDataPtr;
	        uint32 tempResult = 0;
	        for(copyCounter = 0; copyCounter < 3; copyCounter++)
	            ((uint8*)&tempResult)[copyCounter] = destData[0 + copyCounter];
	        *((uint32*)(&Com_RX_Inst_1121_tripCnt_208683_119641_232434_sgn_val)) = (uint32)(((INT32_FROM_BE(tempResult << 8)) >> 0) & (uint32)0xFFFFFF);
	    }
	}
	
	Rte_SetPhysicalValue(Com_X_Inst_1121_tripCnt_208683_119641_232434, 0);
	}
	break;
	}
	
}
#ifdef __GNUC__
#pragma GCC diagnostic pop
#elif _MSC_VER
#pragma warning( pop )
#endif

#if (PDUR_J1939TP_SUPPORT == STD_ON)
/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_StartOfReception
 *** 
 *** DESCRIPTION:
 ***     This function is called at the start of receiving an N-SDU. The N-SDU might be fragmented into 
 ***     multiple N-PDUs (FF with one or more following CFs) or might consist of a single N-PDU (SF).
 ***     The service shall provide the currently available maximum buffer size when invoked with TpSduLength equal to 0.
 *** 
 *** PARAMETERS:
 ***     Type               Name          Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType          id            Identification of the I-PDU.
 ***     const PduInfoType* info          Pointer to a PduInfoType structure containing the payload data (without protocol information) 
 ***                                      and payload length of the first frame or single frame of a transport protocol I-PDU reception, 
 ***                                      and the MetaData related to this PDU.
 ***                                      If neither first/single frame data nor MetaData are available, this parameter is set to NULL_PTR.
 ***     PduLengthType      TpSduLength   Total length of the N-SDU to be received.
 ***     PduLengthType*     bufferSizePtr Available receive buffer in the receiving module.
 ***                                      This parameter will be used to compute the Block Size (BS) in the transport protocol module.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Connection has been accepted. bufferSizePtr indicates the available receive buffer; reception is continued.
 ***                                   If no buffer of the requested size is available, a receive buffer size of 0 shall be indicated by bufferSizePtr.
 ***                        BUFREQ_E_NOT_OK: Connection has been rejected; reception is aborted. bufferSizePtr remains unchanged.
 ***                        BUFREQ_E_OVFL: No buffer of the required length can be provided; reception is aborted. bufferSizePtr remains unchanged.
\**************************************************************************************************/
BufReq_ReturnType Com_StartOfReception(PduIdType id, const PduInfoType* info, PduLengthType TpSduLength, PduLengthType* bufferSizePtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(info);
    POSSIBLE_UNREFERENCED_PARAMETER(TpSduLength);
    POSSIBLE_UNREFERENCED_PARAMETER(bufferSizePtr);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_START_OF_RECEPTION,
                         COM_E_UNINIT);
#endif
        return BUFREQ_E_NOT_OK;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_START_OF_RECEPTION,
                             COM_E_PDU_ID_INVALID);
#endif
            return BUFREQ_E_NOT_OK;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TpRxIndication
 *** 
 *** DESCRIPTION:
 ***     Called after an I-PDU has been received via the TP API, the result indicates whether the transmission was successful or not.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id          Identification of the received I-PDU.
 ***     Std_ReturnType       result      Result of the reception.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_TpRxIndication(PduIdType id, Std_ReturnType result)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(result);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_TP_RX_INDICATION,
                         COM_E_UNINIT);
#endif
        return;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_TP_RX_INDICATION,
                             COM_E_PDU_ID_INVALID);
#endif
            break;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TpTxConfirmation
 *** 
 *** DESCRIPTION:
 ***     This function is called after the I-PDU has been transmitted on its network, the result indicates whether the transmission was successful or not.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id          Identification of the transmitted I-PDU.
 ***     Std_ReturnType       result      Result of the transmission of the I-PDU.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Com_TpTxConfirmation(PduIdType id, Std_ReturnType result)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(result);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_TP_TX_CONFIRMATION,
                         COM_E_UNINIT);
#endif
        return;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_TP_TX_CONFIRMATION,
                             COM_E_PDU_ID_INVALID);
#endif
            break;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_CopyRxData
 *** 
 *** DESCRIPTION:
 ***     This function is called to provide the received data of an I-PDU segment (N-PDU) to the upper layer.
 ***     Each call to this function provides the next part of the I-PDU data.
 ***     The size of the remaining buffer is written to the position indicated by bufferSizePtr.
 *** 
 *** PARAMETERS:
 ***     Type               Name          Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType          id            Identification of the received I-PDU.
 ***     const PduInfoType* info          Provides the source buffer (SduDataPtr) and the number of bytes to be copied (SduLength).
 ***                                      An SduLength of 0 can be used to query the current amount of available buffer in the upper layer module.
 ***                                      In this case, the SduDataPtr may be a NULL_PTR.
 ***     PduLengthType*     bufferSizePtr Available receive buffer after data has been copied.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Data copied successfully.
 ***                        BUFREQ_E_NOT_OK: Data was not copied because an error occurred.
\**************************************************************************************************/
BufReq_ReturnType Com_CopyRxData(PduIdType id, const PduInfoType* info, PduLengthType* bufferSizePtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(info);
    POSSIBLE_UNREFERENCED_PARAMETER(bufferSizePtr);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_COPY_RX_DATA,
                         COM_E_UNINIT);
#endif
        return BUFREQ_E_NOT_OK;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_COPY_RX_DATA,
                             COM_E_PDU_ID_INVALID);
#endif
            return BUFREQ_E_NOT_OK;
        }
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_CopyTxData
 *** 
 *** DESCRIPTION:
 ***     This function is called to acquire the transmit data of an I-PDU segment (N-PDU).
 ***     Each call to this function provides the next part of the I-PDU data unless retry->TpDataState is TP_DATARETRY.
 ***     In this case the function restarts to copy the data beginning at the offset from the current position indicated by retry->TxTpDataCnt.
 ***     The size of the remaining data is written to the position indicated by availableDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type               Name               Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id               Identification of the transmitted I-PDU.
 ***     const PduInfoType*   info             Provides the destination buffer (SduDataPtr) and the number of bytes to be copied (SduLength).
 ***                                           If not enough transmit data is available, no data is copied by the upper layer module and BUFREQ_E_BUSY is returned.
 ***                                           The lower layer module may retry the call. An SduLength of 0 can be used to indicate state changes in the retry parameter 
 ***                                           or to query the current amount of available data in the upper layer module. In this case, the SduDataPtr may be a NULL_PTR.
 ***     const RetryInfoType* retry            This parameter is used to acknowledge transmitted data or to retransmit data after transmission problems.
 ***                                           If the retry parameter is a NULL_PTR, it indicates that the transmit data can be removed from the buffer immediately after it has been copied.
 ***                                           Otherwise, the retry parameter must point to a valid RetryInfoType element.
 ***                                           If TpDataState indicates TP_CONFPENDING, the previously copied data must remain in the TP buffer to be available for error recovery.
 ***                                           TP_DATACONF indicates that all data that has been copied before this call is confirmed and can be removed from the TP buffer.
 ***                                           Data copied by this API call is excluded and will be confirmed later.
 ***                                           TP_DATARETRY indicates that this API call shall copy previously copied data in order to recover from an error.
 ***                                           In this case TxTpDataCnt specifies the offset in bytes from the current data copy position.
 ***     PduLengthType*       availableDataPtr Indicates the remaining number of bytes that are available in the upper layer module's Tx buffer.
 ***                                           availableDataPtr can be used by TP modules that support dynamic payload lengths to determine the size of the following CFs.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Data has been copied to the transmit buffer completely as requested.
 ***                        BUFREQ_E_BUSY: Request could not be fulfilled, because the required amount of Tx data is not available.
 ***                                       The lower layer module may retry this call later on. No data has been copied.
 ***                        BUFREQ_E_NOT_OK: Data has not been copied. Request failed.
\**************************************************************************************************/
BufReq_ReturnType Com_CopyTxData(PduIdType id, const PduInfoType* info, const RetryInfoType* retry, PduLengthType* availableDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(id);
    POSSIBLE_UNREFERENCED_PARAMETER(info);
    POSSIBLE_UNREFERENCED_PARAMETER(retry);
    POSSIBLE_UNREFERENCED_PARAMETER(availableDataPtr);

    if (Com_Status != COM_INIT)
    {
        /* Module not initialized */
#if (COM_DEV_ERROR_DETECT == STD_ON)
        Det_ReportError (COM_MODULE_ID,
                         COM_INSTANCE_ID,
                         COM_SID_COPY_TX_DATA,
                         COM_E_UNINIT);
#endif
        return BUFREQ_E_NOT_OK;
    }

    switch (id)
    {
        default:
        {
#if (COM_DEV_ERROR_DETECT == STD_ON)
            /* Invalid ID */
            Det_ReportError (COM_MODULE_ID,
                             COM_INSTANCE_ID,
                             COM_SID_COPY_TX_DATA,
                             COM_E_PDU_ID_INVALID);
#endif
            return BUFREQ_E_NOT_OK;
        }
    }
}

#endif /* PDUR_J1939TP_SUPPORT */

void Com_MainFunction(sint64 period)
{
    {
        /* Trigger Tx Function */
        Com_MainFunctionTx(period);
    }

    /* Trigger Rx Function */
    Com_MainFunctionRx();

}

