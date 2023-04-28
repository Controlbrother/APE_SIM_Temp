/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Cfg_BusAccess.h
*
*  @creationDate 09 March 2022 12:20:13
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

/* File ID: c6a75978-5b20-4125-a979-148be0913cc3 */
#pragma once

#include <DsCan.h>
#include "Config.h"
#include "BusConfiguration.h"
#include "BusManager_ADAS_CAN_24.h"

#define CHANNEL_ADDRESS_COUNT 1

#ifdef __cplusplus
extern "C"
{
#endif

extern DsTCanBoard_Address* gp_CanIf_ChannelAddress[];

#ifdef __cplusplus
}
#endif

