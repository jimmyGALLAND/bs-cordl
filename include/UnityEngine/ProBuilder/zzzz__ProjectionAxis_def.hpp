#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectionAxis)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ProjectionAxis;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ProjectionAxis);
// Type: UnityEngine.ProBuilder::ProjectionAxis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12158))
// CS Name: ::UnityEngine.ProBuilder::ProjectionAxis
struct CORDL_TYPE ProjectionAxis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProjectionAxis_Unwrapped
  enum struct __ProjectionAxis_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x0),
    __E_Y = static_cast<int32_t>(0x1),
    __E_Z = static_cast<int32_t>(0x2),
    __E_XNegative = static_cast<int32_t>(0x3),
    __E_YNegative = static_cast<int32_t>(0x4),
    __E_ZNegative = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProjectionAxis_Unwrapped() const noexcept {
    return static_cast<__ProjectionAxis_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProjectionAxis(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectionAxis();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field X value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::ProjectionAxis const X;

  /// @brief Field Y value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::ProjectionAxis const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::ProjectionAxis const Z;

  /// @brief Field XNegative value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ProBuilder::ProjectionAxis const XNegative;

  /// @brief Field YNegative value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ProBuilder::ProjectionAxis const YNegative;

  /// @brief Field ZNegative value: static_cast<int32_t>(0x5)
  static ::UnityEngine::ProBuilder::ProjectionAxis const ZNegative;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ProjectionAxis, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProjectionAxis, "UnityEngine.ProBuilder", "ProjectionAxis");
