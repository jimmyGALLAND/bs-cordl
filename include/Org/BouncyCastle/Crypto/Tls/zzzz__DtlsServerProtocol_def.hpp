#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsServerProtocol.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsServerProtocol)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsServerProtocol__ServerHandshakeState;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __SessionParameters__Builder;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsServerProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsServerProtocol__ServerHandshakeState;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState);
// Type: ::ServerHandshakeState
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::DtlsServerProtocol::ServerHandshakeState*
class CORDL_TYPE __DtlsServerProtocol__ServerHandshakeState : public ::System::Object {
public:
// Declarations
/// @brief Field allowCertificateStatus, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowCertificateStatus, put=__cordl_internal_set_allowCertificateStatus)) bool  allowCertificateStatus;

/// @brief Field certificateRequest, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_certificateRequest, put=__cordl_internal_set_certificateRequest)) ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  certificateRequest;

/// @brief Field clientCertificate, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientCertificate, put=__cordl_internal_set_clientCertificate)) ::Org::BouncyCastle::Crypto::Tls::Certificate*  clientCertificate;

/// @brief Field clientCertificateType, offset 0x78, size 0x2 
 __declspec(property(get=__cordl_internal_get_clientCertificateType, put=__cordl_internal_set_clientCertificateType)) int16_t  clientCertificateType;

/// @brief Field clientExtensions, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientExtensions, put=__cordl_internal_set_clientExtensions)) ::System::Collections::IDictionary*  clientExtensions;

/// @brief Field expectSessionTicket, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get_expectSessionTicket, put=__cordl_internal_set_expectSessionTicket)) bool  expectSessionTicket;

/// @brief Field keyExchange, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyExchange, put=__cordl_internal_set_keyExchange)) ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*  keyExchange;

/// @brief Field offeredCipherSuites, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_offeredCipherSuites, put=__cordl_internal_set_offeredCipherSuites)) ::ArrayW<int32_t,::Array<int32_t>*>  offeredCipherSuites;

/// @brief Field offeredCompressionMethods, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_offeredCompressionMethods, put=__cordl_internal_set_offeredCompressionMethods)) ::ArrayW<uint8_t,::Array<uint8_t>*>  offeredCompressionMethods;

/// @brief Field resumedSession, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_resumedSession, put=__cordl_internal_set_resumedSession)) bool  resumedSession;

/// @brief Field secure_renegotiation, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_secure_renegotiation, put=__cordl_internal_set_secure_renegotiation)) bool  secure_renegotiation;

/// @brief Field server, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_server, put=__cordl_internal_set_server)) ::Org::BouncyCastle::Crypto::Tls::TlsServer*  server;

/// @brief Field serverContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverContext, put=__cordl_internal_set_serverContext)) ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*  serverContext;

/// @brief Field serverCredentials, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverCredentials, put=__cordl_internal_set_serverCredentials)) ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  serverCredentials;

/// @brief Field serverExtensions, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverExtensions, put=__cordl_internal_set_serverExtensions)) ::System::Collections::IDictionary*  serverExtensions;

/// @brief Field sessionParameters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionParameters, put=__cordl_internal_set_sessionParameters)) ::Org::BouncyCastle::Crypto::Tls::SessionParameters*  sessionParameters;

/// @brief Field sessionParametersBuilder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionParametersBuilder, put=__cordl_internal_set_sessionParametersBuilder)) ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*  sessionParametersBuilder;

/// @brief Field tlsSession, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tlsSession, put=__cordl_internal_set_tlsSession)) ::Org::BouncyCastle::Crypto::Tls::TlsSession*  tlsSession;

static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState* New_ctor() ;

constexpr bool const& __cordl_internal_get_allowCertificateStatus() const;

constexpr bool& __cordl_internal_get_allowCertificateStatus() ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& __cordl_internal_get_certificateRequest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> const& __cordl_internal_get_certificateRequest() const;

constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& __cordl_internal_get_clientCertificate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Certificate*> const& __cordl_internal_get_clientCertificate() const;

constexpr int16_t const& __cordl_internal_get_clientCertificateType() const;

constexpr int16_t& __cordl_internal_get_clientCertificateType() ;

constexpr ::System::Collections::IDictionary*& __cordl_internal_get_clientExtensions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_clientExtensions() const;

constexpr bool const& __cordl_internal_get_expectSessionTicket() const;

constexpr bool& __cordl_internal_get_expectSessionTicket() ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& __cordl_internal_get_keyExchange() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> const& __cordl_internal_get_keyExchange() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get_offeredCipherSuites() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get_offeredCipherSuites() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_offeredCompressionMethods() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_offeredCompressionMethods() ;

constexpr bool const& __cordl_internal_get_resumedSession() const;

constexpr bool& __cordl_internal_get_resumedSession() ;

constexpr bool const& __cordl_internal_get_secure_renegotiation() const;

constexpr bool& __cordl_internal_get_secure_renegotiation() ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer*& __cordl_internal_get_server() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServer*> const& __cordl_internal_get_server() const;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*& __cordl_internal_get_serverContext() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*> const& __cordl_internal_get_serverContext() const;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& __cordl_internal_get_serverCredentials() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*> const& __cordl_internal_get_serverCredentials() const;

constexpr ::System::Collections::IDictionary*& __cordl_internal_get_serverExtensions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_serverExtensions() const;

constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& __cordl_internal_get_sessionParameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SessionParameters*> const& __cordl_internal_get_sessionParameters() const;

constexpr ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*& __cordl_internal_get_sessionParametersBuilder() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*> const& __cordl_internal_get_sessionParametersBuilder() const;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession*& __cordl_internal_get_tlsSession() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSession*> const& __cordl_internal_get_tlsSession() const;

constexpr void __cordl_internal_set_allowCertificateStatus(bool  value) ;

constexpr void __cordl_internal_set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  value) ;

constexpr void __cordl_internal_set_clientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate*  value) ;

constexpr void __cordl_internal_set_clientCertificateType(int16_t  value) ;

constexpr void __cordl_internal_set_clientExtensions(::System::Collections::IDictionary*  value) ;

constexpr void __cordl_internal_set_expectSessionTicket(bool  value) ;

constexpr void __cordl_internal_set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*  value) ;

constexpr void __cordl_internal_set_offeredCipherSuites(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set_offeredCompressionMethods(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_resumedSession(bool  value) ;

constexpr void __cordl_internal_set_secure_renegotiation(bool  value) ;

constexpr void __cordl_internal_set_server(::Org::BouncyCastle::Crypto::Tls::TlsServer*  value) ;

constexpr void __cordl_internal_set_serverContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*  value) ;

constexpr void __cordl_internal_set_serverCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  value) ;

constexpr void __cordl_internal_set_serverExtensions(::System::Collections::IDictionary*  value) ;

constexpr void __cordl_internal_set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters*  value) ;

constexpr void __cordl_internal_set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*  value) ;

constexpr void __cordl_internal_set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession*  value) ;

/// @brief Method .ctor, addr 0x23c9bdc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __DtlsServerProtocol__ServerHandshakeState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__DtlsServerProtocol__ServerHandshakeState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DtlsServerProtocol__ServerHandshakeState(__DtlsServerProtocol__ServerHandshakeState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DtlsServerProtocol__ServerHandshakeState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DtlsServerProtocol__ServerHandshakeState(__DtlsServerProtocol__ServerHandshakeState const& ) = delete;

/// @brief Field server, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::TlsServer*  ___server;

/// @brief Field serverContext, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*  ___serverContext;

/// @brief Field tlsSession, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::TlsSession*  ___tlsSession;

/// @brief Field sessionParameters, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::SessionParameters*  ___sessionParameters;

/// @brief Field sessionParametersBuilder, offset: 0x30, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::__SessionParameters__Builder*  ___sessionParametersBuilder;

/// @brief Field offeredCipherSuites, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ___offeredCipherSuites;

/// @brief Field offeredCompressionMethods, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___offeredCompressionMethods;

/// @brief Field clientExtensions, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::IDictionary*  ___clientExtensions;

/// @brief Field serverExtensions, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::IDictionary*  ___serverExtensions;

/// @brief Field resumedSession, offset: 0x58, size: 0x1, def value: None
 bool  ___resumedSession;

/// @brief Field secure_renegotiation, offset: 0x59, size: 0x1, def value: None
 bool  ___secure_renegotiation;

/// @brief Field allowCertificateStatus, offset: 0x5a, size: 0x1, def value: None
 bool  ___allowCertificateStatus;

/// @brief Field expectSessionTicket, offset: 0x5b, size: 0x1, def value: None
 bool  ___expectSessionTicket;

/// @brief Field keyExchange, offset: 0x60, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*  ___keyExchange;

/// @brief Field serverCredentials, offset: 0x68, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*  ___serverCredentials;

/// @brief Field certificateRequest, offset: 0x70, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  ___certificateRequest;

/// @brief Field clientCertificateType, offset: 0x78, size: 0x2, def value: None
 int16_t  ___clientCertificateType;

/// @brief Field clientCertificate, offset: 0x80, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::Certificate*  ___clientCertificate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, 0x88>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___server) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___serverContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___tlsSession) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___sessionParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___sessionParametersBuilder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___offeredCipherSuites) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___offeredCompressionMethods) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___clientExtensions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___serverExtensions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___resumedSession) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___secure_renegotiation) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___allowCertificateStatus) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___expectSessionTicket) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___keyExchange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___serverCredentials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___certificateRequest) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___clientCertificateType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState, ___clientCertificate) == 0x80, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsServerProtocol
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsServerProtocol*
class CORDL_TYPE DtlsServerProtocol : public ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol {
public:
// Declarations
using ServerHandshakeState = ::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState;

 __declspec(property(get=get_VerifyRequests, put=set_VerifyRequests)) bool  VerifyRequests;

/// @brief Field mVerifyRequests, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_mVerifyRequests, put=__cordl_internal_set_mVerifyRequests)) bool  mVerifyRequests;

/// @brief Method AbortServerHandshake, addr 0x23ab1e8, size 0x50, virtual true, abstract: false, final false
inline void AbortServerHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  recordLayer, uint8_t  alertDescription) ;

/// @brief Method Accept, addr 0x23aac7c, size 0x56c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* Accept(::Org::BouncyCastle::Crypto::Tls::TlsServer*  server, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*  transport) ;

/// @brief Method ExpectCertificateVerifyMessage, addr 0x23adb04, size 0x78, virtual true, abstract: false, final false
inline bool ExpectCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state) ;

/// @brief Method GenerateCertificateRequest, addr 0x23ac100, size 0x84, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*  certificateRequest) ;

/// @brief Method GenerateCertificateStatus, addr 0x23ac184, size 0x84, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateCertificateStatus(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::CertificateStatus*  certificateStatus) ;

/// @brief Method GenerateNewSessionTicket, addr 0x23ac208, size 0x84, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*  newSessionTicket) ;

/// @brief Method GenerateServerHello, addr 0x23ac28c, size 0x75c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateServerHello(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state) ;

/// @brief Method InvalidateSession, addr 0x23ac03c, size 0xc4, virtual true, abstract: false, final false
inline void InvalidateSession(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state) ;

static inline ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method NotifyClientCertificate, addr 0x23ac9e8, size 0x2d4, virtual true, abstract: false, final false
inline void NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::Certificate*  clientCertificate) ;

/// @brief Method ProcessCertificateVerify, addr 0x23acd84, size 0x4f8, virtual true, abstract: false, final false
inline void ProcessCertificateVerify(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*  prepareFinishHash) ;

/// @brief Method ProcessClientCertificate, addr 0x23accbc, size 0xc8, virtual true, abstract: false, final false
inline void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessClientHello, addr 0x23ad27c, size 0x69c, virtual true, abstract: false, final false
inline void ProcessClientHello(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessClientKeyExchange, addr 0x23ad918, size 0xf4, virtual true, abstract: false, final false
inline void ProcessClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ProcessClientSupplementalData, addr 0x23ada0c, size 0xf8, virtual true, abstract: false, final false
inline void ProcessClientSupplementalData(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::ArrayW<uint8_t,::Array<uint8_t>*>  body) ;

/// @brief Method ServerHandshake, addr 0x23ab238, size 0xe04, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::DtlsTransport* ServerHandshake(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*  state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*  recordLayer) ;

constexpr bool const& __cordl_internal_get_mVerifyRequests() const;

constexpr bool& __cordl_internal_get_mVerifyRequests() ;

constexpr void __cordl_internal_set_mVerifyRequests(bool  value) ;

/// @brief Method .ctor, addr 0x23aac5c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method get_VerifyRequests, addr 0x23aac68, size 0x8, virtual true, abstract: false, final false
inline bool get_VerifyRequests() ;

/// @brief Method set_VerifyRequests, addr 0x23aac70, size 0xc, virtual true, abstract: false, final false
inline void set_VerifyRequests(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DtlsServerProtocol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DtlsServerProtocol", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DtlsServerProtocol(DtlsServerProtocol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DtlsServerProtocol", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DtlsServerProtocol(DtlsServerProtocol const& ) = delete;

/// @brief Field mVerifyRequests, offset: 0x18, size: 0x1, def value: None
 bool  ___mVerifyRequests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol, ___mVerifyRequests) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol*, "Org.BouncyCastle.Crypto.Tls", "DtlsServerProtocol");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsServerProtocol__ServerHandshakeState*, "Org.BouncyCastle.Crypto.Tls", "DtlsServerProtocol/ServerHandshakeState");
