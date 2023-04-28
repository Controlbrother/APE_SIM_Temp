/** !------------------------------------------------------------------------->
*
*  @file PduR_Cfg_generated.h
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Generated PduR configuration header file.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*!-------------------------------------------------------------------------->*/
#ifndef _PDUR_CFG_GENERATED_H_
#define _PDUR_CFG_GENERATED_H_

/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/

/* Definition of all supported operation modes. */
#define PDUR_GATEWAY_OPERATION      STD_OFF
#define PDUR_COM_SUPPORT            STD_ON
#define PDUR_IPDUM_SUPPORT          STD_OFF
#define PDUR_SECOC_SUPPORT          STD_OFF
#define PDUR_J1939TP_SUPPORT        STD_OFF
#define PDUR_MULTICAST_TOIF_SUPPORT STD_OFF
#define PDUR_MULTICAST_TOTP_SUPPORT STD_OFF
#define PDUR_CANNM_SUPPORT          STD_OFF
#define PDUR_CANIF_SUPPORT          STD_ON
#define PDUR_LINIF_SUPPORT          STD_OFF
#define PDUR_SOAD_SUPPORT           STD_OFF
#define PDUR_DEV_ERROR_DETECT       STD_OFF
#define PDUR_ZERO_COST_OPERATION    STD_OFF

#define PDUR_MODULE_INIT_STRUCTURE \
{ \
    { \
        CanIf_Transmit, \
        0, \
        0, \
        0, \
        0, \
        0, \
        0, \
        0, \
        0 \
    } ,  \
    { \
        0, \
        Com_TriggerTransmit, \
        0, \
        0, \
        0, \
        0, \
        0, \
        0, \
        0 \
    }  \
}

#define PDUR_TARGET_MODULE_CANIF_119553_232435 0
#define PDUR_TARGET_MODULE_COM_119553_232435 1
#define PDUR_TARGET_MODULE_NONE 255

#define PDUR_TX_ADAS_AD1_119553_232435 ((PduIdType) 0)

#define PDUR_NUM_TX_PATHS 1


#define PDUR_TX_PATHS  \
{ \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119553_232435, \
            Com_ADAS_AD1_209079_119553_232435 \
        }, \
        1, \
        0, \
    }  \
}

#define PDUR_TX_ENDPOINTS \
{ \
    { \
        PDUR_TARGET_MODULE_CANIF_119553_232435, \
        CanIf_CRminusADASminusPrivate__V0_4_ADAS_AD1_FrameTrig \
    }  \
}



/* Mapping of Interface RX_INDICATION PDU IDs to RX_INDICATION table entries */
#ifndef PDUR_RX_PDUID_NONE
#define PDUR_RX_PDUID_NONE ((PduIdType) -1)
#endif
#define PDUR_NUM_RX_PATHS 0

/* Rx routing table definition. */
#define PDUR_RX_PATHS  \
{ \
    0 /* For C89 compatibility this array has length 1 */ \
}
#endif /* _PDUR_CFG_GENERATED_H_ */

