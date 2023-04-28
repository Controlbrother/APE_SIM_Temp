/******************************************************************************/
/**
 * @file: HWABoundary.h
 * @brief 边界模块头文件
 * @version: 3.0
 * @author: 
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-8-3 14:12:07
 */
 /******************************************************************************/
#ifndef _HWA_BOUNDARY_H_
#define _HWA_BOUNDARY_H_

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
* @fn HWABoundary
* @var HWAKernel
* @var HWA_SensorInput_st
* @var HWAIFVPack
* @var HWAEgoPack
*/
/******************************************************************************/
ABool HWABoundary(HWAKernel* pst_kernel, HWA_SensorInput_st* pst_object_pack, HWAIFVPack*  pst_ifv_pack, HWAEgoPack* pst_vehicle_pack);

#ifdef __cplusplus
}
#endif


#endif /* _HWA_BOUNDARY_H_ */