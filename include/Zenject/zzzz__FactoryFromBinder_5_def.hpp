#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder_5)
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TSubFactory> class __FactoryFromBinder_5____c__2_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult> class Func_6;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactoryFromBinder_5____c__DisplayClass1_0;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> class IFactory_5;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IProvider;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactoryFromBinder_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TSubFactory> class __FactoryFromBinder_5____c__2_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactoryFromBinder_5____c__DisplayClass1_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_5);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_5____c__2_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactoryFromBinder_5____c__DisplayClass1_0);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10754))
// CS Name: ::FactoryFromBinder`5::<>c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE __FactoryFromBinder_5____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>* method;

  constexpr ::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>*& __get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>*> const& __get_method() const;

  constexpr void __set_method(::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>* value);

  static inline ::Zenject::__FactoryFromBinder_5____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <FromMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_5____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_5____c__DisplayClass1_0(__FactoryFromBinder_5____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_5____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_5____c__DisplayClass1_0(__FactoryFromBinder_5____c__DisplayClass1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_5____c__DisplayClass1_0();

public:
  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__2`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TSubFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10755))
// CS Name: ::FactoryFromBinder`5::<>c__2`1<TParam1,TParam2,TParam3,TParam4,TContract,TSubFactory>*
class CORDL_TYPE __FactoryFromBinder_5____c__2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FactoryFromBinder_5____c__2_1<TParam1, TParam2, TParam3, TParam4, TContract, TSubFactory>* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0,
                             put = setStaticF___9__2_0))::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>*>* __9__2_0;

  static inline void setStaticF___9(::Zenject::__FactoryFromBinder_5____c__2_1<TParam1, TParam2, TParam3, TParam4, TContract, TSubFactory>* value);

  static inline ::Zenject::__FactoryFromBinder_5____c__2_1<TParam1, TParam2, TParam3, TParam4, TContract, TSubFactory>* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>*>* value);

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>*>* getStaticF___9__2_0();

  static inline ::Zenject::__FactoryFromBinder_5____c__2_1<TParam1, TParam2, TParam3, TParam4, TContract, TSubFactory>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <FromFactory>b__2_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _FromFactory_b__2_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>* x);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_5____c__2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactoryFromBinder_5____c__2_1(__FactoryFromBinder_5____c__2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactoryFromBinder_5____c__2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactoryFromBinder_5____c__2_1(__FactoryFromBinder_5____c__2_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactoryFromBinder_5____c__2_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactoryFromBinder`5
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10846))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10756))
// CS Name: ::Zenject::FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE FactoryFromBinder_5 : public ::Zenject::FactoryFromBinderBase {
public:
  // Declarations
  template <typename TSubFactory> using __c__2_1 = ::Zenject::__FactoryFromBinder_5____c__2_1<TParam1, TParam2, TParam3, TParam4, TContract, TSubFactory>;

  using __c__DisplayClass1_0 = ::Zenject::__FactoryFromBinder_5____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  static inline ::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                                        ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromMethod(::System::Func_6<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>* method);

  /// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TSubFactory> inline ::Zenject::ConditionCopyNonLazyBinder* FromFactory();

  /// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* FromSubContainerResolve();

  /// @brief Method FromSubContainerResolve addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* FromSubContainerResolve(::System::Object* subIdentifier);

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_5(FactoryFromBinder_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_5(FactoryFromBinder_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_5, "Zenject", "FactoryFromBinder`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_5____c__2_1, "Zenject", "FactoryFromBinder`5/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactoryFromBinder_5____c__DisplayClass1_0, "Zenject", "FactoryFromBinder`5/<>c__DisplayClass1_0");
