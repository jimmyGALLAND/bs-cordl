#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT283R1Curve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT283R1Curve)
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT283R1Point;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecT283R1Curve__SecT283R1LookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT283R1Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecT283R1Curve__SecT283R1LookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable);
// Type: ::SecT283R1LookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::SecT283R1Curve::SecT283R1LookupTable*
class CORDL_TYPE __SecT283R1Curve__SecT283R1LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
 __declspec(property(get=get_Size)) int32_t  Size;

/// @brief Field m_outer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_outer, put=__cordl_internal_set_m_outer)) ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*  m_outer;

/// @brief Field m_size, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_size, put=__cordl_internal_set_m_size)) int32_t  m_size;

/// @brief Field m_table, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_table, put=__cordl_internal_set_m_table)) ::ArrayW<uint64_t,::Array<uint64_t>*>  m_table;

/// @brief Method CreatePoint, addr 0x245e37c, size 0xe0, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y) ;

/// @brief Method Lookup, addr 0x245e274, size 0x108, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t  index) ;

/// @brief Method LookupVar, addr 0x245e45c, size 0xcc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t  index) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*  outer, ::ArrayW<uint64_t,::Array<uint64_t>*>  table, int32_t  size) ;

constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*& __cordl_internal_get_m_outer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*> const& __cordl_internal_get_m_outer() const;

constexpr int32_t const& __cordl_internal_get_m_size() const;

constexpr int32_t& __cordl_internal_get_m_size() ;

constexpr ::ArrayW<uint64_t,::Array<uint64_t>*> const& __cordl_internal_get_m_table() const;

constexpr ::ArrayW<uint64_t,::Array<uint64_t>*>& __cordl_internal_get_m_table() ;

constexpr void __cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*  value) ;

constexpr void __cordl_internal_set_m_size(int32_t  value) ;

constexpr void __cordl_internal_set_m_table(::ArrayW<uint64_t,::Array<uint64_t>*>  value) ;

/// @brief Method .ctor, addr 0x245e124, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*  outer, ::ArrayW<uint64_t,::Array<uint64_t>*>  table, int32_t  size) ;

/// @brief Method get_Size, addr 0x245e26c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Size() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SecT283R1Curve__SecT283R1LookupTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SecT283R1Curve__SecT283R1LookupTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SecT283R1Curve__SecT283R1LookupTable(__SecT283R1Curve__SecT283R1LookupTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SecT283R1Curve__SecT283R1LookupTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SecT283R1Curve__SecT283R1LookupTable(__SecT283R1Curve__SecT283R1LookupTable const& ) = delete;

/// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*  ___m_outer;

/// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint64_t,::Array<uint64_t>*>  ___m_table;

/// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable, ___m_table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable, ___m_size) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT283R1Curve
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT283R1Curve*
class CORDL_TYPE SecT283R1Curve : public ::Org::BouncyCastle::Math::EC::AbstractF2mCurve {
public:
// Declarations
using SecT283R1LookupTable = ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable;

 __declspec(property(get=get_FieldSize)) int32_t  FieldSize;

 __declspec(property(get=get_Infinity)) ::Org::BouncyCastle::Math::EC::ECPoint*  Infinity;

 __declspec(property(get=get_IsKoblitz)) bool  IsKoblitz;

 __declspec(property(get=get_IsTrinomial)) bool  IsTrinomial;

 __declspec(property(get=get_K1)) int32_t  K1;

 __declspec(property(get=get_K2)) int32_t  K2;

 __declspec(property(get=get_K3)) int32_t  K3;

 __declspec(property(get=get_M)) int32_t  M;

/// @brief Field SECT283R1_AFFINE_ZS, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_SECT283R1_AFFINE_ZS, put=setStaticF_SECT283R1_AFFINE_ZS)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  SECT283R1_AFFINE_ZS;

/// @brief Field m_infinity, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_infinity, put=__cordl_internal_set_m_infinity)) ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*  m_infinity;

/// @brief Method CloneCurve, addr 0x245dcec, size 0x50, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve() ;

/// @brief Method CreateCacheSafeLookupTable, addr 0x245df80, size 0x1a4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  points, int32_t  off, int32_t  len) ;

/// @brief Method CreateRawPoint, addr 0x245ddb0, size 0x80, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

/// @brief Method CreateRawPoint, addr 0x245deb8, size 0x8c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

/// @brief Method FromBigInteger, addr 0x245dd58, size 0x58, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve* New_ctor() ;

/// @brief Method SupportsCoordinateSystem, addr 0x245dd3c, size 0xc, virtual true, abstract: false, final false
inline bool SupportsCoordinateSystem(int32_t  coord) ;

constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*& __cordl_internal_get_m_infinity() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*> const& __cordl_internal_get_m_infinity() const;

constexpr void __cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*  value) ;

/// @brief Method .ctor, addr 0x245db34, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_SECT283R1_AFFINE_ZS() ;

/// @brief Method get_FieldSize, addr 0x245dd50, size 0x8, virtual true, abstract: false, final false
inline int32_t get_FieldSize() ;

/// @brief Method get_Infinity, addr 0x245dd48, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity() ;

/// @brief Method get_IsKoblitz, addr 0x245df50, size 0x8, virtual true, abstract: false, final false
inline bool get_IsKoblitz() ;

/// @brief Method get_IsTrinomial, addr 0x245df60, size 0x8, virtual true, abstract: false, final false
inline bool get_IsTrinomial() ;

/// @brief Method get_K1, addr 0x245df68, size 0x8, virtual true, abstract: false, final false
inline int32_t get_K1() ;

/// @brief Method get_K2, addr 0x245df70, size 0x8, virtual true, abstract: false, final false
inline int32_t get_K2() ;

/// @brief Method get_K3, addr 0x245df78, size 0x8, virtual true, abstract: false, final false
inline int32_t get_K3() ;

/// @brief Method get_M, addr 0x245df58, size 0x8, virtual true, abstract: false, final false
inline int32_t get_M() ;

static inline void setStaticF_SECT283R1_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecT283R1Curve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecT283R1Curve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecT283R1Curve(SecT283R1Curve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecT283R1Curve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecT283R1Curve(SecT283R1Curve const& ) = delete;

/// @brief Field m_infinity, offset: 0x58, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*  ___m_infinity;

/// @brief Field SECT283R1_DEFAULT_COORDS offset 0xffffffff size 0x4
static constexpr int32_t  SECT283R1_DEFAULT_COORDS{static_cast<int32_t>(0x6)};

/// @brief Field SECT283R1_FE_LONGS offset 0xffffffff size 0x4
static constexpr int32_t  SECT283R1_FE_LONGS{static_cast<int32_t>(0x5)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve, ___m_infinity) == 0x58, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283R1Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283R1Curve/SecT283R1LookupTable");
