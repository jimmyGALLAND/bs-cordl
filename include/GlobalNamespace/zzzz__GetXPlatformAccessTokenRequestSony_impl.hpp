#pragma once
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GetXPlatformAccessTokenRequestSony_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetXPlatformAccessTokenRequestSony._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GetXPlatformAccessTokenRequestSony::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::GetXPlatformAccessTokenRequestSony::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2800154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenRequestSony*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GetXPlatformAccessTokenRequestSony::__get_platformToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___platformToken;
}
constexpr ::StringW const& GlobalNamespace::GetXPlatformAccessTokenRequestSony::__get_platformToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___platformToken;
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSony::__set_platformToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platformToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlatformEnvironment& GlobalNamespace::GetXPlatformAccessTokenRequestSony::__get_platformEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___platformEnvironment;
}
constexpr ::GlobalNamespace::PlatformEnvironment const& GlobalNamespace::GetXPlatformAccessTokenRequestSony::__get_platformEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___platformEnvironment;
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSony::__set_platformEnvironment(::GlobalNamespace::PlatformEnvironment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___platformEnvironment = value;
}
inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSony* GlobalNamespace::GetXPlatformAccessTokenRequestSony::New_ctor(::StringW platformToken,
                                                                                                                            ::GlobalNamespace::PlatformEnvironment platformEnvironment) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GetXPlatformAccessTokenRequestSony*>(platformToken, platformEnvironment));
}
inline void GlobalNamespace::GetXPlatformAccessTokenRequestSony::_ctor(::StringW platformToken, ::GlobalNamespace::PlatformEnvironment platformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenRequestSony*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platformToken, platformEnvironment);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetXPlatformAccessTokenRequestSony::GetXPlatformAccessTokenRequestSony() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
