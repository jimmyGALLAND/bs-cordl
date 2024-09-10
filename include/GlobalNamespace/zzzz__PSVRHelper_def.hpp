#pragma once
// IWYU pragma private; include "GlobalNamespace/PSVRHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PSVRHelper)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNodeState;
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
class PSVRHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PSVRHelper);
// Type: ::PSVRHelper
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 115, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PSVRHelper*
class CORDL_TYPE PSVRHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _didGetNodeStatesThisFrame, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__didGetNodeStatesThisFrame, put=__cordl_internal_set__didGetNodeStatesThisFrame)) bool  _didGetNodeStatesThisFrame;

/// @brief Field _hasInputFocus, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasInputFocus, put=__cordl_internal_set__hasInputFocus)) bool  _hasInputFocus;

/// @brief Field _hasVrFocus, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasVrFocus, put=__cordl_internal_set__hasVrFocus)) bool  _hasVrFocus;

/// @brief Field _isMounted, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMounted, put=__cordl_internal_set__isMounted)) bool  _isMounted;

/// @brief Field _nodeStates, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodeStates, put=__cordl_internal_set__nodeStates)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  _nodeStates;

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

/// @brief Field vrFocusWasCapturedEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrFocusWasCapturedEvent, put=__cordl_internal_set_vrFocusWasCapturedEvent)) ::System::Action*  vrFocusWasCapturedEvent;

/// @brief Field vrFocusWasReleasedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrFocusWasReleasedEvent, put=__cordl_internal_set_vrFocusWasReleasedEvent)) ::System::Action*  vrFocusWasReleasedEvent;

 __declspec(property(get=get_vrPlatformSDK)) ::GlobalNamespace::VRPlatformSDK  vrPlatformSDK;

/// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
constexpr operator  ::GlobalNamespace::IVRPlatformHelper*() noexcept;

/// @brief Method AdjustControllerTransform, addr 0x394be10, size 0x4, virtual false, abstract: false, final false
inline void AdjustControllerTransform(::UnityEngine::XR::XRNode  node, ::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation) ;

/// @brief Method GetAnyJoystickMaxAxis, addr 0x394c380, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis() ;

/// @brief Method GetControllerTransformAdjustment, addr 0x394bf70, size 0x74, virtual false, abstract: false, final false
inline void GetControllerTransformAdjustment(::UnityEngine::XR::XRNode  node, ByRef<::UnityEngine::Vector3>  outPos, ByRef<::UnityEngine::Vector3>  outRot) ;

/// @brief Method GetMenuButton, addr 0x394c410, size 0x4, virtual true, abstract: false, final true
inline bool GetMenuButton() ;

/// @brief Method GetMenuButtonDown, addr 0x394c414, size 0x4, virtual true, abstract: false, final true
inline bool GetMenuButtonDown() ;

/// @brief Method GetNodePose, addr 0x394bfe4, size 0x39c, virtual true, abstract: false, final true
inline bool GetNodePose(::UnityEngine::XR::XRNode  nodeType, int32_t  idx, ByRef<::UnityEngine::Vector3>  pos, ByRef<::UnityEngine::Quaternion>  rot) ;

/// @brief Method GetThumbstickValue, addr 0x394c3c8, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode  node) ;

/// @brief Method GetTriggerValue, addr 0x394c3c0, size 0x8, virtual true, abstract: false, final true
inline float_t GetTriggerValue(::UnityEngine::XR::XRNode  node) ;

/// @brief Method HandleMoveDeviceDidDisconnectEvent, addr 0x394bde0, size 0x1c, virtual false, abstract: false, final false
inline void HandleMoveDeviceDidDisconnectEvent() ;

/// @brief Method IsAdvancedHapticsSupported, addr 0x394c408, size 0x8, virtual true, abstract: false, final true
inline bool IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode  node) ;

/// @brief Method LateUpdate, addr 0x394be00, size 0x8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::PSVRHelper* New_ctor() ;

/// @brief Method OnDestroy, addr 0x394bddc, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RefreshControllersReference, addr 0x394c418, size 0x1c, virtual true, abstract: false, final true
inline void RefreshControllersReference() ;

/// @brief Method Start, addr 0x394bdd8, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopHaptics, addr 0x394be0c, size 0x4, virtual true, abstract: false, final true
inline void StopHaptics(::UnityEngine::XR::XRNode  node) ;

/// @brief Method TriggerHapticPulse, addr 0x394be08, size 0x4, virtual true, abstract: false, final true
inline void TriggerHapticPulse(::UnityEngine::XR::XRNode  node, float_t  duration, float_t  strength, float_t  frequency) ;

/// @brief Method TryGetPoseOffsetForNode, addr 0x394be14, size 0x88, virtual true, abstract: false, final true
inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode  node, ByRef<::UnityEngine::Pose>  poseOffset) ;

/// @brief Method Update, addr 0x394bdfc, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method XRNodeToPSDeviceIndex, addr 0x394be9c, size 0xd4, virtual false, abstract: false, final false
static inline int32_t XRNodeToPSDeviceIndex(::UnityEngine::XR::XRNode  node) ;

constexpr bool const& __cordl_internal_get__didGetNodeStatesThisFrame() const;

constexpr bool& __cordl_internal_get__didGetNodeStatesThisFrame() ;

constexpr bool const& __cordl_internal_get__hasInputFocus() const;

constexpr bool& __cordl_internal_get__hasInputFocus() ;

constexpr bool const& __cordl_internal_get__hasVrFocus() const;

constexpr bool& __cordl_internal_get__hasVrFocus() ;

constexpr bool const& __cordl_internal_get__isMounted() const;

constexpr bool& __cordl_internal_get__isMounted() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*& __cordl_internal_get__nodeStates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*> const& __cordl_internal_get__nodeStates() const;

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

constexpr void __cordl_internal_set__didGetNodeStatesThisFrame(bool  value) ;

constexpr void __cordl_internal_set__hasInputFocus(bool  value) ;

constexpr void __cordl_internal_set__hasVrFocus(bool  value) ;

constexpr void __cordl_internal_set__isMounted(bool  value) ;

constexpr void __cordl_internal_set__nodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  value) ;

constexpr void __cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_controllersDidDisconnectEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_hmdMountedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_hmdUnmountedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_inputFocusWasCapturedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_inputFocusWasReleasedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_vrFocusWasCapturedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_vrFocusWasReleasedEvent(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x394c434, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_controllersDidChangeReferenceEvent, addr 0x394bb48, size 0x9c, virtual true, abstract: false, final true
inline void add_controllersDidChangeReferenceEvent(::System::Action*  value) ;

/// @brief Method add_controllersDidDisconnectEvent, addr 0x394bc80, size 0x9c, virtual true, abstract: false, final true
inline void add_controllersDidDisconnectEvent(::System::Action*  value) ;

/// @brief Method add_hmdMountedEvent, addr 0x394ba10, size 0x9c, virtual true, abstract: false, final true
inline void add_hmdMountedEvent(::System::Action*  value) ;

/// @brief Method add_hmdUnmountedEvent, addr 0x394b8d8, size 0x9c, virtual true, abstract: false, final true
inline void add_hmdUnmountedEvent(::System::Action*  value) ;

/// @brief Method add_inputFocusWasCapturedEvent, addr 0x394b3f8, size 0x9c, virtual true, abstract: false, final true
inline void add_inputFocusWasCapturedEvent(::System::Action*  value) ;

/// @brief Method add_inputFocusWasReleasedEvent, addr 0x394b530, size 0x9c, virtual true, abstract: false, final true
inline void add_inputFocusWasReleasedEvent(::System::Action*  value) ;

/// @brief Method add_vrFocusWasCapturedEvent, addr 0x394b668, size 0x9c, virtual true, abstract: false, final true
inline void add_vrFocusWasCapturedEvent(::System::Action*  value) ;

/// @brief Method add_vrFocusWasReleasedEvent, addr 0x394b7a0, size 0x9c, virtual true, abstract: false, final true
inline void add_vrFocusWasReleasedEvent(::System::Action*  value) ;

/// @brief Method get_hasInputFocus, addr 0x394bdb8, size 0x8, virtual true, abstract: false, final true
inline bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus, addr 0x394bdc0, size 0x8, virtual true, abstract: false, final true
inline bool get_hasVrFocus() ;

/// @brief Method get_isAlwaysWireless, addr 0x394bdc8, size 0x8, virtual true, abstract: false, final true
inline bool get_isAlwaysWireless() ;

/// @brief Method get_vrPlatformSDK, addr 0x394bdd0, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK() ;

/// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

/// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x394bbe4, size 0x9c, virtual true, abstract: false, final true
inline void remove_controllersDidChangeReferenceEvent(::System::Action*  value) ;

/// @brief Method remove_controllersDidDisconnectEvent, addr 0x394bd1c, size 0x9c, virtual true, abstract: false, final true
inline void remove_controllersDidDisconnectEvent(::System::Action*  value) ;

/// @brief Method remove_hmdMountedEvent, addr 0x394baac, size 0x9c, virtual true, abstract: false, final true
inline void remove_hmdMountedEvent(::System::Action*  value) ;

/// @brief Method remove_hmdUnmountedEvent, addr 0x394b974, size 0x9c, virtual true, abstract: false, final true
inline void remove_hmdUnmountedEvent(::System::Action*  value) ;

/// @brief Method remove_inputFocusWasCapturedEvent, addr 0x394b494, size 0x9c, virtual true, abstract: false, final true
inline void remove_inputFocusWasCapturedEvent(::System::Action*  value) ;

/// @brief Method remove_inputFocusWasReleasedEvent, addr 0x394b5cc, size 0x9c, virtual true, abstract: false, final true
inline void remove_inputFocusWasReleasedEvent(::System::Action*  value) ;

/// @brief Method remove_vrFocusWasCapturedEvent, addr 0x394b704, size 0x9c, virtual true, abstract: false, final true
inline void remove_vrFocusWasCapturedEvent(::System::Action*  value) ;

/// @brief Method remove_vrFocusWasReleasedEvent, addr 0x394b83c, size 0x9c, virtual true, abstract: false, final true
inline void remove_vrFocusWasReleasedEvent(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PSVRHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PSVRHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PSVRHelper(PSVRHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PSVRHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PSVRHelper(PSVRHelper const& ) = delete;

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

/// @brief Field _didGetNodeStatesThisFrame, offset: 0x60, size: 0x1, def value: None
 bool  ____didGetNodeStatesThisFrame;

/// @brief Field _nodeStates, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  ____nodeStates;

/// @brief Field _hasInputFocus, offset: 0x70, size: 0x1, def value: None
 bool  ____hasInputFocus;

/// @brief Field _hasVrFocus, offset: 0x71, size: 0x1, def value: None
 bool  ____hasVrFocus;

/// @brief Field _isMounted, offset: 0x72, size: 0x1, def value: None
 bool  ____isMounted;

/// @brief Field kContinuesRumbleImpulseStrength offset 0xffffffff size 0x4
static constexpr float_t  kContinuesRumbleImpulseStrength{0.8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PSVRHelper, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___inputFocusWasCapturedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___inputFocusWasReleasedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___vrFocusWasCapturedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___vrFocusWasReleasedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___hmdUnmountedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___hmdMountedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___controllersDidChangeReferenceEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___controllersDidDisconnectEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ____didGetNodeStatesThisFrame) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ____nodeStates) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ____hasInputFocus) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ____hasVrFocus) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ____isMounted) == 0x72, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PSVRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVRHelper*, "", "PSVRHelper");
