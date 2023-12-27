#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
CORDL_MODULE_EXPORT(NonLazyBinder)
namespace Zenject {
class IfNotBoundBinder;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class NonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NonLazyBinder);
// Type: Zenject::NonLazyBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10922))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10925))
// CS Name: ::Zenject::NonLazyBinder*
class CORDL_TYPE NonLazyBinder : public ::Zenject::IfNotBoundBinder {
public:
  // Declarations
  static inline ::Zenject::NonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method .ctor addr 0x2edb214 size 0x28 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method NonLazy addr 0x2edb23c size 0x20 virtual false final false
  inline ::Zenject::IfNotBoundBinder* NonLazy();

  /// @brief Method Lazy addr 0x2edb25c size 0x1c virtual false final false
  inline ::Zenject::IfNotBoundBinder* Lazy();

  // Ctor Parameters [CppParam { name: "", ty: "NonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonLazyBinder(NonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonLazyBinder(NonLazyBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonLazyBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NonLazyBinder, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NonLazyBinder*, "Zenject", "NonLazyBinder");
