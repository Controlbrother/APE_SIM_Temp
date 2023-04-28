/** !------------------------------------------------------------------------->
*
*  @file Feature_SecOC.h
*
*  @brief Services for Feature interaction with IpduM module
*
*  @author
*    Vedran Slukic
*
*  @description
*    This header file contains extern declarations of services provided by Feature 
*    used by SecOC module
*
*  @copyright
*    Copyright 2019, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/
#ifndef FEATURE_SECOC_H_
#define FEATURE_SECOC_H_

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

/*----------------------------------------------------------------------------*/
/* Externals */
/*----------------------------------------------------------------------------*/

/* PDU Feature (RxStatusAccess, RawDataAccess) */
extern void Feature_SecOCReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);
/* PDU Feature (RawDataAccess) */
extern void Feature_SecOCReworkPduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);

#ifdef __cplusplus
}
#endif

#endif /* FEATURE_SECOC_H_ */
