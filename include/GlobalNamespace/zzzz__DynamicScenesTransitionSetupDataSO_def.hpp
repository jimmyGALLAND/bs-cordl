#pragma once
// IWYU pragma private; include "GlobalNamespace/DynamicScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DynamicScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class SceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class DynamicScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DynamicScenesTransitionSetupDataSO);
// Type: ::DynamicScenesTransitionSetupDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DynamicScenesTransitionSetupDataSO*
class CORDL_TYPE DynamicScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
// Declarations
static inline ::GlobalNamespace::DynamicScenesTransitionSetupDataSO* New_ctor() ;

/// @brief Method SetScenes, addr 0x22504e0, size 0x8, virtual false, abstract: false, final false
inline void SetScenes(::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>  scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*,::Array<::GlobalNamespace::SceneSetupData*>*>  sceneSetupData) ;

/// @brief Method .ctor, addr 0x22504f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicScenesTransitionSetupDataSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicScenesTransitionSetupDataSO(DynamicScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicScenesTransitionSetupDataSO(DynamicScenesTransitionSetupDataSO const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DynamicScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DynamicScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicScenesTransitionSetupDataSO*, "", "DynamicScenesTransitionSetupDataSO");
