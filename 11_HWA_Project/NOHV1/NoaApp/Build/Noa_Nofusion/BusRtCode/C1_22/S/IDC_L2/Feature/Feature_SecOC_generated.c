/** <!------------------------------------------------------------------------->
*
*  @file Feature_SecOC_generated.c
*
*  @creationDate 09 March 2022 12:20:12
*
*  @brief Services for Feature interaction with SecOC module
*    This is a generated configuration source file. Any changes will be lost,
*    during the next generation cycle
*
*  @author
*    Vedran Slukic, Joerg Jaeger
*
*  @description
*    This source file contains extern services provided by Feature 
*    used by SecOC module
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "Feature_SecOC.h"

#include "CounterSignal_generated.h"
#include "RawData_generated.h"
#include "UserCode_generated.h"


#if (FEATURE_SECOC_SUPPORT == STD_ON)

/**************************************************************************************************\
*** FUNCTION:
***     Feature_SecOCReworkPduRec
***
*** DESCRIPTION:
***     Copy the data of the Pdu with the specified ID from the given read buffer to the local buffer
***     for the SecOC Module.
***
*** PARAMETERS:
***     Type                 Name        Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_PduIdType    PduId       The Pdu ID to be prepared for rework.
***     PduInfoType          PduInfoPtr  Pointer to data length and pointer to Pdu buffer.
***
*** RETURNS:
***     void
\**************************************************************************************************/
void Feature_SecOCReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduId);
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    RawData_ReworkPduRec(PduId, PduInfoPtr);
}

/**************************************************************************************************\
*** FUNCTION:
***     Feature_SecOCReworkPduSend
***
*** DESCRIPTION:
***     Copy the data of the Pdu with the specified ID from the given send buffer to the local buffer
***     for the SecOC Module.
***
*** PARAMETERS:
***     Type                 Name        Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_PduIdType     PduId       The Pdu ID to be prepared for rework.
***     PduInfoType*          PduInfoPtr  Pointer to data length and pointer to Pdu buffer.
***
*** RETURNS:
***     void
\**************************************************************************************************/
void Feature_SecOCReworkPduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduId);
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

    RawData_ReworkPduSend(PduId, PduInfoPtr);
}

#endif /* FEATURE_SECOC_SUPPORT */

