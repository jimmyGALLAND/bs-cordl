#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/SM3Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM3Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class SM3Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::SM3Digest);
// Type: Org.BouncyCastle.Crypto.Digests::SM3Digest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::SM3Digest*
class CORDL_TYPE SM3Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Field T, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_T, put=setStaticF_T)) ::ArrayW<uint32_t,::Array<uint32_t>*>  T;

/// @brief Field V, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_V, put=__cordl_internal_set_V)) ::ArrayW<uint32_t,::Array<uint32_t>*>  V;

/// @brief Field W, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_W, put=__cordl_internal_set_W)) ::ArrayW<uint32_t,::Array<uint32_t>*>  W;

/// @brief Field inwords, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_inwords, put=__cordl_internal_set_inwords)) ::ArrayW<uint32_t,::Array<uint32_t>*>  inwords;

/// @brief Field xOff, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_xOff, put=__cordl_internal_set_xOff)) int32_t  xOff;

/// @brief Method Copy, addr 0x22e9934, size 0x58, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Utilities::IMemoable* Copy() ;

/// @brief Method CopyIn, addr 0x22e9880, size 0x6c, virtual false, abstract: false, final false
inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::SM3Digest*  t) ;

/// @brief Method DoFinal, addr 0x22e9aec, size 0x54, virtual true, abstract: false, final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method FF0, addr 0x22e9cc0, size 0xc, virtual false, abstract: false, final false
inline uint32_t FF0(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method FF1, addr 0x22e9ccc, size 0x14, virtual false, abstract: false, final false
inline uint32_t FF1(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method GG0, addr 0x22e9ce0, size 0xc, virtual false, abstract: false, final false
inline uint32_t GG0(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method GG1, addr 0x22e9cec, size 0x10, virtual false, abstract: false, final false
inline uint32_t GG1(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method GetDigestSize, addr 0x22e992c, size 0x8, virtual true, abstract: false, final false
inline int32_t GetDigestSize() ;

static inline ::Org::BouncyCastle::Crypto::Digests::SM3Digest* New_ctor() ;

static inline ::Org::BouncyCastle::Crypto::Digests::SM3Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::SM3Digest*  t) ;

/// @brief Method P0, addr 0x22e9ca8, size 0xc, virtual false, abstract: false, final false
inline uint32_t P0(uint32_t  x) ;

/// @brief Method P1, addr 0x22e9cb4, size 0xc, virtual false, abstract: false, final false
inline uint32_t P1(uint32_t  x) ;

/// @brief Method ProcessBlock, addr 0x22e9cfc, size 0x3dc, virtual true, abstract: false, final false
inline void ProcessBlock() ;

/// @brief Method ProcessLength, addr 0x22e9bb4, size 0xf4, virtual true, abstract: false, final false
inline void ProcessLength(int64_t  bitLength) ;

/// @brief Method ProcessWord, addr 0x22e9b40, size 0x74, virtual true, abstract: false, final false
inline void ProcessWord(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff) ;

/// @brief Method Reset, addr 0x22e9a20, size 0xcc, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x22e998c, size 0x94, virtual true, abstract: false, final false
inline void Reset(::Org::BouncyCastle::Utilities::IMemoable*  other) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __cordl_internal_get_V() const;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __cordl_internal_get_V() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __cordl_internal_get_W() const;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __cordl_internal_get_W() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __cordl_internal_get_inwords() const;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __cordl_internal_get_inwords() ;

constexpr int32_t const& __cordl_internal_get_xOff() const;

constexpr int32_t& __cordl_internal_get_xOff() ;

constexpr void __cordl_internal_set_V(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr void __cordl_internal_set_W(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr void __cordl_internal_set_inwords(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr void __cordl_internal_set_xOff(int32_t  value) ;

/// @brief Method .ctor, addr 0x22e9760, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x22e97ec, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Digests::SM3Digest*  t) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_T() ;

/// @brief Method get_AlgorithmName, addr 0x22e98ec, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_AlgorithmName() ;

static inline void setStaticF_T(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SM3Digest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SM3Digest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SM3Digest(SM3Digest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SM3Digest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SM3Digest(SM3Digest const& ) = delete;

/// @brief Field V, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  ___V;

/// @brief Field inwords, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  ___inwords;

/// @brief Field xOff, offset: 0x38, size: 0x4, def value: None
 int32_t  ___xOff;

/// @brief Field W, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  ___W;

/// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  BLOCK_SIZE{static_cast<int32_t>(0x10)};

/// @brief Field DIGEST_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  DIGEST_LENGTH{static_cast<int32_t>(0x20)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::SM3Digest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SM3Digest, ___V) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SM3Digest, ___inwords) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SM3Digest, ___xOff) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SM3Digest, ___W) == 0x40, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::SM3Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::SM3Digest*, "Org.BouncyCastle.Crypto.Digests", "SM3Digest");
