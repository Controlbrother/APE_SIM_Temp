/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Cbk.h
*
*  @brief Forward declaration of the Call back functions provide by Canif module
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
#pragma once

#include <Compiler.h>
#include "../Common/ComStack_Types.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define CANIF_CBK_H_AR_MAJOR_VERSION                 (0x03U)
#define CANIF_CBK_H_AR_MINOR_VERSION                 (0x02U)
#define CANIF_CBK_H_AR_PATCH_VERSION                 (0x01U)

#define CANIF_CBK_H_SW_MAJOR_VERSION                 (0x01)
#define CANIF_CBK_H_SW_MINOR_VERSION                 (0x0)
#define CANIF_CBK_H_SW_PATCH_VERSION                 (0x0)

extern FUNC(void, CANIF_CODE)CanIf_TxConfirmation(P2VAR(void, AUTOMATIC, AUTOMATIC)pCbArg, P2CONST(DsSCanMsg_Item, AUTOMATIC, AUTOMATIC)MsgItem);

extern FUNC(void, CANIF_CODE)CanIf_RxIndication(P2VAR(void, AUTOMATIC, AUTOMATIC)pCbArg, P2CONST(DsSCanMsg_Item, AUTOMATIC, AUTOMATIC)MsgItem);

extern FUNC(void, CANIF_CODE)CanIf_CancelTxConfirmation(P2CONST(Can_PduType, AUTOMATIC, AUTOMATIC)PduInfoPtr);

extern FUNC(void, CANIF_CODE)CanIf_ControllerBusOff(P2VAR(void, AUTOMATIC, AUTOMATIC)pCbArg, VAR(DsECanCh_Event, AUTOMATIC)Event);

extern FUNC(void, CANIF_CODE)CanIf_ConfirmPnAvailability(VAR(uint8, AUTOMATIC)Transceiver);

extern FUNC(void, CANIF_CODE)CanIf_ClearTrcvWufFlagIndication(VAR(uint8, AUTOMATIC)Transceiver);

extern FUNC(void, CANIF_CODE)CanIf_CheckTrcvWakeFlagIndication(P2VAR(void, AUTOMATIC,AUTOMATIC)pCbArg, VAR(DsECanCh_Event, AUTOMATIC)Event);

extern FUNC(void, CANIF_CODE)CanIf_TrcvModeIndication(VAR(uint8, AUTOMATIC)Transceiver, VAR(CanIf_TransceiverModeType, AUTOMATIC)TransceiverMode);

#ifdef __cplusplus
}
#endif
