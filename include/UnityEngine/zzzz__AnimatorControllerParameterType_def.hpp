#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorControllerParameterType)
// Forward declare root types
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorControllerParameterType);
// Type: UnityEngine::AnimatorControllerParameterType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14873))
// CS Name: ::UnityEngine::AnimatorControllerParameterType
struct CORDL_TYPE AnimatorControllerParameterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimatorControllerParameterType_Unwrapped
  enum struct __AnimatorControllerParameterType_Unwrapped : int32_t {
    __E_Float = static_cast<int32_t>(0x1),
    __E_Int = static_cast<int32_t>(0x3),
    __E_Bool = static_cast<int32_t>(0x4),
    __E_Trigger = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimatorControllerParameterType_Unwrapped() const noexcept {
    return static_cast<__AnimatorControllerParameterType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimatorControllerParameterType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorControllerParameterType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Float value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AnimatorControllerParameterType const Float;

  /// @brief Field Int value: static_cast<int32_t>(0x3)
  static ::UnityEngine::AnimatorControllerParameterType const Int;

  /// @brief Field Bool value: static_cast<int32_t>(0x4)
  static ::UnityEngine::AnimatorControllerParameterType const Bool;

  /// @brief Field Trigger value: static_cast<int32_t>(0x9)
  static ::UnityEngine::AnimatorControllerParameterType const Trigger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorControllerParameterType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorControllerParameterType, "UnityEngine", "AnimatorControllerParameterType");
