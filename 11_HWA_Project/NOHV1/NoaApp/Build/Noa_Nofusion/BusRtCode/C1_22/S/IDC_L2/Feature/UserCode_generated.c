/** <!------------------------------------------------------------------------->
*
*  @file Feature_generated.c
*
*  @creationDate 09 March 2022 12:20:12
*
*  @brief Definition of Pdu UserCode Feature related behavior.
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
#include "UserCode_generated.h"


/* Additional feature specific includes */

/*------------------------------------------------------------------------------------------------*\
  DEFINES AND VARIABLE DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/* The communication status of this FEATURE module. */
static uint8 Feature_Status = 0;

/* Definition of the Features that are available in the Feature module */
#include "DsBusCustomCode_PduUserCode_Internal.h"

extern Std_ReturnType DsBusCustomCode_onApplicationInit_checksum_acc1(DsBusCustomCodePduFeatureHandle PduFeatureHandle);
extern Std_ReturnType DsBusCustomCode_onApplicationStart_checksum_acc1(DsBusCustomCodePduFeatureHandle PduFeatureHandle);
extern Std_ReturnType DsBusCustomCode_onApplicationTerminate_checksum_acc1(DsBusCustomCodePduFeatureHandle PduFeatureHandle);
extern Std_ReturnType DsBusCustomCode_onPduFeatureExecution_checksum_acc1(DsBusCustomCodePduFeatureHandle PduFeatureHandle);

extern Std_ReturnType DsBusCustomCode_onApplicationInit_checksum_acc2(DsBusCustomCodePduFeatureHandle PduFeatureHandle);
extern Std_ReturnType DsBusCustomCode_onApplicationStart_checksum_acc2(DsBusCustomCodePduFeatureHandle PduFeatureHandle);
extern Std_ReturnType DsBusCustomCode_onApplicationTerminate_checksum_acc2(DsBusCustomCodePduFeatureHandle PduFeatureHandle);
extern Std_ReturnType DsBusCustomCode_onPduFeatureExecution_checksum_acc2(DsBusCustomCodePduFeatureHandle PduFeatureHandle);

/*------------------------------------------------------------------------------------------------*\
  FUNCTIONS
\*------------------------------------------------------------------------------------------------*/


/* pdu feature handles */

/* definition of handle set for ACC_FD1 */
DsBusCustomCodePduFeatureHandle Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_FH; /**< Feature Handle */
DsBusCustomCodePduHandle Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_PH; /**< PDU Handle */
DsBusCustomCodeSignalHandle Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[3];

/* definition of handle set for ACC_FD2 */
DsBusCustomCodePduFeatureHandle Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_FH; /**< Feature Handle */
DsBusCustomCodePduHandle Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_PH; /**< PDU Handle */
DsBusCustomCodeSignalHandle Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_S[1];

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
Std_ReturnType UserCode_PreparePduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);
    Std_ReturnType result = E_OK;
    if(!Feature_Status) return result;

    /*  switch PDU id */
    switch (PduId)
    {
        case Feature_ACC_FD1_209345_119615_232434_TX:
        {
            DsBusCustomCodePdu_setSduLength(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_PH, PduInfoPtr->SduLength);
            DsBusCustomCodePdu_setSduDataPtr(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_PH, PduInfoPtr->SduDataPtr);
            result = DsBusCustomCode_onPduFeatureExecution_checksum_acc1( Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_FH);
            break;
        }
        case Feature_ACC_FD2_209383_119615_232434_TX:
        {
            DsBusCustomCodePdu_setSduLength(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_PH, PduInfoPtr->SduLength);
            DsBusCustomCodePdu_setSduDataPtr(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_PH, PduInfoPtr->SduDataPtr);
            result = DsBusCustomCode_onPduFeatureExecution_checksum_acc2( Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_FH);
            break;
        }
    }
    return result;
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_PostReceive
 *** 
 *** DESCRIPTION:
 ***     Copy the data of the Pdu with the specified ID from the given read buffer to the local buffer.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Feature_PduIdType    PduId       The Pdu ID to be prepared for sending.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
Std_ReturnType UserCode_PostReceive(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    if(!Feature_Status) return E_NOT_OK;

    /* switch PDU id */
    switch (PduId)
    {
    }
    return E_OK;
}


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
void UserCode_Init(void)
{
    {
        /* Init Pdu UserCode-Feature ACC_FD1 */
        DsBusCustomCodeUserCodePduFeature_generateHandle(&Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_FH);
        DsBusCustomCode_setName(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_FH, "checksum_acc1");
        DsBusCustomCodePdu_generateHandle(&Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_PH);
        DsBusCustomCodePduFeature_setPdu(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_FH, Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_PH);
        DsBusCustomCodeSignal_generateHandle(&Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[0]);
        DsBusCustomCodeSignal_generateHandle(&Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[1]);
        DsBusCustomCodeSignal_generateHandle(&Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[2]);
        DsBusCustomCodeUserCodePduFeature_setNumberOfUserSignals(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_FH, 3);
        DsBusCustomCodeUserCodePduFeature_setUserSignals(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_FH, Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S);
        /* initialization of handle set for ACC_FD1 */
        DsBusCustomCode_setName(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_PH, "ACC_FD1" );
        DsBusCustomCodePdu_setIsTx(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_PH, TRUE);
        /* set signal Checksum_ACC1 properties */
        DsBusCustomCode_setName(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[0], "Checksum_ACC1");
        DsBusCustomCodeSignal_setStartBitPosition(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[0], 64);
        DsBusCustomCodeSignal_setLength(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[0], 8);
        DsBusCustomCodeSignal_setEndianness(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[0], BigEndian);
        /* set signal Checksum_ACC2 properties */
        DsBusCustomCode_setName(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[1], "Checksum_ACC2");
        DsBusCustomCodeSignal_setStartBitPosition(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[1], 128);
        DsBusCustomCodeSignal_setLength(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[1], 8);
        DsBusCustomCodeSignal_setEndianness(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[1], BigEndian);
        /* set signal Checksum_ACC10 properties */
        DsBusCustomCode_setName(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[2], "Checksum_ACC10");
        DsBusCustomCodeSignal_setStartBitPosition(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[2], 192);
        DsBusCustomCodeSignal_setLength(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[2], 8);
        DsBusCustomCodeSignal_setEndianness(Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_S[2], BigEndian);
        /* call user code init function */
        DsBusCustomCode_onApplicationInit_checksum_acc1( Feature_UserCode_TX_Feature_ACC_FD1_119615_232434_FH);
    }
    {
        /* Init Pdu UserCode-Feature ACC_FD2 */
        DsBusCustomCodeUserCodePduFeature_generateHandle(&Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_FH);
        DsBusCustomCode_setName(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_FH, "checksum_acc2");
        DsBusCustomCodePdu_generateHandle(&Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_PH);
        DsBusCustomCodePduFeature_setPdu(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_FH, Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_PH);
        DsBusCustomCodeSignal_generateHandle(&Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_S[0]);
        DsBusCustomCodeUserCodePduFeature_setNumberOfUserSignals(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_FH, 1);
        DsBusCustomCodeUserCodePduFeature_setUserSignals(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_FH, Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_S);
        /* initialization of handle set for ACC_FD2 */
        DsBusCustomCode_setName(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_PH, "ACC_FD2" );
        DsBusCustomCodePdu_setIsTx(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_PH, TRUE);
        /* set signal ACC_LeTgt_02_Dy properties */
        DsBusCustomCode_setName(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_S[0], "ACC_LeTgt_02_Dy");
        DsBusCustomCodeSignal_setStartBitPosition(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_S[0], 8);
        DsBusCustomCodeSignal_setLength(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_S[0], 7);
        DsBusCustomCodeSignal_setEndianness(Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_S[0], BigEndian);
        /* call user code init function */
        DsBusCustomCode_onApplicationInit_checksum_acc2( Feature_UserCode_TX_Feature_ACC_FD2_119615_232434_FH);
    }

        

    Feature_Status = 1;
}


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
void UserCode_VariableInitialize(void)
{
    if(!Feature_Status) return;

}

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
void UserCode_OnStart(void)
{
    if(!Feature_Status) return;

}

/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_MainFunction
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
void UserCode_MainFunction(void)
{
    if(!Feature_Status) return;

}
/**************************************************************************************************\
 *** FUNCTION:
 ***     UserCode_SetValue
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
uint8 UserCode_SetValue(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr)
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
 ***     UserCode_SetValueWithReset
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
uint8 UserCode_SetValueWithReset(Feature_FunctionPortIdType FunctionPortId, const void * SetValuePtr, const void * RewritePtr)
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
 ***     UserCode_GetValue
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
uint8 UserCode_GetValue(Feature_FunctionPortIdType FunctionPortId, void * ValueArrayPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(ValueArrayPtr);

    if(!Feature_Status) return E_NOT_OK;
    
    /* switch Function Port id */
    switch (FunctionPortId)
    {
    }
    return E_NOT_OK;
}
