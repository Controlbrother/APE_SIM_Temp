/** <!------------------------------------------------------------------------->
*
*  @file ScalingFunctions.c
*
*  @brief AUTOSAR scaling functions.
*
*  @author Henrik Heine
*
*  @copyright
*    Copyright 2018, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/

#include "ScalingFunctions.h"
#include <limits.h>

double Scale_Linear_From_boolean(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((boolean*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_boolean_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((boolean*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_boolean(const void* mem) {
	double val = (double) *((boolean*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_sint8(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((sint8*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_sint8_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((sint8*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_sint8(const void* mem) {
	double val = (double) *((sint8*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_uint8(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((uint8*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_uint8_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((uint8*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_uint8(const void* mem) {
	double val = (double) *((uint8*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_sint16(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((sint16*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_sint16_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((sint16*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_sint16(const void* mem) {
	double val = (double) *((sint16*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_uint16(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((uint16*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_uint16_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((uint16*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_uint16(const void* mem) {
	double val = (double) *((uint16*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_sint32(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((sint32*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_sint32_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((sint32*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_sint32(const void* mem) {
	double val = (double) *((sint32*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_uint32(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((uint32*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_uint32_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((uint32*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_uint32(const void* mem) {
	double val = (double) *((uint32*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_sint64(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((sint64*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_sint64_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((sint64*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_sint64(const void* mem) {
	double val = (double) *((sint64*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_uint64(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((uint64*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_uint64_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((uint64*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_uint64(const void* mem) {
	double val = (double) *((uint64*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_float32(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((float*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_float32_noround(const void* mem, double offset, double factor, double divisor) {
	double val = (double) *((float*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_float32(const void* mem) {
	double val = (double) *((float*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}


double Scale_Linear_From_float64(const void* mem, double offset, double factor, double divisor) {
	double val = *((double*)mem);
	val = ((val * factor) + offset) / divisor;
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

double Scale_Linear_From_float64_noround(const void* mem, double offset, double factor, double divisor) {
	double val = *((double*)mem);
	val = ((val * factor) + offset) / divisor;
	return val;
}

double roundSource_From_float64(const void* mem) {
	double val = *((double*)mem);
	if (val < 0) val -= 0.5;
	else val += 0.5;
	return val;
}

sint64 ClampSigned(sint64 value, sint64 min, sint64 max) {
	if (value < min) return min;
	if (value > max) return max;
	return value;
}

uint64 ClampUnsigned(uint64 value, uint64 min, uint64 max) {
	if (value < min) return min;
	if (value > max) return max;
	return value;
}

double ClampFloat(double value, double min, double max) {
	if (value < min) return min;
	if (value > max) return max;
	return value;
}

uint64 ClampSignedToUnsigned(sint64 value, uint64 min, uint64 max) {
	if (value < 0) return min;
	return ClampUnsigned((uint64)value, min, max);
}

sint64 ClampUnsignedToSigned(uint64 value, sint64 min, sint64 max) {
	if (value >(uint64)(LLONG_MAX)) return max;
	return ClampSigned((sint64)value, min, max);
}
