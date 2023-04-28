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
        Com_RxIndication, \
        0, \
        0, \
        0, \
        0, \
        0 \
    }  \
}

#define PDUR_TARGET_MODULE_CANIF_119615_232434 0
#define PDUR_TARGET_MODULE_COM_119615_232434 1
#define PDUR_TARGET_MODULE_NONE 255

#define PDUR_TX_ACC_FD1_119615_232434 ((PduIdType) 0)
#define PDUR_TX_IFC_FD5_119615_232434 ((PduIdType) 1)
#define PDUR_TX_IFC_FD6_119615_232434 ((PduIdType) 2)
#define PDUR_TX_IFC_FD2_119615_232434 ((PduIdType) 3)
#define PDUR_TX_IFC_FD4_119615_232434 ((PduIdType) 4)
#define PDUR_TX_ACC_FD2_119615_232434 ((PduIdType) 5)
#define PDUR_TX_ACC_FD3_119615_232434 ((PduIdType) 6)
#define PDUR_TX_ACC_FD4_119615_232434 ((PduIdType) 7)
#define PDUR_TX_IFC_FD3_119615_232434 ((PduIdType) 8)
#define PDUR_TX_ACC_FD5_119615_232434 ((PduIdType) 9)

#define PDUR_NUM_TX_PATHS 10


#define PDUR_TX_PATHS  \
{ \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_ACC_FD1_209345_119615_232434 \
        }, \
        1, \
        0, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_IFC_FD5_209355_119615_232434 \
        }, \
        1, \
        1, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_IFC_FD6_209359_119615_232434 \
        }, \
        1, \
        2, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_IFC_FD2_209363_119615_232434 \
        }, \
        1, \
        3, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_IFC_FD4_209364_119615_232434 \
        }, \
        1, \
        4, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_ACC_FD2_209383_119615_232434 \
        }, \
        1, \
        5, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_ACC_FD3_209384_119615_232434 \
        }, \
        1, \
        6, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_ACC_FD4_209385_119615_232434 \
        }, \
        1, \
        7, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_IFC_FD3_209389_119615_232434 \
        }, \
        1, \
        8, \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434, \
            Com_ACC_FD5_209403_119615_232434 \
        }, \
        1, \
        9, \
    }  \
}

#define PDUR_TX_ENDPOINTS \
{ \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD1_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD5_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD6_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD2_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD4_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD2_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD3_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD4_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_IFC_FD3_FrameTrig \
    }  ,  \
    { \
        PDUR_TARGET_MODULE_CANIF_119615_232434, \
        CanIf_V71minus001minus021MM01_C_Matrix_for__ADASminusCANFD_V2_2_ACC_FD5_FrameTrig \
    }  \
}



/* Mapping of Interface RX_INDICATION PDU IDs to RX_INDICATION table entries */
#define PDUR_RX_HUT6_119615_232434_CanIf_Com ((PduIdType) 0)
#define PDUR_RX_HCU_FD1_119615_232434_CanIf_Com ((PduIdType) 1)
#define PDUR_RX_ECM_FD1_119615_232434_CanIf_Com ((PduIdType) 2)
#define PDUR_RX_DCT_FD1_119615_232434_CanIf_Com ((PduIdType) 3)
#define PDUR_RX_CSA2_119615_232434_CanIf_Com ((PduIdType) 4)
#define PDUR_RX_HCU_HP8_119615_232434_CanIf_Com ((PduIdType) 5)
#define PDUR_RX_ECM_FD2_119615_232434_CanIf_Com ((PduIdType) 6)
#define PDUR_RX_ECM1_119615_232434_CanIf_Com ((PduIdType) 7)
#define PDUR_RX_Ibooster_FD2_119615_232434_CanIf_Com ((PduIdType) 8)
#define PDUR_RX_HCU_FD3_119615_232434_CanIf_Com ((PduIdType) 9)
#define PDUR_RX_ESP_FD2_119615_232434_CanIf_Com ((PduIdType) 10)
#define PDUR_RX_ESP_FD3_119615_232434_CanIf_Com ((PduIdType) 11)
#define PDUR_RX_EPS_FD1_119615_232434_CanIf_Com ((PduIdType) 12)
#define PDUR_RX_HAP_FD1_119615_232434_CanIf_Com ((PduIdType) 13)
#define PDUR_RX_CR_FD1_119615_232434_CanIf_Com ((PduIdType) 14)
#define PDUR_RX_CSA1_119615_232434_CanIf_Com ((PduIdType) 15)
#define PDUR_RX_RSDS_FD1_119615_232434_CanIf_Com ((PduIdType) 16)
#define PDUR_RX_AEB_FD1_119615_232434_CanIf_Com ((PduIdType) 17)
#define PDUR_RX_F_PBox1_119615_232434_CanIf_Com ((PduIdType) 18)
#define PDUR_RX_R_PBox1_119615_232434_CanIf_Com ((PduIdType) 19)
#define PDUR_RX_HUT33_119615_232434_CanIf_Com ((PduIdType) 20)
#define PDUR_RX_HUT15_119615_232434_CanIf_Com ((PduIdType) 21)
#define PDUR_RX_DCT5_119615_232434_CanIf_Com ((PduIdType) 22)
#define PDUR_RX_AEB_FD2_119615_232434_CanIf_Com ((PduIdType) 23)
#define PDUR_RX_CSA4_119615_232434_CanIf_Com ((PduIdType) 24)
#define PDUR_RX_DCT_FD4_119615_232434_CanIf_Com ((PduIdType) 25)
#define PDUR_RX_ABM2_119615_232434_CanIf_Com ((PduIdType) 26)
#define PDUR_RX_DMS_FD1_119615_232434_CanIf_Com ((PduIdType) 27)
#define PDUR_RX_BLE1_119615_232434_CanIf_Com ((PduIdType) 28)
#define PDUR_RX_HUT32_119615_232434_CanIf_Com ((PduIdType) 29)
#define PDUR_RX_Trailer1_119615_232434_CanIf_Com ((PduIdType) 30)
#define PDUR_RX_HAP_FD2_119615_232434_CanIf_Com ((PduIdType) 31)
#define PDUR_RX_IP2_119615_232434_CanIf_Com ((PduIdType) 32)
#define PDUR_RX_HAP_FD4_119615_232434_CanIf_Com ((PduIdType) 33)
#define PDUR_RX_HC1_119615_232434_CanIf_Com ((PduIdType) 34)
#define PDUR_RX_HUT_FD2_119615_232434_CanIf_Com ((PduIdType) 35)
#define PDUR_RX_HAP_FD6_119615_232434_CanIf_Com ((PduIdType) 36)
#define PDUR_RX_HAP_FD5_119615_232434_CanIf_Com ((PduIdType) 37)
#define PDUR_RX_PEPS2_119615_232434_CanIf_Com ((PduIdType) 38)
#define PDUR_RX_HAP_FD3_119615_232434_CanIf_Com ((PduIdType) 39)
#define PDUR_RX_BCM8_119615_232434_CanIf_Com ((PduIdType) 40)
#define PDUR_RX_EEM1_119615_232434_CanIf_Com ((PduIdType) 41)
#define PDUR_RX_HUT_FD1_119615_232434_CanIf_Com ((PduIdType) 42)
#define PDUR_RX_DDCM1_119615_232434_CanIf_Com ((PduIdType) 43)
#define PDUR_RX_PDCM1_119615_232434_CanIf_Com ((PduIdType) 44)
#define PDUR_RX_HUT23_119615_232434_CanIf_Com ((PduIdType) 45)
#define PDUR_RX_HUT22_119615_232434_CanIf_Com ((PduIdType) 46)
#define PDUR_RX_HUT21_119615_232434_CanIf_Com ((PduIdType) 47)
#define PDUR_RX_HUT20_119615_232434_CanIf_Com ((PduIdType) 48)
#define PDUR_RX_BCM10_119615_232434_CanIf_Com ((PduIdType) 49)
#define PDUR_RX_HUT_FD3_119615_232434_CanIf_Com ((PduIdType) 50)
#define PDUR_RX_DVR_FD1_119615_232434_CanIf_Com ((PduIdType) 51)
#define PDUR_RX_HCU_PT4_119615_232434_CanIf_Com ((PduIdType) 52)
#define PDUR_RX_ECM_FD3_119615_232434_CanIf_Com ((PduIdType) 53)
#define PDUR_RX_RSDS_FD2_119615_232434_CanIf_Com ((PduIdType) 54)
#define PDUR_RX_BCM1_119615_232434_CanIf_Com ((PduIdType) 55)
#define PDUR_RX_TPMS1_119615_232434_CanIf_Com ((PduIdType) 56)
#define PDUR_RX_BCM3_119615_232434_CanIf_Com ((PduIdType) 57)
#define PDUR_RX_ABM1_119615_232434_CanIf_Com ((PduIdType) 58)
#define PDUR_RX_HUT34_119615_232434_CanIf_Com ((PduIdType) 59)
#define PDUR_RX_AC2_119615_232434_CanIf_Com ((PduIdType) 60)
#define PDUR_RX_T_Box_FD3_119615_232434_CanIf_Com ((PduIdType) 61)
#define PDUR_RX_HUT19_119615_232434_CanIf_Com ((PduIdType) 62)
#define PDUR_RX_GW_NM_119615_232434_CanIf_Com ((PduIdType) 63)
#define PDUR_RX_HC_NM_119615_232434_CanIf_Com ((PduIdType) 64)
#define PDUR_RX_RRR_NM_119615_232434_CanIf_Com ((PduIdType) 65)
#define PDUR_RX_SRR_L_NM_119615_232434_CanIf_Com ((PduIdType) 66)
#define PDUR_RX_SRR_R_NM_119615_232434_CanIf_Com ((PduIdType) 67)
#ifndef PDUR_RX_PDUID_NONE
#define PDUR_RX_PDUID_NONE ((PduIdType) -1)
#endif
#define PDUR_NUM_RX_PATHS 68

/* Rx routing table definition. */
#define PDUR_RX_PATHS  \
{ \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT6_209332_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HCU_FD1_209333_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_ECM_FD1_209334_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_DCT_FD1_209335_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_CSA2_209336_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HCU_HP8_209337_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_ECM_FD2_209338_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_ECM1_209339_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_Ibooster_FD2_209340_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HCU_FD3_209342_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_ESP_FD2_209343_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_ESP_FD3_209344_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_EPS_FD1_209346_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HAP_FD1_209348_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_CR_FD1_209349_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_CSA1_209350_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_RSDS_FD1_209351_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_AEB_FD1_209352_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_F_PBox1_209353_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_R_PBox1_209354_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT33_209356_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT15_209357_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_DCT5_209358_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_AEB_FD2_209360_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_CSA4_209361_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_DCT_FD4_209362_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_ABM2_209365_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_DMS_FD1_209367_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_BLE1_209368_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT32_209369_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_Trailer1_209370_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HAP_FD2_209371_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_IP2_209372_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HAP_FD4_209373_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HC1_209375_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT_FD2_209376_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HAP_FD6_209377_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HAP_FD5_209378_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_PEPS2_209379_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HAP_FD3_209380_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_BCM8_209381_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_EEM1_209382_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT_FD1_209386_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_DDCM1_209387_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_PDCM1_209388_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT23_209390_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT22_209391_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT21_209392_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT20_209393_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_BCM10_209394_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT_FD3_209395_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_DVR_FD1_209396_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HCU_PT4_209397_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_ECM_FD3_209398_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_RSDS_FD2_209399_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_BCM1_209400_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_TPMS1_209401_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_BCM3_209402_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_ABM1_209404_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT34_209405_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_AC2_209406_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_T_Box_FD3_209407_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HUT19_209408_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_GW_NM_209414_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_HC_NM_209409_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_RRR_NM_209411_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_SRR_L_NM_209412_119615_232434 \
        } \
    }  ,  \
    { \
        { \
            PDUR_TARGET_MODULE_COM_119615_232434,\
            Com_SRR_R_NM_209413_119615_232434 \
        } \
    }  \
}
#endif /* _PDUR_CFG_GENERATED_H_ */

