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

/* File ID: ad0cc206-da47-4f5d-99dd-192d8a53f3f7 */
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
extern DsTCanBoard_Address BusManager_ADAS_CAN_22_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_S;



/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/
/*EXTERN_C_DECL uint32 BM_ADAS_CAN_22_IDC_L2__CreditCountersAvailable(void);*/
uint32 BM_ADAS_CAN_22_IDC_L2__CreditCountersAvailable(void);

/*
*  Initialization Method of this BusManager configuration. All registered modules
*  will be initialized by this method.
*/
void BM_ADAS_CAN_22_Init(void);

void BM_ADAS_CAN_22_OnStart(void);

void BM_ADAS_CAN_22_OnStop(void);


#ifdef __cplusplus
}
#endif

