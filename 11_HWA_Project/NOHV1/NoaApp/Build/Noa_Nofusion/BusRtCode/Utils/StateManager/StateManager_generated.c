/** <!------------------------------------------------------------------------->
*
*  @file StateManager_generated.c 
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief Definition of a shared state management with automatic dependency management.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/
#include <DsStd.h>
#include "StateManager_generated.h"
#include "BMUtils.h"
#include <stdlib.h>


static uint8 initialized = 0;
static uint8 states[16] = {
	 8,  /* CANFunctionBlock Entity (ID: 232442) */
	 8,  /* CANFunctionBlock Entity (ID: 232444) */
	 8,  /* CANFunctionBlock Entity (ID: 232443) */
	 4,  /* ApplicationProcess Entity (ID: 241474) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 15766) */
	 1,  /* BusConfigurationFunctionBlock Entity (ID: 232434) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17280) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17698) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17649) */
	 1,  /* BusConfigurationFunctionBlock Entity (ID: 232435) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17296) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 15501) */
	 1,  /* BusConfigurationFunctionBlock Entity (ID: 232436) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17637) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17695) */
	 1,  /* BusConfigurationFunctionBlock Entity (ID: 232437) */
};
static uint8 defaultStates[16] = {
	 8,  /* CANFunctionBlock Entity (ID: 232442) */
	 8,  /* CANFunctionBlock Entity (ID: 232444) */
	 8,  /* CANFunctionBlock Entity (ID: 232443) */
	 4,  /* ApplicationProcess Entity (ID: 241474) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 15766) */
	 1,  /* BusConfigurationFunctionBlock Entity (ID: 232434) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17280) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17698) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17649) */
	 1,  /* BusConfigurationFunctionBlock Entity (ID: 232435) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17296) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 15501) */
	 1,  /* BusConfigurationFunctionBlock Entity (ID: 232436) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17637) */
	 1,  /* BusCfgConfiguredInstance Entity (ID: 17695) */
	 1,  /* BusConfigurationFunctionBlock Entity (ID: 232437) */
}; /* this array will never change */
static StateChangedCallbackList callbacks[16] = {0};

/**************************************************************************************************\
 *** FUNCTION:
 ***     RegisterCallback
 *** 
 *** DESCRIPTION:
 ***     Registers a new callback function for the given state index. 
 ***     If the state of the provided index changes, the callback function is called.
 ***     This function should be only called in the initialization phase, because it dynamically allocates memory.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 ***     StateChangedCallback callback       Callback function reference
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void StateManager_RegisterCallback(uint32 index, StateChangedCallback callback) {
    StateChangedCallbackList* list = &callbacks[index];
    if(list->Callbacks == NULL) {
        list->Capacity = 1;
        list->Callbacks = (StateChangedCallback*)malloc(sizeof(StateChangedCallback) * list->Capacity);
    } else if(list->Size == list->Capacity) {
        list->Capacity *= 2;
        list->Callbacks = (StateChangedCallback*)realloc(list->Callbacks, sizeof(StateChangedCallback) * list->Capacity);
    }
    list->Callbacks[list->Size++] = callback;

    /* call the callback function in case the actual value differs from default value */
    if(states[index] != defaultStates[index])
    {
        callback(index, states[index], defaultStates[index]);
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     UnregisterCallback
 *** 
 *** DESCRIPTION:
 ***     Unregisters the provided callback function from the given state index.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 ***     StateChangedCallback callback       Callback function reference
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void StateManager_UnregisterCallback(uint32 index, StateChangedCallback callback) {
	uint32 i;
    StateChangedCallbackList* list = &callbacks[index];
    if(list->Callbacks == NULL) return;
	for(i = 0; i < list->Size; i++) {
		if(list->Callbacks[i] == callback) {
			list->Callbacks[i] = list->Callbacks[list->Size - 1]; /* move last element to the newly free place */
			list->Size--;
			return;
		}
	}
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     InvokeCallbacks
 *** 
 *** DESCRIPTION:
 ***     Invokes all callbacks for the provided state index.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 ***     uint8                newState          The new state
 ***     uint8                oldState          The current state
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
static void InvokeCallbacks(uint32 index, uint8 newState, uint8 oldState) {
    uint32 i;
    StateChangedCallbackList* list = &callbacks[index];
    for(i = 0; i < list->Size; i++) {
        list->Callbacks[i](index, newState, oldState);
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     StateManager_GetState
 *** 
 *** DESCRIPTION:
 ***     Returns the state of the provided state index.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 *** 
 *** RETURNS:
 ***     uint8 - The state of the provided index.
\**************************************************************************************************/
uint8 StateManager_GetState(uint32 index) {
    return states[index];
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     StateManager_GetState_SysIntCodeMap
 *** 
 *** DESCRIPTION:
 ***     Returns the state of the provided state index.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 ***     void*                state          The argument received when the SysIntCode mapping takes plave
 *** 
 *** RETURNS:
 ***     void - updates the state of the provided index to the pointer address.
\**************************************************************************************************/
void StateManager_GetState_SysIntCodeMap(uint32 index, void* State) {
    *((uint8 *) State) = states[index];
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     StateManager_SetState
 *** 
 *** DESCRIPTION:
 ***     Sets the state of the provided state index to the given value.
 ***     This function should not be called for dependend states, because they are automatically derived from all dependencies.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 ***     uint8                state          The new state.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void StateManager_SetState(uint32 index, uint8 state) {
    uint8 oldState;

    if(state != states[index]) {
        oldState = states[index];
        states[index] = state;
        InvokeCallbacks(index, state, oldState);
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     StateManager_DecrementCounterState
 *** 
 *** DESCRIPTION:
 ***     Decrements the state (counter) of the provided state index by one.
 ***     If state (counter) is zero no more decrement.
 ***     This function should not be called for dependend states, because they are automatically derived from all dependencies.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void StateManager_DecrementCounterState(uint32 index) {
    uint8 oldState = states[index];

    if(oldState > 0) {
		uint8 state = oldState-1;
        states[index] = state;
        InvokeCallbacks(index, state, oldState);
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     StateManager_ResetCounterState
 *** 
 *** DESCRIPTION:
 ***     Reset state (counter) to default value as set during creation.
 ***     This function should not be called for dependend states, because they are automatically derived from all dependencies.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void StateManager_ResetCounterState(uint32 index) {
    uint8 oldState;
	uint8 state = defaultStates[index];

    if(state != states[index]) {
        oldState = states[index];
        states[index] = state;
        InvokeCallbacks(index, state, oldState);
    }
}

/**************************************************************************************************\
 *** FUNCTION:
 ***     StateManager_SetState_Mutex
 *** 
 *** DESCRIPTION:
 ***     Sets the state of the provided state index to the given value during the SysIntCode mapping.
 ***     This function is specific to the CanIf module since the setting of the states in CanIf is Mutex protected.
 ***     This function should not be called for dependend states, because they are automatically derived from all dependencies.
 *** 
 *** PARAMETERS:
 ***     Type                 Name           Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     uint32               index          The index for the state array.
 ***     uint8                state          The new state.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
UNUSED static uint32 InterruptStatus = 0;
void StateManager_SetState_Mutex(uint32 index, uint8 state) {
    uint8 oldState;

    if(state != states[index]) {
        /* Mutex protected region begins,Obtain lock for Mutex */
        DS_RTOS_INT_SAVE_AND_DISABLE(InterruptStatus);
         oldState = states[index];
         states[index] = state;
         InvokeCallbacks(index, state, oldState);
        /* Mutex protected region ends,Release Mutex lock */
        DS_RTOS_INT_RESTORE(InterruptStatus);
    }
}


/**************************************************************************************************\
 *** FUNCTION:
 ***     StateManager_StateManagerInit
 *** 
 *** DESCRIPTION:
 ***     Initializes the StateManager by registering all automatically generated callbacks.
 *** 
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void StateManager_StateManagerInit(void) {
	if(initialized) return;
	initialized = 1;

}

