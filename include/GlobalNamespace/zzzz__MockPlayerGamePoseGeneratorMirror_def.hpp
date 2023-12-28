#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerGamePoseGeneratorMirror)
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataPacket;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGeneratorMirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror);
// Type: ::MockPlayerGamePoseGeneratorMirror
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15515))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5181))
// CS Name: ::MockPlayerGamePoseGeneratorMirror*
class CORDL_TYPE MockPlayerGamePoseGeneratorMirror : public ::GlobalNamespace::MockPlayerGamePoseGenerator {
public:
  // Declarations
  /// @brief Field _nodePoseSyncStateManager, offset 0x38, size 0x8
  __declspec(property(get = __get__nodePoseSyncStateManager, put = __set__nodePoseSyncStateManager))::GlobalNamespace::NodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _mirroredPlayer, offset 0x40, size 0x8
  __declspec(property(get = __get__mirroredPlayer, put = __set__mirroredPlayer))::GlobalNamespace::IConnectedPlayer* _mirroredPlayer;

  /// @brief Field _onSongFinished, offset 0x48, size 0x8
  __declspec(property(get = __get__onSongFinished, put = __set__onSongFinished))::System::Action* _onSongFinished;

  constexpr ::GlobalNamespace::NodePoseSyncStateManager*& __get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NodePoseSyncStateManager*> const& __get__nodePoseSyncStateManager() const;

  constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::NodePoseSyncStateManager* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__mirroredPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__mirroredPlayer() const;

  constexpr void __set__mirroredPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::System::Action*& __get__onSongFinished();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__onSongFinished() const;

  constexpr void __set__onSongFinished(::System::Action* value);

  static inline ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                               ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded,
                                                                               ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method .ctor addr 0x2241c34 size 0x6c8 virtual false final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded,
                    ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager);

  /// @brief Method Dispose addr 0x22422fc size 0x4f0 virtual true final false
  inline void Dispose();

  /// @brief Method Init addr 0x22427ec size 0x8 virtual true final false
  inline void Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::Action* onSongFinished);

  /// @brief Method Tick addr 0x22427f4 size 0x168 virtual true final false
  inline void Tick();

  /// @brief Method FindPlayerToMirror addr 0x224295c size 0x3a4 virtual false final false
  inline void FindPlayerToMirror();

  /// @brief Method HandleNoteWasSpawned addr 0x2242d00 size 0x184 virtual false final false
  inline void HandleNoteWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable);

  /// @brief Method HandleObstacleWasSpawned addr 0x2242e84 size 0x184 virtual false final false
  inline void HandleObstacleWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable);

  /// @brief Method HandleSliderWasSpawned addr 0x2243008 size 0x184 virtual false final false
  inline void HandleSliderWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable);

  /// @brief Method HandleNoteWasMissed addr 0x224318c size 0x184 virtual false final false
  inline void HandleNoteWasMissed(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo);

  /// @brief Method HandleNoteWasCut addr 0x2243310 size 0x184 virtual false final false
  inline void HandleNoteWasCut(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method HandleScoreSyncStateUpdate addr 0x2243494 size 0x1d8 virtual false final false
  inline void HandleScoreSyncStateUpdate(::GlobalNamespace::StandardScoreSyncStateNetSerializable* nodePose, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleOptionalAvatarDataReceived addr 0x224366c size 0x1d8 virtual false final false
  inline void HandleOptionalAvatarDataReceived(::BeatSaber::AvatarCore::OptionalAvatarDataPacket* optionalAvatarDataPacket, ::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleLevelFinished addr 0x2243844 size 0x174 virtual false final false
  inline void HandleLevelFinished(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorMirror", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerGamePoseGeneratorMirror(MockPlayerGamePoseGeneratorMirror&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorMirror", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerGamePoseGeneratorMirror(MockPlayerGamePoseGeneratorMirror const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerGamePoseGeneratorMirror();

public:
  /// @brief Field _nodePoseSyncStateManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::NodePoseSyncStateManager* ____nodePoseSyncStateManager;

  /// @brief Field _mirroredPlayer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____mirroredPlayer;

  /// @brief Field _onSongFinished, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ____onSongFinished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*, "", "MockPlayerGamePoseGeneratorMirror");
