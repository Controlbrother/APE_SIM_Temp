/******************************************************************************/
/**
 * @file: HWARoadSceneRecognition.h
 * @brief 道路时空同步模块头文件
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-8-3 14:12:07
 */
 /******************************************************************************/
#ifndef _HWA_BOUNDARYLINEPREDICTED_H_
#define _HWA_BOUNDARYLINEPREDICTED_H_

/*
********************************************************************************
* Include files section
********************************************************************************
*/


#include "HWA_R.h"
#include "HWAafRoadArithm.h"

/*
********************************************************************************
* Typedef Section
********************************************************************************
*/


/*
********************************************************************************
* Declaration of API Functions Section
********************************************************************************
*/

#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
/**
* @fn HWATimeSpaceUnify
* @var HWAKernel
* @var HWAEgoPack
* @var HWAIFVPack
* @var HWATimePack
*/
/******************************************************************************/
ABool HWATimeSpaceUnify(HWAKernel* pst_kernel, HWAEgoPack* pst_vehicle_pack, HWAIFVPack* ifv, HWATimePack* pst_time_pack);

#ifdef __cplusplus
}
#endif





#endif