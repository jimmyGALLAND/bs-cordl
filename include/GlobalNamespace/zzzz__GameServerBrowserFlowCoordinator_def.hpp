#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerBrowserFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
CORDL_MODULE_EXPORT(GameServerBrowserFlowCoordinator)
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerBrowserFlowCoordinator);
// Type: ::GameServerBrowserFlowCoordinator
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameServerBrowserFlowCoordinator*
class CORDL_TYPE GameServerBrowserFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
/// @brief Method DidActivate, addr 0x3ab8478, size 0x4, virtual true, abstract: false, final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::GameServerBrowserFlowCoordinator* New_ctor() ;

/// @brief Method .ctor, addr 0x3ab847c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameServerBrowserFlowCoordinator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserFlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServerBrowserFlowCoordinator(GameServerBrowserFlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserFlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServerBrowserFlowCoordinator(GameServerBrowserFlowCoordinator const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerBrowserFlowCoordinator, 0xb0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerBrowserFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerBrowserFlowCoordinator*, "", "GameServerBrowserFlowCoordinator");
