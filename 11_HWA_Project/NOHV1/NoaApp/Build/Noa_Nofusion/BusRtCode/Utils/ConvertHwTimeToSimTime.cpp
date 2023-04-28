/** <!------------------------------------------------------------------------->
*
*  @file ConvertHwTimeToSimTime.cpp
*
*  @brief 
*
*  @description
*  
*  @copyright
*    Copyright 2019, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#if (defined(DS_PLATFORM_SMARTHIL) || defined(DS_PLATFORM_SMARTBOX)) && !defined(HOST_DEBUG)
#include <DsApplicationInterface.h>
#elif defined(DS_PLATFORM_OFFSIM)
#else 
	#error "Unknown Platform"
#endif
#include "ConvertHwTimeToSimTime.h"

double ConvertHwTimeToSimTime(double HwTime) {

#if (defined(DS_PLATFORM_SMARTHIL) || defined(DS_PLATFORM_SMARTBOX)) && !defined(HOST_DEBUG)
    double simTime;
    ULong64 hwTicks;

    hwTicks = DsCTime::getHwTicsPerSecond()*HwTime;
    simTime = (double)DsCTime::convertHwTicksToSimTime(hwTicks);

    return simTime;
#else 
    //SimTimeConversion is not supported, just return the input value
    return HwTime;
#endif
}

