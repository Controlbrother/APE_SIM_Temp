/** !------------------------------------------------------------------------->
*
*  @file Feature_Com.h
*
*  @brief Services for Feature interaction with Com module
*
*  @author
*    TobiasSi
*
*  @description
*    This header file contains extern declarations of services provided by Feature 
*    used by Com module
*
*  @copyright
*    Copyright 2015, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/
#ifndef FEATURE_COM_H_
#define FEATURE_COM_H_

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

/* Definition of all supported operation modes. */
#define COUNTERSIGNAL_CALLED_FROM_UPPERLAYER         0    /* CounterSignal Counting was called from COM (e.g. for CAN)        */
#define COUNTERSIGNAL_CALLED_FROM_LOWERLAYER         1    /* CounterSignal Counting was called from ScheduleTable (e.g. LIN)  */
#define COUNTERSIGNAL_CALLED_FROM_IPDUM_JIT_UPDATE   0    /* CounterSignal Counting was called from IpduM as JIT-Update       */

/*----------------------------------------------------------------------------*/
/* Externals */
/*----------------------------------------------------------------------------*/

/* PDU Feature (RawData & UserCode) */
extern Std_ReturnType Feature_ComPreparePduSend(Feature_PduIdType PduId, PduInfoType * PduInfoPtr);
extern void Feature_ComReworkPduRec(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);
extern void Feature_ComReworkPduSend(Feature_PduIdType PduId, const PduInfoType * PduInfoPtr);

/* PDU Enable */
extern uint8 Feature_ComGetPduEnableState(Feature_PduIdType PduId);

/* Signal Counter */
extern sint64 Feature_ComCounterSignalCount(uint8 CallDirection, Feature_SignalIdType SignalId, void *DestinationPtr);
extern void Feature_ComCounterSignalRevert(Feature_SignalIdType SignalId);
extern Std_ReturnType Feature_ComCounterSignalAnalyze(Feature_SignalIdType SignalId, void *SourcePtr);

/* Signal Group E2E Status */
extern Std_ReturnType Feature_Com_E2E_Status(Feature_PduIdType PduId);

#ifdef __cplusplus
}
#endif

#endif /* FEATURE_COM_H_ */
