/** <!------------------------------------------------------------------------->
*
*  @file SchM_IpduM.h
*
*  @brief 
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/

#ifndef SCHM_IPDUM_H_
#define SCHM_IPDUM_H_

#include "Config.h"
#include "BusConfiguration.h"

#include "SchM.h"

/* Exclusive areas */
#define SCHM_IPDUM_EXCLUSIVE_AREA 0

/* Exclusive areas */
#define SCHM_IPDUM_EXCLUSIVE_AREA0 0

/* instance identifiers */
#define IPDUM_INSTANCE ((uint8) 0) 

/* element identifiers */
#define IPDUM_EXCLUSIVE_AREA ((uint8) 0) 


extern void SchM_Enter_IpduM(uint8 Instance,uint8 ExclusiveArea);
extern void SchM_Exit_IpduM(uint8 Instance,uint8 ExclusiveArea);
#endif /* SCHM_PDUR_H_ */