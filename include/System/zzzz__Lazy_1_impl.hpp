#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/zzzz__LazyThreadSafetyMode_def.hpp"
#include "System/zzzz__LazyHelper_def.hpp"
template <typename T> constexpr ::System::LazyHelper*& System::Lazy_1<T>::__get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::LazyHelper*> const& System::Lazy_1<T>::__get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename T> constexpr void System::Lazy_1<T>::__set__state(::System::LazyHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Func_1<T>*& System::Lazy_1<T>::__get__factory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factory;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& System::Lazy_1<T>::__get__factory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factory;
}
template <typename T> constexpr void System::Lazy_1<T>::__set__factory(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____factory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& System::Lazy_1<T>::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& System::Lazy_1<T>::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void System::Lazy_1<T>::__set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T System::Lazy_1<T>::CreateViaDefaultConstructor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "CreateViaDefaultConstructor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Lazy_1<T>* System::Lazy_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Lazy_1<T>*>());
}
template <typename T> inline void System::Lazy_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Lazy_1<T>* System::Lazy_1<T>::New_ctor(::System::Func_1<T>* valueFactory) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Lazy_1<T>*>(valueFactory));
}
template <typename T> inline void System::Lazy_1<T>::_ctor(::System::Func_1<T>* valueFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueFactory);
}
template <typename T> inline ::System::Lazy_1<T>* System::Lazy_1<T>::New_ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Lazy_1<T>*>(valueFactory, mode, useDefaultConstructor));
}
template <typename T> inline void System::Lazy_1<T>::_ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LazyThreadSafetyMode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueFactory, mode, useDefaultConstructor);
}
template <typename T> inline void System::Lazy_1<T>::ViaConstructor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "ViaConstructor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Lazy_1<T>::ViaFactory(::System::Threading::LazyThreadSafetyMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "ViaFactory", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LazyThreadSafetyMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
template <typename T> inline void System::Lazy_1<T>::ExecutionAndPublication(::System::LazyHelper* executionAndPublication, bool useDefaultConstructor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "ExecutionAndPublication", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LazyHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionAndPublication, useDefaultConstructor);
}
template <typename T> inline void System::Lazy_1<T>::PublicationOnly(::System::LazyHelper* publicationOnly, T possibleValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "PublicationOnly", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LazyHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicationOnly, possibleValue);
}
template <typename T> inline void System::Lazy_1<T>::PublicationOnlyViaConstructor(::System::LazyHelper* initializer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "PublicationOnlyViaConstructor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LazyHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initializer);
}
template <typename T> inline void System::Lazy_1<T>::PublicationOnlyViaFactory(::System::LazyHelper* initializer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "PublicationOnlyViaFactory", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LazyHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initializer);
}
template <typename T> inline void System::Lazy_1<T>::PublicationOnlyWaitForOtherThreadToPublish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(),
                                                                             "PublicationOnlyWaitForOtherThreadToPublish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T System::Lazy_1<T>::CreateValue() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "CreateValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::StringW System::Lazy_1<T>::ToString() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline bool System::Lazy_1<T>::get_IsValueCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "get_IsValueCreated",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T System::Lazy_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Lazy_1<T>*>::get(), "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Lazy_1<T>::Lazy_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
