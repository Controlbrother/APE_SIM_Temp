/** <!------------------------------------------------------------------------->
*
*  @file Feature_Com_generated.c
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief Services for Feature interaction with Com module
*    This is a generated configuration source file. Any changes will be lost,
*    during the next generation cycle
*
*  @author
*    Tobias Siebert
*
*  @description
*    This source file contains extern services provided by Feature 
*    used by Com module
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "Feature_Com.h"
#include "CounterSignal_generated.h"
#include "UserCode_generated.h"


#if (FEATURE_COM_SUPPORT == STD_ON)

/**************************************************************************************************\
*** FUNCTION:
***     Feature_ComPreparePduSend
***
*** DESCRIPTION:
***     Copy the data of the Pdu with the specified ID from the local buffer to the given send buffer
***     for the Com Module.
***
*** PARAMETERS:
***     Type                 Name        Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_PduIdType    PduId       The Pdu ID to be prepared for sending.
***     PduInfoType          PduInfoPtr  Pointer to data length and pointer to Pdu buffer.
***
*** RETURNS:
***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
Std_ReturnType Feature_ComPreparePduSend(Feature_PduIdType PduId, PduInfoType * PduInfoPtr)
{
	POSSIBLE_UNREFERENCED_PARAMETER(PduId);
	POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);
	 
    return UserCode_PreparePduSend(PduId, PduInfoPtr);
}

/**************************************************************************************************\
*** FUNCTION:
***     Feature_ComReworkPduRec
***
*** DESCRIPTION:
***     Copy the data of the Pdu with the specified ID from the given read buffer to the local buffer
***     for the Com Module.
***
*** PARAMETERS:
***     Type                 Name        Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_PduIdType    PduId       The Pdu ID which has been received.
***     PduInfoType          PduInfoPtr  Pointer to data length and pointer to Pdu buffer.
***
*** RETURNS:
***     void
\**************************************************************************************************/
void Feature_ComReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
	POSSIBLE_UNREFERENCED_PARAMETER(PduId);
	POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    UserCode_PostReceive(PduId, PduInfoPtr);
}

/**************************************************************************************************\
*** FUNCTION:
***     Feature_ComReworkPduSend
***
*** DESCRIPTION:
***     Copy the data of the Pdu with the specified ID from the given send buffer to the local buffer
***     for the Com Module.
***
*** PARAMETERS:
***     Type                 Name        Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_PduIdType    PduId       The Pdu ID of the PDU which has been sent.
***     PduInfoType          PduInfoPtr  Pointer to data length and pointer to Pdu buffer.
***
*** RETURNS:
***     void
\**************************************************************************************************/
void Feature_ComReworkPduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduId);
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

}

/**************************************************************************************************\
*** FUNCTION:
***     Feature_ComGetPduEnableState
***
*** DESCRIPTION:
***     Returns the current enable state for a given PDU
***
*** PARAMETERS:
***     Type                 Name           Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_PduIdType    PduId          Feature Pdu ID of Pdu
*** RETURNS:
***     uint8    Enabled State of corresponding Pdu
\**************************************************************************************************/
uint8 Feature_ComGetPduEnableState(Feature_PduIdType PduId)
{
	POSSIBLE_UNREFERENCED_PARAMETER(PduId);
    /* No PDU Enable configured */
    return 1;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_ComCounterSignalCount
 *** 
 *** DESCRIPTION:
 ***     Decrement or Increment the connected CounterSignal of a ISignal
 *** 
 *** PARAMETERS:
 ***     Type                   Name                    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint8                  CallDirection           if = 0 (COUNTERSIGNAL_CALLED_FROM_UPPERLAYER), the 
 ***                                                    function was called to transfer PDU via CAN
 ***                                                    with this the CANComControllers are to be examined
 ***
 ***     Feature_SignalIdType   SignalId                Feature ISignal ID
 ***
 *** RETURNS:
 ***    sint64                  value of Physical Datatype
 ***
\**************************************************************************************************/
sint64 Feature_ComCounterSignalCount(uint8 CallDirection, Feature_SignalIdType SignalId, void *DestinationPtr)
{
	POSSIBLE_UNREFERENCED_PARAMETER(CallDirection);
	POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
	POSSIBLE_UNREFERENCED_PARAMETER(DestinationPtr);

    return CounterSignal_Count(CallDirection, SignalId, DestinationPtr);
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_ComCounterSignalRevert
 *** 
 *** DESCRIPTION:
 ***     Revert the CounterSignal after transmission failure
 *** 
 *** PARAMETERS:
 ***     Type                   Name                    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_SignalIdType   SignalId                Feature ISignal ID
 ***
 *** RETURNS:
 ***    void
 ***
\**************************************************************************************************/
void Feature_ComCounterSignalRevert(Feature_SignalIdType SignalId)
{
	POSSIBLE_UNREFERENCED_PARAMETER(SignalId);

    CounterSignal_Revert(SignalId);
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_ComCounterSignalAnalyze
 *** 
 *** DESCRIPTION:
 ***     Evaluate a received CounterSignal value according to the expected CounterSignal value 
 ***     Indicate the evaluation in the CounterSignal.status (0: datas equal; 64: datas different)
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_SignalIdType   SignalId        Feature ISignal
 ***     void *                 ptrCodedRxValue memory location of a received (coded) value of a configured CounterSignal.
 ***
 *** RETURNS:
 ***     Std_ReturnType         E_OK            Counter Signal value was analysed and functionport was set
 ***                            E_NOT_OK        Incorrect SignalID
 \**************************************************************************************************/
Std_ReturnType Feature_ComCounterSignalAnalyze(Feature_SignalIdType SignalId, void *ptrCodedRxValue)
{
	POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
	POSSIBLE_UNREFERENCED_PARAMETER(ptrCodedRxValue);

    return CounterSignal_Analyze(SignalId, ptrCodedRxValue);
}

/**************************************************************************************************\
*** FUNCTION:
***     Feature_Com_E2E_Status
***
*** DESCRIPTION:
***     call E2E Status feature to check E2E protection
***
*** PARAMETERS:
***     Type                         Name                   Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_SignalGroupIdType    SignalGroupId          Feature ISignalGroup ID
***
*** RETURNS:
***     Std_ReturnType         E_OK            Results of E2E protection was called and functionports were set
***                            E_NOT_OK        Incorrect SignalGroupId
\**************************************************************************************************/
Std_ReturnType Feature_Com_E2E_Status(Feature_SignalGroupIdType SignalGroupId)
{
	POSSIBLE_UNREFERENCED_PARAMETER(SignalGroupId);

    /* No E2E Status feature configured */
    return E_NOT_OK;
}

#endif /* FEATURE_COM_SUPPORT */

