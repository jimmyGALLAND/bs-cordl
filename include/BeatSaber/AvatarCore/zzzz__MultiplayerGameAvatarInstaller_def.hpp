#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/MultiplayerGameAvatarInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerGameAvatarInstaller)
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class MultiplayerGameAvatarInstaller;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller);
// Type: BeatSaber.AvatarCore::MultiplayerGameAvatarInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::MultiplayerGameAvatarInstaller*
class CORDL_TYPE MultiplayerGameAvatarInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief Field _connectedPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectedPlayer, put=__cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

/// @brief Method InstallBindings, addr 0x220e894, size 0x234, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller* New_ctor() ;

constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__connectedPlayer() const;

constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

/// @brief Method .ctor, addr 0x220eac8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplayerGameAvatarInstaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerGameAvatarInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerGameAvatarInstaller(MultiplayerGameAvatarInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerGameAvatarInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerGameAvatarInstaller(MultiplayerGameAvatarInstaller const& ) = delete;

/// @brief Field _connectedPlayer, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::IConnectedPlayer*  ____connectedPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller, ____connectedPlayer) == 0x28, "Offset mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*, "BeatSaber.AvatarCore", "MultiplayerGameAvatarInstaller");
