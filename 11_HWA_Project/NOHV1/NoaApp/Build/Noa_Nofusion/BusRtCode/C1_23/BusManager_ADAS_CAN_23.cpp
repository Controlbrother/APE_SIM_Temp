/** !------------------------------------------------------------------------->
*
*  @file <Bus Configuration>.cpp
*
*  @creationDate 09 March 2022 12:20:13
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
#include "BusManager_ADAS_CAN_23.h"

#include "ADAS_CAN_232434_external.h"
#include "S/IFC_IDC_L2/CanIf/CanIf_external.h"
#include "S/IFC_IDC_L2/Com/Com_external.h"
#include "S/IFC_IDC_L2/Feature/Feature_external.h"
#include "S/IFC_IDC_L2/PduR/PduR_external.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* DECLARATIONS OF FUNCTIONS */
/*----------------------------------------------------------------------------*/

static void BM_ADAS_CAN_23_VariableInitialize(void);

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/
DSCAN_DEFINE_SIMULATED_CHANNEL(BusManager_ADAS_CAN_23_V71_V4_1_1_NOA_S);


    
/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS															  */
/*----------------------------------------------------------------------------*/
/**************************************************************************************************\
 *** FUNCTION:
 ***     BM_ADAS_CAN_23_IFC_IDC_L2__CreditCountersAvailable
 *** 
 *** DESCRIPTION:
 ***    This function checks if sending credits for this ECU are available.
 ***
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     Overall available credit counters
 \**************************************************************************************************/
uint32 BM_ADAS_CAN_23_IFC_IDC_L2__CreditCountersAvailable(void)
{
	return (uint32) (StateManager_GetState(0));
}


void BM_ADAS_CAN_23_Init(void) {
    BusManager_ADAS_CAN_23_V71_V4_1_1_NOA_S = CANBUSACCESS_5_CAN_CH;
    BM_ADAS_CAN_23_IFC_IDC_L2_CanIf_InitDefaultConfig();
    BM_ADAS_CAN_23_IFC_IDC_L2_PduR_Init(&BM_ADAS_CAN_23_IFC_IDC_L2_PduR_Config);
    BM_ADAS_CAN_23_IFC_IDC_L2_Com_Init(NULL_PTR);
    BM_ADAS_CAN_23_IFC_IDC_L2_Feature_Init();
    BM_ADAS_CAN_23_VariableInitialize();
}

void BM_ADAS_CAN_23_OnStart(void) {
    BM_ADAS_CAN_23_IFC_IDC_L2_CanIf_OnStart();
    BM_ADAS_CAN_23_IFC_IDC_L2_Com_OnStart();
    BM_ADAS_CAN_23_IFC_IDC_L2_Feature_OnStart();
}

void BM_ADAS_CAN_23_OnStop(void) {
    BM_ADAS_CAN_23_IFC_IDC_L2_CanIf_OnStop();
}

static void BM_ADAS_CAN_23_VariableInitialize(void) {
    ADAS_CAN_VariableInitialize();
    BM_ADAS_CAN_23_IFC_IDC_L2_CanIf_VariableInitialize();
    BM_ADAS_CAN_23_IFC_IDC_L2_Com_VariableInitialize();
    BM_ADAS_CAN_23_IFC_IDC_L2_PduR_VariableInitialize();
    BM_ADAS_CAN_23_IFC_IDC_L2_Feature_VariableInitialize();
}

