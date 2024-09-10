#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerName)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerName;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::ConnectedPlayerName);
// Type: BeatSaber.AvatarCore::ConnectedPlayerName
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::ConnectedPlayerName*
class CORDL_TYPE ConnectedPlayerName : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _connectedPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectedPlayer, put=__cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

/// @brief Field _nameText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameText, put=__cordl_internal_set__nameText)) ::UnityW<::TMPro::TextMeshProUGUI>  _nameText;

static inline ::BeatSaber::AvatarCore::ConnectedPlayerName* New_ctor() ;

/// @brief Method Start, addr 0x220dbcc, size 0xc4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__connectedPlayer() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText() ;

constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x220dc90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectedPlayerName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectedPlayerName(ConnectedPlayerName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectedPlayerName(ConnectedPlayerName const& ) = delete;

/// @brief Field _nameText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____nameText;

/// @brief Field _connectedPlayer, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::IConnectedPlayer*  ____connectedPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::ConnectedPlayerName, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerName, ____nameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::ConnectedPlayerName, ____connectedPlayer) == 0x28, "Offset mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::ConnectedPlayerName);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::ConnectedPlayerName*, "BeatSaber.AvatarCore", "ConnectedPlayerName");
