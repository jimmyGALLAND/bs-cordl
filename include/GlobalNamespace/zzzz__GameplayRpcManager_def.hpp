#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayRpcManager)
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
struct __GameplayRpcManager__RpcType;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace GlobalNamespace {
class __GameplayRpcManager__ObstacleSpawnedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteSpawnedRpc;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SliderSpawnedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteMissedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__LevelFinishedRpc;
}
namespace GlobalNamespace {
template <typename TType> class RpcHandler_1;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__RequestReturnToMenuRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__GetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class __GameplayRpcManager__ReturnToMenuRpc;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace GlobalNamespace {
class __GameplayRpcManager__GetGameplaySceneReadyRpc;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetPlayerDidConnectLateRpc;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetSongStartTimeRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteCutRpc;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GameplayRpcManager__RpcType;
}
namespace GlobalNamespace {
class GameplayRpcManager;
}
namespace GlobalNamespace {
class __GameplayRpcManager__GetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__GetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__LevelFinishedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteCutRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteMissedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__NoteSpawnedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__ObstacleSpawnedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__RequestReturnToMenuRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__ReturnToMenuRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetPlayerDidConnectLateRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SetSongStartTimeRpc;
}
namespace GlobalNamespace {
class __GameplayRpcManager__SliderSpawnedRpc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GameplayRpcManager__RpcType);
MARK_REF_PTR_T(::GlobalNamespace::GameplayRpcManager);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__NoteCutRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc);
// Type: ::RpcType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12741))
// CS Name: ::GameplayRpcManager::RpcType
struct CORDL_TYPE __GameplayRpcManager__RpcType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____GameplayRpcManager__RpcType_Unwrapped
  enum struct ____GameplayRpcManager__RpcType_Unwrapped : uint8_t {
    __E_SetGameplaySceneSyncFinish = static_cast<uint8_t>(0x0u),
    __E_SetGameplaySceneReady = static_cast<uint8_t>(0x1u),
    __E_GetGameplaySceneReady = static_cast<uint8_t>(0x2u),
    __E_SetActivePlayerFailedToConnect = static_cast<uint8_t>(0x3u),
    __E_SetGameplaySongReady = static_cast<uint8_t>(0x4u),
    __E_GetGameplaySongReady = static_cast<uint8_t>(0x5u),
    __E_SetSongStartTime = static_cast<uint8_t>(0x6u),
    __E_NoteCut = static_cast<uint8_t>(0x7u),
    __E_NoteMissed = static_cast<uint8_t>(0x8u),
    __E_LevelFinished = static_cast<uint8_t>(0x9u),
    __E_ReturnToMenu = static_cast<uint8_t>(0xau),
    __E_RequestReturnToMenu = static_cast<uint8_t>(0xbu),
    __E_NoteSpawned = static_cast<uint8_t>(0xcu),
    __E_ObstacleSpawned = static_cast<uint8_t>(0xdu),
    __E_SliderSpawned = static_cast<uint8_t>(0xeu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GameplayRpcManager__RpcType_Unwrapped() const noexcept {
    return static_cast<____GameplayRpcManager__RpcType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __GameplayRpcManager__RpcType(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__RpcType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field SetGameplaySceneSyncFinish value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetGameplaySceneSyncFinish;

  /// @brief Field SetGameplaySceneReady value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetGameplaySceneReady;

  /// @brief Field GetGameplaySceneReady value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const GetGameplaySceneReady;

  /// @brief Field SetActivePlayerFailedToConnect value: static_cast<uint8_t>(0x3u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetActivePlayerFailedToConnect;

  /// @brief Field SetGameplaySongReady value: static_cast<uint8_t>(0x4u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetGameplaySongReady;

  /// @brief Field GetGameplaySongReady value: static_cast<uint8_t>(0x5u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const GetGameplaySongReady;

  /// @brief Field SetSongStartTime value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SetSongStartTime;

  /// @brief Field NoteCut value: static_cast<uint8_t>(0x7u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const NoteCut;

  /// @brief Field NoteMissed value: static_cast<uint8_t>(0x8u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const NoteMissed;

  /// @brief Field LevelFinished value: static_cast<uint8_t>(0x9u)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const LevelFinished;

  /// @brief Field ReturnToMenu value: static_cast<uint8_t>(0xau)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const ReturnToMenu;

  /// @brief Field RequestReturnToMenu value: static_cast<uint8_t>(0xbu)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const RequestReturnToMenu;

  /// @brief Field NoteSpawned value: static_cast<uint8_t>(0xcu)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const NoteSpawned;

  /// @brief Field ObstacleSpawned value: static_cast<uint8_t>(0xdu)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const ObstacleSpawned;

  /// @brief Field SliderSpawned value: static_cast<uint8_t>(0xeu)
  static ::GlobalNamespace::__GameplayRpcManager__RpcType const SliderSpawned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__RpcType, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetGameplaySceneSyncFinishedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12938)), TypeDefinitionIndex(TypeDefinitionIndex(12926)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst:
// 4918 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12742)) CS Name: ::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc*
class CORDL_TYPE __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b7f4 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetGameplaySceneSyncFinishedRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetGameplaySceneReadyRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12937), inst: 3813 }), TypeDefinitionIndex(TypeDefinitionIndex(12927)),
// TypeDefinitionIndex(TypeDefinitionIndex(12937))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12743)) CS Name: ::GameplayRpcManager::SetGameplaySceneReadyRpc*
class CORDL_TYPE __GameplayRpcManager__SetGameplaySceneReadyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b83c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetGameplaySceneReadyRpc(__GameplayRpcManager__SetGameplaySceneReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySceneReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetGameplaySceneReadyRpc(__GameplayRpcManager__SetGameplaySceneReadyRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetGameplaySceneReadyRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetGameplaySceneReadyRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12744))
// CS Name: ::GameplayRpcManager::GetGameplaySceneReadyRpc*
class CORDL_TYPE __GameplayRpcManager__GetGameplaySceneReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b884 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__GetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__GetGameplaySceneReadyRpc(__GameplayRpcManager__GetGameplaySceneReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__GetGameplaySceneReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__GetGameplaySceneReadyRpc(__GameplayRpcManager__GetGameplaySceneReadyRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__GetGameplaySceneReadyRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetPlayerDidConnectLateRpc
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12939)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12939), inst: 662 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12926))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12745)) CS Name: ::GameplayRpcManager::SetPlayerDidConnectLateRpc*
class CORDL_TYPE __GameplayRpcManager__SetPlayerDidConnectLateRpc
    : public ::GlobalNamespace::RemoteProcedureCall_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b88c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetPlayerDidConnectLateRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetPlayerDidConnectLateRpc(__GameplayRpcManager__SetPlayerDidConnectLateRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetPlayerDidConnectLateRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetPlayerDidConnectLateRpc(__GameplayRpcManager__SetPlayerDidConnectLateRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetPlayerDidConnectLateRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetGameplaySongReadyRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12746))
// CS Name: ::GameplayRpcManager::SetGameplaySongReadyRpc*
class CORDL_TYPE __GameplayRpcManager__SetGameplaySongReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b8d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetGameplaySongReadyRpc(__GameplayRpcManager__SetGameplaySongReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetGameplaySongReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetGameplaySongReadyRpc(__GameplayRpcManager__SetGameplaySongReadyRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetGameplaySongReadyRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetGameplaySongReadyRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12747))
// CS Name: ::GameplayRpcManager::GetGameplaySongReadyRpc*
class CORDL_TYPE __GameplayRpcManager__GetGameplaySongReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b8dc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__GetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__GetGameplaySongReadyRpc(__GameplayRpcManager__GetGameplaySongReadyRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__GetGameplaySongReadyRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__GetGameplaySongReadyRpc(__GameplayRpcManager__GetGameplaySongReadyRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__GetGameplaySongReadyRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SetSongStartTimeRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12937), inst: 333 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12748))
// CS Name: ::GameplayRpcManager::SetSongStartTimeRpc*
class CORDL_TYPE __GameplayRpcManager__SetSongStartTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<int64_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b8e4 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetSongStartTimeRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SetSongStartTimeRpc(__GameplayRpcManager__SetSongStartTimeRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SetSongStartTimeRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SetSongStartTimeRpc(__GameplayRpcManager__SetSongStartTimeRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SetSongStartTimeRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteSpawnedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12938)), TypeDefinitionIndex(TypeDefinitionIndex(15028)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst:
// 4921 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12749)) CS Name: ::GameplayRpcManager::NoteSpawnedRpc*
class CORDL_TYPE __GameplayRpcManager__NoteSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b92c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__NoteSpawnedRpc(__GameplayRpcManager__NoteSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__NoteSpawnedRpc(__GameplayRpcManager__NoteSpawnedRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__NoteSpawnedRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ObstacleSpawnedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15029)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst: 4922 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12938))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12750)) CS Name: ::GameplayRpcManager::ObstacleSpawnedRpc*
class CORDL_TYPE __GameplayRpcManager__ObstacleSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b974 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__ObstacleSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__ObstacleSpawnedRpc(__GameplayRpcManager__ObstacleSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__ObstacleSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__ObstacleSpawnedRpc(__GameplayRpcManager__ObstacleSpawnedRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__ObstacleSpawnedRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SliderSpawnedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12938)), TypeDefinitionIndex(TypeDefinitionIndex(15046)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst:
// 4923 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12751)) CS Name: ::GameplayRpcManager::SliderSpawnedRpc*
class CORDL_TYPE __GameplayRpcManager__SliderSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3b9bc size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SliderSpawnedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__SliderSpawnedRpc(__GameplayRpcManager__SliderSpawnedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__SliderSpawnedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__SliderSpawnedRpc(__GameplayRpcManager__SliderSpawnedRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__SliderSpawnedRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteCutRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst: 4919 }), TypeDefinitionIndex(TypeDefinitionIndex(12938)),
// TypeDefinitionIndex(TypeDefinitionIndex(15026))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12752)) CS Name: ::GameplayRpcManager::NoteCutRpc*
class CORDL_TYPE __GameplayRpcManager__NoteCutRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__NoteCutRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3ba04 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteCutRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__NoteCutRpc(__GameplayRpcManager__NoteCutRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteCutRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__NoteCutRpc(__GameplayRpcManager__NoteCutRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__NoteCutRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__NoteCutRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteMissedRpc
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12938)), TypeDefinitionIndex(TypeDefinitionIndex(15027)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst:
// 4920 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12753)) CS Name: ::GameplayRpcManager::NoteMissedRpc*
class CORDL_TYPE __GameplayRpcManager__NoteMissedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3ba4c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteMissedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__NoteMissedRpc(__GameplayRpcManager__NoteMissedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__NoteMissedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__NoteMissedRpc(__GameplayRpcManager__NoteMissedRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__NoteMissedRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelFinishedRpc
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12937), inst: 358 }),
// TypeDefinitionIndex(TypeDefinitionIndex(12878))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12754)) CS Name: ::GameplayRpcManager::LevelFinishedRpc*
class CORDL_TYPE __GameplayRpcManager__LevelFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerLevelCompletionResults*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3ba94 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__LevelFinishedRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__LevelFinishedRpc(__GameplayRpcManager__LevelFinishedRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__LevelFinishedRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__LevelFinishedRpc(__GameplayRpcManager__LevelFinishedRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__LevelFinishedRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ReturnToMenuRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12755))
// CS Name: ::GameplayRpcManager::ReturnToMenuRpc*
class CORDL_TYPE __GameplayRpcManager__ReturnToMenuRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3badc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__ReturnToMenuRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__ReturnToMenuRpc(__GameplayRpcManager__ReturnToMenuRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__ReturnToMenuRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__ReturnToMenuRpc(__GameplayRpcManager__ReturnToMenuRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__ReturnToMenuRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RequestReturnToMenuRpc
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12756))
// CS Name: ::GameplayRpcManager::RequestReturnToMenuRpc*
class CORDL_TYPE __GameplayRpcManager__RequestReturnToMenuRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
  // Declarations
  static inline ::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc* New_ctor();

  /// @brief Method .ctor addr 0xe3bae4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__RequestReturnToMenuRpc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayRpcManager__RequestReturnToMenuRpc(__GameplayRpcManager__RequestReturnToMenuRpc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayRpcManager__RequestReturnToMenuRpc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayRpcManager__RequestReturnToMenuRpc(__GameplayRpcManager__RequestReturnToMenuRpc const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayRpcManager__RequestReturnToMenuRpc();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayRpcManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12757))
// CS Name: ::GameplayRpcManager*
class CORDL_TYPE GameplayRpcManager : public ::System::Object {
public:
  // Declarations
  using RequestReturnToMenuRpc = ::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc;

  using ReturnToMenuRpc = ::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc;

  using LevelFinishedRpc = ::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc;

  using NoteMissedRpc = ::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc;

  using NoteCutRpc = ::GlobalNamespace::__GameplayRpcManager__NoteCutRpc;

  using SliderSpawnedRpc = ::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc;

  using ObstacleSpawnedRpc = ::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc;

  using NoteSpawnedRpc = ::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc;

  using SetSongStartTimeRpc = ::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc;

  using GetGameplaySongReadyRpc = ::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc;

  using SetGameplaySongReadyRpc = ::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc;

  using SetPlayerDidConnectLateRpc = ::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc;

  using GetGameplaySceneReadyRpc = ::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc;

  using SetGameplaySceneReadyRpc = ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc;

  using SetGameplaySceneSyncFinishedRpc = ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;

  using RpcType = ::GlobalNamespace::__GameplayRpcManager__RpcType;

  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset 0x18, size 0x8
  __declspec(property(get = __get__rpcHandler, put = __set__rpcHandler))::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>* _rpcHandler;

  /// @brief Field setGameplaySceneSyncFinishedEvent, offset 0x20, size 0x8
  __declspec(property(
      get = __get_setGameplaySceneSyncFinishedEvent,
      put = __set_setGameplaySceneSyncFinishedEvent))::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* setGameplaySceneSyncFinishedEvent;

  /// @brief Field setGameplaySceneReadyEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_setGameplaySceneReadyEvent,
                      put = __set_setGameplaySceneReadyEvent))::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* setGameplaySceneReadyEvent;

  /// @brief Field getGameplaySceneReadyEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_getGameplaySceneReadyEvent, put = __set_getGameplaySceneReadyEvent))::System::Action_1<::StringW>* getGameplaySceneReadyEvent;

  /// @brief Field setPlayerDidConnectLateEvent, offset 0x38, size 0x8
  __declspec(property(
      get = __get_setPlayerDidConnectLateEvent,
      put = __set_setPlayerDidConnectLateEvent))::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* setPlayerDidConnectLateEvent;

  /// @brief Field setGameplaySongReadyEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_setGameplaySongReadyEvent, put = __set_setGameplaySongReadyEvent))::System::Action_1<::StringW>* setGameplaySongReadyEvent;

  /// @brief Field getGameplaySongReadyEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_getGameplaySongReadyEvent, put = __set_getGameplaySongReadyEvent))::System::Action_1<::StringW>* getGameplaySongReadyEvent;

  /// @brief Field setSongStartTimeEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_setSongStartTimeEvent, put = __set_setSongStartTimeEvent))::System::Action_2<::StringW, int64_t>* setSongStartTimeEvent;

  /// @brief Field noteWasSpawnedEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_noteWasSpawnedEvent,
                      put = __set_noteWasSpawnedEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* noteWasSpawnedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_obstacleWasSpawnedEvent,
                      put = __set_obstacleWasSpawnedEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* obstacleWasSpawnedEvent;

  /// @brief Field sliderWasSpawnedEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_sliderWasSpawnedEvent,
                      put = __set_sliderWasSpawnedEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* sliderWasSpawnedEvent;

  /// @brief Field noteWasCutEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_noteWasCutEvent, put = __set_noteWasCutEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* noteWasCutEvent;

  /// @brief Field noteWasMissedEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_noteWasMissedEvent,
                      put = __set_noteWasMissedEvent))::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* noteWasMissedEvent;

  /// @brief Field levelFinishedEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_levelFinishedEvent, put = __set_levelFinishedEvent))::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* levelFinishedEvent;

  /// @brief Field returnToMenuEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_returnToMenuEvent, put = __set_returnToMenuEvent))::System::Action_1<::StringW>* returnToMenuEvent;

  /// @brief Field requestReturnToMenuEvent, offset 0x90, size 0x8
  __declspec(property(get = __get_requestReturnToMenuEvent, put = __set_requestReturnToMenuEvent))::System::Action_1<::StringW>* requestReturnToMenuEvent;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IGameplayRpcManager"
  constexpr operator ::GlobalNamespace::IGameplayRpcManager*() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>*& __get__rpcHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>*> const& __get__rpcHandler() const;

  constexpr void __set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>* value);

  constexpr ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*& __get_setGameplaySceneSyncFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*> const&
  __get_setGameplaySceneSyncFinishedEvent() const;

  constexpr void __set_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& __get_setGameplaySceneReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*> const& __get_setGameplaySceneReadyEvent() const;

  constexpr void __set_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  constexpr ::System::Action_1<::StringW>*& __get_getGameplaySceneReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_getGameplaySceneReadyEvent() const;

  constexpr void __set_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*& __get_setPlayerDidConnectLateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*> const&
  __get_setPlayerDidConnectLateEvent() const;

  constexpr void __set_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __get_setGameplaySongReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_setGameplaySongReadyEvent() const;

  constexpr void __set_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __get_getGameplaySongReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_getGameplaySongReadyEvent() const;

  constexpr void __set_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_2<::StringW, int64_t>*& __get_setSongStartTimeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, int64_t>*> const& __get_setSongStartTimeEvent() const;

  constexpr void __set_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*& __get_noteWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*> const& __get_noteWasSpawnedEvent() const;

  constexpr void __set_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*& __get_obstacleWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*> const& __get_obstacleWasSpawnedEvent() const;

  constexpr void __set_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*& __get_sliderWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*> const& __get_sliderWasSpawnedEvent() const;

  constexpr void __set_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*& __get_noteWasCutEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*> const& __get_noteWasCutEvent() const;

  constexpr void __set_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*& __get_noteWasMissedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*> const& __get_noteWasMissedEvent() const;

  constexpr void __set_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __get_levelFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __get_levelFinishedEvent() const;

  constexpr void __set_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr ::System::Action_1<::StringW>*& __get_returnToMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_returnToMenuEvent() const;

  constexpr void __set_returnToMenuEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action_1<::StringW>*& __get_requestReturnToMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_requestReturnToMenuEvent() const;

  constexpr void __set_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method get_enabled addr 0xe39304 size 0xc0 virtual true final true
  inline bool get_enabled();

  /// @brief Method set_enabled addr 0xe393c4 size 0xc8 virtual true final true
  inline void set_enabled(bool value);

  static inline ::GlobalNamespace::GameplayRpcManager* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method .ctor addr 0xe3948c size 0x750 virtual false final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method Dispose addr 0xe39bdc size 0x5c virtual true final true
  inline void Dispose();

  /// @brief Method add_setGameplaySceneSyncFinishedEvent addr 0xe39c38 size 0xb0 virtual true final true
  inline void add_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method remove_setGameplaySceneSyncFinishedEvent addr 0xe39ce8 size 0xb0 virtual true final true
  inline void remove_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method SetGameplaySceneSyncFinished addr 0xe39d98 size 0x68 virtual true final true
  inline void SetGameplaySceneSyncFinished(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::StringW sessionGameId);

  /// @brief Method InvokeSetGameplaySceneSyncFinishCallback addr 0xe39e00 size 0x1c virtual false final false
  inline void InvokeSetGameplaySceneSyncFinishCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionGameId);

  /// @brief Method add_setGameplaySceneReadyEvent addr 0xe39e1c size 0xb0 virtual true final true
  inline void add_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  /// @brief Method remove_setGameplaySceneReadyEvent addr 0xe39ecc size 0xb0 virtual true final true
  inline void remove_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  /// @brief Method SetGameplaySceneReady addr 0xe39f7c size 0x58 virtual true final true
  inline void SetGameplaySceneReady(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);

  /// @brief Method InvokeSetGameplaySceneReadyCallback addr 0xe39fd4 size 0x1c virtual false final false
  inline void InvokeSetGameplaySceneReadyCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable);

  /// @brief Method add_getGameplaySceneReadyEvent addr 0xe39ff0 size 0xb0 virtual true final true
  inline void add_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getGameplaySceneReadyEvent addr 0xe3a0a0 size 0xb0 virtual true final true
  inline void remove_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetGameplaySceneReady addr 0xe3a150 size 0x50 virtual true final true
  inline void GetGameplaySceneReady();

  /// @brief Method InvokeGetGameplaySceneReadyCallback addr 0xe3a1a0 size 0x1c virtual false final false
  inline void InvokeGetGameplaySceneReadyCallback(::StringW userId);

  /// @brief Method add_setPlayerDidConnectLateEvent addr 0xe3a1bc size 0xb0 virtual true final true
  inline void add_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method remove_setPlayerDidConnectLateEvent addr 0xe3a26c size 0xb0 virtual true final true
  inline void remove_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value);

  /// @brief Method SetPlayerDidConnectLate addr 0xe3a31c size 0x70 virtual true final true
  inline void SetPlayerDidConnectLate(::StringW usedId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable, ::StringW sessionGameId);

  /// @brief Method InvokeSetPlayerDidConnectLate addr 0xe3a38c size 0x1c virtual false final false
  inline void InvokeSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                            ::StringW sessionGameId);

  /// @brief Method add_setGameplaySongReadyEvent addr 0xe3a3a8 size 0xb0 virtual true final true
  inline void add_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_setGameplaySongReadyEvent addr 0xe3a458 size 0xb0 virtual true final true
  inline void remove_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method SetGameplaySongReady addr 0xe3a508 size 0x50 virtual true final true
  inline void SetGameplaySongReady();

  /// @brief Method InvokeSetGameplaySongReadyCallback addr 0xe3a558 size 0x1c virtual false final false
  inline void InvokeSetGameplaySongReadyCallback(::StringW userId);

  /// @brief Method add_getGameplaySongReadyEvent addr 0xe3a574 size 0xb0 virtual true final true
  inline void add_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_getGameplaySongReadyEvent addr 0xe3a624 size 0xb0 virtual true final true
  inline void remove_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value);

  /// @brief Method GetGameplaySongReady addr 0xe3a6d4 size 0x50 virtual true final true
  inline void GetGameplaySongReady();

  /// @brief Method InvokeGetGameplayLevelReadyCallback addr 0xe3a724 size 0x1c virtual false final false
  inline void InvokeGetGameplayLevelReadyCallback(::StringW userId);

  /// @brief Method add_setSongStartTimeEvent addr 0xe3a740 size 0xb0 virtual true final true
  inline void add_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method remove_setSongStartTimeEvent addr 0xe3a7f0 size 0xb0 virtual true final true
  inline void remove_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value);

  /// @brief Method SetSongStartTime addr 0xe3a8a0 size 0x58 virtual true final true
  inline void SetSongStartTime(int64_t startTime);

  /// @brief Method InvokeSetSongStartTimeCallback addr 0xe3a8f8 size 0x1c virtual false final false
  inline void InvokeSetSongStartTimeCallback(::StringW userId, int64_t startTime);

  /// @brief Method add_noteWasSpawnedEvent addr 0xe3a914 size 0xb0 virtual true final true
  inline void add_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasSpawnedEvent addr 0xe3a9c4 size 0xb0 virtual true final true
  inline void remove_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value);

  /// @brief Method NoteSpawned addr 0xe3aa74 size 0x68 virtual true final true
  inline void NoteSpawned(float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable);

  /// @brief Method InvokeNoteWasSpawnedCallback addr 0xe3aadc size 0x1c virtual false final false
  inline void InvokeNoteWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  /// @brief Method add_obstacleWasSpawnedEvent addr 0xe3aaf8 size 0xb0 virtual true final true
  inline void add_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_obstacleWasSpawnedEvent addr 0xe3aba8 size 0xb0 virtual true final true
  inline void remove_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value);

  /// @brief Method ObstacleSpawned addr 0xe3ac58 size 0x68 virtual true final true
  inline void ObstacleSpawned(float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable);

  /// @brief Method InvokeObstacleWasSpawnedCallback addr 0xe3acc0 size 0x1c virtual false final false
  inline void InvokeObstacleWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo);

  /// @brief Method add_sliderWasSpawnedEvent addr 0xe3acdc size 0xb0 virtual true final true
  inline void add_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method remove_sliderWasSpawnedEvent addr 0xe3ad8c size 0xb0 virtual true final true
  inline void remove_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value);

  /// @brief Method SliderSpawned addr 0xe3ae3c size 0x68 virtual true final true
  inline void SliderSpawned(float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable);

  /// @brief Method InvokeSliderWasSpawnedCallback addr 0xe3aea4 size 0x1c virtual false final false
  inline void InvokeSliderWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo);

  /// @brief Method add_noteWasCutEvent addr 0xe3aec0 size 0xb0 virtual true final true
  inline void add_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasCutEvent addr 0xe3af70 size 0xb0 virtual true final true
  inline void remove_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value);

  /// @brief Method NoteCut addr 0xe3b020 size 0x68 virtual true final true
  inline void NoteCut(float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable);

  /// @brief Method InvokeNoteWasCutCallback addr 0xe3b088 size 0x1c virtual false final false
  inline void InvokeNoteWasCutCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method add_noteWasMissedEvent addr 0xe3b0a4 size 0xb0 virtual true final true
  inline void add_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method remove_noteWasMissedEvent addr 0xe3b154 size 0xb0 virtual true final true
  inline void remove_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value);

  /// @brief Method NoteMissed addr 0xe3b204 size 0x68 virtual true final true
  inline void NoteMissed(float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable);

  /// @brief Method InvokeNoteWasMissedCallback addr 0xe3b26c size 0x1c virtual false final false
  inline void InvokeNoteWasMissedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);

  /// @brief Method add_levelFinishedEvent addr 0xe3b288 size 0xb0 virtual true final true
  inline void add_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_levelFinishedEvent addr 0xe3b338 size 0xb0 virtual true final true
  inline void remove_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method LevelFinished addr 0xe3b3e8 size 0x58 virtual true final true
  inline void LevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method InvokeLevelFinishedCallback addr 0xe3b440 size 0x1c virtual false final false
  inline void InvokeLevelFinishedCallback(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method add_returnToMenuEvent addr 0xe3b45c size 0xb0 virtual true final true
  inline void add_returnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_returnToMenuEvent addr 0xe3b50c size 0xb0 virtual true final true
  inline void remove_returnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method ReturnToMenu addr 0xe3b5bc size 0x50 virtual true final true
  inline void ReturnToMenu();

  /// @brief Method InvokeReturnToMenuCallback addr 0xe3b60c size 0x1c virtual false final false
  inline void InvokeReturnToMenuCallback(::StringW userId);

  /// @brief Method add_requestReturnToMenuEvent addr 0xe3b628 size 0xb0 virtual true final true
  inline void add_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_requestReturnToMenuEvent addr 0xe3b6d8 size 0xb0 virtual true final true
  inline void remove_requestReturnToMenuEvent(::System::Action_1<::StringW>* value);

  /// @brief Method RequestReturnToMenu addr 0xe3b788 size 0x50 virtual true final true
  inline void RequestReturnToMenu();

  /// @brief Method InvokeRequestReturnToMenuCallback addr 0xe3b7d8 size 0x1c virtual false final false
  inline void InvokeRequestReturnToMenuCallback(::StringW userId);

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayRpcManager(GameplayRpcManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayRpcManager(GameplayRpcManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayRpcManager();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _rpcHandler, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>* ____rpcHandler;

  /// @brief Field setGameplaySceneSyncFinishedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* ___setGameplaySceneSyncFinishedEvent;

  /// @brief Field setGameplaySceneReadyEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* ___setGameplaySceneReadyEvent;

  /// @brief Field getGameplaySceneReadyEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getGameplaySceneReadyEvent;

  /// @brief Field setPlayerDidConnectLateEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* ___setPlayerDidConnectLateEvent;

  /// @brief Field setGameplaySongReadyEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___setGameplaySongReadyEvent;

  /// @brief Field getGameplaySongReadyEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___getGameplaySongReadyEvent;

  /// @brief Field setSongStartTimeEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::StringW, int64_t>* ___setSongStartTimeEvent;

  /// @brief Field noteWasSpawnedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* ___noteWasSpawnedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* ___obstacleWasSpawnedEvent;

  /// @brief Field sliderWasSpawnedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* ___sliderWasSpawnedEvent;

  /// @brief Field noteWasCutEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* ___noteWasCutEvent;

  /// @brief Field noteWasMissedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* ___noteWasMissedEvent;

  /// @brief Field levelFinishedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___levelFinishedEvent;

  /// @brief Field returnToMenuEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___returnToMenuEvent;

  /// @brief Field requestReturnToMenuEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___requestReturnToMenuEvent;

  /// @brief Field kGameplayState offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameplayState{ u"in_gameplay" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayRpcManager, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__RpcType, "", "GameplayRpcManager/RpcType");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager*, "", "GameplayRpcManager");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc*, "", "GameplayRpcManager/GetGameplaySceneReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc*, "", "GameplayRpcManager/GetGameplaySongReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc*, "", "GameplayRpcManager/LevelFinishedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__NoteCutRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__NoteCutRpc*, "", "GameplayRpcManager/NoteCutRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc*, "", "GameplayRpcManager/NoteMissedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc*, "", "GameplayRpcManager/NoteSpawnedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc*, "", "GameplayRpcManager/ObstacleSpawnedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc*, "", "GameplayRpcManager/RequestReturnToMenuRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc*, "", "GameplayRpcManager/ReturnToMenuRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc*, "", "GameplayRpcManager/SetGameplaySceneReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc*, "", "GameplayRpcManager/SetGameplaySceneSyncFinishedRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc*, "", "GameplayRpcManager/SetGameplaySongReadyRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc*, "", "GameplayRpcManager/SetPlayerDidConnectLateRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc*, "", "GameplayRpcManager/SetSongStartTimeRpc");
NEED_NO_BOX(::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc*, "", "GameplayRpcManager/SliderSpawnedRpc");
