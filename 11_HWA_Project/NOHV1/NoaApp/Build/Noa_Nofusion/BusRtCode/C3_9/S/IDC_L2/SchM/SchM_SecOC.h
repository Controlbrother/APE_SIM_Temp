/** <!------------------------------------------------------------------------->
*
*  @file SchM_SecOC.h
*
*  @brief 
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2017, dSPACE GmbH. All rights reserved.
*
*  @version
*
*<!-------------------------------------------------------------------------->*/

#ifndef SCHM_SECOC_H_
#define SCHM_SECOC_H_

#include "../Config.h"
#include "../../BusConfiguration.h"

#include "SchM.h"

/* Exclusive areas */
#define SCHM_SECOC_EXCLUSIVE_AREA 0

/* Exclusive areas */
#define SCHM_SECOC_EXCLUSIVE_AREA0 0

/* instance identifiers */
#define SECOC_INSTANCE ((uint8) 0) 

/* element identifiers */
#define SECOC_EXCLUSIVE_AREA ((uint8) 0) 


extern void SchM_Enter_SecOC(uint8 Instance,uint8 ExclusiveArea);
extern void SchM_Exit_SecOC(uint8 Instance,uint8 ExclusiveArea);
#endif /* SCHM_SECOC_H_ */