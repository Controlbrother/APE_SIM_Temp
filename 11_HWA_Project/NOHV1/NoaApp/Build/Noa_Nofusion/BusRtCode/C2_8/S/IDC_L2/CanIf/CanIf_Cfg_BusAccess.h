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

/* File ID: 83d5f484-d2e2-480f-9630-d561f8230ba9 */
#pragma once

#include <DsCan.h>
#include "Config.h"
#include "BusConfiguration.h"
#include "BusManager_RSDS_PCANFD_8.h"

#define CHANNEL_ADDRESS_COUNT 1

#ifdef __cplusplus
extern "C"
{
#endif

extern DsTCanBoard_Address* gp_CanIf_ChannelAddress[];

#ifdef __cplusplus
}
#endif

