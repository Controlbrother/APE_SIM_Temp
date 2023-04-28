/******************************************************************************/
/**
 * @file: HWA_R.c
 * @brief 道路主程序模块
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c)  All Rights Reserved
 * @date: 2020-9-21 15:34:18
 */
 /******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/
// #include "../include/HWA_R.h" 
// #include "../source/Road/HWABoundary.h"
// #include "../source/HWAOutputSendCallback.h"
// #include "../source/Road/HWABoundaryLinePredicted.h"
// #include "../source/Road/HWALineFusion.h"
// #include "../source/Road/HWARoadPreprocess.h"
// #include "../source/Road/HWASpeedLimit.h"
// #include "../source/Road/HWAObejctManage.h"
// #include "../source/Road/HWARoadLayout.h"
// #include "../source/Road/HWARoadSceneRecognition.h"
#include "HWA_R.h" 
#include "HWABoundary.h"
#include "HWAOutputSendCallback.h"
#include "HWABoundaryLinePredicted.h"
#include "HWALineFusion.h"
#include "HWARoadPreprocess.h"
#include "HWASpeedLimit.h"
#include "HWAObejctManage.h"
#include "HWARoadLayout.h"
#include "HWARoadSceneRecognition.h"


/******************************************************************************/
/**
* @brief HWACreate
* @details 创建道路模型节点。该函数主要为道路模型模块申请所需要的内存空间，\n
* 并设置相应的场景。
* @param [in] rfhandle: 道路模型句柄
* @param [in] Stic_HWAhandle: 道路模型句柄
* @return 创建结果
* - 非0 创建失败
* - 0 创建成功
*/
/******************************************************************************/
AInt HWACreate(HWA_ROAD_HDLE* rfhandle, HWAKernel*Stic_HWAhandle)
{
	AInt i_ret = A_E_NOERROR;
	HWAKernel* pst_kernel = Stic_HWAhandle;

	if (pst_kernel)
	{
		/* Init kernel */
		memset(pst_kernel, 0x00, sizeof(HWAKernel));

		pst_kernel->RFM_SWC_Version = 2012040405;/*protocol version*/
	}
	else {
		i_ret = A_E_SYSTEM;
	}

	*rfhandle = (HWA_ROAD_HDLE)pst_kernel;

	return i_ret;
}
/******************************************************************************/
/**
* @brief HWADestroy
* @details 销毁道路模型节点。该函数主要释放道路模型申请的的内存空间
* @param [in] rfhandle: 道路模型句柄
* @return 无返回值
*/
/******************************************************************************/
AVoid HWADestroy(HWA_ROAD_HDLE rfhandle)
{
	HWAKernel* pst_kernel = (HWAKernel*)rfhandle;
	free(pst_kernel);
	pst_kernel = NULL;

	return;
}



/******************************************************************************/
/**
* @brief HWARoadKernel
* @details 运行道路模型节点。
* @param [in] rfhandle: 道路模型句柄
* @param [in] packlane: 道路模型输入 : 该参数包含摄像头的输出数据，地图的输出数据\n
* 以及在创建道路模型节点时设置的场景参数。
* @param [in] packobject:
* @param [in] packvehicle:
* @param [in] packtime:
* @param [in] ehrpack:
* @param [in] tsrpack:
* @param [in] hutpack:
* @param [in] fspxpack:
* @param [out] result: 道路模型输出 ：该参数包含边界信息，车道线信息，道路信息等。
* @return 运行结果
* - 非0 运行失败
* - 0 运行成功
*/
/******************************************************************************/
AInt HWARoadKernel(HWA_ROAD_HDLE   rfhandle,
	HWAIFVPack* packlane,
	HWA_SensorInput_st* mrrpack,
	HWAEgoPack *packvehicle,
	HWATimePack *packtime,
	HWAEHRPack *ehrpack,
	HWATSRPack *tsrpack,
	HWA_FSPXPack* fspxpack,
	HWA_INTP_Pack* intp_pack,
	RFM_Result*   result)
{
	AInt i_ret = A_E_NOERROR;
	HWAKernel* pst_kernel = (HWAKernel*)rfhandle;
	/* Receive the input */
	HWAIFVPack*  pst_ifv_pack = packlane;
	HWA_SensorInput_st* pst_object_pack = mrrpack;
	HWATimePack*  pst_time_pack = packtime;
	HWAEgoPack*  pst_ego_pack = packvehicle;
	HWAEHRPack * pst_ehr = ehrpack;
	HWATSRPack* pst_tsr = tsrpack;
	HWA_FSPXPack* pst_fspx = fspxpack;
	A_ASSERT(result);
	pst_kernel->timepack = *packtime;
	pst_kernel->vehiclepack = *packvehicle;

	/* step1: Preprocess IFV and HD-map data */
	HWARoadPreprocess(pst_kernel, pst_ifv_pack, pst_ego_pack, pst_object_pack, pst_tsr);

	/* step3: Boundary or Line predicted */
	HWATimeSpaceUnify(pst_kernel, pst_ego_pack, pst_ifv_pack, pst_time_pack);

	/* step2: Process boundary */
	HWABoundary(pst_kernel, pst_object_pack, pst_ifv_pack, pst_ego_pack);

	/* step3: line fusion */
	HWALineFusion(pst_kernel, pst_ifv_pack, pst_ehr);

	/* step4: Speed limit */
	HWASpeedLimit(pst_kernel, pst_ehr, pst_tsr);

	/* step7: Road Scene Recognition */
	HWARoadSceneRecognition(pst_kernel, pst_ifv_pack, pst_ehr);

	/* step6: Road layout */
	HWARoadLayout(pst_kernel, pst_ifv_pack, pst_ehr, pst_fspx);

	/* step5: Obejct Manage .TSR */
	HWAObejctManage(pst_kernel, pst_ehr, pst_tsr);

	/* step8: Fusion Output */
	HWAOutputPostprocess(pst_kernel, pst_ifv_pack, pst_tsr);

	/* step last: */
	HWARoadResultSend(pst_kernel, result);

	return i_ret;
}
