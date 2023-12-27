#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__VRControllerAxis_t_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRControllerState_t_Packed)
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct VRControllerAxis_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRControllerState_t_Packed);
// Type: OVR.OpenVR::VRControllerState_t_Packed
// SizeInfo { instance_size: 60, native_size: 60, calculated_instance_size: 60, calculated_native_size: 76, minimum_alignment: 4, natural_alignment: 8, packing: Some(4), specified_packing: Some(4) }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8695))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8697))
// CS Name: ::OVR.OpenVR::VRControllerState_t_Packed
#pragma pack(push, 4)
struct CORDL_TYPE VRControllerState_t_Packed {
public:
  // Declarations
  /// @brief Method .ctor addr 0x27f1360 size 0x44 virtual false final false
  inline void _ctor(::OVR::OpenVR::VRControllerState_t unpacked);

  /// @brief Method Unpack addr 0x27f13a4 size 0x3c virtual false final false
  inline void Unpack(ByRef<::OVR::OpenVR::VRControllerState_t> unpacked);

  // Ctor Parameters [CppParam { name: "unPacketNum", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulButtonPressed", ty: "uint64_t", modifiers: "", def_value: None }, CppParam {
  // name: "ulButtonTouched", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "rAxis0", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name:
  // "rAxis1", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis2", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam
  // { name: "rAxis3", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis4", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }]
  constexpr VRControllerState_t_Packed(uint32_t unPacketNum, uint64_t ulButtonPressed, uint64_t ulButtonTouched, ::OVR::OpenVR::VRControllerAxis_t rAxis0, ::OVR::OpenVR::VRControllerAxis_t rAxis1,
                                       ::OVR::OpenVR::VRControllerAxis_t rAxis2, ::OVR::OpenVR::VRControllerAxis_t rAxis3, ::OVR::OpenVR::VRControllerAxis_t rAxis4) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllerState_t_Packed();

  /// @brief Field unPacketNum, offset: 0x0, size: 0x4, def value: None
  uint32_t unPacketNum;

  /// @brief Field ulButtonPressed, offset: 0x4, size: 0x8, def value: None
  uint64_t ulButtonPressed;

  /// @brief Field ulButtonTouched, offset: 0xc, size: 0x8, def value: None
  uint64_t ulButtonTouched;

  /// @brief Field rAxis0, offset: 0x14, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis0;

  /// @brief Field rAxis1, offset: 0x1c, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis1;

  /// @brief Field rAxis2, offset: 0x24, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis2;

  /// @brief Field rAxis3, offset: 0x2c, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis3;

  /// @brief Field rAxis4, offset: 0x34, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRControllerState_t_Packed, 0x3c>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRControllerState_t_Packed, "OVR.OpenVR", "VRControllerState_t_Packed");
