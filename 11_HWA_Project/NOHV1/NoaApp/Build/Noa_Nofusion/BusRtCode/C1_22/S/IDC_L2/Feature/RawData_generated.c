/** <!------------------------------------------------------------------------->
*
*  @file Feature_generated.c
*
*  @creationDate 09 March 2022 12:20:12
*
*  @brief Definition of Pdu RawData Feature related behavior.
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
#include "RawData_generated.h"


/* Additional feature specific includes */

/*------------------------------------------------------------------------------------------------*\
  DEFINES AND VARIABLE DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

/* The communication status of this FEATURE module. */
static uint8 Feature_Status = 0;

/* Definition of the Features that are available in the Feature module */

/* Structures to handle Pdu RawData-Features */
static uint8 Feature_RawData_TX_Feature_IFC_FD5_119615_232434_dummy[64];
static uint8* Feature_RawData_TX_Feature_IFC_FD5_119615_232434_dummy_ref = Feature_RawData_TX_Feature_IFC_FD5_119615_232434_dummy;
static uint8** Feature_RawData_TX_Feature_IFC_FD5_119615_232434 = &Feature_RawData_TX_Feature_IFC_FD5_119615_232434_dummy_ref;
void BM_Write_RtParameterRef_13075(uint8** ioValue){ Feature_RawData_TX_Feature_IFC_FD5_119615_232434 = ioValue; }
static uint8 Feature_RawData_TX_Feature_IFC_FD6_119615_232434_dummy[64];
static uint8* Feature_RawData_TX_Feature_IFC_FD6_119615_232434_dummy_ref = Feature_RawData_TX_Feature_IFC_FD6_119615_232434_dummy;
static uint8** Feature_RawData_TX_Feature_IFC_FD6_119615_232434 = &Feature_RawData_TX_Feature_IFC_FD6_119615_232434_dummy_ref;
void BM_Write_RtParameterRef_13076(uint8** ioValue){ Feature_RawData_TX_Feature_IFC_FD6_119615_232434 = ioValue; }
static uint8 Feature_RawData_TX_Feature_IFC_FD2_119615_232434_dummy[64];
static uint8* Feature_RawData_TX_Feature_IFC_FD2_119615_232434_dummy_ref = Feature_RawData_TX_Feature_IFC_FD2_119615_232434_dummy;
static uint8** Feature_RawData_TX_Feature_IFC_FD2_119615_232434 = &Feature_RawData_TX_Feature_IFC_FD2_119615_232434_dummy_ref;
void BM_Write_RtParameterRef_13077(uint8** ioValue){ Feature_RawData_TX_Feature_IFC_FD2_119615_232434 = ioValue; }
static uint8 Feature_RawData_TX_Feature_ACC_FD2_119615_232434_dummy[64];
static uint8* Feature_RawData_TX_Feature_ACC_FD2_119615_232434_dummy_ref = Feature_RawData_TX_Feature_ACC_FD2_119615_232434_dummy;
static uint8** Feature_RawData_TX_Feature_ACC_FD2_119615_232434 = &Feature_RawData_TX_Feature_ACC_FD2_119615_232434_dummy_ref;
void BM_Write_RtParameterRef_13078(uint8** ioValue){ Feature_RawData_TX_Feature_ACC_FD2_119615_232434 = ioValue; }
static uint8 Feature_RawData_TX_Feature_ACC_FD4_119615_232434_dummy[64];
static uint8* Feature_RawData_TX_Feature_ACC_FD4_119615_232434_dummy_ref = Feature_RawData_TX_Feature_ACC_FD4_119615_232434_dummy;
static uint8** Feature_RawData_TX_Feature_ACC_FD4_119615_232434 = &Feature_RawData_TX_Feature_ACC_FD4_119615_232434_dummy_ref;
void BM_Write_RtParameterRef_13079(uint8** ioValue){ Feature_RawData_TX_Feature_ACC_FD4_119615_232434 = ioValue; }
static uint8 Feature_RawData_TX_Feature_IFC_FD3_119615_232434_dummy[64];
static uint8* Feature_RawData_TX_Feature_IFC_FD3_119615_232434_dummy_ref = Feature_RawData_TX_Feature_IFC_FD3_119615_232434_dummy;
static uint8** Feature_RawData_TX_Feature_IFC_FD3_119615_232434 = &Feature_RawData_TX_Feature_IFC_FD3_119615_232434_dummy_ref;
void BM_Write_RtParameterRef_13080(uint8** ioValue){ Feature_RawData_TX_Feature_IFC_FD3_119615_232434 = ioValue; }

/*------------------------------------------------------------------------------------------------*\
  FUNCTIONS
\*------------------------------------------------------------------------------------------------*/

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
void RawData_PreparePduSend(Feature_PduIdType PduId, PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    if(!Feature_Status) return;

    /*  switch PDU id */
    switch (PduId)
    {
        case Feature_IFC_FD5_209355_119615_232434_TX:
        {
            memcpy(PduInfoPtr->SduDataPtr, *Feature_RawData_TX_Feature_IFC_FD5_119615_232434, 64);
            break;
        }
        case Feature_IFC_FD6_209359_119615_232434_TX:
        {
            memcpy(PduInfoPtr->SduDataPtr, *Feature_RawData_TX_Feature_IFC_FD6_119615_232434, 64);
            break;
        }
        case Feature_IFC_FD2_209363_119615_232434_TX:
        {
            memcpy(PduInfoPtr->SduDataPtr, *Feature_RawData_TX_Feature_IFC_FD2_119615_232434, 64);
            break;
        }
        case Feature_ACC_FD2_209383_119615_232434_TX:
        {
            memcpy(PduInfoPtr->SduDataPtr, *Feature_RawData_TX_Feature_ACC_FD2_119615_232434, 64);
            break;
        }
        case Feature_ACC_FD4_209385_119615_232434_TX:
        {
            memcpy(PduInfoPtr->SduDataPtr, *Feature_RawData_TX_Feature_ACC_FD4_119615_232434, 64);
            break;
        }
        case Feature_IFC_FD3_209389_119615_232434_TX:
        {
            memcpy(PduInfoPtr->SduDataPtr, *Feature_RawData_TX_Feature_IFC_FD3_119615_232434, 64);
            break;
        }
    }
}

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
void RawData_ReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    if(!Feature_Status) return;

    /* switch PDU id */
    switch (PduId)
    {
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     RawData_ReworkPduSend
 *** 
 *** DESCRIPTION:
 ***     Copy the data of the Pdu with the specified ID from the given write buffer to the local buffer.
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
void RawData_ReworkPduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    if(!Feature_Status) return;

    /* switch PDU id */
    switch (PduId)
    {
    }
}

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
void RawData_Init(void)
{

        

    Feature_Status = 1;
}


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
void RawData_VariableInitialize(void)
{
    if(!Feature_Status) return;

    {
        /* Init Pdu RawData-Feature IFC_FD5 */
        memset(*Feature_RawData_TX_Feature_IFC_FD5_119615_232434, (uint8)0, 64);
    }
    {
        /* Init Pdu RawData-Feature IFC_FD6 */
        memset(*Feature_RawData_TX_Feature_IFC_FD6_119615_232434, (uint8)0, 64);
    }
    {
        /* Init Pdu RawData-Feature IFC_FD2 */
        memset(*Feature_RawData_TX_Feature_IFC_FD2_119615_232434, (uint8)0, 64);
    }
    {
        /* Init Pdu RawData-Feature ACC_FD2 */
        memset(*Feature_RawData_TX_Feature_ACC_FD2_119615_232434, (uint8)0, 64);
    }
    {
        /* Init Pdu RawData-Feature ACC_FD4 */
        memset(*Feature_RawData_TX_Feature_ACC_FD4_119615_232434, (uint8)0, 64);
    }
    {
        /* Init Pdu RawData-Feature IFC_FD3 */
        memset(*Feature_RawData_TX_Feature_IFC_FD3_119615_232434, (uint8)0, 64);
    }
}

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
void RawData_OnStart(void)
{
    if(!Feature_Status) return;

}

/**************************************************************************************************\
 *** FUNCTION:
 ***     RawData_MainFunction
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
void RawData_MainFunction(void)
{
    if(!Feature_Status) return;

}
