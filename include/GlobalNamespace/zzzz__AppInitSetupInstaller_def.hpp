#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitSetupInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(AppInitSetupInstaller)
// Forward declare root types
namespace GlobalNamespace {
class AppInitSetupInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AppInitSetupInstaller);
// Type: ::AppInitSetupInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AppInitSetupInstaller*
class CORDL_TYPE AppInitSetupInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief Method InstallBindings, addr 0x26c9898, size 0x5c, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::AppInitSetupInstaller* New_ctor() ;

/// @brief Method .ctor, addr 0x26c98f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppInitSetupInstaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppInitSetupInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppInitSetupInstaller(AppInitSetupInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppInitSetupInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppInitSetupInstaller(AppInitSetupInstaller const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitSetupInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AppInitSetupInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitSetupInstaller*, "", "AppInitSetupInstaller");
