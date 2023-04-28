/** <!------------------------------------------------------------------------->
*
*  @file EcuM_Types.h
*
*  @brief ECU State Manager type definitions.
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

/* AUTOSAR standard types header. */
#include <Std_Types.h>


/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/* Macros for EcuM states. */
#ifndef ECUM_SUBSTATE_MASK
#define	ECUM_SUBSTATE_MASK              ((uint8) 0x0f)
#endif
#ifndef ECUM_STATE_STARTUP
#define	ECUM_STATE_STARTUP              ((uint8) 0x10)
#endif
#ifndef ECUM_STATE_STARTUP_ONE
#define	ECUM_STATE_STARTUP_ONE          ((uint8) 0x11)
#endif
#ifndef ECUM_STATE_STARTUP_TWO
#define	ECUM_STATE_STARTUP_TWO          ((uint8) 0x12)
#endif
#ifndef ECUM_STATE_WAKEUP
#define ECUM_STATE_WAKEUP               ((uint8) 0x20)
#endif
#ifndef ECUM_STATE_WAKEUP_ONE
#define ECUM_STATE_WAKEUP_ONE           ((uint8) 0x21)
#endif
#ifndef ECUM_STATE_WAKEUP_VALIDATION
#define	ECUM_STATE_WAKEUP_VALIDATION    ((uint8) 0x22)
#endif
#ifndef ECUM_STATE_WAKEUP_REACTION
#define	ECUM_STATE_WAKEUP_REACTION      ((uint8) 0x23)
#endif
#ifndef	ECUM_STATE_WAKEUP_TWO
#define	ECUM_STATE_WAKEUP_TWO           ((uint8) 0x24)
#endif
#ifndef	ECUM_STATE_WAKEUP_WAKESLEEP
#define	ECUM_STATE_WAKEUP_WAKESLEEP     ((uint8) 0x25)
#endif
#ifndef ECUM_STATE_WAKEUP_TTII
#define	ECUM_STATE_WAKEUP_TTII          ((uint8) 0x26)
#endif
#ifndef ECUM_STATE_RUN
#define	ECUM_STATE_RUN	                ((uint8) 0x30)
#endif
#ifndef ECUM_STATE_APP_RUN
#define	ECUM_STATE_APP_RUN              ((uint8) 0x32)
#endif
#ifndef ECUM_STATE_APP_POST_RUN
#define	ECUM_STATE_APP_POST_RUN	        ((uint8) 0x33)
#endif
#ifndef ECUM_STATE_SHUTDOWN
#define	ECUM_STATE_SHUTDOWN             ((uint8) 0x40)
#endif
#ifndef ECUM_STATE_PREP_SHUTDOWN
#define	ECUM_STATE_PREP_SHUTDOWN        ((uint8) 0x44)
#endif
#ifndef ECUM_STATE_GO_SLEEP
#define	ECUM_STATE_GO_SLEEP             ((uint8) 0x49)
#endif
#ifndef ECUM_STATE_GO_OFF_ONE
#define	ECUM_STATE_GO_OFF_ONE           ((uint8) 0x4d)
#endif
#ifndef ECUM_STATE_GO_OFF_TWO
#define	ECUM_STATE_GO_OFF_TWO           ((uint8) 0x4e)
#endif
#ifndef ECUM_STATE_SLEEP
#define	ECUM_STATE_SLEEP                ((uint8) 0x50)
#endif
#ifndef ECUM_STATE_RESET
#define	ECUM_STATE_RESET                ((uint8) 0x90)
#endif
#ifndef ECUM_STATE_OFF
#define	ECUM_STATE_OFF                  ((uint8) 0x80)
#endif

/* Macros for EcuM wakeup status. */
#ifndef ECUM_WKSTATUS_NONE
#define	ECUM_WKSTATUS_NONE              ((uint8) 0x0)
#endif
#ifndef ECUM_WKSTATUS_PENDING
#define	ECUM_WKSTATUS_PENDING	        ((uint8) 0x1)
#endif
#ifndef ECUM_WKSTATUS_VALIDATED
#define ECUM_WKSTATUS_VALIDATED         ((uint8) 0x2)
#endif
#ifndef ECUM_WKSTATUS_EXPIRED
#define ECUM_WKSTATUS_EXPIRED           ((uint8) 0x3)
#endif

/* Macros for EcuM wakeup reaction. */
#ifndef ECUM_WKACT_RUN
#define ECUM_WKACT_RUN                  ((uint8) 0x0)
#endif
#ifndef ECUM_WKACT_TTII
#define	ECUM_WKACT_TTII                 ((uint8) 0x2)
#endif
#ifndef ECUM_WKACT_SHUTDOWN
#define ECUM_WKACT_SHUTDOWN             ((uint8) 0x3)
#endif

/* Macros for EcuM boot target selection. */
#ifndef ECUM_BOOT_TARGET_APP
#define	ECUM_BOOT_TARGET_APP            ((uint8) 0x0)
#endif
#ifndef ECUM_BOOT_TARGET_BOOTLOADER
#define	ECUM_BOOT_TARGET_BOOTLOADER     ((uint8) 0x1)
#endif

/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/

/* The content of this structure depends on the post-build configuration of EcuM. */
typedef struct
{
    uint8 dummy;
} EcuM_ConfigType;

/* Describes wakeup sources of EcuM. */
typedef uint32 EcuM_WakeupSourceType;

/* Possible outcomes of the WAKEUP VALIDATION state. */
typedef uint8 EcuM_WakeupStatusType;

/* Possible outcomes of WAKEUP REACTION state. */
typedef uint8 EcuM_WakeupReactionType;

