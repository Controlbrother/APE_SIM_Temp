/** <!------------------------------------------------------------------------->
*
*  @file StateManager_generated.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief Header definition of a shared state management.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/

/* File ID: acdb1c3a-e466-4bd3-b2ca-9c30861be886 */
#pragma once

#include <Platform_Types.h>

typedef void(*StateChangedCallback)(uint32, uint8, uint8);

typedef struct {
    uint32 Size;
    uint32 Capacity;
    StateChangedCallback* Callbacks;
} StateChangedCallbackList;

#define BUSCFG_STATE_DISABLE 0
#define BUSCFG_STATE_ENABLE  1
#define BUSCFG_STATE_RXONLY  2

#define COM_CONTROLLER_DISABLE 0
#define COM_CONTROLLER_ENABLE  1

/* Macro for checking whether there is a BusCfgEnable state transition from DISABLED or RX-ONLY to ENABLED. */
#define BUSCFG_STATE_CHANGED_TO_ENABLED(newState, oldState) ((oldState == BUSCFG_STATE_DISABLE || oldState == BUSCFG_STATE_RXONLY) && newState == BUSCFG_STATE_ENABLE)
/* Macro for checking whether there is a BusCfgEnable state transition from DISABLED to RX-ONLY or ENABLED or from RX-ONLY TO ENABLED. */
#define BUSCFG_STATE_CHANGED_TO_OPERATIONAL(newState, oldState) ((oldState == BUSCFG_STATE_DISABLE && (newState > oldState)) || (oldState == BUSCFG_STATE_RXONLY && newState == BUSCFG_STATE_ENABLE))

/* Macro for checking whether there is a BusCfgEnable state transition from DISABLED to ENABLED. */
#define BUSCFG_STATE_CHANGED_FROM_DISABLE_TO_ENABLED(newState, oldState) ((oldState == BUSCFG_STATE_DISABLE) && (newState == BUSCFG_STATE_ENABLE))
/* Macro for checking whether there is a BusCfgEnable state transition from DISABLED to RXONLY. */
#define BUSCFG_STATE_CHANGED_FROM_DISABLE_TO_RXONLY(newState, oldState) ((oldState == BUSCFG_STATE_DISABLE) && (newState == BUSCFG_STATE_RXONLY))

/* Macro for checking whether there is a BusCfgEnable state transition from ENABLED to DISABLE. */
#define BUSCFG_STATE_CHANGED_FROM_ENABLE_TO_DISABLE(newState, oldState) ((oldState == BUSCFG_STATE_ENABLE) && (newState == BUSCFG_STATE_DISABLE))
/* Macro for checking whether there is a BusCfgEnable state transition from ENABLED to RXONLY. */
#define BUSCFG_STATE_CHANGED_FROM_ENABLE_TO_RXONLY(newState, oldState) ((oldState == BUSCFG_STATE_ENABLE) && (newState == BUSCFG_STATE_RXONLY))

/* Macro for checking whether there is a BusCfgEnable state transition from RXONLY to ENABLED. */
#define BUSCFG_STATE_CHANGED_FROM_RXONLY_TO_ENABLED(newState, oldState) ((oldState == BUSCFG_STATE_RXONLY) && (newState == BUSCFG_STATE_ENABLE))
/* Macro for checking whether there is a BusCfgEnable state transition from RXONLY to DISABLED. */
#define BUSCFG_STATE_CHANGED_FROM_RXONLY_TO_DISABLE(newState, oldState) ((oldState == BUSCFG_STATE_RXONLY) && (newState == BUSCFG_STATE_DISABLE))

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */ 

void StateManager_RegisterCallback(uint32 index, StateChangedCallback callback);
void StateManager_UnregisterCallback(uint32 index, StateChangedCallback callback);
uint8 StateManager_GetState(uint32 index);
void StateManager_SetState(uint32 index, uint8 state);
void StateManager_StateManagerInit(void);
void StateManager_SetState_Mutex(uint32 index, uint8 state);
void StateManager_GetState_SysIntCodeMap(uint32 index, void* State);
void StateManager_DecrementCounterState(uint32 index);
void StateManager_ResetCounterState(uint32 index);

/*SysInt code mapping region*/
#ifdef __cplusplus
}
#endif /* __cplusplus */ 

