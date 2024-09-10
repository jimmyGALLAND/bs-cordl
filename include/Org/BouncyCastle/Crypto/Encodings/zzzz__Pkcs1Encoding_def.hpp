#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Encodings/Pkcs1Encoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs1Encoding)
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Encodings {
class Pkcs1Encoding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding);
// Type: Org.BouncyCastle.Crypto.Encodings::Pkcs1Encoding
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Encodings::Pkcs1Encoding*
class CORDL_TYPE Pkcs1Encoding : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Field blockBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockBuffer, put=__cordl_internal_set_blockBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  blockBuffer;

/// @brief Field engine, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_engine, put=__cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  engine;

/// @brief Field fallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallback, put=__cordl_internal_set_fallback)) ::ArrayW<uint8_t,::Array<uint8_t>*>  fallback;

/// @brief Field forEncryption, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_forEncryption, put=__cordl_internal_set_forEncryption)) bool  forEncryption;

/// @brief Field forPrivateKey, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_forPrivateKey, put=__cordl_internal_set_forPrivateKey)) bool  forPrivateKey;

/// @brief Field pLen, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_pLen, put=__cordl_internal_set_pLen)) int32_t  pLen;

/// @brief Field random, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

/// @brief Field strictLengthEnabled, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_strictLengthEnabled, put=setStaticF_strictLengthEnabled)) ::ArrayW<bool,::Array<bool>*>  strictLengthEnabled;

/// @brief Field useStrictLength, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_useStrictLength, put=__cordl_internal_set_useStrictLength)) bool  useStrictLength;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

/// @brief Method CheckPkcs1Encoding, addr 0x22f59d0, size 0xa4, virtual false, abstract: false, final false
static inline int32_t CheckPkcs1Encoding(::ArrayW<uint8_t,::Array<uint8_t>*>  encoded, int32_t  pLen) ;

/// @brief Method DecodeBlock, addr 0x22f53e4, size 0x2e8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  inLen) ;

/// @brief Method DecodeBlockOrRandom, addr 0x22f5a74, size 0x2f8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeBlockOrRandom(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  inLen) ;

/// @brief Method EncodeBlock, addr 0x22f56cc, size 0x304, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> EncodeBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  inLen) ;

/// @brief Method FindStart, addr 0x22f5d6c, size 0x9c, virtual false, abstract: false, final false
inline int32_t FindStart(uint8_t  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  block) ;

/// @brief Method GetInputBlockSize, addr 0x22f5264, size 0xb8, virtual true, abstract: false, final true
inline int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize, addr 0x22f531c, size 0xb8, virtual true, abstract: false, final true
inline int32_t GetOutputBlockSize() ;

/// @brief Method GetUnderlyingCipher, addr 0x22f4ec8, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher() ;

/// @brief Method Init, addr 0x22f4f90, size 0x2d4, virtual true, abstract: false, final true
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher) ;

static inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::ArrayW<uint8_t,::Array<uint8_t>*>  fallback) ;

static inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, int32_t  pLen) ;

/// @brief Method ProcessBlock, addr 0x22f53d4, size 0x10, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_blockBuffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_blockBuffer() ;

constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_engine() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __cordl_internal_get_engine() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_fallback() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_fallback() ;

constexpr bool const& __cordl_internal_get_forEncryption() const;

constexpr bool& __cordl_internal_get_forEncryption() ;

constexpr bool const& __cordl_internal_get_forPrivateKey() const;

constexpr bool& __cordl_internal_get_forPrivateKey() ;

constexpr int32_t const& __cordl_internal_get_pLen() const;

constexpr int32_t& __cordl_internal_get_pLen() ;

constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

constexpr bool const& __cordl_internal_get_useStrictLength() const;

constexpr bool& __cordl_internal_get_useStrictLength() ;

constexpr void __cordl_internal_set_blockBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  value) ;

constexpr void __cordl_internal_set_fallback(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_forEncryption(bool  value) ;

constexpr void __cordl_internal_set_forPrivateKey(bool  value) ;

constexpr void __cordl_internal_set_pLen(int32_t  value) ;

constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr void __cordl_internal_set_useStrictLength(bool  value) ;

/// @brief Method .ctor, addr 0x22f4d1c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher) ;

/// @brief Method .ctor, addr 0x22f4e2c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, ::ArrayW<uint8_t,::Array<uint8_t>*>  fallback) ;

/// @brief Method .ctor, addr 0x22f4da0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  cipher, int32_t  pLen) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_strictLengthEnabled() ;

/// @brief Method get_AlgorithmName, addr 0x22f4ed0, size 0xc0, virtual true, abstract: false, final true
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_StrictLengthEnabled, addr 0x22f4b18, size 0x70, virtual false, abstract: false, final false
static inline bool get_StrictLengthEnabled() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept;

static inline void setStaticF_strictLengthEnabled(::ArrayW<bool,::Array<bool>*>  value) ;

/// @brief Method set_StrictLengthEnabled, addr 0x22f4b88, size 0x78, virtual false, abstract: false, final false
static inline void set_StrictLengthEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pkcs1Encoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pkcs1Encoding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pkcs1Encoding(Pkcs1Encoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs1Encoding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pkcs1Encoding(Pkcs1Encoding const& ) = delete;

/// @brief Field random, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Security::SecureRandom*  ___random;

/// @brief Field engine, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*  ___engine;

/// @brief Field forEncryption, offset: 0x20, size: 0x1, def value: None
 bool  ___forEncryption;

/// @brief Field forPrivateKey, offset: 0x21, size: 0x1, def value: None
 bool  ___forPrivateKey;

/// @brief Field useStrictLength, offset: 0x22, size: 0x1, def value: None
 bool  ___useStrictLength;

/// @brief Field pLen, offset: 0x24, size: 0x4, def value: None
 int32_t  ___pLen;

/// @brief Field fallback, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___fallback;

/// @brief Field blockBuffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___blockBuffer;

/// @brief Field HeaderLength offset 0xffffffff size 0x4
static constexpr int32_t  HeaderLength{static_cast<int32_t>(0xa)};

/// @brief Field StrictLengthEnabledProperty offset 0xffffffff size 0x8
static constexpr ::ConstString  StrictLengthEnabledProperty{u"Org.BouncyCastle.Pkcs1.Strict"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, ___random) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, ___engine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, ___forEncryption) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, ___forPrivateKey) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, ___useStrictLength) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, ___pLen) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, ___fallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, ___blockBuffer) == 0x30, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*, "Org.BouncyCastle.Crypto.Encodings", "Pkcs1Encoding");
