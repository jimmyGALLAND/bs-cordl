#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaLogLevel)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaLogLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaLogLevel);
// Type: UnityEngine.Yoga::YogaLogLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15368))
// CS Name: ::UnityEngine.Yoga::YogaLogLevel
struct CORDL_TYPE YogaLogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaLogLevel_Unwrapped
  enum struct __YogaLogLevel_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x0),
    __E_Warn = static_cast<int32_t>(0x1),
    __E_Info = static_cast<int32_t>(0x2),
    __E_Debug = static_cast<int32_t>(0x3),
    __E_Verbose = static_cast<int32_t>(0x4),
    __E_Fatal = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaLogLevel_Unwrapped() const noexcept {
    return static_cast<__YogaLogLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaLogLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaLogLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Error value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Yoga::YogaLogLevel const Error;

  /// @brief Field Warn value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Yoga::YogaLogLevel const Warn;

  /// @brief Field Info value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Yoga::YogaLogLevel const Info;

  /// @brief Field Debug value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Yoga::YogaLogLevel const Debug;

  /// @brief Field Verbose value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Yoga::YogaLogLevel const Verbose;

  /// @brief Field Fatal value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Yoga::YogaLogLevel const Fatal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaLogLevel, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaLogLevel, "UnityEngine.Yoga", "YogaLogLevel");
