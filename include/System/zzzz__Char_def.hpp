#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Char)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class IConvertible;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System {
struct DateTime;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IComparable;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct Char;
}
// Write type traits
MARK_VAL_T(::System::Char);
// Type: System::Char
// SizeInfo { instance_size: 2, native_size: 1, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2362))
// CS Name: ::System::Char
struct CORDL_TYPE Char {
public:
  // Declarations
  /// @brief Field s_categoryForLatin1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_categoryForLatin1, put = setStaticF_s_categoryForLatin1))::ArrayW<uint8_t, ::Array<uint8_t>*> s_categoryForLatin1;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<char16_t>"
  constexpr operator ::System::IComparable_1<char16_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<char16_t>"
  constexpr operator ::System::IEquatable_1<char16_t>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  static inline void setStaticF_s_categoryForLatin1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_categoryForLatin1();

  /// @brief Method IsLatin1 addr 0x2525350 size 0x10 virtual false final false
  static inline bool IsLatin1(char16_t ch);

  /// @brief Method IsAscii addr 0x2525360 size 0x10 virtual false final false
  static inline bool IsAscii(char16_t ch);

  /// @brief Method GetLatin1UnicodeCategory addr 0x2525370 size 0x7c virtual false final false
  static inline ::System::Globalization::UnicodeCategory GetLatin1UnicodeCategory(char16_t ch);

  /// @brief Method GetHashCode addr 0x25253ec size 0xc virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x25253f8 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2525470 size 0x10 virtual true final true
  inline bool Equals(char16_t obj);

  /// @brief Method CompareTo addr 0x2525480 size 0xbc virtual true final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo addr 0x252553c size 0xc virtual true final true
  inline int32_t CompareTo(char16_t value);

  /// @brief Method ToString addr 0x2515c68 size 0x5c virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x2525550 size 0x5c virtual true final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToString addr 0x2525548 size 0x8 virtual false final false
  static inline ::StringW ToString(char16_t c);

  /// @brief Method Parse addr 0x25255ac size 0xa4 virtual false final false
  static inline char16_t Parse(::StringW s);

  /// @brief Method TryParse addr 0x2525650 size 0x40 virtual false final false
  static inline bool TryParse(::StringW s, ByRef<char16_t> result);

  /// @brief Method IsDigit addr 0x251ef40 size 0x84 virtual false final false
  static inline bool IsDigit(char16_t c);

  /// @brief Method CheckLetter addr 0x2525690 size 0xc virtual false final false
  static inline bool CheckLetter(::System::Globalization::UnicodeCategory uc);

  /// @brief Method IsLetter addr 0x252569c size 0xd8 virtual false final false
  static inline bool IsLetter(char16_t c);

  /// @brief Method IsWhiteSpaceLatin1 addr 0x2525774 size 0x3c virtual false final false
  static inline bool IsWhiteSpaceLatin1(char16_t c);

  /// @brief Method IsWhiteSpace addr 0x2522ee8 size 0xb8 virtual false final false
  static inline bool IsWhiteSpace(char16_t c);

  /// @brief Method IsUpper addr 0x25257b0 size 0xbc virtual false final false
  static inline bool IsUpper(char16_t c);

  /// @brief Method IsLower addr 0x252586c size 0xbc virtual false final false
  static inline bool IsLower(char16_t c);

  /// @brief Method CheckPunctuation addr 0x2525928 size 0x10 virtual false final false
  static inline bool CheckPunctuation(::System::Globalization::UnicodeCategory uc);

  /// @brief Method IsPunctuation addr 0x2525938 size 0xac virtual false final false
  static inline bool IsPunctuation(char16_t c);

  /// @brief Method CheckLetterOrDigit addr 0x25259e4 size 0x1c virtual false final false
  static inline bool CheckLetterOrDigit(::System::Globalization::UnicodeCategory uc);

  /// @brief Method IsLetterOrDigit addr 0x2525a00 size 0xbc virtual false final false
  static inline bool IsLetterOrDigit(char16_t c);

  /// @brief Method ToUpper addr 0x2525abc size 0x7c virtual false final false
  static inline char16_t ToUpper(char16_t c);

  /// @brief Method ToUpperInvariant addr 0x2525b38 size 0x7c virtual false final false
  static inline char16_t ToUpperInvariant(char16_t c);

  /// @brief Method ToLower addr 0x2525bb4 size 0x84 virtual false final false
  static inline char16_t ToLower(char16_t c, ::System::Globalization::CultureInfo* culture);

  /// @brief Method ToLower addr 0x2525c38 size 0x7c virtual false final false
  static inline char16_t ToLower(char16_t c);

  /// @brief Method ToLowerInvariant addr 0x2525cb4 size 0x7c virtual false final false
  static inline char16_t ToLowerInvariant(char16_t c);

  /// @brief Method GetTypeCode addr 0x2525d30 size 0x8 virtual true final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean addr 0x2525d38 size 0x8c virtual true final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar addr 0x2525dc4 size 0x8 virtual true final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte addr 0x2525dcc size 0x58 virtual true final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte addr 0x2525e80 size 0x58 virtual true final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16 addr 0x2525f34 size 0x58 virtual true final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16 addr 0x2525fe4 size 0x58 virtual true final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32 addr 0x2526040 size 0x58 virtual true final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32 addr 0x25260a0 size 0x58 virtual true final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64 addr 0x2526100 size 0x58 virtual true final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64 addr 0x2526160 size 0x58 virtual true final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle addr 0x25261c0 size 0x8c virtual true final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble addr 0x252624c size 0x8c virtual true final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal addr 0x25262d8 size 0x8c virtual true final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime addr 0x2526364 size 0x8c virtual true final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType addr 0x25263f0 size 0xa8 virtual true final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method IsControl addr 0x2526498 size 0x8c virtual false final false
  static inline bool IsControl(char16_t c);

  /// @brief Method IsLetterOrDigit addr 0x2526524 size 0x170 virtual false final false
  static inline bool IsLetterOrDigit(::StringW s, int32_t index);

  /// @brief Method CheckNumber addr 0x2526694 size 0x10 virtual false final false
  static inline bool CheckNumber(::System::Globalization::UnicodeCategory uc);

  /// @brief Method IsNumber addr 0x25266a4 size 0xd8 virtual false final false
  static inline bool IsNumber(char16_t c);

  /// @brief Method IsNumber addr 0x252677c size 0x18c virtual false final false
  static inline bool IsNumber(::StringW s, int32_t index);

  /// @brief Method CheckSeparator addr 0x2526908 size 0x10 virtual false final false
  static inline bool CheckSeparator(::System::Globalization::UnicodeCategory uc);

  /// @brief Method IsSeparatorLatin1 addr 0x2526918 size 0x14 virtual false final false
  static inline bool IsSeparatorLatin1(char16_t c);

  /// @brief Method IsSeparator addr 0x252692c size 0xb0 virtual false final false
  static inline bool IsSeparator(char16_t c);

  /// @brief Method IsSurrogate addr 0x25269dc size 0x10 virtual false final false
  static inline bool IsSurrogate(char16_t c);

  /// @brief Method IsSurrogate addr 0x25269ec size 0x104 virtual false final false
  static inline bool IsSurrogate(::StringW s, int32_t index);

  /// @brief Method IsWhiteSpace addr 0x2526af0 size 0x180 virtual false final false
  static inline bool IsWhiteSpace(::StringW s, int32_t index);

  /// @brief Method GetUnicodeCategory addr 0x2526c70 size 0x80 virtual false final false
  static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(char16_t c);

  /// @brief Method GetUnicodeCategory addr 0x2526cf0 size 0x14c virtual false final false
  static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(::StringW s, int32_t index);

  /// @brief Method GetNumericValue addr 0x2526e3c size 0x8 virtual false final false
  static inline double_t GetNumericValue(char16_t c);

  /// @brief Method IsHighSurrogate addr 0x2526e44 size 0x10 virtual false final false
  static inline bool IsHighSurrogate(char16_t c);

  /// @brief Method IsHighSurrogate addr 0x2526e54 size 0x108 virtual false final false
  static inline bool IsHighSurrogate(::StringW s, int32_t index);

  /// @brief Method IsLowSurrogate addr 0x2526f5c size 0x10 virtual false final false
  static inline bool IsLowSurrogate(char16_t c);

  /// @brief Method IsSurrogatePair addr 0x2526f6c size 0x24 virtual false final false
  static inline bool IsSurrogatePair(char16_t highSurrogate, char16_t lowSurrogate);

  /// @brief Method ConvertFromUtf32 addr 0x2526f90 size 0x130 virtual false final false
  static inline ::StringW ConvertFromUtf32(int32_t utf32);

  /// @brief Method ConvertToUtf32 addr 0x25270c0 size 0x12c virtual false final false
  static inline int32_t ConvertToUtf32(char16_t highSurrogate, char16_t lowSurrogate);

  // Ctor Parameters [CppParam { name: "m_value", ty: "char16_t", modifiers: "", def_value: None }]
  constexpr Char(char16_t m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Char();

  /// @brief Field m_value, offset: 0x0, size: 0x2, def value: None
  char16_t m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field MaxValue offset 0xffffffff size 0x2
  static constexpr char16_t MaxValue{ u'\u{ffff}' };

  /// @brief Field MinValue offset 0xffffffff size 0x2
  static constexpr char16_t MinValue{ u'\u{0}' };

  /// @brief Field UNICODE_PLANE00_END offset 0xffffffff size 0x4
  static constexpr int32_t UNICODE_PLANE00_END{ static_cast<int32_t>(0xffff) };

  /// @brief Field UNICODE_PLANE01_START offset 0xffffffff size 0x4
  static constexpr int32_t UNICODE_PLANE01_START{ static_cast<int32_t>(0x10000) };

  /// @brief Field UNICODE_PLANE16_END offset 0xffffffff size 0x4
  static constexpr int32_t UNICODE_PLANE16_END{ static_cast<int32_t>(0x10ffff) };

  /// @brief Field HIGH_SURROGATE_START offset 0xffffffff size 0x4
  static constexpr int32_t HIGH_SURROGATE_START{ static_cast<int32_t>(0xd800) };

  /// @brief Field LOW_SURROGATE_END offset 0xffffffff size 0x4
  static constexpr int32_t LOW_SURROGATE_END{ static_cast<int32_t>(0xdfff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Char, 0x2>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Char, "System", "Char");
