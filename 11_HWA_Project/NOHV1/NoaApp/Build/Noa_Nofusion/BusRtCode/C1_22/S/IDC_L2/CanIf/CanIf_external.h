
/** <!------------------------------------------------------------------------->
*
*  @file CanIf_external.h
*
*  @creationDate 09 March 2022 12:20:12
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

/* File ID: ee60d0b7-e295-47b2-b71b-57dbab6f6b8b */
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

