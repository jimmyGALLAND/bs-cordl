#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SecP160R2Point)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160R2Point;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Point
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1399))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Point*
class CORDL_TYPE SecP160R2Point : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method .ctor addr 0xfdeebc size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor addr 0xfdf1ec size 0x8c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point*
  New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
           ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method .ctor addr 0xfdf30c size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method Detach addr 0xfe1924 size 0x98 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method Add addr 0xfe19bc size 0x690 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Twice addr 0xfe204c size 0x4b8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwicePlus addr 0xfe2504 size 0xcc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method ThreeTimes addr 0xfe25d0 size 0x70 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes();

  /// @brief Method Negate addr 0xfe2640 size 0xd8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  // Ctor Parameters [CppParam { name: "", ty: "SecP160R2Point", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecP160R2Point(SecP160R2Point&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecP160R2Point", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecP160R2Point(SecP160R2Point const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecP160R2Point();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2Point");
