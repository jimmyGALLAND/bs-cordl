#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolInstallerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolInstallerSO)
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolInstallerSO);
// Type: ::RecordingToolInstallerSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolInstallerSO*
class CORDL_TYPE RecordingToolInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief Method InstallBindings, addr 0x3a9deb8, size 0x1a4, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::RecordingToolInstallerSO* New_ctor() ;

/// @brief Method .ctor, addr 0x3a9e05c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecordingToolInstallerSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolInstallerSO(RecordingToolInstallerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolInstallerSO(RecordingToolInstallerSO const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolInstallerSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolInstallerSO*, "", "RecordingToolInstallerSO");
