#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorGraphicStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ColorGraphicStateTransition)
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace Tweening {
class ColorTween;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorGraphicStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorGraphicStateTransition);
// Type: ::ColorGraphicStateTransition
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorGraphicStateTransition*
class CORDL_TYPE ColorGraphicStateTransition : public ::GlobalNamespace::ColorStateTransition_1<::UnityW<::UnityEngine::UI::Graphic>> {
public:
// Declarations
/// @brief Field _colorTween, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorTween, put=__cordl_internal_set__colorTween)) ::Tweening::ColorTween*  _colorTween;

static inline ::GlobalNamespace::ColorGraphicStateTransition* New_ctor() ;

/// @brief Method SetDisabledState, addr 0x4444a7c, size 0x38, virtual true, abstract: false, final false
inline void SetDisabledState() ;

/// @brief Method SetHighlightedState, addr 0x4444a0c, size 0x38, virtual true, abstract: false, final false
inline void SetHighlightedState() ;

/// @brief Method SetNormalState, addr 0x44449d4, size 0x38, virtual true, abstract: false, final false
inline void SetNormalState() ;

/// @brief Method SetPressedState, addr 0x4444a44, size 0x38, virtual true, abstract: false, final false
inline void SetPressedState() ;

/// @brief Method SetSelectedAndHighlightedState, addr 0x4444aec, size 0x38, virtual true, abstract: false, final false
inline void SetSelectedAndHighlightedState() ;

/// @brief Method SetSelectedState, addr 0x4444ab4, size 0x38, virtual true, abstract: false, final false
inline void SetSelectedState() ;

/// @brief Method StartTween, addr 0x4444644, size 0x1e8, virtual false, abstract: false, final false
inline void StartTween(::UnityEngine::Color  endColor, ::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method StopCurrentTransitionAnimation, addr 0x4444944, size 0x90, virtual true, abstract: false, final false
inline void StopCurrentTransitionAnimation() ;

/// @brief Method TransitionToDisabledState, addr 0x444489c, size 0x38, virtual true, abstract: false, final false
inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToHighlightedState, addr 0x444482c, size 0x38, virtual true, abstract: false, final false
inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToNormalState, addr 0x444460c, size 0x38, virtual true, abstract: false, final false
inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToPressedState, addr 0x4444864, size 0x38, virtual true, abstract: false, final false
inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedAndHighlightedState, addr 0x444490c, size 0x38, virtual true, abstract: false, final false
inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedState, addr 0x44448d4, size 0x38, virtual true, abstract: false, final false
inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method <StartTween>b__14_0, addr 0x4444b6c, size 0x24, virtual false, abstract: false, final false
inline void _StartTween_b__14_0(::UnityEngine::Color  color) ;

/// @brief Method <StartTween>b__14_1, addr 0x4444b90, size 0x88, virtual false, abstract: false, final false
inline void _StartTween_b__14_1() ;

constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__colorTween() const;

constexpr void __cordl_internal_set__colorTween(::Tweening::ColorTween*  value) ;

/// @brief Method .ctor, addr 0x4444b24, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorGraphicStateTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorGraphicStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorGraphicStateTransition(ColorGraphicStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorGraphicStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorGraphicStateTransition(ColorGraphicStateTransition const& ) = delete;

/// @brief Field _colorTween, offset: 0x40, size: 0x8, def value: None
 ::Tweening::ColorTween*  ____colorTween;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorGraphicStateTransition, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorGraphicStateTransition, ____colorTween) == 0x40, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorGraphicStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorGraphicStateTransition*, "", "ColorGraphicStateTransition");
