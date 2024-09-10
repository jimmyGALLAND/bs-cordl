#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/v128.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Burst/Intrinsics/zzzz__v64_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(v128)
namespace Unity::Burst::Intrinsics {
struct v64;
}
// Forward declare root types
namespace Unity::Burst::Intrinsics {
struct v128;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::Intrinsics::v128);
// Type: Unity.Burst.Intrinsics::v128
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::Intrinsics {
// Is value type: true
// CS Name: ::Unity.Burst.Intrinsics::v128
struct CORDL_TYPE v128 {
public:
// Declarations
/// @brief Field Byte0, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte0, put=__cordl_internal_set_Byte0)) uint8_t  Byte0;

/// @brief Field Byte1, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte1, put=__cordl_internal_set_Byte1)) uint8_t  Byte1;

/// @brief Field Byte10, offset 0xa, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte10, put=__cordl_internal_set_Byte10)) uint8_t  Byte10;

/// @brief Field Byte11, offset 0xb, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte11, put=__cordl_internal_set_Byte11)) uint8_t  Byte11;

/// @brief Field Byte12, offset 0xc, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte12, put=__cordl_internal_set_Byte12)) uint8_t  Byte12;

/// @brief Field Byte13, offset 0xd, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte13, put=__cordl_internal_set_Byte13)) uint8_t  Byte13;

/// @brief Field Byte14, offset 0xe, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte14, put=__cordl_internal_set_Byte14)) uint8_t  Byte14;

/// @brief Field Byte15, offset 0xf, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte15, put=__cordl_internal_set_Byte15)) uint8_t  Byte15;

/// @brief Field Byte2, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte2, put=__cordl_internal_set_Byte2)) uint8_t  Byte2;

/// @brief Field Byte3, offset 0x3, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte3, put=__cordl_internal_set_Byte3)) uint8_t  Byte3;

/// @brief Field Byte4, offset 0x4, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte4, put=__cordl_internal_set_Byte4)) uint8_t  Byte4;

/// @brief Field Byte5, offset 0x5, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte5, put=__cordl_internal_set_Byte5)) uint8_t  Byte5;

/// @brief Field Byte6, offset 0x6, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte6, put=__cordl_internal_set_Byte6)) uint8_t  Byte6;

/// @brief Field Byte7, offset 0x7, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte7, put=__cordl_internal_set_Byte7)) uint8_t  Byte7;

/// @brief Field Byte8, offset 0x8, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte8, put=__cordl_internal_set_Byte8)) uint8_t  Byte8;

/// @brief Field Byte9, offset 0x9, size 0x1 
 __declspec(property(get=__cordl_internal_get_Byte9, put=__cordl_internal_set_Byte9)) uint8_t  Byte9;

/// @brief Field Double0, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Double0, put=__cordl_internal_set_Double0)) double_t  Double0;

/// @brief Field Double1, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Double1, put=__cordl_internal_set_Double1)) double_t  Double1;

/// @brief Field Float0, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Float0, put=__cordl_internal_set_Float0)) float_t  Float0;

/// @brief Field Float1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Float1, put=__cordl_internal_set_Float1)) float_t  Float1;

/// @brief Field Float2, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Float2, put=__cordl_internal_set_Float2)) float_t  Float2;

/// @brief Field Float3, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_Float3, put=__cordl_internal_set_Float3)) float_t  Float3;

/// @brief Field Hi64, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hi64, put=__cordl_internal_set_Hi64)) ::Unity::Burst::Intrinsics::v64  Hi64;

/// @brief Field Lo64, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lo64, put=__cordl_internal_set_Lo64)) ::Unity::Burst::Intrinsics::v64  Lo64;

/// @brief Field SByte0, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte0, put=__cordl_internal_set_SByte0)) int8_t  SByte0;

/// @brief Field SByte1, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte1, put=__cordl_internal_set_SByte1)) int8_t  SByte1;

/// @brief Field SByte10, offset 0xa, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte10, put=__cordl_internal_set_SByte10)) int8_t  SByte10;

/// @brief Field SByte11, offset 0xb, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte11, put=__cordl_internal_set_SByte11)) int8_t  SByte11;

/// @brief Field SByte12, offset 0xc, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte12, put=__cordl_internal_set_SByte12)) int8_t  SByte12;

/// @brief Field SByte13, offset 0xd, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte13, put=__cordl_internal_set_SByte13)) int8_t  SByte13;

/// @brief Field SByte14, offset 0xe, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte14, put=__cordl_internal_set_SByte14)) int8_t  SByte14;

/// @brief Field SByte15, offset 0xf, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte15, put=__cordl_internal_set_SByte15)) int8_t  SByte15;

/// @brief Field SByte2, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte2, put=__cordl_internal_set_SByte2)) int8_t  SByte2;

/// @brief Field SByte3, offset 0x3, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte3, put=__cordl_internal_set_SByte3)) int8_t  SByte3;

/// @brief Field SByte4, offset 0x4, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte4, put=__cordl_internal_set_SByte4)) int8_t  SByte4;

/// @brief Field SByte5, offset 0x5, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte5, put=__cordl_internal_set_SByte5)) int8_t  SByte5;

/// @brief Field SByte6, offset 0x6, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte6, put=__cordl_internal_set_SByte6)) int8_t  SByte6;

/// @brief Field SByte7, offset 0x7, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte7, put=__cordl_internal_set_SByte7)) int8_t  SByte7;

/// @brief Field SByte8, offset 0x8, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte8, put=__cordl_internal_set_SByte8)) int8_t  SByte8;

/// @brief Field SByte9, offset 0x9, size 0x1 
 __declspec(property(get=__cordl_internal_get_SByte9, put=__cordl_internal_set_SByte9)) int8_t  SByte9;

/// @brief Field SInt0, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_SInt0, put=__cordl_internal_set_SInt0)) int32_t  SInt0;

/// @brief Field SInt1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_SInt1, put=__cordl_internal_set_SInt1)) int32_t  SInt1;

/// @brief Field SInt2, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_SInt2, put=__cordl_internal_set_SInt2)) int32_t  SInt2;

/// @brief Field SInt3, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_SInt3, put=__cordl_internal_set_SInt3)) int32_t  SInt3;

/// @brief Field SLong0, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_SLong0, put=__cordl_internal_set_SLong0)) int64_t  SLong0;

/// @brief Field SLong1, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_SLong1, put=__cordl_internal_set_SLong1)) int64_t  SLong1;

/// @brief Field SShort0, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_SShort0, put=__cordl_internal_set_SShort0)) int16_t  SShort0;

/// @brief Field SShort1, offset 0x2, size 0x2 
 __declspec(property(get=__cordl_internal_get_SShort1, put=__cordl_internal_set_SShort1)) int16_t  SShort1;

/// @brief Field SShort2, offset 0x4, size 0x2 
 __declspec(property(get=__cordl_internal_get_SShort2, put=__cordl_internal_set_SShort2)) int16_t  SShort2;

/// @brief Field SShort3, offset 0x6, size 0x2 
 __declspec(property(get=__cordl_internal_get_SShort3, put=__cordl_internal_set_SShort3)) int16_t  SShort3;

/// @brief Field SShort4, offset 0x8, size 0x2 
 __declspec(property(get=__cordl_internal_get_SShort4, put=__cordl_internal_set_SShort4)) int16_t  SShort4;

/// @brief Field SShort5, offset 0xa, size 0x2 
 __declspec(property(get=__cordl_internal_get_SShort5, put=__cordl_internal_set_SShort5)) int16_t  SShort5;

/// @brief Field SShort6, offset 0xc, size 0x2 
 __declspec(property(get=__cordl_internal_get_SShort6, put=__cordl_internal_set_SShort6)) int16_t  SShort6;

/// @brief Field SShort7, offset 0xe, size 0x2 
 __declspec(property(get=__cordl_internal_get_SShort7, put=__cordl_internal_set_SShort7)) int16_t  SShort7;

/// @brief Field UInt0, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_UInt0, put=__cordl_internal_set_UInt0)) uint32_t  UInt0;

/// @brief Field UInt1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_UInt1, put=__cordl_internal_set_UInt1)) uint32_t  UInt1;

/// @brief Field UInt2, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_UInt2, put=__cordl_internal_set_UInt2)) uint32_t  UInt2;

/// @brief Field UInt3, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_UInt3, put=__cordl_internal_set_UInt3)) uint32_t  UInt3;

/// @brief Field ULong0, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ULong0, put=__cordl_internal_set_ULong0)) uint64_t  ULong0;

/// @brief Field ULong1, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ULong1, put=__cordl_internal_set_ULong1)) uint64_t  ULong1;

/// @brief Field UShort0, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_UShort0, put=__cordl_internal_set_UShort0)) uint16_t  UShort0;

/// @brief Field UShort1, offset 0x2, size 0x2 
 __declspec(property(get=__cordl_internal_get_UShort1, put=__cordl_internal_set_UShort1)) uint16_t  UShort1;

/// @brief Field UShort2, offset 0x4, size 0x2 
 __declspec(property(get=__cordl_internal_get_UShort2, put=__cordl_internal_set_UShort2)) uint16_t  UShort2;

/// @brief Field UShort3, offset 0x6, size 0x2 
 __declspec(property(get=__cordl_internal_get_UShort3, put=__cordl_internal_set_UShort3)) uint16_t  UShort3;

/// @brief Field UShort4, offset 0x8, size 0x2 
 __declspec(property(get=__cordl_internal_get_UShort4, put=__cordl_internal_set_UShort4)) uint16_t  UShort4;

/// @brief Field UShort5, offset 0xa, size 0x2 
 __declspec(property(get=__cordl_internal_get_UShort5, put=__cordl_internal_set_UShort5)) uint16_t  UShort5;

/// @brief Field UShort6, offset 0xc, size 0x2 
 __declspec(property(get=__cordl_internal_get_UShort6, put=__cordl_internal_set_UShort6)) uint16_t  UShort6;

/// @brief Field UShort7, offset 0xe, size 0x2 
 __declspec(property(get=__cordl_internal_get_UShort7, put=__cordl_internal_set_UShort7)) uint16_t  UShort7;

constexpr uint8_t const& __cordl_internal_get_Byte0() const;

constexpr uint8_t& __cordl_internal_get_Byte0() ;

constexpr uint8_t const& __cordl_internal_get_Byte1() const;

constexpr uint8_t& __cordl_internal_get_Byte1() ;

constexpr uint8_t const& __cordl_internal_get_Byte10() const;

constexpr uint8_t& __cordl_internal_get_Byte10() ;

constexpr uint8_t const& __cordl_internal_get_Byte11() const;

constexpr uint8_t& __cordl_internal_get_Byte11() ;

constexpr uint8_t const& __cordl_internal_get_Byte12() const;

constexpr uint8_t& __cordl_internal_get_Byte12() ;

constexpr uint8_t const& __cordl_internal_get_Byte13() const;

constexpr uint8_t& __cordl_internal_get_Byte13() ;

constexpr uint8_t const& __cordl_internal_get_Byte14() const;

constexpr uint8_t& __cordl_internal_get_Byte14() ;

constexpr uint8_t const& __cordl_internal_get_Byte15() const;

constexpr uint8_t& __cordl_internal_get_Byte15() ;

constexpr uint8_t const& __cordl_internal_get_Byte2() const;

constexpr uint8_t& __cordl_internal_get_Byte2() ;

constexpr uint8_t const& __cordl_internal_get_Byte3() const;

constexpr uint8_t& __cordl_internal_get_Byte3() ;

constexpr uint8_t const& __cordl_internal_get_Byte4() const;

constexpr uint8_t& __cordl_internal_get_Byte4() ;

constexpr uint8_t const& __cordl_internal_get_Byte5() const;

constexpr uint8_t& __cordl_internal_get_Byte5() ;

constexpr uint8_t const& __cordl_internal_get_Byte6() const;

constexpr uint8_t& __cordl_internal_get_Byte6() ;

constexpr uint8_t const& __cordl_internal_get_Byte7() const;

constexpr uint8_t& __cordl_internal_get_Byte7() ;

constexpr uint8_t const& __cordl_internal_get_Byte8() const;

constexpr uint8_t& __cordl_internal_get_Byte8() ;

constexpr uint8_t const& __cordl_internal_get_Byte9() const;

constexpr uint8_t& __cordl_internal_get_Byte9() ;

constexpr double_t const& __cordl_internal_get_Double0() const;

constexpr double_t& __cordl_internal_get_Double0() ;

constexpr double_t const& __cordl_internal_get_Double1() const;

constexpr double_t& __cordl_internal_get_Double1() ;

constexpr float_t const& __cordl_internal_get_Float0() const;

constexpr float_t& __cordl_internal_get_Float0() ;

constexpr float_t const& __cordl_internal_get_Float1() const;

constexpr float_t& __cordl_internal_get_Float1() ;

constexpr float_t const& __cordl_internal_get_Float2() const;

constexpr float_t& __cordl_internal_get_Float2() ;

constexpr float_t const& __cordl_internal_get_Float3() const;

constexpr float_t& __cordl_internal_get_Float3() ;

constexpr ::Unity::Burst::Intrinsics::v64 const& __cordl_internal_get_Hi64() const;

constexpr ::Unity::Burst::Intrinsics::v64& __cordl_internal_get_Hi64() ;

constexpr ::Unity::Burst::Intrinsics::v64 const& __cordl_internal_get_Lo64() const;

constexpr ::Unity::Burst::Intrinsics::v64& __cordl_internal_get_Lo64() ;

constexpr int8_t const& __cordl_internal_get_SByte0() const;

constexpr int8_t& __cordl_internal_get_SByte0() ;

constexpr int8_t const& __cordl_internal_get_SByte1() const;

constexpr int8_t& __cordl_internal_get_SByte1() ;

constexpr int8_t const& __cordl_internal_get_SByte10() const;

constexpr int8_t& __cordl_internal_get_SByte10() ;

constexpr int8_t const& __cordl_internal_get_SByte11() const;

constexpr int8_t& __cordl_internal_get_SByte11() ;

constexpr int8_t const& __cordl_internal_get_SByte12() const;

constexpr int8_t& __cordl_internal_get_SByte12() ;

constexpr int8_t const& __cordl_internal_get_SByte13() const;

constexpr int8_t& __cordl_internal_get_SByte13() ;

constexpr int8_t const& __cordl_internal_get_SByte14() const;

constexpr int8_t& __cordl_internal_get_SByte14() ;

constexpr int8_t const& __cordl_internal_get_SByte15() const;

constexpr int8_t& __cordl_internal_get_SByte15() ;

constexpr int8_t const& __cordl_internal_get_SByte2() const;

constexpr int8_t& __cordl_internal_get_SByte2() ;

constexpr int8_t const& __cordl_internal_get_SByte3() const;

constexpr int8_t& __cordl_internal_get_SByte3() ;

constexpr int8_t const& __cordl_internal_get_SByte4() const;

constexpr int8_t& __cordl_internal_get_SByte4() ;

constexpr int8_t const& __cordl_internal_get_SByte5() const;

constexpr int8_t& __cordl_internal_get_SByte5() ;

constexpr int8_t const& __cordl_internal_get_SByte6() const;

constexpr int8_t& __cordl_internal_get_SByte6() ;

constexpr int8_t const& __cordl_internal_get_SByte7() const;

constexpr int8_t& __cordl_internal_get_SByte7() ;

constexpr int8_t const& __cordl_internal_get_SByte8() const;

constexpr int8_t& __cordl_internal_get_SByte8() ;

constexpr int8_t const& __cordl_internal_get_SByte9() const;

constexpr int8_t& __cordl_internal_get_SByte9() ;

constexpr int32_t const& __cordl_internal_get_SInt0() const;

constexpr int32_t& __cordl_internal_get_SInt0() ;

constexpr int32_t const& __cordl_internal_get_SInt1() const;

constexpr int32_t& __cordl_internal_get_SInt1() ;

constexpr int32_t const& __cordl_internal_get_SInt2() const;

constexpr int32_t& __cordl_internal_get_SInt2() ;

constexpr int32_t const& __cordl_internal_get_SInt3() const;

constexpr int32_t& __cordl_internal_get_SInt3() ;

constexpr int64_t const& __cordl_internal_get_SLong0() const;

constexpr int64_t& __cordl_internal_get_SLong0() ;

constexpr int64_t const& __cordl_internal_get_SLong1() const;

constexpr int64_t& __cordl_internal_get_SLong1() ;

constexpr int16_t const& __cordl_internal_get_SShort0() const;

constexpr int16_t& __cordl_internal_get_SShort0() ;

constexpr int16_t const& __cordl_internal_get_SShort1() const;

constexpr int16_t& __cordl_internal_get_SShort1() ;

constexpr int16_t const& __cordl_internal_get_SShort2() const;

constexpr int16_t& __cordl_internal_get_SShort2() ;

constexpr int16_t const& __cordl_internal_get_SShort3() const;

constexpr int16_t& __cordl_internal_get_SShort3() ;

constexpr int16_t const& __cordl_internal_get_SShort4() const;

constexpr int16_t& __cordl_internal_get_SShort4() ;

constexpr int16_t const& __cordl_internal_get_SShort5() const;

constexpr int16_t& __cordl_internal_get_SShort5() ;

constexpr int16_t const& __cordl_internal_get_SShort6() const;

constexpr int16_t& __cordl_internal_get_SShort6() ;

constexpr int16_t const& __cordl_internal_get_SShort7() const;

constexpr int16_t& __cordl_internal_get_SShort7() ;

constexpr uint32_t const& __cordl_internal_get_UInt0() const;

constexpr uint32_t& __cordl_internal_get_UInt0() ;

constexpr uint32_t const& __cordl_internal_get_UInt1() const;

constexpr uint32_t& __cordl_internal_get_UInt1() ;

constexpr uint32_t const& __cordl_internal_get_UInt2() const;

constexpr uint32_t& __cordl_internal_get_UInt2() ;

constexpr uint32_t const& __cordl_internal_get_UInt3() const;

constexpr uint32_t& __cordl_internal_get_UInt3() ;

constexpr uint64_t const& __cordl_internal_get_ULong0() const;

constexpr uint64_t& __cordl_internal_get_ULong0() ;

constexpr uint64_t const& __cordl_internal_get_ULong1() const;

constexpr uint64_t& __cordl_internal_get_ULong1() ;

constexpr uint16_t const& __cordl_internal_get_UShort0() const;

constexpr uint16_t& __cordl_internal_get_UShort0() ;

constexpr uint16_t const& __cordl_internal_get_UShort1() const;

constexpr uint16_t& __cordl_internal_get_UShort1() ;

constexpr uint16_t const& __cordl_internal_get_UShort2() const;

constexpr uint16_t& __cordl_internal_get_UShort2() ;

constexpr uint16_t const& __cordl_internal_get_UShort3() const;

constexpr uint16_t& __cordl_internal_get_UShort3() ;

constexpr uint16_t const& __cordl_internal_get_UShort4() const;

constexpr uint16_t& __cordl_internal_get_UShort4() ;

constexpr uint16_t const& __cordl_internal_get_UShort5() const;

constexpr uint16_t& __cordl_internal_get_UShort5() ;

constexpr uint16_t const& __cordl_internal_get_UShort6() const;

constexpr uint16_t& __cordl_internal_get_UShort6() ;

constexpr uint16_t const& __cordl_internal_get_UShort7() const;

constexpr uint16_t& __cordl_internal_get_UShort7() ;

constexpr void __cordl_internal_set_Byte0(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte1(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte10(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte11(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte12(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte13(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte14(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte15(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte2(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte3(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte4(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte5(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte6(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte7(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte8(uint8_t  value) ;

constexpr void __cordl_internal_set_Byte9(uint8_t  value) ;

constexpr void __cordl_internal_set_Double0(double_t  value) ;

constexpr void __cordl_internal_set_Double1(double_t  value) ;

constexpr void __cordl_internal_set_Float0(float_t  value) ;

constexpr void __cordl_internal_set_Float1(float_t  value) ;

constexpr void __cordl_internal_set_Float2(float_t  value) ;

constexpr void __cordl_internal_set_Float3(float_t  value) ;

constexpr void __cordl_internal_set_Hi64(::Unity::Burst::Intrinsics::v64  value) ;

constexpr void __cordl_internal_set_Lo64(::Unity::Burst::Intrinsics::v64  value) ;

constexpr void __cordl_internal_set_SByte0(int8_t  value) ;

constexpr void __cordl_internal_set_SByte1(int8_t  value) ;

constexpr void __cordl_internal_set_SByte10(int8_t  value) ;

constexpr void __cordl_internal_set_SByte11(int8_t  value) ;

constexpr void __cordl_internal_set_SByte12(int8_t  value) ;

constexpr void __cordl_internal_set_SByte13(int8_t  value) ;

constexpr void __cordl_internal_set_SByte14(int8_t  value) ;

constexpr void __cordl_internal_set_SByte15(int8_t  value) ;

constexpr void __cordl_internal_set_SByte2(int8_t  value) ;

constexpr void __cordl_internal_set_SByte3(int8_t  value) ;

constexpr void __cordl_internal_set_SByte4(int8_t  value) ;

constexpr void __cordl_internal_set_SByte5(int8_t  value) ;

constexpr void __cordl_internal_set_SByte6(int8_t  value) ;

constexpr void __cordl_internal_set_SByte7(int8_t  value) ;

constexpr void __cordl_internal_set_SByte8(int8_t  value) ;

constexpr void __cordl_internal_set_SByte9(int8_t  value) ;

constexpr void __cordl_internal_set_SInt0(int32_t  value) ;

constexpr void __cordl_internal_set_SInt1(int32_t  value) ;

constexpr void __cordl_internal_set_SInt2(int32_t  value) ;

constexpr void __cordl_internal_set_SInt3(int32_t  value) ;

constexpr void __cordl_internal_set_SLong0(int64_t  value) ;

constexpr void __cordl_internal_set_SLong1(int64_t  value) ;

constexpr void __cordl_internal_set_SShort0(int16_t  value) ;

constexpr void __cordl_internal_set_SShort1(int16_t  value) ;

constexpr void __cordl_internal_set_SShort2(int16_t  value) ;

constexpr void __cordl_internal_set_SShort3(int16_t  value) ;

constexpr void __cordl_internal_set_SShort4(int16_t  value) ;

constexpr void __cordl_internal_set_SShort5(int16_t  value) ;

constexpr void __cordl_internal_set_SShort6(int16_t  value) ;

constexpr void __cordl_internal_set_SShort7(int16_t  value) ;

constexpr void __cordl_internal_set_UInt0(uint32_t  value) ;

constexpr void __cordl_internal_set_UInt1(uint32_t  value) ;

constexpr void __cordl_internal_set_UInt2(uint32_t  value) ;

constexpr void __cordl_internal_set_UInt3(uint32_t  value) ;

constexpr void __cordl_internal_set_ULong0(uint64_t  value) ;

constexpr void __cordl_internal_set_ULong1(uint64_t  value) ;

constexpr void __cordl_internal_set_UShort0(uint16_t  value) ;

constexpr void __cordl_internal_set_UShort1(uint16_t  value) ;

constexpr void __cordl_internal_set_UShort2(uint16_t  value) ;

constexpr void __cordl_internal_set_UShort3(uint16_t  value) ;

constexpr void __cordl_internal_set_UShort4(uint16_t  value) ;

constexpr void __cordl_internal_set_UShort5(uint16_t  value) ;

constexpr void __cordl_internal_set_UShort6(uint16_t  value) ;

constexpr void __cordl_internal_set_UShort7(uint16_t  value) ;

/// @brief Method .ctor, addr 0x4497534, size 0x8, virtual false, abstract: false, final false
inline void _ctor(double_t  a, double_t  b) ;

/// @brief Method .ctor, addr 0x4497520, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  a, float_t  b, float_t  c, float_t  d) ;

/// @brief Method .ctor, addr 0x4497488, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int16_t  a, int16_t  b, int16_t  c, int16_t  d, int16_t  e, int16_t  f, int16_t  g, int16_t  h) ;

/// @brief Method .ctor, addr 0x44974f0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  a, int32_t  b, int32_t  c, int32_t  d) ;

/// @brief Method .ctor, addr 0x4497544, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  a, int64_t  b) ;

/// @brief Method .ctor, addr 0x4497414, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int8_t  a, int8_t  b, int8_t  c, int8_t  d, int8_t  e, int8_t  f, int8_t  g, int8_t  h, int8_t  i, int8_t  j, int8_t  k, int8_t  l, int8_t  m, int8_t  n, int8_t  o, int8_t  p) ;

/// @brief Method .ctor, addr 0x44974bc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(uint16_t  a, uint16_t  b, uint16_t  c, uint16_t  d, uint16_t  e, uint16_t  f, uint16_t  g, uint16_t  h) ;

/// @brief Method .ctor, addr 0x4497508, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  a, uint32_t  b, uint32_t  c, uint32_t  d) ;

/// @brief Method .ctor, addr 0x4497554, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  a, uint64_t  b) ;

/// @brief Method .ctor, addr 0x4497398, size 0x68, virtual false, abstract: false, final false
inline void _ctor(uint8_t  a, uint8_t  b, uint8_t  c, uint8_t  d, uint8_t  e, uint8_t  f, uint8_t  g, uint8_t  h, uint8_t  i, uint8_t  j, uint8_t  k, uint8_t  l, uint8_t  m, uint8_t  n, uint8_t  o, uint8_t  p) ;

/// @brief Method .ctor, addr 0x4497400, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int8_t  b) ;

/// @brief Method .ctor, addr 0x4497384, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint8_t  b) ;

/// @brief Method .ctor, addr 0x449752c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(double_t  f) ;

/// @brief Method .ctor, addr 0x4497514, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  f) ;

/// @brief Method .ctor, addr 0x449753c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  f) ;

/// @brief Method .ctor, addr 0x449754c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  f) ;

/// @brief Method .ctor, addr 0x449755c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Unity::Burst::Intrinsics::v64  lo, ::Unity::Burst::Intrinsics::v64  hi) ;

/// @brief Method .ctor, addr 0x449747c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int16_t  v) ;

/// @brief Method .ctor, addr 0x44974e4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  v) ;

/// @brief Method .ctor, addr 0x44974b0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint16_t  v) ;

/// @brief Method .ctor, addr 0x44974fc, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr v128() ;

// Ctor Parameters [CppParam { name: "Byte0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte4", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte8", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte9", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte10", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte11", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte12", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte13", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte14", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Byte15", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "SByte0", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte1", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte2", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte3", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte4", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte5", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte6", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte7", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte8", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte9", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte10", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte11", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte12", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte13", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte14", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "SByte15", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "UShort0", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort2", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort3", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort4", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort5", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort6", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "UShort7", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "SShort0", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort1", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort2", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort3", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort4", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort5", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort6", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "SShort7", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "UInt0", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "UInt3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "SInt0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SInt1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SInt2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SInt3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ULong0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ULong1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "SLong0", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "SLong1", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Float0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Float1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Float2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Float3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Double0", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Double1", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Lo64", ty: "::Unity::Burst::Intrinsics::v64", modifiers: "", def_value: None }, CppParam { name: "Hi64", ty: "::Unity::Burst::Intrinsics::v64", modifiers: "", def_value: None }]
constexpr v128(uint8_t  Byte0, uint8_t  Byte1, uint8_t  Byte2, uint8_t  Byte3, uint8_t  Byte4, uint8_t  Byte5, uint8_t  Byte6, uint8_t  Byte7, uint8_t  Byte8, uint8_t  Byte9, uint8_t  Byte10, uint8_t  Byte11, uint8_t  Byte12, uint8_t  Byte13, uint8_t  Byte14, uint8_t  Byte15, int8_t  SByte0, int8_t  SByte1, int8_t  SByte2, int8_t  SByte3, int8_t  SByte4, int8_t  SByte5, int8_t  SByte6, int8_t  SByte7, int8_t  SByte8, int8_t  SByte9, int8_t  SByte10, int8_t  SByte11, int8_t  SByte12, int8_t  SByte13, int8_t  SByte14, int8_t  SByte15, uint16_t  UShort0, uint16_t  UShort1, uint16_t  UShort2, uint16_t  UShort3, uint16_t  UShort4, uint16_t  UShort5, uint16_t  UShort6, uint16_t  UShort7, int16_t  SShort0, int16_t  SShort1, int16_t  SShort2, int16_t  SShort3, int16_t  SShort4, int16_t  SShort5, int16_t  SShort6, int16_t  SShort7, uint32_t  UInt0, uint32_t  UInt1, uint32_t  UInt2, uint32_t  UInt3, int32_t  SInt0, int32_t  SInt1, int32_t  SInt2, int32_t  SInt3, uint64_t  ULong0, uint64_t  ULong1, int64_t  SLong0, int64_t  SLong1, float_t  Float0, float_t  Float1, float_t  Float2, float_t  Float3, double_t  Double0, double_t  Double1, ::Unity::Burst::Intrinsics::v64  Lo64, ::Unity::Burst::Intrinsics::v64  Hi64) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Byte0_padding[0x0];
/// @brief Field Byte0, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___Byte0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Byte0_padding_forAlignment[0x0];
/// @brief Field Byte0, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___Byte0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___Byte1_padding[0x1];
/// @brief Field Byte1, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Byte1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___Byte1_padding_forAlignment[0x1];
/// @brief Field Byte1, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Byte1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___Byte2_padding[0x2];
/// @brief Field Byte2, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___Byte2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___Byte2_padding_forAlignment[0x2];
/// @brief Field Byte2, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___Byte2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3
 uint8_t  ___Byte3_padding[0x3];
/// @brief Field Byte3, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___Byte3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3 for alignment
 uint8_t  ___Byte3_padding_forAlignment[0x3];
/// @brief Field Byte3, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___Byte3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Byte4_padding[0x4];
/// @brief Field Byte4, offset: 0x4, size: 0x1, def value: None
 uint8_t  ___Byte4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Byte4_padding_forAlignment[0x4];
/// @brief Field Byte4, offset: 0x4, size: 0x1, def value: None
 uint8_t  ___Byte4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x5
 uint8_t  ___Byte5_padding[0x5];
/// @brief Field Byte5, offset: 0x5, size: 0x1, def value: None
 uint8_t  ___Byte5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x5 for alignment
 uint8_t  ___Byte5_padding_forAlignment[0x5];
/// @brief Field Byte5, offset: 0x5, size: 0x1, def value: None
 uint8_t  ___Byte5_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___Byte6_padding[0x6];
/// @brief Field Byte6, offset: 0x6, size: 0x1, def value: None
 uint8_t  ___Byte6;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___Byte6_padding_forAlignment[0x6];
/// @brief Field Byte6, offset: 0x6, size: 0x1, def value: None
 uint8_t  ___Byte6_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x7
 uint8_t  ___Byte7_padding[0x7];
/// @brief Field Byte7, offset: 0x7, size: 0x1, def value: None
 uint8_t  ___Byte7;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x7 for alignment
 uint8_t  ___Byte7_padding_forAlignment[0x7];
/// @brief Field Byte7, offset: 0x7, size: 0x1, def value: None
 uint8_t  ___Byte7_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Byte8_padding[0x8];
/// @brief Field Byte8, offset: 0x8, size: 0x1, def value: None
 uint8_t  ___Byte8;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Byte8_padding_forAlignment[0x8];
/// @brief Field Byte8, offset: 0x8, size: 0x1, def value: None
 uint8_t  ___Byte8_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x9
 uint8_t  ___Byte9_padding[0x9];
/// @brief Field Byte9, offset: 0x9, size: 0x1, def value: None
 uint8_t  ___Byte9;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x9 for alignment
 uint8_t  ___Byte9_padding_forAlignment[0x9];
/// @brief Field Byte9, offset: 0x9, size: 0x1, def value: None
 uint8_t  ___Byte9_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa
 uint8_t  ___Byte10_padding[0xa];
/// @brief Field Byte10, offset: 0xa, size: 0x1, def value: None
 uint8_t  ___Byte10;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa for alignment
 uint8_t  ___Byte10_padding_forAlignment[0xa];
/// @brief Field Byte10, offset: 0xa, size: 0x1, def value: None
 uint8_t  ___Byte10_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xb
 uint8_t  ___Byte11_padding[0xb];
/// @brief Field Byte11, offset: 0xb, size: 0x1, def value: None
 uint8_t  ___Byte11;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xb for alignment
 uint8_t  ___Byte11_padding_forAlignment[0xb];
/// @brief Field Byte11, offset: 0xb, size: 0x1, def value: None
 uint8_t  ___Byte11_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___Byte12_padding[0xc];
/// @brief Field Byte12, offset: 0xc, size: 0x1, def value: None
 uint8_t  ___Byte12;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___Byte12_padding_forAlignment[0xc];
/// @brief Field Byte12, offset: 0xc, size: 0x1, def value: None
 uint8_t  ___Byte12_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xd
 uint8_t  ___Byte13_padding[0xd];
/// @brief Field Byte13, offset: 0xd, size: 0x1, def value: None
 uint8_t  ___Byte13;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xd for alignment
 uint8_t  ___Byte13_padding_forAlignment[0xd];
/// @brief Field Byte13, offset: 0xd, size: 0x1, def value: None
 uint8_t  ___Byte13_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xe
 uint8_t  ___Byte14_padding[0xe];
/// @brief Field Byte14, offset: 0xe, size: 0x1, def value: None
 uint8_t  ___Byte14;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xe for alignment
 uint8_t  ___Byte14_padding_forAlignment[0xe];
/// @brief Field Byte14, offset: 0xe, size: 0x1, def value: None
 uint8_t  ___Byte14_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xf
 uint8_t  ___Byte15_padding[0xf];
/// @brief Field Byte15, offset: 0xf, size: 0x1, def value: None
 uint8_t  ___Byte15;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xf for alignment
 uint8_t  ___Byte15_padding_forAlignment[0xf];
/// @brief Field Byte15, offset: 0xf, size: 0x1, def value: None
 uint8_t  ___Byte15_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___SByte0_padding[0x0];
/// @brief Field SByte0, offset: 0x0, size: 0x1, def value: None
 int8_t  ___SByte0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___SByte0_padding_forAlignment[0x0];
/// @brief Field SByte0, offset: 0x0, size: 0x1, def value: None
 int8_t  ___SByte0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___SByte1_padding[0x1];
/// @brief Field SByte1, offset: 0x1, size: 0x1, def value: None
 int8_t  ___SByte1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___SByte1_padding_forAlignment[0x1];
/// @brief Field SByte1, offset: 0x1, size: 0x1, def value: None
 int8_t  ___SByte1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___SByte2_padding[0x2];
/// @brief Field SByte2, offset: 0x2, size: 0x1, def value: None
 int8_t  ___SByte2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___SByte2_padding_forAlignment[0x2];
/// @brief Field SByte2, offset: 0x2, size: 0x1, def value: None
 int8_t  ___SByte2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3
 uint8_t  ___SByte3_padding[0x3];
/// @brief Field SByte3, offset: 0x3, size: 0x1, def value: None
 int8_t  ___SByte3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3 for alignment
 uint8_t  ___SByte3_padding_forAlignment[0x3];
/// @brief Field SByte3, offset: 0x3, size: 0x1, def value: None
 int8_t  ___SByte3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___SByte4_padding[0x4];
/// @brief Field SByte4, offset: 0x4, size: 0x1, def value: None
 int8_t  ___SByte4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___SByte4_padding_forAlignment[0x4];
/// @brief Field SByte4, offset: 0x4, size: 0x1, def value: None
 int8_t  ___SByte4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x5
 uint8_t  ___SByte5_padding[0x5];
/// @brief Field SByte5, offset: 0x5, size: 0x1, def value: None
 int8_t  ___SByte5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x5 for alignment
 uint8_t  ___SByte5_padding_forAlignment[0x5];
/// @brief Field SByte5, offset: 0x5, size: 0x1, def value: None
 int8_t  ___SByte5_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___SByte6_padding[0x6];
/// @brief Field SByte6, offset: 0x6, size: 0x1, def value: None
 int8_t  ___SByte6;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___SByte6_padding_forAlignment[0x6];
/// @brief Field SByte6, offset: 0x6, size: 0x1, def value: None
 int8_t  ___SByte6_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x7
 uint8_t  ___SByte7_padding[0x7];
/// @brief Field SByte7, offset: 0x7, size: 0x1, def value: None
 int8_t  ___SByte7;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x7 for alignment
 uint8_t  ___SByte7_padding_forAlignment[0x7];
/// @brief Field SByte7, offset: 0x7, size: 0x1, def value: None
 int8_t  ___SByte7_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___SByte8_padding[0x8];
/// @brief Field SByte8, offset: 0x8, size: 0x1, def value: None
 int8_t  ___SByte8;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___SByte8_padding_forAlignment[0x8];
/// @brief Field SByte8, offset: 0x8, size: 0x1, def value: None
 int8_t  ___SByte8_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x9
 uint8_t  ___SByte9_padding[0x9];
/// @brief Field SByte9, offset: 0x9, size: 0x1, def value: None
 int8_t  ___SByte9;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x9 for alignment
 uint8_t  ___SByte9_padding_forAlignment[0x9];
/// @brief Field SByte9, offset: 0x9, size: 0x1, def value: None
 int8_t  ___SByte9_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa
 uint8_t  ___SByte10_padding[0xa];
/// @brief Field SByte10, offset: 0xa, size: 0x1, def value: None
 int8_t  ___SByte10;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa for alignment
 uint8_t  ___SByte10_padding_forAlignment[0xa];
/// @brief Field SByte10, offset: 0xa, size: 0x1, def value: None
 int8_t  ___SByte10_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xb
 uint8_t  ___SByte11_padding[0xb];
/// @brief Field SByte11, offset: 0xb, size: 0x1, def value: None
 int8_t  ___SByte11;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xb for alignment
 uint8_t  ___SByte11_padding_forAlignment[0xb];
/// @brief Field SByte11, offset: 0xb, size: 0x1, def value: None
 int8_t  ___SByte11_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___SByte12_padding[0xc];
/// @brief Field SByte12, offset: 0xc, size: 0x1, def value: None
 int8_t  ___SByte12;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___SByte12_padding_forAlignment[0xc];
/// @brief Field SByte12, offset: 0xc, size: 0x1, def value: None
 int8_t  ___SByte12_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xd
 uint8_t  ___SByte13_padding[0xd];
/// @brief Field SByte13, offset: 0xd, size: 0x1, def value: None
 int8_t  ___SByte13;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xd for alignment
 uint8_t  ___SByte13_padding_forAlignment[0xd];
/// @brief Field SByte13, offset: 0xd, size: 0x1, def value: None
 int8_t  ___SByte13_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xe
 uint8_t  ___SByte14_padding[0xe];
/// @brief Field SByte14, offset: 0xe, size: 0x1, def value: None
 int8_t  ___SByte14;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xe for alignment
 uint8_t  ___SByte14_padding_forAlignment[0xe];
/// @brief Field SByte14, offset: 0xe, size: 0x1, def value: None
 int8_t  ___SByte14_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xf
 uint8_t  ___SByte15_padding[0xf];
/// @brief Field SByte15, offset: 0xf, size: 0x1, def value: None
 int8_t  ___SByte15;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xf for alignment
 uint8_t  ___SByte15_padding_forAlignment[0xf];
/// @brief Field SByte15, offset: 0xf, size: 0x1, def value: None
 int8_t  ___SByte15_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___UShort0_padding[0x0];
/// @brief Field UShort0, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___UShort0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___UShort0_padding_forAlignment[0x0];
/// @brief Field UShort0, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___UShort0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___UShort1_padding[0x2];
/// @brief Field UShort1, offset: 0x2, size: 0x2, def value: None
 uint16_t  ___UShort1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___UShort1_padding_forAlignment[0x2];
/// @brief Field UShort1, offset: 0x2, size: 0x2, def value: None
 uint16_t  ___UShort1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___UShort2_padding[0x4];
/// @brief Field UShort2, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___UShort2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___UShort2_padding_forAlignment[0x4];
/// @brief Field UShort2, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___UShort2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___UShort3_padding[0x6];
/// @brief Field UShort3, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___UShort3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___UShort3_padding_forAlignment[0x6];
/// @brief Field UShort3, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___UShort3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___UShort4_padding[0x8];
/// @brief Field UShort4, offset: 0x8, size: 0x2, def value: None
 uint16_t  ___UShort4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___UShort4_padding_forAlignment[0x8];
/// @brief Field UShort4, offset: 0x8, size: 0x2, def value: None
 uint16_t  ___UShort4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa
 uint8_t  ___UShort5_padding[0xa];
/// @brief Field UShort5, offset: 0xa, size: 0x2, def value: None
 uint16_t  ___UShort5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa for alignment
 uint8_t  ___UShort5_padding_forAlignment[0xa];
/// @brief Field UShort5, offset: 0xa, size: 0x2, def value: None
 uint16_t  ___UShort5_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___UShort6_padding[0xc];
/// @brief Field UShort6, offset: 0xc, size: 0x2, def value: None
 uint16_t  ___UShort6;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___UShort6_padding_forAlignment[0xc];
/// @brief Field UShort6, offset: 0xc, size: 0x2, def value: None
 uint16_t  ___UShort6_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xe
 uint8_t  ___UShort7_padding[0xe];
/// @brief Field UShort7, offset: 0xe, size: 0x2, def value: None
 uint16_t  ___UShort7;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xe for alignment
 uint8_t  ___UShort7_padding_forAlignment[0xe];
/// @brief Field UShort7, offset: 0xe, size: 0x2, def value: None
 uint16_t  ___UShort7_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___SShort0_padding[0x0];
/// @brief Field SShort0, offset: 0x0, size: 0x2, def value: None
 int16_t  ___SShort0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___SShort0_padding_forAlignment[0x0];
/// @brief Field SShort0, offset: 0x0, size: 0x2, def value: None
 int16_t  ___SShort0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___SShort1_padding[0x2];
/// @brief Field SShort1, offset: 0x2, size: 0x2, def value: None
 int16_t  ___SShort1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___SShort1_padding_forAlignment[0x2];
/// @brief Field SShort1, offset: 0x2, size: 0x2, def value: None
 int16_t  ___SShort1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___SShort2_padding[0x4];
/// @brief Field SShort2, offset: 0x4, size: 0x2, def value: None
 int16_t  ___SShort2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___SShort2_padding_forAlignment[0x4];
/// @brief Field SShort2, offset: 0x4, size: 0x2, def value: None
 int16_t  ___SShort2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___SShort3_padding[0x6];
/// @brief Field SShort3, offset: 0x6, size: 0x2, def value: None
 int16_t  ___SShort3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___SShort3_padding_forAlignment[0x6];
/// @brief Field SShort3, offset: 0x6, size: 0x2, def value: None
 int16_t  ___SShort3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___SShort4_padding[0x8];
/// @brief Field SShort4, offset: 0x8, size: 0x2, def value: None
 int16_t  ___SShort4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___SShort4_padding_forAlignment[0x8];
/// @brief Field SShort4, offset: 0x8, size: 0x2, def value: None
 int16_t  ___SShort4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa
 uint8_t  ___SShort5_padding[0xa];
/// @brief Field SShort5, offset: 0xa, size: 0x2, def value: None
 int16_t  ___SShort5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa for alignment
 uint8_t  ___SShort5_padding_forAlignment[0xa];
/// @brief Field SShort5, offset: 0xa, size: 0x2, def value: None
 int16_t  ___SShort5_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___SShort6_padding[0xc];
/// @brief Field SShort6, offset: 0xc, size: 0x2, def value: None
 int16_t  ___SShort6;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___SShort6_padding_forAlignment[0xc];
/// @brief Field SShort6, offset: 0xc, size: 0x2, def value: None
 int16_t  ___SShort6_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xe
 uint8_t  ___SShort7_padding[0xe];
/// @brief Field SShort7, offset: 0xe, size: 0x2, def value: None
 int16_t  ___SShort7;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xe for alignment
 uint8_t  ___SShort7_padding_forAlignment[0xe];
/// @brief Field SShort7, offset: 0xe, size: 0x2, def value: None
 int16_t  ___SShort7_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___UInt0_padding[0x0];
/// @brief Field UInt0, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___UInt0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___UInt0_padding_forAlignment[0x0];
/// @brief Field UInt0, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___UInt0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___UInt1_padding[0x4];
/// @brief Field UInt1, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___UInt1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___UInt1_padding_forAlignment[0x4];
/// @brief Field UInt1, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___UInt1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___UInt2_padding[0x8];
/// @brief Field UInt2, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___UInt2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___UInt2_padding_forAlignment[0x8];
/// @brief Field UInt2, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___UInt2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___UInt3_padding[0xc];
/// @brief Field UInt3, offset: 0xc, size: 0x4, def value: None
 uint32_t  ___UInt3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___UInt3_padding_forAlignment[0xc];
/// @brief Field UInt3, offset: 0xc, size: 0x4, def value: None
 uint32_t  ___UInt3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___SInt0_padding[0x0];
/// @brief Field SInt0, offset: 0x0, size: 0x4, def value: None
 int32_t  ___SInt0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___SInt0_padding_forAlignment[0x0];
/// @brief Field SInt0, offset: 0x0, size: 0x4, def value: None
 int32_t  ___SInt0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___SInt1_padding[0x4];
/// @brief Field SInt1, offset: 0x4, size: 0x4, def value: None
 int32_t  ___SInt1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___SInt1_padding_forAlignment[0x4];
/// @brief Field SInt1, offset: 0x4, size: 0x4, def value: None
 int32_t  ___SInt1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___SInt2_padding[0x8];
/// @brief Field SInt2, offset: 0x8, size: 0x4, def value: None
 int32_t  ___SInt2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___SInt2_padding_forAlignment[0x8];
/// @brief Field SInt2, offset: 0x8, size: 0x4, def value: None
 int32_t  ___SInt2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___SInt3_padding[0xc];
/// @brief Field SInt3, offset: 0xc, size: 0x4, def value: None
 int32_t  ___SInt3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___SInt3_padding_forAlignment[0xc];
/// @brief Field SInt3, offset: 0xc, size: 0x4, def value: None
 int32_t  ___SInt3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___ULong0_padding[0x0];
/// @brief Field ULong0, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___ULong0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___ULong0_padding_forAlignment[0x0];
/// @brief Field ULong0, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___ULong0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ULong1_padding[0x8];
/// @brief Field ULong1, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ULong1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ULong1_padding_forAlignment[0x8];
/// @brief Field ULong1, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ULong1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___SLong0_padding[0x0];
/// @brief Field SLong0, offset: 0x0, size: 0x8, def value: None
 int64_t  ___SLong0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___SLong0_padding_forAlignment[0x0];
/// @brief Field SLong0, offset: 0x0, size: 0x8, def value: None
 int64_t  ___SLong0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___SLong1_padding[0x8];
/// @brief Field SLong1, offset: 0x8, size: 0x8, def value: None
 int64_t  ___SLong1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___SLong1_padding_forAlignment[0x8];
/// @brief Field SLong1, offset: 0x8, size: 0x8, def value: None
 int64_t  ___SLong1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Float0_padding[0x0];
/// @brief Field Float0, offset: 0x0, size: 0x4, def value: None
 float_t  ___Float0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Float0_padding_forAlignment[0x0];
/// @brief Field Float0, offset: 0x0, size: 0x4, def value: None
 float_t  ___Float0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Float1_padding[0x4];
/// @brief Field Float1, offset: 0x4, size: 0x4, def value: None
 float_t  ___Float1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Float1_padding_forAlignment[0x4];
/// @brief Field Float1, offset: 0x4, size: 0x4, def value: None
 float_t  ___Float1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Float2_padding[0x8];
/// @brief Field Float2, offset: 0x8, size: 0x4, def value: None
 float_t  ___Float2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Float2_padding_forAlignment[0x8];
/// @brief Field Float2, offset: 0x8, size: 0x4, def value: None
 float_t  ___Float2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___Float3_padding[0xc];
/// @brief Field Float3, offset: 0xc, size: 0x4, def value: None
 float_t  ___Float3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___Float3_padding_forAlignment[0xc];
/// @brief Field Float3, offset: 0xc, size: 0x4, def value: None
 float_t  ___Float3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Double0_padding[0x0];
/// @brief Field Double0, offset: 0x0, size: 0x8, def value: None
 double_t  ___Double0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Double0_padding_forAlignment[0x0];
/// @brief Field Double0, offset: 0x0, size: 0x8, def value: None
 double_t  ___Double0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Double1_padding[0x8];
/// @brief Field Double1, offset: 0x8, size: 0x8, def value: None
 double_t  ___Double1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Double1_padding_forAlignment[0x8];
/// @brief Field Double1, offset: 0x8, size: 0x8, def value: None
 double_t  ___Double1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Lo64_padding[0x0];
/// @brief Field Lo64, offset: 0x0, size: 0x8, def value: None
 ::Unity::Burst::Intrinsics::v64  ___Lo64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Lo64_padding_forAlignment[0x0];
/// @brief Field Lo64, offset: 0x0, size: 0x8, def value: None
 ::Unity::Burst::Intrinsics::v64  ___Lo64_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Hi64_padding[0x8];
/// @brief Field Hi64, offset: 0x8, size: 0x8, def value: None
 ::Unity::Burst::Intrinsics::v64  ___Hi64;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Hi64_padding_forAlignment[0x8];
/// @brief Field Hi64, offset: 0x8, size: 0x8, def value: None
 ::Unity::Burst::Intrinsics::v64  ___Hi64_forAlignment;
};
};
public:

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::Intrinsics::v128, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::Intrinsics::v128, "Unity.Burst.Intrinsics", "v128");
