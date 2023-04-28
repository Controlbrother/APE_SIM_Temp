/** !------------------------------------------------------------------------->
*
*  @file BusConfigurationId.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief 
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*  @version
*   
*!-------------------------------------------------------------------------->*/

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "BMUtils.h"
/* dSPACE Profiler settings for generated RT code */
#if defined (DS_PLATFORM_OFFSIM)
/* not on VEOS, only for Scalexio */
#undef DS_PROFILING_RTCODE
#endif
#ifdef DS_PROFILING_RTCODE
#include <DsApplicationInterface.h>
#endif

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/
#ifdef BUS_CONFIGURATION_ID
#undef BUS_CONFIGURATION_ID
#endif

#define BUS_CONFIGURATION_ID BM_CR_PCANFD_8

#define CONCAT2(A,B) A##_##B
#define CONCAT(A,B,C) A##_##B##_##C

#define _TOSTR_VALUE(id) #id
#define MACRO_NAME_TOSTR(id) _TOSTR_VALUE(id)


/*----------------------------------------------------------------------------*/
/* FORWARD DECLARATIONS OF STATIC FUNCTIONS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/

