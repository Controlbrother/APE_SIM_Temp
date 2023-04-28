/** <!------------------------------------------------------------------------->
*
*  @file EncodeDecode.h
*
*  @brief Macros for unaligned packing and unpacking of signal data with arbitrary width.
*
*  @author
*    MartinEi
*
*  @description
*
*  @copyright
*    Copyright 2014, dSPACE GmbH. All rights reserved.
*
*<!-------------------------------------------------------------------------->*/

#include <limits.h>
#include <Dstypes.h>

#if !defined DS_PLATFORM_LE && !defined DS_PLATFORM_BE
# if defined DS_PLATFORM_OFFSIM
# define DS_PLATFORM_LE
# else
#  error Undefined endianess
# endif
#endif

#if !defined (_ENCODE_DECODE_H_)
#define _ENCODE_DECODE_H_

#define SWAP16(data)      (((data & (UInt16)0xFF00) >> 8)  \
                         | ((data & (UInt16)0x00FF) << 8))

#define SWAP32(data)      (((data & (UInt32)0xFF000000) >> 24) \
                         | ((data & (UInt32)0x00FF0000) >>  8) \
                         | ((data & (UInt32)0x0000FF00) <<  8) \
                         | ((data & (UInt32)0x000000FF) << 24))

#define SWAP64(data)      (((data & (ULong64)0xFF00000000000000ULL) >> 56) \
                         | ((data & (ULong64)0x00FF000000000000ULL) >> 40) \
                         | ((data & (ULong64)0x0000FF0000000000ULL) >> 24) \
                         | ((data & (ULong64)0x000000FF00000000ULL) >>  8) \
                         | ((data & (ULong64)0x00000000FF000000ULL) <<  8) \
                         | ((data & (ULong64)0x0000000000FF0000ULL) << 24) \
                         | ((data & (ULong64)0x000000000000FF00ULL) << 40) \
                         | ((data & (ULong64)0x00000000000000FFULL) << 56))

#define SWAP72_INPLACE(high8, low64)    {   UInt8 tmp = (UInt8)low64; \
                                            low64 = (SWAP64(low64) << 8) | high8; \
                                            high8 = tmp; \
                                        }
#define SHIFT_LEFT72_INPLACE(high8, low64, shift)   high8 = (UInt8)((high8 << shift) | (low64 >> (64 - shift))); \
                                                    low64 = low64 << shift;

#define SHIFT_RIGHT72_INPLACE(high8, low64, shift)  low64 = (((ULong64)high8) << (64 - shift)) | (low64 >> shift); \
                                                    high8 = (UInt8)(high8 >> shift);

#if defined(DS_PLATFORM_LE)
#if defined(NO_MISALIGNED_MEM_ACCESSES_ALLOWED)
#define READ8(ptr)                  (((uint8)((uint8*)ptr)[0] << 0))
#define WRITE8(ptr, value)          ((uint8*)ptr)[0] = (uint8)(value >> 0);
#define READ16(ptr)                 (((uint16)((uint8*)ptr)[0] << 0) + \
                                     ((uint16)((uint8*)ptr)[1] << 8))
#define WRITE16(ptr, value)         ((uint8*)ptr)[0] = (uint8)(value >> 0); \
                                    ((uint8*)ptr)[1] = (uint8)(value >> 8);
#define READ32(ptr)                 (((uint32)((uint8*)ptr)[0] << 0) + \
                                     ((uint32)((uint8*)ptr)[1] << 8) + \
                                     ((uint32)((uint8*)ptr)[2] << 16) + \
                                     ((uint32)((uint8*)ptr)[3] << 24))
#define WRITE32(ptr, value)         ((uint8*)ptr)[0] = (uint8)(value >> 0); \
                                    ((uint8*)ptr)[1] = (uint8)(value >> 8); \
                                    ((uint8*)ptr)[2] = (uint8)(value >> 16); \
                                    ((uint8*)ptr)[3] = (uint8)(value >> 24);
#define READ64(ptr)                 (((uint64)((uint8*)ptr)[0] << 0) + \
                                     ((uint64)((uint8*)ptr)[1] << 8) + \
                                     ((uint64)((uint8*)ptr)[2] << 16) + \
                                     ((uint64)((uint8*)ptr)[3] << 24) + \
                                     ((uint64)((uint8*)ptr)[4] << 32) + \
                                     ((uint64)((uint8*)ptr)[5] << 40) + \
                                     ((uint64)((uint8*)ptr)[6] << 48) + \
                                     ((uint64)((uint8*)ptr)[7] << 56))
#define WRITE64(ptr, value)         ((uint8*)ptr)[0] = (uint8)(value >> 0); \
                                    ((uint8*)ptr)[1] = (uint8)(value >> 8); \
                                    ((uint8*)ptr)[2] = (uint8)(value >> 16); \
                                    ((uint8*)ptr)[3] = (uint8)(value >> 24); \
                                    ((uint8*)ptr)[4] = (uint8)(value >> 32); \
                                    ((uint8*)ptr)[5] = (uint8)(value >> 40); \
                                    ((uint8*)ptr)[6] = (uint8)(value >> 48); \
                                    ((uint8*)ptr)[7] = (uint8)(value >> 56);
#define READ72(ptr, high8, low64)   low64 = READ64(ptr); high8 = ((uint8*)ptr)[8];
#define WRITE72(ptr, high8, low64)  WRITE64(ptr, low64); ((uint8*)ptr)[8] = high8;
#else
#define READ8(ptr)                  (*((uint8*)ptr))
#define WRITE8(ptr, value)          (*((uint8*)ptr) = value)
#define READ16(ptr)                 (*((uint16*)ptr))
#define WRITE16(ptr, value)         (*((uint16*)ptr) = value)
#define READ32(ptr)                 (*((uint32*)ptr))
#define WRITE32(ptr, value)         (*((uint32*)ptr) = value)
#ifdef DS_PLATFORM_ARM
typedef union
{
    struct
    {
        volatile uint32 lo;
        volatile uint32 hi;
    } u32;
    uint64 u64;
} DsTUnion64_LE;

static uint64 READ64(const void* pMem) __attribute__ ((__noinline__)) __attribute__ ((__unused__));
static uint64 READ64(const void* pMem)
{
    DsTUnion64_LE Result;
    Result.u32.lo = ((volatile uint32*)pMem)[0];
    Result.u32.hi = ((volatile uint32*)pMem)[1];
    return Result.u64;
}

static void WRITE64(void *pMem, uint64 Val64) __attribute__ ((__noinline__)) __attribute__ ((__unused__));
static void WRITE64(void *pMem, uint64 Val64)
{
    DsTUnion64_LE Result;
    Result.u64 = Val64;
    ((volatile uint32*)pMem)[0] = Result.u32.lo;
    ((volatile uint32*)pMem)[1] = Result.u32.hi;
}
#else
#define READ64(ptr)                 (*((uint64*)ptr))
#define WRITE64(ptr, value)         (*((uint64*)ptr) = value)
#endif
#define READ72(ptr, high8, low64)   low64 = READ64(ptr); high8 = ((uint8*)ptr)[8];
#define WRITE72(ptr, high8, low64)  WRITE64(ptr, low64); ((uint8*)ptr)[8] = high8;
#endif
# define INT8_FROM_LE(data)  ((UInt8)(data))
# define INT16_FROM_LE(data) ((UInt16)(data))
# define INT32_FROM_LE(data) ((UInt32)(data))
# define INT64_FROM_LE(data) ((ULong64)(data))
# define INT72_FROM_LE_INPLACE(high8, low64) /* nothing to do */
# define INT8_FROM_BE(data)  ((UInt8)(data))
# define INT16_FROM_BE(data) (SWAP16((UInt16)(data)))
# define INT32_FROM_BE(data) (SWAP32((UInt32)(data)))
# define INT64_FROM_BE(data) (SWAP64((ULong64)(data)))
# define INT72_FROM_BE_INPLACE(high8, low64) SWAP72_INPLACE(high8, low64)
#elif defined (DS_PLATFORM_BE) /* BigEndian DS1005, DS1401, DS1103 */
#if defined(NO_MISALIGNED_MEM_ACCESSES_ALLOWED)
#define READ8(ptr)                  (((uint8)((uint8*)ptr)[0] << 0))
#define WRITE8(ptr, value)          ((uint8*)ptr)[0] = (uint8)(value >> 0);
#define READ16(ptr)                 (((uint16)((uint8*)ptr)[0] << 8) + \
                                     ((uint16)((uint8*)ptr)[1] << 0))
#define WRITE16(ptr, value)         ((uint8*)ptr)[0] = (uint8)(value >> 8); \
                                    ((uint8*)ptr)[1] = (uint8)(value >> 0);
#define READ32(ptr)                 (((uint32)((uint8*)ptr)[0] << 24) + \
                                    ((uint32)((uint8*)ptr)[1] << 16) + \
                                    ((uint32)((uint8*)ptr)[2] << 8) + \
                                    ((uint32)((uint8*)ptr)[3] << 0))
#define WRITE32(ptr, value)         ((uint8*)ptr)[0] = (uint8)(value >> 24); \
                                    ((uint8*)ptr)[1] = (uint8)(value >> 16); \
                                    ((uint8*)ptr)[2] = (uint8)(value >> 8); \
                                    ((uint8*)ptr)[3] = (uint8)(value >> 0);
#define READ64(ptr)                 (((uint64)((uint8*)ptr)[0] << 56) + \
                                     ((uint64)((uint8*)ptr)[1] << 48) + \
                                     ((uint64)((uint8*)ptr)[2] << 40) + \
                                     ((uint64)((uint8*)ptr)[3] << 32) + \
                                     ((uint64)((uint8*)ptr)[4] << 24) + \
                                     ((uint64)((uint8*)ptr)[5] << 16) + \
                                     ((uint64)((uint8*)ptr)[6] << 8) + \
                                     ((uint64)((uint8*)ptr)[7] << 0))
#define WRITE64(ptr, value)         ((uint8*)ptr)[0] = (uint8)(value >> 56); \
                                    ((uint8*)ptr)[1] = (uint8)(value >> 48); \
                                    ((uint8*)ptr)[2] = (uint8)(value >> 40); \
                                    ((uint8*)ptr)[3] = (uint8)(value >> 32); \
                                    ((uint8*)ptr)[4] = (uint8)(value >> 24); \
                                    ((uint8*)ptr)[5] = (uint8)(value >> 16); \
                                    ((uint8*)ptr)[6] = (uint8)(value >> 8); \
                                    ((uint8*)ptr)[7] = (uint8)(value >> 0);
#define READ72(ptr, high8, low64)   high8 = ((uint8*)ptr)[0]; low64 = READ64((uint8*)ptr+1);
#define WRITE72(ptr, high8, low64)  ((uint8*)ptr)[0] = high8; WRITE64((uint8*)ptr+1, low64);
#else
#define READ8(ptr)                  (*((uint8*)ptr))
#define WRITE8(ptr, value)          (*((uint8*)ptr) = value)
#define READ16(ptr)                 (*((uint16*)ptr))
#define WRITE16(ptr, value)         (*((uint16*)ptr) = value)
#define READ32(ptr)                 (*((uint32*)ptr))
#define WRITE32(ptr, value)         (*((uint32*)ptr) = value)
#define READ64(ptr)                 (*((uint64*)ptr))
#define WRITE64(ptr, value)         (*((uint64*)ptr) = value)
#define READ72(ptr, high8, low64)   high8 = ((uint8*)ptr)[0]; low64 = READ64((uint8*)ptr+1);
#define WRITE72(ptr, high8, low64)  ((uint8*)ptr)[0] = high8; WRITE64((uint8*)ptr+1, low64);
#endif
# define INT8_FROM_LE(data)  ((UInt8)(data))
# define INT16_FROM_LE(data) (SWAP16((UInt16)(data)))
# define INT32_FROM_LE(data) (SWAP32((UInt32)(data)))
# define INT64_FROM_LE(data) (SWAP64((ULong64)(data)))
# define INT72_FROM_LE_INPLACE(high8, low64) SWAP72_INPLACE(high8, low64)
# define INT8_FROM_BE(data)  ((UInt8)(data))
# define INT16_FROM_BE(data) ((UInt16)(data))
# define INT32_FROM_BE(data) ((UInt32)(data))
# define INT64_FROM_BE(data) ((ULong64)(data))
# define INT72_FROM_BE_INPLACE(high8, low64) /* nothing to do */
#else
# error "EncodeDecode.h: Platform endianess not defined."
#endif

# define INT8_TO_BE(data) INT8_FROM_BE(data)
# define INT8_TO_LE(data) INT8_FROM_LE(data)
# define INT16_TO_BE(data) INT16_FROM_BE(data)
# define INT16_TO_LE(data) INT16_FROM_LE(data)
# define INT32_TO_BE(data) INT32_FROM_BE(data)
# define INT32_TO_LE(data) INT32_FROM_LE(data)
# define INT64_TO_BE(data) INT64_FROM_BE(data)
# define INT64_TO_LE(data) INT64_FROM_LE(data)
# define INT72_TO_BE_INPLACE(high8, low64) INT72_FROM_BE_INPLACE(high8, low64)
# define INT72_TO_LE_INPLACE(high8, low64) INT72_FROM_LE_INPLACE(high8, low64)

#define BIT_MASK_64(x) (((size_t)(x) >= sizeof(ULong64) * CHAR_BIT) ? (ULong64) -1 : ((ULong64)1 << (x)) - 1)
#define BIT_MASK_32(x) (((size_t)(x) >= sizeof(UInt32) * CHAR_BIT)  ?  (UInt32) -1 : ( (UInt32)1 << (x)) - 1)
#define BIT_MASK_16(x) (((size_t)(x) >= sizeof(UInt16) * CHAR_BIT)  ?  (UInt16) -1 : ( (UInt16)1 << (x)) - 1)
#define BIT_MASK_8(x)  (((size_t)(x) >= sizeof(UInt8) * CHAR_BIT)   ?   (UInt8) -1 : (  (UInt8)1 << (x)) - 1)


/**************************************************************************************************\
 *** FUNCTION:
 ***     DSFRAL_PACK_MESSAGE_TO_FRAME_CACHELE
 ***
 *** DESCRIPTION:
 ***     Macro writes data to a byte buffer in little endian byte order.
 ***
 *** PARAMETERS:
 ***     Name             Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     pFramePayload    Pointer to buffer location.
 ***     nData            Pointer to data location.
 ***     nPos             Bit position in buffer to which data will be packed.
 ***                      (Counting policy: Sawtooth, relative from pFramePayload)
 ***     nLength          Number of bits to pack.
 ***
\**************************************************************************************************/
#define DSFRAL_PACK_MESSAGE_TO_FRAME_CACHELE(pFramePayload, nData, nPos, nLength) \
  {                                                                     \
    Int32 byteOffset = nPos / 8;                                        \
    UInt32 bitOffset = nPos % 8;                                        \
    UInt8* destData = (UInt8*) pFramePayload;                           \
    /* Store length in variable to avoid compiler warning */            \
    /* in signal mask calculation.  */                                  \
    UInt32 length = nLength;                                            \
                                                                        \
    if (nLength > 64) {                                                 \
      /* Can't pack values larger than 64 bit. */                       \
    }                                                                   \
    else if (nLength+bitOffset > 64) {                                  \
      UInt8 highMask = 0, highData = 0, highTarget = 0;                 \
      ULong64 lowMask = BIT_MASK_64(length);                            \
      ULong64 lowData = *((ULong64*)nData) & lowMask;                   \
      ULong64 lowTarget = 0;                                            \
      SHIFT_LEFT72_INPLACE(highData, lowData, bitOffset);               \
      INT72_TO_LE_INPLACE(highData, lowData);                           \
      SHIFT_LEFT72_INPLACE(highMask, lowMask, bitOffset);               \
      highMask = ~highMask; lowMask = ~lowMask;                         \
      INT72_TO_LE_INPLACE(highMask, lowMask);                           \
      READ72(&destData[byteOffset], highTarget, lowTarget);             \
      highTarget = (highTarget & highMask) | highData;                  \
      lowTarget = (lowTarget & lowMask) | lowData;                      \
      WRITE72(&destData[byteOffset], highTarget, lowTarget);            \
    }                                                                   \
    else if (nLength+bitOffset > 32) {                                  \
      ULong64 sgnMask = BIT_MASK_64(length);                            \
      ULong64 shiftData = (*((ULong64*)nData) & sgnMask) << bitOffset;  \
      *((ULong64*)&destData[byteOffset]) = (*((ULong64*)&destData[byteOffset]) & INT64_TO_LE(~(sgnMask << bitOffset))) | INT64_TO_LE(shiftData); \
    }                                                                   \
    else if (nLength+bitOffset > 16) {                                  \
      UInt32 sgnMask = BIT_MASK_32(length);                             \
      UInt32 shiftData = (*((UInt32*)nData) & sgnMask) << bitOffset;    \
      *((UInt32*)&destData[byteOffset]) = (*((UInt32*)&destData[byteOffset]) & INT32_TO_LE(~(sgnMask << bitOffset))) | INT32_TO_LE(shiftData); \
    }                                                                   \
    else if (nLength+bitOffset > 8) {                                   \
      UInt16 sgnMask = BIT_MASK_16(length);                             \
      UInt16 shiftData = (*((UInt16*)nData) & sgnMask) << bitOffset;    \
      *((UInt16*)&destData[byteOffset]) = (*((UInt16*)&destData[byteOffset]) & INT16_TO_LE(~(sgnMask << bitOffset))) | INT16_TO_LE(shiftData); \
    }                                                                   \
    else {                                                              \
      UInt8 sgnMask = BIT_MASK_8(length);                               \
      UInt8 shiftData = 0;                                              \
      shiftData = (*((UInt8*)nData) & sgnMask) << bitOffset;            \
      *((UInt8*)&destData[byteOffset]) = (*((UInt8*)&destData[byteOffset]) & INT8_TO_LE(~(sgnMask << bitOffset))) | INT8_TO_LE(shiftData); \
    }                                                                   \
  }

/**************************************************************************************************\
 *** FUNCTION:
 ***     DSFRAL_UNPACK_MESSAGE_FROM_FRAME_CACHELE
 ***
 *** DESCRIPTION:
 ***     Macro reads little endian encoded data from a byte buffer.
 ***
 *** PARAMETERS:
 ***     Name             Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     pFramePayload    Pointer to buffer location.
 ***     nData            Pointer to unpacked data location.
 ***     nPos             Bit position in buffer from which data will be read.
 ***                      (Counting policy: Sawtooth, relative from pFramePayload)
 ***     nLength          Number of bits to unpack.
 ***
\**************************************************************************************************/
#define DSFRAL_UNPACK_MESSAGE_FROM_FRAME_CACHELE(pFramePayload, nData, nPos, nLength) \
  {                                                                     \
    Int32 byteOffset = nPos / 8;                                       \
    UInt32 bitOffset = nPos % 8;                                        \
    UInt8* destData = (UInt8*) pFramePayload;                           \
    /* Store length in variable to avoid compiler warning */            \
    /* in signal mask calculation.  */                                  \
    UInt32 length = nLength;                                            \
                                                                        \
    if (nLength > 64) {                                                 \
      /* Can't unpack values larger than 64 bit. */                     \
    }                                                                   \
    else if (nLength+bitOffset > 64) {                                  \
      ULong64 sgnMask = BIT_MASK_64(length);                            \
      UInt8 highData = 0;                                               \
      ULong64 lowData = 0;                                              \
      READ72(&destData[byteOffset], highData, lowData);                 \
      INT72_FROM_LE_INPLACE(highData, lowData);                         \
      SHIFT_RIGHT72_INPLACE(highData, lowData, bitOffset);              \
      *((ULong64*)(nData)) = (ULong64)(lowData & sgnMask);              \
    }                                                                   \
    else if (nLength+bitOffset > 32) {                                  \
      ULong64 sgnMask = BIT_MASK_64(length);                            \
      ULong64 tempData = 0;                                             \
      tempData = INT64_FROM_LE(*((ULong64*)&destData[byteOffset]));     \
      tempData = tempData >> bitOffset;                                 \
      if (nLength > 32)                                                 \
        *((ULong64*)(nData)) = (ULong64)(tempData & sgnMask);           \
      else                                                              \
        *((UInt32*)(nData)) = (UInt32)(tempData & sgnMask);             \
    }                                                                   \
    else if (nLength+bitOffset > 16) {                                  \
      UInt32 sgnMask = BIT_MASK_32(length);                             \
      UInt32 tempData = 0;                                              \
      tempData = INT32_FROM_LE(*((UInt32*)&destData[byteOffset]));      \
      tempData = tempData >> bitOffset;                                 \
      if (nLength > 16)                                                 \
        *((UInt32*)(nData)) = (UInt32)(tempData & sgnMask);             \
      else                                                              \
        *((UInt16*)(nData)) = (UInt16)(tempData & sgnMask);             \
    }                                                                   \
    else if (nLength+bitOffset > 8) {                                   \
      UInt16 sgnMask = BIT_MASK_16(length);                             \
      UInt16 tempData = 0;                                              \
      tempData = INT16_FROM_LE(*((UInt16*)&destData[byteOffset]));      \
      tempData = tempData >> bitOffset;                                 \
      if (nLength > 8)                                                  \
        *((UInt16*)(nData)) = (UInt16)(tempData & sgnMask);             \
      else                                                              \
        *((UInt8*)(nData)) = (UInt8)(tempData & sgnMask);               \
    }                                                                   \
    else {                                                              \
      UInt8 sgnMask = BIT_MASK_8(length);                               \
      UInt8 tempData = 0;                                               \
      tempData = INT8_FROM_LE(*((UInt8*)&destData[byteOffset]));        \
      tempData = tempData >> bitOffset;                                 \
      *((UInt8*)(nData)) = (UInt8)(tempData & sgnMask);                 \
    }                                                                   \
  }

/**************************************************************************************************\
 *** FUNCTION:
 ***     DSFRAL_PACK_MESSAGE_TO_FRAME_CACHEBE
 ***
 *** DESCRIPTION:
 ***     Macro writes data to a byte buffer in big endian byte order.
 ***
 *** PARAMETERS:
 ***     Name             Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     pFramePayload    Pointer to buffer location.
 ***     nData            Pointer to data location.
 ***     nPos             Bit position in buffer to which data will be packed.
 ***                      (Counting policy: Monotone, relative from pFramePayload)
 ***     nLength          Number of bits to pack.
 ***
\**************************************************************************************************/
#define DSFRAL_PACK_MESSAGE_TO_FRAME_CACHEBE(pFramePayload, nData, nPos, nLength) \
  {                                                                     \
    Int32 byteOffset = nPos / 8;                                        \
    Int32 msbOffset = 8 - (nLength % 8);                                \
    Int32 sbOffset = nPos % 8;                                          \
    UInt32 bitOffset = (8 + msbOffset - sbOffset) % 8;                  \
    UInt8* destData = (UInt8*) pFramePayload;                           \
    UInt32 packedByteLength = (nLength + bitOffset + 7) / 8;            \
                                                                        \
    /* Store length in variable to avoid compiler warning */            \
    /* in signal mask calculation.  */                                  \
    UInt32 length = nLength;                                            \
                                                                        \
    if (nLength > 64) {                                                 \
      /* Can't pack values larger than 64 bit. */                       \
    }                                                                   \
    else if (nLength+bitOffset > 64) {                                  \
      UInt8 highMask = 0, highData = 0, highTarget = 0;                 \
      ULong64 lowMask = BIT_MASK_64(length);                            \
      ULong64 lowData = *((ULong64*)nData) & lowMask;                   \
      ULong64 lowTarget = 0;                                            \
      SHIFT_LEFT72_INPLACE(highData, lowData, bitOffset);               \
      INT72_TO_BE_INPLACE(highData, lowData);                           \
      SHIFT_LEFT72_INPLACE(highMask, lowMask, bitOffset);               \
      highMask = ~highMask; lowMask = ~lowMask;                         \
      INT72_TO_BE_INPLACE(highMask, lowMask);                           \
      READ72(&destData[byteOffset], highTarget, lowTarget);             \
      highTarget = (highTarget & highMask) | highData;                  \
      lowTarget = (lowTarget & lowMask) | lowData;                      \
      WRITE72(&destData[byteOffset], highTarget, lowTarget);            \
    }                                                                   \
    else if (nLength+bitOffset > 32) {                                  \
      ULong64 sgnMask = BIT_MASK_64(length);                            \
      ULong64 shiftData = (*((ULong64*)nData) & sgnMask) << bitOffset;  \
      byteOffset = byteOffset + packedByteLength - 8;                   \
      *((ULong64*)&destData[byteOffset]) = (*((ULong64*)&destData[byteOffset]) & INT64_TO_BE(~(sgnMask << bitOffset))) | INT64_TO_BE(shiftData); \
    }                                                                   \
    else if (nLength+bitOffset > 16) {                                  \
      UInt32 sgnMask = BIT_MASK_32(length);                             \
      UInt32 shiftData = (*((UInt32*)nData) & sgnMask) << bitOffset;    \
      byteOffset = byteOffset + packedByteLength - 4;                   \
      *((UInt32*)&destData[byteOffset]) = (*((UInt32*)&destData[byteOffset]) & INT32_TO_BE(~(sgnMask << bitOffset))) | INT32_TO_BE(shiftData); \
    }                                                                   \
    else if (nLength+bitOffset > 8) {                                   \
      UInt16 sgnMask = BIT_MASK_16(length);                             \
      UInt16 shiftData = (*((UInt16*)nData) & sgnMask) << bitOffset;    \
      *((UInt16*)&destData[byteOffset]) = (*((UInt16*)&destData[byteOffset]) & INT16_TO_BE(~(sgnMask << bitOffset))) | INT16_TO_BE(shiftData); \
    }                                                                   \
    else {                                                              \
      UInt8 sgnMask = BIT_MASK_8(length);                               \
      UInt8 shiftData = (*((UInt8*)nData) & sgnMask) << bitOffset;      \
      *((UInt8*)&destData[byteOffset]) = (*((UInt8*)&destData[byteOffset]) & INT8_TO_BE(~(sgnMask << bitOffset))) | INT8_TO_BE(shiftData); \
    }                                                                   \
  }

/**************************************************************************************************\
 *** FUNCTION:
 ***     DSFRAL_UNPACK_MESSAGE_FROM_FRAME_CACHEBE
 ***
 *** DESCRIPTION:
 ***     Function reads big endian encoded data from a byte buffer.
 ***
 *** PARAMETERS:
 ***     Name             Description
 ***     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***     pFramePayload    Pointer to buffer location.
 ***     nData            Pointer to unpacked data location.
 ***     nPos             Bit position in buffer from which data will be read.
 ***                      (Counting policy: Monotone)
 ***     nLength          Number of bits to unpack.
 ***
\**************************************************************************************************/
#define DSFRAL_UNPACK_MESSAGE_FROM_FRAME_CACHEBE(pFramePayload, nData, nPos, nLength) \
  {                                                                     \
    Int32 byteOffset = nPos / 8;                                       \
    Int32 msbOffset = 8 - (nLength % 8);                                \
    Int32 sbOffset = nPos % 8;                                          \
    UInt32 bitOffset = (8 + msbOffset - sbOffset) % 8;                  \
    UInt8* destData = (UInt8*) pFramePayload;                           \
    UInt32 packedByteLength = (nLength + bitOffset + 7) / 8;            \
                                                                        \
    /* Store length in variable to avoid compiler warning */            \
    /* in signal mask calculation.  */                                  \
    UInt32 length = nLength;                                            \
                                                                        \
    if (nLength > 64) {                                                 \
      /* Can't unpack values larger than 64 bit. */                     \
    }                                                                   \
    else if (nLength+bitOffset > 64) {                                  \
      ULong64 sgnMask = BIT_MASK_64(length);                            \
      UInt8 highData = 0;                                               \
      ULong64 lowData = 0;                                              \
      READ72(&destData[byteOffset], highData, lowData);                 \
      INT72_FROM_BE_INPLACE(highData, lowData);                         \
      SHIFT_RIGHT72_INPLACE(highData, lowData, bitOffset);              \
      *((ULong64*)(nData)) = (ULong64)(lowData & sgnMask);              \
    }                                                                   \
    else if (nLength+bitOffset > 32) {                                  \
      ULong64 sgnMask = BIT_MASK_64(length);                            \
      ULong64 tempData = 0;                                             \
      byteOffset = byteOffset + packedByteLength - 8;                   \
      tempData = INT64_FROM_BE(*((ULong64*)&destData[byteOffset]));     \
      tempData = tempData >> bitOffset;                                 \
      if (nLength > 32)                                                 \
        *((ULong64*)(nData)) = (ULong64)(tempData & sgnMask);           \
      else                                                              \
        *((UInt32*)(nData)) = (UInt32)(tempData & sgnMask);             \
    }                                                                   \
    else if (nLength+bitOffset > 16) {                                  \
      UInt32 sgnMask = BIT_MASK_32(length);                             \
      UInt32 tempData = 0;                                              \
      byteOffset = byteOffset + packedByteLength - 4;                   \
      tempData = INT32_FROM_BE(*((UInt32*)&destData[byteOffset]));      \
      tempData = tempData >> bitOffset;                                 \
      if (nLength > 16)                                                 \
        *((UInt32*)(nData)) = (UInt32)(tempData & sgnMask);             \
      else                                                              \
        *((UInt16*)(nData)) = (UInt16)(tempData & sgnMask);             \
    }                                                                   \
    else if (nLength+bitOffset > 8) {                                   \
      UInt16 sgnMask = BIT_MASK_16(length);                             \
      UInt16 tempData = 0;                                              \
      tempData = INT16_FROM_BE(*((UInt16*)&destData[byteOffset]));      \
      tempData = tempData >> bitOffset;                                 \
      if (nLength > 8)                                                  \
        *((UInt16*)(nData)) = (UInt16)(tempData & sgnMask);             \
      else                                                              \
        *((UInt8*)(nData)) = (UInt8)(tempData & sgnMask);               \
    }                                                                   \
    else {                                                              \
      UInt8 sgnMask = BIT_MASK_8(length);                               \
      UInt8 tempData = 0;                                               \
      tempData = INT8_FROM_BE(*((UInt8*)&destData[byteOffset]));        \
      tempData = tempData >> bitOffset;                                 \
      *((UInt8*)(nData)) = (UInt8)(tempData & sgnMask);                 \
    }                                                                   \
  }

#endif /* _ENCODE_DECODE_H_ */

