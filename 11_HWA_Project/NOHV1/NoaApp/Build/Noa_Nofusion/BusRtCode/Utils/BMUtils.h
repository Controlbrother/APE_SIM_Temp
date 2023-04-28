#ifndef BM_UTILS_H
#define BM_UTILS_H

#ifdef APP_ID
#undef APP_ID
#endif

#define APP_ID Noa_Nofusion

/* Macros to directly concatenate values. 
 * Due to the macro expansion these macros can only be used to expand literals. */
#define RAW_CONCAT_2(A, B) A##_##B
#define RAW_CONCAT_3(A, B, C) A##_##B##_##C
 
/* Indirect macros which can be used to concatenate macros */
#define CONCAT_2(A, B) RAW_CONCAT_2(A, B)
#define CONCAT_3(A, B, C) RAW_CONCAT_3(A, B, C)

#define APP_UNIQUE(Name) CONCAT_2(APP_ID, Name)

#define ASPECT_UNIQUE(name) CONCAT_3(BUS_CONFIGURATION_ID, ECU_ID, name)

#if defined(MAX)
#undef MAX
#endif
#define MAX(x, y) ((x) > (y) ? (x) : (y))

#if defined(MIN)
#undef MIN
#endif
#define MIN(x, y) ((x) < (y) ? (x) : (y))


#ifdef __GNUC__
#define UNUSED __attribute__ ((unused))
#else 
#define UNUSED 
#endif

#if defined(MIN)
#undef MIN
#endif
#if defined(MAX)
#undef MAX
#endif

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

#ifndef INTENDED_UNREFERENCED_PARAMETER
#define INTENDED_UNREFERENCED_PARAMETER(x) (void)x
#endif

#ifndef POSSIBLE_UNREFERENCED_PARAMETER
#define POSSIBLE_UNREFERENCED_PARAMETER(x) (void)x
#endif

#if defined(EXTERN_C_DECL)
#undef EXTERN_C_DECL
#endif
#if defined(__cplusplus)
#define EXTERN_C_DECL extern "C"
/* ScalingFunctions.h */

/* DataStructures/BinaryHeap.h */

/* DataStructures/ArrayList.h */

/* ConvertHwTimeToSimTime.h */
#define ConvertHwTimeToSimTime APP_UNIQUE(ConvertHwTimeToSimTime)

#else
#define EXTERN_C_DECL extern
#endif

/* Void pointer to zero. */
#ifndef NULL_PTR
#define NULL_PTR ((void *)0)
#endif


/* Generic functionality */
#define GenericCompareFunction APP_UNIQUE(GenericCompareFunction)
typedef int(*GenericCompareFunction)(void* a, void* b);
#define GENERIC_COMPARE_FUNCTION(functionName, type, logic) \
	static int functionName(void* ptrA, void* ptrB) { \
		type* a = (type*)ptrA; \
		type* b = (type*)ptrB; \
		logic; \
	}

/* Submodule redefines */
/* ScalingFunctions.h */
#define Scale_Linear_From_boolean APP_UNIQUE(Scale_Linear_From_boolean)
#define Scale_Linear_From_boolean_noround APP_UNIQUE(Scale_Linear_From_boolean_noround)
#define roundSource_From_boolean APP_UNIQUE(roundSource_From_boolean)
#define Scale_Linear_From_sint8 APP_UNIQUE(Scale_Linear_From_sint8)
#define Scale_Linear_From_sint8_noround APP_UNIQUE(Scale_Linear_From_sint8_noround)
#define roundSource_From_sint8 APP_UNIQUE(roundSource_From_sint8)
#define Scale_Linear_From_uint8 APP_UNIQUE(Scale_Linear_From_uint8)
#define Scale_Linear_From_uint8_noround APP_UNIQUE(Scale_Linear_From_uint8_noround)
#define roundSource_From_uint8 APP_UNIQUE(roundSource_From_uint8)
#define Scale_Linear_From_sint16 APP_UNIQUE(Scale_Linear_From_sint16)
#define Scale_Linear_From_sint16_noround APP_UNIQUE(Scale_Linear_From_sint16_noround)
#define roundSource_From_sint16 APP_UNIQUE(roundSource_From_sint16)
#define Scale_Linear_From_uint16 APP_UNIQUE(Scale_Linear_From_uint16)
#define Scale_Linear_From_uint16_noround APP_UNIQUE(Scale_Linear_From_uint16_noround)
#define roundSource_From_uint16 APP_UNIQUE(roundSource_From_uint16)
#define Scale_Linear_From_sint32 APP_UNIQUE(Scale_Linear_From_sint32)
#define Scale_Linear_From_sint32_noround APP_UNIQUE(Scale_Linear_From_sint32_noround)
#define roundSource_From_sint32 APP_UNIQUE(roundSource_From_sint32)
#define Scale_Linear_From_uint32 APP_UNIQUE(Scale_Linear_From_uint32)
#define Scale_Linear_From_uint32_noround APP_UNIQUE(Scale_Linear_From_uint32_noround)
#define roundSource_From_uint32 APP_UNIQUE(roundSource_From_uint32)
#define Scale_Linear_From_sint64 APP_UNIQUE(Scale_Linear_From_sint64)
#define Scale_Linear_From_sint64_noround APP_UNIQUE(Scale_Linear_From_sint64_noround)
#define roundSource_From_sint64 APP_UNIQUE(roundSource_From_sint64)
#define Scale_Linear_From_uint64 APP_UNIQUE(Scale_Linear_From_uint64)
#define Scale_Linear_From_uint64_noround APP_UNIQUE(Scale_Linear_From_uint64_noround)
#define roundSource_From_uint64 APP_UNIQUE(roundSource_From_uint64)
#define Scale_Linear_From_float32 APP_UNIQUE(Scale_Linear_From_float32)
#define Scale_Linear_From_float32_noround APP_UNIQUE(Scale_Linear_From_float32_noround)
#define roundSource_From_float32 APP_UNIQUE(roundSource_From_float32)
#define Scale_Linear_From_float64 APP_UNIQUE(Scale_Linear_From_float64)
#define Scale_Linear_From_float64_noround APP_UNIQUE(Scale_Linear_From_float64_noround)
#define roundSource_From_float64 APP_UNIQUE(roundSource_From_float64)
#define ClampSigned APP_UNIQUE(ClampSigned)
#define ClampUnsigned APP_UNIQUE(ClampUnsigned)
#define ClampSignedToUnsigned APP_UNIQUE(ClampSignedToUnsigned)
#define ClampUnsignedToSigned APP_UNIQUE(ClampUnsignedToSigned)
#define ClampFloat APP_UNIQUE(ClampFloat)

/* DataStructures/BinaryHeap.h */
#define BinaryHeapPush APP_UNIQUE(BinaryHeapPush)
#define BinaryHeapPop APP_UNIQUE(BinaryHeapPop)
#define BinaryHeapPeek APP_UNIQUE(BinaryHeapPeek)
#define BinaryHeapRemove APP_UNIQUE(BinaryHeapRemove)
#define BinaryHeapClear APP_UNIQUE(BinaryHeapClear)
#define BinaryHeapFree APP_UNIQUE(BinaryHeapFree)
#define BinaryHeap APP_UNIQUE(BinaryHeap)

/* DataStructures/ArrayList.h */
#define ArrayListEnsureCapacity APP_UNIQUE(ArrayListEnsureCapacity)
#define ArrayListSetSize APP_UNIQUE(ArrayListSetSize)
#define ArrayListSet APP_UNIQUE(ArrayListSet)
#define ArrayListGet APP_UNIQUE(ArrayListGet)
#define ArrayListMinimize APP_UNIQUE(ArrayListMinimize)
#define ArrayListClear APP_UNIQUE(ArrayListClear)
#define ArrayListFree APP_UNIQUE(ArrayListFree)
#define ArrayList APP_UNIQUE(ArrayList)

/* ConvertHwTimeToSimTime.h */


#endif /* BM_UTILS_H */

