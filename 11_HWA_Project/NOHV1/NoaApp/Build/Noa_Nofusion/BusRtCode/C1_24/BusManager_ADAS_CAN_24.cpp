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
#include "BusManager_ADAS_CAN_24.h"

#include "ADAS_CAN_232434_external.h"
#include "S/DSPACE/CanIf/CanIf_external.h"
#include "S/DSPACE/Com/Com_external.h"
#include "S/DSPACE/Feature/Feature_external.h"
#include "S/DSPACE/PduR/PduR_external.h"

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* DECLARATIONS OF FUNCTIONS */
/*----------------------------------------------------------------------------*/

static void BM_ADAS_CAN_24_VariableInitialize(void);

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/
DSCAN_DEFINE_SIMULATED_CHANNEL(BusManager_ADAS_CAN_24_V71_SecOC_SyncMsg_S);


    
/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS															  */
/*----------------------------------------------------------------------------*/

void BM_ADAS_CAN_24_Init(void) {
    BusManager_ADAS_CAN_24_V71_SecOC_SyncMsg_S = CANBUSACCESS_5_CAN_CH;
    BM_ADAS_CAN_24_DSPACE_CanIf_InitDefaultConfig();
    BM_ADAS_CAN_24_DSPACE_PduR_Init(&BM_ADAS_CAN_24_DSPACE_PduR_Config);
    BM_ADAS_CAN_24_DSPACE_Com_Init(NULL_PTR);
    BM_ADAS_CAN_24_DSPACE_Feature_Init();
    BM_ADAS_CAN_24_VariableInitialize();
}

void BM_ADAS_CAN_24_OnStart(void) {
    BM_ADAS_CAN_24_DSPACE_CanIf_OnStart();
    BM_ADAS_CAN_24_DSPACE_Com_OnStart();
    BM_ADAS_CAN_24_DSPACE_Feature_OnStart();
}

void BM_ADAS_CAN_24_OnStop(void) {
    BM_ADAS_CAN_24_DSPACE_CanIf_OnStop();
}

static void BM_ADAS_CAN_24_VariableInitialize(void) {
    ADAS_CAN_VariableInitialize();
    BM_ADAS_CAN_24_DSPACE_CanIf_VariableInitialize();
    BM_ADAS_CAN_24_DSPACE_Com_VariableInitialize();
    BM_ADAS_CAN_24_DSPACE_PduR_VariableInitialize();
    BM_ADAS_CAN_24_DSPACE_Feature_VariableInitialize();
}

