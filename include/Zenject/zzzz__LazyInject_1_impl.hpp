#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__LazyInject_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename T> constexpr Zenject::LazyInject_1<T>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
template <typename T> constexpr ::Zenject::DiContainer*& Zenject::LazyInject_1<T>::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____container;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::LazyInject_1<T>::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____container;
}
template <typename T> constexpr void Zenject::LazyInject_1<T>::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Zenject::InjectContext*& Zenject::LazyInject_1<T>::__get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____context;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& Zenject::LazyInject_1<T>::__get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____context;
}
template <typename T> constexpr void Zenject::LazyInject_1<T>::__set__context(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr bool& Zenject::LazyInject_1<T>::__get__hasValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasValue;
}
template <typename T> constexpr bool const& Zenject::LazyInject_1<T>::__get__hasValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasValue;
}
template <typename T> constexpr void Zenject::LazyInject_1<T>::__set__hasValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hasValue = value;
}
template <typename T> constexpr T& Zenject::LazyInject_1<T>::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____value;
}
template <typename T> constexpr T const& Zenject::LazyInject_1<T>::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____value;
}
template <typename T> constexpr void Zenject::LazyInject_1<T>::__set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Zenject::LazyInject_1<T>* Zenject::LazyInject_1<T>::New_ctor(::Zenject::DiContainer* container, ::Zenject::InjectContext* context) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::LazyInject_1<T>*>(container, context));
}
template <typename T> inline void Zenject::LazyInject_1<T>::_ctor(::Zenject::DiContainer* container, ::Zenject::InjectContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, context);
}
template <typename T> inline void Zenject::LazyInject_1<T>::Zenject_IValidatable_Validate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(),
                                                                             "Zenject.IValidatable.Validate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T Zenject::LazyInject_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(), "get_Value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::LazyInject_1<T>::LazyInject_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
