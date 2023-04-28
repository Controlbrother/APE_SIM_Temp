/** !------------------------------------------------------------------------->
*
*  @file Feature_IpduM.h
*
*  @brief Services for Feature interaction with IpduM module
*
*  @author
*    Vedran Slukic, Joerg Jaeger
*
*  @description
*    This header file contains extern declarations of services provided by Feature 
*    used by IpduM module
*
*  @copyright
*    Copyright 2019, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/
#ifndef FEATURE_IPDUM_H_
#define FEATURE_IPDUM_H_

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "Feature_generated.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/* PDU Feature (RawData) */
extern void Feature_IpduMReworkPduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);
extern void Feature_IpduMReworkPduRec(Feature_PduIdType PduId, const PduInfoType* PduInfoPtr);

#ifdef __cplusplus
}
#endif

#endif /* FEATURE_IPDUM_H_ */
