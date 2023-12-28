#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
struct __OVRDeserialize__SpaceQueryCompleteData;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct __OVRSpace__StorageLocation;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryInfo;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor);
// Type: ::OVRAnchor
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7510))
// CS Name: ::OVRAnchor
struct CORDL_TYPE OVRAnchor {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRAnchor Null;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = get_Uuid))::System::Guid Uuid;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  static inline void setStaticF_Null(::GlobalNamespace::OVRAnchor value);

  static inline ::GlobalNamespace::OVRAnchor getStaticF_Null();

  /// @brief Method GetQueryInfo addr 0x2710eb0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__SpaceQueryInfo GetQueryInfo(::GlobalNamespace::__OVRPlugin__SpaceComponentType type, ::GlobalNamespace::__OVRSpace__StorageLocation location,
                                                                            int32_t maxResults, double_t timeout);

  /// @brief Method GetQueryInfo addr 0x2710f2c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__SpaceQueryInfo GetQueryInfo(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                                                            ::GlobalNamespace::__OVRSpace__StorageLocation location, double_t timeout);

  /// @brief Method FetchAnchorsAsync addr 0x2710fa8 size 0xdc virtual false final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::GlobalNamespace::__OVRPlugin__SpaceComponentType type,
                                                                     ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::__OVRSpace__StorageLocation location, int32_t maxResults, double_t timeout);

  /// @brief Method FetchAnchorsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::__OVRSpace__StorageLocation location, int32_t maxResults, double_t timeout);

  /// @brief Method FetchAnchorsAsync addr 0x2711254 size 0x14c virtual false final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                                                     ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                     ::GlobalNamespace::__OVRSpace__StorageLocation location, double_t timeout);

  /// @brief Method FetchAnchors addr 0x2711084 size 0x1d0 virtual false final false
  static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                ::GlobalNamespace::__OVRPlugin__SpaceQueryInfo queryInfo);

  /// @brief Method OnSpaceQueryCompleteData addr 0x27113a0 size 0x314 virtual false final false
  static inline void OnSpaceQueryCompleteData(::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData data);

  /// @brief Method CreateSpatialAnchorAsync addr 0x27116c0 size 0x144 virtual false final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Pose trackingSpacePose);

  /// @brief Method CreateSpatialAnchorAsync addr 0x2711818 size 0x1a4 virtual false final false
  static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Transform* transform, ::UnityEngine::Camera* centerEyeCamera);

  /// @brief Method get_Handle addr 0x2711ae8 size 0x8 virtual false final false
  inline uint64_t get_Handle();

  /// @brief Method get_Uuid addr 0x2711af0 size 0xc virtual false final false
  inline ::System::Guid get_Uuid();

  /// @brief Method .ctor addr 0x27116b4 size 0xc virtual false final false
  inline void _ctor(uint64_t handle, ::System::Guid uuid);

  /// @brief Method GetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T GetComponent();

  /// @brief Method TryGetComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline bool TryGetComponent(ByRef<T> component);

  /// @brief Method SupportsComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline bool SupportsComponent();

  /// @brief Method Equals addr 0x2711afc size 0x68 virtual true final true
  inline bool Equals(::GlobalNamespace::OVRAnchor other);

  /// @brief Method Equals addr 0x2711b64 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method op_Equality addr 0x2711bf4 size 0x30 virtual false final false
  static inline bool op_Equality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs);

  /// @brief Method op_Inequality addr 0x2711c24 size 0x34 virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs);

  /// @brief Method GetHashCode addr 0x2711c58 size 0x54 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2711cac size 0x28 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Dispose addr 0x2711cd4 size 0x5c virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
  // def_value: None }]
  constexpr OVRAnchor(uint64_t _Handle_k__BackingField, ::System::Guid _Uuid_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchor();

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief Field <Uuid>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::System::Guid _Uuid_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor, "", "OVRAnchor");
