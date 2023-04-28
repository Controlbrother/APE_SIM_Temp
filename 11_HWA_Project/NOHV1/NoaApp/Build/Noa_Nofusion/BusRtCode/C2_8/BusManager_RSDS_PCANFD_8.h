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

/* File ID: cdde4cae-1780-4e24-9861-cd3624d8b3aa */
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
extern DsTCanBoard_Address BusManager_RSDS_PCANFD_8_CRminusADASminusPrivate__V0_4_S;



/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/
/*EXTERN_C_DECL uint32 BM_RSDS_PCANFD_8_IDC_L2__CreditCountersAvailable(void);*/
uint32 BM_RSDS_PCANFD_8_IDC_L2__CreditCountersAvailable(void);

/*
*  Initialization Method of this BusManager configuration. All registered modules
*  will be initialized by this method.
*/
void BM_RSDS_PCANFD_8_Init(void);

void BM_RSDS_PCANFD_8_OnStart(void);

void BM_RSDS_PCANFD_8_OnStop(void);


#ifdef __cplusplus
}
#endif

