#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadSceneMode)
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::LoadSceneMode);
// Type: UnityEngine.SceneManagement::LoadSceneMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10375))
// CS Name: ::UnityEngine.SceneManagement::LoadSceneMode
struct CORDL_TYPE LoadSceneMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LoadSceneMode_Unwrapped
  enum struct __LoadSceneMode_Unwrapped : int32_t {
    __E_Single = static_cast<int32_t>(0x0),
    __E_Additive = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LoadSceneMode_Unwrapped() const noexcept {
    return static_cast<__LoadSceneMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LoadSceneMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadSceneMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Single value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SceneManagement::LoadSceneMode const Single;

  /// @brief Field Additive value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SceneManagement::LoadSceneMode const Additive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::LoadSceneMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::LoadSceneMode, "UnityEngine.SceneManagement", "LoadSceneMode");
