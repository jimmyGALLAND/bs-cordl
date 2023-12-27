#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaDirection)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaDirection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaDirection);
// Type: UnityEngine.Yoga::YogaDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15355))
// CS Name: ::UnityEngine.Yoga::YogaDirection
struct CORDL_TYPE YogaDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaDirection_Unwrapped
  enum struct __YogaDirection_Unwrapped : int32_t {
    __E_Inherit = static_cast<int32_t>(0x0),
    __E_LTR = static_cast<int32_t>(0x1),
    __E_RTL = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaDirection_Unwrapped() const noexcept {
    return static_cast<__YogaDirection_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaDirection(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaDirection();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Inherit value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Yoga::YogaDirection const Inherit;

  /// @brief Field LTR value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Yoga::YogaDirection const LTR;

  /// @brief Field RTL value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Yoga::YogaDirection const RTL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaDirection, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaDirection, "UnityEngine.Yoga", "YogaDirection");
