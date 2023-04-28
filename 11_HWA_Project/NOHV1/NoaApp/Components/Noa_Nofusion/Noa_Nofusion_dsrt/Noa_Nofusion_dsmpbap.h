/*********************** dSPACE target specific header file ********************
   Include file Noa_Nofusion_dsmpbap.h:

   Definitions used for access points

   Wed Mar  9 12:18:59 2022

   (c) Copyright 2020, dSPACE GmbH. All rights reserved.

 *******************************************************************************/

#ifndef _DSMPB_Noa_Nofusion_HEADER_
#define _DSMPB_Noa_Nofusion_HEADER_
#include "rtwtypes.h"
#ifdef EXTERN_C
#undef EXTERN_C
#endif

#ifdef __cplusplus
#define EXTERN_C                       extern "C"
#else
#define EXTERN_C                       extern
#endif

/* External declarations for access points prototypes */

/* Include header file with bus struct typedefs                               */
#include "Noa_Nofusion_dsmpb_bd.h"

/*                                                                            */
/* Declarations of read/write and trigger access points                       */
/*                                                                            */
/* Read access point of block Noa_Nofusion/Subsystem3/UDP Receive (3), non-bus port 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport1_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/Subsystem3/UDP Receive (3), non-bus port 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport1_P2_S1(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/Subsystem3/UDP Receive (3), non-bus port 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport1_P3_S1(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/Subsystem3/UDP Receive (3), non-bus port 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport1_P4_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/Subsystem3/UDP Receive (3), non-bus port 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport1_P5_S1(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/UDP_Received/UDP Receive (2), non-bus port 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport2_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/UDP_Received/UDP Receive (2), non-bus port 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport2_P2_S1(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/UDP_Received/UDP Receive (2), non-bus port 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport2_P3_S1(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/UDP_Received/UDP Receive (2), non-bus port 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport2_P4_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/UDP_Received/UDP Receive (2), non-bus port 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport2_P5_S1(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_Left_ObjUpdate_b, non-bus port 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport3_P1_S1(uint32_T
  * OutputPortSignalPtr);

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Read bus access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj, Port: 1   */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1
  (read_Noa_Nofusion_DataInport4_P1* OutputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S2(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S3(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S4(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S5(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 6 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S6(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S7(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S8(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S9(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S10(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 11 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S11(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 12 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S12(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 13 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S13(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 14 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S14(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 15 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S15(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 16 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S16(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 17 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S17(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 18 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S18(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 19 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S19(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 20 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S20(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 21 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S21(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 22 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S22(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 23 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S23(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 24 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S24(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 25 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S25(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 26 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S26(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 27 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S27(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 28 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S28(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 29 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S29(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 30 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S30(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 31 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S31(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S32(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 33 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S33(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 34 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S34(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 35 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S35(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 36 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S36(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 37 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S37(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 38 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S38(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 39 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S39(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 40 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S40(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 41 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S41(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 42 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S42(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 43 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S43(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 44 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S44(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 45 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S45(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 46 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S46(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 47 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S47(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 48 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S48(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 49 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S49(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 50 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S50(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 51 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S51(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 52 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S52(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 53 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S53(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 54 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S54(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 55 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S55(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 56 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S56(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 57 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S57(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 58 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S58(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 59 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S59(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 60 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S60(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 61 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S61(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 62 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S62(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 63 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S63(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 64 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S64(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 65 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S65(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 66 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S66(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 67 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S67(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 68 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S68(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 69 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S69(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 70 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S70(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 71 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S71(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 72 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S72(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 73 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S73(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 74 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S74(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 75 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S75(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 76 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S76(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 77 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S77(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 78 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S78(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 79 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S79(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 80 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S80(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 81 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S81(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 82 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S82(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 83 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S83(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 84 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S84(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 85 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S85(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 86 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S86(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 87 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S87(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 88 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S88(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 89 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S89(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 90 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S90(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 91 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S91(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 92 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S92(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 93 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S93(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 94 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S94(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 95 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S95(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 96 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S96(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 97 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S97(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 98 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S98(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 99 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S99(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 100 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S100(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 101 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S101(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_L_Bus/CR_Left_Obj untyped bus port 1 signal 102 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport4_P1_S102(real_T
  * OutputPortSignalPtr);

#endif

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_Right_ObjUpdate_b, non-bus port 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport5_P1_S1(uint32_T
  * OutputPortSignalPtr);

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Read bus access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj, Port: 1   */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1
  (read_Noa_Nofusion_DataInport6_P1* OutputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S2(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S3(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S4(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S5(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 6 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S6(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S7(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S8(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S9(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S10(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 11 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S11(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 12 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S12(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 13 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S13(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 14 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S14(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 15 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S15(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 16 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S16(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 17 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S17(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 18 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S18(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 19 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S19(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 20 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S20(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 21 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S21(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 22 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S22(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 23 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S23(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 24 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S24(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 25 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S25(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 26 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S26(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 27 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S27(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 28 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S28(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 29 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S29(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 30 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S30(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 31 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S31(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S32(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 33 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S33(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 34 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S34(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 35 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S35(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 36 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S36(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 37 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S37(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 38 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S38(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 39 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S39(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 40 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S40(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 41 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S41(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 42 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S42(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 43 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S43(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 44 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S44(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 45 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S45(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 46 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S46(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 47 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S47(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 48 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S48(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 49 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S49(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 50 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S50(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 51 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S51(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 52 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S52(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 53 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S53(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 54 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S54(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 55 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S55(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 56 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S56(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 57 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S57(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 58 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S58(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 59 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S59(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 60 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S60(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 61 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S61(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 62 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S62(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 63 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S63(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 64 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S64(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 65 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S65(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 66 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S66(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 67 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S67(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 68 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S68(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 69 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S69(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 70 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S70(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 71 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S71(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 72 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S72(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 73 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S73(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 74 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S74(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 75 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S75(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 76 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S76(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 77 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S77(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 78 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S78(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 79 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S79(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 80 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S80(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 81 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S81(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 82 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S82(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 83 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S83(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 84 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S84(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 85 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S85(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 86 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S86(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 87 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S87(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 88 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S88(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 89 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S89(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 90 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S90(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 91 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S91(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 92 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S92(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 93 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S93(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 94 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S94(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 95 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S95(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 96 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S96(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 97 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S97(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 98 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S98(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 99 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S99(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 100 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S100(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 101 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S101(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/CR_R_Bus/CR_Right_Obj untyped bus port 1 signal 102 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport6_P1_S102(real_T
  * OutputPortSignalPtr);

#endif

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_Left_ObjUpdate_b, non-bus port 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport7_P1_S1(uint32_T
  * OutputPortSignalPtr);

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Read bus access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj, Port: 1   */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1
  (read_Noa_Nofusion_DataInport8_P1* OutputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S2(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S3(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S4(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S5(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 6 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S6(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S7(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S8(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S9(real_T* OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S10(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 11 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S11(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 12 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S12(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 13 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S13(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 14 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S14(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 15 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S15(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 16 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S16(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 17 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S17(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 18 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S18(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 19 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S19(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 20 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S20(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 21 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S21(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 22 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S22(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 23 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S23(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 24 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S24(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 25 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S25(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 26 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S26(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 27 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S27(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 28 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S28(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 29 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S29(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 30 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S30(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 31 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S31(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S32(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 33 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S33(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 34 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S34(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 35 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S35(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 36 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S36(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 37 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S37(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 38 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S38(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 39 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S39(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 40 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S40(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 41 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S41(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 42 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S42(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 43 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S43(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 44 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S44(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 45 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S45(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 46 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S46(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 47 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S47(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 48 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S48(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 49 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S49(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 50 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S50(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 51 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S51(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 52 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S52(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 53 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S53(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 54 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S54(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 55 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S55(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 56 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S56(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 57 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S57(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 58 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S58(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 59 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S59(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 60 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S60(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 61 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S61(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 62 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S62(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 63 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S63(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 64 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S64(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 65 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S65(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 66 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S66(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 67 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S67(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 68 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S68(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 69 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S69(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 70 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S70(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 71 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S71(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 72 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S72(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 73 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S73(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 74 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S74(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 75 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S75(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 76 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S76(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 77 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S77(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 78 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S78(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 79 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S79(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 80 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S80(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 81 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S81(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 82 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S82(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 83 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S83(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 84 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S84(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 85 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S85(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 86 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S86(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 87 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S87(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 88 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S88(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 89 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S89(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 90 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S90(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 91 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S91(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 92 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S92(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 93 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S93(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 94 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S94(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 95 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S95(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 96 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S96(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 97 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S97(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 98 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S98(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 99 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S99(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 100 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S100(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 101 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S101(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_L_Bus/RSDS_Left_Obj untyped bus port 1 signal 102 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport8_P1_S102(real_T
  * OutputPortSignalPtr);

#endif

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_Right_ObjUpdate_b, non-bus port 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport9_P1_S1(uint32_T
  * OutputPortSignalPtr);

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Read bus access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj, Port: 1   */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1
  (read_Noa_Nofusion_DataInport10_P1* OutputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S2(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S3(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S4(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S5(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 6 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S6(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S7(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S8(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S9(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S10(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 11 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S11(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 12 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S12(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 13 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S13(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 14 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S14(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 15 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S15(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 16 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S16(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 17 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S17(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 18 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S18(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 19 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S19(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 20 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S20(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 21 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S21(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 22 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S22(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 23 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S23(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 24 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S24(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 25 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S25(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 26 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S26(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 27 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S27(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 28 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S28(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 29 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S29(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 30 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S30(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 31 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S31(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S32(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 33 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S33(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 34 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S34(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 35 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S35(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 36 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S36(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 37 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S37(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 38 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S38(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 39 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S39(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 40 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S40(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 41 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S41(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 42 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S42(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 43 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S43(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 44 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S44(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 45 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S45(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 46 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S46(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 47 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S47(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 48 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S48(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 49 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S49(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 50 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S50(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 51 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S51(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 52 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S52(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 53 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S53(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 54 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S54(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 55 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S55(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 56 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S56(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 57 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S57(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 58 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S58(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 59 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S59(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 60 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S60(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 61 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S61(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 62 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S62(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 63 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S63(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 64 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S64(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 65 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S65(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 66 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S66(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 67 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S67(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 68 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S68(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 69 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S69(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 70 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S70(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 71 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S71(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 72 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S72(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 73 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S73(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 74 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S74(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 75 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S75(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 76 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S76(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 77 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S77(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 78 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S78(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 79 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S79(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 80 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S80(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 81 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S81(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 82 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S82(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 83 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S83(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 84 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S84(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 85 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S85(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 86 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S86(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 87 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S87(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 88 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S88(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 89 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S89(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 90 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S90(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 91 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S91(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 92 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S92(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 93 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S93(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 94 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S94(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 95 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S95(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 96 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S96(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 97 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S97(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 98 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S98(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 99 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S99(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 100 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S100(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 101 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S101(real_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/CR_RSDS_Input/RSDS_R_Bus/RSDS_Right_Obj untyped bus port 1 signal 102 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport10_P1_S102(real_T
  * OutputPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Read bus access point of block Noa_Nofusion/VCANBus, Port: 1   */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1(VCAN_BUS*
  OutputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.PosnLmpOutpSts_R_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.RBrkLmpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S2(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.LBrkLmpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S3(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.HiPosnBrkLmpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S4(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.RFogLmpSts_R_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S5(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.RFogLmpFailSts_R_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S6(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.RTurnLmpSts_R_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S7(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.LTurnLmpSts_R_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S8(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.R_PBOX1_MSG.FreshnessValue_R_PBox1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S9(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.F_PBOX1_MSG.FFogLmpSts_F_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S10(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.F_PBOX1_MSG.LowBeamSts_F_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S11(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.F_PBOX1_MSG.HiBeamSts_F_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S12(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.F_PBOX1_MSG.HoodSts_F_Pbox */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S13(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.F_PBOX1_MSG.RHeadLmpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S14(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PBOX_NODE.F_PBOX1_MSG.LHeadLmpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S15(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.CheckSum_HC1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S16(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.ALS_FailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S17(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.RightHighBeamFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S18(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.LeftHighBeamFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S19(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.RightLowBeamFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S20(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.LeftLowBeamFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S21(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.ADBstatus */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S22(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HighBeamSts_HC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S23(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HBStatusSegment3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S24(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HBStatusSegment2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S25(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HBStatusSegment1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S26(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HBStatusSegment0 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S27(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HBStatusSegment7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S28(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HBStatusSegment6 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S29(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HBStatusSegment5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S30(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.HBStatusSegment4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S31(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.ALSDrvSide_FB */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S32(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC1_MSG.RollingCounter_HC1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S33(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC_NM_MSG.Destination_HC_NM */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S34(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HC_NODE.HC_NM_MSG.OpCode_HC_NM */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S35(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal AC_NEDE.AC2_MSG.ACFrntBlwrSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S36(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal AC_NEDE.AC2_MSG.ACAmbTemp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S37(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.CheckSum_ABM1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S38(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.PassSBR */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S39(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.SecRowRSBR */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S40(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.DrvSBR */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S41(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.SecRowMidSBR */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S42(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.AirbFailLmpCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S43(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.SecRowLSBR */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S44(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.PABSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S45(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.CrashOutputSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S46(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.DrvSBR_Visual */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S47(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.PassSBR_Visual */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S48(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.SecRowLSBR_Visual */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S49(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.SecRowMidSBR_Visual */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S50(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.SecRowRSBR_Visual */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S51(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.RollingCounter_ABM1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S52(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM1_MSG.FreshnessValue_ABM1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S53(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM2_MSG.CheckSum_ABM2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S54(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM2_MSG.VehLgtAccel */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S55(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM2_MSG.VehLatAccel */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S56(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM2_MSG.VehYawRate */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S57(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM2_MSG.RollingCounter_ABM2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S58(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM2_MSG.VehDynYawRateVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S59(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM2_MSG.VehLatAccelVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S60(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ABM_NODE.ABM2_MSG.VehLgtAccelVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S61(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.BrkPedalSts_BCM */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S62(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.WindshldWiprActvSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S63(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.RRDoorSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S64(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.PassengerDoorSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S65(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.LRDoorSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S66(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.DrvDoorSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S67(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.TrunkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S68(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.BrkPedalFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S69(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.ReversGearSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S70(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.ParkBrkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S71(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.PosnLightReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S72(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.RLSFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S73(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM1_MSG.FreshnessValue_BCM1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S74(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.Checksum_BCM10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S75(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.LTurnLampWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S76(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.RTurnLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S77(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.LowBeamWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S78(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.HiBeamWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S79(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.LFFogLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S80(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.RFFogLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S81(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.LDayRunngLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S82(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.RDayRunngLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S83(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.HornWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S84(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.FFogLmpAsstSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S85(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.RFogLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S86(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.BrkLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S87(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.ReversLampWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S88(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.LicPlateLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S89(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.ChildLockProtWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S90(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.AsstPosnLmpSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S91(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.TrunkLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S92(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.LHorseRaceLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S93(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.RHorseRaceLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S94(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.RCornrLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S95(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.LCornrLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S96(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.LasHdLmpWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S97(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.Rollingcounter_BCM10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S98(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM10_MSG.FreshnessValue_BCM10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S99(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM3_MSG.HazardLmpSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S100(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM3_MSG.BCM_HWPWorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S101(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM3_MSG.FreshnessValue_BCM3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S102(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM8_MSG.Checksum_BCM8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S103(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM8_MSG.PASWorkCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S104(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM8_MSG.RViewMirrorSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S105(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM8_MSG.WiprReq_F_PBOX */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S106(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM8_MSG.Rollingcounter_BCM8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S107(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal BCM_NODE.BCM8_MSG.KL30BRelaySts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S108(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.FrntWiprSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S109(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.FrntWshrSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S110(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.LTurnLmpSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S111(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.RTurnLmpSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S112(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.FrntFogLmpSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S113(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.LowBeamSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S114(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.HiBeamSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S115(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.OverVehBeamSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S116(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.AutoHiLowBeamSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S117(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA1_MSG.AutoLmpSwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S118(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.Checksum_CSA2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S119(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.SteerWheelAngSign */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S120(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.SteerWheelAng */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S121(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.SteerWheelSpdSign */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S122(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.SteerWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S123(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.ACC_TimeGap_DecSetSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S124(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.ACC_TimeGap_IncSetSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S125(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.CC_ACC_CANCEL_OFFSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S126(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.CC_ACC_CRUISE_OFFSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S127(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.CC_ACCSwtErr */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S128(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.CC_ACC_DecSetSpd_SetSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S129(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.CC_ACC_IncSetSpd_ResuSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S130(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.SAS_Sts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S131(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.Rollingcounter_CSA2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S132(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.HWA_OK_OFFSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S133(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA2_MSG.ManualShiftReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S134(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA4_MSG.CheckSum_CSA4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S135(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA4_MSG.HOD_ErrInfo */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S136(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA4_MSG.HOD_HandOffSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S137(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CSA_NODE.CSA4_MSG.RollingCounter_CSA4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S138(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.CheckSum_DCT5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S139(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.TargetGearValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S140(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.SHIFT_IN_PROGRESS */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S141(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.CurrentGearValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S142(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.TARGET_GEAR */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S143(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.TCU_APS_Available */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S144(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.ShiftInPrgValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S145(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.TGS_LEVER */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S146(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.CURRENT_GEAR */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S147(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT5_MSG.RollingCounter_DCT5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S148(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT_FD1_MSG.TCUResponseHWP */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S149(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT_FD1_MSG.TmLimpHomeValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S150(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT_FD1_MSG.RatAct */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S151(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT_FD1_MSG.FreshnessValue_DCT_FD1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S152(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT_FD4_MSG.DrvFaiMsg */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S153(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DCT_NODE.DCT_FD4_MSG.FreshnessValue_DCT_FD4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S154(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.DistrctnLvlQlty_ACC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S155(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.DrowsnsLvlQlty_ACC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S156(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.DrowsnsLvl_ACC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S157(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.DistrctnLvl_ACC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S158(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadPosnX */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S159(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadPosnY */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S160(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadPosQlty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S161(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadPosnZ */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S162(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.GazePosnX */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S163(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.GazePosnY */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S164(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.GazePosnZ */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S165(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadYawAng */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S166(int8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadPitchAng */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S167(int8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadRollAng */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S168(int8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadDetn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S169(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.HeadRotAngQlty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S170(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.DMSSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S171(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.RobustGazeYawAng */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S172(int8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.RobustGazePitchAng */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S173(int8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.LEyeOpenStsQlty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S174(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.REyeOpenStsQlty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S175(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.RobustGazeAngQlty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S176(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.REyeOpenSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S177(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal DMS_NODE.DMS_FD1_MSG.LEyeOpenSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S178(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM1_MSG.EngSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S179(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM1_MSG.EngSpdVldty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S180(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.Checksum_ECM4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S181(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.NetEngTrq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S182(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.DrvEngTrqReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S183(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.RollingCounter_ECM4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S184(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.DrvEngTrqReqVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S185(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.HCU_Start_StopSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S186(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.HCU_PowertrainSts_P0 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S187(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.EngTrqMinAct */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S188(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.EngTrqMaxActSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S189(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.TrqLoss */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S190(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.TrqLossVldty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S191(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.Checksum_ECM1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S192(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.BrkPedalSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S193(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.Start_StopSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S194(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.EngSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S195(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.RollingCounter_ECM1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S196(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.EngSpdVldty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S197(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD1_MSG.FreshnessValue_ECM_FD1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S198(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.Checksum_ECM9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S199(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.ECM_interfaceAPS */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S200(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.AccPedalOverride */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S201(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.AccelPedlPosnDiagc */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S202(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.ECMACCInterface */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S203(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.ECMRespACC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S204(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.RollingCounter_ECM9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S205(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.Checksum_ECM10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S206(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.AccPedalOverride_HWP */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S207(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.EngFail */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S208(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.ECMHWPinterface */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S209(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.RollingCounter_ECM10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S210(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.Checksum_ECM2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S211(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.AccelPedalPosn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S212(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.AccelPedalPosnVldty */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S213(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.RollingCounter_ECM2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S214(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.EngState */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S215(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.EngState_PHEV */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S216(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD2_MSG.FreshnessValue_ECM_FD2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S217(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD3_MSG.MaxEngTrqNorm */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S218(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ECM_NODE.ECM_FD3_MSG.EngLimpHomeSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S219(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.CheckSum_ESP_FD2_1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S220(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.RollingCounter_ESP_FD2_1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S221(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.L12mainVMCavailiable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S222(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.L12VLCADactive */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S223(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.CheckSum_ESP2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S224(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.CTABrkAvailable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S225(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.BrkDskOvrheatd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S226(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.NoBrkForce */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S227(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.VehStandstill */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S228(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.AEBIBActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S229(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.AEBBAActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S230(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.AEBAvailable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S231(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ABPAvailable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S232(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ABPActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S233(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ABAavailable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S234(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ABAactv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S235(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.HDCCtrl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S236(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.CDDActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S237(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.CDDAvailable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S238(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.AWBAvailable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S239(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.AWBActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S240(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.AVHErrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S241(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.AVHSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S242(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.DrivingModReq_ESP */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S243(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.DrivingModDis */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S244(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.RollingCounter_ESP2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S245(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.CheckSum_ESP1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S246(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.PTCActv_RA */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S247(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.BTCActv_RA */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S248(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ESPFuncOffSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S249(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ESPBrkLmpCtrl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S250(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ESPFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S251(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ESP_MasterCylBrkPressVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S252(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.VDCActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S253(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.MSRActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S254(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.PTCActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S255(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.BTCActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S256(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ESP_MasterCylBrkPress */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S257(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.MSRActv_RA */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S258(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.RollingCounter_ESP1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S259(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.CheckSum_ESP7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S260(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ESP_MEBBrkAvail */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S261(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.FourWhlsBrkTrq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S262(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.LgtCtrlrFailr */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S263(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.LgtCtrlrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S264(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.EngTrqReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S265(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.APS_EngTrqReqEna */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S266(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.RollingCounter_ESP7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S267(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.LgtCtrlrAvail */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S268(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.CheckSum_ABS3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S269(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.VehSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S270(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.EBDFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S271(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ABSFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S272(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.VehSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S273(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.ABSActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S274(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.EBDActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S275(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.RollingCounter_ABS3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S276(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD2_MSG.FreshnessValue_ESP_FD2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S277(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.CheckSum_ABS1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S278(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.FLWheelSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S279(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.FLWheelDriveDirection */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S280(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.FLWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S281(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.FRWheelSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S282(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.FRWheelDriveDirection */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S283(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.FRWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S284(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.WssFLEdgesSum */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S285(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.WssFREdgesSum */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S286(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RollingCounter_ABS1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S287(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.WssFREdgesSumVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S288(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.WssFLEdgesSumVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S289(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.CheckSum_EPB1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S290(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.EPB_SwtPosnVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S291(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.EPBErrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S292(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.EPBSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S293(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.EPB_SwtPosn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S294(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RollingCounter_EPB1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S295(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.CheckSum_ABS2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S296(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RLWheelSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S297(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RLWheelDriveDirection */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S298(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RLWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S299(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RRWheelSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S300(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RRWheelDriveDirection */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S301(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RRWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S302(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.WssRREdgesSum */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S303(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.WssRLEdgesSum */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S304(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RollingCounter_ABS2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S305(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.WssRREdgesSumVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S306(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.WssRLEdgesSumVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S307(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.CheckSum_ESP_FD3_7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S308(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.LSMSubMTReqAvailable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S309(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.LSMSubMTReqEcho */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S310(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.LSMSubMTLongEcho */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S311(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.LSMSubMTLevelEcho */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S312(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.LSMPosLongACapbl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S313(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.LSMGearRequest */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S314(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.Lsm23Avl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S315(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.Lsm12EmergencyAvl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S316(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.Lsm12ComfortAvl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S317(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.VLC_ESP_State */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S318(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.VLC_ESP_FuelCutOffPrevention */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S319(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.L3mainVMCavailiable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S320(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.L3VLCADactive */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S321(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.ParkPawlRequest */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S322(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.RollingCounter_ESP_FD3_7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S323(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal ESP_NODE.ESP_FD3_MSG.FreshnessValue_ESP_FD3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S324(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.CheckSum_EPS1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S325(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_FailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S326(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_TrqSnsrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S327(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_AvailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S328(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_InterferDetdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S329(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_InterferDetd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S330(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_SteerMod */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S331(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.RollingCounter_EPS1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S332(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.CheckSum_EPS2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S333(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_DrvInpTrqVal_HighReslolution */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S334(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_LKATorqOvrlDlvd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S335(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.RollingCounter_EPS2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S336(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_LKATrqOvlDlvdSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S337(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_LKATorqOvrlDlvdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S338(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.CheckSum_EPS3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S339(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_HWPHndShkResp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S340(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.ElecPwrSteerCpby */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S341(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_SteerWheelAngSign */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S342(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_SteerWheelAng */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S343(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_SteerWheelSpdSign */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S344(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.EPS_SteerWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S345(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.RollingCounter_EPS3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S346(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal EPS_NODE.EPS_FD1_MSG.FreshnessValue_EPS_FD1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S347(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.Checksum_HCU_PT1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S348(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.HCU_AccelPedalPosn_Diag */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S349(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.HCU_BrkPedalStsValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S350(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.HCU_AccelPedalPosn_DiagValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S351(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.HCU_BrkPedalSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S352(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.ActWheelTrqDmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S353(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.RollingCounter_HCU_PT1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S354(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.Checksum_HCU_PT9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S355(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.MaxPsblWheelTrq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S356(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.TotWheelTrq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S357(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.HCU_ACCInterface */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S358(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.MinPsblWheelTrq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S359(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.RollingCounter_HCU_PT9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S360(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.HCU_PowertrainSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S361(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.HCU_RespHWP */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S362(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.HCU_HWPInterface */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S363(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.ACU_ShiftInProgress */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S364(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD1_MSG.FreshnessValue_HCU_FD1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S365(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.Checksum_HCU_PT5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S366(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.HCU_PTDrvMod */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S367(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.HCU_DrvMod */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S368(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.DrvTrqReqOvld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S369(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.RollingCounter_HCU_PT5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S370(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.HCU_GearSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S371(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.HCU_APS_Available */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S372(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.HCU_VehSpdLimit */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S373(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_FD3_MSG.FreshnessValue_HCU_FD3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S374(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_HP8_MSG.HCU_TrqLimMax_Norm */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S375(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HCU_NODE.HCU_PT4_MSG.HCU_RdyLmpSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S376(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT15_MSG.APSPrkgTypSeln */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S377(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT15_MSG.SDWSwtSet */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S378(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT15_MSG.APSSwtReq_VR */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S379(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_MapProvider */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S380(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_MsgTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S381(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_CountryCode */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S382(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_ProtVer_MinorSub */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S383(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_ProtVer_Major */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S384(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_CycCnt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S385(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_HwVer */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S386(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_DrvSide */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S387(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_RegionCode */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S388(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_MapVerYear */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S389(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_MapVerQtr */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S390(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_ProtVer_Minor */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S391(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT19_MSG.ADAS_Meta_SpdUnits */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S392(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_MsgTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S393(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_Offset */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S394(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_PathIdx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S395(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_CycCnt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S396(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_Update */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S397(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_Retr */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S398(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_CtrlPoint */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S399(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_ProfTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S400(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT20_MSG.ADAS_ProfLong_Value */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S401(uint32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_MsgTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S402(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_Offset */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S403(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_PathIdx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S404(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_CycCnt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S405(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_Update */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S406(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_Retr */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S407(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_CtrlPoint */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S408(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_ProfTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S409(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_AccurClass */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S410(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_Dist1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S411(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_Value0 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S412(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT21_MSG.ADAS_ProfShort_Value1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S413(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_MsgTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S414(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_Offset */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S415(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_PathIdx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S416(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_CycCnt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S417(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_Update */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S418(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_Retr */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S419(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_BuildUpArea */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S420(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_Brdg */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S421(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_Tunnel */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S422(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_FuncRoadClass */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S423(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_RelProbb */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S424(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_FormOfWay */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S425(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_CmplxInsct */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S426(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_PartOfCalcRoute */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S427(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_EffSpdLmtTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S428(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_EffSpdLmt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S429(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_NumOfLaneDrvDir */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S430(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_NumOfLaneOppDir */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S431(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT22_MSG.ADAS_Seg_DivideRoad */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S432(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_MsgTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S433(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_Offset */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S434(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_PathIdx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S435(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_CycCnt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S436(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_Update */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S437(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_Retr */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S438(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_StubPathIdx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S439(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_FuncRoadClass */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S440(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_RelProbb */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S441(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_FormOfWay */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S442(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_CmplxInsct */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S443(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_PartOfCalcRoute */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S444(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_TurnAngl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S445(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_NumOfLaneDrvDir */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S446(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_NumOfLaneOppDir */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S447(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_RtOfWay */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S448(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT23_MSG.ADAS_Stub_LastStub */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S449(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.CheckSum_HUT32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S450(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.ContnPrkgReqValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S451(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.DetVideoLost */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S452(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkgCtrlModReqValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S453(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkStraightSwtReq_HUT */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S454(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkgCtrlModReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S455(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.ContnPrkgReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S456(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkStraightSuspendOrFinishReq_HUT */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S457(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.XLvl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S458(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.YLvl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S459(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkStraightVehStrtReq_HUT_Valid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S460(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkStraightStrtReq_HUT */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S461(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.ScrnOpSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S462(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkStraightContinueReq_HUT */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S463(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.RollingCounter_HUT32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S464(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkStraightSts_HUT */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S465(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT32_MSG.PrkStraightModSel_HUT */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S466(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.PrkInDirChoice */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S467(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.PathLrngFinshCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S468(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.PathLrngStartCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S469(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.ParkMdlCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S470(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.BackReq_APS */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S471(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.SelPrkOutDirReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S472(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.StartPrkgPath2Cmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S473(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.DeletePath2Cmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S474(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.StartPrkgPath1Cmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S475(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.DeletePath1Cmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S476(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT33_MSG.SelPrkgFctnCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S477(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.Time_Hour */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S478(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.TimeMod */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S479(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.TimeIndcn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S480(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.Time_Minutes */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S481(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.Time_Second */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S482(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.Time_Year_Right */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S483(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.Time_Year_Left */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S484(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.Time_Month */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S485(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT34_MSG.Time_Day */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S486(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.Guid_Ovl_Display_Cmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S487(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.Sgl_View_Sel */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S488(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.Radar_DispCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S489(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.LaneCalActvtCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S490(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.CarMdlTrsprcySwtCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S491(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.MdlColrChgCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S492(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.AutoViewChgCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S493(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.WshSoftSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S494(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.AutoAVMSwSet_Cmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S495(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.SwToFieldCalRstCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S496(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.View_SoftswitchCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S497(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.FPAS_AutoModSwt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S498(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.MEBSwtSet */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S499(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.MODChgReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S500(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT6_MSG.CarMdlDispCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S501(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.IFC_SnvtySet */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S502(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.FCW_SnvtySet */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S503(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.RCWSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S504(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.RCTABrkSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S505(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.RCTASwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S506(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.LCASwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S507(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.LDWSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S508(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ESS_VehSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S509(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ESS_PedSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S510(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ELKSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S511(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.LCKSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S512(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.LKASwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S513(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.AEB_VehSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S514(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.LSSWarnFormSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S515(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.TSRWarnSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S516(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.TSRSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S517(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.DOWSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S518(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.AEB_PedSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S519(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.LSSSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S520(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.IntelligentEvaSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S521(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.TSR_SnvtySet */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S522(int8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ISLSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S523(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ICA_HandsOffSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S524(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.NavVehToTrafEyeDist */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S525(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.NavSpdLimUnit_HUT */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S526(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.NavSpdLimValue */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S527(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.HWA_SwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S528(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.NavSpdLimSignSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S529(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.NavCtryType */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S530(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.NavTSRTrafSign */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S531(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ALC_SwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S532(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.AESSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S533(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.AEB_JASwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S534(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.FCTABrkSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S535(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.FCTASwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S536(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.HWA_SnvtySet */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S537(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.NavSpdLimType */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S538(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.NavRoadType */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S539(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_MsgTye */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S540(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_Offset */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S541(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_Pathldx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S542(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_CycCnt */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S543(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_PosProbb */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S544(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_Idx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S545(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_Age */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S546(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_CurLane */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S547(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_PosConfdc */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S548(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_Spd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S549(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.ADAS_Posn_Rehead */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S550(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD1_MSG.FreshnessValue_HUT_FD1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S551(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj0_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S552(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj0_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S553(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj0_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S554(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj0_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S555(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj0_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S556(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj0_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S557(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj1_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S558(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HTU_OD_Obj1_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S559(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj1_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S560(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj1_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S561(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj1_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S562(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj1_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S563(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj2_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S564(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj2_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S565(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj2_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S566(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj2_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S567(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj2_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S568(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj2_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S569(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj3_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S570(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj3_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S571(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj3_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S572(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj3_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S573(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj3_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S574(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj3_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S575(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj4_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S576(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj4_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S577(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj4_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S578(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj4_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S579(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj4_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S580(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj4_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S581(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj5_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S582(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj5_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S583(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj5_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S584(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj5_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S585(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj5_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S586(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj5_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S587(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj6_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S588(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj6_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S589(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj6_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S590(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj6_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S591(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj6_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S592(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD2_MSG.HUT_OD_Obj6_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S593(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_OD_Obj7_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S594(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_OD_Obj7_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S595(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_OD_Obj7_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S596(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_OD_Obj7_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S597(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_OD_Obj7_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S598(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_OD_Obj7_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S599(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_OD_Obj_Timestamp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S600(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD1_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S601(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD2_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S602(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD4_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S603(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD3_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S604(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_OD_WorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S605(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD5_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S606(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD6_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S607(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD7_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S608(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD9_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S609(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD8_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S610(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD10_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S611(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD11_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S612(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD13_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S613(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD12_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S614(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD14_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S615(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD15_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S616(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD17_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S617(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD16_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S618(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HUT_NODE.HUT_FD3_MSG.HUT_FSD18_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S619(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.Checksum_IDC_L3_1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S620(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AngCmdReqVal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S621(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_TrqOvlCmdProtnValue */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S622(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_TrqOvlCmdReqValue */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S623(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_FuncTrqCmdReqFlag */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S624(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_HapcWarnReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S625(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AngCmdReqValVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S626(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_ReqCtrlEPSVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S627(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_ReqCtrlEPS */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S628(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.RollingCounter_IDC_L3_1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S629(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.Checksum_IDC_L3_3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S630(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_Lgtctrl_EngTrqReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S631(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_EngTrqReqActvVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S632(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_ECMOvrdReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S633(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_Lgtctrl_FuelCutOffReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S634(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_Lgtctrl_EngTrqReqActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S635(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_TgtGearReqVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S636(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_TgtGearReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S637(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_WorkReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S638(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_lgt_ModSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S639(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_Lgtctrl_EngTrqReqVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S640(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_WorkReqVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S641(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.RollingCounter_IDC_L3_3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S642(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.Checksum_IDC_L3_5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S643(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_lgt_Decel_ReqValue */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S644(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AEB_DecelCtrlReqVal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S645(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_EBA_DecelCtrlReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S646(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AEB_ABAReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S647(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AEB_ABALvl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S648(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_lgt_DecelToStopReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S649(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_lgt_Decel_Req */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S650(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_lgt_DrvOFF_Req */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S651(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_lgt_VehHldReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S652(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AEB_ABP_Req */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S653(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AEB_AWB_Lvl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S654(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AEB_AWB_Req */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S655(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AEB_DecelCtrlReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S656(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_AEB_VehHldReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S657(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_EPBCtrlReqVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S658(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_EPBCtrlReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S659(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.RollingCounter_IDC_L3_5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S660(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.Checksum_IDC_L3_4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S661(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_Lgt_HCUTrqReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S662(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_HCUOvrdReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S663(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_Lgt_HCUTrqReqActvVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S664(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_Lgt_HCUTrqReqActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S665(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_Lgt_HCUTrqReqVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S666(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.RollingCounter_IDC_L3_4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S667(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_TgtAccel */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S668(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_UpperLimit */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S669(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_LowerLimit */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S670(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_TgtAccelCmftUpprLimVal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S671(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_TgtAccelCmftLwrLimVal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S672(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_SuprAvail */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S673(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_SecureReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S674(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_UseTgtAccelCmftUpprLimVal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S675(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_ShutdownReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S676(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_MotTypeReqLong */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S677(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.HWP_MotTypeReqMode */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S678(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD1_MSG.FreshnessValue_IDC_L3_FD1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S679(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_RFogLightReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S680(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_FFogLightReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S681(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_HiBeamtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S682(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_DippedBeamReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S683(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_HornReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S684(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_TurnlLightReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S685(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_EmgyLightReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S686(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_RWshrReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S687(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_FWshrReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S688(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_RWiperReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S689(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_FWiperReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S690(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_AC_Req */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S691(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_TrkReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S692(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_CenCtrllockReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S693(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_BackupReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S694(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_BrkLmpReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S695(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_KBCM_Req */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S696(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_WorkReqVld_KBCM */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S697(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_TarTemp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S698(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_TarWind */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S699(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_TextWarn_AC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S700(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.HWP_WorkReq_KBCM */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S701(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD2_MSG.FreshnessValue_IDC_L3_FD2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S702(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.Checksum_IDC_L3_2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S703(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.HWP_CrsSpdSetVal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S704(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.EgoVehSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S705(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.HWP_SpdMaxLim */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S706(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.HWP_OperStsDecision */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S707(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.HWP_OperSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S708(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.HWP_VehSpdUnit */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S709(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.HWP_ChimeWarn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S710(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.HWP_TextWarn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S711(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.RollingCounter_IDC_L3_2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S712(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.HWP_HAP_Cmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S713(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_FD3_MSG.FreshnessValue_IDC_L3_FD3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S714(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_NM_MSG.Destination_IDC_L3_NM */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S715(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IDC_L3_NODE.IDC_L3_NM_MSG.OpCode_IDC_L3_NM */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S716(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IP_NODE.IP2_MSG.IP_VehTotDistance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S717(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IP_NODE.IP2_MSG.IP_VehTotDistanceValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S718(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IP_NODE.IP2_MSG.IP_ACCErr */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S719(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IP_NODE.IP2_MSG.IP_Err */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S720(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IP_NODE.IP2_MSG.IP_VehSpdUnit */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S721(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IP_NODE.IP2_MSG.FreshnessValue_IP2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S722(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.Checksum_CR_R_1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S723(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.FCTA_Warn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S724(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.FCTA_B_FuncSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S725(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_FCTB_Resp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S726(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_FCTA_Resp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S727(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.FCTB_ABA_Req */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S728(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.FCTB_ABA_Level */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S729(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.FCTBTrig */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S730(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_BrkgReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S731(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_BliSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S732(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ErrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S733(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_BrkgReqVal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S734(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.FCTA_B_TTC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S735(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.FCTB_ABP_Req */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S736(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.RollingCounter_CR_R_1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S737(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.Checksum_CR_R_2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S738(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjDistY_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S739(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjID_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S740(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjDistX_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S741(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelVelX_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S742(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjSts_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S743(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelAccelX_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S744(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.RollingCounter_CR_R_2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S745(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjMotionType_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S746(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.Checksum_CR_R_3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S747(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjDistY_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S748(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjID_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S749(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjDistX_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S750(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelVelX_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S751(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjSts_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S752(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelAccelX_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S753(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.RollingCounter_CR_R_3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S754(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjMotionType_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S755(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.Checksum_CR_R_4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S756(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelAccelY_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S757(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelAccelY_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S758(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelVelY_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S759(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelVelY_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S760(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.RollingCounter_CR_R_4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S761(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjDistXStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S762(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelVelXStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S763(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjDistYStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S764(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelVelYStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S765(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRAccelYStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S766(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRAccelXStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S767(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjDistYStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S768(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjDistXStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S769(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelVelXStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S770(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRelVelYStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S771(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRAccelYStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S772(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal CR_NODE.CR_FD1_MSG.CR_ObjRAccelXStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S773(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRelAccelY_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S774(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.Checksum_RSDS_R_2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S775(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_BrkgReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S776(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_Brk_ErrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S777(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_IPSoundReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S778(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_LEDLightReqRight */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S779(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_LEDLightReqLeft */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S780(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_BrkgReqVal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S781(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.DOW_warningReqleft */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S782(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.DOW_warningReqRight */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S783(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.BSD_LCA_warningReqleft */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S784(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.BSD_LCA_warningReqRight */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S785(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_RCW_Trigger */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S786(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_RCTAResp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S787(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_RCWResp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S788(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_DOWResp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S789(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_LCAResp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S790(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_TrailerSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S791(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_BliSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S792(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_BrkgTrig */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S793(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ErrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S794(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RollingCounter_RSDS_R_2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S795(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RCTA_warningReqLeft */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S796(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RCTA_warningReqRight */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S797(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_CTA_Actv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S798(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_RCTABrkResp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S799(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.Checksum_RSDS_R_3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S800(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjIDLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S801(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.LeTarSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S802(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLgtPosnCurvLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S803(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLatPosnCurvLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S804(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLgtSpdCurvLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S805(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLatSpdCurvLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S806(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RollingCounter_RSDS_R_3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S807(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjTTCLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S808(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.Checksum_RSDS_R_4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S809(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjStatyLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S810(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjWidthLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S811(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLenLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S812(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjRinRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S813(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjStsLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S814(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ZoneIndLe */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S815(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjStsRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S816(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ZoneIndRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S817(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjStatyRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S818(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjWidthRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S819(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RollingCounter_RSDS_R_4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S820(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.Checksum_RSDS_R_5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S821(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjIDRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S822(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RiTarSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S823(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLgtPosnCurvRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S824(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLatPosnCurvRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S825(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLgtSpdCurvRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S826(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjLatSpdCurvRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S827(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RollingCounter_RSDS_R_5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S828(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.ObjTTCRi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S829(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjDistXStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S830(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRelVelXStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S831(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjDistYStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S832(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRelVelYStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S833(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRAccelYStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S834(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRAccelXStd_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S835(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjDistYStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S836(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjDistXStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S837(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRelVelXStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S838(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRelVelYStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S839(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRAccelYStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S840(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRAccelXStd_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S841(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRelAccelX_Le */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S842(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRelAccelX_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S843(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD1_MSG.RSDS_ObjRelAccelY_Ri */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S844(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RCTA_B_TTC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S845(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.BSD_LCA_Left_TTC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S846(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RCW_TTC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S847(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.BSD_LCA_Right_TTC */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S848(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_LeTgt_01_dy */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S849(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_LeTgt_01 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S850(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_LeTgt_02 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S851(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_LeTgt_01_dx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S852(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_LeTgt_02_dx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S853(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_RiTgt_01 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S854(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_LeTgt_02_dy */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S855(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_RiTgt_01_dx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S856(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_RiTgt_02 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S857(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_RiTgt_01_dy */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S858(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_RiTgt_02_dx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S859(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_MidTgt_01 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S860(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_RiTgt_02_dy */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S861(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_MidTgt_01_dx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S862(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_MidTgt_02 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S863(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_MidTgt_01_dy */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S864(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_MidTgt_02_dx */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S865(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal RSDS_NODE.RSDS_FD2_MSG.RSDS_MidTgt_02_dy */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S866(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.IB_BrkPedalAppldVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S867(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.IB_BrkPedalAppld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S868(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.CheckSum_EPB1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S869(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.EPBSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S870(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RollingCounter_EPB1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S871(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.CheckSum_ABS1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S872(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.FLWheelSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S873(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.FLWheelDriveDirection */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S874(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.FLWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S875(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.FRWheelSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S876(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.FRWheelDriveDirection */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S877(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.FRWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S878(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.WssFLEdgesSum */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S879(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.WssFREdgesSum */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S880(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RollingCounter_ABS1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S881(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.WssFREdgesSumVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S882(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.WssFLEdgesSumVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S883(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.CheckSum_ABS3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S884(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.VehSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S885(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.EBDFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S886(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.ABSFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S887(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.VehSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S888(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.ABSActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S889(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.EBDActv */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S890(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RollingCounter_ABS3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S891(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.CheckSum_IBooster_FD2_5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S892(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.L3mainVMCavailiable */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S893(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.L3VLCADactive */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S894(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RollingCounter_Booster_FD2_5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S895(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.CheckSum_ABS2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S896(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RLWheelSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S897(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RLWheelDriveDirection */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S898(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RLWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S899(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RRWheelSpdVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S900(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RRWheelDriveDirection */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S901(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RRWheelSpd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S902(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.WssRREdgesSum */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S903(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.WssRLEdgesSum */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S904(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.RollingCounter_ABS2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S905(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.WssRREdgesSumVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S906(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal IBOOSTER_NODE.IBOOSTER_FD2_MSG.WssRLEdgesSumVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S907(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PEPS_NODE.PEPS2_MSG.SysPowerModVld */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S908(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal PEPS_NODE.PEPS2_MSG.SysPowerMod */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S909(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.Checksum_APS1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S910(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_ReqCtrlEPS */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S911(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_ReqEPSTgtAngValid */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S912(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_SlotDisp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S913(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_SysSoundIndcn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S914(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_ReqEPSTgtAng */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S915(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_TextDisp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S916(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_SwtSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S917(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_ProcBar */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S918(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.TurnLightsCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S919(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_PrkgMod */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S920(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_PrkgTyp */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S921(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.RollingCounter_APS1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S922(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.Checksum_APS4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S923(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_BrkCategory */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S924(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_ESP_TgtGearReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S925(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_BrkFctnMod */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S926(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_WorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S927(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.MEB_BrkgReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S928(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.MEBErrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S929(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_BrkModSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S930(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_ESP_SpdLimn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S931(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.MEB_AVHReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S932(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_ESP_BrkDistance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S933(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.MEB_BrkgReqValue */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S934(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.RollingCounter_APS4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S935(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMSubMTReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S936(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_DriverPresenceExternal */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S937(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMDistToStop */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S938(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMPrefill */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S939(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMSubMTLevel */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S940(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_SafeDrvrHandoverReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S941(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMvMaxRq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S942(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMNudgeReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S943(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMVehSecReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S944(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMComfBrakeReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S945(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMVehDirRq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S946(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_ESP_LSMSubMTLong */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S947(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.P2P_PahDelSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S948(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_PrkgModCurrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S949(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_PASSwtReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S950(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.P2P_Pah1Avail */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S951(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.P2P_SelfDetErrCode */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S952(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HAP_SwtDispCtrlCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S953(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.TailVertPrkgOutVald */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S954(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.HeadVertPrkgOutVald */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S955(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.RParaPrkgOutVald */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S956(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.LParaPrkgOutVald */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S957(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.RmtPrkgReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S958(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.P2P_Pah2Avail */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S959(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.P2P_SelfDetSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S960(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.APS_MovgDirc */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S961(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD1_MSG.FreshnessValue_HAP_FD1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S962(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.SigViewIndcn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S963(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.AVM_CurrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S964(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.HAP_Hmi_Index */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S965(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.AutoAVMSwtSet_Sts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S966(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.AutoViewChgFuncSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S967(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.CarMdlDispSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S968(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.MOD_AlarmSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S969(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.MOD_WorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S970(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.MdlColrSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S971(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.RadarDispSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S972(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.GuidOvlSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S973(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.CurrCalResultSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S974(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.LaneCalFltSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S975(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.LaneCalSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S976(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.CarMdlTrsprcySts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S977(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.OvlOpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S978(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.EolNotCmpltd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S979(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.FrntCamInpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S980(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.RearCamInpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S981(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.LeCamInpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S982(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.RiCamInpFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S983(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.AVM_3DAngSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S984(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.DVRWorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S985(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD2_MSG.HAP_DispCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S986(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_NearBrrdstn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S987(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjRiSideAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S988(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjRiSideAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S989(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjRiSideAr4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S990(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjRiSideAr3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S991(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjLeSideAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S992(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjRiSideAr5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S993(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjLeSideAr3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S994(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjLeSideAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S995(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjLeSideAr5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S996(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_ObjLeSideAr4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S997(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.SDWActiveSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S998(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.SDW_SoundIndcn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S999(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_RLSideSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1000(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_RRSideSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1001(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_FLSideSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1002(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_FRSideSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1003(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_ObjRRCornrAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1004(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_ObjRRCornrAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1005(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_ObjRRMidlAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1006(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_ObjRRMidlAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1007(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_ObjRLMidlAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1008(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_ObjRLMidlAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1009(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_ObjRLCornrAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1010(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_ObjRLCornrAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1011(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_WorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1012(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_RRCornrSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1013(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_RRMiddlSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1014(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_RLMiddlSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1015(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_RLCornrSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1016(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.MEB_EnableSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1017(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.MEBWorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1018(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RPAS_SoundIndcn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1019(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_ObjFLCornrAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1020(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_ObjFLCornrAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1021(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_ObjFLMidlAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1022(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_ObjFLMidlAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1023(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_ObjFRMidlAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1024(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_ObjFRMidlAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1025(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_ObjFRCornrAr2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1026(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_ObjFRCornrAr1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1027(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_AutoModSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1028(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_DispCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1029(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_WorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1030(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_FRCornrSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1031(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_FRMiddlSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1032(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_FLMiddlSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1033(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_FLCornrSnsrFailSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1034(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_SoundIndcn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1035(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FPAS_NearBrrdstn */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1036(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FADS_FuncSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1037(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RADS_FuncSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1038(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.P2P_FuncSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1039(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APA_FuncSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1040(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.OrvmCtrlCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1041(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.HAP_TextIconDispCtrl */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1042(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APA_MenuDispCtrlCmd */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1043(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RmtPrkgSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1044(boolean_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RmtPrkgFinishReq */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1045(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_Coordinate_Angle */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1046(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_Coordinate_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1047(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.APS_Coordinate_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1048(int16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.HAPob_WorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1049(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.LtSlope */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1050(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.LtCurVtur */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1051(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.Ltlntcep */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1052(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.LtCobfi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1053(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RtSlope */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1054(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RtCurVtur */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1055(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.Rtlntcep */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1056(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.RtCobfi */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1057(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD3_MSG.FreshnessValue_HAP_FD3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1058(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj1_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1059(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj1_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1060(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj1_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1061(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj1_height */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1062(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj1_length */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1063(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj1_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1064(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj1_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1065(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj1_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1066(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj2_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1067(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj2_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1068(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj2_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1069(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj2_height */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1070(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj2_length */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1071(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj2_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1072(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj2_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1073(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj2_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1074(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj3_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1075(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj3_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1076(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj3_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1077(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj3_height */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1078(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj3_length */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1079(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj3_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1080(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj3_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1081(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj3_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1082(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj4_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1083(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj4_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1084(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj4_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1085(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj4_height */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1086(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj4_length */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1087(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj4_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1088(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj4_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1089(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj4_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1090(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj5_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1091(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj5_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1092(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj5_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1093(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj5_height */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1094(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj5_length */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1095(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj5_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1096(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj5_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1097(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj5_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1098(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj6_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1099(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj6_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1100(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj6_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1101(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj6_height */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1102(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj6_length */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1103(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj6_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1104(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj6_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1105(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj6_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1106(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj7_width */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1107(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj7_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1108(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj7_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1109(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj7_height */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1110(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj7_length */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1111(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj7_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1112(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj7_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1113(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD4_MSG.OD_Obj7_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1114(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_1_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1115(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_2_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1116(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_4_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1117(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_3_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1118(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_5_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1119(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_6_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1120(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_8_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1121(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_7_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1122(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_9_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1123(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_10_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1124(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_12_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1125(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_11_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1126(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_13_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1127(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_14_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1128(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_16_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1129(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_15_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1130(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_17_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1131(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_18_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1132(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_20_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1133(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_19_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1134(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_21_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1135(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_22_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1136(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_24_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1137(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_23_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1138(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_25_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1139(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_26_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1140(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_28_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1141(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_27_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1142(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_29_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1143(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_30_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1144(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_32_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1145(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_31_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1146(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_33_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1147(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_34_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1148(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_36_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1149(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_35_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1150(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_37_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1151(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_38_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1152(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_40_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1153(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_39_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1154(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_41_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1155(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_42_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1156(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_44_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1157(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_43_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1158(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_45_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1159(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_46_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1160(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_48_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1161(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD5_MSG.Freespace_47_distance */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1162(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj1_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1163(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj1_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1164(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj1_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1165(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj1_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1166(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj1_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1167(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtCam_WorkSts */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1168(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj2_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1169(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj2_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1170(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj2_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1171(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj2_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1172(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj2_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1173(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj3_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1174(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj3_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1175(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj3_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1176(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj3_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1177(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj3_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1178(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj4_type */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1179(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj4_ID */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1180(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj4_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1181(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj4_Ground_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1182(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.HAP_RtSide_Obj4_Ground_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1183(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_RRSide2_Status */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1184(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FRSide1_Status */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1185(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_RLSide2_Status */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1186(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FLSide1_Status */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1187(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FLSide1_Dist */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1188(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_RLSide2_Dist */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1189(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FRSide1_Dist */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1190(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_RRSide2_Dist */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1191(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FLCNear_Obj_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1192(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FLCNear_Obj_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1193(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FLCNear_Obj_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1194(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FLMNear_Obj_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1195(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FLMNear_Obj_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1196(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FLMNear_Obj_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1197(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FRMNear_Obj_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1198(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FRMNear_Obj_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1199(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FRMNear_Obj_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1200(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FrontSys_Status */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1201(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FRCNear_Obj_Pos_X */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1202(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FRCNear_Obj_Confidence */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1203(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/VCANBus typed bus port 1 signal HAP_NODE.HAP_FD6_MSG.USS_FRCNear_Obj_Pos_Y */
EXTERN_C void ap_read_Noa_Nofusion_DataInport11_P1_S1204(real32_T
  * OutputPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Write bus access point of block Noa_Nofusion/Common/Data Outport, Port: 1   */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1
  (write_Noa_Nofusion_DataOutport1_P1* InputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S1(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S2(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 3 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S3(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 4 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S4(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 5 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S5(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 6 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S6(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 7 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S7(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 8 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S8(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 9 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S9(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 10 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S10(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport untyped bus port 1 signal 11 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport1_P1_S11(real32_T
  * InputPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Write bus access point of block Noa_Nofusion/Common/Data Outport1, Port: 1   */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport2_P1
  (write_Noa_Nofusion_DataOutport2_P1* InputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Write access point of block Noa_Nofusion/Common/Data Outport1 untyped bus port 1 signal 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport2_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport1 untyped bus port 1 signal 2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport2_P1_S2(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Common/Data Outport1 untyped bus port 1 signal 3 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport2_P1_S3(uint8_T
  * InputPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Read bus access point of block Noa_Nofusion/RFM_Road, Port: 1   */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1
  (read_Noa_Nofusion_DataInport12_P1* OutputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S2(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S3(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S4(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S5(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 6 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S6(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S7(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S8(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S9(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S10(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 11 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S11(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 12 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S12(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 13 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S13(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 14 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S14(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 15 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S15(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 16 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S16(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 17 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S17(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 18 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S18(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 19 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S19(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 20 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S20(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 21 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S21(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 22 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S22(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 23 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S23(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 24 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S24(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 25 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S25(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 26 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S26(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 27 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S27(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 28 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S28(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 29 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S29(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 30 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S30(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 31 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S31(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S32(uint32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 33 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S33(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 34 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S34(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 35 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S35(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 36 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S36(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 37 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S37(uint16_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 38 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S38(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 39 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S39(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 40 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S40(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 41 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S41(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 42 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S42(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 43 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S43(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 44 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S44(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 45 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S45(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 46 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S46(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 47 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S47(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 48 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S48(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 49 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S49(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 50 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S50(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 51 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S51(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 52 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S52(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 53 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S53(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 54 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S54(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 55 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S55(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 56 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S56(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 57 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S57(uint32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 58 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S58(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/RFM_Road untyped bus port 1 signal 59 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport12_P1_S59(uint32_T
  * OutputPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Read bus access point of block Noa_Nofusion/ifLaneBus_out_In, Port: 1   */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1
  (read_Noa_Nofusion_DataInport13_P1* OutputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S2(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S3(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S4(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S5(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 6 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S6(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S7(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S8(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S9(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S10(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 11 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S11(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 12 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S12(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 13 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S13(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 14 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S14(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 15 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S15(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 16 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S16(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 17 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S17(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 18 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S18(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 19 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S19(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 20 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S20(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 21 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S21(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 22 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S22(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 23 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S23(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 24 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S24(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 25 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S25(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 26 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S26(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 27 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S27(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 28 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S28(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 29 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S29(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 30 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S30(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 31 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S31(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S32(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 33 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S33(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 34 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S34(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 35 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S35(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 36 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S36(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 37 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S37(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 38 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S38(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 39 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S39(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 40 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S40(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 41 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S41(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 42 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S42(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 43 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S43(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 44 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S44(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 45 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S45(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 46 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S46(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 47 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S47(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 48 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S48(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 49 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S49(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 50 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S50(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 51 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S51(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 52 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S52(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 53 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S53(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 54 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S54(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 55 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S55(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 56 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S56(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 57 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S57(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 58 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S58(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 59 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S59(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 60 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S60(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 61 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S61(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 62 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S62(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 63 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S63(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 64 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S64(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 65 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S65(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 66 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S66(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 67 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S67(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 68 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S68(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 69 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S69(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 70 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S70(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 71 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S71(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 72 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S72(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 73 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S73(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 74 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S74(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 75 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S75(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 76 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S76(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 77 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S77(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 78 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S78(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 79 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S79(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 80 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S80(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 81 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S81(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 82 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S82(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 83 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S83(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 84 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S84(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 85 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S85(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 86 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S86(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 87 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S87(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 88 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S88(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 89 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S89(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 90 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S90(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 91 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S91(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 92 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S92(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 93 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S93(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 94 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S94(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 95 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S95(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 96 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S96(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 97 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S97(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 98 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S98(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 99 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S99(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 100 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S100(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 101 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S101(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 102 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S102(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 103 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S103(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 104 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S104(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 105 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S105(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 106 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S106(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 107 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S107(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 108 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S108(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 109 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S109(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 110 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S110(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 111 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S111(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 112 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S112(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 113 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S113(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 114 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S114(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 115 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S115(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 116 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S116(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 117 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S117(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 118 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S118(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 119 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S119(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 120 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S120(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 121 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S121(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 122 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S122(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 123 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S123(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 124 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S124(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 125 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S125(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 126 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S126(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 127 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S127(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 128 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S128(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 129 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S129(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 130 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S130(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 131 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S131(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 132 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S132(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 133 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S133(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 134 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S134(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 135 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S135(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 136 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S136(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 137 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S137(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 138 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S138(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 139 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S139(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 140 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S140(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 141 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S141(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 142 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S142(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 143 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S143(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 144 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S144(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 145 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S145(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 146 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S146(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 147 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S147(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 148 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S148(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 149 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S149(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 150 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S150(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 151 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S151(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 152 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S152(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 153 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S153(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 154 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S154(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 155 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S155(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 156 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S156(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 157 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S157(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 158 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S158(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 159 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S159(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 160 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S160(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 161 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S161(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 162 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S162(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 163 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S163(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 164 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S164(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 165 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S165(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 166 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S166(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 167 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S167(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 168 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S168(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 169 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S169(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 170 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S170(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 171 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S171(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 172 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S172(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 173 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S173(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 174 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S174(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 175 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S175(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 176 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S176(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 177 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S177(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 178 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S178(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 179 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S179(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 180 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S180(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 181 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S181(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/ifLaneBus_out_In untyped bus port 1 signal 182 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport13_P1_S182(uint8_T
  * OutputPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Read bus access point of block Noa_Nofusion/IfRFM_LANES_In, Port: 1   */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1
  (read_Noa_Nofusion_DataInport14_P1* OutputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 1 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S1(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 2 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S2(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 3 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S3(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 4 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S4(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 5 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S5(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 6 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S6(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 7 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S7(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 8 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S8(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 9 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S9(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 10 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S10(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 11 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S11(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 12 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S12(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 13 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S13(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 14 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S14(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 15 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S15(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 16 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S16(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 17 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S17(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 18 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S18(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 19 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S19(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 20 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S20(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 21 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S21(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 22 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S22(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 23 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S23(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 24 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S24(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 25 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S25(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 26 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S26(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 27 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S27(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 28 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S28(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 29 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S29(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 30 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S30(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 31 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S31(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 32 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S32(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 33 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S33(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 34 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S34(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 35 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S35(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 36 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S36(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 37 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S37(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 38 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S38(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 39 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S39(real32_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 40 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S40(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 41 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S41(uint8_T
  * OutputPortSignalPtr);

/* Read access point of block Noa_Nofusion/IfRFM_LANES_In untyped bus port 1 signal 42 */
EXTERN_C void ap_read_Noa_Nofusion_DataInport14_P1_S42(uint8_T
  * OutputPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Write bus access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG, Port: 1   */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1(ACC_FD1_MSG_BUS*
  InputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_TgtAccel_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S1(int8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_UpperLimit_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S2(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_LowerLimit_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S3(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_TgtAccelCmftUpprLimVal_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S4(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_TgtAccelCmftLwrLimVal_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S5(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_ShutdownReq_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S6(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_MotTypeReqLong_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S7(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_MotTypeReqMode_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S8(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_ACCAvail */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S9(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_AEBAvail */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S10(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_SecureReq_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S11(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal HWP_UseTgtAccelCmftUpprLimVal_L2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S12(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Checksum_ACC1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S13(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_Decel_Req */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S14(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_ModSts */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S15(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_DrvOFF_Req */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S16(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_VehHldReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S17(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_EngTrqReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S18(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_ParkShiftReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S19(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_DecelToStopReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S20(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_FuelCutOffPrevn */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S21(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_EngTrqReqActive */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S22(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_Decel_ReqValue */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S23(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal ActualTargetSpeed */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S24(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal RollingCounter_ACC1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S25(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Checksum_ACC2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S26(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal RollingCounter_ACC2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S27(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal ACC_CRInterface */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S28(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Checksum_ACC10 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S29(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_HCUTrqReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S30(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal Longctrl_HCUTrqReqActive */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S31(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal RollingCounter_ACC10 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S32(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/ACC_FD1MSG typed bus port 1 signal FreshnessValue_ACC_FD1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport3_P1_S33(uint16_T
  * InputPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Write bus access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1, Port: 1   */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1(IFC_FD1_MSG_BUS*
  InputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal IFCFuncAngCmdReqFlag */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal Checksum_IFC1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S2(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal IFCTrqOvlCmdProtnValue */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S3(uint16_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal IFCVibrationWarning */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S4(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal IFCTrqOvlCmdReqValue */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S5(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal RollingCounter_IFC1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S6(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal IFCFuncTrqCmdReqFlag */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S7(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal Checksum_IFC2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S8(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal IFCAngCmdReqValue */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S9(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal IFCAngCmdReqProtnValue */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S10(uint16_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/Chassis1/Subsystem/IFC_FD1MSG1 typed bus port 1 signal RollingCounter_IFC2 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport4_P1_S11(uint8_T
  * InputPortSignalPtr);

#endif

/* Write access point of block Noa_Nofusion/ACC_FD1, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport5_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/ACC_FD2, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport6_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/ACC_FD4, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport7_P1_S1(uint8_T
  * InputPortSignalPtr);

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 2)

/* Write bus access point of block Noa_Nofusion/IDC_L3_FD1_MSG, Port: 1   */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1(IDC_L3_FD1_MSG_BUS*
  InputBusPortSignalPtr);

#endif

#if (DATA_PORT_ACCESS_POINT_API_VERSION == 1)

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal Checksum_IDC_L3_1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AngCmdReqVal */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S2(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_TrqOvlCmdProtnValue */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S3(uint16_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_TrqOvlCmdReqValue */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S4(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_FuncTrqCmdReqFlag */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S5(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_HapcWarnReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S6(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AngCmdReqValVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S7(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_ReqCtrlEPSVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S8(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_ReqCtrlEPS */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S9(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal RollingCounter_IDC_L3_1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S10(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal Checksum_IDC_L3_3 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S11(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_Lgtctrl_EngTrqReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S12(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_EngTrqReqActvVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S13(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_ECMOvrdReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S14(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_Lgtctrl_FuelCutOffReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S15(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_Lgtctrl_EngTrqReqActv */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S16(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_TgtGearReqVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S17(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_TgtGearReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S18(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_WorkReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S19(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_lgt_ModSts */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S20(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_Lgtctrl_EngTrqReqVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S21(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_WorkReqVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S22(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal RollingCounter_IDC_L3_3 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S23(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal Checksum_IDC_L3_5 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S24(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_lgt_Decel_ReqValue */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S25(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AEB_DecelCtrlReqVal */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S26(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_EBA_DecelCtrlReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S27(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AEB_ABAReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S28(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AEB_ABALvl */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S29(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_lgt_DecelToStopReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S30(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_lgt_Decel_Req */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S31(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_lgt_DrvOFF_Req */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S32(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_lgt_VehHldReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S33(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AEB_ABP_Req */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S34(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AEB_AWB_Lvl */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S35(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AEB_AWB_Req */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S36(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AEB_DecelCtrlReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S37(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_AEB_VehHldReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S38(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_EPBCtrlReqVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S39(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_EPBCtrlReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S40(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal RollingCounter_IDC_L3_5 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S41(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal Checksum_IDC_L3_4 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S42(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_Lgt_HCUTrqReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S43(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_HCUOvrdReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S44(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_Lgt_HCUTrqReqActvVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S45(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_Lgt_HCUTrqReqActv */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S46(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_Lgt_HCUTrqReqVld */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S47(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal RollingCounter_IDC_L3_4 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S48(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_TgtAccel */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S49(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_UpperLimit */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S50(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_LowerLimit */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S51(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_TgtAccelCmftUpprLimVal */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S52(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_TgtAccelCmftLwrLimVal */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S53(real32_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_SuprAvail */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S54(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_SecureReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S55(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_UseTgtAccelCmftUpprLimVal */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S56(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_ShutdownReq */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S57(boolean_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_MotTypeReqLong */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S58(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal HWP_MotTypeReqMode */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S59(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IDC_L3_FD1_MSG typed bus port 1 signal FreshnessValue_IDC_L3_FD1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport8_P1_S60(uint16_T
  * InputPortSignalPtr);

#endif

/* Write access point of block Noa_Nofusion/IFC_FD1, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport9_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IFC_FD2, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport10_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IFC_FD3, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport11_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IFC_FD5, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport12_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/IFC_FD6, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport13_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Write access point of block Noa_Nofusion/TOS/TOS_ACC_P0 Raw Data5, non-bus port 1 */
EXTERN_C void ap_write_Noa_Nofusion_DataOutport14_P1_S1(uint8_T
  * InputPortSignalPtr);

/* Trigger access point of block Noa_Nofusion/UDP Receive (3)\Data Received/Trigger Event Port S-Fcn*/
EXTERN_C void dsmpb_event_task_Noa_Nofusion_TriggerEventPortSFcn_TID3_BT1(void);

/* Trigger access point of block Noa_Nofusion/UDP Receive 2\Data Received/Trigger Event Port S-Fcn*/
EXTERN_C void dsmpb_event_task_Noa_Nofusion_TriggerEventPortSFcn_o_TID4_BT2(void);

/*                                                                            */
/* Declarations of function module access points                              */
/*                                                                            */
/* Function module access point of system <Root>/Subsystem3    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDS21_TID3();
EXTERN_C void ap_exit_Noa_Nofusion_SIDS21_TID3();

/* Function module access point of system <Root>/UDP_Received    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDS26_TID4();
EXTERN_C void ap_exit_Noa_Nofusion_SIDS26_TID4();

/* Function module access point of system <Root>    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDRoot_TID1();
EXTERN_C void ap_exit_Noa_Nofusion_SIDRoot_TID1();

/* Function module access point of system <S5>/CR_L_Bus    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDS30_TID1();
EXTERN_C void ap_exit_Noa_Nofusion_SIDS30_TID1();

/* Function module access point of system <S5>/CR_R_Bus    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDS32_TID1();
EXTERN_C void ap_exit_Noa_Nofusion_SIDS32_TID1();

/* Function module access point of system <S5>/RSDS_L_Bus    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDS40_TID1();
EXTERN_C void ap_exit_Noa_Nofusion_SIDS40_TID1();

/* Function module access point of system <S5>/RSDS_R_Bus    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDS42_TID1();
EXTERN_C void ap_exit_Noa_Nofusion_SIDS42_TID1();

/* Function module access point of system <Root>/Common    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDS7_TIDtriggered();
EXTERN_C void ap_exit_Noa_Nofusion_SIDS7_TIDtriggered();

/* Function module access point of system <Root>/Chassis1    */
EXTERN_C void ap_entry_Noa_Nofusion_SIDS6_TIDtriggered();
EXTERN_C void ap_exit_Noa_Nofusion_SIDS6_TIDtriggered();

#ifdef HAVE_Noa_Nofusion_DSMPBAP_CUSTOM
#include "Noa_Nofusion_dsmpbap_custom.h"
#endif
#endif
