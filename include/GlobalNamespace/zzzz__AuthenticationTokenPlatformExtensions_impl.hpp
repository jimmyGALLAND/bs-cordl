#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationTokenPlatformExtensions_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AuthenticationTokenPlatformExtensions.ToAuthenticationTokenPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AuthenticationToken__Platform (*)(::GlobalNamespace::__UserInfo__Platform)>(
    &::GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2635414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToAuthenticationTokenPlatform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UserInfo__Platform>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationTokenPlatformExtensions.ToUserInfoPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__UserInfo__Platform (*)(::GlobalNamespace::__AuthenticationToken__Platform)>(
    &::GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x263543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToUserInfoPlatform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AuthenticationToken__Platform>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::AuthenticationTokenPlatformExtensions::ToAuthenticationTokenPlatform(::GlobalNamespace::__UserInfo__Platform platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToAuthenticationTokenPlatform", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UserInfo__Platform>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AuthenticationToken__Platform, false>(nullptr, ___internal_method, platform);
}
inline ::GlobalNamespace::__UserInfo__Platform GlobalNamespace::AuthenticationTokenPlatformExtensions::ToUserInfoPlatform(::GlobalNamespace::__AuthenticationToken__Platform platform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationTokenPlatformExtensions*>::get(), "ToUserInfoPlatform", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AuthenticationToken__Platform>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__UserInfo__Platform, false>(nullptr, ___internal_method, platform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AuthenticationTokenPlatformExtensions::AuthenticationTokenPlatformExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
