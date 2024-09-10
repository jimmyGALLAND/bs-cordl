#pragma once
// IWYU pragma private; include "System/UInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt32)
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class ISpanFormattable;
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
struct UInt32;
}
// Write type traits
MARK_VAL_T(::System::UInt32);
// Type: System::UInt32
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::UInt32
struct CORDL_TYPE UInt32 {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<uint32_t>"
constexpr operator  ::System::IComparable_1<uint32_t>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Convert operator to "::System::IEquatable_1<uint32_t>"
constexpr operator  ::System::IEquatable_1<uint32_t>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() ;

/// @brief Method CompareTo, addr 0x3d77664, size 0xcc, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method CompareTo, addr 0x3d77730, size 0x1c, virtual true, abstract: false, final true
inline int32_t CompareTo(uint32_t  value) ;

/// @brief Method Equals, addr 0x3d7774c, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x3d777c4, size 0x10, virtual true, abstract: false, final true
inline bool Equals(uint32_t  obj) ;

/// @brief Method GetHashCode, addr 0x3d777d4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeCode, addr 0x3d77f38, size 0x8, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method Parse, addr 0x3d77b20, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t Parse(::StringW  s) ;

/// @brief Method Parse, addr 0x3d77bd4, size 0xc4, virtual false, abstract: false, final false
static inline uint32_t Parse(::StringW  s, ::System::IFormatProvider*  provider) ;

/// @brief Method Parse, addr 0x3d77c98, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t Parse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToBoolean, addr 0x3d77f40, size 0x5c, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0x3d78054, size 0x5c, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0x3d77f9c, size 0x5c, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0x3d78398, size 0x84, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0x3d7833c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0x3d782e0, size 0x5c, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0x3d780b0, size 0x5c, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0x3d78168, size 0x5c, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0x3d781cc, size 0x5c, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0x3d77ff8, size 0x5c, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0x3d78284, size 0x5c, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0x3d7841c, size 0xac, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0x3d7810c, size 0x5c, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0x3d781c4, size 0x8, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0x3d78228, size 0x5c, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x3d777dc, size 0x98, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x3d77910, size 0xb4, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0x3d779c4, size 0xb8, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x3d77874, size 0x9c, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method TryFormat, addr 0x3d77a7c, size 0xa4, virtual true, abstract: false, final true
inline bool TryFormat(::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method TryParse, addr 0x3d77d6c, size 0xd4, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ByRef<uint32_t>  result) ;

/// @brief Method TryParse, addr 0x3d77e40, size 0xf8, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider, ByRef<uint32_t>  result) ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<uint32_t>"
constexpr ::System::IComparable_1<uint32_t>* i___System__IComparable_1_uint32_t_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Convert to "::System::IEquatable_1<uint32_t>"
constexpr ::System::IEquatable_1<uint32_t>* i___System__IEquatable_1_uint32_t_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* i___System__ISpanFormattable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UInt32() ;

// Ctor Parameters [CppParam { name: "m_value", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UInt32(uint32_t  m_value) noexcept;

/// @brief Field m_value, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_value;

/// @brief Field MaxValue offset 0xffffffff size 0x4
static constexpr uint32_t  MaxValue{static_cast<uint32_t>(0xffff00ffu)};

/// @brief Field MinValue offset 0xffffffff size 0x4
static constexpr uint32_t  MinValue{static_cast<uint32_t>(0xffffff00u)};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UInt32, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::UInt32, m_value) == 0x0, "Offset mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt32, "System", "UInt32");
