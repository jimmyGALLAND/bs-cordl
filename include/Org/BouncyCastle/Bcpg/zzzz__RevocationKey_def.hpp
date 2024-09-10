#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/RevocationKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RevocationKey)
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct RevocationKeyTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class RevocationKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::RevocationKey);
// Type: Org.BouncyCastle.Bcpg::RevocationKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::RevocationKey*
class CORDL_TYPE RevocationKey : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
 __declspec(property(get=get_Algorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  Algorithm;

 __declspec(property(get=get_SignatureClass)) ::Org::BouncyCastle::Bcpg::RevocationKeyTag  SignatureClass;

/// @brief Method CreateData, addr 0x25f308c, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> CreateData(::Org::BouncyCastle::Bcpg::RevocationKeyTag  signatureClass, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  keyAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  fingerprint) ;

/// @brief Method GetFingerprint, addr 0x25f318c, size 0x8c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetFingerprint() ;

static inline ::Org::BouncyCastle::Bcpg::RevocationKey* New_ctor(bool  isCritical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::RevocationKey* New_ctor(bool  isCritical, ::Org::BouncyCastle::Bcpg::RevocationKeyTag  signatureClass, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  keyAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  fingerprint) ;

/// @brief Method .ctor, addr 0x25f2ff0, size 0x48, virtual false, abstract: false, final false
inline void _ctor(bool  isCritical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor, addr 0x25f3038, size 0x54, virtual false, abstract: false, final false
inline void _ctor(bool  isCritical, ::Org::BouncyCastle::Bcpg::RevocationKeyTag  signatureClass, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  keyAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  fingerprint) ;

/// @brief Method get_Algorithm, addr 0x25f3160, size 0x2c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_Algorithm() ;

/// @brief Method get_SignatureClass, addr 0x25f3138, size 0x28, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Bcpg::RevocationKeyTag get_SignatureClass() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RevocationKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RevocationKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RevocationKey(RevocationKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevocationKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevocationKey(RevocationKey const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::RevocationKey, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::RevocationKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RevocationKey*, "Org.BouncyCastle.Bcpg", "RevocationKey");
