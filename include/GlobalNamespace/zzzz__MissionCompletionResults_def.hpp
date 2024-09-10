#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionCompletionResults.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MissionCompletionResults)
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MissionObjectiveResult;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionCompletionResults;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionCompletionResults);
// Type: ::MissionCompletionResults
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionCompletionResults*
class CORDL_TYPE MissionCompletionResults : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsMissionComplete)) bool  IsMissionComplete;

/// @brief Field levelCompletionResults, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelCompletionResults, put=__cordl_internal_set_levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults;

/// @brief Field missionObjectiveResults, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_missionObjectiveResults, put=__cordl_internal_set_missionObjectiveResults)) ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  missionObjectiveResults;

static inline ::GlobalNamespace::MissionCompletionResults* New_ctor(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  missionObjectiveResults) ;

constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __cordl_internal_get_levelCompletionResults() const;

constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*> const& __cordl_internal_get_missionObjectiveResults() const;

constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>& __cordl_internal_get_missionObjectiveResults() ;

constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults*  value) ;

constexpr void __cordl_internal_set_missionObjectiveResults(::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  value) ;

/// @brief Method .ctor, addr 0x2686c64, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  missionObjectiveResults) ;

/// @brief Method get_IsMissionComplete, addr 0x2686bdc, size 0x88, virtual false, abstract: false, final false
inline bool get_IsMissionComplete() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MissionCompletionResults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MissionCompletionResults", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionCompletionResults(MissionCompletionResults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionCompletionResults", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionCompletionResults(MissionCompletionResults const& ) = delete;

/// @brief Field levelCompletionResults, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::LevelCompletionResults*  ___levelCompletionResults;

/// @brief Field missionObjectiveResults, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MissionObjectiveResult*,::Array<::GlobalNamespace::MissionObjectiveResult*>*>  ___missionObjectiveResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionCompletionResults, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionCompletionResults, ___levelCompletionResults) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionCompletionResults, ___missionObjectiveResults) == 0x18, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionCompletionResults*, "", "MissionCompletionResults");
