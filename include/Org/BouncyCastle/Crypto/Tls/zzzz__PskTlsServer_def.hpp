#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/PskTlsServer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PskTlsServer)
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
class TlsPskIdentityManager;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PskTlsServer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::PskTlsServer);
// Type: Org.BouncyCastle.Crypto.Tls::PskTlsServer
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::PskTlsServer*
class CORDL_TYPE PskTlsServer : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
// Declarations
/// @brief Field mPskIdentityManager, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_mPskIdentityManager, put=__cordl_internal_set_mPskIdentityManager)) ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*  mPskIdentityManager;

/// @brief Method CreatePskKeyExchange, addr 0x23cc57c, size 0xc8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreatePskKeyExchange(int32_t  keyExchange) ;

/// @brief Method GetCipherSuites, addr 0x23cc378, size 0x70, virtual true, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetCipherSuites() ;

/// @brief Method GetCredentials, addr 0x23cc3e8, size 0xd4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetCredentials() ;

/// @brief Method GetDHParameters, addr 0x23cc320, size 0x58, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* GetDHParameters() ;

/// @brief Method GetKeyExchange, addr 0x23cc4bc, size 0xc0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange() ;

/// @brief Method GetRsaEncryptionCredentials, addr 0x23cc2e4, size 0x3c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* GetRsaEncryptionCredentials() ;

static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*  cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*  pskIdentityManager) ;

static inline ::Org::BouncyCastle::Crypto::Tls::PskTlsServer* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*  pskIdentityManager) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*& __cordl_internal_get_mPskIdentityManager() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*> const& __cordl_internal_get_mPskIdentityManager() const;

constexpr void __cordl_internal_set_mPskIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*  value) ;

/// @brief Method .ctor, addr 0x23cc2bc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*  cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*  pskIdentityManager) ;

/// @brief Method .ctor, addr 0x23cc248, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*  pskIdentityManager) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PskTlsServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PskTlsServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PskTlsServer(PskTlsServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PskTlsServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PskTlsServer(PskTlsServer const& ) = delete;

/// @brief Field mPskIdentityManager, offset: 0x90, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*  ___mPskIdentityManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::PskTlsServer, 0x98>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::PskTlsServer, ___mPskIdentityManager) == 0x90, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::PskTlsServer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::PskTlsServer*, "Org.BouncyCastle.Crypto.Tls", "PskTlsServer");
