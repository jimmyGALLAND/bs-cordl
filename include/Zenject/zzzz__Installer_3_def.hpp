#pragma once
// IWYU pragma private; include "Zenject/Installer_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstallerBase_def.hpp"
CORDL_MODULE_EXPORT(Installer_3)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TDerived>
class Installer_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Installer_3);
// Type: Zenject::Installer`3
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TDerived>
// Is value type: false
// CS Name: ::Zenject::Installer`3<TParam1,TParam2,TDerived>*
class CORDL_TYPE Installer_3 : public ::Zenject::InstallerBase {
public:
// Declarations
/// @brief Method Install, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Install(::Zenject::DiContainer*  container, TParam1  p1, TParam2  p2) ;

static inline ::Zenject::Installer_3<TParam1,TParam2,TDerived>* New_ctor() ;

/// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Installer_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Installer_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Installer_3(Installer_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Installer_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Installer_3(Installer_3 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Installer_3, "Zenject", "Installer`3");
