/** <!------------------------------------------------------------------------->
*
*  @file Feature_IpduM_generated.c
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Services for Feature interaction with IpduM module
*    This is a generated configuration source file. Any changes will be lost,
*    during the next generation cycle
*
*  @author
*    Vedran Slukic, Joerg Jaeger
*
*  @description
*    This source file contains extern services provided by Feature 
*    used by IpduM module
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "Feature_IpduM.h"

#include "UserCode_generated.h"


/**************************************************************************************************\
*** FUNCTION:
***     Feature_IpduMReworkPduSend
***
*** DESCRIPTION:
***     This function is called by the IpduM module after transmission of Multiplexed-IPDUs 
***     and Container-IPDUs. The function routes the call to the implementation of possible 
***     configured features.
*** PARAMETERS:
***     Type                 Name        Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_PduIdType    PduId       The Pdu ID to be prepared for rework.
***     PduInfoType*         PduInfoPtr  Pointer to data length and pointer to Pdu buffer.
***
*** RETURNS:
***     void
\**************************************************************************************************/
void Feature_IpduMReworkPduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduId);
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);

}

#if (FEATURE_IPDUM_SUPPORT == STD_ON)

/**************************************************************************************************\
*** FUNCTION:
***     Feature_IpduMReworkPduRec
***
*** DESCRIPTION:
***     This function is called by the IpduM module after reception of Multiplexed-IPDUs 
***     and Container-IPDUs. The function routes the call to the implementation of possible 
***     configured features.
*** PARAMETERS:
***     Type                 Name        Description
***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
***     Feature_PduIdType    PduId       The Pdu ID to be prepared for rework.
***     PduInfoType*         PduInfoPtr  Pointer to data length and pointer to Pdu buffer.
***
*** RETURNS:
***     void
\**************************************************************************************************/
void Feature_IpduMReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr)
{
    POSSIBLE_UNREFERENCED_PARAMETER(PduId);
    POSSIBLE_UNREFERENCED_PARAMETER(PduInfoPtr);


}

#endif /* FEATURE_IPDUM_SUPPORT */

