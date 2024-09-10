#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509V1CertificateGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509V1CertificateGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V1TbsCertificateGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V1CertificateGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509V1CertificateGenerator);
// Type: Org.BouncyCastle.X509::X509V1CertificateGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509::X509V1CertificateGenerator*
class CORDL_TYPE X509V1CertificateGenerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SignatureAlgNames)) ::System::Collections::IEnumerable*  SignatureAlgNames;

/// @brief Field sigAlgId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sigAlgId, put=__cordl_internal_set_sigAlgId)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  sigAlgId;

/// @brief Field sigOID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sigOID, put=__cordl_internal_set_sigOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigOID;

/// @brief Field signatureAlgorithm, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_signatureAlgorithm, put=__cordl_internal_set_signatureAlgorithm)) ::StringW  signatureAlgorithm;

/// @brief Field tbsGen, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tbsGen, put=__cordl_internal_set_tbsGen)) ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*  tbsGen;

/// @brief Method Generate, addr 0x25b00b4, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey) ;

/// @brief Method Generate, addr 0x25b00bc, size 0x7c, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method Generate, addr 0x25b0138, size 0x46c, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::ISignatureFactory*  signatureCalculatorFactory) ;

/// @brief Method GenerateJcaObject, addr 0x25b05a4, size 0xd0, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::X509::X509Certificate* GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*  tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  sigAlg, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

static inline ::Org::BouncyCastle::X509::X509V1CertificateGenerator* New_ctor() ;

/// @brief Method Reset, addr 0x25afbec, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetIssuerDN, addr 0x25afd1c, size 0x1c, virtual false, abstract: false, final false
inline void SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name*  issuer) ;

/// @brief Method SetNotAfter, addr 0x25afdac, size 0x74, virtual false, abstract: false, final false
inline void SetNotAfter(::System::DateTime  date) ;

/// @brief Method SetNotBefore, addr 0x25afd38, size 0x74, virtual false, abstract: false, final false
inline void SetNotBefore(::System::DateTime  date) ;

/// @brief Method SetPublicKey, addr 0x25afe3c, size 0x10c, virtual false, abstract: false, final false
inline void SetPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey) ;

/// @brief Method SetSerialNumber, addr 0x25afc44, size 0xd8, virtual false, abstract: false, final false
inline void SetSerialNumber(::Org::BouncyCastle::Math::BigInteger*  serialNumber) ;

/// @brief Method SetSignatureAlgorithm, addr 0x25aff48, size 0x16c, virtual false, abstract: false, final false
inline void SetSignatureAlgorithm(::StringW  signatureAlgorithm) ;

/// @brief Method SetSubjectDN, addr 0x25afe20, size 0x1c, virtual false, abstract: false, final false
inline void SetSubjectDN(::Org::BouncyCastle::Asn1::X509::X509Name*  subject) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_sigAlgId() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_sigAlgId() const;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_sigOID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_sigOID() const;

constexpr ::StringW const& __cordl_internal_get_signatureAlgorithm() const;

constexpr ::StringW& __cordl_internal_get_signatureAlgorithm() ;

constexpr ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*& __cordl_internal_get_tbsGen() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*> const& __cordl_internal_get_tbsGen() const;

constexpr void __cordl_internal_set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr void __cordl_internal_set_sigOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr void __cordl_internal_set_signatureAlgorithm(::StringW  value) ;

constexpr void __cordl_internal_set_tbsGen(::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*  value) ;

/// @brief Method .ctor, addr 0x25afb88, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SignatureAlgNames, addr 0x25b0674, size 0x4c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerable* get_SignatureAlgNames() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509V1CertificateGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509V1CertificateGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509V1CertificateGenerator(X509V1CertificateGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509V1CertificateGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509V1CertificateGenerator(X509V1CertificateGenerator const& ) = delete;

/// @brief Field tbsGen, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*  ___tbsGen;

/// @brief Field sigOID, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  ___sigOID;

/// @brief Field sigAlgId, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  ___sigAlgId;

/// @brief Field signatureAlgorithm, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___signatureAlgorithm;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509V1CertificateGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V1CertificateGenerator, ___tbsGen) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V1CertificateGenerator, ___sigOID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V1CertificateGenerator, ___sigAlgId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V1CertificateGenerator, ___signatureAlgorithm) == 0x28, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509V1CertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509V1CertificateGenerator*, "Org.BouncyCastle.X509", "X509V1CertificateGenerator");
