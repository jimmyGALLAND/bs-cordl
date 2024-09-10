#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP160R2Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP160R2Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160R2Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Field);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Field*
class CORDL_TYPE SecP160R2Field : public ::System::Object {
public:
// Declarations
/// @brief Field P, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_P, put=setStaticF_P)) ::ArrayW<uint32_t,::Array<uint32_t>*>  P;

/// @brief Field PExt, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_PExt, put=setStaticF_PExt)) ::ArrayW<uint32_t,::Array<uint32_t>*>  PExt;

/// @brief Field PExtInv, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_PExtInv, put=setStaticF_PExtInv)) ::ArrayW<uint32_t,::Array<uint32_t>*>  PExtInv;

/// @brief Method Add, addr 0x24177bc, size 0xd8, virtual false, abstract: false, final false
static inline void Add(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddExt, addr 0x2417894, size 0x134, virtual false, abstract: false, final false
static inline void AddExt(::ArrayW<uint32_t,::Array<uint32_t>*>  xx, ::ArrayW<uint32_t,::Array<uint32_t>*>  yy, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method AddOne, addr 0x24179c8, size 0xc8, virtual false, abstract: false, final false
static inline void AddOne(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method FromBigInteger, addr 0x2417a90, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method Half, addr 0x2417b5c, size 0xbc, virtual false, abstract: false, final false
static inline void Half(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Inv, addr 0x2417c18, size 0x344, virtual false, abstract: false, final false
static inline void Inv(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method IsZero, addr 0x2417f5c, size 0x54, virtual false, abstract: false, final false
static inline int32_t IsZero(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method Multiply, addr 0x2418030, size 0x88, virtual false, abstract: false, final false
static inline void Multiply(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method MultiplyAddToExt, addr 0x2418274, size 0x130, virtual false, abstract: false, final false
static inline void MultiplyAddToExt(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Negate, addr 0x24183a4, size 0x98, virtual false, abstract: false, final false
static inline void Negate(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Field* New_ctor() ;

/// @brief Method Random, addr 0x24171c8, size 0xd8, virtual false, abstract: false, final false
static inline void Random(::Org::BouncyCastle::Security::SecureRandom*  r, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method RandomMult, addr 0x2417364, size 0x6c, virtual false, abstract: false, final false
static inline void RandomMult(::Org::BouncyCastle::Security::SecureRandom*  r, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Reduce, addr 0x2418184, size 0xf0, virtual false, abstract: false, final false
static inline void Reduce(::ArrayW<uint32_t,::Array<uint32_t>*>  xx, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Reduce32, addr 0x241843c, size 0xd0, virtual false, abstract: false, final false
static inline void Reduce32(uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Square, addr 0x2417fb0, size 0x80, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SquareN, addr 0x24180b8, size 0xcc, virtual false, abstract: false, final false
static inline void SquareN(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  n, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Subtract, addr 0x241850c, size 0x34, virtual false, abstract: false, final false
static inline void Subtract(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubtractExt, addr 0x2418540, size 0xe4, virtual false, abstract: false, final false
static inline void SubtractExt(::ArrayW<uint32_t,::Array<uint32_t>*>  xx, ::ArrayW<uint32_t,::Array<uint32_t>*>  yy, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Twice, addr 0x2418624, size 0xcc, virtual false, abstract: false, final false
static inline void Twice(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method .ctor, addr 0x2418804, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_P() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_PExt() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_PExtInv() ;

static inline void setStaticF_P(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_PExt(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_PExtInv(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecP160R2Field() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecP160R2Field", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecP160R2Field(SecP160R2Field && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecP160R2Field", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecP160R2Field(SecP160R2Field const& ) = delete;

/// @brief Field P4 offset 0xffffffff size 0x4
static constexpr uint32_t  P4{static_cast<uint32_t>(0xc0ffffu)};

/// @brief Field PExt9 offset 0xffffffff size 0x4
static constexpr uint32_t  PExt9{static_cast<uint32_t>(0x5300c0ffu)};

/// @brief Field PInv33 offset 0xffffffff size 0x4
static constexpr uint32_t  PInv33{static_cast<uint32_t>(0x8d5300c0u)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Field, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2Field");
