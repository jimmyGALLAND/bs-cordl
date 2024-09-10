#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/AgreementUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AgreementUtilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto {
class IRawAgreement;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class AgreementUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::AgreementUtilities);
// Type: Org.BouncyCastle.Security::AgreementUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security::AgreementUtilities*
class CORDL_TYPE AgreementUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field algorithms, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_algorithms, put=setStaticF_algorithms)) ::System::Collections::IDictionary*  algorithms;

/// @brief Method GetAlgorithmName, addr 0x254eaa0, size 0x108, virtual false, abstract: false, final false
static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetBasicAgreement, addr 0x254e298, size 0x264, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreement(::StringW  algorithm) ;

/// @brief Method GetBasicAgreement, addr 0x254e238, size 0x60, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetBasicAgreementWithKdf, addr 0x254e6a4, size 0x230, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreementWithKdf(::StringW  agreeAlgorithm, ::StringW  wrapAlgorithm) ;

/// @brief Method GetBasicAgreementWithKdf, addr 0x254e63c, size 0x68, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::IBasicAgreement* GetBasicAgreementWithKdf(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::StringW  wrapAlgorithm) ;

/// @brief Method GetMechanism, addr 0x254e4fc, size 0x140, virtual false, abstract: false, final false
static inline ::StringW GetMechanism(::StringW  algorithm) ;

/// @brief Method GetRawAgreement, addr 0x254e934, size 0x16c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::IRawAgreement* GetRawAgreement(::StringW  algorithm) ;

/// @brief Method GetRawAgreement, addr 0x254e8d4, size 0x60, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::IRawAgreement* GetRawAgreement(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

static inline ::Org::BouncyCastle::Security::AgreementUtilities* New_ctor() ;

/// @brief Method .ctor, addr 0x254de30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::IDictionary* getStaticF_algorithms() ;

static inline void setStaticF_algorithms(::System::Collections::IDictionary*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AgreementUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AgreementUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AgreementUtilities(AgreementUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgreementUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgreementUtilities(AgreementUtilities const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::AgreementUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::AgreementUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::AgreementUtilities*, "Org.BouncyCastle.Security", "AgreementUtilities");
