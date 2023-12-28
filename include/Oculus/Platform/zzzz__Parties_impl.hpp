#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Parties_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Parties.GetCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>* (*)()>(&::Oculus::Platform::Parties::GetCurrent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x26feee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Parties*>::get(), "GetCurrent",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Parties.SetPartyUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PartyUpdateNotification*>*)>(
    &::Oculus::Platform::Parties::SetPartyUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26ff038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Parties*>::get(), "SetPartyUpdateNotificationCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PartyUpdateNotification*>*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>* Oculus::Platform::Parties::GetCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Parties*>::get(), "GetCurrent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>*, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Parties::SetPartyUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PartyUpdateNotification*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Parties*>::get(), "SetPartyUpdateNotificationCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PartyUpdateNotification*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Parties::Parties() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
