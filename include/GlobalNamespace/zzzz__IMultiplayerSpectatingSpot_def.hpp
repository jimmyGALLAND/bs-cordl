#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMultiplayerSpectatingSpot)
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMultiplayerSpectatingSpot);
// Type: ::IMultiplayerSpectatingSpot
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IMultiplayerSpectatingSpot*
class CORDL_TYPE IMultiplayerSpectatingSpot {
public:
// Declarations
 __declspec(property(get=get_isMain)) bool  isMain;

 __declspec(property(get=get_observable)) ::GlobalNamespace::IMultiplayerObservable*  observable;

 __declspec(property(get=get_spotName)) ::StringW  spotName;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Method SetIsObserved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetIsObserved(bool  isObserved) ;

/// @brief Method add_hasBeenRemovedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*  value) ;

/// @brief Method get_isMain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isMain() ;

/// @brief Method get_observable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::IMultiplayerObservable* get_observable() ;

/// @brief Method get_spotName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_spotName() ;

/// @brief Method get_transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// @brief Method remove_hasBeenRemovedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSpectatingSpot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IMultiplayerSpectatingSpot(IMultiplayerSpectatingSpot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IMultiplayerSpectatingSpot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMultiplayerSpectatingSpot(IMultiplayerSpectatingSpot const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerSpectatingSpot*, "", "IMultiplayerSpectatingSpot");
