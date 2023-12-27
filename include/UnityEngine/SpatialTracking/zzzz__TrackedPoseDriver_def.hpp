#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedPoseDriver)
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackingType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::Experimental::XR::Interaction {
class BasePoseProvider;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__UpdateType;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__DeviceType;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackedPose;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__DeviceType;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackedPose;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__TrackingType;
}
namespace UnityEngine::SpatialTracking {
struct __TrackedPoseDriver__UpdateType;
}
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriver;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType);
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose);
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType);
MARK_VAL_T(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType);
MARK_REF_PTR_T(::UnityEngine::SpatialTracking::TrackedPoseDriver);
// Type: ::DeviceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16193))
// CS Name: ::TrackedPoseDriver::DeviceType
struct CORDL_TYPE __TrackedPoseDriver__DeviceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__DeviceType_Unwrapped
  enum struct ____TrackedPoseDriver__DeviceType_Unwrapped : int32_t {
    __E_GenericXRDevice = static_cast<int32_t>(0x0),
    __E_GenericXRController = static_cast<int32_t>(0x1),
    __E_GenericXRRemote = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__DeviceType_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__DeviceType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__DeviceType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__DeviceType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field GenericXRDevice value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const GenericXRDevice;

  /// @brief Field GenericXRController value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const GenericXRController;

  /// @brief Field GenericXRRemote value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const GenericXRRemote;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: ::TrackedPose
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16194))
// CS Name: ::TrackedPoseDriver::TrackedPose
struct CORDL_TYPE __TrackedPoseDriver__TrackedPose {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__TrackedPose_Unwrapped
  enum struct ____TrackedPoseDriver__TrackedPose_Unwrapped : int32_t {
    __E_LeftEye = static_cast<int32_t>(0x0),
    __E_RightEye = static_cast<int32_t>(0x1),
    __E_Center = static_cast<int32_t>(0x2),
    __E_Head = static_cast<int32_t>(0x3),
    __E_LeftPose = static_cast<int32_t>(0x4),
    __E_RightPose = static_cast<int32_t>(0x5),
    __E_ColorCamera = static_cast<int32_t>(0x6),
    __E_DepthCameraDeprecated = static_cast<int32_t>(0x7),
    __E_FisheyeCameraDeprected = static_cast<int32_t>(0x8),
    __E_DeviceDeprecated = static_cast<int32_t>(0x9),
    __E_RemotePose = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__TrackedPose_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__TrackedPose_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__TrackedPose(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__TrackedPose();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field LeftEye value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const LeftEye;

  /// @brief Field RightEye value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const RightEye;

  /// @brief Field Center value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const Center;

  /// @brief Field Head value: static_cast<int32_t>(0x3)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const Head;

  /// @brief Field LeftPose value: static_cast<int32_t>(0x4)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const LeftPose;

  /// @brief Field RightPose value: static_cast<int32_t>(0x5)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const RightPose;

  /// @brief Field ColorCamera value: static_cast<int32_t>(0x6)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const ColorCamera;

  /// @brief Field DepthCameraDeprecated value: static_cast<int32_t>(0x7)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const DepthCameraDeprecated;

  /// @brief Field FisheyeCameraDeprected value: static_cast<int32_t>(0x8)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const FisheyeCameraDeprected;

  /// @brief Field DeviceDeprecated value: static_cast<int32_t>(0x9)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const DeviceDeprecated;

  /// @brief Field RemotePose value: static_cast<int32_t>(0xa)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const RemotePose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, 0x4>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: ::TrackingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16195))
// CS Name: ::TrackedPoseDriver::TrackingType
struct CORDL_TYPE __TrackedPoseDriver__TrackingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__TrackingType_Unwrapped
  enum struct ____TrackedPoseDriver__TrackingType_Unwrapped : int32_t {
    __E_RotationAndPosition = static_cast<int32_t>(0x0),
    __E_RotationOnly = static_cast<int32_t>(0x1),
    __E_PositionOnly = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__TrackingType_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__TrackingType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__TrackingType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__TrackingType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field RotationAndPosition value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const RotationAndPosition;

  /// @brief Field RotationOnly value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const RotationOnly;

  /// @brief Field PositionOnly value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const PositionOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: ::UpdateType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16196))
// CS Name: ::TrackedPoseDriver::UpdateType
struct CORDL_TYPE __TrackedPoseDriver__UpdateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TrackedPoseDriver__UpdateType_Unwrapped
  enum struct ____TrackedPoseDriver__UpdateType_Unwrapped : int32_t {
    __E_UpdateAndBeforeRender = static_cast<int32_t>(0x0),
    __E_Update = static_cast<int32_t>(0x1),
    __E_BeforeRender = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TrackedPoseDriver__UpdateType_Unwrapped() const noexcept {
    return static_cast<____TrackedPoseDriver__UpdateType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TrackedPoseDriver__UpdateType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedPoseDriver__UpdateType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UpdateAndBeforeRender value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const UpdateAndBeforeRender;

  /// @brief Field Update value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const Update;

  /// @brief Field BeforeRender value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const BeforeRender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
// Type: UnityEngine.SpatialTracking::TrackedPoseDriver
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::SpatialTracking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(16194)), TypeDefinitionIndex(TypeDefinitionIndex(16196)),
// TypeDefinitionIndex(TypeDefinitionIndex(10057)), TypeDefinitionIndex(TypeDefinitionIndex(16195)), TypeDefinitionIndex(TypeDefinitionIndex(16193))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(16197)) CS Name: ::UnityEngine.SpatialTracking::TrackedPoseDriver*
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using UpdateType = ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType;

  using TrackingType = ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType;

  using TrackedPose = ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose;

  using DeviceType = ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType;

  /// @brief Field m_Device, offset 0x18, size 0x4
  __declspec(property(get = __get_m_Device, put = __set_m_Device))::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType m_Device;

  /// @brief Field m_PoseSource, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_PoseSource, put = __set_m_PoseSource))::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose m_PoseSource;

  /// @brief Field m_PoseProviderComponent, offset 0x20, size 0x8
  __declspec(property(get = __get_m_PoseProviderComponent, put = __set_m_PoseProviderComponent))::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* m_PoseProviderComponent;

  /// @brief Field m_TrackingType, offset 0x28, size 0x4
  __declspec(property(get = __get_m_TrackingType, put = __set_m_TrackingType))::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType m_TrackingType;

  /// @brief Field m_UpdateType, offset 0x2c, size 0x4
  __declspec(property(get = __get_m_UpdateType, put = __set_m_UpdateType))::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType m_UpdateType;

  /// @brief Field m_UseRelativeTransform, offset 0x30, size 0x1
  __declspec(property(get = __get_m_UseRelativeTransform, put = __set_m_UseRelativeTransform)) bool m_UseRelativeTransform;

  /// @brief Field m_OriginPose, offset 0x34, size 0x1c
  __declspec(property(get = __get_m_OriginPose, put = __set_m_OriginPose))::UnityEngine::Pose m_OriginPose;

  __declspec(property(get = get_deviceType, put = set_deviceType))::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType deviceType;

  __declspec(property(get = get_poseSource, put = set_poseSource))::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource;

  __declspec(property(get = get_poseProviderComponent, put = set_poseProviderComponent))::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* poseProviderComponent;

  __declspec(property(get = get_trackingType, put = set_trackingType))::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType trackingType;

  __declspec(property(get = get_updateType, put = set_updateType))::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType updateType;

  __declspec(property(get = get_UseRelativeTransform, put = set_UseRelativeTransform)) bool UseRelativeTransform;

  __declspec(property(get = get_originPose, put = set_originPose))::UnityEngine::Pose originPose;

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType& __get_m_Device();

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType const& __get_m_Device() const;

  constexpr void __set_m_Device(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType value);

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose& __get_m_PoseSource();

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose const& __get_m_PoseSource() const;

  constexpr void __set_m_PoseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose value);

  constexpr ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*& __get_m_PoseProviderComponent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*> const& __get_m_PoseProviderComponent() const;

  constexpr void __set_m_PoseProviderComponent(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* value);

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType& __get_m_TrackingType();

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType const& __get_m_TrackingType() const;

  constexpr void __set_m_TrackingType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType value);

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType& __get_m_UpdateType();

  constexpr ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType const& __get_m_UpdateType() const;

  constexpr void __set_m_UpdateType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType value);

  constexpr bool& __get_m_UseRelativeTransform();

  constexpr bool const& __get_m_UseRelativeTransform() const;

  constexpr void __set_m_UseRelativeTransform(bool value);

  constexpr ::UnityEngine::Pose& __get_m_OriginPose();

  constexpr ::UnityEngine::Pose const& __get_m_OriginPose() const;

  constexpr void __set_m_OriginPose(::UnityEngine::Pose value);

  /// @brief Method get_deviceType addr 0x2d19920 size 0x8 virtual false final false
  inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType get_deviceType();

  /// @brief Method set_deviceType addr 0x2d19928 size 0x8 virtual false final false
  inline void set_deviceType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType value);

  /// @brief Method get_poseSource addr 0x2d19930 size 0x8 virtual false final false
  inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose get_poseSource();

  /// @brief Method set_poseSource addr 0x2d19938 size 0x8 virtual false final false
  inline void set_poseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose value);

  /// @brief Method SetPoseSource addr 0x2d19940 size 0x144 virtual false final false
  inline bool SetPoseSource(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType deviceType, ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose pose);

  /// @brief Method get_poseProviderComponent addr 0x2d19a84 size 0x8 virtual false final false
  inline ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* get_poseProviderComponent();

  /// @brief Method set_poseProviderComponent addr 0x2d19a8c size 0x8 virtual false final false
  inline void set_poseProviderComponent(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* value);

  /// @brief Method GetPoseData addr 0x2d19a94 size 0xcc virtual false final false
  inline ::UnityEngine::SpatialTracking::PoseDataFlags GetPoseData(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType device,
                                                                   ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose);

  /// @brief Method get_trackingType addr 0x2d19b60 size 0x8 virtual false final false
  inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType get_trackingType();

  /// @brief Method set_trackingType addr 0x2d19b68 size 0x8 virtual false final false
  inline void set_trackingType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType value);

  /// @brief Method get_updateType addr 0x2d19b70 size 0x8 virtual false final false
  inline ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType get_updateType();

  /// @brief Method set_updateType addr 0x2d19b78 size 0x8 virtual false final false
  inline void set_updateType(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType value);

  /// @brief Method get_UseRelativeTransform addr 0x2d19b80 size 0x8 virtual false final false
  inline bool get_UseRelativeTransform();

  /// @brief Method set_UseRelativeTransform addr 0x2d19b88 size 0xc virtual false final false
  inline void set_UseRelativeTransform(bool value);

  /// @brief Method get_originPose addr 0x2d19b94 size 0x14 virtual false final false
  inline ::UnityEngine::Pose get_originPose();

  /// @brief Method set_originPose addr 0x2d19ba8 size 0x1c virtual false final false
  inline void set_originPose(::UnityEngine::Pose value);

  /// @brief Method CacheLocalPosition addr 0x2d19bc4 size 0x50 virtual false final false
  inline void CacheLocalPosition();

  /// @brief Method ResetToCachedLocalPosition addr 0x2d19c14 size 0x20 virtual false final false
  inline void ResetToCachedLocalPosition();

  /// @brief Method Awake addr 0x2d19c34 size 0x4 virtual true final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2d19c38 size 0x4 virtual true final false
  inline void OnDestroy();

  /// @brief Method OnEnable addr 0x2d19c3c size 0x74 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2d19cb0 size 0x7c virtual true final false
  inline void OnDisable();

  /// @brief Method FixedUpdate addr 0x2d19d2c size 0x1c virtual true final false
  inline void FixedUpdate();

  /// @brief Method Update addr 0x2d19d48 size 0x1c virtual true final false
  inline void Update();

  /// @brief Method OnBeforeRender addr 0x2d19d64 size 0x20 virtual true final false
  inline void OnBeforeRender();

  /// @brief Method SetLocalTransform addr 0x2d19d84 size 0xe4 virtual true final false
  inline void SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation, ::UnityEngine::SpatialTracking::PoseDataFlags poseFlags);

  /// @brief Method TransformPoseByOriginIfNeeded addr 0x2d19e68 size 0x64 virtual false final false
  inline ::UnityEngine::Pose TransformPoseByOriginIfNeeded(::UnityEngine::Pose pose);

  /// @brief Method HasStereoCamera addr 0x2d19ecc size 0xb8 virtual false final false
  inline bool HasStereoCamera();

  /// @brief Method PerformUpdate addr 0x2d19f84 size 0xc4 virtual true final false
  inline void PerformUpdate();

  static inline ::UnityEngine::SpatialTracking::TrackedPoseDriver* New_ctor();

  /// @brief Method .ctor addr 0x2d1a048 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedPoseDriver(TrackedPoseDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedPoseDriver(TrackedPoseDriver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedPoseDriver();

public:
  /// @brief Field m_Device, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType ___m_Device;

  /// @brief Field m_PoseSource, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose ___m_PoseSource;

  /// @brief Field m_PoseProviderComponent, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* ___m_PoseProviderComponent;

  /// @brief Field m_TrackingType, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType ___m_TrackingType;

  /// @brief Field m_UpdateType, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType ___m_UpdateType;

  /// @brief Field m_UseRelativeTransform, offset: 0x30, size: 0x1, def value: None
  bool ___m_UseRelativeTransform;

  /// @brief Field m_OriginPose, offset: 0x34, size: 0x1c, def value: None
  ::UnityEngine::Pose ___m_OriginPose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpatialTracking::TrackedPoseDriver, 0x50>, "Size mismatch!");

} // namespace UnityEngine::SpatialTracking
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriver__DeviceType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/DeviceType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackedPose, "UnityEngine.SpatialTracking", "TrackedPoseDriver/TrackedPose");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriver__TrackingType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/TrackingType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::__TrackedPoseDriver__UpdateType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/UpdateType");
NEED_NO_BOX(::UnityEngine::SpatialTracking::TrackedPoseDriver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriver*, "UnityEngine.SpatialTracking", "TrackedPoseDriver");
