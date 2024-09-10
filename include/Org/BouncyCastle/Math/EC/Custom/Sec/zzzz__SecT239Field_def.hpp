#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT239Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT239Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT239Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT239Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT239Field*
class CORDL_TYPE SecT239Field : public ::System::Object {
public:
// Declarations
/// @brief Method Add, addr 0x2455f74, size 0xd8, virtual false, abstract: false, final false
static inline void Add(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method AddExt, addr 0x245604c, size 0x198, virtual false, abstract: false, final false
static inline void AddExt(::ArrayW<uint64_t,::Array<uint64_t>*>  xx, ::ArrayW<uint64_t,::Array<uint64_t>*>  yy, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method AddOne, addr 0x24561e4, size 0x8c, virtual false, abstract: false, final false
static inline void AddOne(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method AddTo, addr 0x2456270, size 0xa8, virtual false, abstract: false, final false
static inline void AddTo(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method FromBigInteger, addr 0x2456318, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method HalfTrace, addr 0x2456328, size 0x8c, virtual false, abstract: false, final false
static inline void HalfTrace(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method ImplCompactExt, addr 0x2456f6c, size 0xb0, virtual false, abstract: false, final false
static inline void ImplCompactExt(::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method ImplExpand, addr 0x245701c, size 0x8c, virtual false, abstract: false, final false
static inline void ImplExpand(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method ImplMultiply, addr 0x245682c, size 0x374, virtual false, abstract: false, final false
static inline void ImplMultiply(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method ImplMulwAcc, addr 0x24570a8, size 0x1bc, virtual false, abstract: false, final false
static inline void ImplMulwAcc(uint64_t  x, uint64_t  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method ImplSquare, addr 0x24563b4, size 0x9c, virtual false, abstract: false, final false
static inline void ImplSquare(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method Invert, addr 0x245653c, size 0x1ec, virtual false, abstract: false, final false
static inline void Invert(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Multiply, addr 0x2456764, size 0x4c, virtual false, abstract: false, final false
static inline void Multiply(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method MultiplyAddToExt, addr 0x2456ba0, size 0x50, virtual false, abstract: false, final false
static inline void MultiplyAddToExt(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field* New_ctor() ;

/// @brief Method Reduce, addr 0x2456450, size 0xec, virtual false, abstract: false, final false
static inline void Reduce(::ArrayW<uint64_t,::Array<uint64_t>*>  xx, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Reduce17, addr 0x2456bf0, size 0x80, virtual false, abstract: false, final false
static inline void Reduce17(::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method Sqrt, addr 0x2456c70, size 0x270, virtual false, abstract: false, final false
static inline void Sqrt(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Square, addr 0x2456728, size 0x3c, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method SquareAddToExt, addr 0x2456ee0, size 0x40, virtual false, abstract: false, final false
static inline void SquareAddToExt(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  zz) ;

/// @brief Method SquareN, addr 0x24567b0, size 0x7c, virtual false, abstract: false, final false
static inline void SquareN(::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  n, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Trace, addr 0x2456f20, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t Trace(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method .ctor, addr 0x2457264, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecT239Field() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecT239Field", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecT239Field(SecT239Field && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecT239Field", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecT239Field(SecT239Field const& ) = delete;

/// @brief Field M47 offset 0xffffffff size 0x8
static constexpr uint64_t  M47{static_cast<uint64_t>(0x7fffffffffffu)};

/// @brief Field M60 offset 0xffffffff size 0x8
static constexpr uint64_t  M60{static_cast<uint64_t>(0xfffffffffffffffu)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT239Field");
