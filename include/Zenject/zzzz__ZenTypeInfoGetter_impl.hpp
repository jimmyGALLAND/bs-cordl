#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Zenject/zzzz__ZenTypeInfoGetter_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ZenTypeInfoGetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenTypeInfoGetter::*)(::System::Object*, void*)>(&::Zenject::ZenTypeInfoGetter::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2f1e670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenTypeInfoGetter.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (::Zenject::ZenTypeInfoGetter::*)()>(&::Zenject::ZenTypeInfoGetter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f1e72c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenTypeInfoGetter.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::Zenject::ZenTypeInfoGetter::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::Zenject::ZenTypeInfoGetter::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f1e740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenTypeInfoGetter.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (::Zenject::ZenTypeInfoGetter::*)(::System::IAsyncResult*)>(
    &::Zenject::ZenTypeInfoGetter::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f1e760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), 15));
    return ___internal_method;
  }
};
inline ::Zenject::ZenTypeInfoGetter* Zenject::ZenTypeInfoGetter::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ZenTypeInfoGetter*>(object, method));
}
inline void Zenject::ZenTypeInfoGetter::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenTypeInfoGetter::Invoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), "Invoke",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* Zenject::ZenTypeInfoGetter::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenTypeInfoGetter::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenTypeInfoGetter*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::Zenject::ZenTypeInfoGetter::ZenTypeInfoGetter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
