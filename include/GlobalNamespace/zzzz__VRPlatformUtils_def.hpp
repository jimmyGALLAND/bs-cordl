#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VRPlatformUtils)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class VRPlatformUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRPlatformUtils);
// Type: ::VRPlatformUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14417))
// CS Name: ::VRPlatformUtils*
class CORDL_TYPE VRPlatformUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method TriggerValueDefaultImplementation addr 0x20f73c8 size 0x80 virtual false final false
  static inline float_t TriggerValueDefaultImplementation(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButtonDefaultImplementation addr 0x20f6ca0 size 0x78 virtual false final false
  static inline bool GetMenuButtonDefaultImplementation();

  /// @brief Method GetMenuButtonDownDefaultImplementation addr 0x20f6d1c size 0x78 virtual false final false
  static inline bool GetMenuButtonDownDefaultImplementation();

  /// @brief Method GetAnyJoystickMaxAxisDefaultImplementation addr 0x20f7448 size 0x154 virtual false final false
  static inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxisDefaultImplementation(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method StopXR addr 0x20f759c size 0x100 virtual false final false
  static inline void StopXR(::GlobalNamespace::IVerboseLogger* logger);

  // Ctor Parameters [CppParam { name: "", ty: "VRPlatformUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRPlatformUtils(VRPlatformUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRPlatformUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRPlatformUtils(VRPlatformUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRPlatformUtils();

public:
  /// @brief Field kTriggerLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kTriggerLeftHand{ u"TriggerLeftHand" };

  /// @brief Field kTriggerRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kTriggerRightHand{ u"TriggerRightHand" };

  /// @brief Field kMenuButtonLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonLeftHand{ u"OpenXRPrimaryButtonRightHand" };

  /// @brief Field kMenuButtonRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonRightHand{ u"OpenXRPrimaryButtonLeftHand" };

  /// @brief Field kMenuButtonOculusTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString kMenuButtonOculusTouch{ u"MenuButtonOculusTouch" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRPlatformUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRPlatformUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRPlatformUtils*, "", "VRPlatformUtils");
