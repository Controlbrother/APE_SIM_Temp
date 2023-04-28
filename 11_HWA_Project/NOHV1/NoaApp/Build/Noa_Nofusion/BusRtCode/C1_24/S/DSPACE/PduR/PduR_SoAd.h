/** !------------------------------------------------------------------------->
*
*  @file PduR_SoAd.h
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
#ifndef PDUR_SOAD_H_
#define PDUR_SOAD_H_

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "PduR.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* External declarations of APIs */

extern void PduR_SoAdRxIndication(const SoAd_PduGlobalType* PduRRef, PduIdType RxPduId, const PduInfoType* PduInfoPtr);
extern void PduR_SoAdTxConfirmation(const SoAd_PduGlobalType* PduRRef, PduIdType TxPduId);
extern BufReq_ReturnType PduR_SoAdTpCopyRxData(const SoAd_PduGlobalType* PduRRef, PduIdType RxPduId, PduInfoType* RxPduInfo, PduLengthType* RxPduLength);
extern BufReq_ReturnType PduR_SoAdTpCopyTxData(const SoAd_PduGlobalType* PduRRef, PduIdType TxPduId, PduInfoType* TxPduInfo, RetryInfoType* TxRetryInfo, PduLengthType* TxPduLength);
extern void PduR_SoAdTpRxIndication(const SoAd_PduGlobalType* PduRRef, PduIdType RxPduId, NotifResultType result);
extern BufReq_ReturnType PduR_SoAdTpStartOfReception(const SoAd_PduGlobalType* PduRRef, PduIdType RxPduId, PduInfoType* RxPduinfo, PduLengthType RxTpSduLength, PduLengthType* RxBufferSizePtr);
extern void PduR_SoAdTpTxConfirmation(const SoAd_PduGlobalType* PduRRef, PduIdType TxPduId, NotifResultType TxResult);
extern Std_ReturnType PduR_SoAdIfTriggerTransmit(const SoAd_PduGlobalType* PduRRef, PduIdType SoAdSrcPduId, PduInfoType* SoAdSrcPduInfoPtr);
extern void PduR_SoAdIfTxConfirmation(const SoAd_PduGlobalType* PduRRef, PduIdType TxPduId);
extern void PduR_SoAdIfRxIndication(const SoAd_PduGlobalType* PduRRef, PduIdType RxPduId, PduInfoType* RxPduInfoPtr);
extern void PduR_SoConModeChg(const SoAd_BswModuleType* BswModuleRef, SoAd_SoConIdType SoConId, SoAd_SoConModeType Mode);
extern void PduR_LocalIpAddrAssignmentChg(const SoAd_BswModuleType* BswModuleRef, SoAd_SoConIdType SoConId, TcpIp_IpAddrStateType State);

#ifdef __cplusplus
}
#endif


#endif /* PDUR_SOAD_H_ */
