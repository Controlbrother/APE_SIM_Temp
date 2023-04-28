/******************************************************************************/
/**
 * @file: HWAOutputSendCallback.h
 * @brief: 道路融合算法头文件
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c) All Rights Reserved
 * @date: 2020-8-3 17:18:43
 */
 /*******************************************************************************/
#ifndef _HWAOUTPUTSENDCALLBACK_H_
#define _HWAOUTPUTSENDCALLBACK_H_

/*
********************************************************************************
* Include files section
********************************************************************************
*/
#include "HWA_R.h"

/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/

/******************************************************************************/
/**
* @fn HWAOutputPostprocess
* @var HWAKernel
* @var HWAIFVPack
*/
/******************************************************************************/
ABool HWAOutputPostprocess(HWAKernel* kernel, HWAIFVPack* ifvpack, HWATSRPack* tsrpack);
/******************************************************************************/
/**
* @fn HWARoadResultSend
* @var HWAKernel
* @var HWARoadResult
*/
/******************************************************************************/
ABool HWARoadResultSend(HWAKernel* kernel, RFM_Result* result);


#endif 