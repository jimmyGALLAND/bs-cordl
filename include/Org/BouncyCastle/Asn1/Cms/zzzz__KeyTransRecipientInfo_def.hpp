#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/KeyTransRecipientInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(KeyTransRecipientInfo)
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KeyTransRecipientInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo);
// Type: Org.BouncyCastle.Asn1.Cms::KeyTransRecipientInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::KeyTransRecipientInfo*
class CORDL_TYPE KeyTransRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
 __declspec(property(get=get_EncryptedKey)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  EncryptedKey;

 __declspec(property(get=get_KeyEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  KeyEncryptionAlgorithm;

 __declspec(property(get=get_RecipientIdentifier)) ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*  RecipientIdentifier;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Asn1::DerInteger*  Version;

/// @brief Field encryptedKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_encryptedKey, put=__cordl_internal_set_encryptedKey)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedKey;

/// @brief Field keyEncryptionAlgorithm, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyEncryptionAlgorithm, put=__cordl_internal_set_keyEncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm;

/// @brief Field rid, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rid, put=__cordl_internal_set_rid)) ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*  rid;

/// @brief Field version, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Method GetInstance, addr 0x22bcbec, size 0x168, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*  rid, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedKey) ;

static inline ::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x22bcd74, size 0x144, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_encryptedKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_encryptedKey() const;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_keyEncryptionAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_keyEncryptionAlgorithm() const;

constexpr ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*& __cordl_internal_get_rid() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*> const& __cordl_internal_get_rid() const;

constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

constexpr void __cordl_internal_set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr void __cordl_internal_set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr void __cordl_internal_set_rid(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*  value) ;

constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

/// @brief Method .ctor, addr 0x22bc758, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*  rid, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString*  encryptedKey) ;

/// @brief Method .ctor, addr 0x22bc848, size 0x188, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_EncryptedKey, addr 0x22bcd6c, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_EncryptedKey() ;

/// @brief Method get_KeyEncryptionAlgorithm, addr 0x22bcd64, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithm() ;

/// @brief Method get_RecipientIdentifier, addr 0x22bcd5c, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* get_RecipientIdentifier() ;

/// @brief Method get_Version, addr 0x22bcd54, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyTransRecipientInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyTransRecipientInfo(KeyTransRecipientInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyTransRecipientInfo(KeyTransRecipientInfo const& ) = delete;

/// @brief Field version, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::DerInteger*  ___version;

/// @brief Field rid, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*  ___rid;

/// @brief Field keyEncryptionAlgorithm, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  ___keyEncryptionAlgorithm;

/// @brief Field encryptedKey, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1OctetString*  ___encryptedKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, ___rid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, ___keyEncryptionAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, ___encryptedKey) == 0x28, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo*, "Org.BouncyCastle.Asn1.Cms", "KeyTransRecipientInfo");
