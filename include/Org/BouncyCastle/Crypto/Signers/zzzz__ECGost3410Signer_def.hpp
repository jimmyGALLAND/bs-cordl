#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/ECGost3410Signer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECGost3410Signer)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class ECGost3410Signer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::ECGost3410Signer);
// Type: Org.BouncyCastle.Crypto.Signers::ECGost3410Signer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Signers::ECGost3410Signer*
class CORDL_TYPE ECGost3410Signer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_Order)) ::Org::BouncyCastle::Math::BigInteger*  Order;

/// @brief Field forSigning, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_forSigning, put=__cordl_internal_set_forSigning)) bool  forSigning;

/// @brief Field key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*  key;

/// @brief Field random, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_random, put=__cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsa"
constexpr operator  ::Org::BouncyCastle::Crypto::IDsa*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsaExt"
constexpr operator  ::Org::BouncyCastle::Crypto::IDsaExt*() noexcept;

/// @brief Method CreateBasePointMultiplier, addr 0x23845cc, size 0x54, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier() ;

/// @brief Method GenerateSignature, addr 0x2383f24, size 0x3a8, virtual true, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> GenerateSignature(::ArrayW<uint8_t,::Array<uint8_t>*>  message) ;

/// @brief Method Init, addr 0x2383d1c, size 0x1e4, virtual true, abstract: false, final false
inline void Init(bool  forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Signers::ECGost3410Signer* New_ctor() ;

/// @brief Method VerifySignature, addr 0x23842cc, size 0x300, virtual true, abstract: false, final false
inline bool VerifySignature(::ArrayW<uint8_t,::Array<uint8_t>*>  message, ::Org::BouncyCastle::Math::BigInteger*  r, ::Org::BouncyCastle::Math::BigInteger*  s) ;

constexpr bool const& __cordl_internal_get_forSigning() const;

constexpr bool& __cordl_internal_get_forSigning() ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& __cordl_internal_get_key() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*> const& __cordl_internal_get_key() const;

constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_random() const;

constexpr void __cordl_internal_set_forSigning(bool  value) ;

constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*  value) ;

constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

/// @brief Method .ctor, addr 0x2384620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AlgorithmName, addr 0x2383d00, size 0x1c, virtual true, abstract: false, final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_Order, addr 0x2383f00, size 0x24, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Order() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IDsa"
constexpr ::Org::BouncyCastle::Crypto::IDsa* i___Org__BouncyCastle__Crypto__IDsa() noexcept;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IDsaExt"
constexpr ::Org::BouncyCastle::Crypto::IDsaExt* i___Org__BouncyCastle__Crypto__IDsaExt() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ECGost3410Signer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410Signer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECGost3410Signer(ECGost3410Signer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410Signer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECGost3410Signer(ECGost3410Signer const& ) = delete;

/// @brief Field key, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*  ___key;

/// @brief Field random, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Security::SecureRandom*  ___random;

/// @brief Field forSigning, offset: 0x20, size: 0x1, def value: None
 bool  ___forSigning;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::ECGost3410Signer, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::ECGost3410Signer, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::ECGost3410Signer, ___random) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::ECGost3410Signer, ___forSigning) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::ECGost3410Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::ECGost3410Signer*, "Org.BouncyCastle.Crypto.Signers", "ECGost3410Signer");
