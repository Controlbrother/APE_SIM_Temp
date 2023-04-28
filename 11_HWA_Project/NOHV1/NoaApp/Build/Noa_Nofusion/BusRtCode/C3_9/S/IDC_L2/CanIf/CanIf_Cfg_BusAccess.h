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

/* File ID: 0b3f3598-591a-4c44-995d-a14438a08d9f */
#pragma once

#include <DsCan.h>
#include "Config.h"
#include "BusConfiguration.h"
#include "BusManager_CR_PCANFD_9.h"

#define CHANNEL_ADDRESS_COUNT 1

#ifdef __cplusplus
extern "C"
{
#endif

extern DsTCanBoard_Address* gp_CanIf_ChannelAddress[];

#ifdef __cplusplus
}
#endif

