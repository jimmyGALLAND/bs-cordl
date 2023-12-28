#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MethodProviderMultiple_1)
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace Zenject {
template <typename TReturn> class MethodProviderMultiple_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProviderMultiple_1);
// Type: Zenject::MethodProviderMultiple`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TReturn>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11208))
// CS Name: ::Zenject::MethodProviderMultiple`1<TReturn>*
class CORDL_TYPE MethodProviderMultiple_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _method, offset 0x18, size 0x8
  __declspec(property(get = __get__method, put = __set__method))::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>* _method;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>*& __get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>*> const& __get__method() const;

  constexpr void __set__method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>* value);

  static inline ::Zenject::MethodProviderMultiple_1<TReturn>* New_ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>* method,
                                                                       ::Zenject::DiContainer* container);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>* method, ::Zenject::DiContainer* container);

  /// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodProviderMultiple_1(MethodProviderMultiple_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodProviderMultiple_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodProviderMultiple_1(MethodProviderMultiple_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodProviderMultiple_1();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _method, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderMultiple_1, "Zenject", "MethodProviderMultiple`1");
