#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
CORDL_MODULE_EXPORT(MonoInstaller)
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class MonoInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MonoInstaller);
// Type: Zenject::MonoInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11146))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11138))
// CS Name: ::Zenject::MonoInstaller*
class CORDL_TYPE MonoInstaller : public ::Zenject::MonoInstallerBase {
public:
  // Declarations
  static inline ::Zenject::MonoInstaller* New_ctor();

  /// @brief Method .ctor addr 0x2ef4fb0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ef4fc0 size 0x178 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoInstaller(MonoInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoInstaller(MonoInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoInstaller();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MonoInstaller, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::MonoInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoInstaller*, "Zenject", "MonoInstaller");
