#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMultiplayerLevelEndActionsPublisher)
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher);
// Type: ::IMultiplayerLevelEndActionsPublisher
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IMultiplayerLevelEndActionsPublisher*
class CORDL_TYPE IMultiplayerLevelEndActionsPublisher {
public:
// Declarations
/// @brief Method add_playerDidFinishEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value) ;

/// @brief Method add_playerNetworkDidFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value) ;

/// @brief Method remove_playerDidFinishEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value) ;

/// @brief Method remove_playerNetworkDidFailedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IMultiplayerLevelEndActionsPublisher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IMultiplayerLevelEndActionsPublisher(IMultiplayerLevelEndActionsPublisher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IMultiplayerLevelEndActionsPublisher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMultiplayerLevelEndActionsPublisher(IMultiplayerLevelEndActionsPublisher const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*, "", "IMultiplayerLevelEndActionsPublisher");
