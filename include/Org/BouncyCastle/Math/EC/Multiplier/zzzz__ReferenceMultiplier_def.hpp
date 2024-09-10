#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/ReferenceMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
CORDL_MODULE_EXPORT(ReferenceMultiplier)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ReferenceMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::ReferenceMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::ReferenceMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::ReferenceMultiplier*
class CORDL_TYPE ReferenceMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief Method MultiplyPositive, addr 0x246cfe4, size 0x10, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint*  p, ::Org::BouncyCastle::Math::BigInteger*  k) ;

static inline ::Org::BouncyCastle::Math::EC::Multiplier::ReferenceMultiplier* New_ctor() ;

/// @brief Method .ctor, addr 0x246cff4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReferenceMultiplier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReferenceMultiplier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReferenceMultiplier(ReferenceMultiplier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceMultiplier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReferenceMultiplier(ReferenceMultiplier const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::ReferenceMultiplier, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::ReferenceMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::ReferenceMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "ReferenceMultiplier");
