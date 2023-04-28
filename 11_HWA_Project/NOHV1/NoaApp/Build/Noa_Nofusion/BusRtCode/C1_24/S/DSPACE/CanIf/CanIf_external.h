
/** <!------------------------------------------------------------------------->
*
*  @file CanIf_external.h
*
*  @creationDate 09 March 2022 12:20:13
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

/* File ID: 4adb5db7-cb8d-46b0-b3dd-964908e91583 */
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

