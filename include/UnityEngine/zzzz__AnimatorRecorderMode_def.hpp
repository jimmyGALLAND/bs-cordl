#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorRecorderMode)
// Forward declare root types
namespace UnityEngine {
struct AnimatorRecorderMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorRecorderMode);
// Type: UnityEngine::AnimatorRecorderMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14875))
// CS Name: ::UnityEngine::AnimatorRecorderMode
struct CORDL_TYPE AnimatorRecorderMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimatorRecorderMode_Unwrapped
  enum struct __AnimatorRecorderMode_Unwrapped : int32_t {
    __E_Offline = static_cast<int32_t>(0x0),
    __E_Playback = static_cast<int32_t>(0x1),
    __E_Record = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimatorRecorderMode_Unwrapped() const noexcept {
    return static_cast<__AnimatorRecorderMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimatorRecorderMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorRecorderMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Offline value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AnimatorRecorderMode const Offline;

  /// @brief Field Playback value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AnimatorRecorderMode const Playback;

  /// @brief Field Record value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AnimatorRecorderMode const Record;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorRecorderMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorRecorderMode, "UnityEngine", "AnimatorRecorderMode");
