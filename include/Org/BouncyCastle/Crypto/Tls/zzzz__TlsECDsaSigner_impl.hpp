#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsECDsaSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner.IsValidPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::IsValidPublicKey)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xfabc78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner.CreateDsaImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDsa* (::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::CreateDsaImpl)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xfabcf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfabf90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfaa064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(), "IsValidPublicKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Crypto::IDsa* Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::CreateDsaImpl(uint8_t hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(), "CreateDsaImpl",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDsa*, false>(this, ___internal_method, hashAlgorithm);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::get_SignatureAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(),
                                                                             "get_SignatureAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner* Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>());
}
inline void Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner::TlsECDsaSigner() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
