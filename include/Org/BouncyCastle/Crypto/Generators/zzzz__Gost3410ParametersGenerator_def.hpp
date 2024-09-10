#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/Gost3410ParametersGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3410ParametersGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Gost3410ParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::Gost3410ParametersGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::Gost3410ParametersGenerator*
class CORDL_TYPE Gost3410ParametersGenerator : public ::System::Object {
public:
// Declarations
/// @brief Field init_random, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_init_random, put=__cordl_internal_set_init_random)) ::Org::BouncyCastle::Security::SecureRandom*  init_random;

/// @brief Field size, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int32_t  size;

/// @brief Field typeproc, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_typeproc, put=__cordl_internal_set_typeproc)) int32_t  typeproc;

/// @brief Method GenerateParameters, addr 0x233a85c, size 0x2e0, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* GenerateParameters() ;

/// @brief Method Init, addr 0x2338a04, size 0xc, virtual false, abstract: false, final false
inline void Init(int32_t  size, int32_t  typeProcedure, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

static inline ::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator* New_ctor() ;

constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_init_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_init_random() const;

constexpr int32_t const& __cordl_internal_get_size() const;

constexpr int32_t& __cordl_internal_get_size() ;

constexpr int32_t const& __cordl_internal_get_typeproc() const;

constexpr int32_t& __cordl_internal_get_typeproc() ;

constexpr void __cordl_internal_set_init_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr void __cordl_internal_set_size(int32_t  value) ;

constexpr void __cordl_internal_set_typeproc(int32_t  value) ;

/// @brief Method .ctor, addr 0x233ab3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method procedure_A, addr 0x2338a10, size 0x8c0, virtual false, abstract: false, final false
inline int32_t procedure_A(int32_t  x0, int32_t  c, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*>  pq, int32_t  size) ;

/// @brief Method procedure_Aa, addr 0x23392d0, size 0x8ac, virtual false, abstract: false, final false
inline int64_t procedure_Aa(int64_t  x0, int64_t  c, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*>  pq, int32_t  size) ;

/// @brief Method procedure_B, addr 0x2339b7c, size 0x5c0, virtual false, abstract: false, final false
inline void procedure_B(int32_t  x0, int32_t  c, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*>  pq) ;

/// @brief Method procedure_Bb, addr 0x233a13c, size 0x5ac, virtual false, abstract: false, final false
inline void procedure_Bb(int64_t  x0, int64_t  c, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*>  pq) ;

/// @brief Method procedure_C, addr 0x233a6e8, size 0x174, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* procedure_C(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  q) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gost3410ParametersGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gost3410ParametersGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gost3410ParametersGenerator(Gost3410ParametersGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410ParametersGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gost3410ParametersGenerator(Gost3410ParametersGenerator const& ) = delete;

/// @brief Field size, offset: 0x10, size: 0x4, def value: None
 int32_t  ___size;

/// @brief Field typeproc, offset: 0x14, size: 0x4, def value: None
 int32_t  ___typeproc;

/// @brief Field init_random, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Security::SecureRandom*  ___init_random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator, ___size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator, ___typeproc) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator, ___init_random) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "Gost3410ParametersGenerator");
