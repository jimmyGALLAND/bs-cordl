#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleKeyword)
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleKeyword);
// Type: UnityEngine.UIElements::StyleKeyword
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7300))
// CS Name: ::UnityEngine.UIElements::StyleKeyword
struct CORDL_TYPE StyleKeyword {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleKeyword_Unwrapped
  enum struct __StyleKeyword_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Null = static_cast<int32_t>(0x1),
    __E_Auto = static_cast<int32_t>(0x2),
    __E_None = static_cast<int32_t>(0x3),
    __E_Initial = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleKeyword_Unwrapped() const noexcept {
    return static_cast<__StyleKeyword_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleKeyword(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleKeyword();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::StyleKeyword const Undefined;

  /// @brief Field Null value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::StyleKeyword const Null;

  /// @brief Field Auto value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::StyleKeyword const Auto;

  /// @brief Field None value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::StyleKeyword const None;

  /// @brief Field Initial value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::StyleKeyword const Initial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleKeyword, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleKeyword, "UnityEngine.UIElements", "StyleKeyword");
