#pragma once
// IWYU pragma private; include "System/Net/SystemNetworkCredential.hpp"
#include "System/Net/zzzz__NetworkCredential_impl.hpp"
#include "System/Net/zzzz__SystemNetworkCredential_def.hpp"
//  Writing Method size for method: ::System::Net::SystemNetworkCredential._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::SystemNetworkCredential::*)()>(&::System::Net::SystemNetworkCredential::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x440cb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SystemNetworkCredential*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::Net::SystemNetworkCredential::setStaticF_defaultCredential(::System::Net::SystemNetworkCredential*  value)  {
::cordl_internals::setStaticField<::System::Net::SystemNetworkCredential*, "defaultCredential", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SystemNetworkCredential*>::get>(std::forward<::System::Net::SystemNetworkCredential*>(value));
}
inline ::System::Net::SystemNetworkCredential* System::Net::SystemNetworkCredential::getStaticF_defaultCredential()  {
return ::cordl_internals::getStaticField<::System::Net::SystemNetworkCredential*, "defaultCredential", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SystemNetworkCredential*>::get>();
}
inline ::System::Net::SystemNetworkCredential* System::Net::SystemNetworkCredential::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::SystemNetworkCredential*>());
}
inline void System::Net::SystemNetworkCredential::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::SystemNetworkCredential*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::SystemNetworkCredential::SystemNetworkCredential()   {
}
