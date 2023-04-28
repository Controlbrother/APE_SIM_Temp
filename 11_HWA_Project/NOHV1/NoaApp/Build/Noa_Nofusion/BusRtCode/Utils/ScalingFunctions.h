/** <!------------------------------------------------------------------------->
*
*  @file ScalingFunctions.h
*
*  @brief AUTOSAR scaling functions.
*
*  @author Henrik Heine
*
*  @copyright
*    Copyright 2018, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/

#ifndef SCALING_FUNCTIONS_H
#define SCALING_FUNCTIONS_H

#include <Platform_Types.h>
#include "BMUtils.h"

EXTERN_C_DECL double Scale_Linear_From_boolean(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_boolean_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_boolean(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_sint8(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_sint8_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_sint8(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_uint8(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_uint8_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_uint8(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_sint16(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_sint16_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_sint16(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_uint16(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_uint16_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_uint16(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_sint32(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_sint32_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_sint32(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_uint32(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_uint32_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_uint32(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_sint64(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_sint64_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_sint64(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_uint64(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_uint64_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_uint64(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_float32(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_float32_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_float32(const void* mem);
EXTERN_C_DECL double Scale_Linear_From_float64(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double Scale_Linear_From_float64_noround(const void* mem, double offset, double factor, double divisor);
EXTERN_C_DECL double roundSource_From_float64(const void* mem);
EXTERN_C_DECL sint64 ClampSigned(sint64 value, sint64 min, sint64 max);
EXTERN_C_DECL uint64 ClampUnsigned(uint64 value, uint64 min, uint64 max);
EXTERN_C_DECL uint64 ClampSignedToUnsigned(sint64 value, uint64 min, uint64 max);
EXTERN_C_DECL sint64 ClampUnsignedToSigned(uint64 value, sint64 min, sint64 max);
EXTERN_C_DECL double ClampFloat(double value, double min, double max);

#endif /* SCALING_FUNCTIONS_H */
