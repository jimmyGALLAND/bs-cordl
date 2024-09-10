#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/BufferedCipherBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedCipherBase)
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedCipherBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::BufferedCipherBase);
// Type: Org.BouncyCastle.Crypto::BufferedCipherBase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::BufferedCipherBase*
class CORDL_TYPE BufferedCipherBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Field EmptyBuffer, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_EmptyBuffer, put=setStaticF_EmptyBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  EmptyBuffer;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBufferedCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBufferedCipher*() noexcept;

/// @brief Method DoFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal() ;

/// @brief Method DoFinal, addr 0x2357688, size 0x28, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method DoFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method DoFinal, addr 0x2357794, size 0x5c, virtual true, abstract: false, final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method DoFinal, addr 0x2357764, size 0x30, virtual true, abstract: false, final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method DoFinal, addr 0x23576b0, size 0xb4, virtual true, abstract: false, final false
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method GetBlockSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetBlockSize() ;

/// @brief Method GetOutputSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetOutputSize(int32_t  inputLen) ;

/// @brief Method GetUpdateOutputSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetUpdateOutputSize(int32_t  inputLen) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::BufferedCipherBase* New_ctor() ;

/// @brief Method ProcessByte, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessByte(uint8_t  input) ;

/// @brief Method ProcessByte, addr 0x23574d0, size 0xb0, virtual true, abstract: false, final false
inline int32_t ProcessByte(uint8_t  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method ProcessBytes, addr 0x2357580, size 0x28, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method ProcessBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length) ;

/// @brief Method ProcessBytes, addr 0x23575d8, size 0xb0, virtual true, abstract: false, final false
inline int32_t ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method ProcessBytes, addr 0x23575a8, size 0x30, virtual true, abstract: false, final false
inline int32_t ProcessBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0x2357858, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_EmptyBuffer() ;

/// @brief Method get_AlgorithmName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_AlgorithmName() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IBufferedCipher"
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* i___Org__BouncyCastle__Crypto__IBufferedCipher() noexcept;

static inline void setStaticF_EmptyBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedCipherBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedCipherBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedCipherBase(BufferedCipherBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedCipherBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedCipherBase(BufferedCipherBase const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::BufferedCipherBase, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedCipherBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedCipherBase*, "Org.BouncyCastle.Crypto", "BufferedCipherBase");
