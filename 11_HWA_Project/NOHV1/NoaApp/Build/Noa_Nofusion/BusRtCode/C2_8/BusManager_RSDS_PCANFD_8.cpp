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
#include "BusManager_RSDS_PCANFD_8.h"

#include "RSDS_PCANFD_232435_external.h"
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

static void BM_RSDS_PCANFD_8_VariableInitialize(void);

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/
DSCAN_DEFINE_SIMULATED_CHANNEL(BusManager_RSDS_PCANFD_8_CRminusADASminusPrivate__V0_4_S);


    
/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS															  */
/*----------------------------------------------------------------------------*/
/**************************************************************************************************\
 *** FUNCTION:
 ***     BM_RSDS_PCANFD_8_IDC_L2__CreditCountersAvailable
 *** 
 *** DESCRIPTION:
 ***    This function checks if sending credits for this ECU are available.
 ***
 *** PARAMETERS:
 *** 
 *** RETURNS:
 ***     Overall available credit counters
 \**************************************************************************************************/
uint32 BM_RSDS_PCANFD_8_IDC_L2__CreditCountersAvailable(void)
{
	return (uint32) (StateManager_GetState(1));
}


void BM_RSDS_PCANFD_8_Init(void) {
    BusManager_RSDS_PCANFD_8_CRminusADASminusPrivate__V0_4_S = CANBUSACCESS_6_CAN_CH;
    BM_RSDS_PCANFD_8_IDC_L2_CanIf_InitDefaultConfig();
    BM_RSDS_PCANFD_8_IDC_L2_PduR_Init(&BM_RSDS_PCANFD_8_IDC_L2_PduR_Config);
    BM_RSDS_PCANFD_8_IDC_L2_Com_Init(NULL_PTR);
    BM_RSDS_PCANFD_8_IDC_L2_Feature_Init();
    BM_RSDS_PCANFD_8_VariableInitialize();
}

void BM_RSDS_PCANFD_8_OnStart(void) {
    BM_RSDS_PCANFD_8_IDC_L2_CanIf_OnStart();
    BM_RSDS_PCANFD_8_IDC_L2_Com_OnStart();
    BM_RSDS_PCANFD_8_IDC_L2_Feature_OnStart();
}

void BM_RSDS_PCANFD_8_OnStop(void) {
    BM_RSDS_PCANFD_8_IDC_L2_CanIf_OnStop();
}

static void BM_RSDS_PCANFD_8_VariableInitialize(void) {
    RSDS_PCANFD_VariableInitialize();
    BM_RSDS_PCANFD_8_IDC_L2_CanIf_VariableInitialize();
    BM_RSDS_PCANFD_8_IDC_L2_Com_VariableInitialize();
    BM_RSDS_PCANFD_8_IDC_L2_PduR_VariableInitialize();
    BM_RSDS_PCANFD_8_IDC_L2_Feature_VariableInitialize();
}

