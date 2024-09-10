#pragma once
// IWYU pragma private; include "GlobalNamespace/FadeOutOnSceneTransitionStart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FadeOutOnSceneTransitionStart)
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
struct __GameScenesManager__SceneTransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutOnSceneTransitionStart;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeOutOnSceneTransitionStart);
// Type: ::FadeOutOnSceneTransitionStart
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FadeOutOnSceneTransitionStart*
class CORDL_TYPE FadeOutOnSceneTransitionStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _fadeInOut, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeInOut, put=__cordl_internal_set__fadeInOut)) ::UnityW<::GlobalNamespace::FadeInOutController>  _fadeInOut;

/// @brief Field _gameScenesManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameScenesManager, put=__cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager>  _gameScenesManager;

/// @brief Method HandleGameScenesManagerTransitionDidStart, addr 0x3ff0258, size 0x1c, virtual false, abstract: false, final false
inline void HandleGameScenesManagerTransitionDidStart(::GlobalNamespace::__GameScenesManager__SceneTransitionType  sceneTransitionType, float_t  duration) ;

static inline ::GlobalNamespace::FadeOutOnSceneTransitionStart* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3ff0188, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x3ff00f8, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOut() const;

constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOut() ;

constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager() ;

constexpr void __cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController>  value) ;

constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager>  value) ;

/// @brief Method .ctor, addr 0x3ff0274, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FadeOutOnSceneTransitionStart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FadeOutOnSceneTransitionStart", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FadeOutOnSceneTransitionStart(FadeOutOnSceneTransitionStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutOnSceneTransitionStart", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FadeOutOnSceneTransitionStart(FadeOutOnSceneTransitionStart const& ) = delete;

/// @brief Field _fadeInOut, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FadeInOutController>  ____fadeInOut;

/// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameScenesManager>  ____gameScenesManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeOutOnSceneTransitionStart, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeOutOnSceneTransitionStart, ____fadeInOut) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeOutOnSceneTransitionStart, ____gameScenesManager) == 0x28, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeOutOnSceneTransitionStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutOnSceneTransitionStart*, "", "FadeOutOnSceneTransitionStart");
