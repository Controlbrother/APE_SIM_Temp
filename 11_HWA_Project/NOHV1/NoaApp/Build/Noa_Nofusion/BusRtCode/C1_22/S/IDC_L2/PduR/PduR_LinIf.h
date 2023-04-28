/** !------------------------------------------------------------------------->
*
*  @file PduR_LinIf.h
*
*  @brief AUTOSAR PDU Router module provides services for routing of Interaction
*         Layer Protocol Data Units
*
*  @author
*    SajuJ
*
*  @description
*    This header file contains extern declarations of services to be used by the
*    upper layers and different version informations, Service Ids of the APIs
*    and Error Ids.
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*!-------------------------------------------------------------------------->*/
#ifndef PDUR_LINIF_H_
#define PDUR_LINIF_H_

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "PduR.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/* External declarations of APIs */

extern void PduR_LinIfRxIndication(PduIdType LinRxPduId, const PduInfoType* PduInfoPtr);

extern void PduR_LinIfTxConfirmation(PduIdType LinTxPduId);

extern Std_ReturnType PduR_LinIfTriggerTransmit(PduIdType LinTxPduId, PduInfoType* PduInfoPtr);

#ifdef __cplusplus
}
#endif


#endif /* PDUR_LINIF_H_ */
