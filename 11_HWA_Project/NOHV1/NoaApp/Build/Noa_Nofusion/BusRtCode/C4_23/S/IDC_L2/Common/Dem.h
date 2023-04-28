/** <!------------------------------------------------------------------------->
*
*  @file Dem.h
*
*  @brief AUTOSAR Diagnostic Event Manager (DEM) API header file.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/
#pragma once

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "Dem_Types.h"
#include "Dem_InterrId.h"

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/* dSPACE vendor ID */
#define DEM_VENDOR_ID           4711

/* Module ID of DEM */
#define DEM_MODULE_ID           54

/* AUTOSAR specification where the appropriate implementation is based on. */
#define DEM_AR_MAJOR_VERSION    3
#define DEM_AR_MINOR_VERSION    0
#define DEM_AR_PATCH_VERSION    0

/* Version number of dSPACE specific implementation of the module. */
#define DEM_SW_MAJOR_VERSION    2    
#define DEM_SW_MINOR_VERSION    0
#define DEM_SW_PATCH_VERSION    0 

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/


/* 8.3.2 Interface ECU State Manager <-> DEM */
extern void Dem_PreInit(void);
extern void Dem_Init(void);
extern void Dem_Shutdown(void);

/* 8.3.3 Interface SWC via RTE <-> DEM */
extern Std_ReturnType Dem_SetEventStatus(Dem_EventIdType EventId, uint8 EventStatus);
extern Std_ReturnType Dem_ResetEventStatus(Dem_EventIdType EventId);
extern Std_ReturnType Dem_PrestoreFreezeFrame(Dem_EventIdType EventId);
extern Std_ReturnType Dem_ClearPrestoredFreezeFrame(Dem_EventIdType EventId);
extern Std_ReturnType Dem_SetOperationCycleState(uint8 OperationCycleId, uint8 CycleState);
extern Std_ReturnType Dem_GetEventStatus(Dem_EventIdType EventId, uint8* EventStatusExtended);
extern Std_ReturnType Dem_GetEventFailed(Dem_EventIdType EventId, boolean* EventFailed);
extern Std_ReturnType Dem_GetEventTested(Dem_EventIdType EventId, boolean* EventTested);
extern Std_ReturnType Dem_GetDTCOfEvent(Dem_EventIdType EventId, uint8 DTCKind, uint32* DTCOfEvent);
extern Std_ReturnType Dem_SetValueByOemId(uint16 OemID, uint8* DataValue, uint8 BufferLength);
extern Std_ReturnType Dem_SetEnableCondition(uint8 EnableConditionID, boolean ConditionFulfilled);
extern Std_ReturnType Dem_GetFaultDetectionCounter(Dem_EventIdType EventId, sint8* EventIdFaultDetectionCounter);
extern Std_ReturnType Dem_GetIndicatorStatus(uint8 IndicatorId, uint8* IndicatorStatus);

/* 8.3.4 Interface BSW Components <-> DEM */
extern Std_ReturnType Dem_ReportErrorStatus(Dem_EventIdType EventId, uint8 EventStatus);

/* 8.3.5 Interface DCM <-> DEM */
extern Dem_ReturnGetStatusOfDTCType Dem_GetStatusOfDTC(uint32 DTC, uint8 DTCKind, uint8 DTCOrigin, uint8* DTCStatus);
extern Dem_ReturnClearDTCType Dem_ClearDTC(uint32 DTC, uint8 DTCKind, uint8 DTCOrigin);
extern Dem_ReturnControlDTCStorageType Dem_DisableDTCStorage(uint32 DTCGroup, uint8 DTCKind);
extern Dem_ReturnControlDTCStorageType Dem_EnableDTCStorage(uint32 DTCGroup, uint8 DTCKind);
extern Dem_ReturnControlEventUpdateType Dem_DisableEventStatusUpdate(uint32 DTCGroup,uint8 DTCKind);
extern Dem_ReturnControlEventUpdateType Dem_EnableEventStatusUpdate(uint32 DTCGroup, uint8 DTCKind);

/* Unsupported functions. */
extern Dem_ReturnSetDTCFilterType Dem_SetDTCFilter(uint8 DTCStatusMask, uint8 DTCKind, uint8 DTCOrigin, uint8 FilterWithSeverity, uint8 DTCSeverity, uint8 FilterForFaultDetectionCounter);
extern Dem_ReturnSetDTCFilterType Dem_SetDTCFilterForRecords(uint16* NumberOfFilterRecords);
extern Std_ReturnType Dem_GetDTCStatusAvailabilityMask(uint8* DTCStatusMask);
extern Dem_ReturnGetNumberOfFilteredDTCType Dem_GetNumberOfFilteredDTC(uint16* NumberOfFilteredDTC);
extern Dem_ReturnGetNextFilteredDTCType Dem_GetNextFilteredDTC(uint32* DTC, uint8* DTCStatus);
extern Dem_ReturnGetDTCByOccurrenceTimeType Dem_GetDTCByOccurrenceTime(uint8 DTCRequest, uint8 DTCKind, uint32* DTC);
extern Dem_ReturnGetNextFilteredDTCType Dem_GetNetxtFilteredRecord(uint32* DTC, uint8* SnapshotRecord);
extern Dem_ReturnGetNextFilteredDTCType Dem_GetNextFilteredDTCAndFDC(uint32* DTC, sint8* DTCFaultDetectionCounter);
extern Dem_ReturnGetNextFilteredDTCType Dem_GetNextFilteredDTCAndSeverity(uint32* DTC, uint8* DTCStatus);
extern uint8 Dem_GetTranslationType(void);
extern Dem_ReturnGetSeverityOfDTCType Dem_GetSeverityOfDTC(uint32 DTC, uint8* DTCSeverity);
extern Std_ReturnType Dem_DisableDTCRecordUpdate(void);
extern Std_ReturnType Dem_EnableDTCRecordUpdate(void);
extern Dem_ReturnGetDTCOfFreezeFrameRecordType Dem_GetDTCOfFreezeFrameRecord(uint8 RecordNumber, uint8 DTCOrigin, uint8 DTCKind, uint32* DTC);
extern Dem_ReturnGetFreezeFrameDataByDTCType Dem_GetFreezeFrameDataByDTC(uint32 DTC, uint8 DTCKind, uint8 DTCOrigin, uint8 RecordNumber, uint16 DataId, uint8* DestBuffer, uint8* BufSize);
extern Dem_ReturnGetFreezeFrameDataIdentifierByDTCType Dem_GetFreezeFrameDataIdentifierByDTC(uint32 DTC, uint8 DTCKind, uint8 DTCOrigin, uint8 RecordNumber, uint8* ArraySize, const uint16** DataId);
extern Dem_ReturnGetSizeOfFreezeFrameType Dem_GetSizeOfFreezeFrame(uint32 DTC, uint8 DTCKind, uint8 DTCOrigin, uint8 RecordNumber, uint16* SizeOfFreezeFrame);
extern Dem_ReturnGetExtendedDataRecordByDTCType Dem_GetExtendedDataRecordByDTC(uint32 DTC, uint8 DTCKind, uint8 DTCOrigin, uint8 ExtendedDataNumber, uint8* DestBuffer, uint8* BufSize);
extern Dem_ReturnGetSizeOfExtendedDataRecordByDTCType Dem_GetSizeOfExtendedDataRecordByDTC(uint32 DTC, uint8 DTCKind, uint8 DTCOrigin, uint8 ExtendedDataNumber, uint16* SizeOfExtendedDataRecord);

/* 8.3.6 OBD-specific Interfaces */
/* not supported */

/* 8.5 Scheduled Functions */
extern void Dem_MainFunction(void);

