/** <!------------------------------------------------------------------------->
*
*  @file Feature_generated.h
*
*  @creationDate 09 March 2022 12:20:12
*
*  @brief 
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/* File ID: cbf1bd36-43ba-4370-8d83-670ca551f401 */
#pragma once
#include "Config.h"
#include "BusConfiguration.h"
#include "Feature_generated.h"

#include "../Common/ComStack_Types.h"
/* -- Defines in global scope. After include directives -- */

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  FUNCTIONS
\*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C"
{
#endif
/** <!------------------------------------------------------------------------->
*
*  @file CounterSignal_generated.h
*
*  @creationDate 09 March 2022 12:20:12
*
*  @brief
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

/* File ID: 536f9714-c972-43a6-8b4c-daa6ce8d6e17 */
#pragma once
#include "Config.h"
#include "BusConfiguration.h"

#include "../Common/ComStack_Types.h"
/* -- Defines in global scope. After include directives -- */
#define FEATURE_EXISTS          STD_ON
#define FEATURE_COM_SUPPORT     STD_ON

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_Count
 ***
 *** DESCRIPTION:
 ***     Decrement or Increment the connected CounterSignal of a ISignal
 ***
 *** PARAMETERS:
 ***     Type                   Name                    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint8                  CallDirection           if = 0 (COUNTERSIGNAL_CALLED_FROM_UPPERLAYER), the
 ***                                                    function was called to transfer PDU via CAN
 ***                                                    with this the CANComController are to be examine
 ***
 ***     sint32                 SignalId                Feature ISignal ID
 ***
 *** RETURNS:
 ***    sint64                  value of Physical Datatype
 ***
\**************************************************************************************************/
sint64 CounterSignal_Count(uint8 CallDirection, sint32 SignalId, void *DestinationPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_Revert
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
void CounterSignal_Revert(Feature_SignalIdType SignalId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_Analyze
 ***
 *** DESCRIPTION:
 ***     Evaluate a received CounterSignal value according to the expected CounterSignal value
 ***     Indicate the evaluation in the CounterSignal.status (0: datas equal; 64: datas different)
 ***
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     sint32                 SignalId        Feature ISignal
 ***     void *                 ptrCodedRxValue memory location of a received (coded) value of a configured CounterSignal.
 ***
 *** RETURNS:
 ***     Std_Return             E_OK            Counter Signal value was analysed and functionport was set
 ***                            E_NOT_OK        Incorrect SignalID
 \**************************************************************************************************/
 Std_ReturnType CounterSignal_Analyze(sint32 SignalId, void *ptrCodedRxValue);


/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_Init
 *** 
 *** DESCRIPTION:
 ***     Init of the CounterSignal Feature layer. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void CounterSignal_Init(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_VariableInitialize
 *** 
 *** DESCRIPTION:
 ***     Initializes internal variables of the Feature layer for further processing. Depending on 
 ***     InitialValueUsage parameter, it is called either in OnInit or OnStart application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void CounterSignal_VariableInitialize(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_OnStart
 *** 
 *** DESCRIPTION:
 ***     Initializes internal variables of the Feature layer for further processing. It is called in 
 ***     OnStart application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void CounterSignal_OnStart(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_MainFunction
 *** 
 *** DESCRIPTION:
 ***     Main Function of the Feature layer for further cyclic processing. It is called from 
 ***     Com_MainFunction.
 *** 
 *** PARAMETERS:
 ***     sint64                      period         period of main function calls
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void CounterSignal_MainFunction(void);
/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_SetValue
 *** 
 *** DESCRIPTION:
 ***     Updates the Function Port object identified by FunctionPortId with the Function Port 
 ***     referenced by the SetValuePtr.
 *** 
 *** PARAMETERS:
 ***     Type                    Name            Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     CDD_FunctionPortIdType  FunctionPortId  Feature Function Port ID of Function Port to be sent.
 ***     const void *            SetValuePtr     Reference to the SetValue to get the write data from.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 CounterSignal_SetValue(Feature_FunctionPortIdType FunctionPortId, const void * ValueArrayPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_SetValueWithReset
 *** 
 *** DESCRIPTION:
 ***     Updates the Function Port object identified by FunctionPortId with the Function Port 
 ***     referenced by the SetValuePtr.
 *** 
 *** PARAMETERS:
 ***     Type                    Name            Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     CDD_FunctionPortIdType  FunctionPortId  Feature Function Port ID of Function Port to be sent.
 ***     const void *            SetValuePtr     Reference to the SetValue to get the write data from.
 ***     const void *            RewritePtr      Reference to the e.g. TA_ReplaceValue to clear the value.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 CounterSignal_SetValueWithReset(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr, const void * RewritePtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     CounterSignal_GetValue
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the given memory location.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_FunctionPortIdType  PduTrId        Feature IPdu Triggering ID of IPdu Triggering to be read.
 ***     void *                      ValueArrayPtr  Reference to the IPdu Raw Data to store the received data
 ***                                                in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 CounterSignal_GetValue(Feature_FunctionPortIdType FunctionPortId, void * ValueArrayPtr);
#ifdef __cplusplus
}
#endif

