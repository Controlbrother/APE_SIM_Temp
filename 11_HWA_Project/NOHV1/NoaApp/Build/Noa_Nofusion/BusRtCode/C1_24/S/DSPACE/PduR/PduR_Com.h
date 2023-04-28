/** !------------------------------------------------------------------------->
*
*  @file PduR_Com.h
*
*  @brief Services for PDU Router interaction with COM module
*
*  @author
*    SajuJ
*
*  @description
*    This header file contains extern declarations of services provided by PDUR 
*    used by COM module
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*!-------------------------------------------------------------------------->*/
#ifndef PDUR_COM_H_
#define PDUR_COM_H_

/*----------------------------------------------------------------------------*/
/* INCLUDES */
/*----------------------------------------------------------------------------*/
#include "PduR.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*----------------------------------------------------------------------------*/
/* DEFINES / ENUMS */
/*----------------------------------------------------------------------------*/

/* External declarations of APIs */

extern Std_ReturnType PduR_ComTransmit(PduIdType ComTxPduId, const PduInfoType* PduInfoPtr);

#ifdef __cplusplus
}
#endif


#endif /* PDUR_COM_H_ */
