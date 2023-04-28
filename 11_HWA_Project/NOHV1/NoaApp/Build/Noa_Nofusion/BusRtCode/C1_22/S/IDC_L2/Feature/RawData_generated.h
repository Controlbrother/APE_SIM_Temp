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

/* File ID: 983fa577-dc5b-406e-b4ab-bb7858d662a9 */
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
 ***     RawData_PreparePduSend
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
 ***     void
\**************************************************************************************************/
void RawData_PreparePduSend(Feature_PduIdType PduId, PduInfoType * PduInfoPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RawData_ReworkPduRec
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
void RawData_ReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RawData_ReworkPduSend
 *** 
 *** DESCRIPTION:
 ***     Copy the data of the Pdu with the specified ID from the given send buffer to the local buffer.
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
void RawData_ReworkPduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);


/**************************************************************************************************\
 *** FUNCTION:
 ***     RawData_Init
 *** 
 *** DESCRIPTION:
 ***     Init of the RawData Feature layer. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void RawData_Init(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RawData_VariableInitialize
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
void RawData_VariableInitialize(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RawData_OnStart
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
void RawData_OnStart(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     RawData_MainFunction
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
void RawData_MainFunction(void);
#ifdef __cplusplus
}
#endif

