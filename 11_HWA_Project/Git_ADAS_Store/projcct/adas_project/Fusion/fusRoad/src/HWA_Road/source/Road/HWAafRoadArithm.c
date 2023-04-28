/******************************************************************************/
/**
 * @file: HWAafRoadArithm.c
 * @brief: 道路融合算法实现
 * @version: 3.0
 * @author:
 * @copyright: Copyright (c) All Rights Reserved
 * @date: 2020-11-18 13:03:58
 */
 /*******************************************************************************/

/*
********************************************************************************
* Include files section
********************************************************************************
*/

#include "HWAafRoadArithm.h"

/*
********************************************************************************
* Function Prototype Declaration Section
********************************************************************************
*/

/******************************************************************************/
/**
* @brief afPtsVExcursion_HWA
* @details 根据距离偏移车辆坐标系下的点集
* @param [in] base 基准点线
* @param [out] excur 偏移点线
* @param [in] dis 偏移距离
* @return 无返回值
*/
/******************************************************************************/

AVoid afPtsVExcursion_HWA(const PtsV* base, PtsV* excur, ADouble dis) {
	AInt32U i = 0;
	ADouble dy, dx, dYaw;
	A_ASSERT(base);
	A_ASSERT(excur);
	for (i = 0; i < base->nNum - 1; ++i) {
		dy = base->ptV[i + 1].dy - base->ptV[i].dy;
		dx = base->ptV[i + 1].dx - base->ptV[i].dx;
		if (dx < DBL_EPSILON && dx >= 0) {
			dx = DBL_EPSILON;
		}
		else if (dx > -DBL_EPSILON && dx <= 0) {
			dx = -DBL_EPSILON;
		}
		else
		{

		}

		if (dy < DBL_EPSILON && dy >= 0) {
			dy = DBL_EPSILON;
		}
		else if (dx > -DBL_EPSILON && dy <= 0) {
			dy = -DBL_EPSILON;
		}
		else
		{

		}
		dYaw = base->ptV[i + 1].dYaw;
		excur->ptV[i].dy = base->ptV[i].dy + dis * cos(dYaw);
		excur->ptV[i].dx = base->ptV[i].dx - dis * sin(dYaw);
		excur->ptV[i].dYaw = base->ptV[i + 1].dYaw;
	}
	excur->nNum = base->nNum - 1;
	return;
}

/******************************************************************************/
/**
* @brief afSolveCurveCoeff
* @details 最小二乘法
* @param [in] ptsV 车道点线
* @param [out] line 输出参数集
* @return 无返回值
*/
/******************************************************************************/
AVoid afSolveCurveCoeff(PtsV* ptsV, SingleLineData* line) {

	/*Finding the fitting equation of lane line based on high precision map points*/
	AInt32U i = 0;
	AInt32U j = 0;
	AInt  nMax;

	ADouble a[P_RFM_FIT_RANK + 1] = { 0 };
	PointD pts[P_RFM_INSERT_PTS_TOTAL] = { 0.F };

	AInt idx_i, idx_j;

	ADouble tempx[P_RFM_INSERT_PTS_TOTAL] = { 0 };
	ADouble sumxx[P_RFM_FIT_RANK * 2 + 1] = { 0 };
	ADouble tempy[P_RFM_INSERT_PTS_TOTAL] = { 0 };
	ADouble sumxy[P_RFM_FIT_RANK + 1] = { 0 };
	ADouble ata[(P_RFM_FIT_RANK + 1)*(P_RFM_FIT_RANK + 1)] = { 0 };
	AInt idx_a, idx_b, idx_c, idx_d;
	ADouble maxmum = 0;
	A_ASSERT(ptsV);
	A_ASSERT(line);
	if (ptsV->nNum <= 0) {
		return;
	}

	for (i = 0; i < ptsV->nNum; ++i) {

		if (fabs(ptsV->ptV[i].dx) > DBL_EPSILON
			|| fabs(ptsV->ptV[i].dy) > DBL_EPSILON) {
			pts[j].dx = ptsV->ptV[i].dx;
			pts[j].dy = ptsV->ptV[i].dy;
			j++;
		}
	}
	nMax = P_RFM_INSERT_PTS_TOTAL;


	for (idx_i = 0; idx_i < nMax; idx_i++)
	{
		tempx[idx_i] = 1;
		tempy[idx_i] = pts[idx_i].dy;
	}
	for (idx_i = 0; idx_i < 2 * P_RFM_FIT_RANK + 1; idx_i++)
	{
		for (sumxx[idx_i] = 0, idx_j = 0; idx_j < nMax; idx_j++)
		{
			sumxx[idx_i] += tempx[idx_j];
			tempx[idx_j] *= pts[idx_j].dx;
		}
	}
	for (idx_i = 0; idx_i < P_RFM_FIT_RANK + 1; idx_i++)
	{
		for (sumxy[idx_i] = 0, idx_j = 0; idx_j < nMax; idx_j++)
		{
			sumxy[idx_i] += tempy[idx_j];
			tempy[idx_j] *= pts[idx_j].dx;
		}
	}
	for (idx_i = 0; idx_i < P_RFM_FIT_RANK + 1; idx_i++)
	{
		for (idx_j = 0; idx_j < P_RFM_FIT_RANK + 1; idx_j++)
			ata[idx_i*(P_RFM_FIT_RANK + 1) + idx_j] = sumxx[idx_i + idx_j];
	}


	/*	gauss_solve(poly_n + 1, ata, a, sumxy);*/

	for (idx_c = 0; idx_c < (P_RFM_FIT_RANK + 1) - 1; idx_c++)
	{
		maxmum = fabs(ata[idx_c*(P_RFM_FIT_RANK + 1) + idx_c]); /*find maxmum*/
		idx_d = idx_c;
		for (idx_a = idx_c + 1; idx_a < (P_RFM_FIT_RANK + 1) - 1; idx_a++)
		{
			if (maxmum < fabs(ata[idx_a*(P_RFM_FIT_RANK + 1) + idx_a]))
			{
				maxmum = fabs(ata[idx_a*(P_RFM_FIT_RANK + 1) + idx_a]);
				idx_d = idx_a;
			}
		}
		if (idx_d != idx_c)
			for (idx_a = 0; idx_a < (P_RFM_FIT_RANK + 1); idx_a++)         /*change array:ata[c]&ata[d] */
			{
				maxmum = ata[idx_c*(P_RFM_FIT_RANK + 1) + idx_a];
				ata[idx_c*(P_RFM_FIT_RANK + 1) + idx_a] = ata[idx_d*(P_RFM_FIT_RANK + 1) + idx_a];
				ata[idx_d*(P_RFM_FIT_RANK + 1) + idx_a] = maxmum;
			}
		maxmum = sumxy[idx_c];                    /*change array:sumxy[c]&sumxy[d]     */
		sumxy[idx_c] = sumxy[idx_d];
		sumxy[idx_d] = maxmum;
		for (idx_a = idx_c + 1; idx_a < (P_RFM_FIT_RANK + 1); idx_a++)
		{
			for (idx_b = idx_c + 1; idx_b < (P_RFM_FIT_RANK + 1); idx_b++)
			{
				ata[idx_a*(P_RFM_FIT_RANK + 1) + idx_b] -= ata[idx_a*(P_RFM_FIT_RANK + 1) + idx_c] * ata[idx_c*(P_RFM_FIT_RANK + 1) + idx_b] / ata[idx_c*(P_RFM_FIT_RANK + 1) + idx_c];
			}
			sumxy[idx_a] -= ata[idx_a*(P_RFM_FIT_RANK + 1) + idx_c] * sumxy[idx_c] / ata[idx_c*(P_RFM_FIT_RANK + 1) + idx_c];
		}
	}

	for (idx_a = (P_RFM_FIT_RANK + 1) - 1; idx_a >= 0; a[idx_a] /= ata[idx_a*(P_RFM_FIT_RANK + 1) + idx_a], idx_a--)
	{
		for (idx_b = idx_a + 1, a[idx_a] = sumxy[idx_a]; idx_b < (P_RFM_FIT_RANK + 1); idx_b++)
		{
			a[idx_a] -= ata[idx_a*(P_RFM_FIT_RANK + 1) + idx_b] * a[idx_b];
		}
	}
	/*	polyfit(nMax, x, y, 3, a);*/

	line->dC0V = a[0];
	line->dC1V = a[1];
	line->dC2V = a[2];
	line->dC3V = a[3];

	return;
}
/******************************************************************************/
/**
* @brief bdry_SolveCurveCoeff
* @details 最小二乘法，将边界点拟合为三次曲线
* @param [in] ptsV 车道点线
* @param [out] line 输出参数集
* @return 无返回值
*/
/******************************************************************************/
AVoid bdry_SolveCurveCoeff(Bdry_PtsV* ptsV, SingleLineData* line) {

	/*Finding the fitting equation of lane line based on high precision map points*/
	AInt32U i, j, k;
	AInt  nMax;

	ADouble a[P_RFM_BDRY_RANK + 1] = { 0 };
	PointD pts[P_RFM_INSERT_PTS_TOTAL_BDRY];

	AInt idx_i, idx_j;

	ADouble tempx[P_RFM_INSERT_PTS_TOTAL_BDRY] = { 0 };
	ADouble sumxx[P_RFM_BDRY_RANK * 2 + 1] = { 0 };
	ADouble tempy[P_RFM_INSERT_PTS_TOTAL_BDRY] = { 0 };
	ADouble sumxy[P_RFM_BDRY_RANK + 1] = { 0 };
	ADouble ata[(P_RFM_BDRY_RANK + 1)*(P_RFM_BDRY_RANK + 1)] = { 0 };
	AInt idx_a, idx_b, idx_c, idx_d;
	ADouble maxmum = 0;
	A_ASSERT(ptsV);
	A_ASSERT(line);
	if (ptsV->nNum <= 0) {
		return;
	}

	j = k = 0;
	for (i = 0; i < P_RFM_INSERT_PTS_TOTAL_BDRY; ++i) {
		pts[i].dx = 0.F;
		pts[i].dy = 0.F;
	}

	for (i = 0; i < ptsV->nNum; ++i) {

		if (fabs(ptsV->ptV[i].dx) > DBL_EPSILON
			|| fabs(ptsV->ptV[i].dy) > DBL_EPSILON) {
			pts[j].dx = ptsV->ptV[i].dx;
			pts[j].dy = ptsV->ptV[i].dy;
			j++;
		}
	}
	nMax = j;

	/*polyfit(n, x, y, poly_n, a);*/

	for (idx_i = 0; idx_i < nMax; idx_i++)
	{
		tempx[idx_i] = 1;
		tempy[idx_i] = pts[idx_i].dy;
	}
	for (idx_i = 0; idx_i < 2 * P_RFM_BDRY_RANK + 1; idx_i++)
	{
		for (sumxx[idx_i] = 0, idx_j = 0; idx_j < nMax; idx_j++)
		{
			sumxx[idx_i] += tempx[idx_j];
			tempx[idx_j] *= pts[idx_j].dx;
		}
	}
	for (idx_i = 0; idx_i < P_RFM_BDRY_RANK + 1; idx_i++)
	{
		for (sumxy[idx_i] = 0, idx_j = 0; idx_j < nMax; idx_j++)
		{
			sumxy[idx_i] += tempy[idx_j];
			tempy[idx_j] *= pts[idx_j].dx;
		}
	}
	for (idx_i = 0; idx_i < P_RFM_BDRY_RANK + 1; idx_i++)
	{
		for (idx_j = 0; idx_j < P_RFM_BDRY_RANK + 1; idx_j++)
		{
			ata[idx_i*(P_RFM_BDRY_RANK + 1) + idx_j] = sumxx[idx_i + idx_j];
		}
	}


	/*	gauss_solve(poly_n + 1, ata, a, sumxy);*/

	for (idx_c = 0; idx_c < (P_RFM_BDRY_RANK + 1) - 1; idx_c++)
	{
		maxmum = fabs(ata[idx_c*(P_RFM_BDRY_RANK + 1) + idx_c]); /*find maxmum*/
		idx_d = idx_c;
		for (idx_a = idx_c + 1; idx_a < (P_RFM_BDRY_RANK + 1) - 1; idx_a++)
			if (maxmum < fabs(ata[idx_a*(P_RFM_BDRY_RANK + 1) + idx_a]))
			{
				maxmum = fabs(ata[idx_a*(P_RFM_BDRY_RANK + 1) + idx_a]);
				idx_d = idx_a;
			}
		if (idx_d != idx_c)
			for (idx_a = 0; idx_a < (P_RFM_BDRY_RANK + 1); idx_a++)         /*change array:ata[c]&ata[d] */
			{
				maxmum = ata[idx_c*(P_RFM_BDRY_RANK + 1) + idx_a];
				ata[idx_c*(P_RFM_BDRY_RANK + 1) + idx_a] = ata[idx_d*(P_RFM_BDRY_RANK + 1) + idx_a];
				ata[idx_d*(P_RFM_BDRY_RANK + 1) + idx_a] = maxmum;
			}
		maxmum = sumxy[idx_c];                    /*change array:sumxy[c]&sumxy[d]     */
		sumxy[idx_c] = sumxy[idx_d];
		sumxy[idx_d] = maxmum;
		for (idx_a = idx_c + 1; idx_a < (P_RFM_BDRY_RANK + 1); idx_a++)
		{
			for (idx_b = idx_c + 1; idx_b < (P_RFM_BDRY_RANK + 1); idx_b++)
			{
				ata[idx_a*(P_RFM_BDRY_RANK + 1) + idx_b] -= ata[idx_a*(P_RFM_BDRY_RANK + 1) + idx_c] * ata[idx_c*(P_RFM_BDRY_RANK + 1) + idx_b] / ata[idx_c*(P_RFM_BDRY_RANK + 1) + idx_c];
			}
			sumxy[idx_a] -= ata[idx_a*(P_RFM_BDRY_RANK + 1) + idx_c] * sumxy[idx_c] / ata[idx_c*(P_RFM_BDRY_RANK + 1) + idx_c];
		}
	}

	for (idx_a = (P_RFM_BDRY_RANK + 1) - 1; idx_a >= 0; a[idx_a] /= ata[idx_a*(P_RFM_BDRY_RANK + 1) + idx_a], idx_a--)
	{
		for (idx_b = idx_a + 1, a[idx_a] = sumxy[idx_a]; idx_b < (P_RFM_BDRY_RANK + 1); idx_b++)
		{
			a[idx_a] -= ata[idx_a*(P_RFM_BDRY_RANK + 1) + idx_b] * a[idx_b];
		}
	}



	/*	polyfit(nMax, x, y, 3, a);*/

	line->dC0V = (AFloat)a[0];
	line->dC1V = (AFloat)a[1];
	line->dC2V = (AFloat)a[2];
	line->dC3V = (AFloat)a[3];

	return;
}

/******************************************************************************/
/**
* @brief bdry_linepredict
* @details 将边界线参数进行预测后，赋予道路核心结构体
* @param [in] lineBdry: 道路模型输入： 边界线信息。
* @param [out] kernel: 道路模型输出： 道路模型核心。
* @return
*/
/******************************************************************************/

AVoid bdry_linepredict(HWAKernel * kernel, SingleLineData* prelineBdry, SingleLineData* radarBdry, SingleLineData* curlineBdry) {
	ADouble d_time = (kernel->timepack.hwacurTime- kernel->pretime.hwacurTime)*0.001;/*s*/
	AFloat f_delta_time = 0.05F;
	AFloat f_v = kernel->vehiclepack.Vel;

	AFloat f_c0 = prelineBdry->dC0V;
	AFloat f_c3 = prelineBdry->dC3V;
	AFloat f_c1 = prelineBdry->dC1V;
	AFloat f_c2 = prelineBdry->dC2V;

	AFloat f_offset = f_c0;
	AFloat f_gama = f_c3;
	AFloat f_heading = (AFloat)atan(f_c1);
	AFloat f_curve = 2 * f_c2;
	AFloat f_yawrate = kernel->vehiclepack.Yawrate;
	if (d_time<0.2)
	{
		f_delta_time = d_time;
	}
	if (radarBdry->bIsLineExist == LINE_NOT_EXIST && prelineBdry->bIsLineExist == LINE_EXIST)
	{
		/*   y=y+tvy+t*t*v*v*c/2   */
		/*  heading=heading+t*v*c-t*yawrate   */
		f_offset = f_offset + f_delta_time * f_v * f_heading + (f_delta_time * f_delta_time * f_v * f_v * f_curve) / 2;
		/* 	gama = gama; */
		f_heading = f_heading + f_delta_time * f_v * f_curve - f_delta_time * f_yawrate;
		/* 	curve = curve; */
		curlineBdry->bIsLineExist = LINE_EXIST;
		curlineBdry->dC0V = f_offset;
		curlineBdry->dC3V = f_gama;
		curlineBdry->dC1V = (AFloat)tan(f_heading);
		curlineBdry->dC2V = f_curve / 2;
		curlineBdry->dDisStart = prelineBdry->dDisStart - f_v * f_delta_time;
		curlineBdry->dDisEnd = prelineBdry->dDisEnd - f_v * f_delta_time;
		curlineBdry->dLineWidth = prelineBdry->dLineWidth;
		curlineBdry->dQuality = prelineBdry->dQuality - 0.02;
		curlineBdry->enLineType = EN_LINE_ROAD_EDGE;
		curlineBdry->nTrackAge++;
		if ((curlineBdry->nTrackAge > 50)
			||( curlineBdry->dDisEnd < 5)
			||( curlineBdry->dQuality < 0))
		{
			curlineBdry->bIsLineExist = LINE_NOT_EXIST;
			curlineBdry->dQuality = 0;
			curlineBdry->nTrackAge = 0;
			/*to qingling*/
		}
		else
		{
		}
	}
	else if (radarBdry->bIsLineExist == LINE_EXIST && prelineBdry->bIsLineExist == LINE_EXIST)
	{

		curlineBdry->bIsLineExist = LINE_EXIST;
		/*curlineBdry->dC0V = (f_c0 + radarBdry->dC0V) / 2;
		curlineBdry->dC3V = (f_c3 + radarBdry->dC3V) / 2;
		curlineBdry->dC1V = (f_c1 + radarBdry->dC1V) / 2;
		curlineBdry->dC2V = (f_c2 + radarBdry->dC2V) / 2;*/
		curlineBdry->dC0V = (f_c0*0.8 + radarBdry->dC0V*0.2);
		curlineBdry->dC3V = (f_c3*0.8 + radarBdry->dC3V*0.2);
		curlineBdry->dC1V = (f_c1*0.8 + radarBdry->dC1V*0.2);
		curlineBdry->dC2V = (f_c2*0.8 + radarBdry->dC2V*0.2);
		curlineBdry->dDisStart = radarBdry->dDisStart;
		curlineBdry->dDisEnd = radarBdry->dDisEnd;
		curlineBdry->dLineWidth = radarBdry->dLineWidth;
		curlineBdry->dQuality = 0.8;
		curlineBdry->enLineType = EN_LINE_ROAD_EDGE;
		curlineBdry->nTrackAge = 0;
	}
	else if (radarBdry->bIsLineExist == LINE_EXIST)
	{
		curlineBdry->bIsLineExist = LINE_EXIST;
		curlineBdry->dC0V = radarBdry->dC0V;
		curlineBdry->dC3V = radarBdry->dC3V;
		curlineBdry->dC1V = radarBdry->dC1V;
		curlineBdry->dC2V = radarBdry->dC2V;
		curlineBdry->dDisStart = radarBdry->dDisStart;
		curlineBdry->dDisEnd = radarBdry->dDisEnd;
		curlineBdry->dLineWidth = radarBdry->dLineWidth;
		curlineBdry->dQuality = 0.7;
		curlineBdry->enLineType = EN_LINE_ROAD_EDGE;
		curlineBdry->nTrackAge = 0;
	}
	else
	{
		curlineBdry->bIsLineExist = LINE_NOT_EXIST;
		curlineBdry->dQuality = 0;
		curlineBdry->nTrackAge = 0;
	}
}

#if 0
/*Fitting of boundary points*/
/******************************************************************************/
/**
* @brief afSolveCurveCoeff_Bound
* @details 最小二乘法，将边界点拟合为三次曲线
* @param [in] ptsV 车道点线
* @param [out] line 输出参数集
* @return 无返回值
*/
/******************************************************************************/
AVoid afSolveCurveCoeff_Bound(PtsV* ptsV, AInt32 start_idx, ADouble max_idx, ADouble min_idx,
	SingleLineData* line) {

	/*Finding the fitting equation of lane line based on high precision map points*/
	ADouble dTemp[2 * (P_RFM_FIT_RANK + 1)] = { 0 };
	ADouble a[P_RFM_FIT_RANK + 1][P_RFM_FIT_RANK + 1];
	ADouble b[P_RFM_FIT_RANK + 1] = { 0 };
	AInt i, j, k, num, nMax, idx_min, idx_max;
	PointD pts[INSERT_PTS_TOTAL];
	A_ASSERT(ptsV);
	A_ASSERT(line);
	if (ptsV->nNum <= 0) {
		return;
	}

	if (max_idx < min_idx)
	{
		SWAP(max_idx, min_idx)
	}
	num = (AInt)((max_idx - min_idx) + 0.5);
	j = k = 0;
	for (i = 0; i < INSERT_PTS_TOTAL; ++i) {
		pts[i].dx = 0.F;
		pts[i].dy = 0.F;
	}
	idx_min = (AInt)(min_idx);
	idx_max = (AInt)(max_idx);
	for (i = start_idx; i < min(start_idx + num, ptsV->nNum); ++i) {
		if (ptsV->ptV[i].dx > ptsV->ptV[idx_min].dx && ptsV->ptV[i].dx < ptsV->ptV[idx_max].dx) {
			if (fabs(ptsV->ptV[i].dx) > DBL_EPSILON
				|| fabs(ptsV->ptV[i].dy) > DBL_EPSILON) {
				pts[j].dx = ptsV->ptV[i].dx;
				pts[j].dy = ptsV->ptV[i].dy;
				j++;
			}
		}
	}

	nMax = j;
	for (i = 0; i < nMax - 1; ++i) {
		dTemp[1] += pts[i].dx;
		dTemp[2] += pow(pts[i].dx, 2);
		dTemp[3] += pow(pts[i].dx, 3);
		dTemp[4] += pow(pts[i].dx, 4);
		dTemp[5] += pow(pts[i].dx, 5);
		dTemp[6] += pow(pts[i].dx, 6);
		b[0] += pts[i].dy;
		b[1] += pts[i].dx * pts[i].dy;
		b[2] += pow(pts[i].dx, 2) * pts[i].dy;
		b[3] += pow(pts[i].dx, 3) * pts[i].dy;
	}

	dTemp[0] = ptsV->ptV[nMax].dx;
	for (i = 0; i < P_RFM_FIT_RANK + 1; ++i) {

		k = i;
		for (j = 0; j < P_RFM_FIT_RANK + 1; ++j)
		{
			a[i][j] = dTemp[k++];
		}
	}


	for (k = 0; k < P_RFM_FIT_RANK + 1 - 1; ++k) {

		int column = k;
		ADouble mainelement = a[k][k];

		for (i = k; i < P_RFM_FIT_RANK + 1; ++i) {

			if (fabs(a[i][k]) > mainelement) {
				mainelement = fabs(a[i][k]);
				column = i;
			}
		}
		for (j = k; j < P_RFM_FIT_RANK + 1; ++j) {

			ADouble dTemp = a[k][j];
			a[k][j] = a[column][j];
			a[column][j] = dTemp;
		}
		ADouble btemp = b[k];
		b[k] = b[column];
		b[column] = btemp;

		for (i = k + 1; i < P_RFM_FIT_RANK + 1; ++i) {

			ADouble Mik = a[i][k] / a[k][k];
			for (j = k; j < P_RFM_FIT_RANK + 1; ++j)
			{
				a[i][j] -= Mik * a[k][j];
			}
			b[i] -= Mik * b[k];
		}
	}


	b[P_RFM_FIT_RANK + 1 - 1] /= a[P_RFM_FIT_RANK + 1 - 1][P_RFM_FIT_RANK + 1 - 1];
	for (i = P_RFM_FIT_RANK + 1 - 2; i >= 0; --i) {
		ADouble sum = 0;
		for (j = i + 1; j < P_RFM_FIT_RANK + 1; ++j)
		{
			sum += a[i][j] * b[j];
		}
		b[i] = (b[i] - sum) / a[i][i];
	}


	line->dC0V = (AFloat)b[0];
	line->dC1V = (AFloat)b[1];
	line->dC2V = (AFloat)b[2];
	line->dC3V = (AFloat)b[3];

	return;
}
#endif

/******************************************************************************/
/**
* @brief proc_linepredict
* @details 将车道线线参数进行预测后，赋予道路核心结构体
* @param [in] pre_line: 道路模型输入： 车道线线信息。
* @param [in] cam_line: 道路模型输入： 车道线线信息。
* @param [in] cur_line: 道路模型输入： 车道线线信息。
* @param [out] cur_line: 道路模型输出： 道路模型核心。
* @return
*/
/******************************************************************************/
AVoid proc_linepredict(AFloat* delta_time, HWAEgoPack* egopack, CamLine* cam_line, CamLine* pre_cam_line) {

	AFloat f_v = egopack->Vel;

	AFloat f_c0 = pre_cam_line->dC0;
	AFloat f_c3 = pre_cam_line->dC3;
	AFloat f_c1 = pre_cam_line->dC1;
	AFloat f_c2 = pre_cam_line->dC2;

	AFloat f_offset = f_c0;
	AFloat f_gama = f_c3;
	AFloat f_heading = (AFloat)atan(f_c1);
	AFloat f_curve = 2 * f_c2;
	AFloat f_yawrate = egopack->Yawrate;
	AFloat f_delta_time = 0.05F;

	if (*delta_time < 0.2F)
	{
		f_delta_time = *delta_time;
	}
	if ((cam_line->hdCamQuality < FLT_EPSILON)
		&& (pre_cam_line->hdCamQuality > FLT_EPSILON))
	{
		/*   y=y+tvy+t*t*v*v*c/2   */
		/*  heading=heading+t*v*c-t*yawrate   */
		f_offset = f_offset + f_delta_time * f_v * f_heading + (f_delta_time * f_delta_time * f_v * f_v * f_curve) / 2;
		/* 	gama = gama; */
		f_heading = f_heading + f_delta_time * f_v * f_curve - f_delta_time * f_yawrate;
		/* 	curve = curve; */
		cam_line->nTrackAge = pre_cam_line->nTrackAge;
		cam_line->nTrackAge++;
		cam_line->dC0 = f_offset;
		cam_line->dC3 = f_gama;
		cam_line->dC1 = (AFloat)tan(f_heading);
		cam_line->dC2 = f_curve / 2;
		cam_line->dRangeStart = pre_cam_line->dRangeStart - f_v * f_delta_time;
		cam_line->dRangeEnd = pre_cam_line->dRangeEnd - f_v * f_delta_time;
		cam_line->hdWidthMark = pre_cam_line->hdWidthMark;
		cam_line->hdCamQuality = 1.0F - cam_line->nTrackAge*0.01;
		cam_line->nLaneType = pre_cam_line->nLaneType;
		if (cam_line->nTrackAge > 100 || cam_line->dRangeEnd < 5)
		{
			cam_line->hdCamQuality = 0;
			cam_line->nTrackAge = 0;
			/*cam_line->dC0 = 0;
			cam_line->dC1 = 0;
			cam_line->dC2 = 0;
			cam_line->dC3 = 0;
			cam_line->dRangeStart = 0;
			cam_line->dRangeEnd = 0;*/
		}
		else
		{
		}
	}
	else if ((cam_line->hdCamQuality > FLT_EPSILON)
		&& (pre_cam_line->hdCamQuality > FLT_EPSILON))
	{
		cam_line->nTrackAge = 0;
	}
	else if (cam_line->hdCamQuality > FLT_EPSILON)
	{
		cam_line->nTrackAge = 0;
	}
	else
	{
		cam_line->hdCamQuality = 0;
		cam_line->nTrackAge = 0;
	}
}

/******************************************************************************/
/**
* @brief fusion_get_line_quality
* @details 根据车速和车道线调节车道线质量
* @param [in] egopack: 道路模型输入： 本车运动信息。
* @param [in] i_trackage: 道路模型输入： 当前车道线质量预测周期数。
* @param [in] pre_line: 道路模型输入： 上一时刻车道线信息。
* @return 返回计算得到的质量。
*/
/******************************************************************************/
AFloat fusion_get_line_quality(HWAEgoPack* egopack, AInt i_trackage, SingleLineData* pre_line) {
	AFloat f_quality = 0;
	AFloat pre_quality = pre_line->dQuality;
	/* if v> 10 m/s */
	if (egopack->Vel > 10)
	{
		f_quality = pre_quality - i_trackage;
	}
	else
	{
		f_quality = pre_quality - 0.01;
	}

	return f_quality;
}

/******************************************************************************/
/**
* @brief fusion_linepredict
* @details 将车道线线参数进行预测后，赋予道路核心结构体
* @param [in] pre_line: 道路模型输入： 车道线线信息。
* @param [in] cam_line: 道路模型输入： 车道线线信息。
* @param [in] cur_line: 道路模型输入： 车道线线信息。
* @param [out] cur_line: 道路模型输出： 道路模型核心。
* @return
*/
/******************************************************************************/
AVoid fusion_linepredict(AFloat* delta_time, HWAEgoPack* egopack, SingleLineData* cur_line, SingleLineData* pre_line) {

	AFloat f_v = egopack->Vel;

	AFloat f_c0 = pre_line->dC0V;
	AFloat f_c3 = pre_line->dC3V;
	AFloat f_c1 = pre_line->dC1V;
	AFloat f_c2 = pre_line->dC2V;
	AFloat f_quality = pre_line->dQuality;

	AFloat f_offset = f_c0;
	AFloat f_gama = f_c3;
	AFloat f_heading = (AFloat)atan(f_c1);
	AFloat f_curve = 2 * f_c2;
	AFloat f_yawrate = egopack->Yawrate;
	AFloat f_delta_time = 0.05F;

	if (*delta_time < 0.2F)
	{
		f_delta_time = *delta_time;
	}
	if ((cur_line->bIsLineExist == LINE_NOT_EXIST)
		&& (pre_line->bIsLineExist == LINE_EXIST))
	{
		/*   y=y+tvy+t*t*v*v*c/2   */
		/*  heading=heading+t*v*c-t*yawrate   */
		f_offset = f_offset + f_delta_time * f_v * f_heading + (f_delta_time * f_delta_time * f_v * f_v * f_curve) / 2;
		/* 	gama = gama; */
		f_heading = f_heading + f_delta_time * f_v * f_curve - f_delta_time * f_yawrate;
		/* 	curve = curve; */
		cur_line->nTrackAge = pre_line->nTrackAge;
		cur_line->nTrackAge++;
		cur_line->dC0V = f_offset;
		cur_line->dC3V = f_gama;
		cur_line->dC1V = (AFloat)tan(f_heading);
		cur_line->dC2V = f_curve / 2;
		cur_line->dDisStart = (pre_line->dDisStart - f_v * f_delta_time) < 0 ? 0 : (pre_line->dDisStart - f_v * f_delta_time);
		cur_line->dDisEnd = pre_line->dDisEnd - f_v * f_delta_time;
		cur_line->dLineWidth = pre_line->dLineWidth;
		/*cur_line->dQuality = f_quality - 0.01;*/
		cur_line->dQuality = fusion_get_line_quality(egopack, cur_line->nTrackAge, pre_line);
		cur_line->bIsLineExist = LINE_EXIST;
		cur_line->enLineType = pre_line->enLineType;
		if (cur_line->nTrackAge > 100 || cur_line->dDisEnd < 5 || cur_line->dQuality < 0.01)
		{
			cur_line->bIsLineExist = LINE_NOT_EXIST;
			cur_line->dQuality = 0;
			cur_line->nTrackAge = 0;
			cur_line->dC0V = 0;
			cur_line->dC1V = 0;
			cur_line->dC2V = 0;
			cur_line->dC3V = 0;
		}
		else
		{
		}
	}
	else if ((cur_line->bIsLineExist == LINE_EXIST)
		&& (pre_line->bIsLineExist == LINE_EXIST))
	{
		/*cam_line->dC0 = (f_c0 + cam_line->dC0) / 2;
		cam_line->dC3 = (f_c3 + cam_line->dC3) / 2;
		cam_line->dC1 = (f_c1 + cam_line->dC1) / 2;
		cam_line->dC2 = (f_c2 + cam_line->dC2) / 2;*/
		cur_line->nTrackAge = 0;
	}
	else if (cur_line->bIsLineExist == LINE_EXIST)
	{
		cur_line->nTrackAge = 0;
	}
	else
	{
		cur_line->bIsLineExist = LINE_NOT_EXIST;
		cur_line->dQuality = 0;
		cur_line->nTrackAge = 0;
	}
}
/******************************************************************************/
/**
* @brief iafDetermineFitRange
* @details 求解拟合范围 ： 根据车道线点的角度计算出需要拟合范围。
* @param [in] ptsV 车道点线
* @param [out] start 车道线起点序号
* @param [out] end 车道线终点序号
* @param [out] curr 车道线当前点序号
* @return 无返回值
*/
/******************************************************************************/
AVoid iafDetermineFitRange(PtsV* ptsV, AInt* start, AInt* end, AInt* curr) {

	ADouble dAverageYaw = 0;
	ADouble dMaxYawBias = 0;
	/*Initial distance*/
	ADouble dMinDistance = sqrt(200.F * 200.F + 4.F * 4.F);
	ADouble delta_yaw;
	AInt32U start_pt = 0, end_pt = 0, curr_pt = 0;
	AInt32U i = 0;
	A_ASSERT(ptsV);
	A_ASSERT(start);
	A_ASSERT(end);
	A_ASSERT(curr);
	if (0 >= ptsV->nNum) {
		return;
	}

	/*Get Lane average value*/
	for (i = 0; i < ptsV->nNum; ++i) {
		dAverageYaw += ptsV->ptV[i].dYaw;
	}

	dAverageYaw = dAverageYaw / ptsV->nNum;

	/*Max abosulte bisa*/
	for (i = 0; i < ptsV->nNum; ++i) {
		delta_yaw = fabs(ptsV->ptV[i].dYaw - dAverageYaw);
		if (delta_yaw > dMaxYawBias) {
			dMaxYawBias = delta_yaw;
		}
	}

	/*Get the nearest point for the car*/
	for (i = 0; i < ptsV->nNum; ++i) {
		ADouble dx = ptsV->ptV[i].dx;
		ADouble dy = ptsV->ptV[i].dy;
		ADouble EuclideanDis = sqrt(dx * dx + dy * dy);
		if (EuclideanDis < dMinDistance) {
			dMinDistance = EuclideanDis;
			curr_pt = i;
		}
	}

	/*Select from the rear 40M to the front 80M*/
	start_pt = (dMaxYawBias < 0.1) ? 0 : max(curr_pt - 40, 0);
	end_pt = (dMaxYawBias < 0.1) ?
		ptsV->nNum - 1 : min(curr_pt + 80, ptsV->nNum - 1);

	/*Decrease length*/
	for (; start_pt < curr_pt; ++start_pt) {
		delta_yaw = fabs(ptsV->ptV[start_pt].dYaw - ptsV->ptV[curr_pt].dYaw);
		if (delta_yaw < A_ANGLE2RADIAN(20)) {
			break;
		}
	}

	start_pt = max(min(curr_pt - 20, curr_pt), 0);

	for (; end_pt > curr_pt; --end_pt) {
		delta_yaw = fabs(ptsV->ptV[end_pt].dYaw - ptsV->ptV[curr_pt].dYaw);
		if (delta_yaw < A_ANGLE2RADIAN(20)) {
			break;
		}
	}

	/*Guarantee the shortest fit distance*/
	end_pt = min(max(curr_pt + 40, end_pt), ptsV->nNum - 1);

	if (start_pt >= end_pt) {
		return;
	}

	*start = start_pt;
	*end = end_pt;
	*curr = curr_pt;
}
/******************************************************************************/
/**
* @brief iafDetermineFitRange_Bound
* @details 求解拟合范围 ： 根据车道线点的角度计算出需要拟合范围。
* @param [in] ptsV 车道点线
* @param [out] start 车道线起点序号
* @param [out] end 车道线终点序号
* @param [out] curr 车道线当前点序号
* @return 无返回值
*/
/******************************************************************************/
AVoid iafDetermineFitRange_Bound(Bdry_PtsV* ptsV, AInt* start, AInt* end, AInt* curr) {


	ADouble dAverageYaw = 0;
	ADouble dMaxYawBias = 0;
	/*Initial distance*/
	ADouble dMinDistance = sqrt(200.F * 200.F + 4.F * 4.F);
	ADouble delta_yaw;
	AInt32U start_pt = 0, end_pt = 0, curr_pt = 0;
	AInt32U i = 0;
	A_ASSERT(ptsV);
	A_ASSERT(start);
	A_ASSERT(end);
	A_ASSERT(curr);
	if (0 >= ptsV->nNum) {
		return;
	}

	/*Get Lane average value*/
	for (i = 0; i < ptsV->nNum; ++i) {
		dAverageYaw += ptsV->ptV[i].dYaw;
	}

	dAverageYaw = dAverageYaw / ptsV->nNum;

	/*Max abosulte bisa*/
	for (i = 0; i < ptsV->nNum; ++i) {
		delta_yaw = fabs(ptsV->ptV[i].dYaw - dAverageYaw);
		if (delta_yaw > dMaxYawBias) {
			dMaxYawBias = delta_yaw;
		}
	}

	/*Get the nearest point for the car*/

	for (i = 0; i < ptsV->nNum; ++i) {
		ADouble dx = ptsV->ptV[i].dx;
		ADouble dy = ptsV->ptV[i].dy;
		ADouble EuclideanDis = sqrt(dx * dx + dy * dy);
		if (EuclideanDis < dMinDistance) {
			dMinDistance = EuclideanDis;
			curr_pt = i;
		}
	}

	/*if maxyaw < 0.1 rad, all pts are participated,or bound quality is not good.*/
	start_pt = 0;
	end_pt = ptsV->nNum - 1;

	/*Decrease length*/

	for (; end_pt > curr_pt; --end_pt) {
		delta_yaw = fabs(ptsV->ptV[end_pt].dYaw - ptsV->ptV[curr_pt].dYaw);
		if (delta_yaw < A_ANGLE2RADIAN(P_RFM_BDRY_ANGLE)) {
			break;
		}
	}

	if (start_pt >= end_pt) {
		return;
	}

	*start = start_pt;
	*end = end_pt;
	*curr = curr_pt;
}
/******************************************************************************/
/**
* @brief iafValidateFitRange
* @details 求解拟合范围 ： 根据不同的车道类型计算出需要拟合范围。
* @param [in] start 车道线起点序号
* @param [in] end 车道线终点序号
* @param [in] curr 车道线当前点序号
* @param [out] polys 起始距离
* @param [out] polye 终止距离
* @return 无返回值
*/
/******************************************************************************/
AVoid iafValidateFitRange(AInt start, AInt curr, AInt end,
	ADouble* polys, ADouble* polye) {
	A_ASSERT(polys);
	A_ASSERT(polye);
	if (start == 0 && end == 0) {
		*polys = -20;
		*polye = 40;
	}
	else {
		*polys = (ADouble)(start - curr);
		*polye = (ADouble)(end - curr);
	}

}

/******************************************************************************/
/**
* @brief iafValidateFitRange
* @details 求解拟合范围 ： 根据不同的车道类型计算出需要拟合范围。
* @param [in] start 车道线起点序号
* @param [in] end 车道线终点序号
* @param [in] curr 车道线当前点序号
* @param [out] polys 起始距离
* @param [out] polye 终止距离
* @return 无返回值
*/
/******************************************************************************/
AVoid iafValidateFitRange_Bound(AInt start, AInt curr, AInt end,
	AFloat* polys, AFloat* polye) {
	A_ASSERT(polys);
	A_ASSERT(polye);
	if (start == 0 && end == 0) {
		*polys = 0;
		*polye = 40;
	}

}

/******************************************************************************/
/**
* @brief solve_quadratic_equation
* @details 求解方程 ： 求一元二次方程(a*x^2 + b*x + c = 0)的所有实数根。
* @param [in] p 方程的系数 p = {c, b, a}
* @param [out] x 方程的所有实数根
* @param [out] rootCount 实数根的个数
* @return 错误号
*/
/******************************************************************************/
AInt32U solve_quadratic_equation(AFloat* p, AFloat* x, AInt *rootCount)
{
	AInt i;
	AFloat a, b, c, delta, sqrtDelta;
	const AFloat ZERO = FLT_MIN;  // min normalized positive value（1.175494351e-38F）
	const AFloat EPS = FLT_MIN;
	AInt32U errNo = ERR_NO_ERROR;

	*rootCount = 0;
	for (i = 0; i < 3; i++)
	{
		if (isnan(p[i]))
		{
			errNo = ERR_NAN;
			return errNo;
		}
		if (isinf(p[i]))
		{
			errNo = ERR_INF;
			return errNo;
		}
	}

	a = p[2];
	b = p[1];
	c = p[0];

	if (fabs(a - 0.0) < EPS)
	{
		if (fabs(b - 0.0) > EPS)
		{
			x[0] = -c / b;
			*rootCount = 1;
		}
	}
	else
	{
		b /= a;
		c /= a;
		a = 1.0;

		delta = b * b - 4.0 * a * c;
		if (delta > ZERO)
		{
			if (fabs(c) < EPS)	//若c = 0,由于计算误差,sqrt(b*b - 4*a*c）不等于|b|
			{
				x[0] = 0.0;
				x[1] = -b / a;
			}
			else
			{
				sqrtDelta = sqrt(delta);
				if (b > 0.0)
				{
					x[0] = (-2.0 * c) / (b + sqrtDelta);	//避免两个很接近的数相减,导致精度丢失
					x[1] = (-b - sqrtDelta) / (2.0 * a);
				}
				else
				{
					x[0] = (-b + sqrtDelta) / (2.0 * a);
					x[1] = (-2.0 * c) / (b - sqrtDelta);	//避免两个很接近的数相减,导致精度丢失
				}
			}
			*rootCount = 2;
		}
		else if (fabs(delta) < EPS)
		{
			x[0] = x[1] = -b / (2.0 * a);
			*rootCount = 2;
		}
		else
		{
			*rootCount = 0;
		}
	}
	return errNo;
}

/******************************************************************************/
/**
* @brief solve_cubic_equation
* @details 求解方程 ：求一元三次方程(a*x^3 + b*x^2 + c*x + d = 0)的所有实数根。\n
             A = b * b - 3.0 * a * c;\n
			 B = b * c - 9.0 * a * d;\n
			 C = c * c - 3.0 * b * d;\n
			 (1)当A = B = 0时，方程有一个三重实根\n
			 (2)当Δ = B^2－4 * A * C > 0时，方程有一个实根和一对共轭虚根\n
			 (3)当Δ = B^2－4 * A * C = 0时，方程有三个实根，其中有一个两重根\n
			 (4)当Δ = B^2－4 * A * C < 0时，方程有三个不相等的实根\n
* @param [in] p 方程的系数 p = {d, c, b, a}
* @param [out] x 方程的所有实数根
* @param [out] rootCount 实数根的个数
* @return 错误号
*/
/******************************************************************************/
AInt32U solve_cubic_equation(AFloat *p, AFloat *x, AInt *rootCount)
{
	AInt i;
	AFloat a, b, c, d, A, B, C, delta;
	AFloat Y1, Y2, Z1, Z2, K, parm[3], roots[2], theta, T;
	const AFloat ZERO = FLT_MIN;  // min normalized positive value（1.175494351e-38F）
	const AFloat EPS = FLT_MIN;
	const AFloat CALCULATE_ERROR = 1.0e-7;
	AInt32U errNo = ERR_NO_ERROR;

	*rootCount = 0;
	for (i = 0; i < 4; i++)
	{
		if (isnan(p[i]))
		{
			errNo = ERR_NAN;
			return errNo;
		}
		if (isinf(p[i]))
		{
			errNo = ERR_INF;
			return errNo;
		}
	}

	a = p[3];
	b = p[2];
	c = p[1];
	d = p[0];

	if (fabs(a - 0.0) < EPS)
	{
		parm[2] = b;
		parm[1] = c;
		parm[0] = d;

		errNo = solve_quadratic_equation(parm, x, rootCount);
	}
	else
	{
		b /= a;
		c /= a;
		d /= a;
		a = 1.0;

		A = b * b - 3.0 * a * c;
		B = b * c - 9.0 * a * d;
		C = c * c - 3.0 * b * d;

		delta = B * B - 4.0 * A * C;

		if (fabs(A - 0.0) < EPS && fabs(B - 0.0) < EPS)
		{
			x[0] = x[1] = x[2] = -b / (3.0 * a);
			*rootCount = 3;
			return errNo;
		}

		if (delta > ZERO)
		{
			parm[2] = 1.0;
			parm[1] = B;
			parm[0] = A * C;

			errNo = solve_quadratic_equation(parm, roots, rootCount);
			if (errNo != ERR_NO_ERROR)
			{
				return errNo;
			}
			Z1 = roots[0];
			Z2 = roots[1];

			Y1 = A * b + 3.0 * a * Z1;
			Y2 = A * b + 3.0 * a * Z2;

			if (Y1 < 0.0 && Y2 < 0.0)	//pow函数的底数必须为非负数,必须分类讨论
			{
				x[0] = (-b + pow(-Y1, 1.0 / 3.0) + pow(-Y2, 1.0 / 3.0)) / (3.0*a);
			}
			else if (Y1 < 0.0 && Y2 > 0.0)
			{
				x[0] = (-b + pow(-Y1, 1.0 / 3.0) - pow(Y2, 1.0 / 3.0)) / (3.0*a);
			}
			else if (Y1 > 0.0 && Y2 < 0.0)
			{
				x[0] = (-b - pow(Y1, 1.0 / 3.0) + pow(-Y2, 1.0 / 3.0)) / (3.0*a);
			}
			else
			{
				x[0] = (-b - pow(Y1, 1.0 / 3.0) - pow(Y2, 1.0 / 3.0)) / (3.0*a);
			}
			*rootCount = 1;
		}
		else if (fabs(delta - 0.0) < EPS)
		{
			if (fabs(A - 0.0) > EPS)
			{
				K = B / A;
				x[0] = -b / a + K;
				x[1] = x[2] = -0.5 * K;
				*rootCount = 3;
			}
		}
		else
		{
			if (A > 0.0)
			{
				T = (2.0 * A * b - 3.0 * a * B) / (2.0 * pow(A, 3.0 / 2.0));
				if (T > 1.0)	//由于计算误差,T的值可能略大于1(如1.0000001)
				{
					if (T < 1.0 + CALCULATE_ERROR)
					{
						T = 1.0;
					}
					else
					{
						return errNo;
					}
				}
				if (T < -1.0)
				{
					if (T > -1.0 - CALCULATE_ERROR)
					{
						T = -1.0;
					}
					else
					{
						return errNo;
					}
				}
				theta = acos(T);
				x[0] = (-b - 2.0 * sqrt(A) * cos(theta / 3.0)) / (3.0 * a);
				x[1] = (-b + sqrt(A) * (cos(theta / 3.0) + sqrt(3.0) * sin(theta / 3.0))) / (3.0 * a);
				x[2] = (-b + sqrt(A) * (cos(theta / 3.0) - sqrt(3.0) * sin(theta / 3.0))) / (3.0 * a);
				*rootCount = 3;
			}
		}
	}
	return errNo;
}

/******************************************************************************/
/**
* @brief calcuDisCubic
* @details 求解点到二次曲线的距离 ： 根据二次多项式和点的坐标求解点到线的距离。
* @param [in] c0 车道线参数
* @param [in] c1 车道线参数
* @param [in] c2 车道线参数
* @param [in] x0 点纵坐标
* @param [in] y0 点横坐标
* @return 距离值
*/
/******************************************************************************/
AFloat calcuDisCubic(AFloat c0, AFloat c1, AFloat c2, AFloat x0, AFloat y0) {
	AFloat dis_cubic = FLT_MAX;
	/*  y=B4*x^4+B3*x^3 +B2*x^2 +B*x+B0  */
	AFloat B4 = c2 * c2;
	AFloat B3 = 2 * c1 * c2;
	AFloat B2 = 2 * (c0 - y0)*c2 + c1 * c1 + 1;
	AFloat B1 = 2 * (c0 - y0)*c1 - 2 * x0;
	AFloat B0 = (c0 - y0)*(c0 - y0) + x0 * x0;
	AFloat p[4] = { 0 };
	AFloat x[4] = { 0 };
	AFloat minroot = FLT_MAX;
	AInt rootCount = 0;
	AInt errNo = ERR_NO_ERROR;

	p[0] = B1;
	p[1] = 2 * B2;
	p[2] = 3 * B3;
	p[3] = 4 * B4;

	errNo = solve_cubic_equation(p, x, &rootCount);
	if ((rootCount != 0) && (errNo == ERR_NO_ERROR))
	{
		for (AInt i = 0; i < rootCount; i++)
		{
			if (x[i] < minroot)
			{
				minroot = x[i];
			}
		}
		dis_cubic = sqrt(B4 *pow(minroot, 4) + B3 * pow(minroot, 3) + B2 * pow(minroot, 2) + B1 * minroot + B0);
	}
	else
	{

	}
	return dis_cubic;
}


/******************************************************************************/
/**
* @brief getMaybeInliers
* @details ransac模块 ： 获取点集中两个随机点作为内点。
* @param [in] points 边界点
* @param [in] maybeInliers 内点
* @param [in] n 边界点个数
* @param [out] count 内点个数
* @return 无返回值
*/
/******************************************************************************/
AVoid getMaybeInliers(Bdry_PtsV* points, Bdry_PtsV *maybeInliers, AInt idx0, AInt idx1)
{

	maybeInliers->ptV[0] = points->ptV[idx0];
	maybeInliers->ptV[1] = points->ptV[idx1];
	maybeInliers->nNum = 2;
	return;
}


/******************************************************************************/
/**
* @brief is_nearby_points
* @details ransac模块 ： 检测两个点之间的距离是否小于阈值。
* @param [in] p1 第一个点
* @param [in] p2 第二个点
* @return ATRUE 为是，AFALSE为否
*/
/******************************************************************************/
ABool is_nearby_points(PtYaw p1, PtYaw p2)
{
	AFloat dis = sqrt((p1.dx - p2.dx) * (p1.dx - p2.dx) + (p1.dy - p2.dy) * (p1.dy - p2.dy));
	if (dis < 3.0)  /*m*/
	{
		return ATRUE;
	}
	return AFALSE;
}

/******************************************************************************/
/**
* @brief getLineModel
* @details ransac模块 ： 计算两点连成的直线信息。
* @param [in] p1 第一个点
* @param [in] p2 第二个点
* @return 直线信息：斜率和截距
*/
/******************************************************************************/
LineModel getLineModel(const PtYaw p1, const PtYaw p2)
{
	LineModel model;/* = xmalloc(sizeof(LineModel));*/
	memset(&model, 0, sizeof(LineModel));
	if (p2.dx != p1.dx)
	{
		model.dC1 = (p2.dy - p1.dy) / (p2.dx - p1.dx);
		model.dC0 = p1.dy - model.dC1 * p1.dx;
	}
	else
	{
		model.dC1 = 0.F;
		model.dC0 = 0.F;
	}

	return model;
}

/******************************************************************************/
/**
* @brief is_point_equal
* @details ransac模块 ： 判断两点是否相同。
* @param [in] p1 第一个点
* @param [in] p2 第二个点
* @return ATRUE 为相同，AFALSE为不同
*/
/******************************************************************************/
ABool is_point_equal(PtYaw p, PtYaw p2) {

	if (fabs(p.dx - p2.dx) < 0.001 && fabs(p.dy - p2.dy) < 0.001)
	{
		return ATRUE;
	}
	else
	{
		return AFALSE;
	}

}

/******************************************************************************/
/**
* @brief is_SameMember
* @details ransac模块 ： 检测点与内点是否相等。
* @param [in] p1 第一个点
* @param [in] p2 第二个点
* @return ATRUE 为相同，AFALSE为不同
*/
/******************************************************************************/
ABool is_SameMember(PtYaw p, Bdry_PtsV * pList)
{
	AInt isSame = AFALSE;

	for (AInt i = 0; i < 2; i++)
	{
		if (is_point_equal(p, pList->ptV[i]))
		{
			isSame = ATRUE;
		}
	}

	return isSame;
}

/******************************************************************************/
/**
* @brief getPtToLineDis
* @details ransac模块 ： 点到直线距离公式。
* @param [in] p 点的信息
* @param [in] model 直线信息
* @return 返回点到直线距离
*/
/******************************************************************************/
AFloat getPtToLineDis(PtYaw p, LineModel model)
{
	AFloat distance = FLT_MAX;

	if (fabs(model.dC1) > FLT_EPSILON)
	{
		/*AFloat k = model.dC1;
		AFloat b = model.dC0;
		distance = sqrt((k * p.dx - p.dy + b)*(k * p.dx - p.dy + b) / ((k*k) + 1));*/
		distance = calcuDisCubic(model.dC0, model.dC1, model.dC2, p.dx, p.dy);

	}

	return distance;
}

/******************************************************************************/
/**
* @brief is_fitsModel
* @details ransac模块 ： 检测点是否符合模型条件。
* @param [in] pt 点的信息
* @param [in] model 直线信息
* @param [in] mThreshold 设定阈值
* @return ATRUE 为符合，AFALSE为不符合。
*/
/******************************************************************************/
ABool is_fitsModel(PtYaw pt, LineModel model, AFloat mThreshold)
{
	AInt fits = AFALSE;

	AFloat distance = getPtToLineDis(pt, model);

	if (distance < (mThreshold))
	{
		fits = ATRUE;
	}

	return fits;
}

/******************************************************************************/
/**
* @brief ransac_push
* @details ransac模块 ： 将点推入点集。
* @param [in] p0 点的信息。
* @param [out] pt 点集信息。
* @return 无返回值
*/
/******************************************************************************/
void ransac_push(Bdry_PtsV* pt, PtYaw p0)
{
	pt->ptV[pt->nNum] = p0;
	pt->nNum++;
	//pt[(*s)++] = p0;
}

/******************************************************************************/
/**
* @brief ransac_pop
* @details ransac模块 ： 将点从点集删除。
* @param [out] pt 点集信息。
* @return 无返回值
*/
/******************************************************************************/
void ransac_pop(Bdry_PtsV* pt)
{
	pt->nNum--;
	//pt[--(*s)];
}

/******************************************************************************/
/**
* @brief getModelRank
* @details ransac模块 ： 检测点是否符合模型条件并返回点的个数。
* @param [in] points 点集信息
* @param [in] n 点集个数
* @param [in] model 直线信息
* @param [in] mThreshold 设定阈值
* @return 返回符合模型条件点的个数。
*/
/******************************************************************************/
AInt getModelRank(Bdry_PtsV* points, LineModel model, const AInt n, AFloat mThreshold)
{
	AInt count = 0;
	ABool b_fit = AFALSE;
	AInt i = 0;
	for (i = 0; i < n; i++)
	{
		b_fit = is_fitsModel(points->ptV[i], model, mThreshold);
		if (b_fit)
		{
			count++;
		}

	}

	return count;
}

/******************************************************************************/
/**
* @brief least_square
* @details ransac模块 ：最小二乘拟合直线。
* @param [in] ptsSet 点集信息
* @param [in] num 点集个数
* @return 返回根据一致点集拟合的直线。
*/
/******************************************************************************/
LineModel least_square(Bdry_PtsV *ptsSet, AInt num)
{
	LineModel model;
	memset(&model, 0, sizeof(LineModel));
	AInt i = 0;
	ADouble denominator = 0.0;
	ADouble sum_xsquared = 0.0;
	ADouble sum_y = 0.0;
	ADouble sum_x = 0.0;
	ADouble sum_xy = 0.0;


	for (i = 0; i < num; ++i)
	{
		sum_xsquared += ptsSet->ptV[i].dx * ptsSet->ptV[i].dx;
		sum_y += ptsSet->ptV[i].dy;
		sum_x += ptsSet->ptV[i].dx;
		sum_xy += ptsSet->ptV[i].dx * ptsSet->ptV[i].dy;
	}

	/*dy=ax+b*/
	denominator = (num * sum_xsquared - sum_x * sum_x);
	if (fabs(denominator) <= FLT_EPSILON)
	{
		model.flag = -1;
		return model;
	}
	model.dC1 = (num * sum_xy - sum_x * sum_y) / denominator;/*a*/
	model.dC0 = (sum_xsquared * sum_y - sum_x * sum_xy) / denominator;/*b*/


	return model;
}

/******************************************************************************/
/**
* @brief ransac_computeModel
* @details ransac模块 ：ransac算法模块。
* @param [in] points 点集信息
* @param [in] ptsSet 点集信息
* @param [in] mIterations 迭代次数
* @param [in] mThreshold 筛选点的阈值
* @param [out] mBestModel 得到最佳的一次曲线
* @param [out] best_Set 最终点集信息
* @return 无返回值。
*/
/******************************************************************************/
AVoid ransac_computeModel(Bdry_PtsV * points, Bdry_PtsV *best_Set, LineModel *mBestModel,  AInt* mIterations, AFloat mThreshold)
{
	AInt iterations = 0;
	AInt i_BestRank = 0;
	mBestModel->flag = AFALSE;
	AInt ori_pts_num = points->nNum;
	AInt pts_num = 0;
	ABool is_same = AFALSE;
	ABool is_fit = AFALSE;
	ABool is_nearby = AFALSE;
	AInt rank = 0;
	Bdry_PtsV maybeInliers;
	memset(&maybeInliers, 0, sizeof(Bdry_PtsV));
	SingleLineData ransac_line;
	memset(&ransac_line, 0, sizeof(SingleLineData));

	for (AInt idx0 = 0; idx0 < points->nNum; idx0++)
	{
		for (AInt idx1 = idx0 + 1; idx1 < points->nNum; idx1++)
		{

			Bdry_PtsV consensusSet;
			memset(&consensusSet, 0, sizeof(Bdry_PtsV));

			/* Get two random points in the point set*/
			getMaybeInliers(points, &maybeInliers, idx0, idx1);

			/* Skip if the distance between two points is less than 3m */
			is_nearby = is_nearby_points(maybeInliers.ptV[0], maybeInliers.ptV[1]);
			if (is_nearby)
			{
				iterations++;
				continue;
			}

			ransac_push(&consensusSet, maybeInliers.ptV[0]);
			ransac_push(&consensusSet, maybeInliers.ptV[1]);
			LineModel model = getLineModel(maybeInliers.ptV[0], maybeInliers.ptV[1]);

			for (AInt i = 0; i < ori_pts_num; i++)
			{
				/*is_same = is_SameMember(points->ptV[i], &maybeInliers);*/
				if (i==idx0 ||i==idx1)
				{
					is_same = ATRUE;
				}
				/*Exclude points that are the same as randomly picked points*/
				if (!is_same)
				{
					is_fit = is_fitsModel(points->ptV[i], model, mThreshold);
					if (is_fit)
					{
						ransac_push(&consensusSet, points->ptV[i]);
					}
				}
			}
			pts_num = consensusSet.nNum;
			if (pts_num >= P_RFM_REQ_INLIER_NUM)
			{     /*Least squares*/  /*consensusSet：Consistent point set  */
				 bdry_SolveCurveCoeff(&consensusSet,&ransac_line);
				 model.dC0 = ransac_line.dC0V;
				 model.dC1 = ransac_line.dC1V;
				 model.dC2 = ransac_line.dC2V;
				 model.dC3 = ransac_line.dC3V;
				/*model = least_square(&consensusSet, pts_num); */
				  /*The number of points meeting the threshold*/
				rank = getModelRank(&consensusSet, model, pts_num, mThreshold);

				if (rank > i_BestRank && fabs(model.dC0) > FLT_EPSILON)
				{
					mBestModel->flag = ATRUE;
					mBestModel->dC0 = model.dC0;
					mBestModel->dC1 = model.dC1;
					mBestModel->dC2 = model.dC2;
					mBestModel->dC3 = model.dC3;
					i_BestRank = rank;
					memcpy(best_Set, &consensusSet, sizeof(Bdry_PtsV));
				}
			}

			iterations++;
		}
	}
	*mIterations = iterations;
}


/******************************************************************************/
/**
* @brief uni_SingleLineValidity
* @details 道路模型车道线有效性判断：通过判断单个车道线各个参数值，分析车道线\n
* 是否有效，若超出范围或为无效值，置无效标志位。
* @param [in] line: 车道线模型输入： 车道线信息内部的结构体。
* @param [out] line: 车道线模型输出： 将车道线有效性赋值到车道线内部的结构体。
* @return 无返回值
*/
/******************************************************************************/
AVoid uni_SingleLineValidity(SingleLineData* line, AFloat para) {

	if (isnan(line->dC0V)
		|| fabs(line->dC0V) > P_RFM_BDRY_LINE_THRE_C0
		|| fabs(line->dC1V) > P_RFM_BDRY_LINE_THRE_C1
		|| fabs(line->dC2V) > P_RFM_BDRY_LINE_THRE_C2
		|| fabs(line->dC3V) > P_RFM_BDRY_LINE_THRE_C3
		|| (line->dC0V*para) > P_RFM_HWA_L1_VALID_THRE_C0)
	{
		line->bIsLineExist = LINE_NOT_EXIST;
		line->dQuality = 0;
	}
	else
	{

	}

}

/******************************************************************************/
/**
* @brief uni_SingleLineAnomaly
* @details 道路模型车道线有效性判断：通过判断单个车道线各个参数值，分析车道线\n
* 是否有效，若超出范围或为无效值，置无效标志位。
* @param [in] line: 车道线模型输入： 车道线信息内部的结构体。
* @param [out] line: 车道线模型输出： 将车道线有效性赋值到车道线内部的结构体。
* @return 无返回值
*/
/******************************************************************************/
AVoid uni_SingleLineAnomaly(SingleLineData* line1, SingleLineData* line2) {

	AFloat c0_1 = fabs(line1->dC0V);
	AFloat c0_2 = fabs(line2->dC0V);
	if ((line2->bIsLineExist == LINE_EXIST)
		&& (c0_2 < c0_1))
	{
		line2->bIsLineExist = LINE_NOT_EXIST;
		line2->dQuality = 0;
	}
	else
	{

	}

}

/******************************************************************************/
/**
* @brief uni_LineValidity
* @details 道路模型车道线有效性判断：通过判断车道线各个参数值，分析车道线\n
* 是否有效，若超出范围或为无效值，置无效标志位。
* @param [in] linemsg: 车道线模型： 车道线信息内部的结构体。
* @param [in] linemsg: 车道线模型输出： 将最终得到的车道线有效性赋予到车道线结构。
* @return 无返回值
*/
/******************************************************************************/
AVoid uni_LineValidity(LineData* lines)
{
	SingleLineData* lineL1 = &lines->lineL1;
	SingleLineData* lineR1 = &lines->lineR1;
	SingleLineData* lineL2 = &lines->lineL2;
	SingleLineData* lineR2 = &lines->lineR2;
	SingleLineData* lineLB = &lines->lineLB;
	SingleLineData* lineRB = &lines->lineRB;

	/*L1 VALID*/
	AFloat para_left = -1.F;
	AFloat para_right = 1.F;

	uni_SingleLineValidity(lineL1, para_left);
	uni_SingleLineValidity(lineR1, para_right);
	uni_SingleLineValidity(lineL2, para_left);
	uni_SingleLineValidity(lineR2, para_right);
	uni_SingleLineValidity(lineLB, para_left);
	uni_SingleLineValidity(lineRB, para_right);
	uni_SingleLineAnomaly(lineL1, lineL2);
	uni_SingleLineAnomaly(lineR1, lineR2);

	return;
}