#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SynchronizationContextProperties)
// Forward declare root types
namespace System::Threading {
struct SynchronizationContextProperties;
}
// Write type traits
MARK_VAL_T(::System::Threading::SynchronizationContextProperties);
// Type: System.Threading::SynchronizationContextProperties
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2716))
// CS Name: ::System.Threading::SynchronizationContextProperties
struct CORDL_TYPE SynchronizationContextProperties {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SynchronizationContextProperties_Unwrapped
  enum struct __SynchronizationContextProperties_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_RequireWaitNotification = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SynchronizationContextProperties_Unwrapped() const noexcept {
    return static_cast<__SynchronizationContextProperties_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SynchronizationContextProperties(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronizationContextProperties();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::SynchronizationContextProperties const None;

  /// @brief Field RequireWaitNotification value: static_cast<int32_t>(0x1)
  static ::System::Threading::SynchronizationContextProperties const RequireWaitNotification;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SynchronizationContextProperties, 0x4>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SynchronizationContextProperties, "System.Threading", "SynchronizationContextProperties");
