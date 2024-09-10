#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyGameStateModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LobbyGameStateModel)
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyGameStateModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyGameStateModel);
// Type: ::LobbyGameStateModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LobbyGameStateModel*
class CORDL_TYPE LobbyGameStateModel : public ::System::Object {
public:
// Declarations
/// @brief Field _gameState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__gameState, put=__cordl_internal_set__gameState)) ::GlobalNamespace::MultiplayerGameState  _gameState;

 __declspec(property(get=get_gameState)) ::GlobalNamespace::MultiplayerGameState  gameState;

/// @brief Field gameStateDidChangeAlwaysSentEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameStateDidChangeAlwaysSentEvent, put=__cordl_internal_set_gameStateDidChangeAlwaysSentEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  gameStateDidChangeAlwaysSentEvent;

/// @brief Field gameStateDidChangeEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameStateDidChangeEvent, put=__cordl_internal_set_gameStateDidChangeEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  gameStateDidChangeEvent;

static inline ::GlobalNamespace::LobbyGameStateModel* New_ctor() ;

/// @brief Method SetGameState, addr 0x268d788, size 0x8, virtual false, abstract: false, final false
inline void SetGameState(::GlobalNamespace::MultiplayerGameState  newGameState) ;

/// @brief Method SetGameState, addr 0x268d790, size 0x70, virtual false, abstract: false, final false
inline void SetGameState(::GlobalNamespace::MultiplayerGameState  newGameState, bool  sendNotification) ;

/// @brief Method SetGameStateWithoutNotification, addr 0x268d800, size 0x2c, virtual false, abstract: false, final false
inline void SetGameStateWithoutNotification(::GlobalNamespace::MultiplayerGameState  newGameState) ;

constexpr ::GlobalNamespace::MultiplayerGameState const& __cordl_internal_get__gameState() const;

constexpr ::GlobalNamespace::MultiplayerGameState& __cordl_internal_get__gameState() ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*& __cordl_internal_get_gameStateDidChangeAlwaysSentEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*> const& __cordl_internal_get_gameStateDidChangeAlwaysSentEvent() const;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*& __cordl_internal_get_gameStateDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*> const& __cordl_internal_get_gameStateDidChangeEvent() const;

constexpr void __cordl_internal_set__gameState(::GlobalNamespace::MultiplayerGameState  value) ;

constexpr void __cordl_internal_set_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

constexpr void __cordl_internal_set_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

/// @brief Method .ctor, addr 0x268d82c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_gameStateDidChangeAlwaysSentEvent, addr 0x268d628, size 0xb0, virtual false, abstract: false, final false
inline void add_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

/// @brief Method add_gameStateDidChangeEvent, addr 0x268d4c8, size 0xb0, virtual false, abstract: false, final false
inline void add_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

/// @brief Method get_gameState, addr 0x268d4c0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MultiplayerGameState get_gameState() ;

/// @brief Method remove_gameStateDidChangeAlwaysSentEvent, addr 0x268d6d8, size 0xb0, virtual false, abstract: false, final false
inline void remove_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

/// @brief Method remove_gameStateDidChangeEvent, addr 0x268d578, size 0xb0, virtual false, abstract: false, final false
inline void remove_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyGameStateModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyGameStateModel(LobbyGameStateModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyGameStateModel(LobbyGameStateModel const& ) = delete;

/// @brief Field gameStateDidChangeEvent, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  ___gameStateDidChangeEvent;

/// @brief Field gameStateDidChangeAlwaysSentEvent, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*  ___gameStateDidChangeAlwaysSentEvent;

/// @brief Field _gameState, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MultiplayerGameState  ____gameState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyGameStateModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateModel, ___gameStateDidChangeEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateModel, ___gameStateDidChangeAlwaysSentEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyGameStateModel, ____gameState) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyGameStateModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyGameStateModel*, "", "LobbyGameStateModel");
