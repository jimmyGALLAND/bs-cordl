#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstallerBase_def.hpp"
CORDL_MODULE_EXPORT(Installer_4)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived> class Installer_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::Installer_4);
// Type: Zenject::Installer`4
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11134))
// CS Name: ::Zenject::Installer`4<TParam1,TParam2,TParam3,TDerived>*
class CORDL_TYPE Installer_4 : public ::Zenject::InstallerBase {
public:
  // Declarations
  /// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void Install(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3);

  static inline ::Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "Installer_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Installer_4(Installer_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Installer_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Installer_4(Installer_4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Installer_4();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Installer_4, "Zenject", "Installer`4");
