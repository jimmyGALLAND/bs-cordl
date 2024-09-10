#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneTransitionFadingExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SceneTransitionFadingExtensions)
namespace GlobalNamespace {
struct __GameScenesManager__SceneTransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneTransitionFadingExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneTransitionFadingExtensions);
// Type: ::SceneTransitionFadingExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SceneTransitionFadingExtensions*
class CORDL_TYPE SceneTransitionFadingExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ShouldFadeOnSceneTransition, addr 0x3ff3da0, size 0x10, virtual false, abstract: false, final false
static inline bool ShouldFadeOnSceneTransition(::GlobalNamespace::__GameScenesManager__SceneTransitionType  sceneTransitionType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneTransitionFadingExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneTransitionFadingExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneTransitionFadingExtensions(SceneTransitionFadingExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneTransitionFadingExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneTransitionFadingExtensions(SceneTransitionFadingExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneTransitionFadingExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneTransitionFadingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneTransitionFadingExtensions*, "", "SceneTransitionFadingExtensions");
