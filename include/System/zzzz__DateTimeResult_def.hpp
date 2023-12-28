#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__ParseFailureKind_def.hpp"
#include "System/zzzz__ParseFlags_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeResult)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
struct ParseFlags;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct ParseFailureKind;
}
namespace System::Globalization {
class Calendar;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct DateTimeResult;
}
// Write type traits
MARK_VAL_T(::System::DateTimeResult);
// Type: System::DateTimeResult
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2398)), TypeDefinitionIndex(TypeDefinitionIndex(2464)), TypeDefinitionIndex(TypeDefinitionIndex(2484)),
// TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(2399)) CS Name: ::System::DateTimeResult
struct CORDL_TYPE DateTimeResult {
public:
  // Declarations
  /// @brief Method Init addr 0x25a58b4 size 0x24 virtual false final false
  inline void Init(::System::ReadOnlySpan_1<char16_t> originalDateTimeString);

  /// @brief Method SetDate addr 0x25a58d8 size 0xc virtual false final false
  inline void SetDate(int32_t year, int32_t month, int32_t day);

  /// @brief Method SetBadFormatSpecifierFailure addr 0x25a58e4 size 0x94 virtual false final false
  inline void SetBadFormatSpecifierFailure();

  /// @brief Method SetBadFormatSpecifierFailure addr 0x25a5978 size 0x64 virtual false final false
  inline void SetBadFormatSpecifierFailure(::System::ReadOnlySpan_1<char16_t> failedFormatSpecifier);

  /// @brief Method SetBadDateTimeFailure addr 0x25a59dc size 0x50 virtual false final false
  inline void SetBadDateTimeFailure();

  /// @brief Method SetFailure addr 0x25a5a2c size 0xc virtual false final false
  inline void SetFailure(::System::ParseFailureKind failure, ::StringW failureMessageID);

  /// @brief Method SetFailure addr 0x25a5a38 size 0xc virtual false final false
  inline void SetFailure(::System::ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument);

  /// @brief Method SetFailure addr 0x25a5a44 size 0x10 virtual false final false
  inline void SetFailure(::System::ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument, ::StringW failureArgumentName);

  // Ctor Parameters [CppParam { name: "Year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Day", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "Hour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Minute", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "Second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "era", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::System::ParseFlags", modifiers: "", def_value: None }, CppParam { name: "timeZoneOffset", ty: "::System::TimeSpan", modifiers:
  // "", def_value: None }, CppParam { name: "calendar", ty: "::System::Globalization::Calendar*", modifiers: "", def_value: None }, CppParam { name: "parsedDate", ty: "::System::DateTime", modifiers:
  // "", def_value: None }, CppParam { name: "failure", ty: "::System::ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "failureMessageID", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "failureArgumentName", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "originalDateTimeString", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "failedFormatSpecifier", ty:
  // "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
  constexpr DateTimeResult(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, double_t fraction, int32_t era, ::System::ParseFlags flags,
                           ::System::TimeSpan timeZoneOffset, ::System::Globalization::Calendar* calendar, ::System::DateTime parsedDate, ::System::ParseFailureKind failure,
                           ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument, ::StringW failureArgumentName, ::System::ReadOnlySpan_1<char16_t> originalDateTimeString,
                           ::System::ReadOnlySpan_1<char16_t> failedFormatSpecifier) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeResult();

  /// @brief Field Year, offset: 0x0, size: 0x4, def value: None
  int32_t Year;

  /// @brief Field Month, offset: 0x4, size: 0x4, def value: None
  int32_t Month;

  /// @brief Field Day, offset: 0x8, size: 0x4, def value: None
  int32_t Day;

  /// @brief Field Hour, offset: 0xc, size: 0x4, def value: None
  int32_t Hour;

  /// @brief Field Minute, offset: 0x10, size: 0x4, def value: None
  int32_t Minute;

  /// @brief Field Second, offset: 0x14, size: 0x4, def value: None
  int32_t Second;

  /// @brief Field fraction, offset: 0x18, size: 0x8, def value: None
  double_t fraction;

  /// @brief Field era, offset: 0x20, size: 0x4, def value: None
  int32_t era;

  /// @brief Field flags, offset: 0x24, size: 0x4, def value: None
  ::System::ParseFlags flags;

  /// @brief Field timeZoneOffset, offset: 0x28, size: 0x8, def value: None
  ::System::TimeSpan timeZoneOffset;

  /// @brief Field calendar, offset: 0x30, size: 0x8, def value: None
  ::System::Globalization::Calendar* calendar;

  /// @brief Field parsedDate, offset: 0x38, size: 0x8, def value: None
  ::System::DateTime parsedDate;

  /// @brief Field failure, offset: 0x40, size: 0x4, def value: None
  ::System::ParseFailureKind failure;

  /// @brief Field failureMessageID, offset: 0x48, size: 0x8, def value: None
  ::StringW failureMessageID;

  /// @brief Field failureMessageFormatArgument, offset: 0x50, size: 0x8, def value: None
  ::System::Object* failureMessageFormatArgument;

  /// @brief Field failureArgumentName, offset: 0x58, size: 0x8, def value: None
  ::StringW failureArgumentName;

  /// @brief Field originalDateTimeString, offset: 0x60, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> originalDateTimeString;

  /// @brief Field failedFormatSpecifier, offset: 0x70, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> failedFormatSpecifier;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeResult, 0x80>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeResult, "System", "DateTimeResult");
