/** <!------------------------------------------------------------------------->
*
*  @file Com_Cbk.h
*
*  @brief Definition of AUTOSAR COM callbacks.
*
*  @author
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*  @version
*
*   <hr><br>
*<!-------------------------------------------------------------------------->*/

#ifndef _COM_CBK_H_
#define _COM_CBK_H_

/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/
#include "Config.h"
#include "BusConfiguration.h"
#include "../Common/ComStack_Types.h"

/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/**************************************************************************************************\
 *** FUNCTION:
 ***     Com_TxConfirmation
 *** 
 *** DESCRIPTION:
 ***     This function is called by the lower layer after the PDU has been transmitted on the
 ***     network.
 *** 
 *** PARAMETERS:
 ***     Type       Name        Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     PduIdType  ComTxPduId  The I-PDU ID that shall be triggered for sending.
 *** 
 *** RETURNS:
 ***     void
\**************************************************************************************************/
extern void Com_TxConfirmation(PduIdType ComTxPduId);

#endif /* _COM_CBK_H_ */
