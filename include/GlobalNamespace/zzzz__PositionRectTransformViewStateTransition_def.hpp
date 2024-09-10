#pragma once
// IWYU pragma private; include "GlobalNamespace/PositionRectTransformViewStateTransition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
CORDL_MODULE_EXPORT(PositionRectTransformViewStateTransition)
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class TransitionTimingSO;
}
namespace GlobalNamespace {
class Vector3TransitionSO;
}
namespace Tweening {
class Vector3Tween;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PositionRectTransformViewStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PositionRectTransformViewStateTransition);
// Type: ::PositionRectTransformViewStateTransition
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PositionRectTransformViewStateTransition*
class CORDL_TYPE PositionRectTransformViewStateTransition : public ::GlobalNamespace::BaseStateTransition_1<::UnityW<::UnityEngine::RectTransform>> {
public:
// Declarations
/// @brief Field _transition, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transition, put=__cordl_internal_set__transition)) ::UnityW<::GlobalNamespace::Vector3TransitionSO>  _transition;

/// @brief Field _vectorTween, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__vectorTween, put=__cordl_internal_set__vectorTween)) ::Tweening::Vector3Tween*  _vectorTween;

 __declspec(property(get=get_transition)) ::UnityW<::GlobalNamespace::BaseTransitionSO>  transition;

static inline ::GlobalNamespace::PositionRectTransformViewStateTransition* New_ctor() ;

/// @brief Method SetDisabledState, addr 0x44465c8, size 0x28, virtual true, abstract: false, final false
inline void SetDisabledState() ;

/// @brief Method SetHighlightedState, addr 0x4446578, size 0x28, virtual true, abstract: false, final false
inline void SetHighlightedState() ;

/// @brief Method SetNormalState, addr 0x4446550, size 0x28, virtual true, abstract: false, final false
inline void SetNormalState() ;

/// @brief Method SetPressedState, addr 0x44465a0, size 0x28, virtual true, abstract: false, final false
inline void SetPressedState() ;

/// @brief Method SetSelectedAndHighlightedState, addr 0x4446618, size 0x28, virtual true, abstract: false, final false
inline void SetSelectedAndHighlightedState() ;

/// @brief Method SetSelectedState, addr 0x44465f0, size 0x28, virtual true, abstract: false, final false
inline void SetSelectedState() ;

/// @brief Method StartTween, addr 0x44462f8, size 0x1b8, virtual false, abstract: false, final false
inline void StartTween(::UnityEngine::Vector3  endPosition, ::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method StopCurrentTransitionAnimation, addr 0x4446640, size 0x90, virtual true, abstract: false, final false
inline void StopCurrentTransitionAnimation() ;

/// @brief Method TransitionToDisabledState, addr 0x44464f0, size 0x20, virtual true, abstract: false, final false
inline void TransitionToDisabledState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToHighlightedState, addr 0x44464b0, size 0x20, virtual true, abstract: false, final false
inline void TransitionToHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToNormalState, addr 0x44462d8, size 0x20, virtual true, abstract: false, final false
inline void TransitionToNormalState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToPressedState, addr 0x44464d0, size 0x20, virtual true, abstract: false, final false
inline void TransitionToPressedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedAndHighlightedState, addr 0x4446530, size 0x20, virtual true, abstract: false, final false
inline void TransitionToSelectedAndHighlightedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method TransitionToSelectedState, addr 0x4446510, size 0x20, virtual true, abstract: false, final false
inline void TransitionToSelectedState(::GlobalNamespace::TransitionTimingSO*  transitionTiming) ;

/// @brief Method <StartTween>b__17_0, addr 0x4446718, size 0x1c, virtual false, abstract: false, final false
inline void _StartTween_b__17_0(::UnityEngine::Vector3  pos) ;

/// @brief Method <StartTween>b__17_1, addr 0x4446734, size 0x88, virtual false, abstract: false, final false
inline void _StartTween_b__17_1() ;

constexpr ::UnityW<::GlobalNamespace::Vector3TransitionSO> const& __cordl_internal_get__transition() const;

constexpr ::UnityW<::GlobalNamespace::Vector3TransitionSO>& __cordl_internal_get__transition() ;

constexpr ::Tweening::Vector3Tween*& __cordl_internal_get__vectorTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector3Tween*> const& __cordl_internal_get__vectorTween() const;

constexpr void __cordl_internal_set__transition(::UnityW<::GlobalNamespace::Vector3TransitionSO>  value) ;

constexpr void __cordl_internal_set__vectorTween(::Tweening::Vector3Tween*  value) ;

/// @brief Method .ctor, addr 0x44466d0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_transition, addr 0x44462d0, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BaseTransitionSO> get_transition() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PositionRectTransformViewStateTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PositionRectTransformViewStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PositionRectTransformViewStateTransition(PositionRectTransformViewStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PositionRectTransformViewStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PositionRectTransformViewStateTransition(PositionRectTransformViewStateTransition const& ) = delete;

/// @brief Field _transition, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Vector3TransitionSO>  ____transition;

/// @brief Field _vectorTween, offset: 0x40, size: 0x8, def value: None
 ::Tweening::Vector3Tween*  ____vectorTween;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PositionRectTransformViewStateTransition, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PositionRectTransformViewStateTransition, ____transition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PositionRectTransformViewStateTransition, ____vectorTween) == 0x40, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PositionRectTransformViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PositionRectTransformViewStateTransition*, "", "PositionRectTransformViewStateTransition");
