/** !------------------------------------------------------------------------->
*
*  @file PduR_IpduM.h
*
*  @brief Services for PDU Router interaction with IpduM module
*
*  @author
*    SajuJ
*
*  @description
*    This header file contains extern declarations of services provided by PDUR 
*    used by IpduM module
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*!-------------------------------------------------------------------------->*/
#ifndef PDUR_IPDUM_H_
#define PDUR_IPDUM_H_

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

extern Std_ReturnType PduR_IpduMTransmit(PduIdType IpduMTxPduId, const PduInfoType* PduInfoPtr);

extern void PduR_IpduMTxConfirmation(PduIdType IpduMLoTxPduId);

extern void PduR_IpduMRxIndication(PduIdType IpduMLoRxPduId, const PduInfoType* PduInfoPtr);

extern Std_ReturnType PduR_IpduMTriggerTransmit(PduIdType IpduMLoTxPduId, PduInfoType* PduInfoPtr);

#ifdef __cplusplus
}
#endif


#endif /* PDUR_IPDUM_H_ */
