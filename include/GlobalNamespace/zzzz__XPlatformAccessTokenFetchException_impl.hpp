#pragma once
// IWYU pragma private; include "GlobalNamespace/XPlatformAccessTokenFetchException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenFetchException_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenFetchException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenFetchException::*)(::StringW)>(&::GlobalNamespace::XPlatformAccessTokenFetchException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fed0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenFetchException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::XPlatformAccessTokenFetchException* GlobalNamespace::XPlatformAccessTokenFetchException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::XPlatformAccessTokenFetchException*>(message));
}
inline void GlobalNamespace::XPlatformAccessTokenFetchException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenFetchException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XPlatformAccessTokenFetchException::XPlatformAccessTokenFetchException()   {
}
