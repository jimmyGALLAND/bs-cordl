#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalCanvasShaderChannels)
// Forward declare root types
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdditionalCanvasShaderChannels);
// Type: UnityEngine::AdditionalCanvasShaderChannels
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15660))
// CS Name: ::UnityEngine::AdditionalCanvasShaderChannels
struct CORDL_TYPE AdditionalCanvasShaderChannels {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AdditionalCanvasShaderChannels_Unwrapped
  enum struct __AdditionalCanvasShaderChannels_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TexCoord1 = static_cast<int32_t>(0x1),
    __E_TexCoord2 = static_cast<int32_t>(0x2),
    __E_TexCoord3 = static_cast<int32_t>(0x4),
    __E_Normal = static_cast<int32_t>(0x8),
    __E_Tangent = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AdditionalCanvasShaderChannels_Unwrapped() const noexcept {
    return static_cast<__AdditionalCanvasShaderChannels_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AdditionalCanvasShaderChannels(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditionalCanvasShaderChannels();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AdditionalCanvasShaderChannels const None;

  /// @brief Field TexCoord1 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AdditionalCanvasShaderChannels const TexCoord1;

  /// @brief Field TexCoord2 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AdditionalCanvasShaderChannels const TexCoord2;

  /// @brief Field TexCoord3 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::AdditionalCanvasShaderChannels const TexCoord3;

  /// @brief Field Normal value: static_cast<int32_t>(0x8)
  static ::UnityEngine::AdditionalCanvasShaderChannels const Normal;

  /// @brief Field Tangent value: static_cast<int32_t>(0x10)
  static ::UnityEngine::AdditionalCanvasShaderChannels const Tangent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AdditionalCanvasShaderChannels, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AdditionalCanvasShaderChannels, "UnityEngine", "AdditionalCanvasShaderChannels");
