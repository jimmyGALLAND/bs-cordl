#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelNoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelNoTransitionInstaller)
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelNoTransitionInstaller);
// Type: ::StandardLevelNoTransitionInstaller
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardLevelNoTransitionInstaller*
class CORDL_TYPE StandardLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief Field _scenesTransitionSetupData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__scenesTransitionSetupData, put=__cordl_internal_set__scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>  _scenesTransitionSetupData;

/// @brief Field _settingsManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

/// @brief Field _standardLevelNoTransitionInstallerData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__standardLevelNoTransitionInstallerData, put=__cordl_internal_set__standardLevelNoTransitionInstallerData)) ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>  _standardLevelNoTransitionInstallerData;

 __declspec(property(get=get_standardLevelNoTransitionInstallerData)) ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>  standardLevelNoTransitionInstallerData;

/// @brief Method InstallBindings, addr 0x3aac02c, size 0x2cc, virtual true, abstract: false, final false
inline void InstallBindings(::Zenject::DiContainer*  container) ;

static inline ::GlobalNamespace::StandardLevelNoTransitionInstaller* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__scenesTransitionSetupData() const;

constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__scenesTransitionSetupData() ;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> const& __cordl_internal_get__standardLevelNoTransitionInstallerData() const;

constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>& __cordl_internal_get__standardLevelNoTransitionInstallerData() ;

constexpr void __cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>  value) ;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

constexpr void __cordl_internal_set__standardLevelNoTransitionInstallerData(::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>  value) ;

/// @brief Method .ctor, addr 0x3aac490, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_standardLevelNoTransitionInstallerData, addr 0x3aac024, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> get_standardLevelNoTransitionInstallerData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardLevelNoTransitionInstaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller const& ) = delete;

/// @brief Field _scenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>  ____scenesTransitionSetupData;

/// @brief Field _standardLevelNoTransitionInstallerData, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>  ____standardLevelNoTransitionInstallerData;

/// @brief Field _settingsManager, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelNoTransitionInstaller, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ____scenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ____standardLevelNoTransitionInstallerData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ____settingsManager) == 0x30, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstaller*, "", "StandardLevelNoTransitionInstaller");
