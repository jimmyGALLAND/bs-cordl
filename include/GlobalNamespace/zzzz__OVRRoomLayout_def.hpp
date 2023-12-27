#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRRoomLayout)
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRRoomLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRRoomLayout);
// Type: ::OVRRoomLayout
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7519))
// CS Name: ::OVRRoomLayout
struct CORDL_TYPE OVRRoomLayout {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRRoomLayout Null;

  __declspec(property(get = IOVRAnchorComponent_OVRRoomLayout__get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRRoomLayout__Type;

  __declspec(property(get = IOVRAnchorComponent_OVRRoomLayout__get_Handle)) uint64_t IOVRAnchorComponent_OVRRoomLayout__Handle;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>*();

  static inline void setStaticF_Null(::GlobalNamespace::OVRRoomLayout value);

  static inline ::GlobalNamespace::OVRRoomLayout getStaticF_Null();

  /// @brief Method IOVRAnchorComponent<OVRRoomLayout>.get_Type addr 0x271439c size 0x8 virtual true final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRRoomLayout__get_Type();

  /// @brief Method IOVRAnchorComponent<OVRRoomLayout>.get_Handle addr 0x27143ac size 0x8 virtual true final true
  inline uint64_t IOVRAnchorComponent_OVRRoomLayout__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRRoomLayout>.FromAnchor addr 0x27143b4 size 0x8 virtual true final true
  inline ::GlobalNamespace::OVRRoomLayout IOVRAnchorComponent_OVRRoomLayout__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method get_IsNull addr 0x27143c8 size 0x10 virtual true final true
  inline bool get_IsNull();

  /// @brief Method get_IsEnabled addr 0x27143d8 size 0xa8 virtual true final true
  inline bool get_IsEnabled();

  /// @brief Method IOVRAnchorComponent<OVRRoomLayout>.SetEnabledAsync addr 0x2714480 size 0x50 virtual true final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRRoomLayout__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method Equals addr 0x27144d0 size 0x10 virtual true final true
  inline bool Equals(::GlobalNamespace::OVRRoomLayout other);

  /// @brief Method op_Equality addr 0x27144e0 size 0xc virtual false final false
  static inline bool op_Equality(::GlobalNamespace::OVRRoomLayout lhs, ::GlobalNamespace::OVRRoomLayout rhs);

  /// @brief Method op_Inequality addr 0x27144ec size 0xc virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::OVRRoomLayout lhs, ::GlobalNamespace::OVRRoomLayout rhs);

  /// @brief Method Equals addr 0x27144f8 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2714570 size 0x4c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x27145bc size 0x84 virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_Type addr 0x27143a4 size 0x8 virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Method get_Handle addr 0x2714640 size 0x8 virtual false final false
  inline uint64_t get_Handle();

  /// @brief Method .ctor addr 0x27143bc size 0xc virtual false final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method FetchLayoutAnchorsAsync addr 0x2714648 size 0x2fc virtual false final false
  inline ::GlobalNamespace::OVRTask_1<bool> FetchLayoutAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  /// @brief Method TryGetRoomLayout addr 0x2714944 size 0x100 virtual false final false
  inline bool TryGetRoomLayout(ByRef<::System::Guid> ceiling, ByRef<::System::Guid> floor, ByRef<::ArrayW<::System::Guid, ::Array<::System::Guid>*>> walls);

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRRoomLayout(uint64_t _Handle_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRoomLayout();

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRoomLayout, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRoomLayout, "", "OVRRoomLayout");
