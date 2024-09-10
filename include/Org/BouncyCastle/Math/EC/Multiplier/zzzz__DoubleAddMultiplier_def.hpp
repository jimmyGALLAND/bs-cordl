#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/DoubleAddMultiplier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
CORDL_MODULE_EXPORT(DoubleAddMultiplier)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class DoubleAddMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier);
// Type: Org.BouncyCastle.Math.EC.Multiplier::DoubleAddMultiplier
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::DoubleAddMultiplier*
class CORDL_TYPE DoubleAddMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief Method MultiplyPositive, addr 0x246b63c, size 0x1b4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint*  p, ::Org::BouncyCastle::Math::BigInteger*  k) ;

static inline ::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier* New_ctor() ;

/// @brief Method .ctor, addr 0x246b7f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoubleAddMultiplier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoubleAddMultiplier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DoubleAddMultiplier(DoubleAddMultiplier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoubleAddMultiplier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoubleAddMultiplier(DoubleAddMultiplier const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "DoubleAddMultiplier");
