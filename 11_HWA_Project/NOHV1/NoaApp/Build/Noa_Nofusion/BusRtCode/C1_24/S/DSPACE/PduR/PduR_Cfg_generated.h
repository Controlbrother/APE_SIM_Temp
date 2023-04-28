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
        0, \
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
        0, \
        0, \
        Com_RxIndication, \
        0, \
        0, \
        0, \
        0, \
        0 \
    }  \
}

#define PDUR_TARGET_MODULE_CANIF_119641_232434 0
#define PDUR_TARGET_MODULE_COM_119641_232434 1
#define PDUR_TARGET_MODULE_NONE 255


#define PDUR_NUM_TX_PATHS 0



/* Mapping of Interface RX_INDICATION PDU IDs to RX_INDICATION table entries */
#define PDUR_RX_SecOC_SyncMsg_119641_232434_CanIf_Com ((PduIdType) 0)
#ifndef PDUR_RX_PDUID_NONE
#define PDUR_RX_PDUID_NONE ((PduIdType) -1)
#endif
#define PDUR_NUM_RX_PATHS 1

/* Rx routing table definition. */
#define PDUR_RX_PATHS  \
{ \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119641_232434,\
            Com_SecOC_SyncMsg_209577_119641_232434 \
        } \
    }  \
}
#endif /* _PDUR_CFG_GENERATED_H_ */

