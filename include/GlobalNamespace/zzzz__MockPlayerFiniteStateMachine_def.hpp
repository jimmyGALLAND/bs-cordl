#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerFiniteStateMachine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MockPlayerFiniteStateMachine)
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockPlayerGamePoseGenerator;
}
namespace GlobalNamespace {
class MockPlayerLobbyPoseGenerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerFiniteStateMachine);
// Type: ::MockPlayerFiniteStateMachine
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockPlayerFiniteStateMachine*
class CORDL_TYPE MockPlayerFiniteStateMachine : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_gamePoseGenerator)) ::GlobalNamespace::MockPlayerGamePoseGenerator*  gamePoseGenerator;

 __declspec(property(get=get_inactiveByDefault, put=set_inactiveByDefault)) bool  inactiveByDefault;

 __declspec(property(get=get_leftHanded, put=set_leftHanded)) bool  leftHanded;

 __declspec(property(get=get_obstaclesColor, put=set_obstaclesColor)) ::UnityEngine::Color  obstaclesColor;

 __declspec(property(get=get_saberAColor, put=set_saberAColor)) ::UnityEngine::Color  saberAColor;

 __declspec(property(get=get_saberBColor, put=set_saberBColor)) ::UnityEngine::Color  saberBColor;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x3b99e74, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::GlobalNamespace::MockPlayerFiniteStateMachine* New_ctor(::BGNet::Core::ITaskUtility*  taskUtility, ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager*  gameplayRpcManager, ::GlobalNamespace::IMenuRpcManager*  menuRpcManager, ::GlobalNamespace::IMockBeatmapDataProvider*  beatmapDataProvider, ::GlobalNamespace::MockPlayerLobbyPoseGenerator*  lobbyPoseGenerator, ::GlobalNamespace::MockPlayerGamePoseGenerator*  gamePoseGenerator) ;

/// @brief Method RecommendBeatmap, addr 0x3b99e7c, size 0x4, virtual false, abstract: false, final false
inline void RecommendBeatmap(::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::StringW  beatmapLevelId) ;

/// @brief Method SetIsReady, addr 0x3b99e78, size 0x4, virtual false, abstract: false, final false
inline void SetIsReady(bool  isReady) ;

/// @brief Method Tick, addr 0x3b99e70, size 0x4, virtual false, abstract: false, final false
inline void Tick() ;

/// @brief Method .ctor, addr 0x3b99e00, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::BGNet::Core::ITaskUtility*  taskUtility, ::GlobalNamespace::IMultiplayerSessionManager*  multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager*  gameplayRpcManager, ::GlobalNamespace::IMenuRpcManager*  menuRpcManager, ::GlobalNamespace::IMockBeatmapDataProvider*  beatmapDataProvider, ::GlobalNamespace::MockPlayerLobbyPoseGenerator*  lobbyPoseGenerator, ::GlobalNamespace::MockPlayerGamePoseGenerator*  gamePoseGenerator) ;

/// @brief Method get_gamePoseGenerator, addr 0x3b99e68, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MockPlayerGamePoseGenerator* get_gamePoseGenerator() ;

/// @brief Method get_inactiveByDefault, addr 0x3b99e5c, size 0x8, virtual false, abstract: false, final false
inline bool get_inactiveByDefault() ;

/// @brief Method get_leftHanded, addr 0x3b99e50, size 0x8, virtual false, abstract: false, final false
inline bool get_leftHanded() ;

/// @brief Method get_obstaclesColor, addr 0x3b99e38, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_obstaclesColor() ;

/// @brief Method get_saberAColor, addr 0x3b99e08, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_saberAColor() ;

/// @brief Method get_saberBColor, addr 0x3b99e20, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_saberBColor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_inactiveByDefault, addr 0x3b99e64, size 0x4, virtual false, abstract: false, final false
inline void set_inactiveByDefault(bool  value) ;

/// @brief Method set_leftHanded, addr 0x3b99e58, size 0x4, virtual false, abstract: false, final false
inline void set_leftHanded(bool  value) ;

/// @brief Method set_obstaclesColor, addr 0x3b99e4c, size 0x4, virtual false, abstract: false, final false
inline void set_obstaclesColor(::UnityEngine::Color  value) ;

/// @brief Method set_saberAColor, addr 0x3b99e1c, size 0x4, virtual false, abstract: false, final false
inline void set_saberAColor(::UnityEngine::Color  value) ;

/// @brief Method set_saberBColor, addr 0x3b99e34, size 0x4, virtual false, abstract: false, final false
inline void set_saberBColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockPlayerFiniteStateMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerFiniteStateMachine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockPlayerFiniteStateMachine(MockPlayerFiniteStateMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerFiniteStateMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockPlayerFiniteStateMachine(MockPlayerFiniteStateMachine const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerFiniteStateMachine, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerFiniteStateMachine*, "", "MockPlayerFiniteStateMachine");
