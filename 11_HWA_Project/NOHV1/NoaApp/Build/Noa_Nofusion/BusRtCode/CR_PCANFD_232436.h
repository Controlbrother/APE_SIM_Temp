/** !------------------------------------------------------------------------->
*
*  @file <BusConfiguration>.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief 
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*   
*!-------------------------------------------------------------------------->*/

/* File ID: 1ce318fe-300c-45f0-9a94-06ba1f3f108b */
#pragma once

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include <Platform_Types.h>
#include "C3_8/S/IDC_L2/CanIf/CanIf_external.h"
#include "C3_8/S/IDC_L2/Feature/Feature_external.h"
#include "C3_8/S/IDC_L2/Com/Com_external.h"
#include "C3_9/S/IDC_L2/CanIf/CanIf_external.h"
#include "C3_9/S/IDC_L2/Feature/Feature_external.h"
#include "C3_9/S/IDC_L2/Com/Com_external.h"
    /*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/
#if defined(EXTERN_C_DECL)
#  undef EXTERN_C_DECL
#endif
#if defined(__cplusplus)
#  define EXTERN_C_DECL extern "C"
#else
#  define EXTERN_C_DECL extern
#endif

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* FORWARD DECLARATIONS OF STATIC FUNCTIONS */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL VARIABLES */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/* GLOBAL FUNCTIONS */
/*----------------------------------------------------------------------------*/
EXTERN_C_DECL void CR_PCANFD_VariableInitialize(void);

EXTERN_C_DECL void CR_PCANFD_Com_MainFunction_232334(void);

