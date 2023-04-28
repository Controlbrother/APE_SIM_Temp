/** <!------------------------------------------------------------------------->
*
*  @file Feature_generated.c
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Definition of Feature related behavior.
*    This is a generated configuration source file. Any changes will be lost,
*    during the next generation cycle
*
*  @author
*    Tobias Siebert
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/
#include "Feature_Types.h"
#include "Feature_generated.h"
#include "StateManager_generated.h"
#include <float.h>
#include <limits.h>
#include <string.h>
#include "Com_generated.h"
#include "CounterSignal_generated.h"
#include "UserCode_generated.h"



/*------------------------------------------------------------------------------------------------*\
  DEFINES AND VARIABLE DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/* The communication status of the FEATURE module. */
static uint8 Feature_Status = 0;

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_Init
 *** 
 *** DESCRIPTION:
 ***     Init of the Feature layer. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Feature_Init(void)
{
    CounterSignal_Init();
    UserCode_Init();

    Feature_Status = 1;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_VariableInitialize
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
void Feature_VariableInitialize(void)
{
    if(!Feature_Status) return;

    CounterSignal_VariableInitialize();
    UserCode_VariableInitialize();
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_OnStart
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
void Feature_OnStart(void)
{
    if(!Feature_Status) return;

    CounterSignal_OnStart();
    UserCode_OnStart();
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_MainFunction
 *** 
 *** DESCRIPTION:
 ***     Main Function of the Feature layer for further processing
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     sint64                      period         period of main function calls
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void Feature_MainFunction(sint64 period)
{
	POSSIBLE_UNREFERENCED_PARAMETER(period);
    if(!Feature_Status) return;

    CounterSignal_MainFunction();
    UserCode_MainFunction();
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_SetValue
 *** 
 *** DESCRIPTION:
 ***     Updates the Function Port object identified by FunctionPortId with the Function Port 
 ***     referenced by the SetValuePtr.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_FunctionPortIdType  PduTrId        Feature Function Port ID of Function Port to be sent.
 ***     const void *                SetValuePtr    Reference to the SetValue to get the write data from.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Feature_SetValue(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr)
{
	POSSIBLE_UNREFERENCED_PARAMETER(SetValuePtr);

    if(!Feature_Status) return E_NOT_OK;
    
    /* switch Function Port id */
    switch (FunctionPortId)
    {
    }
    return E_NOT_OK;
}
    
/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_SetValueWithReset
 *** 
 *** DESCRIPTION:
 ***     Updates the Function Port object identified by FunctionPortId with the Function Port 
 ***     referenced by the SetValuePtr.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_FunctionPortIdType  PduTrId        Feature Function Port ID of Function Port to be sent.
 ***     const void *                SetValuePtr    Reference to the SetValue to get the trigger value.
 ***     const void *                RewritePtr     Reference to the e.g. TA_ReplaceValue to clear the value.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Feature_SetValueWithReset(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr, const void * RewritePtr)
{
	POSSIBLE_UNREFERENCED_PARAMETER(SetValuePtr);
	POSSIBLE_UNREFERENCED_PARAMETER(RewritePtr);

    if(!Feature_Status) return E_NOT_OK;
    
    /* switch Function Port id */
    switch (FunctionPortId)
    {
    }
    return E_NOT_OK;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     Feature_GetValue
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the given memory location.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_FunctionPortIdType  PduTrId        Feature Function Port ID of Function Port to be read.
 ***     void *                      ValueArrayPtr  Reference to store the received data in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
uint8 Feature_GetValue(Feature_FunctionPortIdType FunctionPortId, void * ValueArrayPtr)
{
	POSSIBLE_UNREFERENCED_PARAMETER(ValueArrayPtr);

    if(!Feature_Status) return E_NOT_OK;
    
    /* switch Function Port id */
    switch (FunctionPortId)
    {
    }
    return E_NOT_OK;
}

