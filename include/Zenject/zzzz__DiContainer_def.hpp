#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiContainer)
namespace Zenject {
template <typename TContract> class FactoryToChoiceIdBinder_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class CopyNonLazyBinder;
}
namespace Zenject {
class LazyInstanceInjector;
}
namespace Zenject {
template <typename TContract> class MemoryPoolIdInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
template <typename TContract> class __DiContainer____c__DisplayClass203_0_1;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class __DiContainer____c;
}
namespace Zenject {
class BindingCondition;
}
namespace UnityEngine {
struct Quaternion;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryToChoiceIdBinder_3;
}
namespace Zenject {
class IInstantiator;
}
namespace Zenject::Internal {
class IDecoratorProvider;
}
namespace Zenject {
template <typename TContract> class DecoratorToChoiceFromBinder_1;
}
namespace UnityEngine {
class Component;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class __DiContainer____c__DisplayClass178_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract> class FactoryToChoiceIdBinder_6;
}
namespace System::Collections {
class IList;
}
namespace UnityEngine {
struct Vector3;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class ConcreteIdBinderNonGeneric;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TContract> class FactoryToChoiceIdBinder_4;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class __DiContainer__ProviderInfo;
}
namespace System {
class Object;
}
namespace Zenject::Internal {
class SingletonMarkRegistry;
}
namespace Zenject {
class FromBinderNonGeneric;
}
namespace Zenject {
class __DiContainer___GetDependencyContracts_d__96;
}
namespace Zenject {
class IdScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace System {
class Type;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Zenject {
class ConcreteBinderNonGeneric;
}
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
template <typename TParam1, typename TContract> class FactoryToChoiceIdBinder_2;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactoryToChoiceIdBinder_5;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract> class FactoryToChoiceIdBinder_7;
}
namespace Zenject {
class IProvider;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
template <typename TContract> class ConcreteIdBinderGeneric_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
class FactoryToChoiceIdBinder_11;
}
namespace Zenject::Internal {
class LookupId;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class __DiContainer____c__DisplayClass86_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
struct BindingId;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class InjectableInfo;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class __DiContainer__ProviderInfo;
}
namespace Zenject {
class __DiContainer___GetDependencyContracts_d__96;
}
namespace Zenject {
class __DiContainer____c;
}
namespace Zenject {
class __DiContainer____c__DisplayClass178_0;
}
namespace Zenject {
template <typename TContract> class __DiContainer____c__DisplayClass203_0_1;
}
namespace Zenject {
class __DiContainer____c__DisplayClass86_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DiContainer);
MARK_REF_PTR_T(::Zenject::__DiContainer__ProviderInfo);
MARK_REF_PTR_T(::Zenject::__DiContainer___GetDependencyContracts_d__96);
MARK_REF_PTR_T(::Zenject::__DiContainer____c);
MARK_REF_PTR_T(::Zenject::__DiContainer____c__DisplayClass178_0);
MARK_GEN_REF_PTR_T(::Zenject::__DiContainer____c__DisplayClass203_0_1);
MARK_REF_PTR_T(::Zenject::__DiContainer____c__DisplayClass86_0);
// Type: ::ProviderInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11160))
// CS Name: ::DiContainer::ProviderInfo*
class CORDL_TYPE __DiContainer__ProviderInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Container, offset 0x10, size 0x8
  __declspec(property(get = __get_Container, put = __set_Container))::Zenject::DiContainer* Container;

  /// @brief Field NonLazy, offset 0x18, size 0x1
  __declspec(property(get = __get_NonLazy, put = __set_NonLazy)) bool NonLazy;

  /// @brief Field Provider, offset 0x20, size 0x8
  __declspec(property(get = __get_Provider, put = __set_Provider))::Zenject::IProvider* Provider;

  /// @brief Field Condition, offset 0x28, size 0x8
  __declspec(property(get = __get_Condition, put = __set_Condition))::Zenject::BindingCondition* Condition;

  constexpr ::Zenject::DiContainer*& __get_Container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get_Container() const;

  constexpr void __set_Container(::Zenject::DiContainer* value);

  constexpr bool& __get_NonLazy();

  constexpr bool const& __get_NonLazy() const;

  constexpr void __set_NonLazy(bool value);

  constexpr ::Zenject::IProvider*& __get_Provider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& __get_Provider() const;

  constexpr void __set_Provider(::Zenject::IProvider* value);

  constexpr ::Zenject::BindingCondition*& __get_Condition();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindingCondition*> const& __get_Condition() const;

  constexpr void __set_Condition(::Zenject::BindingCondition* value);

  static inline ::Zenject::__DiContainer__ProviderInfo* New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy, ::Zenject::DiContainer* container);

  /// @brief Method .ctor addr 0x2f02dc8 size 0x44 virtual false final false
  inline void _ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy, ::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2f02e0c size 0x1b0 virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f02fbc size 0x424 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer__ProviderInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer__ProviderInfo(__DiContainer__ProviderInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer__ProviderInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer__ProviderInfo(__DiContainer__ProviderInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer__ProviderInfo();

public:
  /// @brief Field Container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ___Container;

  /// @brief Field NonLazy, offset: 0x18, size: 0x1, def value: None
  bool ___NonLazy;

  /// @brief Field Provider, offset: 0x20, size: 0x8, def value: None
  ::Zenject::IProvider* ___Provider;

  /// @brief Field Condition, offset: 0x28, size: 0x8, def value: None
  ::Zenject::BindingCondition* ___Condition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer__ProviderInfo, 0x30>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11161))
// CS Name: ::DiContainer::<>c*
class CORDL_TYPE __DiContainer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__DiContainer____c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_0,
                             put = setStaticF___9__33_0))::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*,
                                                                          ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>* __9__33_0;

  /// @brief Field <>9__33_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_1, put = setStaticF___9__33_1))::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>* __9__33_1;

  /// @brief Field <>9__86_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__86_1, put = setStaticF___9__86_1))::System::Func_2<::System::Type*, bool>* __9__86_1;

  /// @brief Field <>9__97_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__97_0, put = setStaticF___9__97_0))::System::Func_2<::Zenject::TypeValuePair, ::StringW>* __9__97_0;

  /// @brief Field <>9__102_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__102_0, put = setStaticF___9__102_0))::System::Func_2<::Zenject::TypeValuePair, ::StringW>* __9__102_0;

  /// @brief Field <>9__197_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__197_0, put = setStaticF___9__197_0))::System::Func_2<::System::Type*, bool>* __9__197_0;

  /// @brief Field <>9__198_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__198_0, put = setStaticF___9__198_0))::System::Func_2<::System::Type*, bool>* __9__198_0;

  static inline void setStaticF___9(::Zenject::__DiContainer____c* value);

  static inline ::Zenject::__DiContainer____c* getStaticF___9();

  static inline void setStaticF___9__33_0(::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*,
                                                           ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>* value);

  static inline ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*,
                                 ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>*
  getStaticF___9__33_0();

  static inline void setStaticF___9__33_1(::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>* getStaticF___9__33_1();

  static inline void setStaticF___9__86_1(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__86_1();

  static inline void setStaticF___9__97_0(::System::Func_2<::Zenject::TypeValuePair, ::StringW>* value);

  static inline ::System::Func_2<::Zenject::TypeValuePair, ::StringW>* getStaticF___9__97_0();

  static inline void setStaticF___9__102_0(::System::Func_2<::Zenject::TypeValuePair, ::StringW>* value);

  static inline ::System::Func_2<::Zenject::TypeValuePair, ::StringW>* getStaticF___9__102_0();

  static inline void setStaticF___9__197_0(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__197_0();

  static inline void setStaticF___9__198_0(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__198_0();

  static inline ::Zenject::__DiContainer____c* New_ctor();

  /// @brief Method .ctor addr 0x2f03444 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_AllProviders>b__33_0 addr 0x2f0344c size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*
  _get_AllProviders_b__33_0(::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* x);

  /// @brief Method <get_AllProviders>b__33_1 addr 0x2f03454 size 0x18 virtual false final false
  inline ::Zenject::IProvider* _get_AllProviders_b__33_1(::Zenject::__DiContainer__ProviderInfo* x);

  /// @brief Method <ResolveTypeAll>b__86_1 addr 0x2f0346c size 0x5c virtual false final false
  inline bool _ResolveTypeAll_b__86_1(::System::Type* x);

  /// @brief Method <InstantiateInternal>b__97_0 addr 0x2f034c8 size 0x58 virtual false final false
  inline ::StringW _InstantiateInternal_b__97_0(::Zenject::TypeValuePair x);

  /// @brief Method <InjectExplicitInternal>b__102_0 addr 0x2f03520 size 0x58 virtual false final false
  inline ::StringW _InjectExplicitInternal_b__102_0(::Zenject::TypeValuePair x);

  /// @brief Method <BindInternal>b__197_0 addr 0x2f03578 size 0x78 virtual false final false
  inline bool _BindInternal_b__197_0(::System::Type* x);

  /// @brief Method <Bind>b__198_0 addr 0x2f035f0 size 0x78 virtual false final false
  inline bool _Bind_b__198_0(::System::Type* x);

  /// @brief Method __zenCreate addr 0x2f03668 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f036c4 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer____c(__DiContainer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer____c(__DiContainer____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass86_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11162))
// CS Name: ::DiContainer::<>c__DisplayClass86_0*
class CORDL_TYPE __DiContainer____c__DisplayClass86_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::Zenject::InjectContext* context;

  constexpr ::Zenject::InjectContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get_context() const;

  constexpr void __set_context(::Zenject::InjectContext* value);

  static inline ::Zenject::__DiContainer____c__DisplayClass86_0* New_ctor();

  /// @brief Method .ctor addr 0x2f03884 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ResolveTypeAll>b__0 addr 0x2f0388c size 0xb4 virtual false final false
  inline ::System::Type* _ResolveTypeAll_b__0(::Zenject::__DiContainer__ProviderInfo* x);

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass86_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer____c__DisplayClass86_0(__DiContainer____c__DisplayClass86_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass86_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer____c__DisplayClass86_0(__DiContainer____c__DisplayClass86_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer____c__DisplayClass86_0();

public:
  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer____c__DisplayClass86_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Type: ::<GetDependencyContracts>d__96
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11163))
// CS Name: ::DiContainer::<GetDependencyContracts>d__96*
class CORDL_TYPE __DiContainer___GetDependencyContracts_d__96 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Type* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::DiContainer* __4__this;

  /// @brief Field contract, offset 0x30, size 0x8
  __declspec(property(get = __get_contract, put = __set_contract))::System::Type* contract;

  /// @brief Field <>3__contract, offset 0x38, size 0x8
  __declspec(property(get = __get___3__contract, put = __set___3__contract))::System::Type* __3__contract;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Type*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Type* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::Zenject::DiContainer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::DiContainer* value);

  constexpr ::System::Type*& __get_contract();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_contract() const;

  constexpr void __set_contract(::System::Type* value);

  constexpr ::System::Type*& __get___3__contract();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get___3__contract() const;

  constexpr void __set___3__contract(::System::Type* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* value);

  static inline ::Zenject::__DiContainer___GetDependencyContracts_d__96* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2f03940 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2f03974 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2f03990 size 0x2fc virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2f03e60 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current addr 0x2f03f10 size 0x8 virtual true final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2f03f18 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2f03f58 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator addr 0x2f03f60 size 0xac virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2f0400c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer___GetDependencyContracts_d__96", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer___GetDependencyContracts_d__96(__DiContainer___GetDependencyContracts_d__96&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer___GetDependencyContracts_d__96", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer___GetDependencyContracts_d__96(__DiContainer___GetDependencyContracts_d__96 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer___GetDependencyContracts_d__96();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* _____4__this;

  /// @brief Field contract, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ___contract;

  /// @brief Field <>3__contract, offset: 0x38, size: 0x8, def value: None
  ::System::Type* _____3__contract;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer___GetDependencyContracts_d__96, 0x48>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass178_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11164))
// CS Name: ::DiContainer::<>c__DisplayClass178_0*
class CORDL_TYPE __DiContainer____c__DisplayClass178_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::DiContainer* __4__this;

  /// @brief Field contractType, offset 0x18, size 0x8
  __declspec(property(get = __get_contractType, put = __set_contractType))::System::Type* contractType;

  /// @brief Field identifier, offset 0x20, size 0x8
  __declspec(property(get = __get_identifier, put = __set_identifier))::System::Object* identifier;

  /// @brief Field concreteType, offset 0x28, size 0x8
  __declspec(property(get = __get_concreteType, put = __set_concreteType))::System::Type* concreteType;

  constexpr ::Zenject::DiContainer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::DiContainer* value);

  constexpr ::System::Type*& __get_contractType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_contractType() const;

  constexpr void __set_contractType(::System::Type* value);

  constexpr ::System::Object*& __get_identifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_identifier() const;

  constexpr void __set_identifier(::System::Object* value);

  constexpr ::System::Type*& __get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_concreteType() const;

  constexpr void __set_concreteType(::System::Type* value);

  static inline ::Zenject::__DiContainer____c__DisplayClass178_0* New_ctor();

  /// @brief Method .ctor addr 0x2f04010 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <UnbindId>b__0 addr 0x2f04018 size 0x140 virtual false final false
  inline bool _UnbindId_b__0(::Zenject::__DiContainer__ProviderInfo* x);

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass178_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer____c__DisplayClass178_0(__DiContainer____c__DisplayClass178_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass178_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer____c__DisplayClass178_0(__DiContainer____c__DisplayClass178_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer____c__DisplayClass178_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* _____4__this;

  /// @brief Field contractType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___contractType;

  /// @brief Field identifier, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___identifier;

  /// @brief Field concreteType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer____c__DisplayClass178_0, 0x30>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass203_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11165))
// CS Name: ::DiContainer::<>c__DisplayClass203_0`1<TContract>*
class CORDL_TYPE __DiContainer____c__DisplayClass203_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0x10, size 0x8
  __declspec(property(get = __get_instance, put = __set_instance)) TContract instance;

  constexpr TContract& __get_instance();

  constexpr TContract const& __get_instance() const;

  constexpr void __set_instance(TContract value);

  static inline ::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <BindInstance>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::IProvider* _BindInstance_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass203_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer____c__DisplayClass203_0_1(__DiContainer____c__DisplayClass203_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass203_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer____c__DisplayClass203_0_1(__DiContainer____c__DisplayClass203_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer____c__DisplayClass203_0_1();

public:
  /// @brief Field instance, offset: 0x10, size: 0x8, def value: None
  TContract ___instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::DiContainer
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 157, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11166))
// CS Name: ::Zenject::DiContainer*
class CORDL_TYPE DiContainer : public ::System::Object {
public:
  // Declarations
  template <typename TContract> using __c__DisplayClass203_0_1 = ::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>;

  using __c__DisplayClass178_0 = ::Zenject::__DiContainer____c__DisplayClass178_0;

  using _GetDependencyContracts_d__96 = ::Zenject::__DiContainer___GetDependencyContracts_d__96;

  using __c__DisplayClass86_0 = ::Zenject::__DiContainer____c__DisplayClass86_0;

  using __c = ::Zenject::__DiContainer____c;

  using ProviderInfo = ::Zenject::__DiContainer__ProviderInfo;

  /// @brief Field _decorators, offset 0x10, size 0x8
  __declspec(property(get = __get__decorators, put = __set__decorators))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* _decorators;

  /// @brief Field _providers, offset 0x18, size 0x8
  __declspec(
      property(get = __get__providers,
               put = __set__providers))::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>* _providers;

  /// @brief Field _containerLookups, offset 0x20, size 0x8
  __declspec(property(get = __get__containerLookups, put = __set__containerLookups))::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>,
                                                                                             ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> _containerLookups;

  /// @brief Field _resolvesInProgress, offset 0x28, size 0x8
  __declspec(property(get = __get__resolvesInProgress, put = __set__resolvesInProgress))::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* _resolvesInProgress;

  /// @brief Field _resolvesTwiceInProgress, offset 0x30, size 0x8
  __declspec(property(get = __get__resolvesTwiceInProgress, put = __set__resolvesTwiceInProgress))::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* _resolvesTwiceInProgress;

  /// @brief Field _lazyInjector, offset 0x38, size 0x8
  __declspec(property(get = __get__lazyInjector, put = __set__lazyInjector))::Zenject::LazyInstanceInjector* _lazyInjector;

  /// @brief Field _singletonMarkRegistry, offset 0x40, size 0x8
  __declspec(property(get = __get__singletonMarkRegistry, put = __set__singletonMarkRegistry))::Zenject::Internal::SingletonMarkRegistry* _singletonMarkRegistry;

  /// @brief Field _currentBindings, offset 0x48, size 0x8
  __declspec(property(get = __get__currentBindings, put = __set__currentBindings))::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* _currentBindings;

  /// @brief Field _childBindings, offset 0x50, size 0x8
  __declspec(property(get = __get__childBindings, put = __set__childBindings))::System::Collections::Generic::List_1<::Zenject::BindStatement*>* _childBindings;

  /// @brief Field _validatedTypes, offset 0x58, size 0x8
  __declspec(property(get = __get__validatedTypes, put = __set__validatedTypes))::System::Collections::Generic::HashSet_1<::System::Type*>* _validatedTypes;

  /// @brief Field _validationQueue, offset 0x60, size 0x8
  __declspec(property(get = __get__validationQueue, put = __set__validationQueue))::System::Collections::Generic::List_1<::Zenject::IValidatable*>* _validationQueue;

  /// @brief Field _contextTransform, offset 0x68, size 0x8
  __declspec(property(get = __get__contextTransform, put = __set__contextTransform))::UnityEngine::Transform* _contextTransform;

  /// @brief Field _hasLookedUpContextTransform, offset 0x70, size 0x1
  __declspec(property(get = __get__hasLookedUpContextTransform, put = __set__hasLookedUpContextTransform)) bool _hasLookedUpContextTransform;

  /// @brief Field _inheritedDefaultParent, offset 0x78, size 0x8
  __declspec(property(get = __get__inheritedDefaultParent, put = __set__inheritedDefaultParent))::UnityEngine::Transform* _inheritedDefaultParent;

  /// @brief Field _explicitDefaultParent, offset 0x80, size 0x8
  __declspec(property(get = __get__explicitDefaultParent, put = __set__explicitDefaultParent))::UnityEngine::Transform* _explicitDefaultParent;

  /// @brief Field _hasExplicitDefaultParent, offset 0x88, size 0x1
  __declspec(property(get = __get__hasExplicitDefaultParent, put = __set__hasExplicitDefaultParent)) bool _hasExplicitDefaultParent;

  /// @brief Field _settings, offset 0x90, size 0x8
  __declspec(property(get = __get__settings, put = __set__settings))::Zenject::ZenjectSettings* _settings;

  /// @brief Field _hasResolvedRoots, offset 0x98, size 0x1
  __declspec(property(get = __get__hasResolvedRoots, put = __set__hasResolvedRoots)) bool _hasResolvedRoots;

  /// @brief Field _isFinalizingBinding, offset 0x99, size 0x1
  __declspec(property(get = __get__isFinalizingBinding, put = __set__isFinalizingBinding)) bool _isFinalizingBinding;

  /// @brief Field _isValidating, offset 0x9a, size 0x1
  __declspec(property(get = __get__isValidating, put = __set__isValidating)) bool _isValidating;

  /// @brief Field _isInstalling, offset 0x9b, size 0x1
  __declspec(property(get = __get__isInstalling, put = __set__isInstalling)) bool _isInstalling;

  /// @brief Field <AssertOnNewGameObjects>k__BackingField, offset 0x9c, size 0x1
  __declspec(property(get = __get__AssertOnNewGameObjects_k__BackingField, put = __set__AssertOnNewGameObjects_k__BackingField)) bool _AssertOnNewGameObjects_k__BackingField;

  __declspec(property(get = get_Settings, put = set_Settings))::Zenject::ZenjectSettings* Settings;

  __declspec(property(get = get_SingletonMarkRegistry))::Zenject::Internal::SingletonMarkRegistry* SingletonMarkRegistry;

  __declspec(property(get = get_AllProviders))::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>* AllProviders;

  __declspec(property(get = get_ContextTransform))::UnityEngine::Transform* ContextTransform;

  __declspec(property(get = get_AssertOnNewGameObjects, put = set_AssertOnNewGameObjects)) bool AssertOnNewGameObjects;

  __declspec(property(get = get_InheritedDefaultParent))::UnityEngine::Transform* InheritedDefaultParent;

  __declspec(property(get = get_DefaultParent, put = set_DefaultParent))::UnityEngine::Transform* DefaultParent;

  __declspec(property(get = get_ParentContainers))::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> ParentContainers;

  __declspec(property(get = get_AncestorContainers))::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> AncestorContainers;

  __declspec(property(get = get_ChecksForCircularDependencies)) bool ChecksForCircularDependencies;

  __declspec(property(get = get_IsValidating)) bool IsValidating;

  __declspec(property(get = get_IsInstalling, put = set_IsInstalling)) bool IsInstalling;

  __declspec(property(get = get_AllContracts))::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>* AllContracts;

  /// @brief Convert operator to "::Zenject::IInstantiator"
  constexpr operator ::Zenject::IInstantiator*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>*& __get__decorators();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>*> const& __get__decorators() const;

  constexpr void __set__decorators(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>*& __get__providers();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>*> const&
  __get__providers() const;

  constexpr void __set__providers(::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>* value);

  constexpr ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*>& __get__containerLookups();

  constexpr ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> const&
  __get__containerLookups() const;

  constexpr void
  __set__containerLookups(::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> value);

  constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*& __get__resolvesInProgress();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*> const& __get__resolvesInProgress() const;

  constexpr void __set__resolvesInProgress(::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*& __get__resolvesTwiceInProgress();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*> const& __get__resolvesTwiceInProgress() const;

  constexpr void __set__resolvesTwiceInProgress(::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* value);

  constexpr ::Zenject::LazyInstanceInjector*& __get__lazyInjector();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::LazyInstanceInjector*> const& __get__lazyInjector() const;

  constexpr void __set__lazyInjector(::Zenject::LazyInstanceInjector* value);

  constexpr ::Zenject::Internal::SingletonMarkRegistry*& __get__singletonMarkRegistry();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::Internal::SingletonMarkRegistry*> const& __get__singletonMarkRegistry() const;

  constexpr void __set__singletonMarkRegistry(::Zenject::Internal::SingletonMarkRegistry* value);

  constexpr ::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>*& __get__currentBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>*> const& __get__currentBindings() const;

  constexpr void __set__currentBindings(::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::BindStatement*>*& __get__childBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::BindStatement*>*> const& __get__childBindings() const;

  constexpr void __set__childBindings(::System::Collections::Generic::List_1<::Zenject::BindStatement*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& __get__validatedTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> const& __get__validatedTypes() const;

  constexpr void __set__validatedTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::IValidatable*>*& __get__validationQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IValidatable*>*> const& __get__validationQueue() const;

  constexpr void __set__validationQueue(::System::Collections::Generic::List_1<::Zenject::IValidatable*>* value);

  constexpr ::UnityEngine::Transform*& __get__contextTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__contextTransform() const;

  constexpr void __set__contextTransform(::UnityEngine::Transform* value);

  constexpr bool& __get__hasLookedUpContextTransform();

  constexpr bool const& __get__hasLookedUpContextTransform() const;

  constexpr void __set__hasLookedUpContextTransform(bool value);

  constexpr ::UnityEngine::Transform*& __get__inheritedDefaultParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__inheritedDefaultParent() const;

  constexpr void __set__inheritedDefaultParent(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__explicitDefaultParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__explicitDefaultParent() const;

  constexpr void __set__explicitDefaultParent(::UnityEngine::Transform* value);

  constexpr bool& __get__hasExplicitDefaultParent();

  constexpr bool const& __get__hasExplicitDefaultParent() const;

  constexpr void __set__hasExplicitDefaultParent(bool value);

  constexpr ::Zenject::ZenjectSettings*& __get__settings();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSettings*> const& __get__settings() const;

  constexpr void __set__settings(::Zenject::ZenjectSettings* value);

  constexpr bool& __get__hasResolvedRoots();

  constexpr bool const& __get__hasResolvedRoots() const;

  constexpr void __set__hasResolvedRoots(bool value);

  constexpr bool& __get__isFinalizingBinding();

  constexpr bool const& __get__isFinalizingBinding() const;

  constexpr void __set__isFinalizingBinding(bool value);

  constexpr bool& __get__isValidating();

  constexpr bool const& __get__isValidating() const;

  constexpr void __set__isValidating(bool value);

  constexpr bool& __get__isInstalling();

  constexpr bool const& __get__isInstalling() const;

  constexpr void __set__isInstalling(bool value);

  constexpr bool& __get__AssertOnNewGameObjects_k__BackingField();

  constexpr bool const& __get__AssertOnNewGameObjects_k__BackingField() const;

  constexpr void __set__AssertOnNewGameObjects_k__BackingField(bool value);

  static inline ::Zenject::DiContainer* New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainersEnumerable, bool isValidating);

  /// @brief Method .ctor addr 0x2ef0420 size 0xa10 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainersEnumerable, bool isValidating);

  static inline ::Zenject::DiContainer* New_ctor(bool isValidating);

  /// @brief Method .ctor addr 0x2ef6d70 size 0x94 virtual false final false
  inline void _ctor(bool isValidating);

  static inline ::Zenject::DiContainer* New_ctor();

  /// @brief Method .ctor addr 0x2ef49ac size 0x88 virtual false final false
  inline void _ctor();

  static inline ::Zenject::DiContainer* New_ctor(::Zenject::DiContainer* parentContainer, bool isValidating);

  /// @brief Method .ctor addr 0x2ef6e04 size 0xa8 virtual false final false
  inline void _ctor(::Zenject::DiContainer* parentContainer, bool isValidating);

  static inline ::Zenject::DiContainer* New_ctor(::Zenject::DiContainer* parentContainer);

  /// @brief Method .ctor addr 0x2ef6eac size 0xa4 virtual false final false
  inline void _ctor(::Zenject::DiContainer* parentContainer);

  static inline ::Zenject::DiContainer* New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainers);

  /// @brief Method .ctor addr 0x2ef6f50 size 0x8 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainers);

  /// @brief Method get_Settings addr 0x2ef6f58 size 0x8 virtual false final false
  inline ::Zenject::ZenjectSettings* get_Settings();

  /// @brief Method set_Settings addr 0x2ef11a8 size 0x80 virtual false final false
  inline void set_Settings(::Zenject::ZenjectSettings* value);

  /// @brief Method get_SingletonMarkRegistry addr 0x2ef6f60 size 0x8 virtual false final false
  inline ::Zenject::Internal::SingletonMarkRegistry* get_SingletonMarkRegistry();

  /// @brief Method get_AllProviders addr 0x2ef6f68 size 0x200 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>* get_AllProviders();

  /// @brief Method InstallDefaultBindings addr 0x2ef66b0 size 0x22c virtual false final false
  inline void InstallDefaultBindings();

  /// @brief Method CreateLazyBinding addr 0x2ef7168 size 0x254 virtual false final false
  inline ::System::Object* CreateLazyBinding(::Zenject::InjectContext* context);

  /// @brief Method QueueForValidate addr 0x2ef73bc size 0x11c virtual false final false
  inline void QueueForValidate(::Zenject::IValidatable* validatable);

  /// @brief Method ShouldInheritBinding addr 0x2ef6c38 size 0xbc virtual false final false
  inline bool ShouldInheritBinding(::Zenject::BindStatement* binding, ::Zenject::DiContainer* ancestorContainer);

  /// @brief Method get_ContextTransform addr 0x2ef7504 size 0xb8 virtual false final false
  inline ::UnityEngine::Transform* get_ContextTransform();

  /// @brief Method get_AssertOnNewGameObjects addr 0x2ef75bc size 0x8 virtual false final false
  inline bool get_AssertOnNewGameObjects();

  /// @brief Method set_AssertOnNewGameObjects addr 0x2ef75c4 size 0xc virtual false final false
  inline void set_AssertOnNewGameObjects(bool value);

  /// @brief Method get_InheritedDefaultParent addr 0x2ef75d0 size 0x8 virtual false final false
  inline ::UnityEngine::Transform* get_InheritedDefaultParent();

  /// @brief Method get_DefaultParent addr 0x2ef75d8 size 0x8 virtual false final false
  inline ::UnityEngine::Transform* get_DefaultParent();

  /// @brief Method set_DefaultParent addr 0x2eeeecc size 0x10 virtual false final false
  inline void set_DefaultParent(::UnityEngine::Transform* value);

  /// @brief Method get_ParentContainers addr 0x2ef74d8 size 0x2c virtual false final false
  inline ::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> get_ParentContainers();

  /// @brief Method get_AncestorContainers addr 0x2ef75e0 size 0x2c virtual false final false
  inline ::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> get_AncestorContainers();

  /// @brief Method get_ChecksForCircularDependencies addr 0x2ef760c size 0x8 virtual false final false
  inline bool get_ChecksForCircularDependencies();

  /// @brief Method get_IsValidating addr 0x2ef7614 size 0x8 virtual false final false
  inline bool get_IsValidating();

  /// @brief Method get_IsInstalling addr 0x2ef761c size 0x8 virtual false final false
  inline bool get_IsInstalling();

  /// @brief Method set_IsInstalling addr 0x2ef7624 size 0xc virtual false final false
  inline void set_IsInstalling(bool value);

  /// @brief Method get_AllContracts addr 0x2ef7630 size 0x58 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>* get_AllContracts();

  /// @brief Method ResolveRoots addr 0x2eeec14 size 0x74 virtual false final false
  inline void ResolveRoots();

  /// @brief Method ResolveDependencyRoots addr 0x2ef7688 size 0x80c virtual false final false
  inline void ResolveDependencyRoots();

  /// @brief Method ValidateFullResolve addr 0x2ef8414 size 0x380 virtual false final false
  inline void ValidateFullResolve();

  /// @brief Method FlushValidationQueue addr 0x2ef7e94 size 0x220 virtual false final false
  inline void FlushValidationQueue();

  /// @brief Method CreateSubContainer addr 0x2eee5ac size 0x8 virtual false final false
  inline ::Zenject::DiContainer* CreateSubContainer();

  /// @brief Method QueueForInject addr 0x2eeea04 size 0x1c virtual false final false
  inline void QueueForInject(::System::Object* instance);

  /// @brief Method LazyInject addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T LazyInject(T instance);

  /// @brief Method CreateSubContainer addr 0x2ef88ec size 0xcc virtual false final false
  inline ::Zenject::DiContainer* CreateSubContainer(bool isValidating);

  /// @brief Method RegisterProvider addr 0x2ee5418 size 0x1b4 virtual false final false
  inline void RegisterProvider(::Zenject::BindingId bindingId, ::Zenject::BindingCondition* condition, ::Zenject::IProvider* provider, bool nonLazy);

  /// @brief Method GetProviderMatches addr 0x2ef89b8 size 0x284 virtual false final false
  inline void GetProviderMatches(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer);

  /// @brief Method TryGetUniqueProvider addr 0x2ef8d0c size 0x5c4 virtual false final false
  inline ::Zenject::__DiContainer__ProviderInfo* TryGetUniqueProvider(::Zenject::InjectContext* context);

  /// @brief Method FlattenInheritanceChain addr 0x2ef6a10 size 0x228 virtual false final false
  inline ::System::Collections::Generic::List_1<::Zenject::DiContainer*>* FlattenInheritanceChain();

  /// @brief Method GetLocalProviders addr 0x2ef933c size 0x11c virtual false final false
  inline void GetLocalProviders(::Zenject::BindingId bindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer);

  /// @brief Method GetProvidersForContract addr 0x2ef8c3c size 0xd0 virtual false final false
  inline void GetProvidersForContract(::Zenject::BindingId bindingId, ::Zenject::InjectSources sourceType, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer);

  /// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline void Install();

  /// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline void Install(::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs);

  /// @brief Method ResolveAll addr 0x2ef8794 size 0x158 virtual false final false
  inline ::System::Collections::IList* ResolveAll(::Zenject::InjectContext* context);

  /// @brief Method ResolveAll addr 0x2ef9458 size 0x700 virtual false final false
  inline void ResolveAll(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method CheckForInstallWarning addr 0x2ef9b58 size 0x30 virtual false final false
  inline void CheckForInstallWarning(::Zenject::InjectContext* context);

  /// @brief Method ResolveType addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::System::Type* ResolveType();

  /// @brief Method ResolveType addr 0x2ef9b88 size 0x1b0 virtual false final false
  inline ::System::Type* ResolveType(::System::Type* type);

  /// @brief Method ResolveType addr 0x2ef9d38 size 0x2a0 virtual false final false
  inline ::System::Type* ResolveType(::Zenject::InjectContext* context);

  /// @brief Method ResolveTypeAll addr 0x2ef9fd8 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypeAll(::System::Type* type);

  /// @brief Method ResolveTypeAll addr 0x2ef9fe0 size 0x1c0 virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypeAll(::System::Type* type, ::System::Object* identifier);

  /// @brief Method ResolveTypeAll addr 0x2efa1a0 size 0x37c virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypeAll(::Zenject::InjectContext* context);

  /// @brief Method Resolve addr 0x2efa51c size 0x1c0 virtual false final false
  inline ::System::Object* Resolve(::Zenject::BindingId id);

  /// @brief Method Resolve addr 0x2efa6dc size 0xc5c virtual false final false
  inline ::System::Object* Resolve(::Zenject::InjectContext* context);

  /// @brief Method SafeGetInstances addr 0x2ef80b4 size 0x360 virtual false final false
  inline void SafeGetInstances(::Zenject::__DiContainer__ProviderInfo* providerInfo, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* instances);

  /// @brief Method Decorate addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::Zenject::DecoratorToChoiceFromBinder_1<TContract>* Decorate();

  /// @brief Method GetDecoratedInstances addr 0x2efb338 size 0x114 virtual false final false
  inline void GetDecoratedInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method TryGetDecoratorProvider addr 0x2efb44c size 0xe0 virtual false final false
  inline ::Zenject::Internal::IDecoratorProvider* TryGetDecoratorProvider(::System::Type* contractType);

  /// @brief Method GetContainerHeirarchyDistance addr 0x2ef92d0 size 0x6c virtual false final false
  inline int32_t GetContainerHeirarchyDistance(::Zenject::DiContainer* container);

  /// @brief Method GetContainerHeirarchyDistance addr 0x2efb52c size 0x150 virtual false final false
  inline ::System::Nullable_1<int32_t> GetContainerHeirarchyDistance(::Zenject::DiContainer* container, int32_t depth);

  /// @brief Method GetDependencyContracts addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetDependencyContracts();

  /// @brief Method GetDependencyContracts addr 0x2efb67c size 0x78 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetDependencyContracts(::System::Type* contract);

  /// @brief Method InstantiateInternal addr 0x2efb6f4 size 0xb20 virtual false final false
  inline ::System::Object* InstantiateInternal(::System::Type* concreteType, bool autoInject, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                               ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier);

  /// @brief Method InjectExplicit addr 0x2efc3a8 size 0xf4 virtual false final false
  inline void InjectExplicit(::System::Object* injectable, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InjectExplicit addr 0x2efc214 size 0x194 virtual false final false
  inline void InjectExplicit(::System::Object* injectable, ::System::Type* injectableType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                             ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier);

  /// @brief Method CallInjectMethodsTopDown addr 0x2efc960 size 0x5fc virtual false final false
  inline void CallInjectMethodsTopDown(::System::Object* injectable, ::System::Type* injectableType, ::Zenject::InjectTypeInfo* typeInfo,
                                       ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier,
                                       bool isDryRun);

  /// @brief Method InjectMembersTopDown addr 0x2efcf5c size 0x318 virtual false final false
  inline void InjectMembersTopDown(::System::Object* injectable, ::System::Type* injectableType, ::Zenject::InjectTypeInfo* typeInfo,
                                   ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier, bool isDryRun);

  /// @brief Method InjectExplicitInternal addr 0x2efc49c size 0x4c4 virtual false final false
  inline void InjectExplicitInternal(::System::Object* injectable, ::System::Type* injectableType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                     ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier);

  /// @brief Method CreateAndParentPrefabResource addr 0x2efd274 size 0x134 virtual false final false
  inline ::UnityEngine::GameObject* CreateAndParentPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context,
                                                                  ByRef<bool> shouldMakeActive);

  /// @brief Method GetPrefabAsGameObject addr 0x2efd7dc size 0x11c virtual false final false
  inline ::UnityEngine::GameObject* GetPrefabAsGameObject(::UnityEngine::Object* prefab);

  /// @brief Method CreateAndParentPrefab addr 0x2efd3a8 size 0x434 virtual false final false
  inline ::UnityEngine::GameObject* CreateAndParentPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context,
                                                          ByRef<bool> shouldMakeActive);

  /// @brief Method CreateEmptyGameObject addr 0x2efde34 size 0x78 virtual true final true
  inline ::UnityEngine::GameObject* CreateEmptyGameObject(::StringW name);

  /// @brief Method CreateEmptyGameObject addr 0x2efdeac size 0x188 virtual false final false
  inline ::UnityEngine::GameObject* CreateEmptyGameObject(::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context);

  /// @brief Method GetTransformGroup addr 0x2efd8f8 size 0x53c virtual false final false
  inline ::UnityEngine::Transform* GetTransformGroup(::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context);

  /// @brief Method CreateTransformGroup addr 0x2efe034 size 0xc0 virtual false final false
  inline ::UnityEngine::GameObject* CreateTransformGroup(::StringW groupName);

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T Instantiate();

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T Instantiate(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method Instantiate addr 0x2eecdb0 size 0x64 virtual true final true
  inline ::System::Object* Instantiate(::System::Type* concreteType);

  /// @brief Method Instantiate addr 0x2efe0f4 size 0xa8 virtual true final true
  inline ::System::Object* Instantiate(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename TContract> inline TContract InstantiateComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method InstantiateComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename TContract> inline TContract InstantiateComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponent addr 0x2efe234 size 0x70 virtual true final true
  inline ::UnityEngine::Component* InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject);

  /// @brief Method InstantiateComponent addr 0x2efe2a4 size 0x38 virtual true final true
  inline ::UnityEngine::Component* InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                        ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiateComponentOnNewGameObject();

  /// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiateComponentOnNewGameObject(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiateComponentOnNewGameObject(::StringW gameObjectName);

  /// @brief Method InstantiateComponentOnNewGameObject addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiateComponentOnNewGameObject(::StringW gameObjectName, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefab addr 0x2efe3ac size 0x70 virtual true final true
  inline ::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::Object* prefab);

  /// @brief Method InstantiatePrefab addr 0x2efe4a0 size 0x7c virtual true final true
  inline ::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefab addr 0x2efe51c size 0x14c virtual true final true
  inline ::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefab addr 0x2efe41c size 0x84 virtual false final false
  inline ::UnityEngine::GameObject* InstantiatePrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method InstantiatePrefabResource addr 0x2efe81c size 0x70 virtual true final true
  inline ::UnityEngine::GameObject* InstantiatePrefabResource(::StringW resourcePath);

  /// @brief Method InstantiatePrefabResource addr 0x2efe9a8 size 0x7c virtual true final true
  inline ::UnityEngine::GameObject* InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResource addr 0x2efea24 size 0x14c virtual true final true
  inline ::UnityEngine::GameObject* InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResource addr 0x2efe88c size 0x11c virtual false final false
  inline ::UnityEngine::GameObject* InstantiatePrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* creationInfo);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform,
                                         ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent addr 0x2efeb70 size 0x9c virtual true final true
  inline ::System::Object* InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                         ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent addr 0x2efec0c size 0x48 virtual false final false
  inline ::System::Object* InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs,
                                                         ::Zenject::GameObjectCreationParameters* creationInfo);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform,
                                                 ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent addr 0x2efed00 size 0xfc virtual true final true
  inline ::System::Object* InstantiatePrefabResourceForComponent(::System::Type* concreteType, ::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                 ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiateScriptableObjectResource(::StringW resourcePath);

  /// @brief Method InstantiateScriptableObjectResource addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T InstantiateScriptableObjectResource(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateScriptableObjectResource addr 0x2efeea8 size 0x6c virtual true final true
  inline ::System::Object* InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath);

  /// @brief Method InstantiateScriptableObjectResource addr 0x2efef14 size 0x80 virtual true final true
  inline ::System::Object* InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                               ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InjectGameObject addr 0x2efe668 size 0x1b4 virtual false final false
  inline void InjectGameObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method InjectGameObjectForComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method InjectGameObjectForComponent addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InjectGameObjectForComponent addr 0x2eff0d8 size 0xb4 virtual false final false
  inline ::System::Object* InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject, ::System::Type* componentType,
                                                        ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InjectGameObjectForComponentExplicit addr 0x2eff18c size 0x3ec virtual false final false
  inline ::UnityEngine::Component* InjectGameObjectForComponentExplicit(::UnityEngine::GameObject* gameObject, ::System::Type* componentType,
                                                                        ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                                        ::System::Object* concreteIdentifier);

  /// @brief Method Inject addr 0x2eece14 size 0x68 virtual false final false
  inline void Inject(::System::Object* injectable);

  /// @brief Method Inject addr 0x2eff578 size 0x30 virtual false final false
  inline void Inject(::System::Object* injectable, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method Resolve addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline TContract Resolve();

  /// @brief Method Resolve addr 0x2eff5a8 size 0x8 virtual false final false
  inline ::System::Object* Resolve(::System::Type* contractType);

  /// @brief Method ResolveId addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline TContract ResolveId(::System::Object* identifier);

  /// @brief Method ResolveId addr 0x2eff5b0 size 0x1c0 virtual false final false
  inline ::System::Object* ResolveId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method TryResolve addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline TContract TryResolve();

  /// @brief Method TryResolve addr 0x2eff770 size 0x8 virtual false final false
  inline ::System::Object* TryResolve(::System::Type* contractType);

  /// @brief Method TryResolveId addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline TContract TryResolveId(::System::Object* identifier);

  /// @brief Method TryResolveId addr 0x2eff778 size 0x1c8 virtual false final false
  inline ::System::Object* TryResolveId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method ResolveAll addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::System::Collections::Generic::List_1<TContract>* ResolveAll();

  /// @brief Method ResolveAll addr 0x2eff940 size 0x8 virtual false final false
  inline ::System::Collections::IList* ResolveAll(::System::Type* contractType);

  /// @brief Method ResolveIdAll addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::System::Collections::Generic::List_1<TContract>* ResolveIdAll(::System::Object* identifier);

  /// @brief Method ResolveIdAll addr 0x2eff948 size 0x1c8 virtual false final false
  inline ::System::Collections::IList* ResolveIdAll(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method UnbindAll addr 0x2effb10 size 0x58 virtual false final false
  inline void UnbindAll();

  /// @brief Method Unbind addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline bool Unbind();

  /// @brief Method Unbind addr 0x2effb68 size 0x8 virtual false final false
  inline bool Unbind(::System::Type* contractType);

  /// @brief Method UnbindId addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline bool UnbindId(::System::Object* identifier);

  /// @brief Method UnbindId addr 0x2effb70 size 0x84 virtual false final false
  inline bool UnbindId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method UnbindInterfacesTo addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TConcrete> inline void UnbindInterfacesTo();

  /// @brief Method UnbindInterfacesTo addr 0x2effbf4 size 0xbc virtual false final false
  inline void UnbindInterfacesTo(::System::Type* concreteType);

  /// @brief Method Unbind addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract, typename TConcrete> inline bool Unbind();

  /// @brief Method Unbind addr 0x2effcb0 size 0x8 virtual false final false
  inline bool Unbind(::System::Type* contractType, ::System::Type* concreteType);

  /// @brief Method UnbindId addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract, typename TConcrete> inline bool UnbindId(::System::Object* identifier);

  /// @brief Method UnbindId addr 0x2effcb8 size 0x294 virtual false final false
  inline bool UnbindId(::System::Type* contractType, ::System::Type* concreteType, ::System::Object* identifier);

  /// @brief Method HasBinding addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline bool HasBinding();

  /// @brief Method HasBinding addr 0x2efff4c size 0xc virtual false final false
  inline bool HasBinding(::System::Type* contractType);

  /// @brief Method HasBindingId addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline bool HasBindingId(::System::Object* identifier);

  /// @brief Method HasBindingId addr 0x2ee5408 size 0x8 virtual false final false
  inline bool HasBindingId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method HasBindingId addr 0x2efff58 size 0x1d0 virtual false final false
  inline bool HasBindingId(::System::Type* contractType, ::System::Object* identifier, ::Zenject::InjectSources sourceType);

  /// @brief Method HasBinding addr 0x2f00128 size 0x16c virtual false final false
  inline bool HasBinding(::Zenject::InjectContext* context);

  /// @brief Method FlushBindings addr 0x2ef68dc size 0x134 virtual false final false
  inline void FlushBindings();

  /// @brief Method FinalizeBinding addr 0x2ef6cf4 size 0x7c virtual false final false
  inline void FinalizeBinding(::Zenject::BindStatement* binding);

  /// @brief Method StartBinding addr 0x2f00294 size 0xd4 virtual false final false
  inline ::Zenject::BindStatement* StartBinding(bool flush);

  /// @brief Method Rebind addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Rebind();

  /// @brief Method RebindId addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* RebindId(::System::Object* identifier);

  /// @brief Method Rebind addr 0x2f00368 size 0x8 virtual false final false
  inline ::Zenject::ConcreteBinderNonGeneric* Rebind(::System::Type* contractType);

  /// @brief Method RebindId addr 0x2f00370 size 0xc4 virtual false final false
  inline ::Zenject::ConcreteBinderNonGeneric* RebindId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method Bind addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Bind();

  /// @brief Method BindNoFlush addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* BindNoFlush();

  /// @brief Method Bind addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Bind(::Zenject::BindStatement* bindStatement);

  /// @brief Method Bind addr 0x2eed934 size 0x8c virtual false final false
  inline ::Zenject::ConcreteIdBinderNonGeneric* Bind(::ArrayW<::System::Type*, ::Array<::System::Type*>*> contractTypes);

  /// @brief Method Bind addr 0x2f005a8 size 0x90 virtual false final false
  inline ::Zenject::ConcreteIdBinderNonGeneric* Bind(::System::Collections::Generic::IEnumerable_1<::System::Type*>* contractTypes);

  /// @brief Method BindInternal addr 0x2f00434 size 0x174 virtual false final false
  inline ::Zenject::ConcreteIdBinderNonGeneric* BindInternal(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindingFinalizer);

  /// @brief Method Bind addr 0x2f00638 size 0x238 virtual false final false
  inline ::Zenject::ConcreteIdBinderNonGeneric* Bind(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator);

  /// @brief Method BindInterfacesTo addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::FromBinderNonGeneric* BindInterfacesTo();

  /// @brief Method BindInterfacesTo addr 0x2f00870 size 0x1c8 virtual false final false
  inline ::Zenject::FromBinderNonGeneric* BindInterfacesTo(::System::Type* type);

  /// @brief Method BindInterfacesAndSelfTo addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::FromBinderNonGeneric* BindInterfacesAndSelfTo();

  /// @brief Method BindInterfacesAndSelfTo addr 0x2f00a38 size 0x1b8 virtual false final false
  inline ::Zenject::FromBinderNonGeneric* BindInterfacesAndSelfTo(::System::Type* type);

  /// @brief Method BindInstance addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder* BindInstance(TContract instance);

  /// @brief Method BindInstances addr 0x2f00bf0 size 0x140 virtual false final false
  inline void BindInstances(::ArrayW<::System::Object*, ::Array<::System::Object*>*> instances);

  /// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract, typename TFactoryContract, typename TFactoryConcrete> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* BindFactoryInternal();

  /// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* BindIFactory();

  /// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract, typename TFactoryConcrete, typename TFactoryContract> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* BindFactoryCustomInterface();

  /// @brief Method BindMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TItemContract> inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPool();

  /// @brief Method BindMemoryPool addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TItemContract, typename TPool> inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPool();

  /// @brief Method BindMemoryPoolCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
  inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPoolCustomInterface(bool includeConcreteType);

  /// @brief Method BindMemoryPoolCustomInterfaceNoFlush addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
  inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPoolCustomInterfaceNoFlush(bool includeConcreteType);

  /// @brief Method BindMemoryPoolCustomInterfaceInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
  inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPoolCustomInterfaceInternal(bool includeConcreteType, ::Zenject::BindStatement* statement);

  /// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TContract, typename TFactoryContract, typename TFactoryConcrete> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* BindFactoryInternal();

  /// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* BindIFactory();

  /// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TContract, typename TFactoryConcrete, typename TFactoryContract> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* BindFactoryInternal();

  /// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* BindIFactory();

  /// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* BindFactoryInternal();

  /// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* BindIFactory();

  /// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* BindFactoryInternal();

  /// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* BindIFactory();

  /// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* BindFactoryInternal();

  /// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* BindIFactory();

  /// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* BindFactoryInternal();

  /// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
  inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* BindIFactory();

  /// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryInternal addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
            typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* BindFactoryInternal();

  /// @brief Method BindIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
            typename TContract>
  inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* BindIFactory();

  /// @brief Method BindFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
            typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
            typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* BindFactoryCustomInterface();

  /// @brief Method InstantiateExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T InstantiateExplicit(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiateExplicit addr 0x2efe19c size 0x98 virtual false final false
  inline ::System::Object* InstantiateExplicit(::System::Type* concreteType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiateExplicit addr 0x2f00d30 size 0x108 virtual false final false
  inline ::System::Object* InstantiateExplicit(::System::Type* concreteType, bool autoInject, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                               ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier);

  /// @brief Method InstantiateComponentExplicit addr 0x2efe2dc size 0xd0 virtual false final false
  inline ::UnityEngine::Component* InstantiateComponentExplicit(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                                ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiateScriptableObjectResourceExplicit addr 0x2efef94 size 0x144 virtual false final false
  inline ::System::Object* InstantiateScriptableObjectResourceExplicit(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                                       ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponentExplicit addr 0x2efedfc size 0xac virtual false final false
  inline ::System::Object* InstantiatePrefabResourceForComponentExplicit(::System::Type* componentType, ::StringW resourcePath,
                                                                         ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                         ::Zenject::GameObjectCreationParameters* creationInfo);

  /// @brief Method InstantiatePrefabResourceForComponentExplicit addr 0x2f00e38 size 0x14c virtual false final false
  inline ::System::Object* InstantiatePrefabResourceForComponentExplicit(::System::Type* componentType, ::StringW resourcePath,
                                                                         ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                                         ::System::Object* concreteIdentifier, ::Zenject::GameObjectCreationParameters* creationInfo);

  /// @brief Method InstantiatePrefabForComponentExplicit addr 0x2f0111c size 0x88 virtual false final false
  inline ::System::Object* InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiatePrefabForComponentExplicit addr 0x2efec54 size 0xac virtual false final false
  inline ::System::Object* InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                 ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method InstantiatePrefabForComponentExplicit addr 0x2f00f84 size 0x198 virtual false final false
  inline ::System::Object* InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                                 ::System::Object* concreteIdentifier, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method BindExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void BindExecutionOrder(int32_t order);

  /// @brief Method BindExecutionOrder addr 0x2f011a4 size 0x370 virtual false final false
  inline void BindExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindTickableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindTickableExecutionOrder(int32_t order);

  /// @brief Method BindTickableExecutionOrder addr 0x2f01514 size 0x118 virtual false final false
  inline ::Zenject::CopyNonLazyBinder* BindTickableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindInitializableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindInitializableExecutionOrder(int32_t order);

  /// @brief Method BindInitializableExecutionOrder addr 0x2f0162c size 0x118 virtual false final false
  inline ::Zenject::CopyNonLazyBinder* BindInitializableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindDisposableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindDisposableExecutionOrder(int32_t order);

  /// @brief Method BindLateDisposableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindLateDisposableExecutionOrder(int32_t order);

  /// @brief Method BindDisposableExecutionOrder addr 0x2f01744 size 0x118 virtual false final false
  inline ::Zenject::CopyNonLazyBinder* BindDisposableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindLateDisposableExecutionOrder addr 0x2f0185c size 0x13c virtual false final false
  inline ::Zenject::CopyNonLazyBinder* BindLateDisposableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindFixedTickableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindFixedTickableExecutionOrder(int32_t order);

  /// @brief Method BindFixedTickableExecutionOrder addr 0x2f01998 size 0x178 virtual false final false
  inline ::Zenject::CopyNonLazyBinder* BindFixedTickableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindLateTickableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindLateTickableExecutionOrder(int32_t order);

  /// @brief Method BindLateTickableExecutionOrder addr 0x2f01b10 size 0x178 virtual false final false
  inline ::Zenject::CopyNonLazyBinder* BindLateTickableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindPoolableExecutionOrder addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindPoolableExecutionOrder(int32_t order);

  /// @brief Method BindPoolableExecutionOrder addr 0x2f01c88 size 0x1140 virtual false final false
  inline ::Zenject::CopyNonLazyBinder* BindPoolableExecutionOrder(::System::Type* type, int32_t order);

  // Ctor Parameters [CppParam { name: "", ty: "DiContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiContainer(DiContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiContainer(DiContainer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiContainer();

public:
  /// @brief Field _decorators, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* ____decorators;

  /// @brief Field _providers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>* ____providers;

  /// @brief Field _containerLookups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> ____containerLookups;

  /// @brief Field _resolvesInProgress, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* ____resolvesInProgress;

  /// @brief Field _resolvesTwiceInProgress, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* ____resolvesTwiceInProgress;

  /// @brief Field _lazyInjector, offset: 0x38, size: 0x8, def value: None
  ::Zenject::LazyInstanceInjector* ____lazyInjector;

  /// @brief Field _singletonMarkRegistry, offset: 0x40, size: 0x8, def value: None
  ::Zenject::Internal::SingletonMarkRegistry* ____singletonMarkRegistry;

  /// @brief Field _currentBindings, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* ____currentBindings;

  /// @brief Field _childBindings, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::BindStatement*>* ____childBindings;

  /// @brief Field _validatedTypes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Type*>* ____validatedTypes;

  /// @brief Field _validationQueue, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IValidatable*>* ____validationQueue;

  /// @brief Field _contextTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ____contextTransform;

  /// @brief Field _hasLookedUpContextTransform, offset: 0x70, size: 0x1, def value: None
  bool ____hasLookedUpContextTransform;

  /// @brief Field _inheritedDefaultParent, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Transform* ____inheritedDefaultParent;

  /// @brief Field _explicitDefaultParent, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Transform* ____explicitDefaultParent;

  /// @brief Field _hasExplicitDefaultParent, offset: 0x88, size: 0x1, def value: None
  bool ____hasExplicitDefaultParent;

  /// @brief Field _settings, offset: 0x90, size: 0x8, def value: None
  ::Zenject::ZenjectSettings* ____settings;

  /// @brief Field _hasResolvedRoots, offset: 0x98, size: 0x1, def value: None
  bool ____hasResolvedRoots;

  /// @brief Field _isFinalizingBinding, offset: 0x99, size: 0x1, def value: None
  bool ____isFinalizingBinding;

  /// @brief Field _isValidating, offset: 0x9a, size: 0x1, def value: None
  bool ____isValidating;

  /// @brief Field _isInstalling, offset: 0x9b, size: 0x1, def value: None
  bool ____isInstalling;

  /// @brief Field <AssertOnNewGameObjects>k__BackingField, offset: 0x9c, size: 0x1, def value: None
  bool ____AssertOnNewGameObjects_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DiContainer, 0xa0>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DiContainer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DiContainer*, "Zenject", "DiContainer");
NEED_NO_BOX(::Zenject::__DiContainer__ProviderInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer__ProviderInfo*, "Zenject", "DiContainer/ProviderInfo");
NEED_NO_BOX(::Zenject::__DiContainer___GetDependencyContracts_d__96);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer___GetDependencyContracts_d__96*, "Zenject", "DiContainer/<GetDependencyContracts>d__96");
NEED_NO_BOX(::Zenject::__DiContainer____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer____c*, "Zenject", "DiContainer/<>c");
NEED_NO_BOX(::Zenject::__DiContainer____c__DisplayClass178_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer____c__DisplayClass178_0*, "Zenject", "DiContainer/<>c__DisplayClass178_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__DiContainer____c__DisplayClass203_0_1, "Zenject", "DiContainer/<>c__DisplayClass203_0`1");
NEED_NO_BOX(::Zenject::__DiContainer____c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer____c__DisplayClass86_0*, "Zenject", "DiContainer/<>c__DisplayClass86_0");
