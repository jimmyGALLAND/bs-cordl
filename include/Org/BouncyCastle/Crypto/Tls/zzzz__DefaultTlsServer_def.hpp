#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsServer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsServer)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsServer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsServer
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsServer*
class CORDL_TYPE DefaultTlsServer : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
// Declarations
/// @brief Method CreateDHKeyExchange, addr 0x239f2dc, size 0x94, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateDHKeyExchange(int32_t  keyExchange) ;

/// @brief Method CreateDheKeyExchange, addr 0x239f370, size 0x94, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateDheKeyExchange(int32_t  keyExchange) ;

/// @brief Method CreateECDHKeyExchange, addr 0x239f404, size 0x8c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateECDHKeyExchange(int32_t  keyExchange) ;

/// @brief Method CreateECDheKeyExchange, addr 0x239f490, size 0x8c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateECDheKeyExchange(int32_t  keyExchange) ;

/// @brief Method CreateRsaKeyExchange, addr 0x239f51c, size 0x60, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateRsaKeyExchange() ;

/// @brief Method GetCipherSuites, addr 0x239f024, size 0x70, virtual true, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetCipherSuites() ;

/// @brief Method GetCredentials, addr 0x239f094, size 0x12c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials() ;

/// @brief Method GetDHParameters, addr 0x239efcc, size 0x58, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GetDHParameters() ;

/// @brief Method GetDsaSignerCredentials, addr 0x239eedc, size 0x3c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetDsaSignerCredentials() ;

/// @brief Method GetECDsaSignerCredentials, addr 0x239ef18, size 0x3c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetECDsaSignerCredentials() ;

/// @brief Method GetKeyExchange, addr 0x239f1c0, size 0x11c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange() ;

/// @brief Method GetRsaEncryptionCredentials, addr 0x239ef54, size 0x3c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* GetRsaEncryptionCredentials() ;

/// @brief Method GetRsaSignerCredentials, addr 0x239ef90, size 0x3c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* GetRsaSignerCredentials() ;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer* New_ctor() ;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*  cipherFactory) ;

/// @brief Method .ctor, addr 0x239eeb0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x239eeb4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*  cipherFactory) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultTlsServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultTlsServer(DefaultTlsServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultTlsServer(DefaultTlsServer const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsServer*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsServer");
