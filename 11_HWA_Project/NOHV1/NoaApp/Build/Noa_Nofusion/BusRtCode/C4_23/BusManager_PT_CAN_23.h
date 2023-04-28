/** !------------------------------------------------------------------------->
*
*  @file BusManager.h
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

/* File ID: 662b589c-5b0c-4c3c-82b5-bb79d2939ff1 */
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
extern DsTCanBoard_Address BusManager_PT_CAN_23_V71_V4_1_1_NOA_S;



/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/
/*EXTERN_C_DECL uint32 BM_PT_CAN_23_IDC_L2__CreditCountersAvailable(void);*/
uint32 BM_PT_CAN_23_IDC_L2__CreditCountersAvailable(void);

/*
*  Initialization Method of this BusManager configuration. All registered modules
*  will be initialized by this method.
*/
void BM_PT_CAN_23_Init(void);

void BM_PT_CAN_23_OnStart(void);

void BM_PT_CAN_23_OnStop(void);


#ifdef __cplusplus
}
#endif

