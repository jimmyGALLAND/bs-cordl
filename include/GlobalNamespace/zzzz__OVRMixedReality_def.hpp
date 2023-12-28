#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRMixedReality)
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace GlobalNamespace {
struct __OVRManager__TrackingOrigin;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRComposition;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedReality;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMixedReality);
// Type: ::OVRMixedReality
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7651))
// CS Name: ::OVRMixedReality*
class CORDL_TYPE OVRMixedReality : public ::System::Object {
public:
  // Declarations
  /// @brief Field useFakeExternalCamera, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_useFakeExternalCamera, put = setStaticF_useFakeExternalCamera)) bool useFakeExternalCamera;

  /// @brief Field fakeCameraFloorLevelPosition, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_fakeCameraFloorLevelPosition, put = setStaticF_fakeCameraFloorLevelPosition))::UnityEngine::Vector3 fakeCameraFloorLevelPosition;

  /// @brief Field fakeCameraEyeLevelPosition, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_fakeCameraEyeLevelPosition, put = setStaticF_fakeCameraEyeLevelPosition))::UnityEngine::Vector3 fakeCameraEyeLevelPosition;

  /// @brief Field fakeCameraRotation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_fakeCameraRotation, put = setStaticF_fakeCameraRotation))::UnityEngine::Quaternion fakeCameraRotation;

  /// @brief Field fakeCameraFov, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_fakeCameraFov, put = setStaticF_fakeCameraFov)) float_t fakeCameraFov;

  /// @brief Field fakeCameraAspect, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_fakeCameraAspect, put = setStaticF_fakeCameraAspect)) float_t fakeCameraAspect;

  /// @brief Field currentComposition, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_currentComposition, put = setStaticF_currentComposition))::GlobalNamespace::OVRComposition* currentComposition;

  static inline void setStaticF_useFakeExternalCamera(bool value);

  static inline bool getStaticF_useFakeExternalCamera();

  static inline void setStaticF_fakeCameraFloorLevelPosition(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_fakeCameraFloorLevelPosition();

  static inline void setStaticF_fakeCameraEyeLevelPosition(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_fakeCameraEyeLevelPosition();

  static inline void setStaticF_fakeCameraRotation(::UnityEngine::Quaternion value);

  static inline ::UnityEngine::Quaternion getStaticF_fakeCameraRotation();

  static inline void setStaticF_fakeCameraFov(float_t value);

  static inline float_t getStaticF_fakeCameraFov();

  static inline void setStaticF_fakeCameraAspect(float_t value);

  static inline float_t getStaticF_fakeCameraAspect();

  static inline void setStaticF_currentComposition(::GlobalNamespace::OVRComposition* value);

  static inline ::GlobalNamespace::OVRComposition* getStaticF_currentComposition();

  /// @brief Method Update addr 0x2744d3c size 0x4e0 virtual false final false
  static inline void Update(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration,
                            ::GlobalNamespace::__OVRManager__TrackingOrigin trackingOrigin);

  /// @brief Method Cleanup addr 0x274521c size 0xe8 virtual false final false
  static inline void Cleanup();

  /// @brief Method RecenterPose addr 0x2745c04 size 0x94 virtual false final false
  static inline void RecenterPose();

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedReality", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMixedReality(OVRMixedReality&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedReality", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMixedReality(OVRMixedReality const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMixedReality();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMixedReality, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMixedReality);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedReality*, "", "OVRMixedReality");
