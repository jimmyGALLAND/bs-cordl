#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int64)
namespace System {
struct TypeCode;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IComparable;
}
namespace System {
class IFormattable;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class ISpanFormattable;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System {
class IConvertible;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System {
struct Int64;
}
// Write type traits
MARK_VAL_T(::System::Int64);
// Type: System::Int64
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2425))
// CS Name: ::System::Int64
struct CORDL_TYPE Int64 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::IComparable_1<int64_t>"
  constexpr operator ::System::IComparable_1<int64_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<int64_t>"
  constexpr operator ::System::IEquatable_1<int64_t>*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo addr 0x25ac244 size 0xd0 virtual true final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo addr 0x25ac314 size 0x1c virtual true final true
  inline int32_t CompareTo(int64_t value);

  /// @brief Method Equals addr 0x25ac330 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x25ac3a8 size 0x10 virtual true final true
  inline bool Equals(int64_t obj);

  /// @brief Method GetHashCode addr 0x25ac3b8 size 0xc virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x25ac3c4 size 0x94 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x25ac720 size 0x98 virtual true final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToString addr 0x25ac7b8 size 0xb0 virtual false final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString addr 0x25ac868 size 0xb4 virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat addr 0x25ac91c size 0xa0 virtual true final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method Parse addr 0x25accf0 size 0xc0 virtual false final false
  static inline int64_t Parse(::StringW s);

  /// @brief Method Parse addr 0x25acf8c size 0xd0 virtual false final false
  static inline int64_t Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse addr 0x25ad05c size 0xe0 virtual false final false
  static inline int64_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);

  /// @brief Method TryParse addr 0x25ad13c size 0xd0 virtual false final false
  static inline bool TryParse(::StringW s, ByRef<int64_t> result);

  /// @brief Method TryParse addr 0x25ad398 size 0xf4 virtual false final false
  static inline bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<int64_t> result);

  /// @brief Method GetTypeCode addr 0x25ad48c size 0x8 virtual true final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean addr 0x25ad494 size 0x5c virtual true final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar addr 0x25ad4f0 size 0x5c virtual true final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte addr 0x25ad54c size 0x5c virtual true final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte addr 0x25ad5a8 size 0x5c virtual true final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16 addr 0x25ad604 size 0x5c virtual true final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16 addr 0x25ad660 size 0x5c virtual true final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32 addr 0x25ad6bc size 0x5c virtual true final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32 addr 0x25ad718 size 0x5c virtual true final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64 addr 0x25ad774 size 0x8 virtual true final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64 addr 0x25ad77c size 0x5c virtual true final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle addr 0x25ad7d8 size 0x5c virtual true final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble addr 0x25ad834 size 0x5c virtual true final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal addr 0x25ad890 size 0x5c virtual true final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime addr 0x25ad8ec size 0x88 virtual true final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType addr 0x25ad974 size 0xac virtual true final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "m_value", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr Int64(int64_t m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Int64();

  /// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
  int64_t m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field MaxValue offset 0xffffffff size 0x8
  static constexpr int64_t MaxValue{ static_cast<int64_t>(0x7fffffffffffffff) };

  /// @brief Field MinValue offset 0xffffffff size 0x8
  static constexpr int64_t MinValue{ static_cast<int64_t>(0x8000000000000000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Int64, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Int64, "System", "Int64");
