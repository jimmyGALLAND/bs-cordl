#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DefaultTlsCipherFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCipherFactory_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultTlsCipherFactory)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNullCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsCipherFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsCipherFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsCipherFactory*
class CORDL_TYPE DefaultTlsCipherFactory : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory {
public:
// Declarations
/// @brief Method CreateAESCipher, addr 0x239d008, size 0x100, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* CreateAESCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  cipherKeySize, int32_t  macAlgorithm) ;

/// @brief Method CreateAeadBlockCipher_Aes_Ccm, addr 0x239da18, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* CreateAeadBlockCipher_Aes_Ccm() ;

/// @brief Method CreateAeadBlockCipher_Aes_Gcm, addr 0x239da90, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* CreateAeadBlockCipher_Aes_Gcm() ;

/// @brief Method CreateAeadBlockCipher_Aes_Ocb, addr 0x239db08, size 0x94, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* CreateAeadBlockCipher_Aes_Ocb() ;

/// @brief Method CreateAeadBlockCipher_Camellia_Gcm, addr 0x239db9c, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* CreateAeadBlockCipher_Camellia_Gcm() ;

/// @brief Method CreateAesBlockCipher, addr 0x239d9a0, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateAesBlockCipher() ;

/// @brief Method CreateAesEngine, addr 0x239d8f8, size 0x54, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateAesEngine() ;

/// @brief Method CreateCamelliaBlockCipher, addr 0x239dc14, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateCamelliaBlockCipher() ;

/// @brief Method CreateCamelliaCipher, addr 0x239d108, size 0x100, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* CreateCamelliaCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  cipherKeySize, int32_t  macAlgorithm) ;

/// @brief Method CreateCamelliaEngine, addr 0x239d94c, size 0x54, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateCamelliaEngine() ;

/// @brief Method CreateChaCha20Poly1305, addr 0x239d208, size 0x58, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* CreateChaCha20Poly1305(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context) ;

/// @brief Method CreateCipher, addr 0x239ce44, size 0x1c4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  encryptionAlgorithm, int32_t  macAlgorithm) ;

/// @brief Method CreateCipher_Aes_Ccm, addr 0x239d260, size 0xbc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* CreateCipher_Aes_Ccm(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  cipherKeySize, int32_t  macSize) ;

/// @brief Method CreateCipher_Aes_Gcm, addr 0x239d31c, size 0xbc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* CreateCipher_Aes_Gcm(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  cipherKeySize, int32_t  macSize) ;

/// @brief Method CreateCipher_Aes_Ocb, addr 0x239d3d8, size 0xc0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* CreateCipher_Aes_Ocb(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  cipherKeySize, int32_t  macSize) ;

/// @brief Method CreateCipher_Camellia_Gcm, addr 0x239d498, size 0xbc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* CreateCipher_Camellia_Gcm(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  cipherKeySize, int32_t  macSize) ;

/// @brief Method CreateDesEdeBlockCipher, addr 0x239dc8c, size 0x80, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateDesEdeBlockCipher() ;

/// @brief Method CreateDesEdeCipher, addr 0x239d554, size 0xf4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* CreateDesEdeCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  macAlgorithm) ;

/// @brief Method CreateHMacDigest, addr 0x239dde0, size 0x144, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IDigest* CreateHMacDigest(int32_t  macAlgorithm) ;

/// @brief Method CreateNullCipher, addr 0x239d648, size 0xb0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsNullCipher* CreateNullCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  macAlgorithm) ;

/// @brief Method CreateRC4Cipher, addr 0x239d6f8, size 0x10c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher* CreateRC4Cipher(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  cipherKeySize, int32_t  macAlgorithm) ;

/// @brief Method CreateRC4StreamCipher, addr 0x239dd0c, size 0x54, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IStreamCipher* CreateRC4StreamCipher() ;

/// @brief Method CreateSeedBlockCipher, addr 0x239dd60, size 0x80, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IBlockCipher* CreateSeedBlockCipher() ;

/// @brief Method CreateSeedCipher, addr 0x239d804, size 0xf4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* CreateSeedCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, int32_t  macAlgorithm) ;

static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory* New_ctor() ;

/// @brief Method .ctor, addr 0x23943d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultTlsCipherFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsCipherFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultTlsCipherFactory(DefaultTlsCipherFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsCipherFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultTlsCipherFactory(DefaultTlsCipherFactory const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsCipherFactory");
