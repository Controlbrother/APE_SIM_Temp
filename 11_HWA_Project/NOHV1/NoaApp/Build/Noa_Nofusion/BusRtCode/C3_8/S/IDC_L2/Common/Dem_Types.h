/** <!------------------------------------------------------------------------->
*
*  @file Dem_Types.h
*
*  @brief AUTOSAR Diagnostic Event Manager (DEM) type definitions.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/
#ifndef _DEM_TYPES_H_
#define _DEM_TYPES_H_

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

/* AUTOSAR standard types header. */
#include <Std_Types.h>

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/* Possible values for Dem_DTCKindType. */
#ifndef DEM_DTC_KIND_ALL_DTCS
#define DEM_DTC_KIND_ALL_DTCS                               ((uint8)0x01)
#endif
#ifndef DEM_DTC_KIND_EMISSION_REL_DTCS
#define DEM_DTC_KIND_EMISSION_REL_DTCS                      ((uint8)0x02)
#endif

/* Possible values for Dem_DTCOriginType. */
#define DEM_DTC_ORIGIN_PRIMARY_MEMORY                       ((uint8)0x01)
#define DEM_DTC_ORIGIN_MIRROR_MEMORY                        ((uint8)0x02)
#define DEM_DTC_ORIGIN_PERMANENT                            ((uint8)0x04)
#define DEM_DTC_ORIGIN_SECONDARY_MEMORY                     ((uint8)0x04)

/* Possible values for Dem_DTCRequestType. */
#define DEM_FIRST_FAILED_DTC                                ((uint8)0x01)
#define DEM_MOST_RECENT_FAILED_DTC                          ((uint8)0x02)
#define DEM_FIRST_DET_CONFIRMED_DTC                         ((uint8)0x03)
#define DEM_MOST_REC_DET_CONFIRMED_DTC                      ((uint8)0x04)

/* Possible values for Dem_DTCSeverityType. */
#define DEM_SEVERITY_NO_SEVERITY                            ((uint8)0x00)
#define DEM_SEVERITY_MAINTENANCE_ONLY                       ((uint8)0x20)
#define DEM_SEVERITY_CHECK_AT_NEXT_HALT                     ((uint8)0x40)
#define DEM_SEVERITY_CHECK_IMMEDIATELY                      ((uint8)0x80)

/* Possible values for Dem_FilterForFDCType. */
#define DEM_FILTER_FOR_FDC_YES                              ((uint8)0x00)
#define DEM_FILTER_FOR_FDC_NO                               ((uint8)0x01)

/* Possible values for Dem_FilterWithSeverityType. */
#define DEM_FILTER_WITH_SEVERITY_YES                        ((uint8)0x00)
#define DEM_FILTER_WITH_SEVERITY_NO                         ((uint8)0x01)

/* 8.2.2 Possible values of DEM return types. */

/* Possible values for Dem_ReturnSetDTCFilterType. */
#define DEM_FILTER_ACCEPTED                                 ((uint8)0x00)
#define DEM_WRONG_FILTER                                    ((uint8)0x01)

/* Possible values for Dem_ReturnGetStatusOfDTCType. */
#define DEM_STATUS_OK                                       ((uint8)0x00)
#define DEM_STATUS_WRONG_DTC                                ((uint8)0x01)
#define DEM_STATUS_WRONG_DTCORIGIN                          ((uint8)0x02)
#define DEM_STATUS_WRONG_DTCKIND                            ((uint8)0x03)
#define DEM_STATUS_FAILED                                   ((uint8)0x04)

/* Possible values for Dem_ReturnGetNextFilteredDTCType. */
#define DEM_FILTERED_OK                                     ((uint8)0x00)
#define DEM_FILTERED_NO_MATCHING_DTC                        ((uint8)0x01)
#define DEM_FILTERED_WRONG_DTCKIND                          ((uint8)0x02)
#define DEM_FILTERED_PENDING                                ((uint8)0x03)

/* Possible values for Dem_ReturnGetNumberOfFilteredDTCType. */
#define DEM_NUMBER_OK                                       ((uint8)0x00)
#define DEM_NUMBER_FAILED                                   ((uint8)0x01)
#define DEM_NUMBER_PENDING                                  ((uint8)0x02)

/* Possible values for Dem_ReturnClearDTCType. */
#define DEM_CLEAR_OK                                        ((uint8)0x00)
#define DEM_CLEAR_WRONG_DTC                                 ((uint8)0x01)
#define DEM_CLEAR_WRONG_DTCORIGIN                           ((uint8)0x02)
#define DEM_CLEAR_WRONG_DTCKIND                             ((uint8)0x03)
#define DEM_CLEAR_FAILED                                    ((uint8)0x04)
#define DEM_DTC_PENDING                                     ((uint8)0x05)

/* Possible values for Dem_ReturnControlDTCStorageType. */
#define DEM_CONTROL_DTC_STORAGE_OK                          ((uint8)0x00)
#define DEM_CONTROL_DTC_STORAGE_N_OK                        ((uint8)0x01)
#define DEM_CONTROL_DTC_WRONG_DTCGROUP                      ((uint8)0x02)

/* Possible values for Dem_ReturnControlEventUpdateType. */
#define DEM_CONTROL_EVENT_UPDATE_OK                         ((uint8)0x00)
#define DEM_CONTROL_EVENT_UPDATE_N_OK                       ((uint8)0x01)
#define DEM_CONTROL_EVENT_WRONG_DTCGROUP                    ((uint8)0x02)

/* Possible values for Dem_ReturnGetDTCOfFreezeFrameRecordType. */
#define DEM_GET_DTCOFFF_OK                                  ((uint8)0x00)
#define DEM_GET_DTCOFFF_WRONG_RECORD                        ((uint8)0x01)
#define DEM_GET_DTCOFFF_NO_DTC_FOR_RECORD                   ((uint8)0x02)
#define DEM_GET_DTCOFFF_WRONG_DTCKIND                       ((uint8)0x03)

/* Possible values for Dem_ReturnGetFreezeFrameDataIdentifierByDTCType. */
#define DEM_GET_ID_OK                                       ((uint8)0x00)
#define DEM_GET_ID_WRONG_DTC                                ((uint8)0x01)
#define DEM_GET_ID_WRONG_DTCORIGIN                          ((uint8)0x02)
#define DEM_GET_ID_WRONG_DTCKIND                            ((uint8)0x03)
#define DEM_GET_ID_WRONG_FF_TYPE                            ((uint8)0x04)

/* Possible values for Dem_ReturnGetExtendedDataRecordByDTCType. */
#define DEM_RECORD_OK                                       ((uint8)0x00)
#define DEM_RECORD_WRONG_DTC                                ((uint8)0x01)
#define DEM_RECORD_WRONG_DTCORIGIN                          ((uint8)0x02)
#define DEM_RECORD_WRONG_DTCKIND                            ((uint8)0x03)
#define DEM_RECORD_WRONG_NUMBER                             ((uint8)0x04)
#define DEM_RECORD_WRONG_BUFFERSIZE                         ((uint8)0x05)
#define DEM_RECORD_PENDING                                  ((uint8)0x06)

/* Possible values for Dem_ReturnGetDTCByOccurrenceTimeType. */
#define DEM_OCCURR_OK                                       ((uint8)0x00)
#define DEM_OCCURR_WRONG_DTCKIND                            ((uint8)0x01)
#define DEM_OCCURR_FAILED                                   ((uint8)0x02)

/* Possible values for Dem_ReturnGetFreezeFrameDataByDTCType. */
#define DEM_GET_FFDATABYDTC_OK                              ((uint8)0x00)
#define DEM_GET_FFDATABYDTC_WRONG_DTC                       ((uint8)0x01)
#define DEM_GET_FFDATABYDTC_WRONG_DTCORIGIN                 ((uint8)0x02)
#define DEM_GET_FFDATABYDTC_WRONG_DTCKIND                   ((uint8)0x03)
#define DEM_GET_FFDATABYDTC_WRONG_RECORDNUMBER              ((uint8)0x04)
#define DEM_GET_FFDATABYDTC_WRONG_DATAID                    ((uint8)0x05)
#define DEM_GET_FFDATABYDTC_WRONG_BUFFERSIZE                ((uint8)0x06)
#define DEM_GET_ID_PENDING                                  ((uint8)0x07)

/* Possible values for Dem_ReturnGetSizeOfExtendedDataRecordByDTCType. */
#define DEM_GET_SIZEOFEDRBYDTC_OK                           ((uint8)0x00)
#define DEM_GET_SIZEOFEDRBYDTC_W_DTC                        ((uint8)0x01)
#define DEM_GET_SIZEOFEDRBYDTC_W_DTCOR                      ((uint8)0x02)
#define DEM_GET_SIZEOFEDRBYDTC_W_DTCKI                      ((uint8)0x03)
#define DEM_GET_SIZEOFEDRBYDTC_W_RNUM                       ((uint8)0x04)
#define DEM_GET_SIZEOFEDRBYDTC_PENDING                      ((uint8)0x05)

/* Possible values for Dem_ReturnGetSizeOfFreezeFrameType. */
#define DEM_GET_SIZEOFFF_OK                                 ((uint8)0x00)
#define DEM_GET_SIZEOFFF_WRONG_DTC                          ((uint8)0x01)
#define DEM_GET_SIZEOFFF_WRONG_DTCOR                        ((uint8)0x02)
#define DEM_GET_SIZEOFFF_WRONG_DTCKIND                      ((uint8)0x03)
#define DEM_GET_SIZEOFFF_WRONG_RNUM                         ((uint8)0x04)
#define DEM_GET_SIZEOFFF_PENDING                            ((uint8)0x05)

/* Possible values for Dem_ReturnGetSeverityOfDTCType. */
#define DEM_GET_SEVERITYOFDTC_OK                            ((uint8)0x00)
#define DEM_GET_SEVERITYOFDTC_WRONG_DTC                     ((uint8)0x01)
#define DEM_GET_SEVERITYOFDTC_WRONG_DTCORIGIN               ((uint8)0x02)
#define DEM_GET_SEVERITYOFDTC_NOSEVERITY                    ((uint8)0x03)

/* Possible values of enum types exclusively used by DEM <-> RTE interface */

/* Possible values for Dem_EventStatusType. */
#ifndef DEM_EVENT_STATUS_PASSED
#define DEM_EVENT_STATUS_PASSED                             ((uint8)0x00)
#endif
#ifndef DEM_EVENT_STATUS_FAILED
#define DEM_EVENT_STATUS_FAILED                             ((uint8)0x01)
#endif
#ifndef DEM_EVENT_STATUS_PREPASSED
#define DEM_EVENT_STATUS_PREPASSED                          ((uint8)0x02)
#endif
#ifndef DEM_EVENT_STATUS_PREFAILED
#define DEM_EVENT_STATUS_PREFAILED                          ((uint8)0x03)
#endif

/* Possible values for Dem_InitMonitorKindType. */
#ifndef DEM_INIT_MONITOR_CLEAR
#define DEM_INIT_MONITOR_CLEAR                              ((uint8)0x01)
#endif
#ifndef DEM_INIT_MONITOR_RESTART
#define DEM_INIT_MONITOR_RESTART                            ((uint8)0x02)
#endif

/* Possible values for Dem_OperationCycleStateType. */
#ifndef DEM_CYCLE_STATE_START
#define DEM_CYCLE_STATE_START                               ((uint8)0x01)
#endif
#ifndef DEM_CYCLE_STATE_END
#define DEM_CYCLE_STATE_END                                 ((uint8)0x02)
#endif

/* Possible values for Dem_IndicatorStatusType. */
#ifndef DEM_INDICATOR_OFF
#define DEM_INDICATOR_OFF                                   ((uint8)0x00)
#endif
#ifndef DEM_INDICATOR_CONTINUOUS
#define DEM_INDICATOR_CONTINUOUS                            ((uint8)0x01)
#endif
#ifndef DEM_INDICATOR_BLINKING
#define DEM_INDICATOR_BLINKING                              ((uint8)0x02)
#endif
#ifndef DEM_INDICATOR_BLINK_CONT
#define DEM_INDICATOR_BLINK_CONT                            ((uint8)0x03)
#endif

/* Possible error codes */
#ifndef E_OK
#define E_OK                                                ((uint8)0x00)
#endif
#ifndef E_NOT_OK
#define E_NOT_OK                                            ((uint8)0x01)
#endif
#ifndef E_NO_DTC_AVAILABLE
#define E_NO_DTC_AVAILABLE                                  ((uint8)0x02)
#endif

/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/


typedef uint16 Dem_EventIdType;
typedef uint8 Dem_DTCKindType;
typedef uint8 Dem_EventStatusExtendedType;

typedef uint32 Dem_DTCGroupType;
typedef uint8 Dem_DTCOriginType;
typedef uint8 Dem_DTCRequestType;
typedef uint8 Dem_DTCSeverityType;
typedef uint8 Dem_FilterForFDCType;
typedef uint8 Dem_FilterWithSeverityType;
typedef uint8 Dem_RatoIdType;

/* 8.2.2 DEM return types */
typedef uint8 Dem_ReturnSetDTCFilterType;
typedef uint8 Dem_ReturnGetStatusOfDTCType;
typedef uint8 Dem_ReturnGetNextFilteredDTCType;
typedef uint8 Dem_ReturnGetNumberOfFilteredDTCType;
typedef uint8 Dem_ReturnClearDTCType;
typedef uint8 Dem_ReturnControlDTCStorageType;
typedef uint8 Dem_ReturnControlEventUpdateType;
typedef uint8 Dem_ReturnGetDTCOfFreezeFrameRecordType;
typedef uint8 Dem_ReturnGetFreezeFrameDataIdentifierByDTCType;
typedef uint8 Dem_ReturnGetExtendedDataRecordByDTCType;
typedef uint8 Dem_ReturnGetDTCByOccurrenceTimeType;
typedef uint8 Dem_ReturnGetFreezeFrameDataByDTCType;
typedef uint8 Dem_ReturnGetSizeOfExtendedDataRecordByDTCType;
typedef uint8 Dem_ReturnGetSizeOfFreezeFrameType;
typedef uint8 Dem_ReturnGetSeverityOfDTCType;

#endif /* _DEM_TYPES_H_ */
