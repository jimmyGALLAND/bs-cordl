#pragma once
#include "System/Runtime/InteropServices/zzzz__ExternalException_impl.hpp"
#include "System/ComponentModel/Design/zzzz__CheckoutException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::CheckoutException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::CheckoutException::*)()>(
    &::System::ComponentModel::Design::CheckoutException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293aaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::CheckoutException*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::CheckoutException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::CheckoutException::*)(::StringW, int32_t)>(
    &::System::ComponentModel::Design::CheckoutException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293aaf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::CheckoutException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::CheckoutException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::CheckoutException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::ComponentModel::Design::CheckoutException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293aafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::CheckoutException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::Design::CheckoutException::setStaticF_Canceled(::System::ComponentModel::Design::CheckoutException* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::Design::CheckoutException*, "Canceled",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::CheckoutException*>::get>(
      std::forward<::System::ComponentModel::Design::CheckoutException*>(value));
}
inline ::System::ComponentModel::Design::CheckoutException* System::ComponentModel::Design::CheckoutException::getStaticF_Canceled() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::Design::CheckoutException*, "Canceled",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::CheckoutException*>::get>();
}
inline ::System::ComponentModel::Design::CheckoutException* System::ComponentModel::Design::CheckoutException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::Design::CheckoutException*>());
}
inline void System::ComponentModel::Design::CheckoutException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::CheckoutException*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::Design::CheckoutException* System::ComponentModel::Design::CheckoutException::New_ctor(::StringW message, int32_t errorCode) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::Design::CheckoutException*>(message, errorCode));
}
inline void System::ComponentModel::Design::CheckoutException::_ctor(::StringW message, int32_t errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::CheckoutException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, errorCode);
}
inline ::System::ComponentModel::Design::CheckoutException* System::ComponentModel::Design::CheckoutException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                        ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::Design::CheckoutException*>(info, context));
}
inline void System::ComponentModel::Design::CheckoutException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::CheckoutException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::CheckoutException::CheckoutException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
