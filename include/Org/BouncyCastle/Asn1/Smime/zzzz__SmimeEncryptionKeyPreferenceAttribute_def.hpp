#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Smime/SmimeEncryptionKeyPreferenceAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_def.hpp"
CORDL_MODULE_EXPORT(SmimeEncryptionKeyPreferenceAttribute)
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientKeyIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeEncryptionKeyPreferenceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute);
// Type: Org.BouncyCastle.Asn1.Smime::SmimeEncryptionKeyPreferenceAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Smime::SmimeEncryptionKeyPreferenceAttribute*
class CORDL_TYPE SmimeEncryptionKeyPreferenceAttribute : public ::Org::BouncyCastle::Asn1::X509::AttributeX509 {
public:
// Declarations
static inline ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute* New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*  issAndSer) ;

static inline ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute* New_ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*  rKeyID) ;

static inline ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  sKeyID) ;

/// @brief Method .ctor, addr 0x24a9f84, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*  issAndSer) ;

/// @brief Method .ctor, addr 0x24aa064, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*  rKeyID) ;

/// @brief Method .ctor, addr 0x24aa144, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  sKeyID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmimeEncryptionKeyPreferenceAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmimeEncryptionKeyPreferenceAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmimeEncryptionKeyPreferenceAttribute(SmimeEncryptionKeyPreferenceAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmimeEncryptionKeyPreferenceAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmimeEncryptionKeyPreferenceAttribute(SmimeEncryptionKeyPreferenceAttribute const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute*, "Org.BouncyCastle.Asn1.Smime", "SmimeEncryptionKeyPreferenceAttribute");
