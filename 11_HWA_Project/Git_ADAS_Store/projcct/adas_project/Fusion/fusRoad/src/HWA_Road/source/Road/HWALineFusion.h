/******************************************************************************/
/**
 * @file: HWALineFusion.h
 * @brief 道路融合算法实现
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  Reach.All Rights Reserved
 * @date: 2020-8-3 18:17:14
 */
 /******************************************************************************/
#ifndef _HWA_LINEFUSION_H_
#define _HWA_LINEFUSION_H_

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
* @fn HWALineFusion
* @var HWAKernel
* @var HWAIFVPack
* @var HWAEHRPack
*/
/******************************************************************************/
	AVoid fusion_LinesPredict(HWAKernel* pst_kernel);
	ABool HWALineFusion(HWAKernel* pst_kernel, HWAIFVPack* pst_ifv_pack, HWAEHRPack * pst_ehr_pack);


#ifdef __cplusplus
}
#endif


#endif /* _HWA_LINEFUSION_H_ */