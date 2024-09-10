#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerIntroAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerIntroAnimator)
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerIntroAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator);
// Type: ::MultiplayerLocalActivePlayerIntroAnimator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalActivePlayerIntroAnimator*
class CORDL_TYPE MultiplayerLocalActivePlayerIntroAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _introPlayableDirector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__introPlayableDirector, put=__cordl_internal_set__introPlayableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  _introPlayableDirector;

static inline ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* New_ctor() ;

/// @brief Method SetAfterIntroValues, addr 0x3b2ef18, size 0x48, virtual false, abstract: false, final false
inline void SetAfterIntroValues() ;

/// @brief Method SetBeforeIntroValues, addr 0x3b2eefc, size 0x1c, virtual false, abstract: false, final false
inline void SetBeforeIntroValues() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__introPlayableDirector() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__introPlayableDirector() ;

constexpr void __cordl_internal_set__introPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

/// @brief Method .ctor, addr 0x3b2ef60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplayerLocalActivePlayerIntroAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerIntroAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalActivePlayerIntroAnimator(MultiplayerLocalActivePlayerIntroAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerIntroAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalActivePlayerIntroAnimator(MultiplayerLocalActivePlayerIntroAnimator const& ) = delete;

/// @brief Field _introPlayableDirector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ____introPlayableDirector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator, ____introPlayableDirector) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, "", "MultiplayerLocalActivePlayerIntroAnimator");
