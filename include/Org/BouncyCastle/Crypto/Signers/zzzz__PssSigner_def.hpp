#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/PssSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PssSigner)
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
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
namespace Org::BouncyCastle::Crypto::Signers {
class PssSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::PssSigner);
// Type: Org.BouncyCastle.Crypto.Signers::PssSigner
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Signers::PssSigner*
class CORDL_TYPE PssSigner : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Field block, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_block, put=__cordl_internal_set_block)) ::ArrayW<uint8_t,::Array<uint8_t>*>  block;

/// @brief Field cipher, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cipher, put=__cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher;

/// @brief Field contentDigest1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentDigest1, put=__cordl_internal_set_contentDigest1)) ::Org::BouncyCastle::Crypto::IDigest*  contentDigest1;

/// @brief Field contentDigest2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentDigest2, put=__cordl_internal_set_contentDigest2)) ::Org::BouncyCastle::Crypto::IDigest*  contentDigest2;

/// @brief Field emBits, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_emBits, put=__cordl_internal_set_emBits)) int32_t  emBits;

/// @brief Field hLen, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_hLen, put=__cordl_internal_set_hLen)) int32_t  hLen;

/// @brief Field mDash, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_mDash, put=__cordl_internal_set_mDash)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mDash;

/// @brief Field mgfDigest, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mgfDigest, put=__cordl_internal_set_mgfDigest)) ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest;

/// @brief Field mgfhLen, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mgfhLen, put=__cordl_internal_set_mgfhLen)) int32_t  mgfhLen;

/// @brief Field random, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

/// @brief Field sLen, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_sLen, put=__cordl_internal_set_sLen)) int32_t  sLen;

/// @brief Field sSet, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_sSet, put=__cordl_internal_set_sSet)) bool  sSet;

/// @brief Field salt, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_salt, put=__cordl_internal_set_salt)) ::ArrayW<uint8_t,::Array<uint8_t>*>  salt;

/// @brief Field trailer, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_trailer, put=__cordl_internal_set_trailer)) uint8_t  trailer;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr operator  ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

/// @brief Method BlockUpdate, addr 0x238ee94, size 0xc4, virtual true, abstract: false, final false
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method ClearBlock, addr 0x238edc4, size 0x24, virtual false, abstract: false, final false
inline void ClearBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  block) ;

/// @brief Method CreateRawSigner, addr 0x238e7c4, size 0xc8, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* CreateRawSigner(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, int32_t  saltLen, uint8_t  trailer) ;

/// @brief Method CreateRawSigner, addr 0x238e4ec, size 0x12c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* CreateRawSigner(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method GenerateSignature, addr 0x238effc, size 0x438, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateSignature() ;

/// @brief Method Init, addr 0x238eb44, size 0x280, virtual true, abstract: false, final false
inline void Init(bool  forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method ItoOSP, addr 0x238fda0, size 0x54, virtual false, abstract: false, final false
inline void ItoOSP(int32_t  i, ::ArrayW<uint8_t,::Array<uint8_t>*>  sp) ;

/// @brief Method MaskGeneratorFunction1, addr 0x238f434, size 0x470, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> MaskGeneratorFunction1(::ArrayW<uint8_t,::Array<uint8_t>*>  Z, int32_t  zOff, int32_t  zLen, int32_t  length) ;

static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt) ;

static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, int32_t  saltLen) ;

static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, int32_t  saltLen, uint8_t  trailer) ;

static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest1, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest2, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, int32_t  saltLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, uint8_t  trailer) ;

static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest) ;

static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt) ;

static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest, int32_t  saltLen) ;

static inline ::Org::BouncyCastle::Crypto::Signers::PssSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest, int32_t  saltLen, uint8_t  trailer) ;

/// @brief Method Reset, addr 0x238ef58, size 0xa4, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0x238ede8, size 0xac, virtual true, abstract: false, final false
inline void Update(uint8_t  input) ;

/// @brief Method VerifySignature, addr 0x238f8a4, size 0x4fc, virtual true, abstract: false, final false
inline bool VerifySignature(::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_block() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_block() ;

constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_cipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __cordl_internal_get_cipher() const;

constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_contentDigest1() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_contentDigest1() const;

constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_contentDigest2() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_contentDigest2() const;

constexpr int32_t const& __cordl_internal_get_emBits() const;

constexpr int32_t& __cordl_internal_get_emBits() ;

constexpr int32_t const& __cordl_internal_get_hLen() const;

constexpr int32_t& __cordl_internal_get_hLen() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_mDash() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_mDash() ;

constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mgfDigest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_mgfDigest() const;

constexpr int32_t const& __cordl_internal_get_mgfhLen() const;

constexpr int32_t& __cordl_internal_get_mgfhLen() ;

constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

constexpr int32_t const& __cordl_internal_get_sLen() const;

constexpr int32_t& __cordl_internal_get_sLen() ;

constexpr bool const& __cordl_internal_get_sSet() const;

constexpr bool& __cordl_internal_get_sSet() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_salt() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_salt() ;

constexpr uint8_t const& __cordl_internal_get_trailer() const;

constexpr uint8_t& __cordl_internal_get_trailer() ;

constexpr void __cordl_internal_set_block(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  value) ;

constexpr void __cordl_internal_set_contentDigest1(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr void __cordl_internal_set_contentDigest2(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr void __cordl_internal_set_emBits(int32_t  value) ;

constexpr void __cordl_internal_set_hLen(int32_t  value) ;

constexpr void __cordl_internal_set_mDash(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_mgfDigest(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr void __cordl_internal_set_mgfhLen(int32_t  value) ;

constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr void __cordl_internal_set_sLen(int32_t  value) ;

constexpr void __cordl_internal_set_sSet(bool  value) ;

constexpr void __cordl_internal_set_salt(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_trailer(uint8_t  value) ;

/// @brief Method .ctor, addr 0x238ea50, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt) ;

/// @brief Method .ctor, addr 0x238e9f8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, int32_t  saltLen) ;

/// @brief Method .ctor, addr 0x238ea24, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, int32_t  saltLen, uint8_t  trailer) ;

/// @brief Method .ctor, addr 0x238e618, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest1, ::Org::BouncyCastle::Crypto::IDigest*  contentDigest2, ::Org::BouncyCastle::Crypto::IDigest*  mgfDigest, int32_t  saltLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, uint8_t  trailer) ;

/// @brief Method .ctor, addr 0x238e88c, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method .ctor, addr 0x238e9c4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt) ;

/// @brief Method .ctor, addr 0x238e96c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest, int32_t  saltLen) ;

/// @brief Method .ctor, addr 0x238e998, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::IDigest*  digest, int32_t  saltLen, uint8_t  trailer) ;

/// @brief Method get_AlgorithmName, addr 0x238ea84, size 0xc0, virtual true, abstract: false, final false
inline ::StringW get_AlgorithmName() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PssSigner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PssSigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PssSigner(PssSigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PssSigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PssSigner(PssSigner const& ) = delete;

/// @brief Field contentDigest1, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IDigest*  ___contentDigest1;

/// @brief Field contentDigest2, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IDigest*  ___contentDigest2;

/// @brief Field mgfDigest, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IDigest*  ___mgfDigest;

/// @brief Field cipher, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  ___cipher;

/// @brief Field random, offset: 0x30, size: 0x8, def value: None
 ::Org::BouncyCastle::Security::SecureRandom*  ___random;

/// @brief Field hLen, offset: 0x38, size: 0x4, def value: None
 int32_t  ___hLen;

/// @brief Field mgfhLen, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___mgfhLen;

/// @brief Field sLen, offset: 0x40, size: 0x4, def value: None
 int32_t  ___sLen;

/// @brief Field sSet, offset: 0x44, size: 0x1, def value: None
 bool  ___sSet;

/// @brief Field emBits, offset: 0x48, size: 0x4, def value: None
 int32_t  ___emBits;

/// @brief Field salt, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___salt;

/// @brief Field mDash, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___mDash;

/// @brief Field block, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___block;

/// @brief Field trailer, offset: 0x68, size: 0x1, def value: None
 uint8_t  ___trailer;

/// @brief Field TrailerImplicit offset 0xffffffff size 0x1
static constexpr uint8_t  TrailerImplicit{static_cast<uint8_t>(0xbcu)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::PssSigner, 0x70>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___contentDigest1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___contentDigest2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___mgfDigest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___cipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___random) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___hLen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___mgfhLen) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___sLen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___sSet) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___emBits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___salt) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___mDash) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___block) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::PssSigner, ___trailer) == 0x68, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::PssSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::PssSigner*, "Org.BouncyCastle.Crypto.Signers", "PssSigner");
