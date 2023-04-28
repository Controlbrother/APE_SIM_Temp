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

/* File ID: 0e0d93c6-fde0-4675-9f27-3990d9015886 */
#pragma once

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "DsCanBoard.h"

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
extern DsTCanBoard_Address BusManager_ADAS_CAN_24_V71_SecOC_SyncMsg_S;



/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/

/*
*  Initialization Method of this BusManager configuration. All registered modules
*  will be initialized by this method.
*/
void BM_ADAS_CAN_24_Init(void);

void BM_ADAS_CAN_24_OnStart(void);

void BM_ADAS_CAN_24_OnStop(void);


#ifdef __cplusplus
}
#endif

