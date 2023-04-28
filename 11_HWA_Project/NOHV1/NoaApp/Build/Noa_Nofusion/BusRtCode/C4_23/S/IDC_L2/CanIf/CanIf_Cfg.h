/** <!------------------------------------------------------------------------->
*
*  @file CanIf_Cfg.h
*
*  @creationDate 09 March 2022 12:20:14
*
*  @brief Generated CanIf configuration header file.
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

/* File ID: ca85f01e-5a7e-4398-baf9-7a2e6efe78b2 */
#pragma once

/* -- Include directives -- */
#include "Config.h"
#include "BusConfiguration.h"
#include "StateManager_generated.h"
#include <Std_Types.h>

/* -- Defines and directives in global scope. After include directives. -- */
#define CanIf_V71_V4_1_1_NOA_ACC_FD1_FrameTrig 0

#ifndef PDUR_RX_PDUID_NONE
#define PDUR_RX_PDUID_NONE ((PduIdType) -1)
#endif

/* Definition of all supported operation modes. */
#define CANIF_COM_SUPPORT          STD_ON
#define CANIF_CDD_SUPPORT          STD_OFF
#define CANIF_CANTSYN_SUPPORT      STD_OFF
#define CANIF_J1939TP_SUPPORT      STD_OFF
#define CANIF_RX_STATUS_SIM_SUPPORT          STD_OFF

/* -- Declarations of exported functions. -- */
EXTERN_C_DECL void CanIf_InitDefaultConfig(void);
EXTERN_C_DECL void CanIf_VariableInitialize(void);
EXTERN_C_DECL void CanIf_OnStart(void);
EXTERN_C_DECL void CanIf_OnStop(void);

/* [EOF] */

