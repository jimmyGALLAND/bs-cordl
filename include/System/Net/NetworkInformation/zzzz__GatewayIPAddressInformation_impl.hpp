#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/GatewayIPAddressInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformation_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::GatewayIPAddressInformation::*)()>(&::System::Net::NetworkInformation::GatewayIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4357144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::GatewayIPAddressInformation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::GatewayIPAddressInformation* System::Net::NetworkInformation::GatewayIPAddressInformation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::GatewayIPAddressInformation*>());
}
inline void System::Net::NetworkInformation::GatewayIPAddressInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::GatewayIPAddressInformation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::GatewayIPAddressInformation::GatewayIPAddressInformation()   {
}
