#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/RC564Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC564Engine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC564Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC564Engine);
// Type: Org.BouncyCastle.Crypto.Engines::RC564Engine
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RC564Engine*
class CORDL_TYPE RC564Engine : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Field P64, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_P64, put=setStaticF_P64)) int64_t  P64;

/// @brief Field Q64, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Q64, put=setStaticF_Q64)) int64_t  Q64;

/// @brief Field _S, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__S, put=__cordl_internal_set__S)) ::ArrayW<int64_t,::Array<int64_t>*>  _S;

/// @brief Field _noRounds, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__noRounds, put=__cordl_internal_set__noRounds)) int32_t  _noRounds;

/// @brief Field bytesPerWord, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_bytesPerWord, put=setStaticF_bytesPerWord)) int32_t  bytesPerWord;

/// @brief Field forEncryption, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_forEncryption, put=__cordl_internal_set_forEncryption)) bool  forEncryption;

/// @brief Field wordSize, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_wordSize, put=setStaticF_wordSize)) int32_t  wordSize;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

/// @brief Method BytesToWord, addr 0x231b33c, size 0xb0, virtual false, abstract: false, final false
inline int64_t BytesToWord(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  srcOff) ;

/// @brief Method DecryptBlock, addr 0x231af68, size 0x1a4, virtual false, abstract: false, final false
inline int32_t DecryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method EncryptBlock, addr 0x231b10c, size 0x1ac, virtual false, abstract: false, final false
inline int32_t EncryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method GetBlockSize, addr 0x231aaa4, size 0x5c, virtual true, abstract: false, final false
inline int32_t GetBlockSize() ;

/// @brief Method Init, addr 0x231ab00, size 0x198, virtual true, abstract: false, final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Engines::RC564Engine* New_ctor() ;

/// @brief Method ProcessBlock, addr 0x231af58, size 0x10, virtual true, abstract: false, final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset, addr 0x231b2b8, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method RotateLeft, addr 0x231b2bc, size 0x80, virtual false, abstract: false, final false
inline int64_t RotateLeft(int64_t  x, int64_t  y) ;

/// @brief Method RotateRight, addr 0x231b4ac, size 0x80, virtual false, abstract: false, final false
inline int64_t RotateRight(int64_t  x, int64_t  y) ;

/// @brief Method SetKey, addr 0x231ac98, size 0x2c0, virtual false, abstract: false, final false
inline void SetKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method WordToBytes, addr 0x231b3ec, size 0xc0, virtual false, abstract: false, final false
inline void WordToBytes(int64_t  word, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  dstOff) ;

constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& __cordl_internal_get__S() const;

constexpr ::ArrayW<int64_t,::Array<int64_t>*>& __cordl_internal_get__S() ;

constexpr int32_t const& __cordl_internal_get__noRounds() const;

constexpr int32_t& __cordl_internal_get__noRounds() ;

constexpr bool const& __cordl_internal_get_forEncryption() const;

constexpr bool& __cordl_internal_get_forEncryption() ;

constexpr void __cordl_internal_set__S(::ArrayW<int64_t,::Array<int64_t>*>  value) ;

constexpr void __cordl_internal_set__noRounds(int32_t  value) ;

constexpr void __cordl_internal_set_forEncryption(bool  value) ;

/// @brief Method .ctor, addr 0x231aa3c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int64_t getStaticF_P64() ;

static inline int64_t getStaticF_Q64() ;

static inline int32_t getStaticF_bytesPerWord() ;

static inline int32_t getStaticF_wordSize() ;

/// @brief Method get_AlgorithmName, addr 0x231aa5c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay, addr 0x231aa9c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

static inline void setStaticF_P64(int64_t  value) ;

static inline void setStaticF_Q64(int64_t  value) ;

static inline void setStaticF_bytesPerWord(int32_t  value) ;

static inline void setStaticF_wordSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RC564Engine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RC564Engine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RC564Engine(RC564Engine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RC564Engine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RC564Engine(RC564Engine const& ) = delete;

/// @brief Field _noRounds, offset: 0x10, size: 0x4, def value: None
 int32_t  ____noRounds;

/// @brief Field _S, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int64_t,::Array<int64_t>*>  ____S;

/// @brief Field forEncryption, offset: 0x20, size: 0x1, def value: None
 bool  ___forEncryption;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC564Engine, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC564Engine, ____noRounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC564Engine, ____S) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC564Engine, ___forEncryption) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC564Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC564Engine*, "Org.BouncyCastle.Crypto.Engines", "RC564Engine");
