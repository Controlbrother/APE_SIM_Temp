/** <!------------------------------------------------------------------------->
*
*  @file Com_Types.h
*
*  @brief Definition of the COM data types, for use with the AUTOSAR COM module.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

#ifndef _COM_TYPES_H_
#define _COM_TYPES_H_

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "../Common/ComStack_Types.h"

/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/

/* Returned by the API service Com_GetStatus(). */
typedef enum
{
    COM_UNINIT = 0x00,
    COM_INIT
} Com_StatusType;

/* Signal ID, uint16 does not match with TLSR callback. */
typedef uint32 Com_SignalIdType;

/* Signal group ID, uint16 does not match with TLSR callback. */
typedef uint32 Com_SignalGroupIdType;

/* AUTOSAR COM PDU group object identifier. */
typedef uint8 Com_PduGroupIdType;

/* Unique identifier of an AUTOSAR COM service. */
typedef uint8 Com_ServiceIdType;

/* This is the type of the data structure containing the initialization data for COM. */
typedef void Com_ConfigType;

/* Structure to handle PDU/Feature cyclic timings by a binary heap */
typedef struct {
	sint64 Timeout;		    /* absolute timeout value */
	uint32 Period;		    /* used for all schedule's after initial schedule */
	PduIdType Pdu;		    /* PDU to send cyclic */
	uint16 IndexTimingList; /* Index within the Feature Cyclic Timing Control list */
} Com_CyclicHeapEntry;

#endif /* _COM_TYPES_H_ */
