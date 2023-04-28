/** <!------------------------------------------------------------------------->
*
*  @file Feature_generated.c
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief Definition of Pdu RxStatusAccess Feature related behavior.
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
#include "Feature_Com.h"
#include "StateManager_generated.h"
#include <float.h>
#include <limits.h>
#include <string.h>
#include "Com_generated.h"
#include "RxStatusAccess_generated.h"


/* Additional feature specific includes */
#include "ConvertHwTimeToSimTime.h"

/*------------------------------------------------------------------------------------------------*\
  DEFINES AND VARIABLE DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/* The communication status of this FEATURE module. */
static uint8 Feature_Status = 0;

/* Definition of the Features that are available in the Feature module */
static uint32 Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Counter;
static float64 Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Time;
static float64 Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_DeltaTime;
static float64 Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_LastTime;
static uint32 Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Counter;
static float64 Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Time;
static float64 Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_DeltaTime;
static float64 Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_LastTime;

/*------------------------------------------------------------------------------------------------*\
  FUNCTIONS
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_ReworkPduRec
 *** 
 *** DESCRIPTION:
 ***     RxStatusAccess handler for feature supporting pdus. It handles variable refresh based on PduId. 
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
void RxStatusAccess_ReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    if(!Feature_Status) return;

    float64 Timestamp = (float64)(*(Feature_MetaData_Type*)PduInfoPtr->MetaDataPtr).pduRxStatusMetaDataPtr->Timestamp;

    /* switch PDU id */
    switch (PduId)
    {
        case Feature_CR_L_AD3_209082_119553_232436_RX:
        {
            Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Counter++;
            Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Time = ConvertHwTimeToSimTime(Timestamp);
            Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_DeltaTime = Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Time - Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_LastTime;
            Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_LastTime = Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Time;
            break;
        }
        case Feature_CR_R_AD3_209085_119553_232436_RX:
        {
            Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Counter++;
            Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Time = ConvertHwTimeToSimTime(Timestamp);
            Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_DeltaTime = Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Time - Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_LastTime;
            Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_LastTime = Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Time;
            break;
        }
    }
}

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
void RxStatusAccess_Init(void)
{

        

    Feature_Status = 1;
}


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
void RxStatusAccess_VariableInitialize(void)
{
    if(!Feature_Status) return;

    {
        Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Counter = (uint32)0;
    }
    {
        Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Counter = (uint32)0;
    }
}

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
void RxStatusAccess_OnStart(void)
{
    if(!Feature_Status) return;

    {
        Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Time=(float64)0.0;
        Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_DeltaTime=(float64)0.0;
        Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_LastTime=0;
    }
    {
        Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Time=(float64)0.0;
        Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_DeltaTime=(float64)0.0;
        Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_LastTime=0;
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_MainFunction
 *** 
 *** DESCRIPTION:
 ***     Main Function of the Feature layer for further cyclic processing. It is called from 
 ***     Com_MainFunction.
 *** 
 *** PARAMETERS:
 ***     Type                        Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     sint64                      period         period of main function calls
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void RxStatusAccess_MainFunction(void)
{
    if(!Feature_Status) return;

}
/**************************************************************************************************\
 *** FUNCTION:
 ***     RxStatusAccess_SetValue
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
uint8 RxStatusAccess_SetValue(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr)
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
 ***     RxStatusAccess_SetValueWithReset
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
uint8 RxStatusAccess_SetValueWithReset(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr, const void * RewritePtr)
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
 ***     RxStatusAccess_GetValue
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
uint8 RxStatusAccess_GetValue(Feature_FunctionPortIdType FunctionPortId, void * ValueArrayPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(ValueArrayPtr);

    if(!Feature_Status) return E_NOT_OK;
    
    /* switch Function Port id */
    switch (FunctionPortId)
    {
        case Feature_CR_L_AD3_Counter_12249_119553_232436_OUT :
        {
            /* Counter */
            *((uint32*)ValueArrayPtr) = Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Counter;
            return E_OK;
        }
        case Feature_CR_L_AD3_State_12288_119553_232436_OUT :
        {
            /* State */
            /*State port is handled in SysInitCode*/
            return E_OK;
        }
        case Feature_CR_L_AD3_Time_12508_119553_232436_OUT :
        {
            /* Time */
            *((float64*)ValueArrayPtr) = Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_Time;
            return E_OK;
        }
        case Feature_CR_L_AD3_Delta_Time_12509_119553_232436_OUT :
        {
            /* DeltaTime */
            *((float64*)ValueArrayPtr) = Feature_RxStatusAccess_RX_Feature_CR_L_AD3_119553_232436_DeltaTime;
            return E_OK;
        }
        case Feature_CR_R_AD3_Counter_12250_119553_232436_OUT :
        {
            /* Counter */
            *((uint32*)ValueArrayPtr) = Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Counter;
            return E_OK;
        }
        case Feature_CR_R_AD3_State_12289_119553_232436_OUT :
        {
            /* State */
            /*State port is handled in SysInitCode*/
            return E_OK;
        }
        case Feature_CR_R_AD3_Time_12510_119553_232436_OUT :
        {
            /* Time */
            *((float64*)ValueArrayPtr) = Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_Time;
            return E_OK;
        }
        case Feature_CR_R_AD3_Delta_Time_12511_119553_232436_OUT :
        {
            /* DeltaTime */
            *((float64*)ValueArrayPtr) = Feature_RxStatusAccess_RX_Feature_CR_R_AD3_119553_232436_DeltaTime;
            return E_OK;
        }
    }
    return E_NOT_OK;
}
