/** !------------------------------------------------------------------------->
*
*  @file BusManager.h
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

/* File ID: 3a08ffd3-96f0-4721-bd82-eff236f11b9f */
#pragma once

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "DsCanBoard.h"
#include <Platform_Types.h>

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C"
{
#endif

/*----------------------------------------------------------------------------*/
/* FORWARD DECLARATIONS OF STATIC FUNCTIONS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/
extern DsTCanBoard_Address BusManager_ADAS_CAN_23_V71_V4_1_1_NOA_S;



/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/
/*EXTERN_C_DECL uint32 BM_ADAS_CAN_23_IFC_IDC_L2__CreditCountersAvailable(void);*/
uint32 BM_ADAS_CAN_23_IFC_IDC_L2__CreditCountersAvailable(void);

/*
*  Initialization Method of this BusManager configuration. All registered modules
*  will be initialized by this method.
*/
void BM_ADAS_CAN_23_Init(void);

void BM_ADAS_CAN_23_OnStart(void);

void BM_ADAS_CAN_23_OnStop(void);


#ifdef __cplusplus
}
#endif

