#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyDataModelsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LobbyDataModelsManager)
namespace GlobalNamespace {
class ILobbyGameStateControllerBase;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyDataModelsManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyDataModelsManager);
// Type: ::LobbyDataModelsManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LobbyDataModelsManager*
class CORDL_TYPE LobbyDataModelsManager : public ::System::Object {
public:
// Declarations
/// @brief Field _lobbyGameStateController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lobbyGameStateController, put=__cordl_internal_set__lobbyGameStateController)) ::GlobalNamespace::ILobbyGameStateControllerBase*  _lobbyGameStateController;

/// @brief Field _lobbyPlayerPermissionsModel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lobbyPlayerPermissionsModel, put=__cordl_internal_set__lobbyPlayerPermissionsModel)) ::GlobalNamespace::LobbyPlayerPermissionsModel*  _lobbyPlayerPermissionsModel;

/// @brief Field _lobbyPlayersDataModel, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__lobbyPlayersDataModel, put=__cordl_internal_set__lobbyPlayersDataModel)) ::GlobalNamespace::ILobbyPlayersDataModel*  _lobbyPlayersDataModel;

/// @brief Field _lobbyStateDataModel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__lobbyStateDataModel, put=__cordl_internal_set__lobbyStateDataModel)) ::GlobalNamespace::ILobbyStateDataModel*  _lobbyStateDataModel;

/// @brief Field _nodePoseSyncStateManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodePoseSyncStateManager, put=__cordl_internal_set__nodePoseSyncStateManager)) ::GlobalNamespace::INodePoseSyncStateManager*  _nodePoseSyncStateManager;

/// @brief Method Activate, addr 0x268cf1c, size 0x214, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Deactivate, addr 0x268d224, size 0x1a0, virtual false, abstract: false, final false
inline void Deactivate() ;

static inline ::GlobalNamespace::LobbyDataModelsManager* New_ctor() ;

constexpr ::GlobalNamespace::ILobbyGameStateControllerBase*& __cordl_internal_get__lobbyGameStateController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateControllerBase*> const& __cordl_internal_get__lobbyGameStateController() const;

constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __cordl_internal_get__lobbyPlayerPermissionsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& __cordl_internal_get__lobbyPlayerPermissionsModel() const;

constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& __cordl_internal_get__lobbyPlayersDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& __cordl_internal_get__lobbyPlayersDataModel() const;

constexpr ::GlobalNamespace::ILobbyStateDataModel*& __cordl_internal_get__lobbyStateDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __cordl_internal_get__lobbyStateDataModel() const;

constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __cordl_internal_get__nodePoseSyncStateManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __cordl_internal_get__nodePoseSyncStateManager() const;

constexpr void __cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateControllerBase*  value) ;

constexpr void __cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel*  value) ;

constexpr void __cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel*  value) ;

constexpr void __cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel*  value) ;

constexpr void __cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager*  value) ;

/// @brief Method .ctor, addr 0x268d4b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyDataModelsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyDataModelsManager(LobbyDataModelsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyDataModelsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyDataModelsManager(LobbyDataModelsManager const& ) = delete;

/// @brief Field _lobbyStateDataModel, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ILobbyStateDataModel*  ____lobbyStateDataModel;

/// @brief Field _lobbyPlayersDataModel, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ILobbyPlayersDataModel*  ____lobbyPlayersDataModel;

/// @brief Field _nodePoseSyncStateManager, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::INodePoseSyncStateManager*  ____nodePoseSyncStateManager;

/// @brief Field _lobbyPlayerPermissionsModel, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::LobbyPlayerPermissionsModel*  ____lobbyPlayerPermissionsModel;

/// @brief Field _lobbyGameStateController, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ILobbyGameStateControllerBase*  ____lobbyGameStateController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyDataModelsManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDataModelsManager, ____lobbyStateDataModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDataModelsManager, ____lobbyPlayersDataModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDataModelsManager, ____nodePoseSyncStateManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDataModelsManager, ____lobbyPlayerPermissionsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDataModelsManager, ____lobbyGameStateController) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyDataModelsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyDataModelsManager*, "", "LobbyDataModelsManager");
