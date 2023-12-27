#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskingOffsetMode)
// Forward declare root types
namespace TMPro {
struct MaskingOffsetMode;
}
// Write type traits
MARK_VAL_T(::TMPro::MaskingOffsetMode);
// Type: TMPro::MaskingOffsetMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12436))
// CS Name: ::TMPro::MaskingOffsetMode
struct CORDL_TYPE MaskingOffsetMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MaskingOffsetMode_Unwrapped
  enum struct __MaskingOffsetMode_Unwrapped : int32_t {
    __E_Percentage = static_cast<int32_t>(0x0),
    __E_Pixel = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MaskingOffsetMode_Unwrapped() const noexcept {
    return static_cast<__MaskingOffsetMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MaskingOffsetMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskingOffsetMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Percentage value: static_cast<int32_t>(0x0)
  static ::TMPro::MaskingOffsetMode const Percentage;

  /// @brief Field Pixel value: static_cast<int32_t>(0x1)
  static ::TMPro::MaskingOffsetMode const Pixel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::MaskingOffsetMode, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaskingOffsetMode, "TMPro", "MaskingOffsetMode");
