#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelAnalytics)
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelAnalytics);
// Type: ::StandardLevelAnalytics
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardLevelAnalytics*
class CORDL_TYPE StandardLevelAnalytics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _analyticsModel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__analyticsModel, put=__cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel*  _analyticsModel;

/// @brief Field _standardLevelScenesTransitionSetupData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__standardLevelScenesTransitionSetupData, put=__cordl_internal_set__standardLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>  _standardLevelScenesTransitionSetupData;

/// @brief Method HandleStandardLevelDidFinishEvent, addr 0x3a48fa0, size 0x468, virtual false, abstract: false, final false
inline void HandleStandardLevelDidFinishEvent(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults) ;

static inline ::GlobalNamespace::StandardLevelAnalytics* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3a48f10, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x3a48e80, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelScenesTransitionSetupData() ;

constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value) ;

constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>  value) ;

/// @brief Method .ctor, addr 0x3a49408, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardLevelAnalytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelAnalytics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelAnalytics(StandardLevelAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelAnalytics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelAnalytics(StandardLevelAnalytics const& ) = delete;

/// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>  ____standardLevelScenesTransitionSetupData;

/// @brief Field _analyticsModel, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::IAnalyticsModel*  ____analyticsModel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelAnalytics, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelAnalytics, ____standardLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelAnalytics, ____analyticsModel) == 0x28, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelAnalytics*, "", "StandardLevelAnalytics");
