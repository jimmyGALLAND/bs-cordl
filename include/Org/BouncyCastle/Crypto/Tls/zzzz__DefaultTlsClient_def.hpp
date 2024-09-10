#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsClient;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsClient
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsClient*
class CORDL_TYPE DefaultTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
// Declarations
/// @brief Field mDHVerifier, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mDHVerifier, put=__cordl_internal_set_mDHVerifier)) ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*  mDHVerifier;

/// @brief Method CreateDHKeyExchange, addr 0x239e20c, size 0x7c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateDHKeyExchange(int32_t  keyExchange) ;

/// @brief Method CreateDheKeyExchange, addr 0x239e288, size 0x7c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateDheKeyExchange(int32_t  keyExchange) ;

/// @brief Method CreateECDHKeyExchange, addr 0x239e304, size 0x88, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateECDHKeyExchange(int32_t  keyExchange) ;

/// @brief Method CreateECDheKeyExchange, addr 0x239e38c, size 0x88, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateECDheKeyExchange(int32_t  keyExchange) ;

/// @brief Method CreateRsaKeyExchange, addr 0x239e414, size 0x60, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* CreateRsaKeyExchange() ;

/// @brief Method GetCipherSuites, addr 0x239e080, size 0x70, virtual true, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetCipherSuites() ;

/// @brief Method GetKeyExchange, addr 0x239e0f0, size 0x11c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange() ;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* New_ctor() ;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*  cipherFactory) ;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*  cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*  dhVerifier) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*& __cordl_internal_get_mDHVerifier() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*> const& __cordl_internal_get_mDHVerifier() const;

constexpr void __cordl_internal_set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*  value) ;

/// @brief Method .ctor, addr 0x239df24, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x239df80, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*  cipherFactory) ;

/// @brief Method .ctor, addr 0x239e050, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*  cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*  dhVerifier) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultTlsClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultTlsClient(DefaultTlsClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultTlsClient(DefaultTlsClient const& ) = delete;

/// @brief Field mDHVerifier, offset: 0x50, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*  ___mDHVerifier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient, ___mDHVerifier) == 0x50, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsClient");
