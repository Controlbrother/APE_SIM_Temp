/** <!------------------------------------------------------------------------->
*
*  @file Feature_generated.h
*
*  @creationDate 09 March 2022 12:20:14
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

/* File ID: 01e39c94-8722-465b-a397-af2d19cf817c */
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

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_PreparePduSend
 *** 
 *** DESCRIPTION:
 ***     Copy the data of the Pdu with the specified ID from the local buffer to the given send buffer.
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
Std_ReturnType UserCode_PreparePduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_ReworkPduRec
 *** 
 *** DESCRIPTION:
 ***     Copy the data of the Pdu with the specified ID from the given read buffer to the local buffer.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_PduIdType    PduId       The Pdu ID to be prepared for sending.
 ***     PduInfoType          PduInfoPtr  Pointer to data length and pointer to Pdu buffer. 
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
Std_ReturnType UserCode_PostReceive(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_GetResult
 *** 
 *** DESCRIPTION:
 ***     get result of PduFeature as set by user code.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_PduIdType    PduId       The Pdu ID to be prepared for sending.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void UserCode_GetResult(Feature_PduIdType PduId, uint32 * result);


/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_Init
 *** 
 *** DESCRIPTION:
 ***     Init of the UserCode Feature layer. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void UserCode_Init(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_VariableInitialize
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
void UserCode_VariableInitialize(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_OnStart
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
void UserCode_OnStart(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_MainFunction
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
void UserCode_MainFunction(void);
/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_SetValue
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
uint8 UserCode_SetValue(Feature_FunctionPortIdType FunctionPortId, const void * ValueArrayPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_SetValueWithReset
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
uint8 UserCode_SetValueWithReset(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr, const void * RewritePtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_GetValue
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
uint8 UserCode_GetValue(Feature_FunctionPortIdType FunctionPortId, void * ValueArrayPtr);
#ifdef __cplusplus
}
#endif

