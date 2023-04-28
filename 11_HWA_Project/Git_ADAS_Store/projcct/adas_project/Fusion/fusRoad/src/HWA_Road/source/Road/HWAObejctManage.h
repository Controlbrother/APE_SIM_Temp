/******************************************************************************/
/**
 * @file: HWAObejctManage.h
 * @brief TSR模块头文件
 * @version: 3.0
 * @author: 
 * @copyright: Copyright (c) All Rights Reserved
 * @date: 2020-8-4 08:38:27
 */
 /******************************************************************************/
#ifndef _HWA_OBJECT_MANAGE_H_
#define _HWA_OBJECT_MANAGE_H_

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
* @fn HWAObejctManage
* @var HWAKernel
* @var HWAEHRPack
* @var HWATSRPack
*/
/******************************************************************************/
ABool HWAObejctManage(HWAKernel* pst_kernel, HWAEHRPack * pst_ehr_pack, HWATSRPack* pst_tsr_pack);
#ifdef __cplusplus
}
#endif





#endif /* _HWA_OBJECT_MANAGE_H_ */