#pragma once
#include "ENet/zzzz__ENetCallbacks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ENet/zzzz__Callbacks_def.hpp"
#include "ENet/zzzz__ENetCallbacks_def.hpp"
#include "ENet/zzzz__NoMemoryCallback_def.hpp"
#include "ENet/zzzz__AllocCallback_def.hpp"
#include "ENet/zzzz__FreeCallback_def.hpp"
//  Writing Method size for method: ::ENet::Callbacks.get_NativeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::ENetCallbacks (::ENet::Callbacks::*)()>(&::ENet::Callbacks::get_NativeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21efe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Callbacks*>::get(), "get_NativeData",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Callbacks.set_NativeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ENet::Callbacks::*)(::ENet::ENetCallbacks)>(&::ENet::Callbacks::set_NativeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21efe60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Callbacks*>::get(), "set_NativeData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetCallbacks>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Callbacks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ENet::Callbacks::*)(::ENet::AllocCallback*, ::ENet::FreeCallback*, ::ENet::NoMemoryCallback*)>(
    &::ENet::Callbacks::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21efe74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Callbacks*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::AllocCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::FreeCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::NoMemoryCallback*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ENet::ENetCallbacks& ENet::Callbacks::__get_nativeCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nativeCallbacks;
}
constexpr ::ENet::ENetCallbacks const& ENet::Callbacks::__get_nativeCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nativeCallbacks;
}
constexpr void ENet::Callbacks::__set_nativeCallbacks(::ENet::ENetCallbacks value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___nativeCallbacks = value;
}
inline ::ENet::ENetCallbacks ENet::Callbacks::get_NativeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Callbacks*>::get(), "get_NativeData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ENet::ENetCallbacks, false>(this, ___internal_method);
}
inline void ENet::Callbacks::set_NativeData(::ENet::ENetCallbacks value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Callbacks*>::get(), "set_NativeData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetCallbacks>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ENet::Callbacks* ENet::Callbacks::New_ctor(::ENet::AllocCallback* allocCallback, ::ENet::FreeCallback* freeCallback, ::ENet::NoMemoryCallback* noMemoryCallback) {
  return THROW_UNLESS(::il2cpp_utils::New<::ENet::Callbacks*>(allocCallback, freeCallback, noMemoryCallback));
}
inline void ENet::Callbacks::_ctor(::ENet::AllocCallback* allocCallback, ::ENet::FreeCallback* freeCallback, ::ENet::NoMemoryCallback* noMemoryCallback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Callbacks*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::AllocCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::FreeCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::NoMemoryCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocCallback, freeCallback, noMemoryCallback);
}
// Ctor Parameters []
constexpr ::ENet::Callbacks::Callbacks() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
