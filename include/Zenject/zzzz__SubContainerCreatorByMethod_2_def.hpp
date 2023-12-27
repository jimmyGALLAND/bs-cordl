#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod_2)
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2> class SubContainerCreatorByMethod_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByMethod_2);
// Type: Zenject::SubContainerCreatorByMethod`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11246))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11249))
// CS Name: ::Zenject::SubContainerCreatorByMethod`2<TParam1,TParam2>*
class CORDL_TYPE SubContainerCreatorByMethod_2 : public ::Zenject::SubContainerCreatorByMethodBase {
public:
  // Declarations
  /// @brief Field _installMethod, offset 0x20, size 0x8
  __declspec(property(get = __get__installMethod, put = __set__installMethod))::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* _installMethod;

  constexpr ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*& __get__installMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>*> const& __get__installMethod() const;

  constexpr void __set__installMethod(::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* value);

  static inline ::Zenject::SubContainerCreatorByMethod_2<TParam1, TParam2>* New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                                     ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installMethod);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* installMethod);

  /// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByMethod_2();

public:
  /// @brief Field _installMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_3<::Zenject::DiContainer*, TParam1, TParam2>* ____installMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_2, "Zenject", "SubContainerCreatorByMethod`2");
