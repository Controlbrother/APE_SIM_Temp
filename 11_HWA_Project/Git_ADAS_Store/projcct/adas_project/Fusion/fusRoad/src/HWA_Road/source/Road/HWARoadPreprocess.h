/******************************************************************************/
/**
 * @file: HWARoadPreprocess.h
 * @brief 道路预处理模块头文件
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-9-25 17:20:57
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_PREPROCESS_H_
#define  _HWA_ROAD_PREPROCESS_H_

/*
********************************************************************************
* Include files section
********************************************************************************
*/

#include "HWA_R.h"
#include"HWAafRoadArithm.h"
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
* @fn HWARoadPreprocess
* @var HWAKernel
* @var HWAIFVPack
* @var HWAEgoPack
*/
/******************************************************************************/
AInt HWARoadPreprocess(
	HWAKernel* pst_kernel,
	HWAIFVPack* pst_pack_lane,
	HWAEgoPack*  pst_ego_pack,
	HWA_SensorInput_st* pst_object_pack,
	HWATSRPack* tsr_pack
);

#ifdef __cplusplus
}
#endif



#endif /* _HWA_ROAD_PREPROCESS_H_ */