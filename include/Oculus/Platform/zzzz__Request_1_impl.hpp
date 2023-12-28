#pragma once
#include "Oculus/Platform/zzzz__Request_impl.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
template <typename T> constexpr ::Oculus::Platform::__Message_1__Callback<T>*& Oculus::Platform::Request_1<T>::__get_callback_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback_;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<T>*> const& Oculus::Platform::Request_1<T>::__get_callback_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback_;
}
template <typename T> constexpr void Oculus::Platform::Request_1<T>::__set_callback_(::Oculus::Platform::__Message_1__Callback<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Oculus::Platform::Request_1<T>* Oculus::Platform::Request_1<T>::New_ctor(uint64_t requestID) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Request_1<T>*>(requestID));
}
template <typename T> inline void Oculus::Platform::Request_1<T>::_ctor(uint64_t requestID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestID);
}
template <typename T> inline ::Oculus::Platform::Request_1<T>* Oculus::Platform::Request_1<T>::OnComplete(::Oculus::Platform::__Message_1__Callback<T>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(), "OnComplete", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<T>*, false>(this, ___internal_method, callback);
}
template <typename T> inline void Oculus::Platform::Request_1<T>::HandleMessage(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(), "HandleMessage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::Request_1<T>::Request_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
