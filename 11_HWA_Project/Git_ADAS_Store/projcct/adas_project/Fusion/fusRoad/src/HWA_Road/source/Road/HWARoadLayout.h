/******************************************************************************/
/**
 * @file: HWARoadLayout.h
 * @brief 道路布局模块头文件
 * @version: 3.0
 * @author: 
 * @copyright: Copyright (c) All Rights Reserved
 * @date: 2020-8-4 09:01:11
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_LAYOUT_H_
#define _HWA_ROAD_LAYOUT_H_

/*
********************************************************************************
* Includes
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
* @fn HWARoadLayout
* @var HWAKernel
* @var HWAIFVPack
* @var HWAEHRPack
* @var HWA_FSPXPack
*/
/******************************************************************************/
	ABool HWARoadLayout(HWAKernel* pst_kernel, HWAIFVPack *ifv, HWAEHRPack * pst_ehr_pack, HWA_FSPXPack* pst_fspx_pack);

#ifdef __cplusplus
}
#endif





#endif /* _HWA_ROAD_LAYOUT_H_ */