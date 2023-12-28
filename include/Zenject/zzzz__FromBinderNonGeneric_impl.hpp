#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FromBinder_impl.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TConcrete, typename TFactory>
inline void Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::setStaticF___9(::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>::get>(
      std::forward<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>(value));
}
template <typename TConcrete, typename TFactory>
inline ::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>* Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>::get>();
}
template <typename TConcrete, typename TFactory>
inline void Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::setStaticF___9__1_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>::get>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>*>(value));
}
template <typename TConcrete, typename TFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>* Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>::get>();
}
template <typename TConcrete, typename TFactory> inline ::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>* Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>());
}
template <typename TConcrete, typename TFactory> inline void Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TConcrete, typename TFactory>
inline void Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::_FromFactory_b__1_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>::get(), "<FromFactory>b__1_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TConcrete, typename TFactory>
inline ::System::Object* Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TConcrete, typename TFactory> inline ::Zenject::InjectTypeInfo* Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TConcrete, typename TFactory> constexpr ::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>::__FromBinderNonGeneric____c__1_2() {}
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::FromBinderNonGeneric::*)(::Zenject::DiContainer*, ::Zenject::BindInfo*, ::Zenject::BindStatement*)>(
    &::Zenject::FromBinderNonGeneric::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ec6c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric.FromInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinderNonGeneric::*)(::System::Object*)>(
    &::Zenject::FromBinderNonGeneric::FromInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2eda054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromInstance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric.FromComponentsInChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinderNonGeneric::*)(::System::Func_2<::UnityEngine::Component*, bool>*, bool)>(&::Zenject::FromBinderNonGeneric::FromComponentsInChildren)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2eda058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromComponentsInChildren", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Component*, bool>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric.FromComponentsInChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinderNonGeneric::*)(bool, ::System::Func_2<::UnityEngine::Component*, bool>*, bool)>(&::Zenject::FromBinderNonGeneric::FromComponentsInChildren)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2eda06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromComponentsInChildren", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Component*, bool>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric.FromComponentsInHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinderNonGeneric::*)(::System::Func_2<::UnityEngine::Component*, bool>*, bool)>(&::Zenject::FromBinderNonGeneric::FromComponentsInHierarchy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eda078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromComponentsInHierarchy", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Component*, bool>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::Zenject::FromBinderNonGeneric* Zenject::FromBinderNonGeneric::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FromBinderNonGeneric*>(bindContainer, bindInfo, bindStatement));
}
inline void Zenject::FromBinderNonGeneric::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
template <typename TConcrete, typename TFactory> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromFactory() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromFactory",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() },
      ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderNonGeneric::FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromIFactory",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, factoryBindGenerator);
}
template <typename TConcrete>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromMethod(::System::Func_2<::Zenject::InjectContext*, TConcrete>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromMethod",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, TConcrete>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TConcrete>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderNonGeneric::FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* method) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromMethodMultiple",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() },
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromResolveGetter",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromResolveGetter",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                                 ::Zenject::InjectSources source) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromResolveGetter",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier, method, source);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveAllGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromResolveAllGetter",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromResolveAllGetter",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                                    ::Zenject::InjectSources source) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromResolveAllGetter",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier, method, source);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromInstance(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, instance);
}
/// @param includeInactive: bool (default: true)
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromComponentsInChildren(::System::Func_2<::UnityEngine::Component*, bool>* predicate,
                                                                                                                        bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromComponentsInChildren", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Component*, bool>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, predicate, includeInactive);
}
/// @param excludeSelf: bool (default: false)
/// @param predicate: ::System::Func_2<::UnityEngine::Component*,bool>* (default: nullptr)
/// @param includeInactive: bool (default: true)
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromComponentsInChildren(bool excludeSelf, ::System::Func_2<::UnityEngine::Component*, bool>* predicate,
                                                                                                                        bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromComponentsInChildren", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Component*, bool>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, excludeSelf, predicate, includeInactive);
}
/// @param predicate: ::System::Func_2<::UnityEngine::Component*,bool>* (default: nullptr)
/// @param includeInactive: bool (default: true)
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromComponentsInHierarchy(::System::Func_2<::UnityEngine::Component*, bool>* predicate,
                                                                                                                         bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderNonGeneric*>::get(), "FromComponentsInHierarchy", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Component*, bool>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, predicate, includeInactive);
}
// Ctor Parameters []
constexpr ::Zenject::FromBinderNonGeneric::FromBinderNonGeneric() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
