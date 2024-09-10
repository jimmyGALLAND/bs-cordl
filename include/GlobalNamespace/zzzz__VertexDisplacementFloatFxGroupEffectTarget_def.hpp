#pragma once
// IWYU pragma private; include "GlobalNamespace/VertexDisplacementFloatFxGroupEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexDisplacementFloatFxGroupEffectTarget)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class VertexDisplacementFloatFxGroupEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget);
// Type: ::VertexDisplacementFloatFxGroupEffectTarget
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VertexDisplacementFloatFxGroupEffectTarget*
class CORDL_TYPE VertexDisplacementFloatFxGroupEffectTarget : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
// Declarations
/// @brief Field _bounds, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get__bounds, put=__cordl_internal_set__bounds)) ::UnityEngine::Bounds  _bounds;

/// @brief Field _displacementController, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__displacementController, put=__cordl_internal_set__displacementController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>  _displacementController;

/// @brief Field _displacementRanges, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__displacementRanges, put=__cordl_internal_set__displacementRanges)) ::UnityEngine::Vector3  _displacementRanges;

/// @brief Field _renderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _testFloatValue, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__testFloatValue, put=__cordl_internal_set__testFloatValue)) float_t  _testFloatValue;

/// @brief Field _useTestValue, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTestValue, put=__cordl_internal_set__useTestValue)) bool  _useTestValue;

/// @brief Field _vertexDisplacementRangeVectorPropertyID, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF__vertexDisplacementRangeVectorPropertyID, put=setStaticF__vertexDisplacementRangeVectorPropertyID)) int32_t  _vertexDisplacementRangeVectorPropertyID;

/// @brief Field _xAnimationCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__xAnimationCurve, put=__cordl_internal_set__xAnimationCurve)) ::UnityEngine::AnimationCurve*  _xAnimationCurve;

/// @brief Field _yAnimationCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__yAnimationCurve, put=__cordl_internal_set__yAnimationCurve)) ::UnityEngine::AnimationCurve*  _yAnimationCurve;

/// @brief Field _zAnimationCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__zAnimationCurve, put=__cordl_internal_set__zAnimationCurve)) ::UnityEngine::AnimationCurve*  _zAnimationCurve;

/// @brief Method CalculateDisplacementVector, addr 0x3af9dcc, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 CalculateDisplacementVector(float_t  value) ;

static inline ::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget* New_ctor() ;

/// @brief Method OnEnable, addr 0x3af9cf8, size 0xd4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x3af9e54, size 0x24, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetValue, addr 0x3af9e78, size 0x4, virtual true, abstract: false, final false
inline void SetValue(int32_t  groupId, int32_t  elementId, float_t  value) ;

/// @brief Method SetValue, addr 0x3af9e7c, size 0xd4, virtual false, abstract: false, final false
inline void SetValue(float_t  value) ;

/// @brief Method TriggerValue, addr 0x3af9f50, size 0x4, virtual true, abstract: false, final false
inline void TriggerValue(int32_t  groupId, int32_t  elementId, float_t  value) ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__bounds() ;

constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__displacementController() const;

constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__displacementController() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__displacementRanges() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__displacementRanges() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr float_t const& __cordl_internal_get__testFloatValue() const;

constexpr float_t& __cordl_internal_get__testFloatValue() ;

constexpr bool const& __cordl_internal_get__useTestValue() const;

constexpr bool& __cordl_internal_get__useTestValue() ;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__xAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__xAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__yAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__yAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__zAnimationCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__zAnimationCurve() const;

constexpr void __cordl_internal_set__bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set__displacementController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController>  value) ;

constexpr void __cordl_internal_set__displacementRanges(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__testFloatValue(float_t  value) ;

constexpr void __cordl_internal_set__useTestValue(bool  value) ;

constexpr void __cordl_internal_set__xAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__yAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__zAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x3af9f54, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__vertexDisplacementRangeVectorPropertyID() ;

static inline void setStaticF__vertexDisplacementRangeVectorPropertyID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VertexDisplacementFloatFxGroupEffectTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VertexDisplacementFloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VertexDisplacementFloatFxGroupEffectTarget(VertexDisplacementFloatFxGroupEffectTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VertexDisplacementFloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VertexDisplacementFloatFxGroupEffectTarget(VertexDisplacementFloatFxGroupEffectTarget const& ) = delete;

/// @brief Field _displacementRanges, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____displacementRanges;

/// @brief Field _xAnimationCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____xAnimationCurve;

/// @brief Field _yAnimationCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____yAnimationCurve;

/// @brief Field _zAnimationCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____zAnimationCurve;

/// @brief Field _displacementController, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>  ____displacementController;

/// @brief Field _renderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _useTestValue, offset: 0x58, size: 0x1, def value: None
 bool  ____useTestValue;

/// @brief Field _testFloatValue, offset: 0x5c, size: 0x4, def value: None
 float_t  ____testFloatValue;

/// @brief Field _bounds, offset: 0x60, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____displacementRanges) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____xAnimationCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____yAnimationCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____zAnimationCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____displacementController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____renderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____useTestValue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____testFloatValue) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget, ____bounds) == 0x60, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VertexDisplacementFloatFxGroupEffectTarget*, "", "VertexDisplacementFloatFxGroupEffectTarget");
