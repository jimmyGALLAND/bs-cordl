#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsRsaKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xfb1194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.SkipServerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xfb11ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ProcessServerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessServerCredentials)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xfb11ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ProcessServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xfb1354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ValidateCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xfb1594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ProcessClientCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xfb1630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.GenerateClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xfb16bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ProcessClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xfb16e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.GeneratePremasterSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xfb17fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ValidateRsaPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* (
    ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ValidateRsaPublicKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xfb1854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), 35));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mServerPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerPublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mServerPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mServerPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mRsaServerPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRsaServerPublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mRsaServerPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRsaServerPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__set_mRsaServerPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRsaServerPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*& Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mServerCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerCredentials;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*> const& Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mServerCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mServerCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mServerCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mPremasterSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPremasterSecret;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mPremasterSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPremasterSecret;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__set_mPremasterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPremasterSecret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange* Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::New_ctor(::System::Collections::IList* supportedSignatureAlgorithms) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>(supportedSignatureAlgorithms));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::_ctor(::System::Collections::IList* supportedSignatureAlgorithms) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, supportedSignatureAlgorithms);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::SkipServerCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                                             "SkipServerCredentials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), "ProcessServerCredentials", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCredentials);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), "ProcessServerCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), "ValidateCertificateRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), "ProcessClientCredentials", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCredentials);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::GenerateClientKeyExchange(::System::IO::Stream* output) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), "GenerateClientKeyExchange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessClientKeyExchange(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), "ProcessClientKeyExchange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::GeneratePremasterSecret() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(),
                                                                             "GeneratePremasterSecret", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*
Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ValidateRsaPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange*>::get(), "ValidateRsaPublicKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, false>(this, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::TlsRsaKeyExchange() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
