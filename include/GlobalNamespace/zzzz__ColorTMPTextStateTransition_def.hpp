#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorTMPTextStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ColorTMPTextStateTransition)
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace TMPro {
class TMP_Text;
}
namespace Tweening {
class ColorTween;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTMPTextStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorTMPTextStateTransition);
// Type: ::ColorTMPTextStateTransition
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorTMPTextStateTransition*
class CORDL_TYPE ColorTMPTextStateTransition : public ::GlobalNamespace::ColorStateTransition_1<::UnityW<::TMPro::TMP_Text>> {
public:
// Declarations
/// @brief Field _colorTween, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorTween, put=__cordl_internal_set__colorTween)) ::Tweening::ColorTween*  _colorTween;

static inline ::GlobalNamespace::ColorTMPTextStateTransition* New_ctor() ;

/// @brief Method SetDisabledState, addr 0x4445088, size 0x38, virtual true, abstract: false, final false
inline void SetDisabledState() ;

/// @brief Method SetHighlightedState, addr 0x4445018, size 0x38, virtual true, abstract: false, final false
inline void SetHighlightedState() ;

/// @brief Method SetNormalState, addr 0x4444fe0, size 0x38, virtual true, abstract: false, final false
inline void SetNormalState() ;

/// @brief Method SetPressedState, addr 0x4445050, size 0x38, virtual true, abstract: false, final false
inline void SetPressedState() ;

/// @brief Method SetSelectedAndHighlightedState, addr 0x44450f8, size 0x38, virtual true, abstract: false, final false
inline void SetSelectedAndHighlightedState() ;

/// @brief Method SetSelectedState, addr 0x44450c0, size 0x38, virtual true, abstract: false, final false
inline void SetSelectedState() ;

/// @brief Method StartTween, addr 0x4444c50, size 0x1e8, virtual false, abstract: false, final false
inline void StartTween(::UnityEngine::Color  endColor, ::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method StopCurrentTransitionAnimation, addr 0x4444f50, size 0x90, virtual true, abstract: false, final false
inline void StopCurrentTransitionAnimation() ;

/// @brief Method TransitionToDisabledState, addr 0x4444ea8, size 0x38, virtual true, abstract: false, final false
inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToHighlightedState, addr 0x4444e38, size 0x38, virtual true, abstract: false, final false
inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToNormalState, addr 0x4444c18, size 0x38, virtual true, abstract: false, final false
inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToPressedState, addr 0x4444e70, size 0x38, virtual true, abstract: false, final false
inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedAndHighlightedState, addr 0x4444f18, size 0x38, virtual true, abstract: false, final false
inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedState, addr 0x4444ee0, size 0x38, virtual true, abstract: false, final false
inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method <StartTween>b__14_0, addr 0x4445178, size 0x24, virtual false, abstract: false, final false
inline void _StartTween_b__14_0(::UnityEngine::Color  color) ;

/// @brief Method <StartTween>b__14_1, addr 0x444519c, size 0x88, virtual false, abstract: false, final false
inline void _StartTween_b__14_1() ;

constexpr ::Tweening::ColorTween*& __cordl_internal_get__colorTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> const& __cordl_internal_get__colorTween() const;

constexpr void __cordl_internal_set__colorTween(::Tweening::ColorTween*  value) ;

/// @brief Method .ctor, addr 0x4445130, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorTMPTextStateTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorTMPTextStateTransition(ColorTMPTextStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorTMPTextStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorTMPTextStateTransition(ColorTMPTextStateTransition const& ) = delete;

/// @brief Field _colorTween, offset: 0x40, size: 0x8, def value: None
 ::Tweening::ColorTween*  ____colorTween;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorTMPTextStateTransition, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorTMPTextStateTransition, ____colorTween) == 0x40, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorTMPTextStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTMPTextStateTransition*, "", "ColorTMPTextStateTransition");
