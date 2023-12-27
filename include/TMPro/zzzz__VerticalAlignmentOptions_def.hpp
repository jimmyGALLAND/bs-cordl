#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerticalAlignmentOptions)
// Forward declare root types
namespace TMPro {
struct VerticalAlignmentOptions;
}
// Write type traits
MARK_VAL_T(::TMPro::VerticalAlignmentOptions);
// Type: TMPro::VerticalAlignmentOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12431))
// CS Name: ::TMPro::VerticalAlignmentOptions
struct CORDL_TYPE VerticalAlignmentOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VerticalAlignmentOptions_Unwrapped
  enum struct __VerticalAlignmentOptions_Unwrapped : int32_t {
    __E_Top = static_cast<int32_t>(0x100),
    __E_Middle = static_cast<int32_t>(0x200),
    __E_Bottom = static_cast<int32_t>(0x400),
    __E_Baseline = static_cast<int32_t>(0x800),
    __E_Geometry = static_cast<int32_t>(0x1000),
    __E_Capline = static_cast<int32_t>(0x2000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VerticalAlignmentOptions_Unwrapped() const noexcept {
    return static_cast<__VerticalAlignmentOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VerticalAlignmentOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalAlignmentOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Top value: static_cast<int32_t>(0x100)
  static ::TMPro::VerticalAlignmentOptions const Top;

  /// @brief Field Middle value: static_cast<int32_t>(0x200)
  static ::TMPro::VerticalAlignmentOptions const Middle;

  /// @brief Field Bottom value: static_cast<int32_t>(0x400)
  static ::TMPro::VerticalAlignmentOptions const Bottom;

  /// @brief Field Baseline value: static_cast<int32_t>(0x800)
  static ::TMPro::VerticalAlignmentOptions const Baseline;

  /// @brief Field Geometry value: static_cast<int32_t>(0x1000)
  static ::TMPro::VerticalAlignmentOptions const Geometry;

  /// @brief Field Capline value: static_cast<int32_t>(0x2000)
  static ::TMPro::VerticalAlignmentOptions const Capline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::VerticalAlignmentOptions, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::VerticalAlignmentOptions, "TMPro", "VerticalAlignmentOptions");
