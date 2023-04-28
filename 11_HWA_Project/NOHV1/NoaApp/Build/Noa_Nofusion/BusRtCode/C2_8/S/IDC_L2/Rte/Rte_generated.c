/** !------------------------------------------------------------------------->
*
*  @file Rte_generated.c
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Generated Rte configuration source file.
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
*!-------------------------------------------------------------------------->*/

#include "Rte_generated.h"
#include <string.h>
#include <float.h>
#include <limits.h>
#include "StateManager_generated.h"
#include "ScalingFunctions.h"











/**************************************************************************************************\
 *** FUNCTION:
 ***    Rte_COMCbk_RxPDU
 *** 
 *** DESCRIPTION:
 ***     Callback for the COM Module to indicate the reception of a PDU.
 ***     This is a non AUTOSAR standard callback function and is used to optimze the
 ***     trace access to physical signal values. Using the callback the scaling algorithm 
 ***     only needs to be executed whenever a new signal value is received, removing the necessity to
 ***     poll COM signal values for trace access.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType       ComRxPduId       ID of the received pdu.
 ***                                     
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
static UNUSED void Rte_COMCbk_RxPDU(PduIdType ComRxPduId)
{
    switch (ComRxPduId)
    {
    }
}

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_SetPhysicalValue
 *** 
 *** DESCRIPTION:
 ***     Calculates a new physical value, if the coded value has changed.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     uint8             always         Boolean flag which enforces calculation even if the coded signal did not change.
 ***                                      This behavior is used for initialization during startup
 *** 
\**************************************************************************************************/
void Rte_SetPhysicalValue(Rte_SignalIdType SignalId, uint8 always)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
    POSSIBLE_UNREFERENCED_PARAMETER(always);
    switch (SignalId) {
            }

}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_SetCodedValue
 *** 
 *** DESCRIPTION:
 ***     Calculates a new coded value, if the physical value has changed.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     uint8             always         Boolean flag which enforces calculation even if the physical signal did not change.
 *** 
 *** RETURNS:
 ***     uint8    Boolean flag which inidcates that a calculation was performed and the undelying 
 ***              PDU have to be updated.
 \**************************************************************************************************/
uint8 Rte_SetCodedValue(Rte_SignalIdType SignalId, uint8 always)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
    POSSIBLE_UNREFERENCED_PARAMETER(always);
    switch (SignalId) {
    }

	return 0;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_WriteSignal
 *** 
 *** DESCRIPTION:
 ***     Updates the signal object identified by SignalId with the signal referenced by the
 ***     SignalDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Rte_WriteSignal(Rte_SignalIdType SignalId, const void * SignalDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
    POSSIBLE_UNREFERENCED_PARAMETER(SignalDataPtr);

    return RTE_NO_SUCH_SIGNAL;

}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Rte_ReadSignal
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the given memory location
 ***     and performs signal conversion.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Rte_SignalIdType  SignalId       RTE Signal ID of signal to be read.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Rte_ReadSignal(Rte_SignalIdType SignalId, void * SignalDataPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(SignalId);
    POSSIBLE_UNREFERENCED_PARAMETER(SignalDataPtr);


     return RTE_NO_SUCH_SIGNAL;
}

