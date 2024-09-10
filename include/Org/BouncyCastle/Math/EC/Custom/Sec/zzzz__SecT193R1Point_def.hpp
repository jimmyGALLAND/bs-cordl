#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT193R1Point.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SecT193R1Point)
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
class SecT193R1Point;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT193R1Point
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT193R1Point*
class CORDL_TYPE SecT193R1Point : public ::Org::BouncyCastle::Math::EC::AbstractF2mPoint {
public:
// Declarations
 __declspec(property(get=get_CompressionYTilde)) bool  CompressionYTilde;

 __declspec(property(get=get_YCoord)) ::Org::BouncyCastle::Math::EC::ECFieldElement*  YCoord;

/// @brief Method Add, addr 0x244dac0, size 0x738, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint*  b) ;

/// @brief Method Detach, addr 0x244d8e4, size 0x90, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach() ;

/// @brief Method Negate, addr 0x244ea88, size 0x15c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate() ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

/// @brief Method Twice, addr 0x244e1f8, size 0x36c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice() ;

/// @brief Method TwicePlus, addr 0x244e564, size 0x524, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint*  b) ;

/// @brief Method .ctor, addr 0x244d098, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

/// @brief Method .ctor, addr 0x244d1e4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

/// @brief Method .ctor, addr 0x244d2f8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

/// @brief Method get_CompressionYTilde, addr 0x244da44, size 0x7c, virtual true, abstract: false, final false
inline bool get_CompressionYTilde() ;

/// @brief Method get_YCoord, addr 0x244d974, size 0xd0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_YCoord() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecT193R1Point() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecT193R1Point", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecT193R1Point(SecT193R1Point && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecT193R1Point", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecT193R1Point(SecT193R1Point const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193R1Point");
