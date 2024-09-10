#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/FpPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FpPoint)
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
namespace Org::BouncyCastle::Math::EC {
class FpPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::FpPoint);
// Type: Org.BouncyCastle.Math.EC::FpPoint
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC::FpPoint*
class CORDL_TYPE FpPoint : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
// Declarations
/// @brief Method Add, addr 0x2488390, size 0xba0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint*  b) ;

/// @brief Method CalculateJacobianModifiedW, addr 0x248ac5c, size 0x154, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* CalculateJacobianModifiedW(::Org::BouncyCastle::Math::EC::ECFieldElement*  Z, ::Org::BouncyCastle::Math::EC::ECFieldElement*  ZSquared) ;

/// @brief Method Detach, addr 0x248829c, size 0x90, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach() ;

/// @brief Method DoubleProductFromSquares, addr 0x248aad0, size 0x74, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* DoubleProductFromSquares(::Org::BouncyCastle::Math::EC::ECFieldElement*  a, ::Org::BouncyCastle::Math::EC::ECFieldElement*  b, ::Org::BouncyCastle::Math::EC::ECFieldElement*  aSquared, ::Org::BouncyCastle::Math::EC::ECFieldElement*  bSquared) ;

/// @brief Method Eight, addr 0x248aa9c, size 0x34, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Eight(::Org::BouncyCastle::Math::EC::ECFieldElement*  x) ;

/// @brief Method Four, addr 0x248aa68, size 0x34, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Four(::Org::BouncyCastle::Math::EC::ECFieldElement*  x) ;

/// @brief Method GetJacobianModifiedW, addr 0x248adb0, size 0x8c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetJacobianModifiedW() ;

/// @brief Method GetZCoord, addr 0x248832c, size 0x64, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(int32_t  index) ;

/// @brief Method Negate, addr 0x248ab44, size 0x118, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate() ;

static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

static inline ::Org::BouncyCastle::Math::EC::FpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

/// @brief Method Three, addr 0x248aa34, size 0x34, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Three(::Org::BouncyCastle::Math::EC::ECFieldElement*  x) ;

/// @brief Method ThreeTimes, addr 0x2489e68, size 0x3f4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes() ;

/// @brief Method TimesPow2, addr 0x248a25c, size 0x7b8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(int32_t  e) ;

/// @brief Method Twice, addr 0x2488f30, size 0xacc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice() ;

/// @brief Method TwiceJacobianModified, addr 0x248ae3c, size 0x344, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::FpPoint* TwiceJacobianModified(bool  calculateW) ;

/// @brief Method TwicePlus, addr 0x24899fc, size 0x46c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint*  b) ;

/// @brief Method Two, addr 0x248aa14, size 0x20, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Two(::Org::BouncyCastle::Math::EC::ECFieldElement*  x) ;

/// @brief Method .ctor, addr 0x2488294, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

/// @brief Method .ctor, addr 0x248263c, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

/// @brief Method .ctor, addr 0x2482a94, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FpPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FpPoint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FpPoint(FpPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FpPoint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FpPoint(FpPoint const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::FpPoint, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::FpPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::FpPoint*, "Org.BouncyCastle.Math.EC", "FpPoint");
