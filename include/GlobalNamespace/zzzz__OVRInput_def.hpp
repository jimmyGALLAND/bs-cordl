#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput)
namespace GlobalNamespace {
struct __OVRInput__Button;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerTouch;
}
namespace GlobalNamespace {
struct __OVRInput__RawTouch;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRemote;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace GlobalNamespace {
struct __OVRInput__InputDeviceShowState;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsLocation;
}
namespace GlobalNamespace {
struct __OVRInput__Touch;
}
namespace GlobalNamespace {
struct __OVRInput__Handedness;
}
namespace System {
class Version;
}
namespace GlobalNamespace {
struct __OVRInput__RawAxis1D;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRController;
}
namespace GlobalNamespace {
class __OVRInput__HapticInfo;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerLHand;
}
namespace GlobalNamespace {
struct __OVRInput__Axis1D;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRHand;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct __OVRInput__InteractionProfile;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsPcmVibration;
}
namespace GlobalNamespace {
struct __OVRInput__RawButton;
}
namespace GlobalNamespace {
struct __OVRInput__Hand;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRTouch;
}
namespace GlobalNamespace {
struct __OVRInput__ControllerInHandState;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
struct __OVRInput__Axis2D;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRControllerDetails;
}
namespace GlobalNamespace {
struct __OVRInput__RawNearTouch;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct __OVRInput__Controller;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRButton;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerHands;
}
namespace GlobalNamespace {
struct __OVRInput__NearTouch;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerLTouch;
}
namespace GlobalNamespace {
struct __OVRInput__RawAxis2D;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualAxis2DMap;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState6;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualButtonMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualNearTouchMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualAxis1DMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualTouchMap;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRInput__Axis1D;
}
namespace GlobalNamespace {
struct __OVRInput__Axis2D;
}
namespace GlobalNamespace {
struct __OVRInput__Button;
}
namespace GlobalNamespace {
struct __OVRInput__Controller;
}
namespace GlobalNamespace {
struct __OVRInput__ControllerInHandState;
}
namespace GlobalNamespace {
struct __OVRInput__Hand;
}
namespace GlobalNamespace {
struct __OVRInput__Handedness;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsLocation;
}
namespace GlobalNamespace {
struct __OVRInput__InputDeviceShowState;
}
namespace GlobalNamespace {
struct __OVRInput__InteractionProfile;
}
namespace GlobalNamespace {
struct __OVRInput__NearTouch;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRButton;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRController;
}
namespace GlobalNamespace {
struct __OVRInput__RawAxis1D;
}
namespace GlobalNamespace {
struct __OVRInput__RawAxis2D;
}
namespace GlobalNamespace {
struct __OVRInput__RawButton;
}
namespace GlobalNamespace {
struct __OVRInput__RawNearTouch;
}
namespace GlobalNamespace {
struct __OVRInput__RawTouch;
}
namespace GlobalNamespace {
struct __OVRInput__Touch;
}
namespace GlobalNamespace {
class OVRInput;
}
namespace GlobalNamespace {
class __OVRInput__HapticInfo;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualAxis1DMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualAxis2DMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualButtonMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualNearTouchMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualTouchMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerHands;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerLHand;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerLTouch;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRHand;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRTouch;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRemote;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerTouch;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsPcmVibration;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRControllerDetails;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRInput__Axis1D);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Axis2D);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Button);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Controller);
MARK_VAL_T(::GlobalNamespace::__OVRInput__ControllerInHandState);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Hand);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Handedness);
MARK_VAL_T(::GlobalNamespace::__OVRInput__HapticsLocation);
MARK_VAL_T(::GlobalNamespace::__OVRInput__InputDeviceShowState);
MARK_VAL_T(::GlobalNamespace::__OVRInput__InteractionProfile);
MARK_VAL_T(::GlobalNamespace::__OVRInput__NearTouch);
MARK_VAL_T(::GlobalNamespace::__OVRInput__OpenVRButton);
MARK_VAL_T(::GlobalNamespace::__OVRInput__OpenVRController);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawAxis1D);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawAxis2D);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawButton);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawNearTouch);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawTouch);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Touch);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__HapticInfo);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerGamepadPC);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerHands);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerLHand);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerLTouch);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerRHand);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerRTouch);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerRemote);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerTouch);
MARK_VAL_T(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration);
MARK_VAL_T(::GlobalNamespace::__OVRInput__HapticsPcmVibration);
MARK_VAL_T(::GlobalNamespace::__OVRInput__OpenVRControllerDetails);
// Type: ::Button
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7587))
// CS Name: ::OVRInput::Button
struct CORDL_TYPE __OVRInput__Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Button_Unwrapped
  enum struct ____OVRInput__Button_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_One = static_cast<int32_t>(0x1),
    __E_Two = static_cast<int32_t>(0x2),
    __E_Three = static_cast<int32_t>(0x4),
    __E_Four = static_cast<int32_t>(0x8),
    __E_Start = static_cast<int32_t>(0x100),
    __E_Back = static_cast<int32_t>(0x200),
    __E_PrimaryShoulder = static_cast<int32_t>(0x1000),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x2000),
    __E_PrimaryHandTrigger = static_cast<int32_t>(0x4000),
    __E_PrimaryThumbstick = static_cast<int32_t>(0x8000),
    __E_PrimaryThumbstickUp = static_cast<int32_t>(0x10000),
    __E_PrimaryThumbstickDown = static_cast<int32_t>(0x20000),
    __E_PrimaryThumbstickLeft = static_cast<int32_t>(0x40000),
    __E_PrimaryThumbstickRight = static_cast<int32_t>(0x80000),
    __E_PrimaryTouchpad = static_cast<int32_t>(0x400),
    __E_SecondaryShoulder = static_cast<int32_t>(0x100000),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x200000),
    __E_SecondaryHandTrigger = static_cast<int32_t>(0x400000),
    __E_SecondaryThumbstick = static_cast<int32_t>(0x800000),
    __E_SecondaryThumbstickUp = static_cast<int32_t>(0x1000000),
    __E_SecondaryThumbstickDown = static_cast<int32_t>(0x2000000),
    __E_SecondaryThumbstickLeft = static_cast<int32_t>(0x4000000),
    __E_SecondaryThumbstickRight = static_cast<int32_t>(0x8000000),
    __E_SecondaryTouchpad = static_cast<int32_t>(0x800),
    __E_DpadUp = static_cast<int32_t>(0x10),
    __E_DpadDown = static_cast<int32_t>(0x20),
    __E_DpadLeft = static_cast<int32_t>(0x40),
    __E_DpadRight = static_cast<int32_t>(0x80),
    __E_Up = static_cast<int32_t>(0x10000000),
    __E_Down = static_cast<int32_t>(0x20000000),
    __E_Left = static_cast<int32_t>(0x40000000),
    __E_Right = static_cast<int32_t>(0x80000000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Button_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Button_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Button(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Button();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Button const None;

  /// @brief Field One value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Button const One;

  /// @brief Field Two value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Button const Two;

  /// @brief Field Three value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Button const Three;

  /// @brief Field Four value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__Button const Four;

  /// @brief Field Start value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__Button const Start;

  /// @brief Field Back value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__Button const Back;

  /// @brief Field PrimaryShoulder value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryShoulder;

  /// @brief Field PrimaryIndexTrigger value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger value: static_cast<int32_t>(0x4000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryHandTrigger;

  /// @brief Field PrimaryThumbstick value: static_cast<int32_t>(0x8000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickUp value: static_cast<int32_t>(0x10000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstickUp;

  /// @brief Field PrimaryThumbstickDown value: static_cast<int32_t>(0x20000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft value: static_cast<int32_t>(0x40000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight value: static_cast<int32_t>(0x80000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstickRight;

  /// @brief Field PrimaryTouchpad value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryTouchpad;

  /// @brief Field SecondaryShoulder value: static_cast<int32_t>(0x100000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryShoulder;

  /// @brief Field SecondaryIndexTrigger value: static_cast<int32_t>(0x200000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger value: static_cast<int32_t>(0x400000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryHandTrigger;

  /// @brief Field SecondaryThumbstick value: static_cast<int32_t>(0x800000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickUp value: static_cast<int32_t>(0x1000000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstickUp;

  /// @brief Field SecondaryThumbstickDown value: static_cast<int32_t>(0x2000000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft value: static_cast<int32_t>(0x4000000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight value: static_cast<int32_t>(0x8000000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstickRight;

  /// @brief Field SecondaryTouchpad value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryTouchpad;

  /// @brief Field DpadUp value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__Button const DpadUp;

  /// @brief Field DpadDown value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__Button const DpadDown;

  /// @brief Field DpadLeft value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__Button const DpadLeft;

  /// @brief Field DpadRight value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRInput__Button const DpadRight;

  /// @brief Field Up value: static_cast<int32_t>(0x10000000)
  static ::GlobalNamespace::__OVRInput__Button const Up;

  /// @brief Field Down value: static_cast<int32_t>(0x20000000)
  static ::GlobalNamespace::__OVRInput__Button const Down;

  /// @brief Field Left value: static_cast<int32_t>(0x40000000)
  static ::GlobalNamespace::__OVRInput__Button const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRInput__Button const Right;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Button const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Button, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RawButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7588))
// CS Name: ::OVRInput::RawButton
struct CORDL_TYPE __OVRInput__RawButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawButton_Unwrapped
  enum struct ____OVRInput__RawButton_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_A = static_cast<int32_t>(0x1),
    __E_B = static_cast<int32_t>(0x2),
    __E_X = static_cast<int32_t>(0x100),
    __E_Y = static_cast<int32_t>(0x200),
    __E_Start = static_cast<int32_t>(0x100000),
    __E_Back = static_cast<int32_t>(0x200000),
    __E_LShoulder = static_cast<int32_t>(0x800),
    __E_LIndexTrigger = static_cast<int32_t>(0x10000000),
    __E_LHandTrigger = static_cast<int32_t>(0x20000000),
    __E_LThumbstick = static_cast<int32_t>(0x400),
    __E_LThumbstickUp = static_cast<int32_t>(0x10),
    __E_LThumbstickDown = static_cast<int32_t>(0x20),
    __E_LThumbstickLeft = static_cast<int32_t>(0x40),
    __E_LThumbstickRight = static_cast<int32_t>(0x80),
    __E_LTouchpad = static_cast<int32_t>(0x40000000),
    __E_RShoulder = static_cast<int32_t>(0x8),
    __E_RIndexTrigger = static_cast<int32_t>(0x4000000),
    __E_RHandTrigger = static_cast<int32_t>(0x8000000),
    __E_RThumbstick = static_cast<int32_t>(0x4),
    __E_RThumbstickUp = static_cast<int32_t>(0x1000),
    __E_RThumbstickDown = static_cast<int32_t>(0x2000),
    __E_RThumbstickLeft = static_cast<int32_t>(0x4000),
    __E_RThumbstickRight = static_cast<int32_t>(0x8000),
    __E_RTouchpad = static_cast<int32_t>(0x80000000),
    __E_DpadUp = static_cast<int32_t>(0x10000),
    __E_DpadDown = static_cast<int32_t>(0x20000),
    __E_DpadLeft = static_cast<int32_t>(0x40000),
    __E_DpadRight = static_cast<int32_t>(0x80000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__RawButton_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawButton_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawButton(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawButton();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawButton const None;

  /// @brief Field A value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawButton const A;

  /// @brief Field B value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawButton const B;

  /// @brief Field X value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__RawButton const X;

  /// @brief Field Y value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__RawButton const Y;

  /// @brief Field Start value: static_cast<int32_t>(0x100000)
  static ::GlobalNamespace::__OVRInput__RawButton const Start;

  /// @brief Field Back value: static_cast<int32_t>(0x200000)
  static ::GlobalNamespace::__OVRInput__RawButton const Back;

  /// @brief Field LShoulder value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__RawButton const LShoulder;

  /// @brief Field LIndexTrigger value: static_cast<int32_t>(0x10000000)
  static ::GlobalNamespace::__OVRInput__RawButton const LIndexTrigger;

  /// @brief Field LHandTrigger value: static_cast<int32_t>(0x20000000)
  static ::GlobalNamespace::__OVRInput__RawButton const LHandTrigger;

  /// @brief Field LThumbstick value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstick;

  /// @brief Field LThumbstickUp value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstickUp;

  /// @brief Field LThumbstickDown value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstickDown;

  /// @brief Field LThumbstickLeft value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstickLeft;

  /// @brief Field LThumbstickRight value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstickRight;

  /// @brief Field LTouchpad value: static_cast<int32_t>(0x40000000)
  static ::GlobalNamespace::__OVRInput__RawButton const LTouchpad;

  /// @brief Field RShoulder value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawButton const RShoulder;

  /// @brief Field RIndexTrigger value: static_cast<int32_t>(0x4000000)
  static ::GlobalNamespace::__OVRInput__RawButton const RIndexTrigger;

  /// @brief Field RHandTrigger value: static_cast<int32_t>(0x8000000)
  static ::GlobalNamespace::__OVRInput__RawButton const RHandTrigger;

  /// @brief Field RThumbstick value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstick;

  /// @brief Field RThumbstickUp value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstickUp;

  /// @brief Field RThumbstickDown value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstickDown;

  /// @brief Field RThumbstickLeft value: static_cast<int32_t>(0x4000)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstickLeft;

  /// @brief Field RThumbstickRight value: static_cast<int32_t>(0x8000)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstickRight;

  /// @brief Field RTouchpad value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRInput__RawButton const RTouchpad;

  /// @brief Field DpadUp value: static_cast<int32_t>(0x10000)
  static ::GlobalNamespace::__OVRInput__RawButton const DpadUp;

  /// @brief Field DpadDown value: static_cast<int32_t>(0x20000)
  static ::GlobalNamespace::__OVRInput__RawButton const DpadDown;

  /// @brief Field DpadLeft value: static_cast<int32_t>(0x40000)
  static ::GlobalNamespace::__OVRInput__RawButton const DpadLeft;

  /// @brief Field DpadRight value: static_cast<int32_t>(0x80000)
  static ::GlobalNamespace::__OVRInput__RawButton const DpadRight;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawButton const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawButton, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Touch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7589))
// CS Name: ::OVRInput::Touch
struct CORDL_TYPE __OVRInput__Touch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Touch_Unwrapped
  enum struct ____OVRInput__Touch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_One = static_cast<int32_t>(0x1),
    __E_Two = static_cast<int32_t>(0x2),
    __E_Three = static_cast<int32_t>(0x4),
    __E_Four = static_cast<int32_t>(0x8),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x2000),
    __E_PrimaryThumbstick = static_cast<int32_t>(0x8000),
    __E_PrimaryThumbRest = static_cast<int32_t>(0x1000),
    __E_PrimaryTouchpad = static_cast<int32_t>(0x400),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x200000),
    __E_SecondaryThumbstick = static_cast<int32_t>(0x800000),
    __E_SecondaryThumbRest = static_cast<int32_t>(0x100000),
    __E_SecondaryTouchpad = static_cast<int32_t>(0x800),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Touch_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Touch_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Touch(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Touch();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Touch const None;

  /// @brief Field One value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Touch const One;

  /// @brief Field Two value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Touch const Two;

  /// @brief Field Three value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Touch const Three;

  /// @brief Field Four value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__Touch const Four;

  /// @brief Field PrimaryIndexTrigger value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__Touch const PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbstick value: static_cast<int32_t>(0x8000)
  static ::GlobalNamespace::__OVRInput__Touch const PrimaryThumbstick;

  /// @brief Field PrimaryThumbRest value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__Touch const PrimaryThumbRest;

  /// @brief Field PrimaryTouchpad value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__Touch const PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger value: static_cast<int32_t>(0x200000)
  static ::GlobalNamespace::__OVRInput__Touch const SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbstick value: static_cast<int32_t>(0x800000)
  static ::GlobalNamespace::__OVRInput__Touch const SecondaryThumbstick;

  /// @brief Field SecondaryThumbRest value: static_cast<int32_t>(0x100000)
  static ::GlobalNamespace::__OVRInput__Touch const SecondaryThumbRest;

  /// @brief Field SecondaryTouchpad value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__Touch const SecondaryTouchpad;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Touch const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Touch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RawTouch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7590))
// CS Name: ::OVRInput::RawTouch
struct CORDL_TYPE __OVRInput__RawTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawTouch_Unwrapped
  enum struct ____OVRInput__RawTouch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_A = static_cast<int32_t>(0x1),
    __E_B = static_cast<int32_t>(0x2),
    __E_X = static_cast<int32_t>(0x100),
    __E_Y = static_cast<int32_t>(0x200),
    __E_LIndexTrigger = static_cast<int32_t>(0x1000),
    __E_LThumbstick = static_cast<int32_t>(0x400),
    __E_LThumbRest = static_cast<int32_t>(0x800),
    __E_LTouchpad = static_cast<int32_t>(0x40000000),
    __E_RIndexTrigger = static_cast<int32_t>(0x10),
    __E_RThumbstick = static_cast<int32_t>(0x4),
    __E_RThumbRest = static_cast<int32_t>(0x8),
    __E_RTouchpad = static_cast<int32_t>(0x80000000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__RawTouch_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawTouch_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawTouch(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawTouch();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawTouch const None;

  /// @brief Field A value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawTouch const A;

  /// @brief Field B value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawTouch const B;

  /// @brief Field X value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__RawTouch const X;

  /// @brief Field Y value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__RawTouch const Y;

  /// @brief Field LIndexTrigger value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__RawTouch const LIndexTrigger;

  /// @brief Field LThumbstick value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__RawTouch const LThumbstick;

  /// @brief Field LThumbRest value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__RawTouch const LThumbRest;

  /// @brief Field LTouchpad value: static_cast<int32_t>(0x40000000)
  static ::GlobalNamespace::__OVRInput__RawTouch const LTouchpad;

  /// @brief Field RIndexTrigger value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__RawTouch const RIndexTrigger;

  /// @brief Field RThumbstick value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawTouch const RThumbstick;

  /// @brief Field RThumbRest value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawTouch const RThumbRest;

  /// @brief Field RTouchpad value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRInput__RawTouch const RTouchpad;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawTouch const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawTouch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NearTouch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7591))
// CS Name: ::OVRInput::NearTouch
struct CORDL_TYPE __OVRInput__NearTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__NearTouch_Unwrapped
  enum struct ____OVRInput__NearTouch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x1),
    __E_PrimaryThumbButtons = static_cast<int32_t>(0x2),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x4),
    __E_SecondaryThumbButtons = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__NearTouch_Unwrapped() const noexcept {
    return static_cast<____OVRInput__NearTouch_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__NearTouch(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__NearTouch();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__NearTouch const None;

  /// @brief Field PrimaryIndexTrigger value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__NearTouch const PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__NearTouch const PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__NearTouch const SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__NearTouch const SecondaryThumbButtons;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__NearTouch const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__NearTouch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RawNearTouch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7592))
// CS Name: ::OVRInput::RawNearTouch
struct CORDL_TYPE __OVRInput__RawNearTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawNearTouch_Unwrapped
  enum struct ____OVRInput__RawNearTouch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LIndexTrigger = static_cast<int32_t>(0x1),
    __E_LThumbButtons = static_cast<int32_t>(0x2),
    __E_RIndexTrigger = static_cast<int32_t>(0x4),
    __E_RThumbButtons = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__RawNearTouch_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawNearTouch_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawNearTouch(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawNearTouch();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const None;

  /// @brief Field LIndexTrigger value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const LIndexTrigger;

  /// @brief Field LThumbButtons value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const LThumbButtons;

  /// @brief Field RIndexTrigger value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const RIndexTrigger;

  /// @brief Field RThumbButtons value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const RThumbButtons;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawNearTouch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Axis1D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7593))
// CS Name: ::OVRInput::Axis1D
struct CORDL_TYPE __OVRInput__Axis1D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Axis1D_Unwrapped
  enum struct ____OVRInput__Axis1D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x1),
    __E_PrimaryHandTrigger = static_cast<int32_t>(0x4),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x2),
    __E_SecondaryHandTrigger = static_cast<int32_t>(0x8),
    __E_PrimaryIndexTriggerCurl = static_cast<int32_t>(0x10),
    __E_PrimaryIndexTriggerSlide = static_cast<int32_t>(0x20),
    __E_PrimaryThumbRestForce = static_cast<int32_t>(0x40),
    __E_PrimaryStylusForce = static_cast<int32_t>(0x80),
    __E_SecondaryIndexTriggerCurl = static_cast<int32_t>(0x100),
    __E_SecondaryIndexTriggerSlide = static_cast<int32_t>(0x200),
    __E_SecondaryThumbRestForce = static_cast<int32_t>(0x400),
    __E_SecondaryStylusForce = static_cast<int32_t>(0x800),
    __E_PrimaryIndexTriggerForce = static_cast<int32_t>(0x1000),
    __E_SecondaryIndexTriggerForce = static_cast<int32_t>(0x2000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Axis1D_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Axis1D_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Axis1D(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Axis1D();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Axis1D const None;

  /// @brief Field PrimaryIndexTrigger value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryHandTrigger;

  /// @brief Field PrimaryIndexTriggerCurl value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerSlide value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryThumbRestForce value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryThumbRestForce;

  /// @brief Field PrimaryStylusForce value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryStylusForce;

  /// @brief Field SecondaryIndexTriggerCurl value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerSlide value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryThumbRestForce value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryThumbRestForce;

  /// @brief Field SecondaryStylusForce value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryStylusForce;

  /// @brief Field PrimaryIndexTriggerForce value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerForce value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryIndexTriggerForce;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Axis1D const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Axis1D, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RawAxis1D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7594))
// CS Name: ::OVRInput::RawAxis1D
struct CORDL_TYPE __OVRInput__RawAxis1D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawAxis1D_Unwrapped
  enum struct ____OVRInput__RawAxis1D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LIndexTrigger = static_cast<int32_t>(0x1),
    __E_LHandTrigger = static_cast<int32_t>(0x4),
    __E_RIndexTrigger = static_cast<int32_t>(0x2),
    __E_RHandTrigger = static_cast<int32_t>(0x8),
    __E_LIndexTriggerCurl = static_cast<int32_t>(0x10),
    __E_LIndexTriggerSlide = static_cast<int32_t>(0x20),
    __E_LThumbRestForce = static_cast<int32_t>(0x40),
    __E_LStylusForce = static_cast<int32_t>(0x80),
    __E_RIndexTriggerCurl = static_cast<int32_t>(0x100),
    __E_RIndexTriggerSlide = static_cast<int32_t>(0x200),
    __E_RThumbRestForce = static_cast<int32_t>(0x400),
    __E_RStylusForce = static_cast<int32_t>(0x800),
    __E_LIndexTriggerForce = static_cast<int32_t>(0x1000),
    __E_RIndexTriggerForce = static_cast<int32_t>(0x2000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__RawAxis1D_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawAxis1D_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawAxis1D(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawAxis1D();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const None;

  /// @brief Field LIndexTrigger value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LIndexTrigger;

  /// @brief Field LHandTrigger value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LHandTrigger;

  /// @brief Field RIndexTrigger value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RIndexTrigger;

  /// @brief Field RHandTrigger value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RHandTrigger;

  /// @brief Field LIndexTriggerCurl value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LIndexTriggerCurl;

  /// @brief Field LIndexTriggerSlide value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LIndexTriggerSlide;

  /// @brief Field LThumbRestForce value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LThumbRestForce;

  /// @brief Field LStylusForce value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LStylusForce;

  /// @brief Field RIndexTriggerCurl value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RIndexTriggerCurl;

  /// @brief Field RIndexTriggerSlide value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RIndexTriggerSlide;

  /// @brief Field RThumbRestForce value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RThumbRestForce;

  /// @brief Field RStylusForce value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RStylusForce;

  /// @brief Field LIndexTriggerForce value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LIndexTriggerForce;

  /// @brief Field RIndexTriggerForce value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RIndexTriggerForce;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawAxis1D, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Axis2D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7595))
// CS Name: ::OVRInput::Axis2D
struct CORDL_TYPE __OVRInput__Axis2D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Axis2D_Unwrapped
  enum struct ____OVRInput__Axis2D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryThumbstick = static_cast<int32_t>(0x1),
    __E_PrimaryTouchpad = static_cast<int32_t>(0x4),
    __E_SecondaryThumbstick = static_cast<int32_t>(0x2),
    __E_SecondaryTouchpad = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Axis2D_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Axis2D_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Axis2D(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Axis2D();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Axis2D const None;

  /// @brief Field PrimaryThumbstick value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Axis2D const PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Axis2D const PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Axis2D const SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__Axis2D const SecondaryTouchpad;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Axis2D const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Axis2D, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RawAxis2D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7596))
// CS Name: ::OVRInput::RawAxis2D
struct CORDL_TYPE __OVRInput__RawAxis2D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawAxis2D_Unwrapped
  enum struct ____OVRInput__RawAxis2D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LThumbstick = static_cast<int32_t>(0x1),
    __E_LTouchpad = static_cast<int32_t>(0x4),
    __E_RThumbstick = static_cast<int32_t>(0x2),
    __E_RTouchpad = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__RawAxis2D_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawAxis2D_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawAxis2D(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawAxis2D();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const None;

  /// @brief Field LThumbstick value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const LThumbstick;

  /// @brief Field LTouchpad value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const LTouchpad;

  /// @brief Field RThumbstick value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const RThumbstick;

  /// @brief Field RTouchpad value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const RTouchpad;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawAxis2D, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OpenVRButton
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7597))
// CS Name: ::OVRInput::OpenVRButton
struct CORDL_TYPE __OVRInput__OpenVRButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct ____OVRInput__OpenVRButton_Unwrapped
  enum struct ____OVRInput__OpenVRButton_Unwrapped : uint64_t {
    __E_None = static_cast<uint64_t>(0x0u),
    __E_Two = static_cast<uint64_t>(0x2u),
    __E_Thumbstick = static_cast<uint64_t>(0x100000000u),
    __E_Grip = static_cast<uint64_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__OpenVRButton_Unwrapped() const noexcept {
    return static_cast<____OVRInput__OpenVRButton_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__OpenVRButton(uint64_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OpenVRButton();

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field None value: static_cast<uint64_t>(0x0u)
  static ::GlobalNamespace::__OVRInput__OpenVRButton const None;

  /// @brief Field Two value: static_cast<uint64_t>(0x2u)
  static ::GlobalNamespace::__OVRInput__OpenVRButton const Two;

  /// @brief Field Thumbstick value: static_cast<uint64_t>(0x100000000u)
  static ::GlobalNamespace::__OVRInput__OpenVRButton const Thumbstick;

  /// @brief Field Grip value: static_cast<uint64_t>(0x4u)
  static ::GlobalNamespace::__OVRInput__OpenVRButton const Grip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OpenVRButton, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Controller
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7598))
// CS Name: ::OVRInput::Controller
struct CORDL_TYPE __OVRInput__Controller {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Controller_Unwrapped
  enum struct ____OVRInput__Controller_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LTouch = static_cast<int32_t>(0x1),
    __E_RTouch = static_cast<int32_t>(0x2),
    __E_Touch = static_cast<int32_t>(0x3),
    __E_Remote = static_cast<int32_t>(0x4),
    __E_Gamepad = static_cast<int32_t>(0x10),
    __E_Hands = static_cast<int32_t>(0x60),
    __E_LHand = static_cast<int32_t>(0x20),
    __E_RHand = static_cast<int32_t>(0x40),
    __E_Active = static_cast<int32_t>(0x80000000),
    __E_All = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Controller_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Controller_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Controller(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Controller();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Controller const None;

  /// @brief Field LTouch value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Controller const LTouch;

  /// @brief Field RTouch value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Controller const RTouch;

  /// @brief Field Touch value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRInput__Controller const Touch;

  /// @brief Field Remote value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Controller const Remote;

  /// @brief Field Gamepad value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__Controller const Gamepad;

  /// @brief Field Hands value: static_cast<int32_t>(0x60)
  static ::GlobalNamespace::__OVRInput__Controller const Hands;

  /// @brief Field LHand value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__Controller const LHand;

  /// @brief Field RHand value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__Controller const RHand;

  /// @brief Field Active value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRInput__Controller const Active;

  /// @brief Field All value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Controller const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Controller, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Handedness
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7599))
// CS Name: ::OVRInput::Handedness
struct CORDL_TYPE __OVRInput__Handedness {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Handedness_Unwrapped
  enum struct ____OVRInput__Handedness_Unwrapped : int32_t {
    __E_Unsupported = static_cast<int32_t>(0x0),
    __E_LeftHanded = static_cast<int32_t>(0x1),
    __E_RightHanded = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Handedness_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Handedness_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Handedness(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Handedness();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unsupported value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Handedness const Unsupported;

  /// @brief Field LeftHanded value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Handedness const LeftHanded;

  /// @brief Field RightHanded value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Handedness const RightHanded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Handedness, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsLocation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7600))
// CS Name: ::OVRInput::HapticsLocation
struct CORDL_TYPE __OVRInput__HapticsLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__HapticsLocation_Unwrapped
  enum struct ____OVRInput__HapticsLocation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Hand = static_cast<int32_t>(0x1),
    __E_Thumb = static_cast<int32_t>(0x2),
    __E_Index = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__HapticsLocation_Unwrapped() const noexcept {
    return static_cast<____OVRInput__HapticsLocation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__HapticsLocation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__HapticsLocation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__HapticsLocation const None;

  /// @brief Field Hand value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__HapticsLocation const Hand;

  /// @brief Field Thumb value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__HapticsLocation const Thumb;

  /// @brief Field Index value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__HapticsLocation const Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__HapticsLocation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InteractionProfile
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7601))
// CS Name: ::OVRInput::InteractionProfile
struct CORDL_TYPE __OVRInput__InteractionProfile {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__InteractionProfile_Unwrapped
  enum struct ____OVRInput__InteractionProfile_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Touch = static_cast<int32_t>(0x1),
    __E_TouchPro = static_cast<int32_t>(0x2),
    __E_TouchPlus = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__InteractionProfile_Unwrapped() const noexcept {
    return static_cast<____OVRInput__InteractionProfile_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__InteractionProfile(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__InteractionProfile();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__InteractionProfile const None;

  /// @brief Field Touch value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__InteractionProfile const Touch;

  /// @brief Field TouchPro value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__InteractionProfile const TouchPro;

  /// @brief Field TouchPlus value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__InteractionProfile const TouchPlus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__InteractionProfile, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Hand
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7602))
// CS Name: ::OVRInput::Hand
struct CORDL_TYPE __OVRInput__Hand {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Hand_Unwrapped
  enum struct ____OVRInput__Hand_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Hand_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Hand_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Hand(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Hand();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Hand const None;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Hand const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Hand const HandRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Hand, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InputDeviceShowState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7603))
// CS Name: ::OVRInput::InputDeviceShowState
struct CORDL_TYPE __OVRInput__InputDeviceShowState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__InputDeviceShowState_Unwrapped
  enum struct ____OVRInput__InputDeviceShowState_Unwrapped : int32_t {
    __E_Always = static_cast<int32_t>(0x0),
    __E_ControllerInHandOrNoHand = static_cast<int32_t>(0x1),
    __E_ControllerInHand = static_cast<int32_t>(0x2),
    __E_ControllerNotInHand = static_cast<int32_t>(0x3),
    __E_NoHand = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__InputDeviceShowState_Unwrapped() const noexcept {
    return static_cast<____OVRInput__InputDeviceShowState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__InputDeviceShowState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__InputDeviceShowState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Always value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const Always;

  /// @brief Field ControllerInHandOrNoHand value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const ControllerInHandOrNoHand;

  /// @brief Field ControllerInHand value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const ControllerInHand;

  /// @brief Field ControllerNotInHand value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const ControllerNotInHand;

  /// @brief Field NoHand value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const NoHand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__InputDeviceShowState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ControllerInHandState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7604))
// CS Name: ::OVRInput::ControllerInHandState
struct CORDL_TYPE __OVRInput__ControllerInHandState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__ControllerInHandState_Unwrapped
  enum struct ____OVRInput__ControllerInHandState_Unwrapped : int32_t {
    __E_NoHand = static_cast<int32_t>(0x0),
    __E_ControllerInHand = static_cast<int32_t>(0x1),
    __E_ControllerNotInHand = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__ControllerInHandState_Unwrapped() const noexcept {
    return static_cast<____OVRInput__ControllerInHandState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__ControllerInHandState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__ControllerInHandState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoHand value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__ControllerInHandState const NoHand;

  /// @brief Field ControllerInHand value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__ControllerInHandState const ControllerInHand;

  /// @brief Field ControllerNotInHand value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__ControllerInHandState const ControllerNotInHand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__ControllerInHandState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsAmplitudeEnvelopeVibration
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7605))
// CS Name: ::OVRInput::HapticsAmplitudeEnvelopeVibration
struct CORDL_TYPE __OVRInput__HapticsAmplitudeEnvelopeVibration {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value:
  // None }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__HapticsAmplitudeEnvelopeVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples, float_t Duration) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__HapticsAmplitudeEnvelopeVibration();

  /// @brief Field SamplesCount, offset: 0x0, size: 0x4, def value: None
  int32_t SamplesCount;

  /// @brief Field Samples, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> Samples;

  /// @brief Field Duration, offset: 0x10, size: 0x4, def value: None
  float_t Duration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsPcmVibration
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7606))
// CS Name: ::OVRInput::HapticsPcmVibration
struct CORDL_TYPE __OVRInput__HapticsPcmVibration {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value:
  // None }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRInput__HapticsPcmVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples, float_t SampleRateHz, bool Append) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__HapticsPcmVibration();

  /// @brief Field SamplesCount, offset: 0x0, size: 0x4, def value: None
  int32_t SamplesCount;

  /// @brief Field Samples, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> Samples;

  /// @brief Field SampleRateHz, offset: 0x10, size: 0x4, def value: None
  float_t SampleRateHz;

  /// @brief Field Append, offset: 0x14, size: 0x1, def value: None
  bool Append;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__HapticsPcmVibration, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OpenVRController
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7607))
// CS Name: ::OVRInput::OpenVRController
struct CORDL_TYPE __OVRInput__OpenVRController {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct ____OVRInput__OpenVRController_Unwrapped
  enum struct ____OVRInput__OpenVRController_Unwrapped : uint64_t {
    __E_Unknown = static_cast<uint64_t>(0x0u),
    __E_OculusTouch = static_cast<uint64_t>(0x1u),
    __E_ViveController = static_cast<uint64_t>(0x2u),
    __E_WindowsMRController = static_cast<uint64_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__OpenVRController_Unwrapped() const noexcept {
    return static_cast<____OVRInput__OpenVRController_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__OpenVRController(uint64_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OpenVRController();

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Unknown value: static_cast<uint64_t>(0x0u)
  static ::GlobalNamespace::__OVRInput__OpenVRController const Unknown;

  /// @brief Field OculusTouch value: static_cast<uint64_t>(0x1u)
  static ::GlobalNamespace::__OVRInput__OpenVRController const OculusTouch;

  /// @brief Field ViveController value: static_cast<uint64_t>(0x2u)
  static ::GlobalNamespace::__OVRInput__OpenVRController const ViveController;

  /// @brief Field WindowsMRController value: static_cast<uint64_t>(0x3u)
  static ::GlobalNamespace::__OVRInput__OpenVRController const WindowsMRController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OpenVRController, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OpenVRControllerDetails
// SizeInfo { instance_size: 104, native_size: 104, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8696)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)),
// TypeDefinitionIndex(TypeDefinitionIndex(7607))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7608)) CS Name: ::OVRInput::OpenVRControllerDetails
struct CORDL_TYPE __OVRInput__OpenVRControllerDetails {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "state", ty: "::OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: None }, CppParam { name: "controllerType", ty:
  // "::GlobalNamespace::__OVRInput__OpenVRController", modifiers: "", def_value: None }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr __OVRInput__OpenVRControllerDetails(::OVR::OpenVR::VRControllerState_t state, ::GlobalNamespace::__OVRInput__OpenVRController controllerType, uint32_t deviceID,
                                                ::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localOrientation) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OpenVRControllerDetails();

  /// @brief Field state, offset: 0x0, size: 0x40, def value: None
  ::OVR::OpenVR::VRControllerState_t state;

  /// @brief Field controllerType, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OpenVRController controllerType;

  /// @brief Field deviceID, offset: 0x48, size: 0x4, def value: None
  uint32_t deviceID;

  /// @brief Field localPosition, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 localPosition;

  /// @brief Field localOrientation, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Quaternion localOrientation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15614)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7609))
// CS Name: ::OVRInput::HapticInfo*
class CORDL_TYPE __OVRInput__HapticInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field playingHaptics, offset 0x10, size 0x1
  __declspec(property(get = __get_playingHaptics, put = __set_playingHaptics)) bool playingHaptics;

  /// @brief Field hapticsDurationPlayed, offset 0x14, size 0x4
  __declspec(property(get = __get_hapticsDurationPlayed, put = __set_hapticsDurationPlayed)) float_t hapticsDurationPlayed;

  /// @brief Field hapticsDuration, offset 0x18, size 0x4
  __declspec(property(get = __get_hapticsDuration, put = __set_hapticsDuration)) float_t hapticsDuration;

  /// @brief Field hapticAmplitude, offset 0x1c, size 0x4
  __declspec(property(get = __get_hapticAmplitude, put = __set_hapticAmplitude)) float_t hapticAmplitude;

  /// @brief Field node, offset 0x20, size 0x4
  __declspec(property(get = __get_node, put = __set_node))::UnityEngine::XR::XRNode node;

  constexpr bool& __get_playingHaptics();

  constexpr bool const& __get_playingHaptics() const;

  constexpr void __set_playingHaptics(bool value);

  constexpr float_t& __get_hapticsDurationPlayed();

  constexpr float_t const& __get_hapticsDurationPlayed() const;

  constexpr void __set_hapticsDurationPlayed(float_t value);

  constexpr float_t& __get_hapticsDuration();

  constexpr float_t const& __get_hapticsDuration() const;

  constexpr void __set_hapticsDuration(float_t value);

  constexpr float_t& __get_hapticAmplitude();

  constexpr float_t const& __get_hapticAmplitude() const;

  constexpr void __set_hapticAmplitude(float_t value);

  constexpr ::UnityEngine::XR::XRNode& __get_node();

  constexpr ::UnityEngine::XR::XRNode const& __get_node() const;

  constexpr void __set_node(::UnityEngine::XR::XRNode value);

  static inline ::GlobalNamespace::__OVRInput__HapticInfo* New_ctor();

  /// @brief Method .ctor addr 0x2735714 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__HapticInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__HapticInfo(__OVRInput__HapticInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__HapticInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__HapticInfo(__OVRInput__HapticInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__HapticInfo();

public:
  /// @brief Field playingHaptics, offset: 0x10, size: 0x1, def value: None
  bool ___playingHaptics;

  /// @brief Field hapticsDurationPlayed, offset: 0x14, size: 0x4, def value: None
  float_t ___hapticsDurationPlayed;

  /// @brief Field hapticsDuration, offset: 0x18, size: 0x4, def value: None
  float_t ___hapticsDuration;

  /// @brief Field hapticAmplitude, offset: 0x1c, size: 0x4, def value: None
  float_t ___hapticAmplitude;

  /// @brief Field node, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__HapticInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualButtonMap
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7588)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7610))
// CS Name: ::OVRInput::OVRControllerBase::VirtualButtonMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualButtonMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __get_None, put = __set_None))::GlobalNamespace::__OVRInput__RawButton None;

  /// @brief Field One, offset 0x14, size 0x4
  __declspec(property(get = __get_One, put = __set_One))::GlobalNamespace::__OVRInput__RawButton One;

  /// @brief Field Two, offset 0x18, size 0x4
  __declspec(property(get = __get_Two, put = __set_Two))::GlobalNamespace::__OVRInput__RawButton Two;

  /// @brief Field Three, offset 0x1c, size 0x4
  __declspec(property(get = __get_Three, put = __set_Three))::GlobalNamespace::__OVRInput__RawButton Three;

  /// @brief Field Four, offset 0x20, size 0x4
  __declspec(property(get = __get_Four, put = __set_Four))::GlobalNamespace::__OVRInput__RawButton Four;

  /// @brief Field Start, offset 0x24, size 0x4
  __declspec(property(get = __get_Start, put = __set_Start))::GlobalNamespace::__OVRInput__RawButton Start;

  /// @brief Field Back, offset 0x28, size 0x4
  __declspec(property(get = __get_Back, put = __set_Back))::GlobalNamespace::__OVRInput__RawButton Back;

  /// @brief Field PrimaryShoulder, offset 0x2c, size 0x4
  __declspec(property(get = __get_PrimaryShoulder, put = __set_PrimaryShoulder))::GlobalNamespace::__OVRInput__RawButton PrimaryShoulder;

  /// @brief Field PrimaryIndexTrigger, offset 0x30, size 0x4
  __declspec(property(get = __get_PrimaryIndexTrigger, put = __set_PrimaryIndexTrigger))::GlobalNamespace::__OVRInput__RawButton PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger, offset 0x34, size 0x4
  __declspec(property(get = __get_PrimaryHandTrigger, put = __set_PrimaryHandTrigger))::GlobalNamespace::__OVRInput__RawButton PrimaryHandTrigger;

  /// @brief Field PrimaryThumbstick, offset 0x38, size 0x4
  __declspec(property(get = __get_PrimaryThumbstick, put = __set_PrimaryThumbstick))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickUp, offset 0x3c, size 0x4
  __declspec(property(get = __get_PrimaryThumbstickUp, put = __set_PrimaryThumbstickUp))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstickUp;

  /// @brief Field PrimaryThumbstickDown, offset 0x40, size 0x4
  __declspec(property(get = __get_PrimaryThumbstickDown, put = __set_PrimaryThumbstickDown))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft, offset 0x44, size 0x4
  __declspec(property(get = __get_PrimaryThumbstickLeft, put = __set_PrimaryThumbstickLeft))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight, offset 0x48, size 0x4
  __declspec(property(get = __get_PrimaryThumbstickRight, put = __set_PrimaryThumbstickRight))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstickRight;

  /// @brief Field PrimaryTouchpad, offset 0x4c, size 0x4
  __declspec(property(get = __get_PrimaryTouchpad, put = __set_PrimaryTouchpad))::GlobalNamespace::__OVRInput__RawButton PrimaryTouchpad;

  /// @brief Field SecondaryShoulder, offset 0x50, size 0x4
  __declspec(property(get = __get_SecondaryShoulder, put = __set_SecondaryShoulder))::GlobalNamespace::__OVRInput__RawButton SecondaryShoulder;

  /// @brief Field SecondaryIndexTrigger, offset 0x54, size 0x4
  __declspec(property(get = __get_SecondaryIndexTrigger, put = __set_SecondaryIndexTrigger))::GlobalNamespace::__OVRInput__RawButton SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger, offset 0x58, size 0x4
  __declspec(property(get = __get_SecondaryHandTrigger, put = __set_SecondaryHandTrigger))::GlobalNamespace::__OVRInput__RawButton SecondaryHandTrigger;

  /// @brief Field SecondaryThumbstick, offset 0x5c, size 0x4
  __declspec(property(get = __get_SecondaryThumbstick, put = __set_SecondaryThumbstick))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickUp, offset 0x60, size 0x4
  __declspec(property(get = __get_SecondaryThumbstickUp, put = __set_SecondaryThumbstickUp))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstickUp;

  /// @brief Field SecondaryThumbstickDown, offset 0x64, size 0x4
  __declspec(property(get = __get_SecondaryThumbstickDown, put = __set_SecondaryThumbstickDown))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft, offset 0x68, size 0x4
  __declspec(property(get = __get_SecondaryThumbstickLeft, put = __set_SecondaryThumbstickLeft))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight, offset 0x6c, size 0x4
  __declspec(property(get = __get_SecondaryThumbstickRight, put = __set_SecondaryThumbstickRight))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstickRight;

  /// @brief Field SecondaryTouchpad, offset 0x70, size 0x4
  __declspec(property(get = __get_SecondaryTouchpad, put = __set_SecondaryTouchpad))::GlobalNamespace::__OVRInput__RawButton SecondaryTouchpad;

  /// @brief Field DpadUp, offset 0x74, size 0x4
  __declspec(property(get = __get_DpadUp, put = __set_DpadUp))::GlobalNamespace::__OVRInput__RawButton DpadUp;

  /// @brief Field DpadDown, offset 0x78, size 0x4
  __declspec(property(get = __get_DpadDown, put = __set_DpadDown))::GlobalNamespace::__OVRInput__RawButton DpadDown;

  /// @brief Field DpadLeft, offset 0x7c, size 0x4
  __declspec(property(get = __get_DpadLeft, put = __set_DpadLeft))::GlobalNamespace::__OVRInput__RawButton DpadLeft;

  /// @brief Field DpadRight, offset 0x80, size 0x4
  __declspec(property(get = __get_DpadRight, put = __set_DpadRight))::GlobalNamespace::__OVRInput__RawButton DpadRight;

  /// @brief Field Up, offset 0x84, size 0x4
  __declspec(property(get = __get_Up, put = __set_Up))::GlobalNamespace::__OVRInput__RawButton Up;

  /// @brief Field Down, offset 0x88, size 0x4
  __declspec(property(get = __get_Down, put = __set_Down))::GlobalNamespace::__OVRInput__RawButton Down;

  /// @brief Field Left, offset 0x8c, size 0x4
  __declspec(property(get = __get_Left, put = __set_Left))::GlobalNamespace::__OVRInput__RawButton Left;

  /// @brief Field Right, offset 0x90, size 0x4
  __declspec(property(get = __get_Right, put = __set_Right))::GlobalNamespace::__OVRInput__RawButton Right;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_None() const;

  constexpr void __set_None(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_One();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_One() const;

  constexpr void __set_One(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Two();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Two() const;

  constexpr void __set_Two(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Three();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Three() const;

  constexpr void __set_Three(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Four();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Four() const;

  constexpr void __set_Four(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Start();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Start() const;

  constexpr void __set_Start(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Back();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Back() const;

  constexpr void __set_Back(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryShoulder();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryShoulder() const;

  constexpr void __set_PrimaryShoulder(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryIndexTrigger() const;

  constexpr void __set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryHandTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryHandTrigger() const;

  constexpr void __set_PrimaryHandTrigger(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryThumbstick() const;

  constexpr void __set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryThumbstickUp();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryThumbstickUp() const;

  constexpr void __set_PrimaryThumbstickUp(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryThumbstickDown();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryThumbstickDown() const;

  constexpr void __set_PrimaryThumbstickDown(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryThumbstickLeft();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryThumbstickLeft() const;

  constexpr void __set_PrimaryThumbstickLeft(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryThumbstickRight();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryThumbstickRight() const;

  constexpr void __set_PrimaryThumbstickRight(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_PrimaryTouchpad() const;

  constexpr void __set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryShoulder();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryShoulder() const;

  constexpr void __set_SecondaryShoulder(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryIndexTrigger() const;

  constexpr void __set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryHandTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryHandTrigger() const;

  constexpr void __set_SecondaryHandTrigger(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryThumbstick() const;

  constexpr void __set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryThumbstickUp();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryThumbstickUp() const;

  constexpr void __set_SecondaryThumbstickUp(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryThumbstickDown();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryThumbstickDown() const;

  constexpr void __set_SecondaryThumbstickDown(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryThumbstickLeft();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryThumbstickLeft() const;

  constexpr void __set_SecondaryThumbstickLeft(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryThumbstickRight();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryThumbstickRight() const;

  constexpr void __set_SecondaryThumbstickRight(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_SecondaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_SecondaryTouchpad() const;

  constexpr void __set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_DpadUp();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_DpadUp() const;

  constexpr void __set_DpadUp(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_DpadDown();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_DpadDown() const;

  constexpr void __set_DpadDown(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_DpadLeft();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_DpadLeft() const;

  constexpr void __set_DpadLeft(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_DpadRight();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_DpadRight() const;

  constexpr void __set_DpadRight(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Up();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Up() const;

  constexpr void __set_Up(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Down();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Down() const;

  constexpr void __set_Down(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Left();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Left() const;

  constexpr void __set_Left(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __get_Right();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __get_Right() const;

  constexpr void __set_Right(::GlobalNamespace::__OVRInput__RawButton value);

  /// @brief Method ToRawMask addr 0x2736ec8 size 0x214 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawButton ToRawMask(::GlobalNamespace::__OVRInput__Button virtualMask);

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* New_ctor();

  /// @brief Method .ctor addr 0x273618c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualButtonMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualButtonMap(__OVRInput__OVRControllerBase__VirtualButtonMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualButtonMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualButtonMap(__OVRInput__OVRControllerBase__VirtualButtonMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualButtonMap();

public:
  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___None;

  /// @brief Field One, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___One;

  /// @brief Field Two, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Two;

  /// @brief Field Three, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Three;

  /// @brief Field Four, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Four;

  /// @brief Field Start, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Start;

  /// @brief Field Back, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Back;

  /// @brief Field PrimaryShoulder, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryShoulder;

  /// @brief Field PrimaryIndexTrigger, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryHandTrigger;

  /// @brief Field PrimaryThumbstick, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickUp, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstickUp;

  /// @brief Field PrimaryThumbstickDown, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstickRight;

  /// @brief Field PrimaryTouchpad, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryTouchpad;

  /// @brief Field SecondaryShoulder, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryShoulder;

  /// @brief Field SecondaryIndexTrigger, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryHandTrigger;

  /// @brief Field SecondaryThumbstick, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickUp, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstickUp;

  /// @brief Field SecondaryThumbstickDown, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstickRight;

  /// @brief Field SecondaryTouchpad, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryTouchpad;

  /// @brief Field DpadUp, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___DpadUp;

  /// @brief Field DpadDown, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___DpadDown;

  /// @brief Field DpadLeft, offset: 0x7c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___DpadLeft;

  /// @brief Field DpadRight, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___DpadRight;

  /// @brief Field Up, offset: 0x84, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Up;

  /// @brief Field Down, offset: 0x88, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Down;

  /// @brief Field Left, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Left;

  /// @brief Field Right, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualTouchMap
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7590))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7611))
// CS Name: ::OVRInput::OVRControllerBase::VirtualTouchMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualTouchMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __get_None, put = __set_None))::GlobalNamespace::__OVRInput__RawTouch None;

  /// @brief Field One, offset 0x14, size 0x4
  __declspec(property(get = __get_One, put = __set_One))::GlobalNamespace::__OVRInput__RawTouch One;

  /// @brief Field Two, offset 0x18, size 0x4
  __declspec(property(get = __get_Two, put = __set_Two))::GlobalNamespace::__OVRInput__RawTouch Two;

  /// @brief Field Three, offset 0x1c, size 0x4
  __declspec(property(get = __get_Three, put = __set_Three))::GlobalNamespace::__OVRInput__RawTouch Three;

  /// @brief Field Four, offset 0x20, size 0x4
  __declspec(property(get = __get_Four, put = __set_Four))::GlobalNamespace::__OVRInput__RawTouch Four;

  /// @brief Field PrimaryIndexTrigger, offset 0x24, size 0x4
  __declspec(property(get = __get_PrimaryIndexTrigger, put = __set_PrimaryIndexTrigger))::GlobalNamespace::__OVRInput__RawTouch PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbstick, offset 0x28, size 0x4
  __declspec(property(get = __get_PrimaryThumbstick, put = __set_PrimaryThumbstick))::GlobalNamespace::__OVRInput__RawTouch PrimaryThumbstick;

  /// @brief Field PrimaryThumbRest, offset 0x2c, size 0x4
  __declspec(property(get = __get_PrimaryThumbRest, put = __set_PrimaryThumbRest))::GlobalNamespace::__OVRInput__RawTouch PrimaryThumbRest;

  /// @brief Field PrimaryTouchpad, offset 0x30, size 0x4
  __declspec(property(get = __get_PrimaryTouchpad, put = __set_PrimaryTouchpad))::GlobalNamespace::__OVRInput__RawTouch PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger, offset 0x34, size 0x4
  __declspec(property(get = __get_SecondaryIndexTrigger, put = __set_SecondaryIndexTrigger))::GlobalNamespace::__OVRInput__RawTouch SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbstick, offset 0x38, size 0x4
  __declspec(property(get = __get_SecondaryThumbstick, put = __set_SecondaryThumbstick))::GlobalNamespace::__OVRInput__RawTouch SecondaryThumbstick;

  /// @brief Field SecondaryThumbRest, offset 0x3c, size 0x4
  __declspec(property(get = __get_SecondaryThumbRest, put = __set_SecondaryThumbRest))::GlobalNamespace::__OVRInput__RawTouch SecondaryThumbRest;

  /// @brief Field SecondaryTouchpad, offset 0x40, size 0x4
  __declspec(property(get = __get_SecondaryTouchpad, put = __set_SecondaryTouchpad))::GlobalNamespace::__OVRInput__RawTouch SecondaryTouchpad;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_None() const;

  constexpr void __set_None(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_One();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_One() const;

  constexpr void __set_One(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_Two();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_Two() const;

  constexpr void __set_Two(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_Three();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_Three() const;

  constexpr void __set_Three(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_Four();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_Four() const;

  constexpr void __set_Four(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_PrimaryIndexTrigger() const;

  constexpr void __set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_PrimaryThumbstick() const;

  constexpr void __set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_PrimaryThumbRest();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_PrimaryThumbRest() const;

  constexpr void __set_PrimaryThumbRest(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_PrimaryTouchpad() const;

  constexpr void __set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_SecondaryIndexTrigger() const;

  constexpr void __set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_SecondaryThumbstick() const;

  constexpr void __set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_SecondaryThumbRest();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_SecondaryThumbRest() const;

  constexpr void __set_SecondaryThumbRest(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __get_SecondaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __get_SecondaryTouchpad() const;

  constexpr void __set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawTouch value);

  /// @brief Method ToRawMask addr 0x27370dc size 0xd4 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawTouch ToRawMask(::GlobalNamespace::__OVRInput__Touch virtualMask);

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* New_ctor();

  /// @brief Method .ctor addr 0x2736194 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualTouchMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualTouchMap(__OVRInput__OVRControllerBase__VirtualTouchMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualTouchMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualTouchMap(__OVRInput__OVRControllerBase__VirtualTouchMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualTouchMap();

public:
  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___None;

  /// @brief Field One, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___One;

  /// @brief Field Two, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___Two;

  /// @brief Field Three, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___Three;

  /// @brief Field Four, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___Four;

  /// @brief Field PrimaryIndexTrigger, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbstick, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___PrimaryThumbstick;

  /// @brief Field PrimaryThumbRest, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___PrimaryThumbRest;

  /// @brief Field PrimaryTouchpad, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbstick, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___SecondaryThumbstick;

  /// @brief Field SecondaryThumbRest, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___SecondaryThumbRest;

  /// @brief Field SecondaryTouchpad, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___SecondaryTouchpad;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualNearTouchMap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7592))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7612))
// CS Name: ::OVRInput::OVRControllerBase::VirtualNearTouchMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualNearTouchMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __get_None, put = __set_None))::GlobalNamespace::__OVRInput__RawNearTouch None;

  /// @brief Field PrimaryIndexTrigger, offset 0x14, size 0x4
  __declspec(property(get = __get_PrimaryIndexTrigger, put = __set_PrimaryIndexTrigger))::GlobalNamespace::__OVRInput__RawNearTouch PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons, offset 0x18, size 0x4
  __declspec(property(get = __get_PrimaryThumbButtons, put = __set_PrimaryThumbButtons))::GlobalNamespace::__OVRInput__RawNearTouch PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger, offset 0x1c, size 0x4
  __declspec(property(get = __get_SecondaryIndexTrigger, put = __set_SecondaryIndexTrigger))::GlobalNamespace::__OVRInput__RawNearTouch SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons, offset 0x20, size 0x4
  __declspec(property(get = __get_SecondaryThumbButtons, put = __set_SecondaryThumbButtons))::GlobalNamespace::__OVRInput__RawNearTouch SecondaryThumbButtons;

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __get_None() const;

  constexpr void __set_None(::GlobalNamespace::__OVRInput__RawNearTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __get_PrimaryIndexTrigger() const;

  constexpr void __set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawNearTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __get_PrimaryThumbButtons();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __get_PrimaryThumbButtons() const;

  constexpr void __set_PrimaryThumbButtons(::GlobalNamespace::__OVRInput__RawNearTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __get_SecondaryIndexTrigger() const;

  constexpr void __set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawNearTouch value);

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __get_SecondaryThumbButtons();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __get_SecondaryThumbButtons() const;

  constexpr void __set_SecondaryThumbButtons(::GlobalNamespace::__OVRInput__RawNearTouch value);

  /// @brief Method ToRawMask addr 0x27371b0 size 0x54 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawNearTouch ToRawMask(::GlobalNamespace::__OVRInput__NearTouch virtualMask);

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* New_ctor();

  /// @brief Method .ctor addr 0x273619c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualNearTouchMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualNearTouchMap(__OVRInput__OVRControllerBase__VirtualNearTouchMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualNearTouchMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualNearTouchMap(__OVRInput__OVRControllerBase__VirtualNearTouchMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualNearTouchMap();

public:
  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___None;

  /// @brief Field PrimaryIndexTrigger, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___SecondaryThumbButtons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualAxis1DMap
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7594)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7613))
// CS Name: ::OVRInput::OVRControllerBase::VirtualAxis1DMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualAxis1DMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __get_None, put = __set_None))::GlobalNamespace::__OVRInput__RawAxis1D None;

  /// @brief Field PrimaryIndexTrigger, offset 0x14, size 0x4
  __declspec(property(get = __get_PrimaryIndexTrigger, put = __set_PrimaryIndexTrigger))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger, offset 0x18, size 0x4
  __declspec(property(get = __get_PrimaryHandTrigger, put = __set_PrimaryHandTrigger))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger, offset 0x1c, size 0x4
  __declspec(property(get = __get_SecondaryIndexTrigger, put = __set_SecondaryIndexTrigger))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger, offset 0x20, size 0x4
  __declspec(property(get = __get_SecondaryHandTrigger, put = __set_SecondaryHandTrigger))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryHandTrigger;

  /// @brief Field PrimaryIndexTriggerCurl, offset 0x24, size 0x4
  __declspec(property(get = __get_PrimaryIndexTriggerCurl, put = __set_PrimaryIndexTriggerCurl))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerSlide, offset 0x28, size 0x4
  __declspec(property(get = __get_PrimaryIndexTriggerSlide, put = __set_PrimaryIndexTriggerSlide))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryThumbRestForce, offset 0x2c, size 0x4
  __declspec(property(get = __get_PrimaryThumbRestForce, put = __set_PrimaryThumbRestForce))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryThumbRestForce;

  /// @brief Field PrimaryStylusForce, offset 0x30, size 0x4
  __declspec(property(get = __get_PrimaryStylusForce, put = __set_PrimaryStylusForce))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryStylusForce;

  /// @brief Field SecondaryIndexTriggerCurl, offset 0x34, size 0x4
  __declspec(property(get = __get_SecondaryIndexTriggerCurl, put = __set_SecondaryIndexTriggerCurl))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerSlide, offset 0x38, size 0x4
  __declspec(property(get = __get_SecondaryIndexTriggerSlide, put = __set_SecondaryIndexTriggerSlide))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryThumbRestForce, offset 0x3c, size 0x4
  __declspec(property(get = __get_SecondaryThumbRestForce, put = __set_SecondaryThumbRestForce))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryThumbRestForce;

  /// @brief Field SecondaryStylusForce, offset 0x40, size 0x4
  __declspec(property(get = __get_SecondaryStylusForce, put = __set_SecondaryStylusForce))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryStylusForce;

  /// @brief Field PrimaryIndexTriggerForce, offset 0x44, size 0x4
  __declspec(property(get = __get_PrimaryIndexTriggerForce, put = __set_PrimaryIndexTriggerForce))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerForce, offset 0x48, size 0x4
  __declspec(property(get = __get_SecondaryIndexTriggerForce, put = __set_SecondaryIndexTriggerForce))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryIndexTriggerForce;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_None() const;

  constexpr void __set_None(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_PrimaryIndexTrigger() const;

  constexpr void __set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_PrimaryHandTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_PrimaryHandTrigger() const;

  constexpr void __set_PrimaryHandTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_SecondaryIndexTrigger() const;

  constexpr void __set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_SecondaryHandTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_SecondaryHandTrigger() const;

  constexpr void __set_SecondaryHandTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_PrimaryIndexTriggerCurl();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_PrimaryIndexTriggerCurl() const;

  constexpr void __set_PrimaryIndexTriggerCurl(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_PrimaryIndexTriggerSlide();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_PrimaryIndexTriggerSlide() const;

  constexpr void __set_PrimaryIndexTriggerSlide(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_PrimaryThumbRestForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_PrimaryThumbRestForce() const;

  constexpr void __set_PrimaryThumbRestForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_PrimaryStylusForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_PrimaryStylusForce() const;

  constexpr void __set_PrimaryStylusForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_SecondaryIndexTriggerCurl();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_SecondaryIndexTriggerCurl() const;

  constexpr void __set_SecondaryIndexTriggerCurl(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_SecondaryIndexTriggerSlide();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_SecondaryIndexTriggerSlide() const;

  constexpr void __set_SecondaryIndexTriggerSlide(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_SecondaryThumbRestForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_SecondaryThumbRestForce() const;

  constexpr void __set_SecondaryThumbRestForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_SecondaryStylusForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_SecondaryStylusForce() const;

  constexpr void __set_SecondaryStylusForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_PrimaryIndexTriggerForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_PrimaryIndexTriggerForce() const;

  constexpr void __set_PrimaryIndexTriggerForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __get_SecondaryIndexTriggerForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __get_SecondaryIndexTriggerForce() const;

  constexpr void __set_SecondaryIndexTriggerForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  /// @brief Method ToRawMask addr 0x2737204 size 0xf4 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawAxis1D ToRawMask(::GlobalNamespace::__OVRInput__Axis1D virtualMask);

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* New_ctor();

  /// @brief Method .ctor addr 0x27361a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualAxis1DMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualAxis1DMap(__OVRInput__OVRControllerBase__VirtualAxis1DMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualAxis1DMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualAxis1DMap(__OVRInput__OVRControllerBase__VirtualAxis1DMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualAxis1DMap();

public:
  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___None;

  /// @brief Field PrimaryIndexTrigger, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryHandTrigger;

  /// @brief Field PrimaryIndexTriggerCurl, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerSlide, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryThumbRestForce, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryThumbRestForce;

  /// @brief Field PrimaryStylusForce, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryStylusForce;

  /// @brief Field SecondaryIndexTriggerCurl, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerSlide, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryThumbRestForce, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryThumbRestForce;

  /// @brief Field SecondaryStylusForce, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryStylusForce;

  /// @brief Field PrimaryIndexTriggerForce, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerForce, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryIndexTriggerForce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualAxis2DMap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7596))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7614))
// CS Name: ::OVRInput::OVRControllerBase::VirtualAxis2DMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualAxis2DMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __get_None, put = __set_None))::GlobalNamespace::__OVRInput__RawAxis2D None;

  /// @brief Field PrimaryThumbstick, offset 0x14, size 0x4
  __declspec(property(get = __get_PrimaryThumbstick, put = __set_PrimaryThumbstick))::GlobalNamespace::__OVRInput__RawAxis2D PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad, offset 0x18, size 0x4
  __declspec(property(get = __get_PrimaryTouchpad, put = __set_PrimaryTouchpad))::GlobalNamespace::__OVRInput__RawAxis2D PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick, offset 0x1c, size 0x4
  __declspec(property(get = __get_SecondaryThumbstick, put = __set_SecondaryThumbstick))::GlobalNamespace::__OVRInput__RawAxis2D SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad, offset 0x20, size 0x4
  __declspec(property(get = __get_SecondaryTouchpad, put = __set_SecondaryTouchpad))::GlobalNamespace::__OVRInput__RawAxis2D SecondaryTouchpad;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __get_None() const;

  constexpr void __set_None(::GlobalNamespace::__OVRInput__RawAxis2D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __get_PrimaryThumbstick() const;

  constexpr void __set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawAxis2D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __get_PrimaryTouchpad() const;

  constexpr void __set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawAxis2D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __get_SecondaryThumbstick() const;

  constexpr void __set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawAxis2D value);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __get_SecondaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __get_SecondaryTouchpad() const;

  constexpr void __set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawAxis2D value);

  /// @brief Method ToRawMask addr 0x27372f8 size 0x54 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawAxis2D ToRawMask(::GlobalNamespace::__OVRInput__Axis2D virtualMask);

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* New_ctor();

  /// @brief Method .ctor addr 0x27361ac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualAxis2DMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualAxis2DMap(__OVRInput__OVRControllerBase__VirtualAxis2DMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualAxis2DMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualAxis2DMap(__OVRInput__OVRControllerBase__VirtualAxis2DMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualAxis2DMap();

public:
  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___None;

  /// @brief Field PrimaryThumbstick, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___SecondaryTouchpad;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerBase
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7598)), TypeDefinitionIndex(TypeDefinitionIndex(7730))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7615))
// CS Name: ::OVRInput::OVRControllerBase*
class CORDL_TYPE __OVRInput__OVRControllerBase : public ::System::Object {
public:
  // Declarations
  using VirtualAxis2DMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap;

  using VirtualAxis1DMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap;

  using VirtualNearTouchMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap;

  using VirtualTouchMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap;

  using VirtualButtonMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap;

  /// @brief Field controllerType, offset 0x10, size 0x4
  __declspec(property(get = __get_controllerType, put = __set_controllerType))::GlobalNamespace::__OVRInput__Controller controllerType;

  /// @brief Field buttonMap, offset 0x18, size 0x8
  __declspec(property(get = __get_buttonMap, put = __set_buttonMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* buttonMap;

  /// @brief Field touchMap, offset 0x20, size 0x8
  __declspec(property(get = __get_touchMap, put = __set_touchMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* touchMap;

  /// @brief Field nearTouchMap, offset 0x28, size 0x8
  __declspec(property(get = __get_nearTouchMap, put = __set_nearTouchMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* nearTouchMap;

  /// @brief Field axis1DMap, offset 0x30, size 0x8
  __declspec(property(get = __get_axis1DMap, put = __set_axis1DMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* axis1DMap;

  /// @brief Field axis2DMap, offset 0x38, size 0x8
  __declspec(property(get = __get_axis2DMap, put = __set_axis2DMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* axis2DMap;

  /// @brief Field previousState, offset 0x40, size 0x6c
  __declspec(property(get = __get_previousState, put = __set_previousState))::GlobalNamespace::__OVRPlugin__ControllerState6 previousState;

  /// @brief Field currentState, offset 0xac, size 0x6c
  __declspec(property(get = __get_currentState, put = __set_currentState))::GlobalNamespace::__OVRPlugin__ControllerState6 currentState;

  /// @brief Field shouldApplyDeadzone, offset 0x118, size 0x1
  __declspec(property(get = __get_shouldApplyDeadzone, put = __set_shouldApplyDeadzone)) bool shouldApplyDeadzone;

  /// @brief Field HapticsPcmSamplesConsumedCache, offset 0x120, size 0x8
  __declspec(property(get = __get_HapticsPcmSamplesConsumedCache, put = __set_HapticsPcmSamplesConsumedCache))::ArrayW<uint32_t, ::Array<uint32_t>*> HapticsPcmSamplesConsumedCache;

  constexpr ::GlobalNamespace::__OVRInput__Controller& __get_controllerType();

  constexpr ::GlobalNamespace::__OVRInput__Controller const& __get_controllerType() const;

  constexpr void __set_controllerType(::GlobalNamespace::__OVRInput__Controller value);

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*& __get_buttonMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*> const& __get_buttonMap() const;

  constexpr void __set_buttonMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* value);

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*& __get_touchMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*> const& __get_touchMap() const;

  constexpr void __set_touchMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* value);

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*& __get_nearTouchMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*> const& __get_nearTouchMap() const;

  constexpr void __set_nearTouchMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* value);

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*& __get_axis1DMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*> const& __get_axis1DMap() const;

  constexpr void __set_axis1DMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* value);

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*& __get_axis2DMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*> const& __get_axis2DMap() const;

  constexpr void __set_axis2DMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* value);

  constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6& __get_previousState();

  constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6 const& __get_previousState() const;

  constexpr void __set_previousState(::GlobalNamespace::__OVRPlugin__ControllerState6 value);

  constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6& __get_currentState();

  constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6 const& __get_currentState() const;

  constexpr void __set_currentState(::GlobalNamespace::__OVRPlugin__ControllerState6 value);

  constexpr bool& __get_shouldApplyDeadzone();

  constexpr bool const& __get_shouldApplyDeadzone() const;

  constexpr void __set_shouldApplyDeadzone(bool value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_HapticsPcmSamplesConsumedCache();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_HapticsPcmSamplesConsumedCache() const;

  constexpr void __set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase* New_ctor();

  /// @brief Method .ctor addr 0x2735fdc size 0x1b0 virtual false final false
  inline void _ctor();

  /// @brief Method Update addr 0x27361b4 size 0x3e8 virtual true final false
  inline ::GlobalNamespace::__OVRInput__Controller Update();

  /// @brief Method GetOpenVRControllerState addr 0x273659c size 0x470 virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__ControllerState6 GetOpenVRControllerState(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method SetControllerVibration addr 0x2736a0c size 0x74 virtual true final false
  inline void SetControllerVibration(float_t frequency, float_t amplitude);

  /// @brief Method SetControllerLocalizedVibration addr 0x2736a80 size 0x84 virtual true final false
  inline void SetControllerLocalizedVibration(::GlobalNamespace::__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude);

  /// @brief Method SetControllerHapticsAmplitudeEnvelope addr 0x2736b04 size 0x138 virtual true final false
  inline void SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration);

  /// @brief Method SetControllerHapticsPcm addr 0x2736c3c size 0x210 virtual true final false
  inline int32_t SetControllerHapticsPcm(::GlobalNamespace::__OVRInput__HapticsPcmVibration hapticsVibration);

  /// @brief Method GetControllerSampleRateHz addr 0x2736e4c size 0x74 virtual true final false
  inline float_t GetControllerSampleRateHz();

  /// @brief Method GetBatteryPercentRemaining addr 0x2736ec0 size 0x8 virtual true final false
  inline uint8_t GetBatteryPercentRemaining();

  /// @brief Method ConfigureButtonMap addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ResolveToRawMask addr 0x27332e0 size 0x18 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawButton ResolveToRawMask(::GlobalNamespace::__OVRInput__Button virtualMask);

  /// @brief Method ResolveToRawMask addr 0x2733908 size 0x18 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawTouch ResolveToRawMask(::GlobalNamespace::__OVRInput__Touch virtualMask);

  /// @brief Method ResolveToRawMask addr 0x2733f98 size 0x18 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawNearTouch ResolveToRawMask(::GlobalNamespace::__OVRInput__NearTouch virtualMask);

  /// @brief Method ResolveToRawMask addr 0x2734b5c size 0x18 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawAxis1D ResolveToRawMask(::GlobalNamespace::__OVRInput__Axis1D virtualMask);

  /// @brief Method ResolveToRawMask addr 0x2735008 size 0x18 virtual false final false
  inline ::GlobalNamespace::__OVRInput__RawAxis2D ResolveToRawMask(::GlobalNamespace::__OVRInput__Axis2D virtualMask);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase(__OVRInput__OVRControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase(__OVRInput__OVRControllerBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase();

public:
  /// @brief Field controllerType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__Controller ___controllerType;

  /// @brief Field buttonMap, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* ___buttonMap;

  /// @brief Field touchMap, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* ___touchMap;

  /// @brief Field nearTouchMap, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* ___nearTouchMap;

  /// @brief Field axis1DMap, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* ___axis1DMap;

  /// @brief Field axis2DMap, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* ___axis2DMap;

  /// @brief Field previousState, offset: 0x40, size: 0x6c, def value: None
  ::GlobalNamespace::__OVRPlugin__ControllerState6 ___previousState;

  /// @brief Field currentState, offset: 0xac, size: 0x6c, def value: None
  ::GlobalNamespace::__OVRPlugin__ControllerState6 ___currentState;

  /// @brief Field shouldApplyDeadzone, offset: 0x118, size: 0x1, def value: None
  bool ___shouldApplyDeadzone;

  /// @brief Field HapticsPcmSamplesConsumedCache, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___HapticsPcmSamplesConsumedCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerTouch
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7616))
// CS Name: ::OVRInput::OVRControllerTouch*
class CORDL_TYPE __OVRInput__OVRControllerTouch : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerTouch* New_ctor();

  /// @brief Method .ctor addr 0x27304b0 size 0x1c virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x273734c size 0x68 virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x27373b4 size 0x3c virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x27373f0 size 0x2c virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x273741c size 0x4c virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x2737468 size 0x2c virtual true final false
  inline void ConfigureAxis2DMap();

  /// @brief Method GetBatteryPercentRemaining addr 0x2737494 size 0x1014 virtual true final false
  inline uint8_t GetBatteryPercentRemaining();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerTouch(__OVRInput__OVRControllerTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerTouch(__OVRInput__OVRControllerTouch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerTouch();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerLTouch
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7617))
// CS Name: ::OVRInput::OVRControllerLTouch*
class CORDL_TYPE __OVRInput__OVRControllerLTouch : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerLTouch* New_ctor();

  /// @brief Method .ctor addr 0x27384a8 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x27384c8 size 0x78 virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x2738540 size 0x34 virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x2738574 size 0x28 virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x273859c size 0x48 virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x27385e4 size 0x28 virtual true final false
  inline void ConfigureAxis2DMap();

  /// @brief Method GetBatteryPercentRemaining addr 0x273860c size 0x8 virtual true final false
  inline uint8_t GetBatteryPercentRemaining();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerLTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerLTouch(__OVRInput__OVRControllerLTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerLTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerLTouch(__OVRInput__OVRControllerLTouch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerLTouch();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerLTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerRTouch
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7618))
// CS Name: ::OVRInput::OVRControllerRTouch*
class CORDL_TYPE __OVRInput__OVRControllerRTouch : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerRTouch* New_ctor();

  /// @brief Method .ctor addr 0x2738614 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x2738634 size 0x78 virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x27386ac size 0x34 virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x27386e0 size 0x28 virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x2738708 size 0x48 virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x2738750 size 0x28 virtual true final false
  inline void ConfigureAxis2DMap();

  /// @brief Method GetBatteryPercentRemaining addr 0x2738778 size 0x8 virtual true final false
  inline uint8_t GetBatteryPercentRemaining();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerRTouch(__OVRInput__OVRControllerRTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerRTouch(__OVRInput__OVRControllerRTouch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerRTouch();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerRTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerHands
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7619))
// CS Name: ::OVRInput::OVRControllerHands*
class CORDL_TYPE __OVRInput__OVRControllerHands : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerHands* New_ctor();

  /// @brief Method .ctor addr 0x2738780 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x27387a0 size 0x4c virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x27387ec size 0x28 virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x2738814 size 0x20 virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x2738834 size 0x28 virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x273885c size 0x20 virtual true final false
  inline void ConfigureAxis2DMap();

  /// @brief Method GetBatteryPercentRemaining addr 0x273887c size 0x14 virtual true final false
  inline uint8_t GetBatteryPercentRemaining();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerHands", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerHands(__OVRInput__OVRControllerHands&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerHands", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerHands(__OVRInput__OVRControllerHands const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerHands();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerHands, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerLHand
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7620))
// CS Name: ::OVRInput::OVRControllerLHand*
class CORDL_TYPE __OVRInput__OVRControllerLHand : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerLHand* New_ctor();

  /// @brief Method .ctor addr 0x2738890 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x27388b0 size 0x4c virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x27388fc size 0x28 virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x2738924 size 0x20 virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x2738944 size 0x28 virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x273896c size 0x20 virtual true final false
  inline void ConfigureAxis2DMap();

  /// @brief Method GetBatteryPercentRemaining addr 0x273898c size 0x8 virtual true final false
  inline uint8_t GetBatteryPercentRemaining();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerLHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerLHand(__OVRInput__OVRControllerLHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerLHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerLHand(__OVRInput__OVRControllerLHand const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerLHand();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerLHand, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerRHand
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7621))
// CS Name: ::OVRInput::OVRControllerRHand*
class CORDL_TYPE __OVRInput__OVRControllerRHand : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerRHand* New_ctor();

  /// @brief Method .ctor addr 0x2738994 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x27389b4 size 0x4c virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x2738a00 size 0x28 virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x2738a28 size 0x20 virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x2738a48 size 0x28 virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x2738a70 size 0x20 virtual true final false
  inline void ConfigureAxis2DMap();

  /// @brief Method GetBatteryPercentRemaining addr 0x2738a90 size 0x8 virtual true final false
  inline uint8_t GetBatteryPercentRemaining();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerRHand(__OVRInput__OVRControllerRHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerRHand(__OVRInput__OVRControllerRHand const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerRHand();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerRHand, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerRemote
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7622))
// CS Name: ::OVRInput::OVRControllerRemote*
class CORDL_TYPE __OVRInput__OVRControllerRemote : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerRemote* New_ctor();

  /// @brief Method .ctor addr 0x2738a98 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x2738ab8 size 0x5c virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x2738b14 size 0x28 virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x2738b3c size 0x20 virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x2738b5c size 0x28 virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x2738b84 size 0x20 virtual true final false
  inline void ConfigureAxis2DMap();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRemote", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerRemote(__OVRInput__OVRControllerRemote&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRemote", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerRemote(__OVRInput__OVRControllerRemote const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerRemote();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerRemote, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerGamepadPC
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7623))
// CS Name: ::OVRInput::OVRControllerGamepadPC*
class CORDL_TYPE __OVRInput__OVRControllerGamepadPC : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC* New_ctor();

  /// @brief Method .ctor addr 0x2738ba4 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x2738bc4 size 0x70 virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x2738c34 size 0x28 virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x2738c5c size 0x20 virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x2738c7c size 0x30 virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x2738cac size 0x28 virtual true final false
  inline void ConfigureAxis2DMap();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerGamepadPC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerGamepadPC(__OVRInput__OVRControllerGamepadPC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerGamepadPC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerGamepadPC(__OVRInput__OVRControllerGamepadPC const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerGamepadPC();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerGamepadAndroid
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7615))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7624))
// CS Name: ::OVRInput::OVRControllerGamepadAndroid*
class CORDL_TYPE __OVRInput__OVRControllerGamepadAndroid : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid* New_ctor();

  /// @brief Method .ctor addr 0x2738cd4 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureButtonMap addr 0x2738cf4 size 0x70 virtual true final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureTouchMap addr 0x2738d64 size 0x28 virtual true final false
  inline void ConfigureTouchMap();

  /// @brief Method ConfigureNearTouchMap addr 0x2738d8c size 0x20 virtual true final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureAxis1DMap addr 0x2738dac size 0x30 virtual true final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap addr 0x2738ddc size 0x28 virtual true final false
  inline void ConfigureAxis2DMap();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerGamepadAndroid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerGamepadAndroid(__OVRInput__OVRControllerGamepadAndroid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerGamepadAndroid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerGamepadAndroid(__OVRInput__OVRControllerGamepadAndroid const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerGamepadAndroid();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRInput
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7709)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7598))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7625))
// CS Name: ::OVRInput*
class CORDL_TYPE OVRInput : public ::System::Object {
public:
  // Declarations
  using OVRControllerGamepadAndroid = ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid;

  using OVRControllerGamepadPC = ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC;

  using OVRControllerRemote = ::GlobalNamespace::__OVRInput__OVRControllerRemote;

  using OVRControllerRHand = ::GlobalNamespace::__OVRInput__OVRControllerRHand;

  using OVRControllerLHand = ::GlobalNamespace::__OVRInput__OVRControllerLHand;

  using OVRControllerHands = ::GlobalNamespace::__OVRInput__OVRControllerHands;

  using OVRControllerRTouch = ::GlobalNamespace::__OVRInput__OVRControllerRTouch;

  using OVRControllerLTouch = ::GlobalNamespace::__OVRInput__OVRControllerLTouch;

  using OVRControllerTouch = ::GlobalNamespace::__OVRInput__OVRControllerTouch;

  using OVRControllerBase = ::GlobalNamespace::__OVRInput__OVRControllerBase;

  using HapticInfo = ::GlobalNamespace::__OVRInput__HapticInfo;

  using OpenVRControllerDetails = ::GlobalNamespace::__OVRInput__OpenVRControllerDetails;

  using OpenVRController = ::GlobalNamespace::__OVRInput__OpenVRController;

  using HapticsPcmVibration = ::GlobalNamespace::__OVRInput__HapticsPcmVibration;

  using HapticsAmplitudeEnvelopeVibration = ::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration;

  using ControllerInHandState = ::GlobalNamespace::__OVRInput__ControllerInHandState;

  using InputDeviceShowState = ::GlobalNamespace::__OVRInput__InputDeviceShowState;

  using Hand = ::GlobalNamespace::__OVRInput__Hand;

  using InteractionProfile = ::GlobalNamespace::__OVRInput__InteractionProfile;

  using HapticsLocation = ::GlobalNamespace::__OVRInput__HapticsLocation;

  using Handedness = ::GlobalNamespace::__OVRInput__Handedness;

  using Controller = ::GlobalNamespace::__OVRInput__Controller;

  using OpenVRButton = ::GlobalNamespace::__OVRInput__OpenVRButton;

  using RawAxis2D = ::GlobalNamespace::__OVRInput__RawAxis2D;

  using Axis2D = ::GlobalNamespace::__OVRInput__Axis2D;

  using RawAxis1D = ::GlobalNamespace::__OVRInput__RawAxis1D;

  using Axis1D = ::GlobalNamespace::__OVRInput__Axis1D;

  using RawNearTouch = ::GlobalNamespace::__OVRInput__RawNearTouch;

  using NearTouch = ::GlobalNamespace::__OVRInput__NearTouch;

  using RawTouch = ::GlobalNamespace::__OVRInput__RawTouch;

  using Touch = ::GlobalNamespace::__OVRInput__Touch;

  using RawButton = ::GlobalNamespace::__OVRInput__RawButton;

  using Button = ::GlobalNamespace::__OVRInput__Button;

  /// @brief Field AXIS_AS_BUTTON_THRESHOLD, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AXIS_AS_BUTTON_THRESHOLD, put = setStaticF_AXIS_AS_BUTTON_THRESHOLD)) float_t AXIS_AS_BUTTON_THRESHOLD;

  /// @brief Field AXIS_DEADZONE_THRESHOLD, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AXIS_DEADZONE_THRESHOLD, put = setStaticF_AXIS_DEADZONE_THRESHOLD)) float_t AXIS_DEADZONE_THRESHOLD;

  /// @brief Field controllers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_controllers, put = setStaticF_controllers))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>* controllers;

  /// @brief Field activeControllerType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_activeControllerType, put = setStaticF_activeControllerType))::GlobalNamespace::__OVRInput__Controller activeControllerType;

  /// @brief Field connectedControllerTypes, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_connectedControllerTypes, put = setStaticF_connectedControllerTypes))::GlobalNamespace::__OVRInput__Controller connectedControllerTypes;

  /// @brief Field stepType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_stepType, put = setStaticF_stepType))::GlobalNamespace::__OVRPlugin__Step stepType;

  /// @brief Field fixedUpdateCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_fixedUpdateCount, put = setStaticF_fixedUpdateCount)) int32_t fixedUpdateCount;

  /// @brief Field _pluginSupportsActiveController, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__pluginSupportsActiveController, put = setStaticF__pluginSupportsActiveController)) bool _pluginSupportsActiveController;

  /// @brief Field _pluginSupportsActiveControllerCached, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__pluginSupportsActiveControllerCached, put = setStaticF__pluginSupportsActiveControllerCached)) bool _pluginSupportsActiveControllerCached;

  /// @brief Field _pluginSupportsActiveControllerMinVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pluginSupportsActiveControllerMinVersion,
                             put = setStaticF__pluginSupportsActiveControllerMinVersion))::System::Version* _pluginSupportsActiveControllerMinVersion;

  /// @brief Field NUM_HAPTIC_CHANNELS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_NUM_HAPTIC_CHANNELS, put = setStaticF_NUM_HAPTIC_CHANNELS)) int32_t NUM_HAPTIC_CHANNELS;

  /// @brief Field hapticInfos, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hapticInfos,
                             put = setStaticF_hapticInfos))::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*> hapticInfos;

  /// @brief Field OPENVR_MAX_HAPTIC_AMPLITUDE, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE, put = setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE)) float_t OPENVR_MAX_HAPTIC_AMPLITUDE;

  /// @brief Field HAPTIC_VIBRATION_DURATION_SECONDS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS, put = setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS)) float_t HAPTIC_VIBRATION_DURATION_SECONDS;

  /// @brief Field OPENVR_TOUCH_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OPENVR_TOUCH_NAME, put = setStaticF_OPENVR_TOUCH_NAME))::StringW OPENVR_TOUCH_NAME;

  /// @brief Field OPENVR_VIVE_CONTROLLER_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OPENVR_VIVE_CONTROLLER_NAME, put = setStaticF_OPENVR_VIVE_CONTROLLER_NAME))::StringW OPENVR_VIVE_CONTROLLER_NAME;

  /// @brief Field OPENVR_WINDOWSMR_CONTROLLER_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME, put = setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME))::StringW OPENVR_WINDOWSMR_CONTROLLER_NAME;

  /// @brief Field openVRControllerDetails, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_openVRControllerDetails,
                             put = setStaticF_openVRControllerDetails))::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails,
                                                                                ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*> openVRControllerDetails;

  static inline void setStaticF_AXIS_AS_BUTTON_THRESHOLD(float_t value);

  static inline float_t getStaticF_AXIS_AS_BUTTON_THRESHOLD();

  static inline void setStaticF_AXIS_DEADZONE_THRESHOLD(float_t value);

  static inline float_t getStaticF_AXIS_DEADZONE_THRESHOLD();

  static inline void setStaticF_controllers(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>* getStaticF_controllers();

  static inline void setStaticF_activeControllerType(::GlobalNamespace::__OVRInput__Controller value);

  static inline ::GlobalNamespace::__OVRInput__Controller getStaticF_activeControllerType();

  static inline void setStaticF_connectedControllerTypes(::GlobalNamespace::__OVRInput__Controller value);

  static inline ::GlobalNamespace::__OVRInput__Controller getStaticF_connectedControllerTypes();

  static inline void setStaticF_stepType(::GlobalNamespace::__OVRPlugin__Step value);

  static inline ::GlobalNamespace::__OVRPlugin__Step getStaticF_stepType();

  static inline void setStaticF_fixedUpdateCount(int32_t value);

  static inline int32_t getStaticF_fixedUpdateCount();

  static inline void setStaticF__pluginSupportsActiveController(bool value);

  static inline bool getStaticF__pluginSupportsActiveController();

  static inline void setStaticF__pluginSupportsActiveControllerCached(bool value);

  static inline bool getStaticF__pluginSupportsActiveControllerCached();

  static inline void setStaticF__pluginSupportsActiveControllerMinVersion(::System::Version* value);

  static inline ::System::Version* getStaticF__pluginSupportsActiveControllerMinVersion();

  static inline void setStaticF_NUM_HAPTIC_CHANNELS(int32_t value);

  static inline int32_t getStaticF_NUM_HAPTIC_CHANNELS();

  static inline void setStaticF_hapticInfos(::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*> value);

  static inline ::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*> getStaticF_hapticInfos();

  static inline void setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE(float_t value);

  static inline float_t getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE();

  static inline void setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS(float_t value);

  static inline float_t getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS();

  static inline void setStaticF_OPENVR_TOUCH_NAME(::StringW value);

  static inline ::StringW getStaticF_OPENVR_TOUCH_NAME();

  static inline void setStaticF_OPENVR_VIVE_CONTROLLER_NAME(::StringW value);

  static inline ::StringW getStaticF_OPENVR_VIVE_CONTROLLER_NAME();

  static inline void setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME(::StringW value);

  static inline ::StringW getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME();

  static inline void setStaticF_openVRControllerDetails(::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*> value);

  static inline ::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*> getStaticF_openVRControllerDetails();

  /// @brief Method get_pluginSupportsActiveController addr 0x272fec8 size 0x9c virtual false final false
  static inline bool get_pluginSupportsActiveController();

  /// @brief Method Update addr 0x273060c size 0x544 virtual false final false
  static inline void Update();

  /// @brief Method FixedUpdate addr 0x273119c size 0x10c virtual false final false
  static inline void FixedUpdate();

  /// @brief Method GetCurrentInteractionProfile addr 0x27312a8 size 0x58 virtual false final false
  static inline ::GlobalNamespace::__OVRInput__InteractionProfile GetCurrentInteractionProfile(::GlobalNamespace::__OVRInput__Hand hand);

  /// @brief Method GetControllerOrientationTracked addr 0x2731300 size 0xd8 virtual false final false
  static inline bool GetControllerOrientationTracked(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetControllerOrientationValid addr 0x27313d8 size 0xd8 virtual false final false
  static inline bool GetControllerOrientationValid(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetControllerPositionTracked addr 0x27314b0 size 0xd8 virtual false final false
  static inline bool GetControllerPositionTracked(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetControllerPositionValid addr 0x2731588 size 0xd8 virtual false final false
  static inline bool GetControllerPositionValid(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method AreHandPosesGeneratedByControllerData addr 0x2731660 size 0x94 virtual false final false
  static inline bool AreHandPosesGeneratedByControllerData(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRInput__Hand hand);

  /// @brief Method EnableSimultaneousHandsAndControllers addr 0x27316f4 size 0x54 virtual false final false
  static inline bool EnableSimultaneousHandsAndControllers();

  /// @brief Method DisableSimultaneousHandsAndControllers addr 0x2731748 size 0x54 virtual false final false
  static inline bool DisableSimultaneousHandsAndControllers();

  /// @brief Method GetControllerIsInHandState addr 0x273179c size 0xf0 virtual false final false
  static inline ::GlobalNamespace::__OVRInput__ControllerInHandState GetControllerIsInHandState(::GlobalNamespace::__OVRInput__Hand hand);

  /// @brief Method GetActiveControllerForHand addr 0x273188c size 0xfc virtual false final false
  static inline ::GlobalNamespace::__OVRInput__Controller GetActiveControllerForHand(::GlobalNamespace::__OVRInput__Handedness handedness);

  /// @brief Method GetLocalControllerPosition addr 0x2731988 size 0x560 virtual false final false
  static inline ::UnityEngine::Vector3 GetLocalControllerPosition(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerVelocity addr 0x2731ee8 size 0x23c virtual false final false
  static inline ::UnityEngine::Vector3 GetLocalControllerVelocity(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerAcceleration addr 0x2732124 size 0x230 virtual false final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAcceleration(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerRotation addr 0x2732354 size 0x538 virtual false final false
  static inline ::UnityEngine::Quaternion GetLocalControllerRotation(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerAngularVelocity addr 0x273288c size 0x23c virtual false final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAngularVelocity(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerAngularAcceleration addr 0x2732ac8 size 0x23c virtual false final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAngularAcceleration(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerStatesWithoutPrediction addr 0x2732d04 size 0x390 virtual false final false
  static inline bool GetLocalControllerStatesWithoutPrediction(::GlobalNamespace::__OVRInput__Controller controllerType, ByRef<::UnityEngine::Vector3> position,
                                                               ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Vector3> velocity, ByRef<::UnityEngine::Vector3> angularVelocity);

  /// @brief Method GetDominantHand addr 0x2733094 size 0x50 virtual false final false
  static inline ::GlobalNamespace::__OVRInput__Handedness GetDominantHand();

  /// @brief Method Get addr 0x27330e4 size 0x68 virtual false final false
  static inline bool Get(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x27310cc size 0x68 virtual false final false
  static inline bool Get(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedButton addr 0x273314c size 0x148 virtual false final false
  static inline bool GetResolvedButton(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown addr 0x27332f8 size 0x68 virtual false final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown addr 0x27334c0 size 0x68 virtual false final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedButtonDown addr 0x2733360 size 0x160 virtual false final false
  static inline bool GetResolvedButtonDown(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask,
                                           ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp addr 0x2733528 size 0x68 virtual false final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp addr 0x27336f0 size 0x68 virtual false final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedButtonUp addr 0x2733590 size 0x160 virtual false final false
  static inline bool GetResolvedButtonUp(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x2733758 size 0x68 virtual false final false
  static inline bool Get(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x2731134 size 0x68 virtual false final false
  static inline bool Get(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedTouch addr 0x27337c0 size 0x148 virtual false final false
  static inline bool GetResolvedTouch(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown addr 0x2733920 size 0x68 virtual false final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown addr 0x2733ae8 size 0x68 virtual false final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedTouchDown addr 0x2733988 size 0x160 virtual false final false
  static inline bool GetResolvedTouchDown(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp addr 0x2733b50 size 0x68 virtual false final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp addr 0x2733d18 size 0x68 virtual false final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedTouchUp addr 0x2733bb8 size 0x160 virtual false final false
  static inline bool GetResolvedTouchUp(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x2733d80 size 0x68 virtual false final false
  static inline bool Get(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x2733f30 size 0x68 virtual false final false
  static inline bool Get(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedNearTouch addr 0x2733de8 size 0x148 virtual false final false
  static inline bool GetResolvedNearTouch(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                          ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown addr 0x2733fb0 size 0x68 virtual false final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown addr 0x2734178 size 0x68 virtual false final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedNearTouchDown addr 0x2734018 size 0x160 virtual false final false
  static inline bool GetResolvedNearTouchDown(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                              ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp addr 0x27341e0 size 0x68 virtual false final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp addr 0x27343a8 size 0x68 virtual false final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedNearTouchUp addr 0x2734248 size 0x160 virtual false final false
  static inline bool GetResolvedNearTouchUp(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                            ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x2734410 size 0x68 virtual false final false
  static inline float_t Get(::GlobalNamespace::__OVRInput__Axis1D virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x2734af4 size 0x68 virtual false final false
  static inline float_t Get(::GlobalNamespace::__OVRInput__RawAxis1D rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedAxis1D addr 0x2734478 size 0x67c virtual false final false
  static inline float_t GetResolvedAxis1D(::GlobalNamespace::__OVRInput__Axis1D virtualMask, ::GlobalNamespace::__OVRInput__RawAxis1D rawMask,
                                          ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x2734be8 size 0x68 virtual false final false
  static inline ::UnityEngine::Vector2 Get(::GlobalNamespace::__OVRInput__Axis2D virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get addr 0x2734fa0 size 0x68 virtual false final false
  static inline ::UnityEngine::Vector2 Get(::GlobalNamespace::__OVRInput__RawAxis2D rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedAxis2D addr 0x2734c50 size 0x350 virtual false final false
  static inline ::UnityEngine::Vector2 GetResolvedAxis2D(::GlobalNamespace::__OVRInput__Axis2D virtualMask, ::GlobalNamespace::__OVRInput__RawAxis2D rawMask,
                                                         ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetConnectedControllers addr 0x2735180 size 0x58 virtual false final false
  static inline ::GlobalNamespace::__OVRInput__Controller GetConnectedControllers();

  /// @brief Method IsControllerConnected addr 0x27351d8 size 0x64 virtual false final false
  static inline bool IsControllerConnected(::GlobalNamespace::__OVRInput__Controller controller);

  /// @brief Method GetActiveController addr 0x273523c size 0x58 virtual false final false
  static inline ::GlobalNamespace::__OVRInput__Controller GetActiveController();

  /// @brief Method StartVibration addr 0x2735294 size 0x104 virtual false final false
  static inline void StartVibration(float_t amplitude, float_t duration, ::UnityEngine::XR::XRNode controllerNode);

  /// @brief Method SetOpenVRLocalPose addr 0x2735398 size 0x110 virtual false final false
  static inline void SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot);

  /// @brief Method GetOpenVRStringProperty addr 0x27354a8 size 0x150 virtual false final false
  static inline ::StringW GetOpenVRStringProperty(::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t deviceId);

  /// @brief Method UpdateXRControllerNodeIds addr 0x2730b50 size 0x398 virtual false final false
  static inline void UpdateXRControllerNodeIds();

  /// @brief Method UpdateXRControllerHaptics addr 0x2730ee8 size 0x1e4 virtual false final false
  static inline void UpdateXRControllerHaptics();

  /// @brief Method InitHapticInfo addr 0x27304cc size 0x140 virtual false final false
  static inline void InitHapticInfo();

  /// @brief Method PlayHapticImpulse addr 0x27355f8 size 0x11c virtual false final false
  static inline void PlayHapticImpulse(float_t amplitude, ::UnityEngine::XR::XRNode deviceNode);

  /// @brief Method IsValidOpenVRDevice addr 0x273571c size 0xc virtual false final false
  static inline bool IsValidOpenVRDevice(uint32_t deviceId);

  /// @brief Method SetControllerVibration addr 0x2735728 size 0x1dc virtual false final false
  static inline void SetControllerVibration(float_t frequency, float_t amplitude, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method SetControllerLocalizedVibration addr 0x2735904 size 0x1dc virtual false final false
  static inline void SetControllerLocalizedVibration(::GlobalNamespace::__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude,
                                                     ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method SetControllerHapticsAmplitudeEnvelope addr 0x2735ae0 size 0x150 virtual false final false
  static inline void SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method SetControllerHapticsPcm addr 0x2735c30 size 0x15c virtual false final false
  static inline int32_t SetControllerHapticsPcm(::GlobalNamespace::__OVRInput__HapticsPcmVibration hapticsVibration, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetControllerSampleRateHz addr 0x2735d8c size 0x128 virtual false final false
  static inline float_t GetControllerSampleRateHz(::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetControllerBatteryPercentRemaining addr 0x2735eb4 size 0x128 virtual false final false
  static inline uint8_t GetControllerBatteryPercentRemaining(::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method CalculateAbsMax addr 0x2735158 size 0x28 virtual false final false
  static inline ::UnityEngine::Vector2 CalculateAbsMax(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method CalculateAbsMax addr 0x2734bc4 size 0x24 virtual false final false
  static inline float_t CalculateAbsMax(float_t a, float_t b);

  /// @brief Method CalculateDeadzone addr 0x2735020 size 0x138 virtual false final false
  static inline ::UnityEngine::Vector2 CalculateDeadzone(::UnityEngine::Vector2 a, float_t deadzone);

  /// @brief Method CalculateDeadzone addr 0x2734b74 size 0x50 virtual false final false
  static inline float_t CalculateDeadzone(float_t a, float_t deadzone);

  /// @brief Method ShouldResolveController addr 0x2733294 size 0x4c virtual false final false
  static inline bool ShouldResolveController(::GlobalNamespace::__OVRInput__Controller controllerType, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput(OVRInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput(OVRInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Axis1D, "", "OVRInput/Axis1D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Axis2D, "", "OVRInput/Axis2D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Button, "", "OVRInput/Button");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Controller, "", "OVRInput/Controller");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__ControllerInHandState, "", "OVRInput/ControllerInHandState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Hand, "", "OVRInput/Hand");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Handedness, "", "OVRInput/Handedness");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__HapticsLocation, "", "OVRInput/HapticsLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__InputDeviceShowState, "", "OVRInput/InputDeviceShowState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__InteractionProfile, "", "OVRInput/InteractionProfile");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__NearTouch, "", "OVRInput/NearTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OpenVRButton, "", "OVRInput/OpenVRButton");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OpenVRController, "", "OVRInput/OpenVRController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawAxis1D, "", "OVRInput/RawAxis1D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawAxis2D, "", "OVRInput/RawAxis2D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawButton, "", "OVRInput/RawButton");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawNearTouch, "", "OVRInput/RawNearTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawTouch, "", "OVRInput/RawTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Touch, "", "OVRInput/Touch");
NEED_NO_BOX(::GlobalNamespace::OVRInput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput*, "", "OVRInput");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__HapticInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__HapticInfo*, "", "OVRInput/HapticInfo");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase*, "", "OVRInput/OVRControllerBase");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis1DMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis2DMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*, "", "OVRInput/OVRControllerBase/VirtualButtonMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*, "", "OVRInput/OVRControllerBase/VirtualNearTouchMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*, "", "OVRInput/OVRControllerBase/VirtualTouchMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*, "", "OVRInput/OVRControllerGamepadAndroid");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerGamepadPC);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*, "", "OVRInput/OVRControllerGamepadPC");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerHands);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerHands*, "", "OVRInput/OVRControllerHands");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerLHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerLHand*, "", "OVRInput/OVRControllerLHand");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerLTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerLTouch*, "", "OVRInput/OVRControllerLTouch");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerRHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerRHand*, "", "OVRInput/OVRControllerRHand");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerRTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerRTouch*, "", "OVRInput/OVRControllerRTouch");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerRemote);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerRemote*, "", "OVRInput/OVRControllerRemote");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerTouch*, "", "OVRInput/OVRControllerTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration, "", "OVRInput/HapticsAmplitudeEnvelopeVibration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__HapticsPcmVibration, "", "OVRInput/HapticsPcmVibration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OpenVRControllerDetails, "", "OVRInput/OpenVRControllerDetails");
