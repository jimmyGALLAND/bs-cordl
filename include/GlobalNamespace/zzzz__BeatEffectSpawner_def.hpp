#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatEffectSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatEffectSpawner)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class SongController;
}
namespace GlobalNamespace {
class __BeatEffectSpawner__InitData;
}
namespace GlobalNamespace {
class __BeatEffect__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatEffectSpawner;
}
namespace GlobalNamespace {
class __BeatEffectSpawner__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatEffectSpawner);
MARK_REF_PTR_T(::GlobalNamespace::__BeatEffectSpawner__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatEffectSpawner::InitData*
class CORDL_TYPE __BeatEffectSpawner__InitData : public ::System::Object {
public:
// Declarations
/// @brief Field hideNoteSpawnEffect, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideNoteSpawnEffect, put=__cordl_internal_set_hideNoteSpawnEffect)) bool  hideNoteSpawnEffect;

static inline ::GlobalNamespace::__BeatEffectSpawner__InitData* New_ctor(bool  hideNoteSpawnEffect) ;

constexpr bool const& __cordl_internal_get_hideNoteSpawnEffect() const;

constexpr bool& __cordl_internal_get_hideNoteSpawnEffect() ;

constexpr void __cordl_internal_set_hideNoteSpawnEffect(bool  value) ;

/// @brief Method .ctor, addr 0x3af3cd8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  hideNoteSpawnEffect) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __BeatEffectSpawner__InitData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__BeatEffectSpawner__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatEffectSpawner__InitData(__BeatEffectSpawner__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatEffectSpawner__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatEffectSpawner__InitData(__BeatEffectSpawner__InitData const& ) = delete;

/// @brief Field hideNoteSpawnEffect, offset: 0x10, size: 0x1, def value: None
 bool  ___hideNoteSpawnEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatEffectSpawner__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatEffectSpawner__InitData, ___hideNoteSpawnEffect) == 0x10, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatEffectSpawner
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatEffectSpawner*
class CORDL_TYPE BeatEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__BeatEffectSpawner__InitData;

/// @brief Field _audioTimeSyncController, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioTimeSyncController, put=__cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>  _audioTimeSyncController;

/// @brief Field _beatEffectPoolContainer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatEffectPoolContainer, put=__cordl_internal_set__beatEffectPoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*  _beatEffectPoolContainer;

/// @brief Field _beatmapObjectManager, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapObjectManager, put=__cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _bloomFog, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__bloomFog, put=__cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO>  _bloomFog;

/// @brief Field _bombColorEffect, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get__bombColorEffect, put=__cordl_internal_set__bombColorEffect)) ::UnityEngine::Color  _bombColorEffect;

/// @brief Field _colorManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorManager, put=__cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field _effectDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__effectDuration, put=__cordl_internal_set__effectDuration)) float_t  _effectDuration;

/// @brief Field _initData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__initData, put=__cordl_internal_set__initData)) ::GlobalNamespace::__BeatEffectSpawner__InitData*  _initData;

/// @brief Field _songController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__songController, put=__cordl_internal_set__songController)) ::UnityW<::GlobalNamespace::SongController>  _songController;

/// @brief Convert operator to "::GlobalNamespace::IBeatEffectDidFinishEvent"
constexpr operator  ::GlobalNamespace::IBeatEffectDidFinishEvent*() noexcept;

/// @brief Method HandleBeatEffectDidFinish, addr 0x3af3be4, size 0xd8, virtual true, abstract: false, final true
inline void HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect*  beatEffect) ;

/// @brief Method HandleNoteDidStartJump, addr 0x3af3928, size 0x2bc, virtual false, abstract: false, final false
inline void HandleNoteDidStartJump(::GlobalNamespace::NoteController*  noteController) ;

/// @brief Method Init, addr 0x3af360c, size 0x7c, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::__BeatEffect__Pool*  beatEffectPool) ;

static inline ::GlobalNamespace::BeatEffectSpawner* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3af3718, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x3af3688, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x3af37a8, size 0x180, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController() ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*& __cordl_internal_get__beatEffectPoolContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*> const& __cordl_internal_get__beatEffectPoolContainer() const;

constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__bombColorEffect() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__bombColorEffect() ;

constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

constexpr float_t const& __cordl_internal_get__effectDuration() const;

constexpr float_t& __cordl_internal_get__effectDuration() ;

constexpr ::GlobalNamespace::__BeatEffectSpawner__InitData*& __cordl_internal_get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatEffectSpawner__InitData*> const& __cordl_internal_get__initData() const;

constexpr ::UnityW<::GlobalNamespace::SongController> const& __cordl_internal_get__songController() const;

constexpr ::UnityW<::GlobalNamespace::SongController>& __cordl_internal_get__songController() ;

constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController>  value) ;

constexpr void __cordl_internal_set__beatEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*  value) ;

constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO>  value) ;

constexpr void __cordl_internal_set__bombColorEffect(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr void __cordl_internal_set__effectDuration(float_t  value) ;

constexpr void __cordl_internal_set__initData(::GlobalNamespace::__BeatEffectSpawner__InitData*  value) ;

constexpr void __cordl_internal_set__songController(::UnityW<::GlobalNamespace::SongController>  value) ;

/// @brief Method .ctor, addr 0x3af3cbc, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBeatEffectDidFinishEvent"
constexpr ::GlobalNamespace::IBeatEffectDidFinishEvent* i___GlobalNamespace__IBeatEffectDidFinishEvent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatEffectSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatEffectSpawner(BeatEffectSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatEffectSpawner(BeatEffectSpawner const& ) = delete;

/// @brief Field _effectDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ____effectDuration;

/// @brief Field _bombColorEffect, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ____bombColorEffect;

/// @brief Field _colorManager, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ColorManager*  ____colorManager;

/// @brief Field _beatmapObjectManager, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::BeatmapObjectManager*  ____beatmapObjectManager;

/// @brief Field _audioTimeSyncController, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioTimeSyncController>  ____audioTimeSyncController;

/// @brief Field _initData, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::__BeatEffectSpawner__InitData*  ____initData;

/// @brief Field _bloomFog, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BloomFogSO>  ____bloomFog;

/// @brief Field _songController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SongController>  ____songController;

/// @brief Field _beatEffectPoolContainer, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*  ____beatEffectPoolContainer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatEffectSpawner, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____effectDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____bombColorEffect) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____colorManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____beatmapObjectManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____audioTimeSyncController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____initData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____bloomFog) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____songController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatEffectSpawner, ____beatEffectPoolContainer) == 0x68, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffectSpawner*, "", "BeatEffectSpawner");
NEED_NO_BOX(::GlobalNamespace::__BeatEffectSpawner__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatEffectSpawner__InitData*, "", "BeatEffectSpawner/InitData");
