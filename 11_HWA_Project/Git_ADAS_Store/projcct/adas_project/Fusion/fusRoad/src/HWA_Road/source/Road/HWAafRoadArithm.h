/******************************************************************************/
/**
 * @file: HWAafRoadArithm.h
 * @brief 道路融合算法实现
 * @version: 3.0
 * @author: 
 * @copyright: Copyright (c) Neusoft Reach.All Rights Reserved
 * @date: 2020-8-3 18:17:14
 */
 /******************************************************************************/
#ifndef _HWA_ROAD_ARITHM_H_
#define _HWA_ROAD_ARITHM_H_

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
#ifdef __cplusplus
extern "C" {
#endif
/******************************************************************************/
/**
* @fn afPtsVExcursion_HWA
* @var PtsV
* @var PtsV
* @var ADouble
*/
/******************************************************************************/
	AVoid afPtsVExcursion_HWA(
		const PtsV*         ptsBase,
		PtsV*               ptsExcur,
		ADouble             dDis
	);
/******************************************************************************/
/**
* @fn afSolveCurveCoeff
* @var PtsV
* @var SingleLineData
*/
/******************************************************************************/
	AVoid afSolveCurveCoeff(
		PtsV*               ptsV,
		SingleLineData*     line
	);
/******************************************************************************/
/**
* @fn afSolveCurveCoeff_Bound
* @var PtsV
* @var AInt32
* @var ADouble
* @var ADouble
* @var SingleLineData
*/
/******************************************************************************/
	AVoid afSolveCurveCoeff_Bound(
		PtsV*               ptsV,
		AInt32              start_idx,
		ADouble             dBehind,
		ADouble             dFront,
		SingleLineData*     line
	);
/******************************************************************************/
/**
* @fn bdry_SolveCurveCoeff
* @var Bdry_PtsV
* @var AInt32
* @var ADouble
* @var ADouble
* @var SingleLineData
*/
/******************************************************************************/
	AVoid bdry_SolveCurveCoeff(
		Bdry_PtsV* ptsV,
		SingleLineData* line
	);
/******************************************************************************/
/**
* @fn bdry_linepredict
* @var HWAKernel
* @var SingleLineData
* @var SingleLineData
* @var SingleLineData
*/
/******************************************************************************/
	AVoid bdry_linepredict(
		HWAKernel * kernel,
		SingleLineData* prelineBdry,
		SingleLineData* radarBdry,
		SingleLineData* curlineBdry
	);
/******************************************************************************/
/**
* @fn bdry_linepredict
* @var HWAKernel
* @var SingleLineData
* @var SingleLineData
* @var SingleLineData
*/
/******************************************************************************/
	AVoid proc_linepredict(
		AFloat* delta_time,
		HWAEgoPack* egopack, 
		CamLine* cam_line,
		CamLine* pre_cam_line
	);
/******************************************************************************/
/**
* @fn fusion_get_line_quality
* @var HWAEgoPack
* @var AInt
* @var SingleLineData
*/
/******************************************************************************/
	AFloat fusion_get_line_quality(
		HWAEgoPack* egopack,
		AInt i_trackage,
		SingleLineData* pre_line
	);
/******************************************************************************/
/**
* @fn bdry_linepredict
* @var HWAKernel
* @var SingleLineData
* @var SingleLineData
* @var SingleLineData
*/
/******************************************************************************/
	AVoid fusion_linepredict(
		AFloat* delta_time, 
		HWAEgoPack* egopack,
		SingleLineData* cur_line,
		SingleLineData* pre_line
	);
/******************************************************************************/
/**
* @fn iafDetermineFitRange
* @var PtsV
* @var AInt
* @var AInt
* @var AInt
*/
/******************************************************************************/
	AVoid iafDetermineFitRange(
		PtsV* ptsV, 
		AInt* start,
		AInt* end,
		AInt* curr
	);
/******************************************************************************/
/**
* @fn iafDetermineFitRange_Bound
* @var Bdry_PtsV
* @var AInt
* @var AInt
* @var AInt
*/
/******************************************************************************/
	AVoid iafDetermineFitRange_Bound(
		Bdry_PtsV* ptsV,
		AInt* start,
		AInt* end,
		AInt* curr
	);
/******************************************************************************/
/**
* @fn iafValidateFitRange
* @var AInt
* @var AInt
* @var AInt
* @var ADouble
* @var ADouble
*/
/******************************************************************************/
	AVoid iafValidateFitRange(
		AInt start, 
		AInt curr,
		AInt end,
		ADouble* polys,
		ADouble* polye
	);
/******************************************************************************/
/**
* @fn iafValidateFitRange
* @var AInt
* @var AInt
* @var AInt
* @var AFloat
* @var AFloat
*/
/******************************************************************************/
	AVoid iafValidateFitRange_Bound(
		AInt start,
		AInt curr, 
		AInt end,
		AFloat* polys,
		AFloat* polye
	);

	AInt32U solve_quadratic_equation(
		AFloat *p,
		AFloat *x,
		AInt *rootCount
	);

	AInt32U solve_cubic_equation(
		AFloat *p,
		AFloat *x,
		AInt *rootCount
	);

	AFloat calcuDisCubic(
		AFloat c0,
		AFloat c1, 
		AFloat c2,
		AFloat x0, 
		AFloat y0
	);

/******************************************************************************/
/**
* @fn getMaybeInliers
* @var Bdry_PtsV
* @var Bdry_PtsV
* @var AInt
* @var AInt
*/
/******************************************************************************/
	AVoid getMaybeInliers(Bdry_PtsV* points, Bdry_PtsV* maybeInliers, AInt idx0, AInt idx1);

/******************************************************************************/
/**
* @fn is_nearby_points
* @var PtYaw
* @var PtYaw
*/
/******************************************************************************/
	ABool is_nearby_points(PtYaw p1, PtYaw p2);

/******************************************************************************/
/**
* @fn getLineModel
* @var PtYaw
* @var PtYaw
*/
/******************************************************************************/
	LineModel getLineModel(const PtYaw p1, const PtYaw p2);

/******************************************************************************/
/**
* @fn is_point_equal
* @var PtYaw
* @var PtYaw
*/
/******************************************************************************/
	ABool is_point_equal(PtYaw p, PtYaw p2);

/******************************************************************************/
/**
* @fn is_SameMember
* @var PtYaw
* @var PtYaw
*/
/******************************************************************************/
	ABool is_SameMember(PtYaw p, Bdry_PtsV * pList);

/******************************************************************************/
/**
* @fn getPtToLineDis
* @var PtYaw
* @var LineModel
*/
/******************************************************************************/
	AFloat getPtToLineDis(PtYaw p, LineModel model);

/******************************************************************************/
/**
* @fn is_fitsModel
* @var PtYaw
* @var LineModel
* @var AFloat
*/
/******************************************************************************/
	ABool is_fitsModel(PtYaw p, LineModel model, AFloat mThreshold);

/******************************************************************************/
/**
* @fn ransac_push
* @var Bdry_PtsV
* @var PtYaw
*/
/******************************************************************************/
	AVoid ransac_push(Bdry_PtsV* pt, PtYaw p0);

/******************************************************************************/
/**
* @fn ransac_pop
* @var Bdry_PtsV
*/
/******************************************************************************/
	AVoid ransac_pop(Bdry_PtsV* pt);

/******************************************************************************/
/**
* @fn getModelRank
* @var Bdry_PtsV
* @var LineModel
* @var AInt
* @var AFloat
*/
/******************************************************************************/
	AInt getModelRank(Bdry_PtsV* points, LineModel model, const AInt n, AFloat mThreshold);

/******************************************************************************/
/**
* @fn least_square
* @var Bdry_PtsV
* @var AInt
*/
/******************************************************************************/
	LineModel least_square(Bdry_PtsV *ptsSet, AInt num);

/******************************************************************************/
/**
* @fn ransac_computeModel
* @var Bdry_PtsV
* @var Bdry_PtsV
* @var LineModel
* @var AInt
* @var AFloat
*/
/******************************************************************************/
	AVoid ransac_computeModel(Bdry_PtsV * points, Bdry_PtsV *best_Set, LineModel *mBestModel, AInt* mIterations, AFloat mThreshold);

/******************************************************************************/
/**
* @fn uni_SingleLineValidity
* @var SingleLineData
* @var AFloat
*/
/******************************************************************************/
	AVoid uni_SingleLineValidity(SingleLineData* line, AFloat para);

/******************************************************************************/
/**
* @fn uni_SingleLineAnomaly
* @var SingleLineData
* @var SingleLineData
*/
/******************************************************************************/
	AVoid uni_SingleLineAnomaly(SingleLineData* line1, SingleLineData* line2);

/******************************************************************************/
/**
* @fn uni_LineValidity
* @var LineData
*/
/******************************************************************************/
	AVoid uni_LineValidity(		LineData* lines	);

#ifdef __cplusplus
}
#endif




#endif /* _HWA_ROAD_ARITHM_H_ */