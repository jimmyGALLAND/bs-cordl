#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder_1)
namespace Zenject {
template <typename TContract, typename TObj> class __FactoryFromBinder_1____c__DisplayClass3_0_1;
}
namespace Zenject {
struct InjectSources;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace Zenject {
template <typename TContract> class __FactoryFromBinder_1____c__DisplayClass8_0;
}
namespace Zenject {
template <typename TContract> class __FactoryFromBinder_1____c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class __FactoryFromBinder_1____c;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template <typename TContract, typename TSubFactory> class __FactoryFromBinder_1____c__5_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace Zenject {
class IProvider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1;
}
namespace Zenject {
template <typename TContract> class __FactoryFromBinder_1____c;
}
namespace Zenject {
template <typename TContract, typename TSubFactory> class __FactoryFromBinder_1____c__5_1;
}
namespace Zenject {
template <typename TContract, typename TObj> class __FactoryFromBinder_1____c__DisplayClass3_0_1;
}
namespace Zenject {
template <typename TContract> class __FactoryFromBinder_1____c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class __FactoryFromBinder_1____c__DisplayClass8_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c__5_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass3_0`1
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract, typename TObj>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15712))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10711))
// CS Name: ::FactoryFromBinder`1::<>c__DisplayClass3_0`1<TContract,TObj>*
class CORDL_TYPE __FactoryFromBinder_1____c__DisplayClass3_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_subIdentifier, put = __set_subIdentifier))::System::Object* subIdentifier;

  /// @brief Field method, offset 0x18, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::System::Func_2<TObj, TContract>* method;

  /// @brief Field source, offset 0x20, size 0x4
  __declspec(property(get = __get_source, put = __set_source))::Zenject::InjectSources source;

  constexpr ::System::Object*& __get_subIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_subIdentifier() const;

  constexpr void __set_subIdentifier(::System::Object* value);

  constexpr ::System::Func_2<TObj, TContract>*& __get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObj, TContract>*> const& __get_method() const;

  constexpr void __set_method(::System::Func_2<TObj, TContract>* value);

  constexpr ::Zenject::InjectSources& __get_source();

  constexpr ::Zenject::InjectSources const& __get_source() const;

  constexpr void __set_source(::Zenject::InjectSources value);

  static inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract, TObj>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <FromResolveGetter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::IProvider* _FromResolveGetter_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_1____c__DisplayClass3_0_1(__FactoryFromBinder_1____c__DisplayClass3_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass3_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_1____c__DisplayClass3_0_1(__FactoryFromBinder_1____c__DisplayClass3_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_1____c__DisplayClass3_0_1();

public:
  /// @brief Field subIdentifier, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___subIdentifier;

  /// @brief Field method, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TObj, TContract>* ___method;

  /// @brief Field source, offset: 0x20, size: 0x4, def value: None
  ::Zenject::InjectSources ___source;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10712))
// CS Name: ::FactoryFromBinder`1::<>c__DisplayClass4_0<TContract>*
class CORDL_TYPE __FactoryFromBinder_1____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::System::Func_2<::Zenject::DiContainer*, TContract>* method;

  constexpr ::System::Func_2<::Zenject::DiContainer*, TContract>*& __get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::DiContainer*, TContract>*> const& __get_method() const;

  constexpr void __set_method(::System::Func_2<::Zenject::DiContainer*, TContract>* value);

  static inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_1____c__DisplayClass4_0(__FactoryFromBinder_1____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_1____c__DisplayClass4_0(__FactoryFromBinder_1____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_1____c__DisplayClass4_0();

public:
  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::DiContainer*, TContract>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__5`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract, typename TSubFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10713))
// CS Name: ::FactoryFromBinder`1::<>c__5`1<TContract,TSubFactory>*
class CORDL_TYPE __FactoryFromBinder_1____c__5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder_1____c__5_1<TContract, TSubFactory>* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* __9__5_0;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder_1____c__5_1<TContract, TSubFactory>* value);

  static inline ::Zenject::__FactoryFromBinder_1____c__5_1<TContract, TSubFactory>* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* value);

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* getStaticF___9__5_0();

  static inline ::Zenject::__FactoryFromBinder_1____c__5_1<TContract, TSubFactory>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <FromFactory>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _FromFactory_b__5_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>* x);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_1____c__5_1(__FactoryFromBinder_1____c__5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_1____c__5_1(__FactoryFromBinder_1____c__5_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_1____c__5_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10714))
// CS Name: ::FactoryFromBinder`1::<>c__DisplayClass8_0<TContract>*
class CORDL_TYPE __FactoryFromBinder_1____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactoryFromBinder_1<TContract>* __4__this;

  /// @brief Field includeInactive, offset 0x18, size 0x1
  __declspec(property(get = __get_includeInactive, put = __set_includeInactive)) bool includeInactive;

  /// @brief Field <>9__1, offset 0x20, size 0x8
  __declspec(property(get = __get___9__1, put = __set___9__1))::System::Func_2<::UnityEngine::GameObject*, TContract>* __9__1;

  constexpr ::Zenject::FactoryFromBinder_1<TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryFromBinder_1<TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactoryFromBinder_1<TContract>* value);

  constexpr bool& __get_includeInactive();

  constexpr bool const& __get_includeInactive() const;

  constexpr void __set_includeInactive(bool value);

  constexpr ::System::Func_2<::UnityEngine::GameObject*, TContract>*& __get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::GameObject*, TContract>*> const& __get___9__1() const;

  constexpr void __set___9__1(::System::Func_2<::UnityEngine::GameObject*, TContract>* value);

  static inline ::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <FromComponentInHierarchy>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TContract _FromComponentInHierarchy_b__0(::Zenject::DiContainer* _);

  /// @brief Method <FromComponentInHierarchy>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TContract _FromComponentInHierarchy_b__1(::UnityEngine::GameObject* x);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_1____c__DisplayClass8_0(__FactoryFromBinder_1____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_1____c__DisplayClass8_0(__FactoryFromBinder_1____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_1____c__DisplayClass8_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinder_1<TContract>* _____4__this;

  /// @brief Field includeInactive, offset: 0x18, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::GameObject*, TContract>* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10715))
// CS Name: ::FactoryFromBinder`1::<>c<TContract>*
class CORDL_TYPE __FactoryFromBinder_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder_1____c<TContract>* __9;

  /// @brief Field <>9__8_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_2, put = setStaticF___9__8_2))::System::Func_2<TContract, bool>* __9__8_2;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder_1____c<TContract>* value);

  static inline ::Zenject::__FactoryFromBinder_1____c<TContract>* getStaticF___9();

  static inline void setStaticF___9__8_2(::System::Func_2<TContract, bool>* value);

  static inline ::System::Func_2<TContract, bool>* getStaticF___9__8_2();

  static inline ::Zenject::__FactoryFromBinder_1____c<TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <FromComponentInHierarchy>b__8_2 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool _FromComponentInHierarchy_b__8_2(TContract x);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_1____c(__FactoryFromBinder_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_1____c(__FactoryFromBinder_1____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_1____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactoryFromBinder`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10846))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10716))
// CS Name: ::Zenject::FactoryFromBinder`1<TContract>*
class CORDL_TYPE FactoryFromBinder_1 : public ::Zenject::FactoryFromBinderBase {
public:
  // Declarations
  using __c = ::Zenject::__FactoryFromBinder_1____c<TContract>;

  using __c__DisplayClass8_0 = ::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0<TContract>;

  template <typename TSubFactory> using __c__5_1 = ::Zenject::__FactoryFromBinder_1____c__5_1<TContract, TSubFactory>;

  using __c__DisplayClass4_0 = ::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0<TContract>;

  template <typename TObj> using __c__DisplayClass3_0_1 = ::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1<TContract, TObj>;

  static inline ::Zenject::FactoryFromBinder_1<TContract>* New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj> inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj> inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* subIdentifier, ::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj> inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* subIdentifier, ::System::Func_2<TObj, TContract>* method, ::Zenject::InjectSources source);

  /// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::DiContainer*, TContract>* method);

  /// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TSubFactory> inline ::Zenject::ArgConditionCopyNonLazyBinder* FromFactory();

  /// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::FactorySubContainerBinder_1<TContract>* FromSubContainerResolve();

  /// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::FactorySubContainerBinder_1<TContract>* FromSubContainerResolve(::System::Object* subIdentifier);

  /// @brief Method FromComponentInHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentInHierarchy(bool includeInactive);

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_1(FactoryFromBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_1(FactoryFromBinder_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1, "Zenject", "FactoryFromBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c, "Zenject", "FactoryFromBinder`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c__5_1, "Zenject", "FactoryFromBinder`1/<>c__5`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c__DisplayClass3_0_1, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass3_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c__DisplayClass4_0, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_1____c__DisplayClass8_0, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass8_0");
