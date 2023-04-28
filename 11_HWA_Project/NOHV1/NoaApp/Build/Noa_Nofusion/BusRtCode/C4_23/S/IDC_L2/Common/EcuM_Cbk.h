/** <!------------------------------------------------------------------------->
*
*  @file EcuM_Cbk.h
*
*  @brief ECU State Manager callback and callout definitions.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/
#pragma once

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/
#include "EcuM_Types.h"

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
 *** 8.5 Callback Definitions
\**************************************************************************************************/

/* 8.5.2 Callbacks from Wakeup Sources */
extern void EcuM_CheckWakeup(EcuM_WakeupSourceType wakeupSource);
extern void EcuM_SetWakeupEvent(EcuM_WakeupSourceType sources);
extern void EcuM_ValidateWakeupEvent(EcuM_WakeupSourceType sources);

/**************************************************************************************************\
 *** 8.6 Callout Definitions
\**************************************************************************************************/

/* 8.6.1 Generic Callouts */
extern void EcuM_ErrorHook(Std_ReturnType reason);

/* 8.6.2 Callouts from STARTUP */
extern void EcuM_AL_DriverInitZero(void);
extern EcuM_ConfigType* EcuM_DeterminePbConfiguration(void);
extern void EcuM_AL_DriverInitOne(const EcuM_ConfigType* ConfigPtr);
extern void EcuM_AL_DriverInitTwo(const EcuM_ConfigType* ConfigPtr);
extern void EcuM_AL_DriverInitThree(const EcuM_ConfigType* ConfigPtr);
extern void EcuM_OnRTEStartup(void);

/* 8.6.3 Callouts from RUN State */
extern void EcuM_OnEnterRun(void);
extern void EcuM_OnExitRun(void);
extern void EcuM_OnExitPostRun(void);

/* 8.6.4 Callouts from SHUTDOWN */
extern void EcuM_OnPrepShutdown(void);
extern void EcuM_OnGoSleep(void);
extern void EcuM_OnGoOffOne(void);
extern void EcuM_OnGoOffTwo(void);
extern void EcuM_EnableWakeupSources(EcuM_WakeupSourceType wakeupSource);
extern void EcuM_GenerateRamHash(void);
extern void EcuM_AL_SwitchOff(void);

/* 8.6.5 Callouts from WAKEUP */
extern uint8 EcuM_CheckRamHash(void);
extern void EcuM_DisableWakeupSources(EcuM_WakeupSourceType wakeupSource);
extern void EcuM_AL_DriverRestart(void);
extern void EcuM_StartWakeupSources(EcuM_WakeupSourceType wakeupSource);
extern void EcuM_CheckValidation(EcuM_WakeupSourceType wakeupSource);
extern void EcuM_StopWakeupSources(EcuM_WakeupSourceType wakeupSource);
extern EcuM_WakeupReactionType EcuM_OnWakeupReaction(EcuM_WakeupReactionType wact);

/* 8.6.6 Callouts from SLEEP State */
extern void EcuM_SleepActivity(void);
extern void EcuM_CheckWakeup(EcuM_WakeupSourceType wakeupSource);

