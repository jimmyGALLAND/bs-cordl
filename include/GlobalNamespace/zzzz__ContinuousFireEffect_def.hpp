#pragma once
// IWYU pragma private; include "GlobalNamespace/ContinuousFireEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FireEffect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ContinuousFireEffect)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class ContinuousFireEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ContinuousFireEffect);
// Type: ::ContinuousFireEffect
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ContinuousFireEffect*
class CORDL_TYPE ContinuousFireEffect : public ::GlobalNamespace::FireEffect {
public:
// Declarations
/// @brief Field _audioTimeSource, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioTimeSource, put=__cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field _bloomSustainCurve, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__bloomSustainCurve, put=__cordl_internal_set__bloomSustainCurve)) ::UnityEngine::AnimationCurve*  _bloomSustainCurve;

/// @brief Field _effectEndTime, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__effectEndTime, put=__cordl_internal_set__effectEndTime)) float_t  _effectEndTime;

/// @brief Field _effectStartTime, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__effectStartTime, put=__cordl_internal_set__effectStartTime)) float_t  _effectStartTime;

/// @brief Field _fadeInDuration, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeInDuration, put=__cordl_internal_set__fadeInDuration)) float_t  _fadeInDuration;

/// @brief Field _fadeInEndTime, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeInEndTime, put=__cordl_internal_set__fadeInEndTime)) float_t  _fadeInEndTime;

/// @brief Field _fadeOutDuration, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOutDuration, put=__cordl_internal_set__fadeOutDuration)) float_t  _fadeOutDuration;

/// @brief Field _fadeOutStartTime, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOutStartTime, put=__cordl_internal_set__fadeOutStartTime)) float_t  _fadeOutStartTime;

/// @brief Field _flipbookSustainCurve, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__flipbookSustainCurve, put=__cordl_internal_set__flipbookSustainCurve)) ::UnityEngine::AnimationCurve*  _flipbookSustainCurve;

/// @brief Field _lastFadeOutProgress, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFadeOutProgress, put=__cordl_internal_set__lastFadeOutProgress)) float_t  _lastFadeOutProgress;

/// @brief Field _lastSustainProgress, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSustainProgress, put=__cordl_internal_set__lastSustainProgress)) float_t  _lastSustainProgress;

/// @brief Field _sustainDuration, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__sustainDuration, put=__cordl_internal_set__sustainDuration)) float_t  _sustainDuration;

/// @brief Method EndEffect, addr 0x2229ee0, size 0x24, virtual false, abstract: false, final false
inline void EndEffect() ;

/// @brief Method HandleColorChangeBeatmapEvent, addr 0x2229da4, size 0x13c, virtual true, abstract: false, final false
inline void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData*  e) ;

static inline ::GlobalNamespace::ContinuousFireEffect* New_ctor() ;

/// @brief Method SetInitialValues, addr 0x2229b50, size 0xa8, virtual false, abstract: false, final false
inline void SetInitialValues() ;

/// @brief Method Start, addr 0x2229b28, size 0x28, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartEffect, addr 0x2229f04, size 0xe0, virtual false, abstract: false, final false
inline void StartEffect(float_t  startTime, float_t  endTime) ;

/// @brief Method Update, addr 0x2229bf8, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateEffect, addr 0x2229bfc, size 0x1a8, virtual false, abstract: false, final false
inline void UpdateEffect() ;

/// @brief Method UpdateRenderers, addr 0x2229fe4, size 0x15c, virtual false, abstract: false, final false
inline void UpdateRenderers(float_t  flipBookAlpha, float_t  bloomAlpha) ;

constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__bloomSustainCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__bloomSustainCurve() const;

constexpr float_t const& __cordl_internal_get__effectEndTime() const;

constexpr float_t& __cordl_internal_get__effectEndTime() ;

constexpr float_t const& __cordl_internal_get__effectStartTime() const;

constexpr float_t& __cordl_internal_get__effectStartTime() ;

constexpr float_t const& __cordl_internal_get__fadeInDuration() const;

constexpr float_t& __cordl_internal_get__fadeInDuration() ;

constexpr float_t const& __cordl_internal_get__fadeInEndTime() const;

constexpr float_t& __cordl_internal_get__fadeInEndTime() ;

constexpr float_t const& __cordl_internal_get__fadeOutDuration() const;

constexpr float_t& __cordl_internal_get__fadeOutDuration() ;

constexpr float_t const& __cordl_internal_get__fadeOutStartTime() const;

constexpr float_t& __cordl_internal_get__fadeOutStartTime() ;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__flipbookSustainCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__flipbookSustainCurve() const;

constexpr float_t const& __cordl_internal_get__lastFadeOutProgress() const;

constexpr float_t& __cordl_internal_get__lastFadeOutProgress() ;

constexpr float_t const& __cordl_internal_get__lastSustainProgress() const;

constexpr float_t& __cordl_internal_get__lastSustainProgress() ;

constexpr float_t const& __cordl_internal_get__sustainDuration() const;

constexpr float_t& __cordl_internal_get__sustainDuration() ;

constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr void __cordl_internal_set__bloomSustainCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__effectEndTime(float_t  value) ;

constexpr void __cordl_internal_set__effectStartTime(float_t  value) ;

constexpr void __cordl_internal_set__fadeInDuration(float_t  value) ;

constexpr void __cordl_internal_set__fadeInEndTime(float_t  value) ;

constexpr void __cordl_internal_set__fadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set__fadeOutStartTime(float_t  value) ;

constexpr void __cordl_internal_set__flipbookSustainCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__lastFadeOutProgress(float_t  value) ;

constexpr void __cordl_internal_set__lastSustainProgress(float_t  value) ;

constexpr void __cordl_internal_set__sustainDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x222a140, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousFireEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContinuousFireEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContinuousFireEffect(ContinuousFireEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousFireEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContinuousFireEffect(ContinuousFireEffect const& ) = delete;

/// @brief Field _fadeInDuration, offset: 0x88, size: 0x4, def value: None
 float_t  ____fadeInDuration;

/// @brief Field _fadeOutDuration, offset: 0x8c, size: 0x4, def value: None
 float_t  ____fadeOutDuration;

/// @brief Field _sustainDuration, offset: 0x90, size: 0x4, def value: None
 float_t  ____sustainDuration;

/// @brief Field _flipbookSustainCurve, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____flipbookSustainCurve;

/// @brief Field _bloomSustainCurve, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____bloomSustainCurve;

/// @brief Field _audioTimeSource, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::IAudioTimeSource*  ____audioTimeSource;

/// @brief Field _fadeInEndTime, offset: 0xb0, size: 0x4, def value: None
 float_t  ____fadeInEndTime;

/// @brief Field _fadeOutStartTime, offset: 0xb4, size: 0x4, def value: None
 float_t  ____fadeOutStartTime;

/// @brief Field _effectStartTime, offset: 0xb8, size: 0x4, def value: None
 float_t  ____effectStartTime;

/// @brief Field _effectEndTime, offset: 0xbc, size: 0x4, def value: None
 float_t  ____effectEndTime;

/// @brief Field _lastSustainProgress, offset: 0xc0, size: 0x4, def value: None
 float_t  ____lastSustainProgress;

/// @brief Field _lastFadeOutProgress, offset: 0xc4, size: 0x4, def value: None
 float_t  ____lastFadeOutProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ContinuousFireEffect, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____fadeInDuration) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____fadeOutDuration) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____sustainDuration) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____flipbookSustainCurve) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____bloomSustainCurve) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____audioTimeSource) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____fadeInEndTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____fadeOutStartTime) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____effectStartTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____effectEndTime) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____lastSustainProgress) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousFireEffect, ____lastFadeOutProgress) == 0xc4, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ContinuousFireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ContinuousFireEffect*, "", "ContinuousFireEffect");
