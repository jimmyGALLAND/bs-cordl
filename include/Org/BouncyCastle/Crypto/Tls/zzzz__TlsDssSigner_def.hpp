#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDssSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsDssSigner)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDssSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDssSigner);
// Type: Org.BouncyCastle.Crypto.Tls::TlsDssSigner
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDssSigner*
class CORDL_TYPE TlsDssSigner : public ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner {
public:
// Declarations
 __declspec(property(get=get_SignatureAlgorithm)) uint8_t  SignatureAlgorithm;

/// @brief Method CreateDsaImpl, addr 0x23dfac4, size 0xc0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IDsa* CreateDsaImpl(uint8_t  hashAlgorithm) ;

/// @brief Method IsValidPublicKey, addr 0x23dfa4c, size 0x78, virtual true, abstract: false, final false
inline bool IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey) ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner* New_ctor() ;

/// @brief Method .ctor, addr 0x23dc8a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SignatureAlgorithm, addr 0x23dfb84, size 0x8, virtual true, abstract: false, final false
inline uint8_t get_SignatureAlgorithm() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TlsDssSigner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TlsDssSigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsDssSigner(TlsDssSigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsDssSigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsDssSigner(TlsDssSigner const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDssSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*, "Org.BouncyCastle.Crypto.Tls", "TlsDssSigner");
