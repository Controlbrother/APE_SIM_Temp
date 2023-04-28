/** !------------------------------------------------------------------------->
*
*  @file <Bus Configuration>.cpp
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief 
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
#if (defined(DS_PLATFORM_SMARTHIL) || defined(DS_PLATFORM_SMARTBOX)) && !defined(HOST_DEBUG)
#include <IOCode_Data.h>
#elif defined(DS_PLATFORM_OFFSIM)
#else 
    #error "Unknown Platform"
#endif
#include <Platform_Types.h>
#include "StateManager_generated.h"
#include "BusManager_PT_CAN_23.h"

#include "PT_CAN_232437_external.h"
#include "S/IDC_L2/CanIf/CanIf_external.h"
#include "S/IDC_L2/Com/Com_external.h"
#include "S/IDC_L2/Feature/Feature_external.h"
#include "S/IDC_L2/PduR/PduR_external.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* DECLARATIONS OF FUNCTIONS */
/*----------------------------------------------------------------------------*/

static void BM_PT_CAN_23_VariableInitialize(void);

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/
DSCAN_DEFINE_SIMULATED_CHANNEL(BusManager_PT_CAN_23_V71_V4_1_1_NOA_S);


    
/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS															  */
/*----------------------------------------------------------------------------*/
/**************************************************************************************************\
 *** FUNCTION:
 ***     BM_PT_CAN_23_IDC_L2__CreditCountersAvailable
 *** 
 *** DESCRIPTION:
 ***    This function checks if sending credits for this ECU are available.
 ***
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     Overall available credit counters
 \**************************************************************************************************/
uint32 BM_PT_CAN_23_IDC_L2__CreditCountersAvailable(void)
{
	return (uint32) (StateManager_GetState(0));
}


void BM_PT_CAN_23_Init(void) {
    BusManager_PT_CAN_23_V71_V4_1_1_NOA_S = CANBUSACCESS_8_CAN_CH;
    BM_PT_CAN_23_IDC_L2_CanIf_InitDefaultConfig();
    BM_PT_CAN_23_IDC_L2_PduR_Init(&BM_PT_CAN_23_IDC_L2_PduR_Config);
    BM_PT_CAN_23_IDC_L2_Com_Init(NULL_PTR);
    BM_PT_CAN_23_IDC_L2_Feature_Init();
    BM_PT_CAN_23_VariableInitialize();
}

void BM_PT_CAN_23_OnStart(void) {
    BM_PT_CAN_23_IDC_L2_CanIf_OnStart();
    BM_PT_CAN_23_IDC_L2_Com_OnStart();
    BM_PT_CAN_23_IDC_L2_Feature_OnStart();
}

void BM_PT_CAN_23_OnStop(void) {
    BM_PT_CAN_23_IDC_L2_CanIf_OnStop();
}

static void BM_PT_CAN_23_VariableInitialize(void) {
    PT_CAN_VariableInitialize();
    BM_PT_CAN_23_IDC_L2_CanIf_VariableInitialize();
    BM_PT_CAN_23_IDC_L2_Com_VariableInitialize();
    BM_PT_CAN_23_IDC_L2_PduR_VariableInitialize();
    BM_PT_CAN_23_IDC_L2_Feature_VariableInitialize();
}

