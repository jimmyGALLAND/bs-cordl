#pragma once
#include "System/IO/zzzz__EndOfStreamException_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsNoCloseNotifyException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xfaecf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException* Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException*>());
}
inline void Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException::TlsNoCloseNotifyException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
