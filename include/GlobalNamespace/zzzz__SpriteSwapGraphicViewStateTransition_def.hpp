#pragma once
// IWYU pragma private; include "GlobalNamespace/SpriteSwapGraphicViewStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(SpriteSwapGraphicViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class SpriteSwapTransitionSO;
}
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class SpriteSwapGraphicViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpriteSwapGraphicViewStateTransition);
// Type: ::SpriteSwapGraphicViewStateTransition
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpriteSwapGraphicViewStateTransition*
class CORDL_TYPE SpriteSwapGraphicViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::UI::Image>> {
public:
// Declarations
/// @brief Field _transition, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transition, put=__cordl_internal_set__transition)) ::UnityW<::GlobalNamespace::SpriteSwapTransitionSO>  _transition;

 __declspec(property(get=get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO>  transition;

static inline ::GlobalNamespace::SpriteSwapGraphicViewStateTransition* New_ctor() ;

/// @brief Method SetDisabledState, addr 0x4447b00, size 0x28, virtual true, abstract: false, final false
inline void SetDisabledState() ;

/// @brief Method SetHighlightedState, addr 0x4447ab0, size 0x28, virtual true, abstract: false, final false
inline void SetHighlightedState() ;

/// @brief Method SetNormalState, addr 0x4447a88, size 0x28, virtual true, abstract: false, final false
inline void SetNormalState() ;

/// @brief Method SetPressedState, addr 0x4447ad8, size 0x28, virtual true, abstract: false, final false
inline void SetPressedState() ;

/// @brief Method SetSelectedAndHighlightedState, addr 0x4447b50, size 0x28, virtual true, abstract: false, final false
inline void SetSelectedAndHighlightedState() ;

/// @brief Method SetSelectedState, addr 0x4447b28, size 0x28, virtual true, abstract: false, final false
inline void SetSelectedState() ;

/// @brief Method TransitionToDisabledState, addr 0x4447a58, size 0x10, virtual true, abstract: false, final false
inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToHighlightedState, addr 0x4447a38, size 0x10, virtual true, abstract: false, final false
inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToNormalState, addr 0x4447a2c, size 0xc, virtual true, abstract: false, final false
inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToPressedState, addr 0x4447a48, size 0x10, virtual true, abstract: false, final false
inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedAndHighlightedState, addr 0x4447a78, size 0x10, virtual true, abstract: false, final false
inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedState, addr 0x4447a68, size 0x10, virtual true, abstract: false, final false
inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

constexpr ::UnityW<::GlobalNamespace::SpriteSwapTransitionSO> const& __cordl_internal_get__transition() const;

constexpr ::UnityW<::GlobalNamespace::SpriteSwapTransitionSO>& __cordl_internal_get__transition() ;

constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::SpriteSwapTransitionSO>  value) ;

/// @brief Method .ctor, addr 0x4447b78, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_transition, addr 0x4447a24, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteSwapGraphicViewStateTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteSwapGraphicViewStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteSwapGraphicViewStateTransition(SpriteSwapGraphicViewStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteSwapGraphicViewStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteSwapGraphicViewStateTransition(SpriteSwapGraphicViewStateTransition const& ) = delete;

/// @brief Field _transition, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SpriteSwapTransitionSO>  ____transition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteSwapGraphicViewStateTransition, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteSwapGraphicViewStateTransition, ____transition) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpriteSwapGraphicViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteSwapGraphicViewStateTransition*, "", "SpriteSwapGraphicViewStateTransition");
