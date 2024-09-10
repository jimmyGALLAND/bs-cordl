#pragma once
// IWYU pragma private; include "GlobalNamespace/DevicelessVRHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DevicelessVRHelper)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DevicelessVRHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DevicelessVRHelper);
// Type: ::DevicelessVRHelper
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 99, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DevicelessVRHelper*
class CORDL_TYPE DevicelessVRHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _hasInputFocus, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasInputFocus, put=__cordl_internal_set__hasInputFocus)) bool  _hasInputFocus;

/// @brief Field _hasVrFocus, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasVrFocus, put=__cordl_internal_set__hasVrFocus)) bool  _hasVrFocus;

/// @brief Field _scrollingLastFrame, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__scrollingLastFrame, put=__cordl_internal_set__scrollingLastFrame)) bool  _scrollingLastFrame;

/// @brief Field controllersDidChangeReferenceEvent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllersDidChangeReferenceEvent, put=__cordl_internal_set_controllersDidChangeReferenceEvent)) ::System::Action*  controllersDidChangeReferenceEvent;

/// @brief Field controllersDidDisconnectEvent, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllersDidDisconnectEvent, put=__cordl_internal_set_controllersDidDisconnectEvent)) ::System::Action*  controllersDidDisconnectEvent;

 __declspec(property(get=get_hasInputFocus)) bool  hasInputFocus;

 __declspec(property(get=get_hasVrFocus)) bool  hasVrFocus;

/// @brief Field hmdMountedEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_hmdMountedEvent, put=__cordl_internal_set_hmdMountedEvent)) ::System::Action*  hmdMountedEvent;

/// @brief Field hmdUnmountedEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hmdUnmountedEvent, put=__cordl_internal_set_hmdUnmountedEvent)) ::System::Action*  hmdUnmountedEvent;

/// @brief Field inputFocusWasCapturedEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputFocusWasCapturedEvent, put=__cordl_internal_set_inputFocusWasCapturedEvent)) ::System::Action*  inputFocusWasCapturedEvent;

/// @brief Field inputFocusWasReleasedEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputFocusWasReleasedEvent, put=__cordl_internal_set_inputFocusWasReleasedEvent)) ::System::Action*  inputFocusWasReleasedEvent;

 __declspec(property(get=get_isAlwaysWireless)) bool  isAlwaysWireless;

 __declspec(property(get=get_loggerPrefix)) ::StringW  loggerPrefix;

/// @brief Field vrFocusWasCapturedEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrFocusWasCapturedEvent, put=__cordl_internal_set_vrFocusWasCapturedEvent)) ::System::Action*  vrFocusWasCapturedEvent;

/// @brief Field vrFocusWasReleasedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrFocusWasReleasedEvent, put=__cordl_internal_set_vrFocusWasReleasedEvent)) ::System::Action*  vrFocusWasReleasedEvent;

 __declspec(property(get=get_vrPlatformSDK)) ::GlobalNamespace::VRPlatformSDK  vrPlatformSDK;

/// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
constexpr operator  ::GlobalNamespace::IVRPlatformHelper*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
constexpr operator  ::GlobalNamespace::IVerboseLogger*() noexcept;

/// @brief Method AdjustControllerTransform, addr 0x394500c, size 0x4, virtual false, abstract: false, final false
inline void AdjustControllerTransform(::UnityEngine::XR::XRNode  node, ::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation) ;

/// @brief Method GetAnyJoystickMaxAxis, addr 0x39451a4, size 0x68, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetControllerTransformAdjustment, addr 0x3945098, size 0x74, virtual false, abstract: false, final false
inline void GetControllerTransformAdjustment(::UnityEngine::XR::XRNode  node, ByRef<::UnityEngine::Vector3>  outPos, ByRef<::UnityEngine::Vector3>  outRot) ;

/// @brief Method GetMenuButton, addr 0x39452a4, size 0x4, virtual true, abstract: false, final true
inline bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown, addr 0x3945320, size 0x4, virtual true, abstract: false, final true
inline bool GetMenuButtonDown() ;

/// @brief Method GetNodePose, addr 0x394510c, size 0x98, virtual true, abstract: false, final true
inline bool GetNodePose(::UnityEngine::XR::XRNode  nodeType, int32_t  idx, ByRef<::UnityEngine::Vector3>  pos, ByRef<::UnityEngine::Quaternion>  rot) ;

/// @brief Method GetThumbstickValue, addr 0x3945234, size 0x68, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetTriggerValue, addr 0x394520c, size 0x28, virtual true, abstract: false, final true
inline float_t GetTriggerValue(::UnityEngine::XR::XRNode  node) ;

/// @brief Method IsAdvancedHapticsSupported, addr 0x394529c, size 0x8, virtual true, abstract: false, final true
inline bool IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode  node) ;

static inline ::GlobalNamespace::DevicelessVRHelper* New_ctor() ;

/// @brief Method RefreshControllersReference, addr 0x394539c, size 0x1c, virtual true, abstract: false, final true
inline void RefreshControllersReference() ;

/// @brief Method StopHaptics, addr 0x3945008, size 0x4, virtual true, abstract: false, final true
inline void StopHaptics(::UnityEngine::XR::XRNode  node) ;

/// @brief Method TriggerHapticPulse, addr 0x3945004, size 0x4, virtual true, abstract: false, final true
inline void TriggerHapticPulse(::UnityEngine::XR::XRNode  node, float_t  duration, float_t  strength, float_t  frequency) ;

/// @brief Method TryGetPoseOffsetForNode, addr 0x3945010, size 0x88, virtual true, abstract: false, final true
inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode  node, ByRef<::UnityEngine::Pose>  poseOffset) ;

/// @brief Method Update, addr 0x3944ea8, size 0x15c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__hasInputFocus() const;

constexpr bool& __cordl_internal_get__hasInputFocus() ;

constexpr bool const& __cordl_internal_get__hasVrFocus() const;

constexpr bool& __cordl_internal_get__hasVrFocus() ;

constexpr bool const& __cordl_internal_get__scrollingLastFrame() const;

constexpr bool& __cordl_internal_get__scrollingLastFrame() ;

constexpr ::System::Action*& __cordl_internal_get_controllersDidChangeReferenceEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_controllersDidChangeReferenceEvent() const;

constexpr ::System::Action*& __cordl_internal_get_controllersDidDisconnectEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_controllersDidDisconnectEvent() const;

constexpr ::System::Action*& __cordl_internal_get_hmdMountedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_hmdMountedEvent() const;

constexpr ::System::Action*& __cordl_internal_get_hmdUnmountedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_hmdUnmountedEvent() const;

constexpr ::System::Action*& __cordl_internal_get_inputFocusWasCapturedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_inputFocusWasCapturedEvent() const;

constexpr ::System::Action*& __cordl_internal_get_inputFocusWasReleasedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_inputFocusWasReleasedEvent() const;

constexpr ::System::Action*& __cordl_internal_get_vrFocusWasCapturedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_vrFocusWasCapturedEvent() const;

constexpr ::System::Action*& __cordl_internal_get_vrFocusWasReleasedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_vrFocusWasReleasedEvent() const;

constexpr void __cordl_internal_set__hasInputFocus(bool  value) ;

constexpr void __cordl_internal_set__hasVrFocus(bool  value) ;

constexpr void __cordl_internal_set__scrollingLastFrame(bool  value) ;

constexpr void __cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_controllersDidDisconnectEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_hmdMountedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_hmdUnmountedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_inputFocusWasCapturedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_inputFocusWasReleasedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_vrFocusWasCapturedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_vrFocusWasReleasedEvent(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x39453b8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_controllersDidChangeReferenceEvent, addr 0x3944bd8, size 0x9c, virtual true, abstract: false, final true
inline void add_controllersDidChangeReferenceEvent(::System::Action*  value) ;

/// @brief Method add_controllersDidDisconnectEvent, addr 0x3944d10, size 0x9c, virtual true, abstract: false, final true
inline void add_controllersDidDisconnectEvent(::System::Action*  value) ;

/// @brief Method add_hmdMountedEvent, addr 0x3944aa0, size 0x9c, virtual true, abstract: false, final true
inline void add_hmdMountedEvent(::System::Action*  value) ;

/// @brief Method add_hmdUnmountedEvent, addr 0x3944968, size 0x9c, virtual true, abstract: false, final true
inline void add_hmdUnmountedEvent(::System::Action*  value) ;

/// @brief Method add_inputFocusWasCapturedEvent, addr 0x3944488, size 0x9c, virtual true, abstract: false, final true
inline void add_inputFocusWasCapturedEvent(::System::Action*  value) ;

/// @brief Method add_inputFocusWasReleasedEvent, addr 0x39445c0, size 0x9c, virtual true, abstract: false, final true
inline void add_inputFocusWasReleasedEvent(::System::Action*  value) ;

/// @brief Method add_vrFocusWasCapturedEvent, addr 0x39446f8, size 0x9c, virtual true, abstract: false, final true
inline void add_vrFocusWasCapturedEvent(::System::Action*  value) ;

/// @brief Method add_vrFocusWasReleasedEvent, addr 0x3944830, size 0x9c, virtual true, abstract: false, final true
inline void add_vrFocusWasReleasedEvent(::System::Action*  value) ;

/// @brief Method get_hasInputFocus, addr 0x3944e48, size 0x8, virtual true, abstract: false, final true
inline bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus, addr 0x3944e50, size 0x8, virtual true, abstract: false, final true
inline bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless, addr 0x3944e58, size 0x8, virtual true, abstract: false, final true
inline bool get_isAlwaysWireless() ;

/// @brief Method get_loggerPrefix, addr 0x3944e68, size 0x40, virtual true, abstract: false, final true
inline ::StringW get_loggerPrefix() ;

/// @brief Method get_vrPlatformSDK, addr 0x3944e60, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

/// @brief Convert to "::GlobalNamespace::IVerboseLogger"
constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

/// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x3944c74, size 0x9c, virtual true, abstract: false, final true
inline void remove_controllersDidChangeReferenceEvent(::System::Action*  value) ;

/// @brief Method remove_controllersDidDisconnectEvent, addr 0x3944dac, size 0x9c, virtual true, abstract: false, final true
inline void remove_controllersDidDisconnectEvent(::System::Action*  value) ;

/// @brief Method remove_hmdMountedEvent, addr 0x3944b3c, size 0x9c, virtual true, abstract: false, final true
inline void remove_hmdMountedEvent(::System::Action*  value) ;

/// @brief Method remove_hmdUnmountedEvent, addr 0x3944a04, size 0x9c, virtual true, abstract: false, final true
inline void remove_hmdUnmountedEvent(::System::Action*  value) ;

/// @brief Method remove_inputFocusWasCapturedEvent, addr 0x3944524, size 0x9c, virtual true, abstract: false, final true
inline void remove_inputFocusWasCapturedEvent(::System::Action*  value) ;

/// @brief Method remove_inputFocusWasReleasedEvent, addr 0x394465c, size 0x9c, virtual true, abstract: false, final true
inline void remove_inputFocusWasReleasedEvent(::System::Action*  value) ;

/// @brief Method remove_vrFocusWasCapturedEvent, addr 0x3944794, size 0x9c, virtual true, abstract: false, final true
inline void remove_vrFocusWasCapturedEvent(::System::Action*  value) ;

/// @brief Method remove_vrFocusWasReleasedEvent, addr 0x39448cc, size 0x9c, virtual true, abstract: false, final true
inline void remove_vrFocusWasReleasedEvent(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevicelessVRHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevicelessVRHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevicelessVRHelper(DevicelessVRHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevicelessVRHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevicelessVRHelper(DevicelessVRHelper const& ) = delete;

/// @brief Field inputFocusWasCapturedEvent, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___inputFocusWasCapturedEvent;

/// @brief Field inputFocusWasReleasedEvent, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___inputFocusWasReleasedEvent;

/// @brief Field vrFocusWasCapturedEvent, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___vrFocusWasCapturedEvent;

/// @brief Field vrFocusWasReleasedEvent, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___vrFocusWasReleasedEvent;

/// @brief Field hmdUnmountedEvent, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___hmdUnmountedEvent;

/// @brief Field hmdMountedEvent, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___hmdMountedEvent;

/// @brief Field controllersDidChangeReferenceEvent, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___controllersDidChangeReferenceEvent;

/// @brief Field controllersDidDisconnectEvent, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___controllersDidDisconnectEvent;

/// @brief Field _hasInputFocus, offset: 0x60, size: 0x1, def value: None
 bool  ____hasInputFocus;

/// @brief Field _hasVrFocus, offset: 0x61, size: 0x1, def value: None
 bool  ____hasVrFocus;

/// @brief Field _scrollingLastFrame, offset: 0x62, size: 0x1, def value: None
 bool  ____scrollingLastFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DevicelessVRHelper, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___inputFocusWasCapturedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___inputFocusWasReleasedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___vrFocusWasCapturedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___vrFocusWasReleasedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___hmdUnmountedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___hmdMountedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___controllersDidChangeReferenceEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___controllersDidDisconnectEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ____hasInputFocus) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ____hasVrFocus) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ____scrollingLastFrame) == 0x62, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DevicelessVRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DevicelessVRHelper*, "", "DevicelessVRHelper");
