/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Cfg_BusAccess.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief Declaration of hardware channel addresses for CanIf bus access.
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/* File ID: f4f4e548-48e0-471a-b17c-8b522484d50c */
#pragma once

#include <DsCan.h>
#include "Config.h"
#include "BusConfiguration.h"
#include "BusManager_RSDS_PCANFD_9.h"

#define CHANNEL_ADDRESS_COUNT 1

#ifdef __cplusplus
extern "C"
{
#endif

extern DsTCanBoard_Address* gp_CanIf_ChannelAddress[];

#ifdef __cplusplus
}
#endif

