#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfoOptions)
// Forward declare root types
namespace System {
struct TimeZoneInfoOptions;
}
// Write type traits
MARK_VAL_T(::System::TimeZoneInfoOptions);
// Type: System::TimeZoneInfoOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2486))
// CS Name: ::System::TimeZoneInfoOptions
struct CORDL_TYPE TimeZoneInfoOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimeZoneInfoOptions_Unwrapped
  enum struct __TimeZoneInfoOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x1),
    __E_NoThrowOnInvalidTime = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeZoneInfoOptions_Unwrapped() const noexcept {
    return static_cast<__TimeZoneInfoOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeZoneInfoOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfoOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x1)
  static ::System::TimeZoneInfoOptions const None;

  /// @brief Field NoThrowOnInvalidTime value: static_cast<int32_t>(0x2)
  static ::System::TimeZoneInfoOptions const NoThrowOnInvalidTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfoOptions, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfoOptions, "System", "TimeZoneInfoOptions");
