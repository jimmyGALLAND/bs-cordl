#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UISelectionState)
// Forward declare root types
namespace HMUI {
struct UISelectionState;
}
// Write type traits
MARK_VAL_T(::HMUI::UISelectionState);
// Type: HMUI::UISelectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13567))
// CS Name: ::HMUI::UISelectionState
struct CORDL_TYPE UISelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UISelectionState_Unwrapped
  enum struct __UISelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Selected = static_cast<int32_t>(0x3),
    __E_Disabled = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UISelectionState_Unwrapped() const noexcept {
    return static_cast<__UISelectionState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UISelectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UISelectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::HMUI::UISelectionState const Normal;

  /// @brief Field Highlighted value: static_cast<int32_t>(0x1)
  static ::HMUI::UISelectionState const Highlighted;

  /// @brief Field Pressed value: static_cast<int32_t>(0x2)
  static ::HMUI::UISelectionState const Pressed;

  /// @brief Field Selected value: static_cast<int32_t>(0x3)
  static ::HMUI::UISelectionState const Selected;

  /// @brief Field Disabled value: static_cast<int32_t>(0x4)
  static ::HMUI::UISelectionState const Disabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::UISelectionState, 0x4>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::UISelectionState, "HMUI", "UISelectionState");
