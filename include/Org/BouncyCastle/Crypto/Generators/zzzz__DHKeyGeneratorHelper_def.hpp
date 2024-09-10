#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/DHKeyGeneratorHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DHKeyGeneratorHelper)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHKeyGeneratorHelper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper);
// Type: Org.BouncyCastle.Crypto.Generators::DHKeyGeneratorHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DHKeyGeneratorHelper*
class CORDL_TYPE DHKeyGeneratorHelper : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*  Instance;

/// @brief Method CalculatePrivate, addr 0x2335530, size 0x1c4, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculatePrivate(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  dhParams, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method CalculatePublic, addr 0x23356f4, size 0x2c, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculatePublic(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  dhParams, ::Org::BouncyCastle::Math::BigInteger*  x) ;

static inline ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* New_ctor() ;

/// @brief Method .ctor, addr 0x2335728, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* getStaticF_Instance() ;

static inline void setStaticF_Instance(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DHKeyGeneratorHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DHKeyGeneratorHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DHKeyGeneratorHelper(DHKeyGeneratorHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyGeneratorHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DHKeyGeneratorHelper(DHKeyGeneratorHelper const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*, "Org.BouncyCastle.Crypto.Generators", "DHKeyGeneratorHelper");
