#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBounded2D)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
struct Rect;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __OVRPlugin__Rectf;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace UnityEngine {
struct Vector2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRBounded2D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBounded2D);
// Type: ::OVRBounded2D
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7516))
// CS Name: ::OVRBounded2D
struct CORDL_TYPE OVRBounded2D {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRBounded2D Null;

  __declspec(property(get = IOVRAnchorComponent_OVRBounded2D__get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRBounded2D__Type;

  __declspec(property(get = IOVRAnchorComponent_OVRBounded2D__get_Handle)) uint64_t IOVRAnchorComponent_OVRBounded2D__Handle;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = get_BoundingBox))::UnityEngine::Rect BoundingBox;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>*();

  static inline void setStaticF_Null(::GlobalNamespace::OVRBounded2D value);

  static inline ::GlobalNamespace::OVRBounded2D getStaticF_Null();

  /// @brief Method IOVRAnchorComponent<OVRBounded2D>.get_Type addr 0x271368c size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRBounded2D__get_Type();

  /// @brief Method IOVRAnchorComponent<OVRBounded2D>.get_Handle addr 0x271369c size 0x8 virtual true final true
  inline uint64_t IOVRAnchorComponent_OVRBounded2D__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRBounded2D>.FromAnchor addr 0x27136a4 size 0x8 virtual true final true
  inline ::GlobalNamespace::OVRBounded2D IOVRAnchorComponent_OVRBounded2D__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method get_IsNull addr 0x27136b8 size 0x10 virtual true final true
  inline bool get_IsNull();

  /// @brief Method get_IsEnabled addr 0x27136c8 size 0xa8 virtual true final true
  inline bool get_IsEnabled();

  /// @brief Method IOVRAnchorComponent<OVRBounded2D>.SetEnabledAsync addr 0x2713770 size 0x50 virtual true final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRBounded2D__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method Equals addr 0x27137c0 size 0x10 virtual true final true
  inline bool Equals(::GlobalNamespace::OVRBounded2D other);

  /// @brief Method op_Equality addr 0x27137d0 size 0xc virtual false final false
  static inline bool op_Equality(::GlobalNamespace::OVRBounded2D lhs, ::GlobalNamespace::OVRBounded2D rhs);

  /// @brief Method op_Inequality addr 0x27137dc size 0xc virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::OVRBounded2D lhs, ::GlobalNamespace::OVRBounded2D rhs);

  /// @brief Method Equals addr 0x27137e8 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2713860 size 0x4c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x27138ac size 0x84 virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_Type addr 0x2713694 size 0x8 virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Method get_Handle addr 0x2713930 size 0x8 virtual false final false
  inline uint64_t get_Handle();

  /// @brief Method .ctor addr 0x27136ac size 0xc virtual false final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method get_BoundingBox addr 0x2713938 size 0xcc virtual false final false
  inline ::UnityEngine::Rect get_BoundingBox();

  /// @brief Method ConvertRect addr 0x2713a04 size 0x34 virtual false final false
  inline ::UnityEngine::Rect ConvertRect(::GlobalNamespace::__OVRPlugin__Rectf openXrRect);

  /// @brief Method TryGetBoundaryPointsCount addr 0x2713a44 size 0x6c virtual false final false
  inline bool TryGetBoundaryPointsCount(ByRef<int32_t> count);

  /// @brief Method TryGetBoundaryPoints addr 0x2713ab0 size 0x170 virtual false final false
  inline bool TryGetBoundaryPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> positions);

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRBounded2D(uint64_t _Handle_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBounded2D();

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBounded2D, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBounded2D, "", "OVRBounded2D");
