#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP256R1Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP256R1Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP256R1Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Field);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP256R1Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP256R1Field*
class CORDL_TYPE SecP256R1Field : public ::System::Object {
public:
// Declarations
/// @brief Field P, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_P, put=setStaticF_P)) ::ArrayW<uint32_t,::Array<uint32_t>*>  P;

/// @brief Field PExt, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_PExt, put=setStaticF_PExt)) ::ArrayW<uint32_t,::Array<uint32_t>*>  PExt;

/// @brief Method Add, addr 0x242d6f8, size 0xdc, virtual false, abstract: false, final false
static inline void Add(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddExt, addr 0x242d8c4, size 0xf8, virtual false, abstract: false, final false
static inline void AddExt(::ArrayW<uint32_t,::Array<uint32_t>*>  xx, ::ArrayW<uint32_t,::Array<uint32_t>*>  yy, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method AddOne, addr 0x242d9bc, size 0xcc, virtual false, abstract: false, final false
static inline void AddOne(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddPInvTo, addr 0x242d7d4, size 0xf0, virtual false, abstract: false, final false
static inline void AddPInvTo(::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method FromBigInteger, addr 0x242da88, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method Half, addr 0x242db54, size 0xbc, virtual false, abstract: false, final false
static inline void Half(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Inv, addr 0x242dc10, size 0x2c8, virtual false, abstract: false, final false
static inline void Inv(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method IsZero, addr 0x242ded8, size 0x54, virtual false, abstract: false, final false
static inline int32_t IsZero(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method Multiply, addr 0x242dfac, size 0x88, virtual false, abstract: false, final false
static inline void Multiply(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method MultiplyAddToExt, addr 0x242e2e8, size 0xf4, virtual false, abstract: false, final false
static inline void MultiplyAddToExt(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Negate, addr 0x242e3dc, size 0x98, virtual false, abstract: false, final false
static inline void Negate(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Field* New_ctor() ;

/// @brief Method Random, addr 0x242d0f8, size 0xd8, virtual false, abstract: false, final false
static inline void Random(::Org::BouncyCastle::Security::SecureRandom*  r, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method RandomMult, addr 0x242d294, size 0x6c, virtual false, abstract: false, final false
static inline void RandomMult(::Org::BouncyCastle::Security::SecureRandom*  r, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Reduce, addr 0x242e100, size 0x1e8, virtual false, abstract: false, final false
static inline void Reduce(::ArrayW<uint32_t,::Array<uint32_t>*>  xx, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Reduce32, addr 0x242e474, size 0x198, virtual false, abstract: false, final false
static inline void Reduce32(uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Square, addr 0x242df2c, size 0x80, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SquareN, addr 0x242e034, size 0xcc, virtual false, abstract: false, final false
static inline void SquareN(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  n, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubPInvFrom, addr 0x242e698, size 0xf0, virtual false, abstract: false, final false
static inline void SubPInvFrom(::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Subtract, addr 0x242e60c, size 0x8c, virtual false, abstract: false, final false
static inline void Subtract(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubtractExt, addr 0x242e788, size 0xa4, virtual false, abstract: false, final false
static inline void SubtractExt(::ArrayW<uint32_t,::Array<uint32_t>*>  xx, ::ArrayW<uint32_t,::Array<uint32_t>*>  yy, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Twice, addr 0x242e82c, size 0xd0, virtual false, abstract: false, final false
static inline void Twice(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method .ctor, addr 0x242e9cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_P() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_PExt() ;

static inline void setStaticF_P(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_PExt(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecP256R1Field() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecP256R1Field", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecP256R1Field(SecP256R1Field && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecP256R1Field", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecP256R1Field(SecP256R1Field const& ) = delete;

/// @brief Field P7 offset 0xffffffff size 0x4
static constexpr uint32_t  P7{static_cast<uint32_t>(0x1804feffu)};

/// @brief Field PExt15 offset 0xffffffff size 0x4
static constexpr uint32_t  PExt15{static_cast<uint32_t>(0xff1804feu)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Field, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256R1Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP256R1Field");
