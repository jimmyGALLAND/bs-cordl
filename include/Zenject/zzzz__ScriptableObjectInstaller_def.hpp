#pragma once
// IWYU pragma private; include "Zenject/ScriptableObjectInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstaller)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ScriptableObjectInstaller);
// Type: Zenject::ScriptableObjectInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ScriptableObjectInstaller*
class CORDL_TYPE ScriptableObjectInstaller : public ::Zenject::ScriptableObjectInstallerBase {
public:
// Declarations
static inline ::Zenject::ScriptableObjectInstaller* New_ctor() ;

/// @brief Method __zenCreate, addr 0x4a9626c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x4a962c0, size 0x1b8, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x4a9625c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableObjectInstaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableObjectInstaller(ScriptableObjectInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableObjectInstaller(ScriptableObjectInstaller const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ScriptableObjectInstaller, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ScriptableObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectInstaller*, "Zenject", "ScriptableObjectInstaller");
