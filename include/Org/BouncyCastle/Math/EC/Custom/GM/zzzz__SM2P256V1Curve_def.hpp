#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/GM/SM2P256V1Curve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM2P256V1Curve)
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class SM2P256V1Point;
}
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class __SM2P256V1Curve__SM2P256V1LookupTable;
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
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class SM2P256V1Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class __SM2P256V1Curve__SM2P256V1LookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable);
// Type: ::SM2P256V1LookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::GM {
// Is value type: false
// CS Name: ::SM2P256V1Curve::SM2P256V1LookupTable*
class CORDL_TYPE __SM2P256V1Curve__SM2P256V1LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
 __declspec(property(get=get_Size)) int32_t  Size;

/// @brief Field m_outer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_outer, put=__cordl_internal_set_m_outer)) ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*  m_outer;

/// @brief Field m_size, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_size, put=__cordl_internal_set_m_size)) int32_t  m_size;

/// @brief Field m_table, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_table, put=__cordl_internal_set_m_table)) ::ArrayW<uint32_t,::Array<uint32_t>*>  m_table;

/// @brief Method CreatePoint, addr 0x240af40, size 0xe0, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Lookup, addr 0x240ae28, size 0x118, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t  index) ;

/// @brief Method LookupVar, addr 0x240b020, size 0xc4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t  index) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*  outer, ::ArrayW<uint32_t,::Array<uint32_t>*>  table, int32_t  size) ;

constexpr ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*& __cordl_internal_get_m_outer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*> const& __cordl_internal_get_m_outer() const;

constexpr int32_t const& __cordl_internal_get_m_size() const;

constexpr int32_t& __cordl_internal_get_m_size() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __cordl_internal_get_m_table() const;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __cordl_internal_get_m_table() ;

constexpr void __cordl_internal_set_m_outer(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*  value) ;

constexpr void __cordl_internal_set_m_size(int32_t  value) ;

constexpr void __cordl_internal_set_m_table(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

/// @brief Method .ctor, addr 0x240aa0c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*  outer, ::ArrayW<uint32_t,::Array<uint32_t>*>  table, int32_t  size) ;

/// @brief Method get_Size, addr 0x240ae20, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Size() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __SM2P256V1Curve__SM2P256V1LookupTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__SM2P256V1Curve__SM2P256V1LookupTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SM2P256V1Curve__SM2P256V1LookupTable(__SM2P256V1Curve__SM2P256V1LookupTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SM2P256V1Curve__SM2P256V1LookupTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SM2P256V1Curve__SM2P256V1LookupTable(__SM2P256V1Curve__SM2P256V1LookupTable const& ) = delete;

/// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*  ___m_outer;

/// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  ___m_table;

/// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable, ___m_outer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable, ___m_table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable, ___m_size) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::GM
// Type: Org.BouncyCastle.Math.EC.Custom.GM::SM2P256V1Curve
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::GM {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.GM::SM2P256V1Curve*
class CORDL_TYPE SM2P256V1Curve : public ::Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
// Declarations
using SM2P256V1LookupTable = ::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable;

 __declspec(property(get=get_FieldSize)) int32_t  FieldSize;

 __declspec(property(get=get_Infinity)) ::Org::BouncyCastle::Math::EC::ECPoint*  Infinity;

 __declspec(property(get=get_Q)) ::Org::BouncyCastle::Math::BigInteger*  Q;

/// @brief Field SM2P256V1_AFFINE_ZS, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_SM2P256V1_AFFINE_ZS, put=setStaticF_SM2P256V1_AFFINE_ZS)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  SM2P256V1_AFFINE_ZS;

/// @brief Field m_infinity, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_infinity, put=__cordl_internal_set_m_infinity)) ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point*  m_infinity;

/// @brief Field q, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_q, put=setStaticF_q)) ::Org::BouncyCastle::Math::BigInteger*  q;

/// @brief Method CloneCurve, addr 0x240a44c, size 0x50, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve() ;

/// @brief Method CreateCacheSafeLookupTable, addr 0x240a86c, size 0x1a0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  points, int32_t  off, int32_t  len) ;

/// @brief Method CreateRawPoint, addr 0x240a6d8, size 0x80, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

/// @brief Method CreateRawPoint, addr 0x240a7dc, size 0x88, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

/// @brief Method FromBigInteger, addr 0x240a56c, size 0x58, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* New_ctor() ;

/// @brief Method RandomFieldElement, addr 0x240aa48, size 0x9c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom*  r) ;

/// @brief Method RandomFieldElementMult, addr 0x240abe4, size 0x9c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom*  r) ;

/// @brief Method SupportsCoordinateSystem, addr 0x240a49c, size 0xc, virtual true, abstract: false, final false
inline bool SupportsCoordinateSystem(int32_t  coord) ;

constexpr ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point*& __cordl_internal_get_m_infinity() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point*> const& __cordl_internal_get_m_infinity() const;

constexpr void __cordl_internal_set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point*  value) ;

/// @brief Method .ctor, addr 0x240a230, size 0x214, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_SM2P256V1_AFFINE_ZS() ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_q() ;

/// @brief Method get_FieldSize, addr 0x240a508, size 0x64, virtual true, abstract: false, final false
inline int32_t get_FieldSize() ;

/// @brief Method get_Infinity, addr 0x240a500, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity() ;

/// @brief Method get_Q, addr 0x240a4a8, size 0x58, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Q() ;

static inline void setStaticF_SM2P256V1_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  value) ;

static inline void setStaticF_q(::Org::BouncyCastle::Math::BigInteger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SM2P256V1Curve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SM2P256V1Curve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SM2P256V1Curve(SM2P256V1Curve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SM2P256V1Curve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SM2P256V1Curve(SM2P256V1Curve const& ) = delete;

/// @brief Field m_infinity, offset: 0x50, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point*  ___m_infinity;

/// @brief Field SM2P256V1_DEFAULT_COORDS offset 0xffffffff size 0x4
static constexpr int32_t  SM2P256V1_DEFAULT_COORDS{static_cast<int32_t>(0x2)};

/// @brief Field SM2P256V1_FE_INTS offset 0xffffffff size 0x4
static constexpr int32_t  SM2P256V1_FE_INTS{static_cast<int32_t>(0x8)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve, ___m_infinity) == 0x50, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::GM
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve/SM2P256V1LookupTable");
