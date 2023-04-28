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

/* File ID: cd230caf-138b-48ba-8734-eb885aba4151 */
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
 ***     RxStatusAccess_ReworkPduRec
 *** 
 *** DESCRIPTION:
 ***     RxStatusAccess handler for feature supporting PDU types. It handles variable refresh based on PduId. 
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_PduIdType    PduId       The Pdu ID for handling.
 ***     PduInfoType          PduInfoPtr  Pointer to data length, pointer to Pdu buffer and pointer
 ***                          to Metadata. 
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void RxStatusAccess_ReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);


/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_Init
 *** 
 *** DESCRIPTION:
 ***     Init of the RxStatusAccess Feature layer. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void RxStatusAccess_Init(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_VariableInitialize
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
void RxStatusAccess_VariableInitialize(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_OnStart
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
void RxStatusAccess_OnStart(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_MainFunction
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
void RxStatusAccess_MainFunction(void);
/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_SetValue
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
uint8 RxStatusAccess_SetValue(Feature_FunctionPortIdType FunctionPortId, const void * ValueArrayPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_SetValueWithReset
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
uint8 RxStatusAccess_SetValueWithReset(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr, const void * RewritePtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_GetValue
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
uint8 RxStatusAccess_GetValue(Feature_FunctionPortIdType FunctionPortId, void * ValueArrayPtr);
#ifdef __cplusplus
}
#endif

