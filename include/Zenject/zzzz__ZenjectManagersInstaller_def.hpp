#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ZenjectManagersInstaller)
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ZenjectManagersInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenjectManagersInstaller);
// Type: Zenject::ZenjectManagersInstaller
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11131)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11131), inst: 3904 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11157))
// CS Name: ::Zenject::ZenjectManagersInstaller*
class CORDL_TYPE ZenjectManagersInstaller : public ::Zenject::Installer_1<::Zenject::ZenjectManagersInstaller*> {
public:
  // Declarations
  /// @brief Method InstallBindings addr 0x2ef5e24 size 0x1bc virtual true final false
  inline void InstallBindings();

  static inline ::Zenject::ZenjectManagersInstaller* New_ctor();

  /// @brief Method .ctor addr 0x2ef5fe0 size 0x48 virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x2ef6028 size 0x58 virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ef6080 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectManagersInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectManagersInstaller(ZenjectManagersInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectManagersInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectManagersInstaller(ZenjectManagersInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectManagersInstaller();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectManagersInstaller, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenjectManagersInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectManagersInstaller*, "Zenject", "ZenjectManagersInstaller");
