/** <!------------------------------------------------------------------------->
*
*  @file PduR_Types.h
*
*  @brief Defines the internal and external types used by PduR module
*
*  @author
*    SajuJ
*
*  @description
*    <Description here>
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/
#ifndef PDUR_TYPES_H_
#define PDUR_TYPES_H_

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "../Common/ComStack_Types.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/
/** Indicate the operation is gateway */
#define PDUR_GATEWAY     0xFE

/** PDUR284:States of the PDU Router */
typedef enum PduR_StateType
{
    PDUR_UNINIT = 0,
    PDUR_ONLINE,
    PDUR_REDUCED
} PduR_StateType;

typedef enum DataProvision_Type
{
    DIRECT,                       
    TRIGGER_TRANSMIT    
} DataProvision_Type;

typedef uint8 PduR_ParameterValueType;

/*----------------------------------------------------------------------------*/
/* TYPEDEFS / STRUCTURES */
/*----------------------------------------------------------------------------*/
typedef struct PduRRoutingPoint_Type
{
    uint8 ModuleIndex;
    PduIdType PduRef;
} PduRRoutingPoint_Type;

/* Routing table types -- BEGIN */
typedef struct PduRTxRouting_Type
{
    PduRRoutingPoint_Type Source;
    uint8 DestinationCount;
    uint32 DestinationIndex;
} PduRTxRouting_Type;

typedef struct PduRRxRouting_Type
{
    PduRRoutingPoint_Type Destination;
} PduRRxRouting_Type;

typedef struct PduRModuleFunctions_Type
{
    Std_ReturnType    (*transmitFunction)         (PduIdType TxPduId, const PduInfoType* PduInfoPtr);
    Std_ReturnType    (*triggerTransmitFunction)  (PduIdType PduId, PduInfoType* PduInfoPtr);
    void              (*txConfirmationFunction)   (PduIdType PduId);
    void              (*rxIndicationFunction)     (PduIdType RxPduId, const PduInfoType* PduInfoPtr);
    BufReq_ReturnType (*startOfReceptionFunction) (PduIdType id, const PduInfoType* info, PduLengthType TpSduLength, PduLengthType* bufferSizePtr);
    void              (*tpRxIndicationFunction)   (PduIdType id, Std_ReturnType result);
    void              (*tpTxConfirmationFunction) (PduIdType id, Std_ReturnType result);
    BufReq_ReturnType (*copyRxDataFunction)       (PduIdType id, const PduInfoType* info, PduLengthType* bufferSizePtr);
    BufReq_ReturnType (*copyTxDataFunction)       (PduIdType id, const PduInfoType* info, const RetryInfoType* retry, PduLengthType* availableDataPtr);
} PduRModuleFunctions_Type;

/* Routing table types -- END */


typedef struct PduRTxBuffer_Type
{
    uint16 Depth;
    uint16 Length;
} PduRTxBuffer_Type;

typedef struct PduRDestPdu_Type
{
    DataProvision_Type DataProvision;
    PduIdType DestPduRef;
    PduRTxBuffer_Type* TxBufferRef;
} PduRDestPdu_Type;

typedef struct PduRRoutingPathGroup_Type
{
    boolean PduRIsEnabledAtInit;
    uint16 PduRRoutingPathGroupId;
    PduRDestPdu_Type* PduRDestPduRef;
} PduRRoutingPathGroup_Type;


typedef struct PduRTxBufferTable_Type
{
    uint16 PduRMaxTxBufferNumber;
    PduRTxBuffer_Type* PduRTxBuffer;
} PduRTxBufferTable_Type;

typedef struct PduRTpBuffer_Type
{
    uint16 Length;
}PduRTpBuffer_Type;

typedef struct PduRTpBufferTable_Type
{
    uint16 PduRMaxTpBufferNumber;
    PduRTpBuffer_Type* PduRTpBuffer;
} PduRTpBufferTable_Type;

/*----------------------------------------------------------------------------*/
typedef struct PduRDefaultValue_Type
{
    uint8 DefaultValueElement;
    uint8 ElementBytePosition;
} PduRDefaultValue_Type;

typedef struct PduRSrcPdu_Type
{
    uint16 HandleId;
    PduIdType SrcPduRef;
} PduRSrcPdu_Type;

typedef struct PduRRoutingPath_Type
{
    uint8 SduLength;
    uint16 TpChunkSize;
    PduRSrcPdu_Type* PduRSrcPdu;
    PduRDestPdu_Type* PduRDestPdu;
    PduRDefaultValue_Type* PduRDefaultValue;
} PduRRoutingPath_Type;

typedef struct PduR_PBConfigType
{
    PduIdType MaxNumTxPaths;
    PduIdType MaxNumRxPaths;

    PduRModuleFunctions_Type* gp_TargetModules;

    PduRTxRouting_Type* gp_TxRoutingPaths;
    PduRRoutingPoint_Type* gp_TxEndPoints;
    PduRRxRouting_Type* gp_RxRoutingPaths;
} PduR_PBConfigType;

#endif /* PDUR_TYPES_H_ */
