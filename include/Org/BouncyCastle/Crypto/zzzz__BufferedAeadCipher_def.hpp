#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/BufferedAeadCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedAeadCipher)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedAeadCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::BufferedAeadCipher);
// Type: Org.BouncyCastle.Crypto::BufferedAeadCipher
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::BufferedAeadCipher*
class CORDL_TYPE BufferedAeadCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Field cipher, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cipher, put=__cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*  cipher;

/// @brief Method DoFinal, addr 0x23fc1b4, size 0xd4, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal() ;

/// @brief Method DoFinal, addr 0x23fc288, size 0x178, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  inLen) ;

/// @brief Method DoFinal, addr 0x23fc400, size 0xbc, virtual true, abstract: false, final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method GetBlockSize, addr 0x23fbc58, size 0x8, virtual true, abstract: false, final false
inline int32_t GetBlockSize() ;

/// @brief Method GetOutputSize, addr 0x23fbd0c, size 0xac, virtual true, abstract: false, final false
inline int32_t GetOutputSize(int32_t  length) ;

/// @brief Method GetUpdateOutputSize, addr 0x23fbc60, size 0xac, virtual true, abstract: false, final false
inline int32_t GetUpdateOutputSize(int32_t  length) ;

/// @brief Method Init, addr 0x23fbb54, size 0x104, virtual true, abstract: false, final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::BufferedAeadCipher* New_ctor(::Org::BouncyCastle::Crypto::Modes::IAeadCipher*  cipher) ;

/// @brief Method ProcessByte, addr 0x23fbe7c, size 0xf0, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessByte(uint8_t  input) ;

/// @brief Method ProcessByte, addr 0x23fbdb8, size 0xc4, virtual true, abstract: false, final false
inline int32_t ProcessByte(uint8_t  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method ProcessBytes, addr 0x23fbf6c, size 0x16c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method ProcessBytes, addr 0x23fc0d8, size 0xdc, virtual true, abstract: false, final false
inline int32_t ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset, addr 0x23fc4bc, size 0xa4, virtual true, abstract: false, final false
inline void Reset() ;

constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*& __cordl_internal_get_cipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*> const& __cordl_internal_get_cipher() const;

constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Modes::IAeadCipher*  value) ;

/// @brief Method .ctor, addr 0x23fb9fc, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Modes::IAeadCipher*  cipher) ;

/// @brief Method get_AlgorithmName, addr 0x23fbab4, size 0xa0, virtual true, abstract: false, final false
inline ::StringW get_AlgorithmName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedAeadCipher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedAeadCipher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedAeadCipher(BufferedAeadCipher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAeadCipher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedAeadCipher(BufferedAeadCipher const& ) = delete;

/// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*  ___cipher;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::BufferedAeadCipher, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::BufferedAeadCipher, ___cipher) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedAeadCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedAeadCipher*, "Org.BouncyCastle.Crypto", "BufferedAeadCipher");
