#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionGameplayInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MissionGameplayInstaller)
namespace GlobalNamespace {
class MissionGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionGameplayInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionGameplayInstaller);
// Type: ::MissionGameplayInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionGameplayInstaller*
class CORDL_TYPE MissionGameplayInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief Field _sceneSetupData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneSetupData, put=__cordl_internal_set__sceneSetupData)) ::GlobalNamespace::MissionGameplaySceneSetupData*  _sceneSetupData;

/// @brief Method InstallBindings, addr 0x3b5f5d0, size 0x470, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::MissionGameplayInstaller* New_ctor() ;

constexpr ::GlobalNamespace::MissionGameplaySceneSetupData*& __cordl_internal_get__sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionGameplaySceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::MissionGameplaySceneSetupData*  value) ;

/// @brief Method .ctor, addr 0x3b5fa40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MissionGameplayInstaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplayInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionGameplayInstaller(MissionGameplayInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionGameplayInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionGameplayInstaller(MissionGameplayInstaller const& ) = delete;

/// @brief Field _sceneSetupData, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MissionGameplaySceneSetupData*  ____sceneSetupData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionGameplayInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionGameplayInstaller, ____sceneSetupData) == 0x28, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionGameplayInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionGameplayInstaller*, "", "MissionGameplayInstaller");
