#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsRsaUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsRsaUtilities)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsRsaUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities);
// Type: Org.BouncyCastle.Crypto.Tls::TlsRsaUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsRsaUtilities*
class CORDL_TYPE TlsRsaUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method GenerateEncryptedPreMasterSecret, addr 0x23e8ce0, size 0x3ec, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateEncryptedPreMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*  rsaServerPublicKey, ::System::IO::Stream*  output) ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities* New_ctor() ;

/// @brief Method SafeDecryptPreMasterSecret, addr 0x23ea8d4, size 0x40c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> SafeDecryptPreMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*  rsaServerPrivateKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  encryptedPreMasterSecret) ;

/// @brief Method .ctor, addr 0x23eace0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TlsRsaUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsRsaUtilities(TlsRsaUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsRsaUtilities(TlsRsaUtilities const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsRsaUtilities");
