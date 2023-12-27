#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__VRTextureDepthInfo_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VRTextureWithPoseAndDepth_t)
namespace OVR::OpenVR {
struct VRTextureDepthInfo_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureWithPoseAndDepth_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRTextureWithPoseAndDepth_t);
// Type: OVR.OpenVR::VRTextureWithPoseAndDepth_t
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8661))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8663))
// CS Name: ::OVR.OpenVR::VRTextureWithPoseAndDepth_t
struct CORDL_TYPE VRTextureWithPoseAndDepth_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "depth", ty: "::OVR::OpenVR::VRTextureDepthInfo_t", modifiers: "", def_value: None }]
  constexpr VRTextureWithPoseAndDepth_t(::OVR::OpenVR::VRTextureDepthInfo_t depth) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRTextureWithPoseAndDepth_t();

  /// @brief Field depth, offset: 0x0, size: 0x50, def value: None
  ::OVR::OpenVR::VRTextureDepthInfo_t depth;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRTextureWithPoseAndDepth_t, 0x50>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureWithPoseAndDepth_t, "OVR.OpenVR", "VRTextureWithPoseAndDepth_t");
