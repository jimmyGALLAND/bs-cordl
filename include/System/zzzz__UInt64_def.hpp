#pragma once
// IWYU pragma private; include "System/UInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt64)
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
struct UInt64;
}
// Write type traits
MARK_VAL_T(::System::UInt64);
// Type: System::UInt64
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::UInt64
struct CORDL_TYPE UInt64 {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<uint64_t>"
constexpr operator  ::System::IComparable_1<uint64_t>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Convert operator to "::System::IEquatable_1<uint64_t>"
constexpr operator  ::System::IEquatable_1<uint64_t>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() ;

/// @brief Method CompareTo, addr 0x3d784c8, size 0xcc, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method CompareTo, addr 0x3d78594, size 0x1c, virtual true, abstract: false, final true
inline int32_t CompareTo(uint64_t  value) ;

/// @brief Method Equals, addr 0x3d785b0, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x3d78628, size 0x10, virtual true, abstract: false, final true
inline bool Equals(uint64_t  obj) ;

/// @brief Method GetHashCode, addr 0x3d78638, size 0xc, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeCode, addr 0x3d78e6c, size 0x8, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method Parse, addr 0x3d78988, size 0xb4, virtual false, abstract: false, final false
static inline uint64_t Parse(::StringW  s) ;

/// @brief Method Parse, addr 0x3d78b08, size 0xc4, virtual false, abstract: false, final false
static inline uint64_t Parse(::StringW  s, ::System::IFormatProvider*  provider) ;

/// @brief Method Parse, addr 0x3d78a3c, size 0xcc, virtual false, abstract: false, final false
static inline uint64_t Parse(::StringW  s, ::System::Globalization::NumberStyles  style) ;

/// @brief Method Parse, addr 0x3d78bcc, size 0xd4, virtual false, abstract: false, final false
static inline uint64_t Parse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToBoolean, addr 0x3d78e74, size 0x5c, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0x3d78f88, size 0x5c, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0x3d78ed0, size 0x5c, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0x3d792cc, size 0x84, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0x3d79270, size 0x5c, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0x3d79214, size 0x5c, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0x3d78fe4, size 0x5c, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0x3d7909c, size 0x5c, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0x3d79154, size 0x5c, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0x3d78f2c, size 0x5c, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0x3d791b8, size 0x5c, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0x3d79350, size 0xac, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0x3d79040, size 0x5c, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0x3d790f8, size 0x5c, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0x3d791b0, size 0x8, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x3d78644, size 0x98, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x3d78778, size 0xb4, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0x3d7882c, size 0xb8, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x3d786dc, size 0x9c, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method TryFormat, addr 0x3d788e4, size 0xa4, virtual true, abstract: false, final true
inline bool TryFormat(::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method TryParse, addr 0x3d78ca0, size 0xd4, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ByRef<uint64_t>  result) ;

/// @brief Method TryParse, addr 0x3d78d74, size 0xf8, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider, ByRef<uint64_t>  result) ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<uint64_t>"
constexpr ::System::IComparable_1<uint64_t>* i___System__IComparable_1_uint64_t_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Convert to "::System::IEquatable_1<uint64_t>"
constexpr ::System::IEquatable_1<uint64_t>* i___System__IEquatable_1_uint64_t_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* i___System__ISpanFormattable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UInt64() ;

// Ctor Parameters [CppParam { name: "m_value", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr UInt64(uint64_t  m_value) noexcept;

/// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_value;

/// @brief Field MaxValue offset 0xffffffff size 0x8
static constexpr uint64_t  MaxValue{static_cast<uint64_t>(0xffffffffffffffffu)};

/// @brief Field MinValue offset 0xffffffff size 0x8
static constexpr uint64_t  MinValue{static_cast<uint64_t>(0x0u)};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UInt64, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::UInt64, m_value) == 0x0, "Offset mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt64, "System", "UInt64");
