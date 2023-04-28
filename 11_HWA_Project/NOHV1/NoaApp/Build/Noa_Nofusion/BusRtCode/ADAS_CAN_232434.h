/** !------------------------------------------------------------------------->
*
*  @file <BusConfiguration>.h
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief 
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*   
*!-------------------------------------------------------------------------->*/

/* File ID: 6ac49155-9d8f-4ae1-82ca-083d2c590765 */
#pragma once

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include <Platform_Types.h>
#include "C1_22/S/IDC_L2/CanIf/CanIf_external.h"
#include "C1_22/S/IDC_L2/Feature/Feature_external.h"
#include "C1_22/S/IDC_L2/Com/Com_external.h"
#include "C1_23/S/IFC_IDC_L2/CanIf/CanIf_external.h"
#include "C1_23/S/IFC_IDC_L2/Feature/Feature_external.h"
#include "C1_23/S/IFC_IDC_L2/Com/Com_external.h"
#include "C1_24/S/DSPACE/CanIf/CanIf_external.h"
#include "C1_24/S/DSPACE/Feature/Feature_external.h"
#include "C1_24/S/DSPACE/Com/Com_external.h"
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
EXTERN_C_DECL void ADAS_CAN_VariableInitialize(void);

EXTERN_C_DECL void ADAS_CAN_Com_MainFunction_232415(void);

