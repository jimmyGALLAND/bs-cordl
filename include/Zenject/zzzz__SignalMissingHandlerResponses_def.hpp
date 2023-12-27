#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SignalMissingHandlerResponses)
// Forward declare root types
namespace Zenject {
struct SignalMissingHandlerResponses;
}
// Write type traits
MARK_VAL_T(::Zenject::SignalMissingHandlerResponses);
// Type: Zenject::SignalMissingHandlerResponses
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11172))
// CS Name: ::Zenject::SignalMissingHandlerResponses
struct CORDL_TYPE SignalMissingHandlerResponses {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SignalMissingHandlerResponses_Unwrapped
  enum struct __SignalMissingHandlerResponses_Unwrapped : int32_t {
    __E_Ignore = static_cast<int32_t>(0x0),
    __E_Throw = static_cast<int32_t>(0x1),
    __E_Warn = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SignalMissingHandlerResponses_Unwrapped() const noexcept {
    return static_cast<__SignalMissingHandlerResponses_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SignalMissingHandlerResponses(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalMissingHandlerResponses();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ignore value: static_cast<int32_t>(0x0)
  static ::Zenject::SignalMissingHandlerResponses const Ignore;

  /// @brief Field Throw value: static_cast<int32_t>(0x1)
  static ::Zenject::SignalMissingHandlerResponses const Throw;

  /// @brief Field Warn value: static_cast<int32_t>(0x2)
  static ::Zenject::SignalMissingHandlerResponses const Warn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalMissingHandlerResponses, 0x4>, "Size mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalMissingHandlerResponses, "Zenject", "SignalMissingHandlerResponses");
