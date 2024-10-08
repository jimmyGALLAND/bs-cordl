#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Convert)
namespace System {
struct Base64FormattingOptions;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Convert;
}
// Write type traits
MARK_REF_PTR_T(::System::Convert);
// Type: System::Convert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Convert*
class CORDL_TYPE Convert : public ::System::Object {
public:
// Declarations
/// @brief Field ConvertTypes, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ConvertTypes, put=setStaticF_ConvertTypes)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  ConvertTypes;

/// @brief Field DBNull, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_DBNull, put=setStaticF_DBNull)) ::System::Object*  DBNull;

/// @brief Field EnumType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_EnumType, put=setStaticF_EnumType)) ::System::Type*  EnumType;

/// @brief Field base64Table, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_base64Table, put=setStaticF_base64Table)) ::ArrayW<char16_t,::Array<char16_t>*>  base64Table;

/// @brief Field s_decodingMap, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_decodingMap, put=setStaticF_s_decodingMap)) ::ArrayW<int8_t,::Array<int8_t>*>  s_decodingMap;

/// @brief Method ChangeType, addr 0x3cccaf0, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType) ;

/// @brief Method ChangeType, addr 0x3cccb8c, size 0xca8, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType, ::System::IFormatProvider*  provider) ;

/// @brief Method ChangeType, addr 0x3ccc200, size 0x8f0, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::TypeCode  typeCode, ::System::IFormatProvider*  provider) ;

/// @brief Method ConvertToBase64Array, addr 0x3cd2c6c, size 0x244, virtual false, abstract: false, final false
static inline int32_t ConvertToBase64Array(::cordl_internals::Ptr<char16_t>  outChars, ::cordl_internals::Ptr<uint8_t>  inData, int32_t  offset, int32_t  length, bool  insertLineBreaks) ;

/// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x3cd3954, size 0x124, virtual false, abstract: false, final false
static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<char16_t>  tempBuffer, ByRef<int32_t>  consumed, ByRef<int32_t>  charsWritten) ;

/// @brief Method Decode, addr 0x3ccc0d4, size 0x50, virtual false, abstract: false, final false
static inline int32_t Decode(ByRef<char16_t>  encodedChars, ByRef<int8_t>  decodingMap) ;

/// @brief Method DefaultToType, addr 0x3cc7fac, size 0xe28, virtual false, abstract: false, final false
static inline ::System::Object* DefaultToType(::System::IConvertible*  value, ::System::Type*  targetType, ::System::IFormatProvider*  provider) ;

/// @brief Method FromBase64CharArray, addr 0x3cd3aa4, size 0x1f0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t,::Array<char16_t>*>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method FromBase64CharPtr, addr 0x3cd32f8, size 0x188, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64CharPtr(::cordl_internals::Ptr<char16_t>  inputPtr, int32_t  inputLength) ;

/// @brief Method FromBase64String, addr 0x3cd3244, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64String(::StringW  s) ;

/// @brief Method FromBase64_ComputeResultLength, addr 0x3cd3c94, size 0xbc, virtual false, abstract: false, final false
static inline int32_t FromBase64_ComputeResultLength(::cordl_internals::Ptr<char16_t>  inputPtr, int32_t  inputLength) ;

/// @brief Method GetTypeCode, addr 0x3ccc13c, size 0xc4, virtual false, abstract: false, final false
static inline ::System::TypeCode GetTypeCode(::System::Object*  value) ;

/// @brief Method IsSpace, addr 0x3cd3a78, size 0x2c, virtual false, abstract: false, final false
static inline bool IsSpace(char16_t  c) ;

/// @brief Method ThrowByteOverflowException, addr 0x3ccd880, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowByteOverflowException() ;

/// @brief Method ThrowCharOverflowException, addr 0x3ccd834, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowCharOverflowException() ;

/// @brief Method ThrowInt16OverflowException, addr 0x3ccd918, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt16OverflowException() ;

/// @brief Method ThrowInt32OverflowException, addr 0x3ccd9b0, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt32OverflowException() ;

/// @brief Method ThrowInt64OverflowException, addr 0x3ccda48, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt64OverflowException() ;

/// @brief Method ThrowSByteOverflowException, addr 0x3ccd8cc, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowSByteOverflowException() ;

/// @brief Method ThrowUInt16OverflowException, addr 0x3ccd964, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt16OverflowException() ;

/// @brief Method ThrowUInt32OverflowException, addr 0x3ccd9fc, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt32OverflowException() ;

/// @brief Method ThrowUInt64OverflowException, addr 0x3ccda94, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt64OverflowException() ;

/// @brief Method ToBase64CharArray, addr 0x3cd2eb0, size 0x88, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  outArray, int32_t  offsetOut) ;

/// @brief Method ToBase64CharArray, addr 0x3cd2f38, size 0x30c, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  outArray, int32_t  offsetOut, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x3cd2800, size 0x1b0, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t>  bytes, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x3cd274c, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray) ;

/// @brief Method ToBase64String, addr 0x3cd29b0, size 0x70, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method ToBase64String, addr 0x3cd2a20, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offset, int32_t  length, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x3cd2bbc, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t  inputLength, bool  insertLineBreaks) ;

/// @brief Method ToBoolean, addr 0x3ccdd2c, size 0x68, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBoolean, addr 0x3ccdd94, size 0x68, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x3ccde14, size 0x74, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Decimal  value) ;

/// @brief Method ToBoolean, addr 0x3ccdae0, size 0xf4, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToBoolean, addr 0x3ccdbd4, size 0x104, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x3ccde08, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(double_t  value) ;

/// @brief Method ToBoolean, addr 0x3ccddfc, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(float_t  value) ;

/// @brief Method ToBoolean, addr 0x3ccdce4, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int16_t  value) ;

/// @brief Method ToBoolean, addr 0x3ccdcfc, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int32_t  value) ;

/// @brief Method ToBoolean, addr 0x3ccdd14, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int64_t  value) ;

/// @brief Method ToBoolean, addr 0x3ccdcd8, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int8_t  value) ;

/// @brief Method ToBoolean, addr 0x3ccdcf0, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint16_t  value) ;

/// @brief Method ToBoolean, addr 0x3ccdd08, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint32_t  value) ;

/// @brief Method ToBoolean, addr 0x3ccdd20, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint64_t  value) ;

/// @brief Method ToBoolean, addr 0x3cc9784, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint8_t  value) ;

/// @brief Method ToByte, addr 0x3ccef64, size 0x74, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value) ;

/// @brief Method ToByte, addr 0x3cd1ebc, size 0x108, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToByte, addr 0x3ccefd8, size 0x14, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x3cceef0, size 0x74, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Decimal  value) ;

/// @brief Method ToByte, addr 0x3cce9d0, size 0xf4, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value) ;

/// @brief Method ToByte, addr 0x3cceac4, size 0x104, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x3cc7a74, size 0x8, virtual false, abstract: false, final false
static inline uint8_t ToByte(bool  value) ;

/// @brief Method ToByte, addr 0x3cca9b0, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(char16_t  value) ;

/// @brief Method ToByte, addr 0x3ccee90, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(double_t  value) ;

/// @brief Method ToByte, addr 0x3ccee34, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(float_t  value) ;

/// @brief Method ToByte, addr 0x3ccec1c, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(int16_t  value) ;

/// @brief Method ToByte, addr 0x3ccecd4, size 0x58, virtual false, abstract: false, final false
static inline uint8_t ToByte(int32_t  value) ;

/// @brief Method ToByte, addr 0x3cced84, size 0x58, virtual false, abstract: false, final false
static inline uint8_t ToByte(int64_t  value) ;

/// @brief Method ToByte, addr 0x3ccebc8, size 0x54, virtual false, abstract: false, final false
static inline uint8_t ToByte(int8_t  value) ;

/// @brief Method ToByte, addr 0x3ccec78, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint16_t  value) ;

/// @brief Method ToByte, addr 0x3cced2c, size 0x58, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint32_t  value) ;

/// @brief Method ToByte, addr 0x3cceddc, size 0x58, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint64_t  value) ;

/// @brief Method ToChar, addr 0x3cce28c, size 0x54, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value) ;

/// @brief Method ToChar, addr 0x3cce2e0, size 0x9c, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x3ccde88, size 0xf4, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value) ;

/// @brief Method ToChar, addr 0x3ccdf7c, size 0x104, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x3cce0d4, size 0x54, virtual false, abstract: false, final false
static inline char16_t ToChar(int16_t  value) ;

/// @brief Method ToChar, addr 0x3cce12c, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(int32_t  value) ;

/// @brief Method ToChar, addr 0x3cce1dc, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(int64_t  value) ;

/// @brief Method ToChar, addr 0x3cce080, size 0x54, virtual false, abstract: false, final false
static inline char16_t ToChar(int8_t  value) ;

/// @brief Method ToChar, addr 0x3cce128, size 0x4, virtual false, abstract: false, final false
static inline char16_t ToChar(uint16_t  value) ;

/// @brief Method ToChar, addr 0x3cce184, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(uint32_t  value) ;

/// @brief Method ToChar, addr 0x3cce234, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(uint64_t  value) ;

/// @brief Method ToChar, addr 0x3cc97e8, size 0x8, virtual false, abstract: false, final false
static inline char16_t ToChar(uint8_t  value) ;

/// @brief Method ToDateTime, addr 0x3cd1a84, size 0x90, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDateTime, addr 0x3cd1954, size 0x130, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x3cd18cc, size 0x88, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x3cd147c, size 0x128, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x3cc7e20, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(bool  value) ;

/// @brief Method ToDecimal, addr 0x3cd186c, size 0x60, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(double_t  value) ;

/// @brief Method ToDecimal, addr 0x3cd180c, size 0x60, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(float_t  value) ;

/// @brief Method ToDecimal, addr 0x3cd15fc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int16_t  value) ;

/// @brief Method ToDecimal, addr 0x3cd16ac, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int32_t  value) ;

/// @brief Method ToDecimal, addr 0x3cd175c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int64_t  value) ;

/// @brief Method ToDecimal, addr 0x3cd15a4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int8_t  value) ;

/// @brief Method ToDecimal, addr 0x3cd1654, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint16_t  value) ;

/// @brief Method ToDecimal, addr 0x3cd1704, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint32_t  value) ;

/// @brief Method ToDecimal, addr 0x3cd17b4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint64_t  value) ;

/// @brief Method ToDecimal, addr 0x3cc9c04, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint8_t  value) ;

/// @brief Method ToDouble, addr 0x3cd1460, size 0x1c, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x3cd13f8, size 0x68, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Decimal  value) ;

/// @brief Method ToDouble, addr 0x3cd11b4, size 0xf4, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0x3cd12a8, size 0x104, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x3cc7db0, size 0x14, virtual false, abstract: false, final false
static inline double_t ToDouble(bool  value) ;

/// @brief Method ToDouble, addr 0x3cd13f0, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(float_t  value) ;

/// @brief Method ToDouble, addr 0x3cd13b8, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int16_t  value) ;

/// @brief Method ToDouble, addr 0x3cd13d0, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int32_t  value) ;

/// @brief Method ToDouble, addr 0x3cd13e0, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int64_t  value) ;

/// @brief Method ToDouble, addr 0x3cd13ac, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int8_t  value) ;

/// @brief Method ToDouble, addr 0x3cd13c4, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint16_t  value) ;

/// @brief Method ToDouble, addr 0x3cd13d8, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint32_t  value) ;

/// @brief Method ToDouble, addr 0x3cd13e8, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint64_t  value) ;

/// @brief Method ToDouble, addr 0x3cc9ba0, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint8_t  value) ;

/// @brief Method ToInt16, addr 0x3cd20dc, size 0x118, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt16, addr 0x3ccf4d0, size 0x18, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x3ccf45c, size 0x74, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Decimal  value) ;

/// @brief Method ToInt16, addr 0x3ccefec, size 0xf4, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value) ;

/// @brief Method ToInt16, addr 0x3ccf0e0, size 0x104, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x3cc7ad8, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(bool  value) ;

/// @brief Method ToInt16, addr 0x3ccaa64, size 0x54, virtual false, abstract: false, final false
static inline int16_t ToInt16(char16_t  value) ;

/// @brief Method ToInt16, addr 0x3ccf3fc, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(double_t  value) ;

/// @brief Method ToInt16, addr 0x3ccf3a0, size 0x5c, virtual false, abstract: false, final false
static inline int16_t ToInt16(float_t  value) ;

/// @brief Method ToInt16, addr 0x3ccf240, size 0x58, virtual false, abstract: false, final false
static inline int16_t ToInt16(int32_t  value) ;

/// @brief Method ToInt16, addr 0x3ccf2f0, size 0x58, virtual false, abstract: false, final false
static inline int16_t ToInt16(int64_t  value) ;

/// @brief Method ToInt16, addr 0x3ccf1e4, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(int8_t  value) ;

/// @brief Method ToInt16, addr 0x3ccf1ec, size 0x54, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint16_t  value) ;

/// @brief Method ToInt16, addr 0x3ccf298, size 0x58, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint32_t  value) ;

/// @brief Method ToInt16, addr 0x3ccf348, size 0x58, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint64_t  value) ;

/// @brief Method ToInt16, addr 0x3cc98fc, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint8_t  value) ;

/// @brief Method ToInt32, addr 0x3ccfe0c, size 0x78, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32, addr 0x3cd22fc, size 0xd4, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt32, addr 0x3ccfe84, size 0x18, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x3ccfd98, size 0x74, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Decimal  value) ;

/// @brief Method ToInt32, addr 0x3ccfa30, size 0xf4, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x3ccfb24, size 0x104, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x3cc7ba0, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(bool  value) ;

/// @brief Method ToInt32, addr 0x3ccab6c, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(char16_t  value) ;

/// @brief Method ToInt32, addr 0x3cce84c, size 0x100, virtual false, abstract: false, final false
static inline int32_t ToInt32(double_t  value) ;

/// @brief Method ToInt32, addr 0x3ccfd3c, size 0x5c, virtual false, abstract: false, final false
static inline int32_t ToInt32(float_t  value) ;

/// @brief Method ToInt32, addr 0x3ccfc28, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(int16_t  value) ;

/// @brief Method ToInt32, addr 0x3ccfc8c, size 0x58, virtual false, abstract: false, final false
static inline int32_t ToInt32(int64_t  value) ;

/// @brief Method ToInt32, addr 0x3ccfc30, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint16_t  value) ;

/// @brief Method ToInt32, addr 0x3ccfc38, size 0x54, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint32_t  value) ;

/// @brief Method ToInt32, addr 0x3ccfce4, size 0x58, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint64_t  value) ;

/// @brief Method ToInt32, addr 0x3cc99bc, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint8_t  value) ;

/// @brief Method ToInt64, addr 0x3cd082c, size 0x78, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0x3cd24a4, size 0xd4, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt64, addr 0x3cd08a4, size 0x18, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x3cd07b8, size 0x74, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Decimal  value) ;

/// @brief Method ToInt64, addr 0x3cd03d8, size 0xf4, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x3cd04cc, size 0x104, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x3cc7c68, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(bool  value) ;

/// @brief Method ToInt64, addr 0x3ccac2c, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(char16_t  value) ;

/// @brief Method ToInt64, addr 0x3cd06a8, size 0x110, virtual false, abstract: false, final false
static inline int64_t ToInt64(double_t  value) ;

/// @brief Method ToInt64, addr 0x3cd064c, size 0x5c, virtual false, abstract: false, final false
static inline int64_t ToInt64(float_t  value) ;

/// @brief Method ToInt64, addr 0x3cd05d8, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int16_t  value) ;

/// @brief Method ToInt64, addr 0x3cd05e8, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int32_t  value) ;

/// @brief Method ToInt64, addr 0x3cd05d0, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int8_t  value) ;

/// @brief Method ToInt64, addr 0x3cd05e0, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint16_t  value) ;

/// @brief Method ToInt64, addr 0x3cd05f0, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint32_t  value) ;

/// @brief Method ToInt64, addr 0x3cd05f8, size 0x54, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint64_t  value) ;

/// @brief Method ToInt64, addr 0x3cc9a7c, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint8_t  value) ;

/// @brief Method ToSByte, addr 0x3cd1fc4, size 0x118, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToSByte, addr 0x3cce9c0, size 0x10, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x3cce94c, size 0x74, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Decimal  value) ;

/// @brief Method ToSByte, addr 0x3cce37c, size 0xf4, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value) ;

/// @brief Method ToSByte, addr 0x3cce470, size 0x104, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x3cc7a10, size 0x8, virtual false, abstract: false, final false
static inline int8_t ToSByte(bool  value) ;

/// @brief Method ToSByte, addr 0x3cca8fc, size 0x5c, virtual false, abstract: false, final false
static inline int8_t ToSByte(char16_t  value) ;

/// @brief Method ToSByte, addr 0x3cce7ec, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(double_t  value) ;

/// @brief Method ToSByte, addr 0x3cce790, size 0x5c, virtual false, abstract: false, final false
static inline int8_t ToSByte(float_t  value) ;

/// @brief Method ToSByte, addr 0x3cce574, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(int16_t  value) ;

/// @brief Method ToSByte, addr 0x3cce630, size 0x58, virtual false, abstract: false, final false
static inline int8_t ToSByte(int32_t  value) ;

/// @brief Method ToSByte, addr 0x3cce6e0, size 0x58, virtual false, abstract: false, final false
static inline int8_t ToSByte(int64_t  value) ;

/// @brief Method ToSByte, addr 0x3cce5d4, size 0x5c, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint16_t  value) ;

/// @brief Method ToSByte, addr 0x3cce688, size 0x58, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint32_t  value) ;

/// @brief Method ToSByte, addr 0x3cce738, size 0x58, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint64_t  value) ;

/// @brief Method ToSByte, addr 0x3cc9848, size 0x54, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint8_t  value) ;

/// @brief Method ToSingle, addr 0x3cd1120, size 0x78, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0x3cd1198, size 0x1c, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x3cd10b8, size 0x68, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Decimal  value) ;

/// @brief Method ToSingle, addr 0x3cd0e70, size 0xf4, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0x3cd0f64, size 0x104, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x3cc7d38, size 0x14, virtual false, abstract: false, final false
static inline float_t ToSingle(bool  value) ;

/// @brief Method ToSingle, addr 0x3cd10b0, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(double_t  value) ;

/// @brief Method ToSingle, addr 0x3cd1074, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int16_t  value) ;

/// @brief Method ToSingle, addr 0x3cd108c, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int32_t  value) ;

/// @brief Method ToSingle, addr 0x3cd109c, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int64_t  value) ;

/// @brief Method ToSingle, addr 0x3cd1068, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int8_t  value) ;

/// @brief Method ToSingle, addr 0x3cd1080, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint16_t  value) ;

/// @brief Method ToSingle, addr 0x3cd1094, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(uint32_t  value) ;

/// @brief Method ToSingle, addr 0x3cd10a4, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint64_t  value) ;

/// @brief Method ToSingle, addr 0x3cc9b3c, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint8_t  value) ;

/// @brief Method ToString, addr 0x3cd1b14, size 0x1a0, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x3cd1cb4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0x3cd1d10, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x3cd1e54, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value) ;

/// @brief Method ToString, addr 0x3cd1d68, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0x3cd1dd0, size 0x1c, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x3cd264c, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, int32_t  toBase) ;

/// @brief Method ToString, addr 0x3cd1dec, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value) ;

/// @brief Method ToString, addr 0x3cd26cc, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value, int32_t  toBase) ;

/// @brief Method ToUInt16, addr 0x3cd21f4, size 0x108, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt16, addr 0x3ccfa18, size 0x18, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x3ccf9a4, size 0x74, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Decimal  value) ;

/// @brief Method ToUInt16, addr 0x3ccf4e8, size 0xf4, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value) ;

/// @brief Method ToUInt16, addr 0x3ccf5dc, size 0x104, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x3cc7b3c, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(bool  value) ;

/// @brief Method ToUInt16, addr 0x3ccab10, size 0x4, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(char16_t  value) ;

/// @brief Method ToUInt16, addr 0x3ccf944, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(double_t  value) ;

/// @brief Method ToUInt16, addr 0x3ccf8e8, size 0x5c, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(float_t  value) ;

/// @brief Method ToUInt16, addr 0x3ccf734, size 0x54, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int16_t  value) ;

/// @brief Method ToUInt16, addr 0x3ccf788, size 0x58, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int32_t  value) ;

/// @brief Method ToUInt16, addr 0x3ccf838, size 0x58, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int64_t  value) ;

/// @brief Method ToUInt16, addr 0x3ccf6e0, size 0x54, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int8_t  value) ;

/// @brief Method ToUInt16, addr 0x3ccf7e0, size 0x58, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint32_t  value) ;

/// @brief Method ToUInt16, addr 0x3ccf890, size 0x58, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint64_t  value) ;

/// @brief Method ToUInt16, addr 0x3cc995c, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint8_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd23d0, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt32, addr 0x3cd03c0, size 0x18, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x3cd034c, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Decimal  value) ;

/// @brief Method ToUInt32, addr 0x3ccfe9c, size 0xf4, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value) ;

/// @brief Method ToUInt32, addr 0x3ccff90, size 0x104, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x3cc7c04, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(bool  value) ;

/// @brief Method ToUInt32, addr 0x3ccabcc, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(char16_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd02a4, size 0xa8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(double_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd0248, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(float_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd00e8, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int16_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd0144, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int32_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd0198, size 0x58, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int64_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd0094, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int8_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd013c, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint16_t  value) ;

/// @brief Method ToUInt32, addr 0x3cd01f0, size 0x58, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint64_t  value) ;

/// @brief Method ToUInt32, addr 0x3cc9a1c, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint8_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0de0, size 0x78, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value) ;

/// @brief Method ToUInt64, addr 0x3cd2578, size 0xd4, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt64, addr 0x3cd0e58, size 0x18, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x3cd0d6c, size 0x74, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Decimal  value) ;

/// @brief Method ToUInt64, addr 0x3cd08bc, size 0xf4, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value) ;

/// @brief Method ToUInt64, addr 0x3cd09b0, size 0x104, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x3cc7ccc, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(bool  value) ;

/// @brief Method ToUInt64, addr 0x3ccac8c, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(char16_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0c70, size 0xfc, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(double_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0c14, size 0x5c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(float_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0b08, size 0x54, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int16_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0b64, size 0x54, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int32_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0bc0, size 0x54, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int64_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0ab4, size 0x54, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int8_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0b5c, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint16_t  value) ;

/// @brief Method ToUInt64, addr 0x3cd0bb8, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint32_t  value) ;

/// @brief Method ToUInt64, addr 0x3cc9adc, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint8_t  value) ;

/// @brief Method TryDecodeFromUtf16, addr 0x3ccbd78, size 0x35c, virtual false, abstract: false, final false
static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t>  utf16, ::System::Span_1<uint8_t>  bytes, ByRef<int32_t>  consumed, ByRef<int32_t>  written) ;

/// @brief Method TryFromBase64Chars, addr 0x3cd3480, size 0x4d4, virtual false, abstract: false, final false
static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<uint8_t>  bytes, ByRef<int32_t>  bytesWritten) ;

/// @brief Method WriteThreeLowOrderBytes, addr 0x3ccc124, size 0x18, virtual false, abstract: false, final false
static inline void WriteThreeLowOrderBytes(ByRef<uint8_t>  destination, int32_t  value) ;

static inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> getStaticF_ConvertTypes() ;

static inline ::System::Object* getStaticF_DBNull() ;

static inline ::System::Type* getStaticF_EnumType() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_base64Table() ;

static inline ::ArrayW<int8_t,::Array<int8_t>*> getStaticF_s_decodingMap() ;

static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

static inline void setStaticF_DBNull(::System::Object*  value) ;

static inline void setStaticF_EnumType(::System::Type*  value) ;

static inline void setStaticF_base64Table(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_s_decodingMap(::ArrayW<int8_t,::Array<int8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Convert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Convert(Convert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Convert(Convert const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Convert, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Convert);
DEFINE_IL2CPP_ARG_TYPE(::System::Convert*, "System", "Convert");
