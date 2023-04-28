/** !------------------------------------------------------------------------->
*
*  @file PduR_Cfg_generated.c
*
*  @creationDate 09 March 2022 12:20:13
*
*  @brief Generated PduR configuration source file.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2022, dSPACE GmbH. All rights reserved.
*
*   <hr><br>
*!-------------------------------------------------------------------------->*/

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "Config.h"
#include "BusConfiguration.h"
#include "PduR.h"

#if (PDUR_COM_SUPPORT == STD_ON)
# include "Com.h"
#endif
#if (PDUR_IPDUM_SUPPORT == STD_ON)
# include "IPduM.h"
#endif
#if (PDUR_SECOC_SUPPORT == STD_ON)
# include "SecOC.h"
#endif
#if (PDUR_J1939TP_SUPPORT == STD_ON)
# include "../J1939Tp/J1939Tp.h"
#endif

#include "CanIf/CanIf.h"

/*------------------------------------------------------------------------------------------------*\
  VARIABLE DEFINITIONS
\*------------------------------------------------------------------------------------------------*/

static PduRTxRouting_Type pdur_TxRouting[]              = PDUR_TX_PATHS;
static PduRRoutingPoint_Type pdur_TxEndPoints[]         = PDUR_TX_ENDPOINTS;
static PduRRxRouting_Type pdur_RxRouting[]              = PDUR_RX_PATHS;
static PduRModuleFunctions_Type targetModuleFunctions[] = PDUR_MODULE_INIT_STRUCTURE;

/* All routing and configuration tables for the PDU Router. */
PduR_PBConfigType PduR_Config = 
{
    PDUR_NUM_TX_PATHS,
    PDUR_NUM_RX_PATHS,
    targetModuleFunctions,
    pdur_TxRouting,
    pdur_TxEndPoints,
    pdur_RxRouting
};

