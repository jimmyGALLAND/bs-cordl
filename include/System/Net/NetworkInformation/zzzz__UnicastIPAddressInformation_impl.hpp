#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnicastIPAddressInformation.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressInformation_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnicastIPAddressInformation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnicastIPAddressInformation::*)()>(&::System::Net::NetworkInformation::UnicastIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4357e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnicastIPAddressInformation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::UnicastIPAddressInformation* System::Net::NetworkInformation::UnicastIPAddressInformation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::UnicastIPAddressInformation*>());
}
inline void System::Net::NetworkInformation::UnicastIPAddressInformation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnicastIPAddressInformation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnicastIPAddressInformation::UnicastIPAddressInformation()   {
}
