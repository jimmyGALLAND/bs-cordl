#pragma once
// IWYU pragma private; include "GlobalNamespace/FullComboMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
CORDL_MODULE_EXPORT(FullComboMissionObjectiveChecker)
namespace GlobalNamespace {
class ComboController;
}
// Forward declare root types
namespace GlobalNamespace {
class FullComboMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FullComboMissionObjectiveChecker);
// Type: ::FullComboMissionObjectiveChecker
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FullComboMissionObjectiveChecker*
class CORDL_TYPE FullComboMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
public:
// Declarations
/// @brief Field _comboController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__comboController, put=__cordl_internal_set__comboController)) ::UnityW<::GlobalNamespace::ComboController>  _comboController;

/// @brief Method HandleComboBreakingEventHappened, addr 0x3b1d51c, size 0x3c, virtual false, abstract: false, final false
inline void HandleComboBreakingEventHappened() ;

/// @brief Method Init, addr 0x3b1d350, size 0xfc, virtual true, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::FullComboMissionObjectiveChecker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3b1d44c, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::UnityW<::GlobalNamespace::ComboController> const& __cordl_internal_get__comboController() const;

constexpr ::UnityW<::GlobalNamespace::ComboController>& __cordl_internal_get__comboController() ;

constexpr void __cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController>  value) ;

/// @brief Method .ctor, addr 0x3b1d558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FullComboMissionObjectiveChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker const& ) = delete;

/// @brief Field _comboController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ComboController>  ____comboController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FullComboMissionObjectiveChecker, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FullComboMissionObjectiveChecker, ____comboController) == 0x50, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FullComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FullComboMissionObjectiveChecker*, "", "FullComboMissionObjectiveChecker");
