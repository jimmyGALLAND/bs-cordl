#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigurationSaveMode)
// Forward declare root types
namespace System::Configuration {
struct ConfigurationSaveMode;
}
// Write type traits
MARK_VAL_T(::System::Configuration::ConfigurationSaveMode);
// Type: System.Configuration::ConfigurationSaveMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Configuration {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16259))
// CS Name: ::System.Configuration::ConfigurationSaveMode
struct CORDL_TYPE ConfigurationSaveMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConfigurationSaveMode_Unwrapped
  enum struct __ConfigurationSaveMode_Unwrapped : int32_t {
    __E_Full = static_cast<int32_t>(0x2),
    __E_Minimal = static_cast<int32_t>(0x1),
    __E_Modified = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConfigurationSaveMode_Unwrapped() const noexcept {
    return static_cast<__ConfigurationSaveMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConfigurationSaveMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurationSaveMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Full value: static_cast<int32_t>(0x2)
  static ::System::Configuration::ConfigurationSaveMode const Full;

  /// @brief Field Minimal value: static_cast<int32_t>(0x1)
  static ::System::Configuration::ConfigurationSaveMode const Minimal;

  /// @brief Field Modified value: static_cast<int32_t>(0x0)
  static ::System::Configuration::ConfigurationSaveMode const Modified;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationSaveMode, 0x4>, "Size mismatch!");

} // namespace System::Configuration
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationSaveMode, "System.Configuration", "ConfigurationSaveMode");
