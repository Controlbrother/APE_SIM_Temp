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

/* File ID: 60da6a99-855c-44b3-b07c-432d9b807b14 */
#pragma once
#include "../Config.h"
#include "../../BusConfiguration.h"
#include "../Common/ComStack_Types.h"
/* -- Defines in global scope. After include directives -- */
/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
/* Definition of all supported operation modes. */
#define FEATURE_EXISTS  STD_ON
#define FEATURE_COM_SUPPORT  STD_ON
#define FEATURE_IPDUM_SUPPORT  STD_ON
#define FEATURE_SECOC_SUPPORT  STD_ON

/* Parameter types */
typedef uint32 Feature_FunctionPortIdType;
typedef sint32 Feature_PduIdType;
typedef sint32 Feature_SignalIdType;
typedef sint32 Feature_SignalGroupIdType;

/* Definition of the Function Ports with special features that are available in the Feature module. */

/* Definition of the IPdus that are available in the Feature module. */
#define FEATURE_No_Feature -1
#define Feature_ACC_FD1_209462_119633_232437_TX 0

/* Definition of the ISignals and ISignalGroups that are available in the Feature module. */
#define Feature_ACC_FD1_RollingCounter_ACC11_207015_119633_232437_TX 0
#define Feature_ACC_FD1_RollingCounter_ACC1_207028_119633_232437_TX 1
#define Feature_ACC_FD1_RollingCounter_ACC10_207039_119633_232437_TX 2
#define Feature_ACC_FD1_RollingCounter_ACC2_207034_119633_232437_TX 3

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C"
{
#endif

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
void Feature_Init(void);

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
void Feature_VariableInitialize(void);

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
void Feature_OnStart(void);

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
void Feature_MainFunction(sint64 period);

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
uint8 Feature_SetValue(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr);
    
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
uint8 Feature_SetValueWithReset(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr, const void * RewritePtr);

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
uint8 Feature_GetValue(Feature_FunctionPortIdType FunctionPortId, void * ValueArrayPtr);

#ifdef __cplusplus
}
#endif /* __cplusplus */ 

