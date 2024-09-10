#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLobbyInstaller)
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyInstaller);
// Type: ::MultiplayerLobbyInstaller
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLobbyInstaller*
class CORDL_TYPE MultiplayerLobbyInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief Field _multiplayerAvatarPlacePrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__multiplayerAvatarPlacePrefab, put=__cordl_internal_set__multiplayerAvatarPlacePrefab)) ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>  _multiplayerAvatarPlacePrefab;

/// @brief Field _multiplayerLobbyAvatarControllerPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__multiplayerLobbyAvatarControllerPrefab, put=__cordl_internal_set__multiplayerLobbyAvatarControllerPrefab)) ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>  _multiplayerLobbyAvatarControllerPrefab;

/// @brief Method InstallBindings, addr 0x3b60148, size 0xec, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MultiplayerLobbyInstaller* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace> const& __cordl_internal_get__multiplayerAvatarPlacePrefab() const;

constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>& __cordl_internal_get__multiplayerAvatarPlacePrefab() ;

constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController> const& __cordl_internal_get__multiplayerLobbyAvatarControllerPrefab() const;

constexpr ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>& __cordl_internal_get__multiplayerLobbyAvatarControllerPrefab() ;

constexpr void __cordl_internal_set__multiplayerAvatarPlacePrefab(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>  value) ;

constexpr void __cordl_internal_set__multiplayerLobbyAvatarControllerPrefab(::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>  value) ;

/// @brief Method .ctor, addr 0x3b60234, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplayerLobbyInstaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLobbyInstaller(MultiplayerLobbyInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLobbyInstaller(MultiplayerLobbyInstaller const& ) = delete;

/// @brief Field _multiplayerLobbyAvatarControllerPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarController>  ____multiplayerLobbyAvatarControllerPrefab;

/// @brief Field _multiplayerAvatarPlacePrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>  ____multiplayerAvatarPlacePrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyInstaller, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyInstaller, ____multiplayerLobbyAvatarControllerPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLobbyInstaller, ____multiplayerAvatarPlacePrefab) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyInstaller*, "", "MultiplayerLobbyInstaller");
