/** <!------------------------------------------------------------------------->
*
*  @file StateManager_external.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief External definition of a shared state management.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/

/* File ID: 80874cb8-af69-47b9-a9ff-aa8561f0ee57 */
#pragma once

#include <Platform_Types.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern void StateManager_RegisterCallback(uint32 index, void(*callback)(uint32, uint8, uint8));
extern void StateManager_UnregisterCallback(uint32 index, void(*callback)(uint32, uint8, uint8));
extern uint8 StateManager_GetState(uint32 index);
extern void StateManager_SetState(uint32 index, uint8 state);
extern void StateManager_DecrementCounterState(uint32 index);
extern void StateManager_ResetCounterState(uint32 index);
extern void StateManager_StateManagerInit(void);
extern void StateManager_SetState_Mutex(uint32 index, uint8 state);
extern void StateManager_GetState_SysIntCodeMap(uint32 index, void* State);

#ifdef __cplusplus
}
#endif /* __cplusplus */ 


