/** <!------------------------------------------------------------------------->
*
*  @file Com_generated.h  
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief 
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/* File ID: 66839687-8697-428e-856b-5decbd46090e */
#pragma once

#include "../Config.h"
#include "../../BusConfiguration.h"
#include "Com_Types.h"

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

#define COM_DEV_ERROR_DETECT       STD_OFF

/* Definition of the I-PDUs that are available in the COM module. */
#define Com_IFC_FD1_209458_119634_232434 0 

/* Signal definition for the COM module. */
#define Com_X_Inst_299_IFCFuncAngCmdReqFlag_206868_119634_232434 0
#define Com_X_Inst_299_Checksum_IFC1_206869_119634_232434 1
#define Com_X_Inst_299_IFCTrqOvlCmdProtnValue_206870_119634_232434 2
#define Com_X_Inst_299_IFCTrqOvlCmdReqValue_206871_119634_232434 3
#define Com_X_Inst_299_IFCFuncTrqCmdReqFlag_206872_119634_232434 4
#define Com_X_Inst_299_IFCVibrationWarning_206873_119634_232434 5
#define Com_X_Inst_299_RollingCounter_IFC1_206874_119634_232434 6
#define Com_X_Inst_299_Checksum_IFC2_206875_119634_232434 7
#define Com_X_Inst_299_IFCAngCmdReqValue_206876_119634_232434 8
#define Com_X_Inst_299_IFCAngCmdReqProtnValue_206877_119634_232434 9
#define Com_X_Inst_299_RollingCounter_IFC2_206878_119634_232434 10

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */ 


/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_Init
 *** 
 *** DESCRIPTION:
 ***     Initializes internal and external interfaces and variables of the AUTOSAR COM layer for
 ***     further processing. It is called in OnInit application phase.
 *** 
 *** PARAMETERS:
 ***     Type                    Name    Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     const Com_ConfigType *  config  Pointer to the COM configuration data.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_Init(const Com_ConfigType * config);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_DeInit
 *** 
 *** DESCRIPTION:
 ***     This service stops the inter-ECU communication. All started I-PDU groups are stopped and
 ***     have to be started again, if needed, after Com_Init is called.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_DeInit(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_VariableInitialize
 *** 
 *** DESCRIPTION:
 ***    This function is called before the application starts and may be used to extend the
 ***    initialization phase. Depending on InitialValueUsage parameter, it is called either in OnInit
 ***    or OnStart application phase.
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_VariableInitialize(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_OnStart
 *** 
 *** DESCRIPTION:
 ***    This function is called before the application starts and may be used to extend the
 ***    initialization phase. It is called in OnStart application phase.
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_OnStart(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerTransmit
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer when an AUTOSAR COM I-PDU must be transmitted.
 ***     In this function, AUTOSAR COM copies the contents of its I-PDU transmit buffer to the
 ***     L-PDU buffer specified by SduDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type           Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType      ComTxPduId  The I-PDU ID to be triggered for sending.
 ***     PduInfoType *  PduInfoPtr  Contains the length (SduLength) of the received I-PDU and a
 ***                                pointer to a buffer (SduDataPtr) containing the I-PDU.
 *** 
 *** RETURNS:
 ***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
extern Std_ReturnType Com_TriggerTransmit(PduIdType ComTxPduId, PduInfoType * PduInfoPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_SendSignal
 *** 
 *** DESCRIPTION:
 ***     Updates the signal object identified by SignalId with the signal referenced by the
 ***     SignalDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
extern uint8 Com_SendSignal(Com_SignalIdType SignalId, const void * SignalDataPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_SendSignalGroup
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the associated I-PDU.
 ***     Before this call, all group signals should be updated in the shadow buffer by calling
 ***     Com_UpdateShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
extern uint8 Com_SendSignalGroup(Com_SignalGroupIdType SignalGroupId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_UpdateShadowSignal
 *** 
 *** DESCRIPTION:
 ***     Updates a group signal with the data referenced by SignalDataPtr. The group signal data is
 ***     updated in the shadow buffer, not in the I-PDU. To send out the shadow buffer,
 ***     Com_SendSignalGroup has to be called.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     const void *      SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_UpdateShadowSignal(Com_SignalIdType SignalId, const void * SignalDataPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateSignal
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that it cannot
 ***     provide a valid value for the signal.
 *** 
 *** PARAMETERS:
 ***     Type              Name      Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
extern uint8 Com_InvalidateSignal(Com_SignalIdType SignalId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateShadowSignal
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that it cannot
 ***     provide a valid value for the group signal, e.g., the sensor is faulty.
 *** 
 *** PARAMETERS:
 ***     Type              Name      Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_InvalidateShadowSignal(Com_SignalIdType SignalId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_InvalidateSignalGroup
 *** 
 *** DESCRIPTION:
 ***     Sender AUTOSAR software component indicates via the RTE to AUTOSAR COM that cannot provide
 ***     a valid value for the signal group.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
extern uint8 Com_InvalidateSignalGroup(Com_SignalGroupIdType SignalGroupId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TxConfirmation
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer after the PDU has been transmitted on the
 ***     network.
 *** 
 *** PARAMETERS:
 ***     Type       Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType  ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_TxConfirmation(PduIdType ComTxPduId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveSignal
 *** 
 *** DESCRIPTION:
 ***     The function copies the content of the associated shadow buffer to the associated I-PDU.
 ***     Before this call, all group signals should be updated in the shadow buffer by calling
 ***     Com_UpdateShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
extern uint8 Com_ReceiveSignal(Com_SignalIdType SignalId, void * SignalDataPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveSignalGroup
 *** 
 *** DESCRIPTION:
 ***     The function copies the received signal group from the I-PDU to the shadow buffer. After
 ***     this call, the group signals can be copied from the shadow buffer to the upper layer by
 ***     calling Com_ReceiveShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type                   Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalGroupIdType  SignalGroupId  ID of signal to be sent.
 *** 
 *** RETURNS:
 ***     uint8    The status code of the function call.
\**************************************************************************************************/
extern uint8 Com_ReceiveSignalGroup(Com_SignalGroupIdType SignalGroupId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_ReceiveShadowSignal
 *** 
 *** DESCRIPTION:
 ***     The function updates the group signal which is referenced by SignalDataPtr with the data
 ***     in the shadow buffer. The data in the shadow buffer should be updated by calling the
 ***     Com_ReceiveSignalGroup service before calling Com_ReceiveShadowSignal.
 *** 
 *** PARAMETERS:
 ***     Type              Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     Com_SignalIdType  SignalId       ID of signal to be sent.
 ***     void *            SignalDataPtr  Reference to the signal data to store the received data
 ***                                      in.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_ReceiveShadowSignal(Com_SignalIdType SignalId, void * SignalDataPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_RxIndication
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer after an I-PDU has been received.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            ComRxPduId  ID of AUTOSAR COM I-PDU that has been received.
 ***                                      Identifies the data that has been received.
 ***     const PduInfoType *  PduInfoPtr  Contains the length (SduLength) of the received I-PDU and
 ***                                      a pointer to a buffer (SduDataPtr) containing the I-PDU.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_RxIndication(PduIdType ComRxPduId, const PduInfoType * PduInfoPtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_GetStatus
 *** 
 *** DESCRIPTION:
 ***     Returns the status of the AUTOSAR COM module.
 *** 
 *** PARAMETERS:
 ***     -/-
 *** 
 *** RETURNS:
 ***     Com_StatusType    The status code of the function call.
\**************************************************************************************************/
extern Com_StatusType Com_GetStatus(void);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerIPDUSend
 *** 
 *** DESCRIPTION:
 ***     Trigger the I-PDU with the specified ID for transmission.
 *** 
 *** PARAMETERS:
 ***     Type       Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType  ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
extern Std_ReturnType Com_TriggerIPDUSend(PduIdType ComTxPduId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TriggerIPDU
 *** 
 *** DESCRIPTION:
 ***     This function is called by all IPDU triggers coming from the COM module.
 ***     The function routes the trigger command to the right trigger function depending on the used protocol.
 *** 
 *** PARAMETERS:
 ***     Type           Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType      ComTxPduId  The I-PDU ID to be triggered for sending.
 *** 
 *** RETURNS:
 ***     Std_ReturnType    The status code of the function call.
\**************************************************************************************************/
extern Std_ReturnType Com_TriggerIPDU(PduIdType ComTxPduId);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_StartOfReception
 *** 
 *** DESCRIPTION:
 ***     This function is called at the start of receiving an N-SDU. The N-SDU might be fragmented into 
 ***     multiple N-PDUs (FF with one or more following CFs) or might consist of a single N-PDU (SF).
 ***     The service shall provide the currently available maximum buffer size when invoked with TpSduLength equal to 0.
 *** 
 *** PARAMETERS:
 ***     Type               Name          Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType          id            Identification of the I-PDU.
 ***     const PduInfoType* info          Pointer to a PduInfoType structure containing the payload data (without protocol information) 
 ***                                      and payload length of the first frame or single frame of a transport protocol I-PDU reception, 
 ***                                      and the MetaData related to this PDU.
 ***                                      If neither first/single frame data nor MetaData are available, this parameter is set to NULL_PTR.
 ***     PduLengthType      TpSduLength   Total length of the N-SDU to be received.
 ***     PduLengthType*     bufferSizePtr Available receive buffer in the receiving module.
 ***                                      This parameter will be used to compute the Block Size (BS) in the transport protocol module.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Connection has been accepted. bufferSizePtr indicates the available receive buffer; reception is continued.
 ***                                   If no buffer of the requested size is available, a receive buffer size of 0 shall be indicated by bufferSizePtr.
 ***                        BUFREQ_E_NOT_OK: Connection has been rejected; reception is aborted. bufferSizePtr remains unchanged.
 ***                        BUFREQ_E_OVFL: No buffer of the required length can be provided; reception is aborted. bufferSizePtr remains unchanged.
\**************************************************************************************************/
extern BufReq_ReturnType Com_StartOfReception(PduIdType id, const PduInfoType* info, PduLengthType TpSduLength, PduLengthType* bufferSizePtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TpRxIndication
 *** 
 *** DESCRIPTION:
 ***     Called after an I-PDU has been received via the TP API, the result indicates whether the transmission was successful or not.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id          Identification of the received I-PDU.
 ***     Std_ReturnType       result      Result of the reception.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_TpRxIndication(PduIdType id, Std_ReturnType result);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TpTxConfirmation
 *** 
 *** DESCRIPTION:
 ***     This function is called after the I-PDU has been transmitted on its network, the result indicates whether the transmission was successful or not.
 *** 
 *** PARAMETERS:
 ***     Type                 Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id          Identification of the transmitted I-PDU.
 ***     Std_ReturnType       result      Result of the transmission of the I-PDU.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_TpTxConfirmation(PduIdType id, Std_ReturnType result);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_CopyRxData
 *** 
 *** DESCRIPTION:
 ***     This function is called to provide the received data of an I-PDU segment (N-PDU) to the upper layer.
 ***     Each call to this function provides the next part of the I-PDU data.
 ***     The size of the remaining buffer is written to the position indicated by bufferSizePtr.
 *** 
 *** PARAMETERS:
 ***     Type               Name          Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType          id            Identification of the received I-PDU.
 ***     const PduInfoType* info          Provides the source buffer (SduDataPtr) and the number of bytes to be copied (SduLength).
 ***                                      An SduLength of 0 can be used to query the current amount of available buffer in the upper layer module.
 ***                                      In this case, the SduDataPtr may be a NULL_PTR.
 ***     PduLengthType*     bufferSizePtr Available receive buffer after data has been copied.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Data copied successfully.
 ***                        BUFREQ_E_NOT_OK: Data was not copied because an error occurred.
\**************************************************************************************************/
extern BufReq_ReturnType Com_CopyRxData(PduIdType id, const PduInfoType* info, PduLengthType* bufferSizePtr);

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_CopyTxData
 *** 
 *** DESCRIPTION:
 ***     This function is called to acquire the transmit data of an I-PDU segment (N-PDU).
 ***     Each call to this function provides the next part of the I-PDU data unless retry->TpDataState is TP_DATARETRY.
 ***     In this case the function restarts to copy the data beginning at the offset from the current position indicated by retry->TxTpDataCnt.
 ***     The size of the remaining data is written to the position indicated by availableDataPtr.
 *** 
 *** PARAMETERS:
 ***     Type               Name               Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType            id               Identification of the transmitted I-PDU.
 ***     const PduInfoType*   info             Provides the destination buffer (SduDataPtr) and the number of bytes to be copied (SduLength).
 ***                                           If not enough transmit data is available, no data is copied by the upper layer module and BUFREQ_E_BUSY is returned.
 ***                                           The lower layer module may retry the call. An SduLength of 0 can be used to indicate state changes in the retry parameter 
 ***                                           or to query the current amount of available data in the upper layer module. In this case, the SduDataPtr may be a NULL_PTR.
 ***     const RetryInfoType* retry            This parameter is used to acknowledge transmitted data or to retransmit data after transmission problems.
 ***                                           If the retry parameter is a NULL_PTR, it indicates that the transmit data can be removed from the buffer immediately after it has been copied.
 ***                                           Otherwise, the retry parameter must point to a valid RetryInfoType element.
 ***                                           If TpDataState indicates TP_CONFPENDING, the previously copied data must remain in the TP buffer to be available for error recovery.
 ***                                           TP_DATACONF indicates that all data that has been copied before this call is confirmed and can be removed from the TP buffer.
 ***                                           Data copied by this API call is excluded and will be confirmed later.
 ***                                           TP_DATARETRY indicates that this API call shall copy previously copied data in order to recover from an error.
 ***                                           In this case TxTpDataCnt specifies the offset in bytes from the current data copy position.
 ***     PduLengthType*       availableDataPtr Available receive buffer after data has been copied.
 *** 
 *** RETURNS:
 ***     BufReq_ReturnType  BUFREQ_OK: Data has been copied to the transmit buffer completely as requested.
 ***                        BUFREQ_E_BUSY: Request could not be fulfilled, because the required amount of Tx data is not available.
 ***                                       The lower layer module may retry this call later on. No data has been copied.
 ***                        BUFREQ_E_NOT_OK: Data has not been copied. Request failed.
\**************************************************************************************************/
extern BufReq_ReturnType Com_CopyTxData(PduIdType id, const PduInfoType* info, const RetryInfoType* retry, PduLengthType* availableDataPtr);

#ifdef __cplusplus
}
#endif /* __cplusplus */ 

