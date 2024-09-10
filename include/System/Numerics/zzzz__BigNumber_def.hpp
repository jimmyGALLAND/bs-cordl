#pragma once
// IWYU pragma private; include "System/Numerics/BigNumber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigNumber)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System::Numerics {
struct __BigNumber__BigNumberBuffer;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class ArgumentException;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Numerics {
class BigNumber;
}
namespace System::Numerics {
struct __BigNumber__BigNumberBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::BigNumber);
MARK_VAL_T(::System::Numerics::__BigNumber__BigNumberBuffer);
// Type: ::BigNumberBuffer
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: true
// CS Name: ::BigNumber::BigNumberBuffer
struct CORDL_TYPE __BigNumber__BigNumberBuffer {
public:
// Declarations
/// @brief Method Create, addr 0x419d418, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Numerics::__BigNumber__BigNumberBuffer Create() ;

// Ctor Parameters []
// @brief default ctor
constexpr __BigNumber__BigNumberBuffer() ;

// Ctor Parameters [CppParam { name: "digits", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None }, CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: None }]
constexpr __BigNumber__BigNumberBuffer(::System::Text::StringBuilder*  digits, int32_t  precision, int32_t  scale, bool  sign) noexcept;

/// @brief Field digits, offset: 0x0, size: 0x8, def value: None
 ::System::Text::StringBuilder*  digits;

/// @brief Field precision, offset: 0x8, size: 0x4, def value: None
 int32_t  precision;

/// @brief Field scale, offset: 0xc, size: 0x4, def value: None
 int32_t  scale;

/// @brief Field sign, offset: 0x10, size: 0x1, def value: None
 bool  sign;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::__BigNumber__BigNumberBuffer, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Numerics::__BigNumber__BigNumberBuffer, digits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::__BigNumber__BigNumberBuffer, precision) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::__BigNumber__BigNumberBuffer, scale) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Numerics::__BigNumber__BigNumberBuffer, sign) == 0x10, "Offset mismatch!");

} // namespace end def System::Numerics
// Type: System.Numerics::BigNumber
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// CS Name: ::System.Numerics::BigNumber*
class CORDL_TYPE BigNumber : public ::System::Object {
public:
// Declarations
using BigNumberBuffer = ::System::Numerics::__BigNumber__BigNumberBuffer;

/// @brief Method FormatBigInteger, addr 0x419e434, size 0x9e0, virtual false, abstract: false, final false
static inline ::StringW FormatBigInteger(bool  targetSpan, ::System::Numerics::BigInteger  value, ::StringW  formatString, ::System::ReadOnlySpan_1<char16_t>  formatSpan, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten, ByRef<bool>  spanSuccess) ;

/// @brief Method FormatBigInteger, addr 0x4199aa8, size 0xac, virtual false, abstract: false, final false
static inline ::StringW FormatBigInteger(::System::Numerics::BigInteger  value, ::StringW  format, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatBigIntegerToHex, addr 0x419dafc, size 0x5b0, virtual false, abstract: false, final false
static inline ::StringW FormatBigIntegerToHex(bool  targetSpan, ::System::Numerics::BigInteger  value, char16_t  format, int32_t  digits, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten, ByRef<bool>  spanSuccess) ;

/// @brief Method HexNumberToBigInteger, addr 0x419d568, size 0x1a4, virtual false, abstract: false, final false
static inline bool HexNumberToBigInteger(ByRef<::System::Numerics::__BigNumber__BigNumberBuffer>  number, ByRef<::System::Numerics::BigInteger>  value) ;

/// @brief Method NumberToBigInteger, addr 0x419d70c, size 0x1c8, virtual false, abstract: false, final false
static inline bool NumberToBigInteger(ByRef<::System::Numerics::__BigNumber__BigNumberBuffer>  number, ByRef<::System::Numerics::BigInteger>  value) ;

/// @brief Method ParseBigInteger, addr 0x4198d3c, size 0xac, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger ParseBigInteger(::StringW  value, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseBigInteger, addr 0x419d8d4, size 0x138, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger ParseBigInteger(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method ParseFormatSpecifier, addr 0x419da0c, size 0xf0, virtual false, abstract: false, final false
static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t>  format, ByRef<int32_t>  digits) ;

/// @brief Method TryParseBigInteger, addr 0x419d2d0, size 0x148, virtual false, abstract: false, final false
static inline bool TryParseBigInteger(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  style, ::System::Globalization::NumberFormatInfo*  info, ByRef<::System::Numerics::BigInteger>  result) ;

/// @brief Method TryValidateParseStyleInteger, addr 0x419d1e0, size 0xf0, virtual false, abstract: false, final false
static inline bool TryValidateParseStyleInteger(::System::Globalization::NumberStyles  style, ByRef<::System::ArgumentException*>  e) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigNumber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigNumber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BigNumber(BigNumber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigNumber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigNumber(BigNumber const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::BigNumber, 0x10>, "Size mismatch!");

} // namespace end def System::Numerics
NEED_NO_BOX(::System::Numerics::BigNumber);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigNumber*, "System.Numerics", "BigNumber");
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::__BigNumber__BigNumberBuffer, "System.Numerics", "BigNumber/BigNumberBuffer");
