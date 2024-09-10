#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/ElGamalPublicKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalPublicKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalPublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalPublicKeyParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ElGamalPublicKeyParameters*
class CORDL_TYPE ElGamalPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters {
public:
// Declarations
 __declspec(property(get=get_Y)) ::Org::BouncyCastle::Math::BigInteger*  Y;

/// @brief Field y, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) ::Org::BouncyCastle::Math::BigInteger*  y;

/// @brief Method Equals, addr 0x2372140, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x23721dc, size 0x58, virtual false, abstract: false, final false
inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*  other) ;

/// @brief Method GetHashCode, addr 0x2372234, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*  parameters) ;

constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_y() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_y() const;

constexpr void __cordl_internal_set_y(::Org::BouncyCastle::Math::BigInteger*  value) ;

/// @brief Method .ctor, addr 0x23720b8, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  y, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*  parameters) ;

/// @brief Method get_Y, addr 0x2372138, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Y() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElGamalPublicKeyParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ElGamalPublicKeyParameters(ElGamalPublicKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElGamalPublicKeyParameters(ElGamalPublicKeyParameters const& ) = delete;

/// @brief Field y, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::BigInteger*  ___y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters, ___y) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalPublicKeyParameters");
