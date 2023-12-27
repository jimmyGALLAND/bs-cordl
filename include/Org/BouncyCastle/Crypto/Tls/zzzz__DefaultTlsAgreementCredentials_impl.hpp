#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsAgreementCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::*)(
    ::Org::BouncyCastle::Crypto::Tls::Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::_ctor)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xf62d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials.get_Certificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (
    ::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::*)()>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf62ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials.GenerateAgreement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::GenerateAgreement)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xf62ff8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mCertificate;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mPrivateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mPrivateKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mPrivateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mPrivateKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPrivateKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement*& Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mBasicAgreement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mBasicAgreement;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBasicAgreement*> const& Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mBasicAgreement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mBasicAgreement;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__set_mBasicAgreement(::Org::BouncyCastle::Crypto::IBasicAgreement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBasicAgreement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mTruncateAgreement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mTruncateAgreement;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mTruncateAgreement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mTruncateAgreement;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__set_mTruncateAgreement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mTruncateAgreement = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*
Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::New_ctor(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>(certificate, privateKey));
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::_ctor(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificate, privateKey);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::get_Certificate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>::get(), "get_Certificate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::GenerateAgreement(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* peerPublicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials*>::get(), "GenerateAgreement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, peerPublicKey);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::DefaultTlsAgreementCredentials() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
