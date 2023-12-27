#pragma once
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)(void*)>(
    &::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f2e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList.GetNetSyncVoipAttenuationValueList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (
    ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)()>(&::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetNetSyncVoipAttenuationValueList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f2e90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(), 50));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (
    ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)(void*)>(&::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f2ecc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList* Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>(c_message));
}
inline void Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetNetSyncVoipAttenuationValueList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                                               "GetNetSyncVoipAttenuationValueList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(), "GetDataFromMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::MessageWithNetSyncVoipAttenuationValueList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
