#pragma once
// IWYU pragma private; include "GlobalNamespace/BadCutsMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BadCutsMissionObjectiveChecker)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class BadCutsMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BadCutsMissionObjectiveChecker);
// Type: ::BadCutsMissionObjectiveChecker
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BadCutsMissionObjectiveChecker*
class CORDL_TYPE BadCutsMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
// Declarations
/// @brief Field _beatmapObjectManager, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapObjectManager, put=__cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Method HandleNoteWasCut, addr 0x3b1cbcc, size 0x8c, virtual false, abstract: false, final false
inline void HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo) ;

/// @brief Method Init, addr 0x3b1c9bc, size 0x144, virtual true, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::BadCutsMissionObjectiveChecker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3b1cb3c, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

/// @brief Method .ctor, addr 0x3b1cd98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BadCutsMissionObjectiveChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BadCutsMissionObjectiveChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BadCutsMissionObjectiveChecker(BadCutsMissionObjectiveChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BadCutsMissionObjectiveChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BadCutsMissionObjectiveChecker(BadCutsMissionObjectiveChecker const& ) = delete;

/// @brief Field _beatmapObjectManager, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::BeatmapObjectManager*  ____beatmapObjectManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BadCutsMissionObjectiveChecker, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BadCutsMissionObjectiveChecker, ____beatmapObjectManager) == 0x50, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BadCutsMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadCutsMissionObjectiveChecker*, "", "BadCutsMissionObjectiveChecker");
