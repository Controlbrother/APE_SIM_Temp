/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Cfg_BusAccess.h
*
*  @creationDate 09 March 2022 12:20:12
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

/* File ID: ea970551-ce5f-4f0b-adba-12017aa065a7 */
#pragma once

#include <DsCan.h>
#include "Config.h"
#include "BusConfiguration.h"
#include "BusManager_ADAS_CAN_22.h"

#define CHANNEL_ADDRESS_COUNT 1

#ifdef __cplusplus
extern "C"
{
#endif

extern DsTCanBoard_Address* gp_CanIf_ChannelAddress[];

#ifdef __cplusplus
}
#endif

