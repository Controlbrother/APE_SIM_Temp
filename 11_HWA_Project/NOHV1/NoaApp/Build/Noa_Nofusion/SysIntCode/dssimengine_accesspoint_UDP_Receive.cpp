/****************************************************************************\ 
 *** 
 *** File                  : dssimengine_accesspoint_UDP_Receive.cpp
 *** 
 *** Generated by dSPACE Tools.
 *** (c) Copyright 2013, dSPACE GmbH. All rights reserved.
\****************************************************************************/

#if !defined(DSSIMENGINE_ACCESSPOINT_UDP_RECEIVE_CPP_)
#  define    DSSIMENGINE_ACCESSPOINT_UDP_RECEIVE_CPP_


/* -- Include directives. -- */
#  include "dssimengine_api.h"
#  include "IOCode_Data.h"
#  include "dssimengine_accesspoint_UDP_Receive.h"

#  if defined(EXTERN_C_DECL)
#    undef EXTERN_C_DECL
#  endif
#  if defined(__cplusplus)
#    define EXTERN_C_DECL extern "C"
#  else
#    define EXTERN_C_DECL extern
#  endif


/* -- Definitions of exported functions. -- */

  void
ApSimEngineOnInitIoPreRtosInit_ctlcBODY_3_UDP_Receive_i3_(
    DsTErrorList ErrorList, DsCApplication* pApp) 
{
pUDP_Receive_3_DriverHandle = DsCIoFuncEthernetChannel::create(ErrorList, pApp, DsNIoFuncEthernetChannel::TransportLayerProtocol::DS_UDP | DsNIoFuncEthernetChannel::SocketOptions::DS_BROADCAST | DsNIoFuncEthernetChannel::SocketOptions::DS_NON_BLOCKING | DsNIoFuncEthernetChannel::SocketOptions::DS_REUSE_ADDR |  DsNIoFuncEthernetChannel::SocketOptions::DS_REUSE_PORT, true, 7000, pEthernet_Setup_2_DriverHandle);

}

  void
ApSimEngineOnInitIoPostRtosInit_ctlcBODY_0_UDP_Receive_i3_(
    DsTErrorList ErrorList) 
{
pUDP_Receive_3_DriverHandle->setName(ErrorList, "UDP Receive (3)");

}

  void
ApSimEngineRunTimeInit_ctlcBODY_0_UDP_Receive_i3_(
    DsTErrorList ErrorList) 
{
uDP_Receive_3_NumOfReceivedBytes = 0;
uDP_Receive_3_Status = 0;
uDP_Receive_3_SourcePort = 0;
uDP_Receive_3_SourceIpAsVector[0] = 0;
uDP_Receive_3_SourceIpAsVector[1] = 0;
uDP_Receive_3_SourceIpAsVector[2] = 0;
uDP_Receive_3_SourceIpAsVector[3] = 0;
std::memset(uDP_Receive_3_DataVector, 0, 1500 * (sizeof *uDP_Receive_3_DataVector));

}

  void
ApSimEngineOnStartIo_ctlcBODY_0_UDP_Receive_i3_(
    DsTErrorList ErrorList) 
{
uDP_Receive_3_NumOfReceivedBytes = 0;
uDP_Receive_3_Status = 0;
uDP_Receive_3_SourcePort = 0;
uDP_Receive_3_SourceIpAsVector[0] = 0;
uDP_Receive_3_SourceIpAsVector[1] = 0;
uDP_Receive_3_SourceIpAsVector[2] = 0;
uDP_Receive_3_SourceIpAsVector[3] = 0;
std::memset(uDP_Receive_3_DataVector, 0, 1500 * (sizeof *uDP_Receive_3_DataVector));

}

  void
ApSimEngineOnInitIoPreRtosInit_ctlcBODY_3_UDP_Receive_i2_(
    DsTErrorList ErrorList, DsCApplication* pApp) 
{
pUDP_Receive_2_DriverHandle = DsCIoFuncEthernetChannel::create(ErrorList, pApp, DsNIoFuncEthernetChannel::TransportLayerProtocol::DS_UDP | DsNIoFuncEthernetChannel::SocketOptions::DS_BROADCAST | DsNIoFuncEthernetChannel::SocketOptions::DS_NON_BLOCKING | DsNIoFuncEthernetChannel::SocketOptions::DS_REUSE_ADDR |  DsNIoFuncEthernetChannel::SocketOptions::DS_REUSE_PORT, true, 8080, pEthernet_Setup_2_DriverHandle);

}

  void
ApSimEngineOnInitIoPostRtosInit_ctlcBODY_0_UDP_Receive_i2_(
    DsTErrorList ErrorList) 
{
pUDP_Receive_2_DriverHandle->setName(ErrorList, "UDP Receive (2)");

}

  void
ApSimEngineRunTimeInit_ctlcBODY_0_UDP_Receive_i2_(
    DsTErrorList ErrorList) 
{
uDP_Receive_2_NumOfReceivedBytes = 0;
uDP_Receive_2_Status = 0;
uDP_Receive_2_SourcePort = 0;
uDP_Receive_2_SourceIpAsVector[0] = 0;
uDP_Receive_2_SourceIpAsVector[1] = 0;
uDP_Receive_2_SourceIpAsVector[2] = 0;
uDP_Receive_2_SourceIpAsVector[3] = 0;
std::memset(uDP_Receive_2_DataVector, 0, 10240 * (sizeof *uDP_Receive_2_DataVector));

}

  void
ApSimEngineOnStartIo_ctlcBODY_0_UDP_Receive_i2_(
    DsTErrorList ErrorList) 
{
uDP_Receive_2_NumOfReceivedBytes = 0;
uDP_Receive_2_Status = 0;
uDP_Receive_2_SourcePort = 0;
uDP_Receive_2_SourceIpAsVector[0] = 0;
uDP_Receive_2_SourceIpAsVector[1] = 0;
uDP_Receive_2_SourceIpAsVector[2] = 0;
uDP_Receive_2_SourceIpAsVector[3] = 0;
std::memset(uDP_Receive_2_DataVector, 0, 10240 * (sizeof *uDP_Receive_2_DataVector));

}

  void
ApSimEngineOnInitIoPreRtosInit_ctlcBODY_3_UDP_Receive_i1_(
    DsTErrorList ErrorList, DsCApplication* pApp) 
{
pUDP_Receive_1_DriverHandle = DsCIoFuncEthernetChannel::create(ErrorList, pApp, DsNIoFuncEthernetChannel::TransportLayerProtocol::DS_UDP | DsNIoFuncEthernetChannel::SocketOptions::DS_BROADCAST | DsNIoFuncEthernetChannel::SocketOptions::DS_NON_BLOCKING | DsNIoFuncEthernetChannel::SocketOptions::DS_REUSE_ADDR |  DsNIoFuncEthernetChannel::SocketOptions::DS_REUSE_PORT, true, 8080, pEthernet_Setup_1_DriverHandle);

}

  void
ApSimEngineOnInitIoPostRtosInit_ctlcBODY_0_UDP_Receive_i1_(
    DsTErrorList ErrorList) 
{
pUDP_Receive_1_DriverHandle->setName(ErrorList, "UDP Receive (1)");

}

  void
ApSimEngineRunTimeInit_ctlcBODY_0_UDP_Receive_i1_(
    DsTErrorList ErrorList) 
{
uDP_Receive_1_NumOfReceivedBytes = 0;
uDP_Receive_1_Status = 0;
uDP_Receive_1_SourcePort = 0;
uDP_Receive_1_SourceIpAsVector[0] = 0;
uDP_Receive_1_SourceIpAsVector[1] = 0;
uDP_Receive_1_SourceIpAsVector[2] = 0;
uDP_Receive_1_SourceIpAsVector[3] = 0;
std::memset(uDP_Receive_1_DataVector, 0, 10240 * (sizeof *uDP_Receive_1_DataVector));

}

  void
ApSimEngineOnStartIo_ctlcBODY_0_UDP_Receive_i1_(
    DsTErrorList ErrorList) 
{
uDP_Receive_1_NumOfReceivedBytes = 0;
uDP_Receive_1_Status = 0;
uDP_Receive_1_SourcePort = 0;
uDP_Receive_1_SourceIpAsVector[0] = 0;
uDP_Receive_1_SourceIpAsVector[1] = 0;
uDP_Receive_1_SourceIpAsVector[2] = 0;
uDP_Receive_1_SourceIpAsVector[3] = 0;
std::memset(uDP_Receive_1_DataVector, 0, 10240 * (sizeof *uDP_Receive_1_DataVector));

}

#endif                                 /* DSSIMENGINE_ACCESSPOINT_UDP_RECEIVE_CPP_ */
/* [EOF] */