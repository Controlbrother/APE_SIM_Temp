/** !------------------------------------------------------------------------->
*
*  @file PduR_J1939Tp.h
*
*  @brief Services for PDU Router interaction with J1939Tp module
*
*  @author
*    I. Karwat
*
*  @description
*    This header file contains extern declarations of services provided by PDUR
*    used by J1939Tp module
*
*  @copyright
*    Copyright 2019, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/
#ifndef PDUR_J1939TP_H_
#define PDUR_J1939TP_H_

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

extern BufReq_ReturnType PduR_J1939TpCopyRxData(PduIdType id, const PduInfoType* info, PduLengthType* bufferSizePtr);
extern BufReq_ReturnType PduR_J1939TpCopyTxData(PduIdType id, const PduInfoType* info, const RetryInfoType* retry, PduLengthType* availableDataPtr);
extern void              PduR_J1939TpRxIndication(PduIdType id, Std_ReturnType result);
extern BufReq_ReturnType PduR_J1939TpStartOfReception(PduIdType id, const PduInfoType* info, PduLengthType TpSduLength, PduLengthType* bufferSizePtr);
extern void              PduR_J1939TpTxConfirmation(PduIdType id, Std_ReturnType result);
extern Std_ReturnType    PduR_J1939TpTriggerTransmit(PduIdType TxPduId, PduInfoType* PduInfoPtr);

#ifdef __cplusplus
}
#endif


#endif /* PDUR_J1939TP_H_ */
