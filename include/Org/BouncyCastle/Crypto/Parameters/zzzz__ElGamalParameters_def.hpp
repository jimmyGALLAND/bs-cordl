#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/ElGamalParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElGamalParameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ElGamalParameters*
class CORDL_TYPE ElGamalParameters : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_G)) ::Org::BouncyCastle::Math::BigInteger*  G;

 __declspec(property(get=get_L)) int32_t  L;

 __declspec(property(get=get_P)) ::Org::BouncyCastle::Math::BigInteger*  P;

/// @brief Field g, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_g, put=__cordl_internal_set_g)) ::Org::BouncyCastle::Math::BigInteger*  g;

/// @brief Field l, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_l, put=__cordl_internal_set_l)) int32_t  l;

/// @brief Field p, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_p, put=__cordl_internal_set_p)) ::Org::BouncyCastle::Math::BigInteger*  p;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

/// @brief Method Equals, addr 0x2371d90, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x2371e2c, size 0x74, virtual false, abstract: false, final false
inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*  other) ;

/// @brief Method GetHashCode, addr 0x2371ea0, size 0x58, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  g) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  g, int32_t  l) ;

constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_g() const;

constexpr int32_t const& __cordl_internal_get_l() const;

constexpr int32_t& __cordl_internal_get_l() ;

constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_p() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_p() const;

constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr void __cordl_internal_set_l(int32_t  value) ;

constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Math::BigInteger*  value) ;

/// @brief Method .ctor, addr 0x2371cc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  g) ;

/// @brief Method .ctor, addr 0x2371ccc, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  g, int32_t  l) ;

/// @brief Method get_G, addr 0x2371d80, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* get_G() ;

/// @brief Method get_L, addr 0x2371d88, size 0x8, virtual false, abstract: false, final false
inline int32_t get_L() ;

/// @brief Method get_P, addr 0x2371d78, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* get_P() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ElGamalParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ElGamalParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ElGamalParameters(ElGamalParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ElGamalParameters(ElGamalParameters const& ) = delete;

/// @brief Field p, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::BigInteger*  ___p;

/// @brief Field g, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::BigInteger*  ___g;

/// @brief Field l, offset: 0x20, size: 0x4, def value: None
 int32_t  ___l;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, ___g) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, ___l) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalParameters");
