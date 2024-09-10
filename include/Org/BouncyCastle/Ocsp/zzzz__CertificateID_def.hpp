#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/CertificateID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateID)
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::CertificateID);
// Type: Org.BouncyCastle.Ocsp::CertificateID
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Ocsp::CertificateID*
class CORDL_TYPE CertificateID : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HashAlgOid)) ::StringW  HashAlgOid;

 __declspec(property(get=get_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger*  SerialNumber;

/// @brief Field id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::Org::BouncyCastle::Asn1::Ocsp::CertID*  id;

/// @brief Method CreateCertID, addr 0x24d26d4, size 0x298, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* CreateCertID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  hashAlg, ::Org::BouncyCastle::X509::X509Certificate*  issuerCert, ::Org::BouncyCastle::Asn1::DerInteger*  serialNumber) ;

/// @brief Method DeriveCertificateID, addr 0x24d2b58, size 0xe8, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Ocsp::CertificateID* DeriveCertificateID(::Org::BouncyCastle::Ocsp::CertificateID*  original, ::Org::BouncyCastle::Math::BigInteger*  newSerialNumber) ;

/// @brief Method Equals, addr 0x24d2a50, size 0xdc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x24d2b2c, size 0x2c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIssuerKeyHash, addr 0x24d29c8, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetIssuerKeyHash() ;

/// @brief Method GetIssuerNameHash, addr 0x24d29a0, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetIssuerNameHash() ;

/// @brief Method MatchesIssuer, addr 0x24d2a14, size 0x34, virtual false, abstract: false, final false
inline bool MatchesIssuer(::Org::BouncyCastle::X509::X509Certificate*  issuerCert) ;

static inline ::Org::BouncyCastle::Ocsp::CertificateID* New_ctor(::StringW  hashAlgorithm, ::Org::BouncyCastle::X509::X509Certificate*  issuerCert, ::Org::BouncyCastle::Math::BigInteger*  serialNumber) ;

static inline ::Org::BouncyCastle::Ocsp::CertificateID* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID*  id) ;

/// @brief Method ToAsn1Object, addr 0x24d2a48, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID*& __cordl_internal_get_id() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::CertID*> const& __cordl_internal_get_id() const;

constexpr void __cordl_internal_set_id(::Org::BouncyCastle::Asn1::Ocsp::CertID*  value) ;

/// @brief Method .ctor, addr 0x24d25ac, size 0x128, virtual false, abstract: false, final false
inline void _ctor(::StringW  hashAlgorithm, ::Org::BouncyCastle::X509::X509Certificate*  issuerCert, ::Org::BouncyCastle::Math::BigInteger*  serialNumber) ;

/// @brief Method .ctor, addr 0x24d2538, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID*  id) ;

/// @brief Method get_HashAlgOid, addr 0x24d296c, size 0x34, virtual false, abstract: false, final false
inline ::StringW get_HashAlgOid() ;

/// @brief Method get_SerialNumber, addr 0x24d29f0, size 0x24, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CertificateID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CertificateID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateID(CertificateID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateID(CertificateID const& ) = delete;

/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Ocsp::CertID*  ___id;

/// @brief Field HashSha1 offset 0xffffffff size 0x8
static constexpr ::ConstString  HashSha1{u"1.3.14.3.2.26"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::CertificateID, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::CertificateID, ___id) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::CertificateID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::CertificateID*, "Org.BouncyCastle.Ocsp", "CertificateID");
