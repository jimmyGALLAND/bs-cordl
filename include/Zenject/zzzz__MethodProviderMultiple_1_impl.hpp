#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MethodProviderMultiple_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to "::Zenject::IProvider"
template <typename TReturn> constexpr Zenject::MethodProviderMultiple_1<TReturn>::operator ::Zenject::IProvider*() noexcept {
  return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
template <typename TReturn> constexpr ::Zenject::DiContainer*& Zenject::MethodProviderMultiple_1<TReturn>::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TReturn> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::MethodProviderMultiple_1<TReturn>::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TReturn> constexpr void Zenject::MethodProviderMultiple_1<TReturn>::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TReturn>
constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>*& Zenject::MethodProviderMultiple_1<TReturn>::__get__method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TReturn>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>*> const&
Zenject::MethodProviderMultiple_1<TReturn>::__get__method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____method;
}
template <typename TReturn>
constexpr void Zenject::MethodProviderMultiple_1<TReturn>::__set__method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TReturn>
inline ::Zenject::MethodProviderMultiple_1<TReturn>*
Zenject::MethodProviderMultiple_1<TReturn>::New_ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>* method, ::Zenject::DiContainer* container) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MethodProviderMultiple_1<TReturn>*>(method, container));
}
template <typename TReturn>
inline void Zenject::MethodProviderMultiple_1<TReturn>::_ctor(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>* method,
                                                              ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderMultiple_1<TReturn>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TReturn>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, container);
}
template <typename TReturn> inline bool Zenject::MethodProviderMultiple_1<TReturn>::get_IsCached() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderMultiple_1<TReturn>*>::get(),
                                                                             "get_IsCached", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TReturn> inline bool Zenject::MethodProviderMultiple_1<TReturn>::get_TypeVariesBasedOnMemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderMultiple_1<TReturn>*>::get(),
                                                                             "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TReturn> inline ::System::Type* Zenject::MethodProviderMultiple_1<TReturn>::GetInstanceType(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderMultiple_1<TReturn>*>::get(), "GetInstanceType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, context);
}
template <typename TReturn>
inline void Zenject::MethodProviderMultiple_1<TReturn>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                                                       ByRef<::System::Action*> injectAction, ::System::Collections::Generic::List_1<::System::Object*>* buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderMultiple_1<TReturn>*>::get(), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, args, injectAction, buffer);
}
// Ctor Parameters []
template <typename TReturn> constexpr ::Zenject::MethodProviderMultiple_1<TReturn>::MethodProviderMultiple_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
