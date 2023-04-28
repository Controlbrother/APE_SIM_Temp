/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Cfg_BusAccess.cpp
*
*  @creationDate 09 March 2022 12:20:12
*
*  @brief Definition of hardware channel addresses for CanIf bus access.
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

#include "CanIf_Cfg_BusAccess.h"

#if !defined(HOST_DEBUG)
# define CHANNEL_ADDRESSES {\
  &BusManager_ADAS_CAN_22_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_S\
}
#else
DSCAN_DEFINE_SIMULATED_CHANNEL(DefaultChannelAddress);
# define CHANNEL_ADDRESSES { &DefaultChannelAddress }
#endif

DsTCanBoard_Address* gp_CanIf_ChannelAddress[CHANNEL_ADDRESS_COUNT] = CHANNEL_ADDRESSES;

