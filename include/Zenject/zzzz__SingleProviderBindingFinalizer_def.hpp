#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(SingleProviderBindingFinalizer)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SingleProviderBindingFinalizer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SingleProviderBindingFinalizer);
// Type: Zenject::SingleProviderBindingFinalizer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10970))
// CS Name: ::Zenject::SingleProviderBindingFinalizer*
class CORDL_TYPE SingleProviderBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  /// @brief Field _providerFactory, offset 0x18, size 0x8
  __declspec(property(get = __get__providerFactory, put = __set__providerFactory))::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* _providerFactory;

  constexpr ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*& __get__providerFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*> const& __get__providerFactory() const;

  constexpr void __set__providerFactory(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value);

  static inline ::Zenject::SingleProviderBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method .ctor addr 0x2ee674c size 0x2c virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method OnFinalizeBinding addr 0x2ee6778 size 0xc4 virtual true final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "SingleProviderBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleProviderBindingFinalizer(SingleProviderBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleProviderBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleProviderBindingFinalizer(SingleProviderBindingFinalizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleProviderBindingFinalizer();

public:
  /// @brief Field _providerFactory, offset: 0x18, size: 0x8, def value: None
  ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* ____providerFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SingleProviderBindingFinalizer, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SingleProviderBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SingleProviderBindingFinalizer*, "Zenject", "SingleProviderBindingFinalizer");
