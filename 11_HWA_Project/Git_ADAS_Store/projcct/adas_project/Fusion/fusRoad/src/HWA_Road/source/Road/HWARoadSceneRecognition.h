/******************************************************************************/
/**
 * @file: HWARoadSceneRecognition.h
 * @brief 道路场景模块头文件
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-8-3 14:12:07
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_SCENE_RECOGNITION_H_
#define _HWA_ROAD_SCENE_RECOGNITION_H_

/*
********************************************************************************
* Include files section
********************************************************************************
*/
#include "HWA_R.h"
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
* @fn HWARoadSceneRecognition
* @var HWAKernel
* @var HWAIFVPack
* @var HWAEHRPack
*/
/******************************************************************************/
	ABool HWARoadSceneRecognition(HWAKernel* pst_kernel, HWAIFVPack* pst_ifv_pack, HWAEHRPack* pst_ehr_pack);
#ifdef __cplusplus
}
#endif

#endif /* _HWA_ROAD_SCENE_RECOGNITION_H_ */