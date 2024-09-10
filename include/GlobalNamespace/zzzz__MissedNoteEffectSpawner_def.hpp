#pragma once
// IWYU pragma private; include "GlobalNamespace/MissedNoteEffectSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MissedNoteEffectSpawner)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class FlyingSpriteSpawner;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class MissedNoteEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissedNoteEffectSpawner);
// Type: ::MissedNoteEffectSpawner
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissedNoteEffectSpawner*
class CORDL_TYPE MissedNoteEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioTimeSyncController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioTimeSyncController, put=__cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>  _audioTimeSyncController;

/// @brief Field _beatmapObjectManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapObjectManager, put=__cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _initData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__initData, put=__cordl_internal_set__initData)) ::GlobalNamespace::__CoreGameHUDController__InitData*  _initData;

/// @brief Field _missedNoteFlyingSpriteSpawner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__missedNoteFlyingSpriteSpawner, put=__cordl_internal_set__missedNoteFlyingSpriteSpawner)) ::UnityW<::GlobalNamespace::FlyingSpriteSpawner>  _missedNoteFlyingSpriteSpawner;

/// @brief Field _spawnPosZ, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnPosZ, put=__cordl_internal_set__spawnPosZ)) float_t  _spawnPosZ;

/// @brief Method HandleNoteWasMissed, addr 0x3af4804, size 0x18c, virtual false, abstract: false, final false
inline void HandleNoteWasMissed(::GlobalNamespace::NoteController*  noteController) ;

static inline ::GlobalNamespace::MissedNoteEffectSpawner* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3af4774, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x3af46a4, size 0xd0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController() ;

constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& __cordl_internal_get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& __cordl_internal_get__initData() const;

constexpr ::UnityW<::GlobalNamespace::FlyingSpriteSpawner> const& __cordl_internal_get__missedNoteFlyingSpriteSpawner() const;

constexpr ::UnityW<::GlobalNamespace::FlyingSpriteSpawner>& __cordl_internal_get__missedNoteFlyingSpriteSpawner() ;

constexpr float_t const& __cordl_internal_get__spawnPosZ() const;

constexpr float_t& __cordl_internal_get__spawnPosZ() ;

constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController>  value) ;

constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr void __cordl_internal_set__initData(::GlobalNamespace::__CoreGameHUDController__InitData*  value) ;

constexpr void __cordl_internal_set__missedNoteFlyingSpriteSpawner(::UnityW<::GlobalNamespace::FlyingSpriteSpawner>  value) ;

constexpr void __cordl_internal_set__spawnPosZ(float_t  value) ;

/// @brief Method .ctor, addr 0x3af4990, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MissedNoteEffectSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MissedNoteEffectSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissedNoteEffectSpawner(MissedNoteEffectSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissedNoteEffectSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissedNoteEffectSpawner(MissedNoteEffectSpawner const& ) = delete;

/// @brief Field _missedNoteFlyingSpriteSpawner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FlyingSpriteSpawner>  ____missedNoteFlyingSpriteSpawner;

/// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::BeatmapObjectManager*  ____beatmapObjectManager;

/// @brief Field _audioTimeSyncController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioTimeSyncController>  ____audioTimeSyncController;

/// @brief Field _initData, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::__CoreGameHUDController__InitData*  ____initData;

/// @brief Field _spawnPosZ, offset: 0x40, size: 0x4, def value: None
 float_t  ____spawnPosZ;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissedNoteEffectSpawner, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____missedNoteFlyingSpriteSpawner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____audioTimeSyncController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____initData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissedNoteEffectSpawner, ____spawnPosZ) == 0x40, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissedNoteEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissedNoteEffectSpawner*, "", "MissedNoteEffectSpawner");
