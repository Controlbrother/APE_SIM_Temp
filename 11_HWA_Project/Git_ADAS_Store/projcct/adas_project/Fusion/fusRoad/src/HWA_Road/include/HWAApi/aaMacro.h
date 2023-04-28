
#ifndef _A_MACRO_H
#define _A_MACRO_H

/* Compiler macro:  for Visual C++ == _A_VC  and GNUC == _A_GCC
* If the compiler satisfy C99 standard, _A_C99 is defined
* If the compiler satisfy C89 standard, _A_C89 is defined
*/
/*
#ifndef __STDC__
#   error "Need ANSIC compatible!"
#endif
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
#if _MSC_VER
#   if _MSC_VER < 1600
#      error "Visual C++ version should be VS2010 or higher!"
#   endif
#   define _A_VC
#   define _A_C89
#else
#   define _A_C99
#   define _A_GCC
#endif

//#if __GNUC__
//#   if __GNUC__ < 4
//#      error "gcc verion should be 4.0 or higher!"
//#   endif
//#   define _A_GCC
//#   define _A_C89
//#   define _A_C99
//#endif

//#ifndef _A_C89
//#   error "Need to know what the  C standard  is the compiler!"
//#endif
///////////////////////////////////////////////////////////////////////////////////////////////////////
/* end compiler macro */


/* define inline macro */
#ifndef A_INLINE
#  if defined(__cplusplus) || defined(_A_C99)
#    define A_INLINE inline
#  elif defined _A_VC 
#    define A_INLINE __inline
#  else
#    define A_INLINE static
#  endif
#endif 
/* end inline macro */



/* define the basic types: We use the C99 standard, defined in stdint.h
* You can use int?_t,uint?_t which ? is 8,16,32 or 64.
*/

#if defined(_A_VC) || defined(_A_C99)
#   include <stdint.h>
#else
typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
#   error "Need to define stdint.h"
#endif

typedef int8_t     AInt8;
typedef uint8_t    AInt8U;
typedef int16_t    AInt16;
typedef uint16_t   AInt16U;
typedef int32_t    AInt32;
typedef uint32_t   AInt32U;
typedef int64_t    AInt64;
typedef uint64_t   AInt64U;
typedef uint8_t    ACharU;
typedef int8_t     ACharS;
typedef char       AChar;
typedef unsigned   AIntU;
typedef int        AInt;
typedef float      AFloat;
typedef double     ADouble;
typedef int		   AId;
typedef unsigned * APointer;
typedef void       AVoid;
typedef unsigned char        ABool;
typedef void *     AHandler;



//	Frank Du [2018/4/13]
// 	sensor ID could be -1 at aaObjModelQueryObjList which indicate any sensor


/* end type define */

#define ATRUE  1
#define AFALSE 0

/* C Standard Library according to C89 standard, 14 .h be included */
#ifndef _A_CLIB
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <locale.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#endif
/* end clib include */

typedef size_t     ASize;

/* \wirte by qing */
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

#ifndef FALSE
#define FALSE               0
#endif

#ifndef TRUE
#define TRUE                1
#endif

#undef FAR
#undef  NEAR
#define FAR                 far
#define NEAR                near
//#ifndef CONST
//#define CONST               const
//#endif

#define MAKEWORD(a, b)      ((WORD)(((BYTE)(((DWORD_PTR)(a)) & 0xff)) | ((WORD)((BYTE)(((DWORD_PTR)(b)) & 0xff))) << 8))
#define MAKELONG(a, b)      ((LONG)(((WORD)(((DWORD_PTR)(a)) & 0xffff)) | ((DWORD)((WORD)(((DWORD_PTR)(b)) & 0xffff))) << 16))
#define LOWORD(l)           ((WORD)(((DWORD_PTR)(l)) & 0xffff))
#define HIWORD(l)           ((WORD)((((DWORD_PTR)(l)) >> 16) & 0xffff))
#define LOBYTE(w)           ((BYTE)(((DWORD_PTR)(w)) & 0xff))
#define HIBYTE(w)           ((BYTE)((((DWORD_PTR)(w)) >> 8) & 0xff))

//
#ifndef SWAP
#define SWAP(a,b) {a=a+b; b=a-b; a=a-b; }
#endif

#ifndef MAX
#define MAX(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef MIN
#define MIN(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#ifndef ABS
#define ABS(x)				( (x)>0?(x):-(x) )
#endif

#ifndef AF_PI
#define AF_PI 3.141592654
#endif


typedef unsigned long       DWORD;
/*typedef unsigned char       BOOL;*/
typedef unsigned char       BYTE;
typedef unsigned short      WORD;
typedef float               FLOAT;
/* \write by qing end */


/* OS macro define:
   _A_WIN: windows compatible
   _A_LINUX: linux compatible
*/
#if defined(_WIN32) || defined(WINCE) || defined(_WIN64)
#   define _A_WIN 1
#endif

/* define the parameters push sequence to support dll in windows */
////////////////////////////////////////////////////////////////////////////////////
//#if defined(_A_WIN)
//#  define _A_DLLFUNC __cdecl
//#else
//#  define _A_DLLFUNC
//#endif
//
//#if __linux__
//#   define _A_LINUX 1
//#   define _A_POSIX 1
//#endif
//
//#if __APPLE__
//#	define _A_APPLE 1
//#endif
//
//#if __QNXNTO__
//#	define _A_QNX 1
//#endif
//
//#if !defined(_A_WIN) && !defined(_A_LINUX) && !defined(_A_APPLE) &&!defined(_A_QNX)
//#error "Need to define the OS type!"
//#endif
///////////////////////////////////////////////////////////////////////////
/* end OS macro */


/* CPU Classify */

#if defined __arm__ || defined(__ARM_NEON)
#   define _A_ARM 1
#endif

#if defined(_WIN64) || defined(__x86_64__) || defined(__amd64)
#   define _A_64 1
#   define _A_IA 1
#elif defined(_WIN32) || defined(__i386__)
#   define _A_IA 1
#   define _A_32 1
#elif defined(_A_GCC)
#   if __SIZEOF_POINTER__ == 8
#      define _A_64 1
#   else
#      define _A_32 1
#   endif
#endif

#if !defined(_A_64) && !defined(_A_32)
#   error "Need to make clear which 32bit or 64bit CPU?"
#endif

#if !defined(_A_IA) && !defined(_A_ARM) && !defined(_A_GCC)
#   error "Need to make clear which ARM or IA?"
#endif

/* CPU Classify */

/* common macro */
#define AMIN(x, y) (((x) < (y)) ? (x) : (y))
#define AMAX(x, y) (((x) > (y)) ? (x) : (y))
#define AARRAYSIZE(arr) ((sizeof(arr))/(sizeof(arr[0])))

#ifndef min
#define min(x, y) (((x) < (y)) ? (x) : (y))
#endif

#ifndef max
#define max(x, y) (((x) > (y)) ? (x) : (y))
#endif

#define A_PI (3.141592653)
#define A_ANGLE2RADIAN(angle)	(((angle) * A_PI) / 180.f)
#define A_RADIAN2ANGLE(radian)	(((radian) * 180.f) / A_PI)


/********process*******/
#define A_ASSERT(expression) assert(expression)
#define GetArrLen(type, arr) (sizeof(arr) / sizeof(type))
/********* degree to radian *******/
/*#define A_ANGLE2RADIAN(angle)	(((angle) * A_PI) / 180.f)*/
#define A_M2MM (1000)
#define A_MAX_PATH_LEN  (256)
#define A_MAX_NAME_LEN (32)
#define A_MAX_AUTHCODE_LEN (50)
#define A_NSEC2MSEC  				(1000000.0f)
#define A_NUMBER_1024 				(1024)
#define HWA_LOG (0)
#define TSR_LOG (0)
#define CL_LOG (0)
#define MRR_BDRY_LOG (0)
#define BDRY_LOG (0)
#ifndef EAFNOSUPPORT
#define EAFNOSUPPORT 9901
#endif


#endif
