#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP224R1Point.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SecP224R1Point)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP224R1Point;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP224R1Point
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP224R1Point*
class CORDL_TYPE SecP224R1Point : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
// Declarations
/// @brief Method Add, addr 0x2428294, size 0x68c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint*  b) ;

/// @brief Method Detach, addr 0x2428204, size 0x90, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach() ;

/// @brief Method Negate, addr 0x2428f00, size 0xd0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate() ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

/// @brief Method ThreeTimes, addr 0x2428e90, size 0x70, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes() ;

/// @brief Method Twice, addr 0x2428920, size 0x4a4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice() ;

/// @brief Method TwicePlus, addr 0x2428dc4, size 0xcc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint*  b) ;

/// @brief Method .ctor, addr 0x2425164, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

/// @brief Method .ctor, addr 0x2425478, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

/// @brief Method .ctor, addr 0x242558c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecP224R1Point() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecP224R1Point", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecP224R1Point(SecP224R1Point && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecP224R1Point", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecP224R1Point(SecP224R1Point const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1Point");
