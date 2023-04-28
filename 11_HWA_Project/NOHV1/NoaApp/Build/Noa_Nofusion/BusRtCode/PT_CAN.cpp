
/** !------------------------------------------------------------------------->
*
*  @file <BusConfiguration>.cpp
*
*  @creationDate 09 March 2022 12:20:14
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
*!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "PT_CAN_232437.h"

#include "C4_23/BusManager_PT_CAN_23.h"
#include "StateManager_generated.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/
 

/*----------------------------------------------------------------------------*/
/* FORWARD DECLARATIONS OF STATIC FUNCTIONS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/
 
 
/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/
/**************************************************************************************************\
 *** FUNCTION:
 ***     PT_CAN_VariableInitialize
 *** 
 *** DESCRIPTION:
 ***    This function is called before the application starts and may be used to extend the
 ***    initialization phase. 
 ***
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
void PT_CAN_VariableInitialize(void)
{
	StateManager_SetState(3, 0);
 

}

/**************************************************************************************************\
 *** FUNCTION:
 ***    DoPossibleCreditCounterInitialization
 *** 
 *** DESCRIPTION:
 ***    This function is called at start of bus configuration MainFunction to check if 
 ***    reset of credit counter is necessary. Only one bus configuration MainFunction will
 ***    do this, controlled by a StateManager Counter State.
 ***
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
UNUSED static void DoPossibleCreditCounterInitialization(void)
{
	if (0 == StateManager_GetState(3))
	{
		/* Reset 'all' credit counters to default values */
		StateManager_ResetCounterState(0);
 		StateManager_ResetCounterState(1);
 		StateManager_ResetCounterState(2);
 
		/* Reset counter for next simulation step */
		StateManager_ResetCounterState(3);
	}
	/* Decrement counter to indicate check has been done */
	StateManager_DecrementCounterState(3);
}

void PT_CAN_Com_MainFunction_242148(void)
{
    DoPossibleCreditCounterInitialization();
    BM_PT_CAN_23_IDC_L2_CanIf_UpdateBoards();
    BM_PT_CAN_23_IDC_L2_Com_MainFunction(1000);
    BM_PT_CAN_23_IDC_L2_Feature_MainFunction(1000);
}


