#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRNotificationType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRNotificationType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRNotificationType);
// Type: OVR.OpenVR::EVRNotificationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8634))
// CS Name: ::OVR.OpenVR::EVRNotificationType
struct CORDL_TYPE EVRNotificationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRNotificationType_Unwrapped
  enum struct __EVRNotificationType_Unwrapped : int32_t {
    __E_Transient = static_cast<int32_t>(0x0),
    __E_Persistent = static_cast<int32_t>(0x1),
    __E_Transient_SystemWithUserValue = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRNotificationType_Unwrapped() const noexcept {
    return static_cast<__EVRNotificationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRNotificationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRNotificationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Transient value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRNotificationType const Transient;

  /// @brief Field Persistent value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRNotificationType const Persistent;

  /// @brief Field Transient_SystemWithUserValue value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EVRNotificationType const Transient_SystemWithUserValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRNotificationType, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationType, "OVR.OpenVR", "EVRNotificationType");
