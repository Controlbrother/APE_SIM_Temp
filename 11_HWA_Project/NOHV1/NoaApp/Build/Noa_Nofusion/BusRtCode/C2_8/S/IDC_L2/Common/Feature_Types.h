/** !------------------------------------------------------------------------->
*
*  @file Feature_Types.h
*
*  @brief Services for Feature
*
*  @author
*    TobiasSi
*
*  @description
*    This header file contains extern declarations of services provided by Feature
*
*  @copyright
*    Copyright 2017, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/

#ifndef FEATURE_TYPES_H_
#define FEATURE_TYPES_H_

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include <Std_Types.h>
#include "../Common/ComStack_Types.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /*----------------------------------------------------------------------------*/
    /* TYPEDEFS / STRUCTURES */
    /*----------------------------------------------------------------------------*/
    typedef enum
    {
        CAN = 1,
        LIN = 2
    } Bustype;

    typedef enum
    {
        DO_NOT_CHECK_COMCTRL,
        CHECK_COMCTRL
    } CounterSignal_Mode;

    typedef struct
    {
        sint32 InitialValue;            /* Initial value of the Counter Signal for the 1. sending */
        sint32 Maximum;                 /* Upper bound for the Counter Signal */
        sint32 Minimum;                 /* Lower bound for the Counter Signal */
        sint32 Increment;               /* Additional value for each sending */
        sint32 StepLength;              /* CounterSignal recalculation each <StepLength> of sending the pdu */
        sint64 StateManagerFromUpper;   /* StateManager index to be used for ComControllerEnable from Upper (CAN/Ethernet) */
        sint64 StateManagerFromLower;   /* StateManager index to be used for ComControllerEnable from Lower */
    } CounterSignalConfig_Type;

    typedef struct
    {
        sint64 ActualValue;             /* Holds the actual value of the counter */
        sint32 ActualStepCounter;       /* Counts every sending of the Signal until matching <StepLength> to calculate the next counter value */
        uint8  FirstUsed;               /* Indicator to use the Initial value or the actual value */
        uint8  Status;                  /* Holds the actual evaluated status of the received and expected (calculated) CounterSignal-Value */
    } CounterSignalState_Type;

    typedef struct
    {
        CounterSignalConfig_Type Config;        /* Counter Signal configuration */
        CounterSignalState_Type  State;         /* Counter Signal state */
    } CounterSignal_Type;

    typedef struct
    {
        uint8 currentValue;                     /* current Value of the Trigger Mode */
        uint8 lastValue;                        /* last Value of the Trigger Mode, only set for positive edge mode */
        uint8 trigger;                          /* bool value if the IPdu shall be triggered in the next ComTask Step */
        uint8* resetPtr;                        /* Pointer to the TA_Replace value if positive edge and TA_Switchvalue is set to substitute value, otherwise NULL_PTR */
    } TriggerMode_Type;

    typedef struct
    {
        float64* TimePeriodFromFunctionPort;    /* Period-Value: float seconds coming from a function-port */
        float64* TimeOffsetFromFunctionPort;    /* Offset-Value: float seconds coming from a function-port */
        float64 LastTimePeriodFromFunctionPort; /* Last value of Period coming from a function-port (as float seconds) */
        float64 LastTimeOffsetFromFunctionPort; /* Last value of Offset coming from a function-port (as float seconds) */
        uint32 TimePeriod;                      /* Period-Value converted to usec */
        uint32 TimeOffset;                      /* Offset-Value converted to usec */
        PduIdType PduID;                        /* related PDU ID */
        /* below additional elements used for array based and not binary heap based cyclic timing */
        sint64 LastTxTiming;                    /* Timestamp of last transmission */
        uint32 LastTxOffset;                    /* Functionport value for the Offset during LastTxTiming (last sending of the pdu) */
        sint64 CurrentTime;                     /* actual Timestamp to be used for determine the next transmission */
    } CyclicTiming_Type;

    typedef struct
    {
        uint32 maxLength;                       /* Maximum Length */
        uint32 length;                          /* Current Length */
        uint32 identifier;                      /* Current Identifier */
        TriggerMode_Type trigger;               /* Trigger */
        uint8 *SduDataPtr;                      /* Raw Data */
        uint8 receiveCounter;                   /* Message receive counter */
        uint8 extendedAddressing;               /* Current Extended Addressing */
        uint8 bitRateSwitch;                    /* Current Bit Rate Switch */
        uint8 canFdFrameSupport;                /* Current CAN FD Frame Support */
        PduIdType refID;                        /* Lower level reference ID */
        Bustype bustype;                        /* Bus type */
        boolean isTx;                           /* Frame direction */
    } FrameAccess_Type;

    typedef struct
    {
        float64 Time;                           /* Time, when the sync message was transmitted, resp. received, on the bus */
        uint32 Status;                          /* Status, of the time base instance when the sync message was assembled for transmission */
        uint8 UserBytes[3];                     /* User Bytes, when the sync message was assembled for transmission, resp. received from the last time synchronization */
        uint8 UserDataLength;                   /* User Bytes Data Length, when the sync message was assembled for transmission, resp. received from the last time synchronization */
        boolean SynchronizedToGateway;          /* Synchronized to Gateway, delivers the value of the SGW bit received with the last fup message */
    } GTS_TimeBaseData_Type;

    typedef struct
    {
        float64 Period;                         /* Period, allows to control the synchronization period for the time synchronization */
        TriggerMode_Type trigger;               /* Trigger, allows to trigger a single time synchronization */
    } GTS_TransmissionControl_Type;

    typedef struct
    {
        uint32 Result;                          /* Result, delivers the result of the time synchronization protocol validation */
        boolean PartialValidation;              /* PartialValidation, allows to switch off parts of the validation checks */
    } GTS_Validation_Type;

    typedef struct
    {
        FrameAccess_Type** CanFramesPtr;        /* Pointer to supported CAN Frames */
        uint32 numberOfCanFrames;               /* Number of supported CAN Frames */
        FrameAccess_Type** LinFramesPtr;        /* Pointer to supported Lin Frames */
        uint32 numberOfLinFrames;               /* Number of supported Lin Frames */
    } FrameAccess_Config;

    /* Pdu MetaData Types */
    typedef struct
    {
        uint16 SoConGroupId;                    /* Socket connection group identifier */
        uint16 SoConId;                         /* Socket connection identifier */
    } SoAd_PduMetaData_Type;

    typedef struct
    {
        uint32 CanId;                           /* CAN identifier */
        Std_ReturnType Result;                  /* if the pdu was transmitted or trasmission of the pdu failed */
        PduLengthType* RxTpDataCntPtr;          /* Pointer to change the current position in Rx buffer */
    } J1939Tp_PduMetaData_Type;

    typedef struct
    {
        float64 Timestamp;                      /* Timestamp of a bus specific Rx message */
    } PduRxStatus_PduMetaData_Type;

    /* common Feature MetaData type */
    typedef struct
    {
        PduRxStatus_PduMetaData_Type* pduRxStatusMetaDataPtr;    /* Pointer to PduRxStatus specific MetaData */
        J1939Tp_PduMetaData_Type*     j1939TpMetaDataPtr;        /* Pointer to J1939Tp specific MetaData */
        SoAd_PduMetaData_Type*        soAdMetaDataPtr;           /* Pointer to SoAd specific MetaData */
    } Feature_MetaData_Type;
#ifdef __cplusplus
}
#endif

#endif /* FEATURE_TYPES_H */
