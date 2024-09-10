#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/StreamBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class StreamBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::StreamBlockCipher);
// Type: Org.BouncyCastle.Crypto::StreamBlockCipher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::StreamBlockCipher*
class CORDL_TYPE StreamBlockCipher : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Field cipher, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cipher, put=__cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher*  cipher;

/// @brief Field oneByte, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_oneByte, put=__cordl_internal_set_oneByte)) ::ArrayW<uint8_t,::Array<uint8_t>*>  oneByte;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

/// @brief Method Init, addr 0x23fe34c, size 0xbc, virtual true, abstract: false, final true
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::StreamBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher) ;

/// @brief Method ProcessBytes, addr 0x23fe594, size 0x150, virtual true, abstract: false, final true
inline void ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset, addr 0x23fe6e4, size 0xa4, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method ReturnByte, addr 0x23fe4a8, size 0xec, virtual true, abstract: false, final true
inline uint8_t ReturnByte(uint8_t  input) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_cipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_cipher() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_oneByte() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_oneByte() ;

constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher*  value) ;

constexpr void __cordl_internal_set_oneByte(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x23fe1d4, size 0x178, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher) ;

/// @brief Method get_AlgorithmName, addr 0x23fe408, size 0xa0, virtual true, abstract: false, final true
inline ::StringW get_AlgorithmName() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamBlockCipher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamBlockCipher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamBlockCipher(StreamBlockCipher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamBlockCipher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamBlockCipher(StreamBlockCipher const& ) = delete;

/// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::IBlockCipher*  ___cipher;

/// @brief Field oneByte, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___oneByte;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::StreamBlockCipher, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::StreamBlockCipher, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::StreamBlockCipher, ___oneByte) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::StreamBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::StreamBlockCipher*, "Org.BouncyCastle.Crypto", "StreamBlockCipher");
