#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NodePoseSyncState)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class IStateTable_3;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
template <typename T> class IEquatableByReference_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct __NodePoseSyncState__NodePose;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NodePoseSyncState__NodePose;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NodePoseSyncState__NodePose);
MARK_VAL_T(::GlobalNamespace::NodePoseSyncState);
// Type: ::NodePose
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12972))
// CS Name: ::NodePoseSyncState::NodePose
struct CORDL_TYPE __NodePoseSyncState__NodePose {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NodePoseSyncState__NodePose_Unwrapped
  enum struct ____NodePoseSyncState__NodePose_Unwrapped : int32_t {
    __E_Head = static_cast<int32_t>(0x0),
    __E_LeftController = static_cast<int32_t>(0x1),
    __E_RightController = static_cast<int32_t>(0x2),
    __E_Count = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NodePoseSyncState__NodePose_Unwrapped() const noexcept {
    return static_cast<____NodePoseSyncState__NodePose_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NodePoseSyncState__NodePose(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NodePoseSyncState__NodePose();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Head value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NodePoseSyncState__NodePose const Head;

  /// @brief Field LeftController value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NodePoseSyncState__NodePose const LeftController;

  /// @brief Field RightController value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NodePoseSyncState__NodePose const RightController;

  /// @brief Field Count value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__NodePoseSyncState__NodePose const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NodePoseSyncState__NodePose, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NodePoseSyncState
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15042))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12973))
// CS Name: ::NodePoseSyncState
struct CORDL_TYPE NodePoseSyncState {
public:
  // Declarations
  using NodePose = ::GlobalNamespace::__NodePoseSyncState__NodePose;

  /// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable>"
  constexpr operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose, ::GlobalNamespace::PoseSerializable>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>"
  constexpr operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*();

  /// @brief Method Serialize addr 0xe596e4 size 0x40 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe59724 size 0x40 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method SetState addr 0xe59764 size 0x50 virtual true final true
  inline void SetState(::GlobalNamespace::__NodePoseSyncState__NodePose nodePose, ::GlobalNamespace::PoseSerializable pose);

  /// @brief Method GetState addr 0xe597b4 size 0x4c virtual true final true
  inline ::GlobalNamespace::PoseSerializable GetState(::GlobalNamespace::__NodePoseSyncState__NodePose nodePose);

  /// @brief Method Equals addr 0xe59800 size 0x94 virtual false final false
  inline bool Equals(ByRef<::GlobalNamespace::NodePoseSyncState> other);

  /// @brief Method GetDelta addr 0xe59894 size 0x128 virtual false final false
  inline ::GlobalNamespace::NodePoseSyncState GetDelta(ByRef<::GlobalNamespace::NodePoseSyncState> latest);

  /// @brief Method ApplyDelta addr 0xe599bc size 0x128 virtual false final false
  inline ::GlobalNamespace::NodePoseSyncState ApplyDelta(ByRef<::GlobalNamespace::NodePoseSyncState> delta);

  /// @brief Method GetSize addr 0xe59ae4 size 0x48 virtual true final true
  inline int32_t GetSize();

  /// @brief Method IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta addr 0xe59b2c size 0x30 virtual true final true
  inline ::GlobalNamespace::NodePoseSyncState IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__GetDelta(ByRef<::GlobalNamespace::NodePoseSyncState> stateTable);

  /// @brief Method IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta addr 0xe59b5c size 0x30 virtual true final true
  inline ::GlobalNamespace::NodePoseSyncState IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__ApplyDelta(ByRef<::GlobalNamespace::NodePoseSyncState> delta);

  /// @brief Method IEquatableByReference<NodePoseSyncState>.Equals addr 0xe59b8c size 0x4 virtual true final true
  inline bool IEquatableByReference_NodePoseSyncState__Equals(ByRef<::GlobalNamespace::NodePoseSyncState> other);

  // Ctor Parameters [CppParam { name: "_head", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }, CppParam { name: "_leftController", ty:
  // "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }, CppParam { name: "_rightController", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }]
  constexpr NodePoseSyncState(::GlobalNamespace::PoseSerializable _head, ::GlobalNamespace::PoseSerializable _leftController, ::GlobalNamespace::PoseSerializable _rightController) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NodePoseSyncState();

  /// @brief Field _head, offset: 0x0, size: 0x18, def value: None
  ::GlobalNamespace::PoseSerializable _head;

  /// @brief Field _leftController, offset: 0x18, size: 0x18, def value: None
  ::GlobalNamespace::PoseSerializable _leftController;

  /// @brief Field _rightController, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::PoseSerializable _rightController;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodePoseSyncState, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NodePoseSyncState__NodePose, "", "NodePoseSyncState/NodePose");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodePoseSyncState, "", "NodePoseSyncState");
