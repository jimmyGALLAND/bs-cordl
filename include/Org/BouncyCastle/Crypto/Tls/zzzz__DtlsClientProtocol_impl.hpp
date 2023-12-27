#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsClientProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsClientProtocol_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xf695b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___client;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClient*> const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___client;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_client(::Org::BouncyCastle::Crypto::Tls::TlsClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_clientContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientContext;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_clientContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_clientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_tlsSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tlsSession;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_tlsSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tlsSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsSession)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_sessionParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sessionParameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_sessionParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sessionParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_sessionParametersBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sessionParametersBuilder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_sessionParametersBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sessionParametersBuilder;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionParametersBuilder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_offeredCipherSuites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___offeredCipherSuites;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_offeredCipherSuites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___offeredCipherSuites;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_offeredCipherSuites(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offeredCipherSuites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_clientExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_clientExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_clientExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_serverExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverExtensions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_serverExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___serverExtensions;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_serverExtensions(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serverExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_selectedSessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selectedSessionID;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_selectedSessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selectedSessionID;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_selectedSessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectedSessionID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_resumedSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___resumedSession;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_resumedSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___resumedSession;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_resumedSession(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___resumedSession = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_secure_renegotiation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secure_renegotiation;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_secure_renegotiation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secure_renegotiation;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_secure_renegotiation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___secure_renegotiation = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_allowCertificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allowCertificateStatus;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_allowCertificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allowCertificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_allowCertificateStatus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___allowCertificateStatus = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_expectSessionTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___expectSessionTicket;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_expectSessionTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___expectSessionTicket;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_expectSessionTicket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___expectSessionTicket = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_keyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyExchange;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_keyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyExchange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_authentication() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___authentication;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_authentication() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___authentication;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_authentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authentication)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_certificateStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificateStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_certificateStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificateStatus;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_certificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_certificateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificateRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_certificateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificateRequest;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_clientCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientCredentials;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*> const&
Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__get_clientCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___clientCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__set_clientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>());
}
inline void Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState::__DtlsClientProtocol__ClientHandshakeState() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf68eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsClient*, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::Connect)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0xf68eb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.AbortClientHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::AbortClientHandshake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf6970c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ClientHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ClientHandshake)> {
  constexpr static std::size_t size = 0x1390;
  constexpr static std::size_t addrs = 0xf6975c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateCertificateVerify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::DigitallySigned*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateCertificateVerify)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf6b53c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateClientHello
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::TlsClient*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientHello)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xf6b5c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateClientKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xf6bba0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.InvalidateSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf6bc8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessCertificateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateRequest)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xf6bd50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessCertificateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateStatus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf6be9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessHelloVerifyRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessHelloVerifyRequest)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xf6bf64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessNewSessionTicket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessNewSessionTicket)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xf6c0f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (
    ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xf6c1f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerHello
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerHello)> {
  constexpr static std::size_t size = 0xca4;
  constexpr static std::size_t addrs = 0xf6c41c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xf6d0c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerSupplementalData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerSupplementalData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf6d1b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ReportServerVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(
    ::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ReportServerVersion)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xf6d2b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.PatchClientHelloWithCookie
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::PatchClientHelloWithCookie)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xf6b0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "PatchClientHelloWithCookie", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol* Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>(secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient* client,
                                                                                                                    ::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "Connect", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsClient*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport*, false>(this, ___internal_method, client, transport);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::AbortClientHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                     ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer, uint8_t alertDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "AbortClientHandshake", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, recordLayer, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport*
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ClientHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                    ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ClientHandshake", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport*, false>(this, ___internal_method, state, recordLayer);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateCertificateVerify(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                              ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* certificateVerify) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "GenerateCertificateVerify", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, certificateVerify);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientHello(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                                                    ::Org::BouncyCastle::Crypto::Tls::TlsClient* client) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "GenerateClientHello", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, client);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "GenerateClientKeyExchange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::InvalidateSession(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "InvalidateSession", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ProcessCertificateRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateStatus(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ProcessCertificateStatus", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessHelloVerifyRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ProcessHelloVerifyRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ProcessNewSessionTicket", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate*
Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                             ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ProcessServerCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerHello(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ProcessServerHello", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ProcessServerKeyExchange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerSupplementalData(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ProcessServerSupplementalData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, body);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ReportServerVersion(::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState* state,
                                                                                    ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* server_version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "ReportServerVersion", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::__DtlsClientProtocol__ClientHandshakeState*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, server_version);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::PatchClientHelloWithCookie(::ArrayW<uint8_t, ::Array<uint8_t>*> clientHelloBody,
                                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> cookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol*>::get(), "PatchClientHelloWithCookie", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, clientHelloBody, cookie);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::DtlsClientProtocol() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
