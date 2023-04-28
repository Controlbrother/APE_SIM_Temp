
/** !------------------------------------------------------------------------->
*
*  @file <BusConfiguration>.cpp
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
*!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "ADAS_CAN_232434.h"

#include "C1_22/BusManager_ADAS_CAN_22.h"
#include "C1_23/BusManager_ADAS_CAN_23.h"
#include "C1_24/BusManager_ADAS_CAN_24.h"
#include "StateManager_generated.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/
#define MAX_COM_MAIN_FUNCTIONS 3
#define MAX_FEATURE_MAIN_FUNCTIONS 3
 

/*----------------------------------------------------------------------------*/
/* FORWARD DECLARATIONS OF STATIC FUNCTIONS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/
static void (*rrCom_MainFunctions[]) (sint64 param) =
{
    BM_ADAS_CAN_22_IDC_L2_Com_MainFunction,
    BM_ADAS_CAN_23_IFC_IDC_L2_Com_MainFunction,
    BM_ADAS_CAN_24_DSPACE_Com_MainFunction,
};
static uint32 preferredCom_MainFunctionIndex;
static void (*rrFeature_MainFunctions[]) (sint64 param) =
{
    BM_ADAS_CAN_22_IDC_L2_Feature_MainFunction,
    BM_ADAS_CAN_23_IFC_IDC_L2_Feature_MainFunction,
    BM_ADAS_CAN_24_DSPACE_Feature_MainFunction,
};
static uint32 preferredFeature_MainFunctionIndex;
 
 
/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/
/**************************************************************************************************\
 *** FUNCTION:
 ***     ADAS_CAN_VariableInitialize
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
void ADAS_CAN_VariableInitialize(void)
{
	StateManager_SetState(3, 0);
 
    preferredCom_MainFunctionIndex = 0;
    preferredFeature_MainFunctionIndex = 0;

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

void ADAS_CAN_Com_MainFunction_232415(void)
{
	uint32 i;
    DoPossibleCreditCounterInitialization();
    BM_ADAS_CAN_22_IDC_L2_CanIf_UpdateBoards();
    BM_ADAS_CAN_23_IFC_IDC_L2_CanIf_UpdateBoards();
    BM_ADAS_CAN_24_DSPACE_CanIf_UpdateBoards();
    for (i = 0; i < MAX_COM_MAIN_FUNCTIONS; i++)
    {
        uint32 currentEcu = (i + preferredCom_MainFunctionIndex) % MAX_COM_MAIN_FUNCTIONS;
        (*rrCom_MainFunctions[currentEcu])(1000);
    }
    preferredCom_MainFunctionIndex = (preferredCom_MainFunctionIndex + 1) % MAX_COM_MAIN_FUNCTIONS;

    for (i = 0; i < MAX_FEATURE_MAIN_FUNCTIONS; i++)
    {
        uint32 currentEcu = (i + preferredFeature_MainFunctionIndex) % MAX_FEATURE_MAIN_FUNCTIONS;
        (*rrFeature_MainFunctions[currentEcu])(1000);
    }
    preferredFeature_MainFunctionIndex = (preferredFeature_MainFunctionIndex + 1) % MAX_FEATURE_MAIN_FUNCTIONS;

}


