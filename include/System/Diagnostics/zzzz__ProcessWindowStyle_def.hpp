#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessWindowStyle)
// Forward declare root types
namespace System::Diagnostics {
struct ProcessWindowStyle;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::ProcessWindowStyle);
// Type: System.Diagnostics::ProcessWindowStyle
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8960))
// CS Name: ::System.Diagnostics::ProcessWindowStyle
struct CORDL_TYPE ProcessWindowStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProcessWindowStyle_Unwrapped
  enum struct __ProcessWindowStyle_Unwrapped : int32_t {
    __E_Hidden = static_cast<int32_t>(0x1),
    __E_Maximized = static_cast<int32_t>(0x3),
    __E_Minimized = static_cast<int32_t>(0x2),
    __E_Normal = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProcessWindowStyle_Unwrapped() const noexcept {
    return static_cast<__ProcessWindowStyle_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProcessWindowStyle(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessWindowStyle();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Hidden value: static_cast<int32_t>(0x1)
  static ::System::Diagnostics::ProcessWindowStyle const Hidden;

  /// @brief Field Maximized value: static_cast<int32_t>(0x3)
  static ::System::Diagnostics::ProcessWindowStyle const Maximized;

  /// @brief Field Minimized value: static_cast<int32_t>(0x2)
  static ::System::Diagnostics::ProcessWindowStyle const Minimized;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::System::Diagnostics::ProcessWindowStyle const Normal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessWindowStyle, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessWindowStyle, "System.Diagnostics", "ProcessWindowStyle");
