#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ef57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)(int32_t)>(
    &::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29ed9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI.GetAllNetworkInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xa6c;
  constexpr static std::size_t addrs = 0x29ef59c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), 4));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__get_AF_INET6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AF_INET6;
}
constexpr int32_t const& System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__get_AF_INET6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AF_INET6;
}
constexpr void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__set_AF_INET6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___AF_INET6 = value;
}
inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>());
}
inline void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor(int32_t AF_INET6) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(AF_INET6));
}
inline void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor(int32_t AF_INET6) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, AF_INET6);
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>
System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), "GetAllNetworkInterfaces",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::MacOsNetworkInterfaceAPI() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
