
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

/* File ID: 424720e5-0b6b-4006-a721-b817b1d8c141 */
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

