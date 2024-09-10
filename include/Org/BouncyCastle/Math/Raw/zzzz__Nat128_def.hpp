#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Nat128.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat128)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat128;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat128);
// Type: Org.BouncyCastle.Math.Raw::Nat128
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat128*
class CORDL_TYPE Nat128 : public ::System::Object {
public:
// Declarations
/// @brief Method Add, addr 0x249535c, size 0xdc, virtual false, abstract: false, final false
static inline uint32_t Add(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddBothTo, addr 0x2495438, size 0xf8, virtual false, abstract: false, final false
static inline uint32_t AddBothTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddTo, addr 0x24955e4, size 0xfc, virtual false, abstract: false, final false
static inline uint32_t AddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, uint32_t  cIn) ;

/// @brief Method AddTo, addr 0x2495530, size 0xb4, virtual false, abstract: false, final false
static inline uint32_t AddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddToEachOther, addr 0x24956e0, size 0x10c, virtual false, abstract: false, final false
static inline uint32_t AddToEachOther(::ArrayW<uint32_t,::Array<uint32_t>*>  u, int32_t  uOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  v, int32_t  vOff) ;

/// @brief Method Copy, addr 0x2495868, size 0xbc, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Copy, addr 0x24957ec, size 0x7c, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Copy64, addr 0x2495974, size 0x74, virtual false, abstract: false, final false
static inline void Copy64(::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  xOff, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method Copy64, addr 0x2495924, size 0x50, virtual false, abstract: false, final false
static inline void Copy64(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Create, addr 0x24959e8, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Create() ;

/// @brief Method Create64, addr 0x2495a2c, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> Create64() ;

/// @brief Method CreateExt, addr 0x2495a70, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> CreateExt() ;

/// @brief Method CreateExt64, addr 0x2495ab4, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> CreateExt64() ;

/// @brief Method Diff, addr 0x2495af8, size 0x7c, virtual false, abstract: false, final false
static inline bool Diff(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Eq, addr 0x2495d2c, size 0x68, virtual false, abstract: false, final false
static inline bool Eq(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Eq64, addr 0x2495d94, size 0x64, virtual false, abstract: false, final false
static inline bool Eq64(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y) ;

/// @brief Method FromBigInteger, addr 0x2495df8, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method FromBigInteger64, addr 0x2495ed0, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> FromBigInteger64(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method GetBit, addr 0x2495fa8, size 0x64, virtual false, abstract: false, final false
static inline uint32_t GetBit(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  bit) ;

/// @brief Method Gte, addr 0x2495b74, size 0x7c, virtual false, abstract: false, final false
static inline bool Gte(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff) ;

/// @brief Method Gte, addr 0x249600c, size 0x6c, virtual false, abstract: false, final false
static inline bool Gte(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method IsOne, addr 0x2496078, size 0x6c, virtual false, abstract: false, final false
static inline bool IsOne(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method IsOne64, addr 0x24960e4, size 0x4c, virtual false, abstract: false, final false
static inline bool IsOne64(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method IsZero, addr 0x2496130, size 0x54, virtual false, abstract: false, final false
static inline bool IsZero(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method IsZero64, addr 0x2496184, size 0x54, virtual false, abstract: false, final false
static inline bool IsZero64(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method Mul, addr 0x249630c, size 0x1e4, virtual false, abstract: false, final false
static inline void Mul(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Mul, addr 0x24961d8, size 0x134, virtual false, abstract: false, final false
static inline void Mul(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Mul33Add, addr 0x2496774, size 0x14c, virtual false, abstract: false, final false
static inline uint64_t Mul33Add(uint32_t  w, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Mul33DWordAdd, addr 0x24969b8, size 0xa4, virtual false, abstract: false, final false
static inline uint32_t Mul33DWordAdd(uint32_t  x, uint64_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Mul33WordAdd, addr 0x2496a5c, size 0xa8, virtual false, abstract: false, final false
static inline uint32_t Mul33WordAdd(uint32_t  x, uint32_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulAddTo, addr 0x2496600, size 0x174, virtual false, abstract: false, final false
static inline uint32_t MulAddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method MulAddTo, addr 0x24964f0, size 0x110, virtual false, abstract: false, final false
static inline uint32_t MulAddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method MulWord, addr 0x2496c54, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t MulWord(uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulWordAddExt, addr 0x24968c0, size 0xf8, virtual false, abstract: false, final false
static inline uint32_t MulWordAddExt(uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  yy, int32_t  yyOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method MulWordDwordAdd, addr 0x2496b04, size 0xac, virtual false, abstract: false, final false
static inline uint32_t MulWordDwordAdd(uint32_t  x, uint64_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulWordsAdd, addr 0x2496bb0, size 0xa4, virtual false, abstract: false, final false
static inline uint32_t MulWordsAdd(uint32_t  x, uint32_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

static inline ::Org::BouncyCastle::Math::Raw::Nat128* New_ctor() ;

/// @brief Method Square, addr 0x2496e74, size 0x220, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Square, addr 0x2496cd0, size 0x1a4, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Sub, addr 0x2495bf0, size 0x13c, virtual false, abstract: false, final false
static inline int32_t Sub(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Sub, addr 0x2497094, size 0xdc, virtual false, abstract: false, final false
static inline int32_t Sub(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubBothFrom, addr 0x2497170, size 0xf8, virtual false, abstract: false, final false
static inline int32_t SubBothFrom(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubFrom, addr 0x249731c, size 0xf8, virtual false, abstract: false, final false
static inline int32_t SubFrom(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubFrom, addr 0x2497268, size 0xb4, virtual false, abstract: false, final false
static inline int32_t SubFrom(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ToBigInteger, addr 0x2497414, size 0xe0, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method ToBigInteger64, addr 0x24974f4, size 0xe0, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method Zero, addr 0x24975d4, size 0x48, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method .ctor, addr 0x249761c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Nat128() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Nat128", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Nat128(Nat128 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Nat128", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Nat128(Nat128 const& ) = delete;

/// @brief Field M offset 0xffffffff size 0x8
static constexpr uint64_t  M{static_cast<uint64_t>(0xffffffffu)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat128, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat128);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat128*, "Org.BouncyCastle.Math.Raw", "Nat128");
