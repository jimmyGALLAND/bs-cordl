#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT283Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT283Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT283Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT283Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT283Field*
class CORDL_TYPE SecT283Field : public ::System::Object {
public:
// Declarations
/// @brief Field ROOT_Z, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ROOT_Z, put=setStaticF_ROOT_Z)) ::ArrayW<uint64_t,::Array<uint64_t>*>  ROOT_Z;

/// @brief Method Add, addr 0x24599c0, size 0x108, virtual false, abstract: false, final false
static inline void Add(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method AddExt, addr 0x2459ac8, size 0x1c8, virtual false, abstract: false, final false
static inline void AddExt(::ArrayW<uint64_t,::Array<uint64_t>*>  xx, ::ArrayW<uint64_t,::Array<uint64_t>*>  yy, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method AddOne, addr 0x2459c90, size 0xa8, virtual false, abstract: false, final false
static inline void AddOne(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method AddTo, addr 0x2459d38, size 0xcc, virtual false, abstract: false, final false
static inline void AddTo(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method FromBigInteger, addr 0x2459e04, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method HalfTrace, addr 0x2459e14, size 0xc8, virtual false, abstract: false, final false
static inline void HalfTrace(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method ImplCompactExt, addr 0x245adf8, size 0xd8, virtual false, abstract: false, final false
static inline void ImplCompactExt(::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method ImplExpand, addr 0x245aed0, size 0xac, virtual false, abstract: false, final false
static inline void ImplExpand(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method ImplMultiply, addr 0x245a4e0, size 0x5ac, virtual false, abstract: false, final false
static inline void ImplMultiply(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method ImplMulw, addr 0x245af7c, size 0x1a4, virtual false, abstract: false, final false
static inline void ImplMulw(uint64_t  x, uint64_t  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method ImplSquare, addr 0x2459edc, size 0xcc, virtual false, abstract: false, final false
static inline void ImplSquare(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method Invert, addr 0x245a0f4, size 0x214, virtual false, abstract: false, final false
static inline void Invert(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Multiply, addr 0x245a38c, size 0x88, virtual false, abstract: false, final false
static inline void Multiply(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method MultiplyAddToExt, addr 0x245aa8c, size 0x8c, virtual false, abstract: false, final false
static inline void MultiplyAddToExt(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field* New_ctor() ;

/// @brief Method Reduce, addr 0x2459fa8, size 0x14c, virtual false, abstract: false, final false
static inline void Reduce(::ArrayW<uint64_t,::Array<uint64_t>*>  xx, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Reduce37, addr 0x245ab18, size 0x6c, virtual false, abstract: false, final false
static inline void Reduce37(::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method Sqrt, addr 0x245ab84, size 0x1b4, virtual false, abstract: false, final false
static inline void Sqrt(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Square, addr 0x245a308, size 0x84, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method SquareAddToExt, addr 0x245ad38, size 0x88, virtual false, abstract: false, final false
static inline void SquareAddToExt(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method SquareN, addr 0x245a414, size 0xcc, virtual false, abstract: false, final false
static inline void SquareN(::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  n, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Trace, addr 0x245adc0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t Trace(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method .ctor, addr 0x245b1b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint64_t,::Array<uint64_t>*> getStaticF_ROOT_Z() ;

static inline void setStaticF_ROOT_Z(::ArrayW<uint64_t,::Array<uint64_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecT283Field() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecT283Field", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecT283Field(SecT283Field && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecT283Field", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecT283Field(SecT283Field const& ) = delete;

/// @brief Field M27 offset 0xffffffff size 0x8
static constexpr uint64_t  M27{static_cast<uint64_t>(0x7ffffffu)};

/// @brief Field M57 offset 0xffffffff size 0x8
static constexpr uint64_t  M57{static_cast<uint64_t>(0x1ffffffffffffffu)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283Field");
