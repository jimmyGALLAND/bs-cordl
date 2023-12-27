#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebuggerBrowsableState)
// Forward declare root types
namespace System::Diagnostics {
struct DebuggerBrowsableState;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::DebuggerBrowsableState);
// Type: System.Diagnostics::DebuggerBrowsableState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3734))
// CS Name: ::System.Diagnostics::DebuggerBrowsableState
struct CORDL_TYPE DebuggerBrowsableState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebuggerBrowsableState_Unwrapped
  enum struct __DebuggerBrowsableState_Unwrapped : int32_t {
    __E_Never = static_cast<int32_t>(0x0),
    __E_Collapsed = static_cast<int32_t>(0x2),
    __E_RootHidden = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebuggerBrowsableState_Unwrapped() const noexcept {
    return static_cast<__DebuggerBrowsableState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebuggerBrowsableState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerBrowsableState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Never value: static_cast<int32_t>(0x0)
  static ::System::Diagnostics::DebuggerBrowsableState const Never;

  /// @brief Field Collapsed value: static_cast<int32_t>(0x2)
  static ::System::Diagnostics::DebuggerBrowsableState const Collapsed;

  /// @brief Field RootHidden value: static_cast<int32_t>(0x3)
  static ::System::Diagnostics::DebuggerBrowsableState const RootHidden;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerBrowsableState, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerBrowsableState, "System.Diagnostics", "DebuggerBrowsableState");
