#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpV3SignatureGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpV3SignatureGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpV3SignatureGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpV3SignatureGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpV3SignatureGenerator*
class CORDL_TYPE PgpV3SignatureGenerator : public ::System::Object {
public:
// Declarations
/// @brief Field dig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dig, put=__cordl_internal_set_dig)) ::Org::BouncyCastle::Crypto::IDigest*  dig;

/// @brief Field hashAlgorithm, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_hashAlgorithm, put=__cordl_internal_set_hashAlgorithm)) ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  hashAlgorithm;

/// @brief Field keyAlgorithm, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_keyAlgorithm, put=__cordl_internal_set_keyAlgorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  keyAlgorithm;

/// @brief Field lastb, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastb, put=__cordl_internal_set_lastb)) uint8_t  lastb;

/// @brief Field privKey, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_privKey, put=__cordl_internal_set_privKey)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*  privKey;

/// @brief Field sig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sig, put=__cordl_internal_set_sig)) ::Org::BouncyCastle::Crypto::ISigner*  sig;

/// @brief Field signatureType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_signatureType, put=__cordl_internal_set_signatureType)) int32_t  signatureType;

/// @brief Method Generate, addr 0x2501df8, size 0x3c8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Generate() ;

/// @brief Method GenerateOnePassVersion, addr 0x2501d34, size 0xc4, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* GenerateOnePassVersion(bool  isNested) ;

/// @brief Method InitSign, addr 0x25015d8, size 0x8, virtual false, abstract: false, final false
inline void InitSign(int32_t  sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*  key) ;

/// @brief Method InitSign, addr 0x25015e0, size 0x258, virtual false, abstract: false, final false
inline void InitSign(int32_t  sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*  key, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  hashAlgorithm) ;

/// @brief Method Update, addr 0x25019f8, size 0x1a4, virtual false, abstract: false, final false
inline void Update(::ArrayW<uint8_t,::Array<uint8_t>*>  b) ;

/// @brief Method Update, addr 0x2501b9c, size 0x198, virtual false, abstract: false, final false
inline void Update(::ArrayW<uint8_t,::Array<uint8_t>*>  b, int32_t  off, int32_t  len) ;

/// @brief Method Update, addr 0x2501838, size 0x14, virtual false, abstract: false, final false
inline void Update(uint8_t  b) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_dig() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_dig() const;

constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __cordl_internal_get_hashAlgorithm() const;

constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __cordl_internal_get_hashAlgorithm() ;

constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __cordl_internal_get_keyAlgorithm() const;

constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __cordl_internal_get_keyAlgorithm() ;

constexpr uint8_t const& __cordl_internal_get_lastb() const;

constexpr uint8_t& __cordl_internal_get_lastb() ;

constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*& __cordl_internal_get_privKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*> const& __cordl_internal_get_privKey() const;

constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_sig() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __cordl_internal_get_sig() const;

constexpr int32_t const& __cordl_internal_get_signatureType() const;

constexpr int32_t& __cordl_internal_get_signatureType() ;

constexpr void __cordl_internal_set_dig(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag  value) ;

constexpr void __cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  value) ;

constexpr void __cordl_internal_set_lastb(uint8_t  value) ;

constexpr void __cordl_internal_set_privKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*  value) ;

constexpr void __cordl_internal_set_sig(::Org::BouncyCastle::Crypto::ISigner*  value) ;

constexpr void __cordl_internal_set_signatureType(int32_t  value) ;

/// @brief Method .ctor, addr 0x2501500, size 0xd8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  hashAlgorithm) ;

/// @brief Method doCanonicalUpdateByte, addr 0x250184c, size 0x64, virtual false, abstract: false, final false
inline void doCanonicalUpdateByte(uint8_t  b) ;

/// @brief Method doUpdateByte, addr 0x25018b0, size 0x128, virtual false, abstract: false, final false
inline void doUpdateByte(uint8_t  b) ;

/// @brief Method doUpdateCRLF, addr 0x25019d8, size 0x20, virtual false, abstract: false, final false
inline void doUpdateCRLF() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PgpV3SignatureGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PgpV3SignatureGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpV3SignatureGenerator(PgpV3SignatureGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpV3SignatureGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpV3SignatureGenerator(PgpV3SignatureGenerator const& ) = delete;

/// @brief Field keyAlgorithm, offset: 0x10, size: 0x4, def value: None
 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  ___keyAlgorithm;

/// @brief Field hashAlgorithm, offset: 0x14, size: 0x4, def value: None
 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag  ___hashAlgorithm;

/// @brief Field privKey, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*  ___privKey;

/// @brief Field sig, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::ISigner*  ___sig;

/// @brief Field dig, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IDigest*  ___dig;

/// @brief Field signatureType, offset: 0x30, size: 0x4, def value: None
 int32_t  ___signatureType;

/// @brief Field lastb, offset: 0x34, size: 0x1, def value: None
 uint8_t  ___lastb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___keyAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___hashAlgorithm) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___privKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___sig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___dig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___signatureType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___lastb) == 0x34, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpV3SignatureGenerator");
