#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
CORDL_MODULE_EXPORT(DeclareSignalAsyncTickPriorityCopyBinder)
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
class SignalTickPriorityCopyBinder;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Forward declare root types
namespace Zenject {
class DeclareSignalAsyncTickPriorityCopyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DeclareSignalAsyncTickPriorityCopyBinder);
// Type: Zenject::DeclareSignalAsyncTickPriorityCopyBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10657))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10650))
// CS Name: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*
class CORDL_TYPE DeclareSignalAsyncTickPriorityCopyBinder : public ::Zenject::SignalTickPriorityCopyBinder {
public:
  // Declarations
  static inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method .ctor addr 0x2ec22c0 size 0x24 virtual false final false
  inline void _ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo);

  /// @brief Method RunAsync addr 0x2ec2308 size 0x20 virtual false final false
  inline ::Zenject::SignalTickPriorityCopyBinder* RunAsync();

  /// @brief Method RunSync addr 0x2ec2328 size 0x1c virtual false final false
  inline ::Zenject::SignalCopyBinder* RunSync();

  // Ctor Parameters [CppParam { name: "", ty: "DeclareSignalAsyncTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeclareSignalAsyncTickPriorityCopyBinder(DeclareSignalAsyncTickPriorityCopyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeclareSignalAsyncTickPriorityCopyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeclareSignalAsyncTickPriorityCopyBinder(DeclareSignalAsyncTickPriorityCopyBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeclareSignalAsyncTickPriorityCopyBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DeclareSignalAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalAsyncTickPriorityCopyBinder");
