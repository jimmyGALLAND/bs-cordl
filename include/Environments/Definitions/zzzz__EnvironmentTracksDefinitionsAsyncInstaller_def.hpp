#pragma once
// IWYU pragma private; include "Environments/Definitions/EnvironmentTracksDefinitionsAsyncInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentTracksDefinitionsAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Environments::Definitions {
class EnvironmentTracksDefinitionsAsyncInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller);
// Type: Environments.Definitions::EnvironmentTracksDefinitionsAsyncInstaller
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Environments::Definitions {
// Is value type: false
// CS Name: ::Environments.Definitions::EnvironmentTracksDefinitionsAsyncInstaller*
class CORDL_TYPE EnvironmentTracksDefinitionsAsyncInstaller : public ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>> {
public:
// Declarations
/// @brief Field _environmentTracksDefinitions, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__environmentTracksDefinitions, put=__cordl_internal_set__environmentTracksDefinitions)) ::System::Collections::Generic::List_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*  _environmentTracksDefinitions;

 __declspec(property(get=get_assetLabelRuntimeKey)) ::StringW  assetLabelRuntimeKey;

/// @brief Method InstallBindings, addr 0x223785c, size 0xac, virtual true, abstract: false, final false
inline void InstallBindings() ;

/// @brief Method LoadResourcesBeforeInstall, addr 0x2237804, size 0x58, virtual true, abstract: false, final false
inline void LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*  tracksDefinitions, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*  registry) ;

static inline ::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*& __cordl_internal_get__environmentTracksDefinitions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*> const& __cordl_internal_get__environmentTracksDefinitions() const;

constexpr void __cordl_internal_set__environmentTracksDefinitions(::System::Collections::Generic::List_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*  value) ;

/// @brief Method .ctor, addr 0x2237aa8, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_assetLabelRuntimeKey, addr 0x22377c4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_assetLabelRuntimeKey() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentTracksDefinitionsAsyncInstaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionsAsyncInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentTracksDefinitionsAsyncInstaller(EnvironmentTracksDefinitionsAsyncInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentTracksDefinitionsAsyncInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentTracksDefinitionsAsyncInstaller(EnvironmentTracksDefinitionsAsyncInstaller const& ) = delete;

/// @brief Field _environmentTracksDefinitions, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>*  ____environmentTracksDefinitions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller, 0x50>, "Size mismatch!");

static_assert(offsetof(::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller, ____environmentTracksDefinitions) == 0x48, "Offset mismatch!");

} // namespace end def Environments::Definitions
NEED_NO_BOX(::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Environments::Definitions::EnvironmentTracksDefinitionsAsyncInstaller*, "Environments.Definitions", "EnvironmentTracksDefinitionsAsyncInstaller");
