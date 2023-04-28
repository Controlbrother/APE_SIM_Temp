/** !------------------------------------------------------------------------->
*
*  @file PduR_SecOC.h
*
*  @brief Services for PDU Router interaction with SecOC module
*
*  @author
*    Dirk Schau
*
*  @description
*    This header file contains extern declarations of services provided by PDUR 
*    used by SecOC module
*
*  @copyright
*    Copyright 2017, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/
#ifndef PDUR_SECOC_H_
#define PDUR_SECOC_H_

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

extern Std_ReturnType PduR_SecOCTransmit(PduIdType SecOCTxPduId, const PduInfoType* PduInfoPtr);

extern void PduR_SecOCTxConfirmation(PduIdType SecOCLoTxPduId);

extern void PduR_SecOCRxIndication(PduIdType SecOCLoRxPduId, const PduInfoType* PduInfoPtr);

extern Std_ReturnType PduR_SecOCTriggerTransmit(PduIdType SecOCLoTxPduId, PduInfoType* PduInfoPtr);

#ifdef __cplusplus
}
#endif


#endif /* PDUR_SECOC_H_ */
