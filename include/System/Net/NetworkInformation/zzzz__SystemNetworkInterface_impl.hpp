#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__SystemNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::SystemNetworkInterface.GetNetworkInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> (*)()>(
        &::System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x29eb7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemNetworkInterface*>::get(), "GetNetworkInterfaces",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::SystemNetworkInterface::setStaticF_nif(::System::Net::NetworkInformation::NetworkInterfaceFactory* value) {
  ::cordl_internals::setStaticField<::System::Net::NetworkInformation::NetworkInterfaceFactory*, "nif",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemNetworkInterface*>::get>(
      std::forward<::System::Net::NetworkInformation::NetworkInterfaceFactory*>(value));
}
inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* System::Net::NetworkInformation::SystemNetworkInterface::getStaticF_nif() {
  return ::cordl_internals::getStaticField<::System::Net::NetworkInformation::NetworkInterfaceFactory*, "nif",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemNetworkInterface*>::get>();
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>
System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemNetworkInterface*>::get(),
                                                                             "GetNetworkInterfaces", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>, false>(nullptr,
                                                                                                                                                                                    ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::SystemNetworkInterface::SystemNetworkInterface() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
