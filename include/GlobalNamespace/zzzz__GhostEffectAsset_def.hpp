#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostEffectAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(GhostEffectAsset)
namespace GlobalNamespace {
class GhostEffectBehaviour;
}
namespace GlobalNamespace {
class TimelineArrayReference;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostEffectAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GhostEffectAsset);
// Type: ::GhostEffectAsset
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GhostEffectAsset*
class CORDL_TYPE GhostEffectAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::GlobalNamespace::GhostEffectBehaviour*  _cordl_template;

/// @brief Field _ghostEffectType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__ghostEffectType, put=__cordl_internal_set__ghostEffectType)) ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  _ghostEffectType;

/// @brief Field arrayReference, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_arrayReference, put=__cordl_internal_set_arrayReference)) ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>>  arrayReference;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

/// @brief Method CreatePlayable, addr 0x3aa7d7c, size 0x13c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go) ;

static inline ::GlobalNamespace::GhostEffectAsset* New_ctor() ;

constexpr ::GlobalNamespace::GhostEffectBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostEffectBehaviour*> const& __cordl_internal_get__cordl_template() const;

constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const& __cordl_internal_get__ghostEffectType() const;

constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType& __cordl_internal_get__ghostEffectType() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> const& __cordl_internal_get_arrayReference() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>>& __cordl_internal_get_arrayReference() ;

constexpr void __cordl_internal_set__cordl_template(::GlobalNamespace::GhostEffectBehaviour*  value) ;

constexpr void __cordl_internal_set__ghostEffectType(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  value) ;

constexpr void __cordl_internal_set_arrayReference(::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>>  value) ;

/// @brief Method .ctor, addr 0x3aa7eb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_clipCaps, addr 0x3aa7d74, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostEffectAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostEffectAsset(GhostEffectAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostEffectAsset(GhostEffectAsset const& ) = delete;

/// @brief Field _ghostEffectType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  ____ghostEffectType;

/// @brief Field arrayReference, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>>  ___arrayReference;

/// @brief Field template, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::GhostEffectBehaviour*  ____cordl_template;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostEffectAsset, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectAsset, ____ghostEffectType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectAsset, ___arrayReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostEffectAsset, ____cordl_template) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GhostEffectAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectAsset*, "", "GhostEffectAsset");
