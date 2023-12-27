#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Controller_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Controller_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Controller_t);
// Type: OVR.OpenVR::VREvent_Controller_t
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8666))
// CS Name: ::OVR.OpenVR::VREvent_Controller_t
struct CORDL_TYPE VREvent_Controller_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "button", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VREvent_Controller_t(uint32_t button) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Controller_t();

  /// @brief Field button, offset: 0x0, size: 0x4, def value: None
  uint32_t button;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Controller_t, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Controller_t, "OVR.OpenVR", "VREvent_Controller_t");
