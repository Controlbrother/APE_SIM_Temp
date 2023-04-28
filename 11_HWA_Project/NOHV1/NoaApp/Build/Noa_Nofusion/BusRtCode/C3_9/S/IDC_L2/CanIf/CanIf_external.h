
/** <!------------------------------------------------------------------------->
*
*  @file CanIf_external.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief ECU external CanIf API declarations.
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
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

/* File ID: 9e3f9c33-6fa8-45d7-b811-9eda5f9fa3ff */
#pragma once

/* -- Include directives -- */
#include "../Config.h"
#include "../../BusConfiguration.h"
#include <Std_Types.h>

/* -- Declarations of exported functions. -- */
EXTERN_C_DECL void CanIf_InitDefaultConfig(void);
EXTERN_C_DECL void CanIf_VariableInitialize(void);
EXTERN_C_DECL void CanIf_OnStart(void);
EXTERN_C_DECL void CanIf_OnStop(void);
EXTERN_C_DECL void CanIf_UpdateBoards(void);
/* [EOF] */

