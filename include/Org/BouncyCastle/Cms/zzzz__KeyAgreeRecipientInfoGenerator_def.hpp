#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KeyAgreeRecipientInfoGenerator)
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyAgreeRecipientInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator);
// Type: Org.BouncyCastle.Cms::KeyAgreeRecipientInfoGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(673))
// CS Name: ::Org.BouncyCastle.Cms::KeyAgreeRecipientInfoGenerator*
class CORDL_TYPE KeyAgreeRecipientInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyAgreementOID, offset 0x10, size 0x8
  __declspec(property(get = __get_keyAgreementOID, put = __set_keyAgreementOID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAgreementOID;

  /// @brief Field keyEncryptionOID, offset 0x18, size 0x8
  __declspec(property(get = __get_keyEncryptionOID, put = __set_keyEncryptionOID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyEncryptionOID;

  /// @brief Field recipientCerts, offset 0x20, size 0x8
  __declspec(property(get = __get_recipientCerts, put = __set_recipientCerts))::System::Collections::IList* recipientCerts;

  /// @brief Field senderKeyPair, offset 0x28, size 0x8
  __declspec(property(get = __get_senderKeyPair, put = __set_senderKeyPair))::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* senderKeyPair;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper))::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Helper;

  __declspec(property(put = set_KeyAgreementOID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyAgreementOID;

  __declspec(property(put = set_KeyEncryptionOID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* KeyEncryptionOID;

  __declspec(property(put = set_RecipientCerts))::System::Collections::ICollection* RecipientCerts;

  __declspec(property(put = set_SenderKeyPair))::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* SenderKeyPair;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::RecipientInfoGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::RecipientInfoGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_keyAgreementOID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_keyAgreementOID() const;

  constexpr void __set_keyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_keyEncryptionOID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_keyEncryptionOID() const;

  constexpr void __set_keyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::System::Collections::IList*& __get_recipientCerts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_recipientCerts() const;

  constexpr void __set_recipientCerts(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*& __get_senderKeyPair();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*> const& __get_senderKeyPair() const;

  constexpr void __set_senderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* value);

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* getStaticF_Helper();

  static inline ::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator* New_ctor();

  /// @brief Method .ctor addr 0x1202a74 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method set_KeyAgreementOID addr 0x1202a7c size 0x8 virtual false final false
  inline void set_KeyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method set_KeyEncryptionOID addr 0x1202a84 size 0x8 virtual false final false
  inline void set_KeyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method set_RecipientCerts addr 0x1202a8c size 0x6c virtual false final false
  inline void set_RecipientCerts(::System::Collections::ICollection* value);

  /// @brief Method set_SenderKeyPair addr 0x1202af8 size 0x8 virtual false final false
  inline void set_SenderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* value);

  /// @brief Method Generate addr 0x1202b00 size 0x11f8 virtual true final true
  inline ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method CreateOriginatorPublicKey addr 0x1203cf8 size 0x120 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* CreateOriginatorPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyAgreeRecipientInfoGenerator(KeyAgreeRecipientInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyAgreeRecipientInfoGenerator(KeyAgreeRecipientInfoGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyAgreeRecipientInfoGenerator();

public:
  /// @brief Field keyAgreementOID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyAgreementOID;

  /// @brief Field keyEncryptionOID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___keyEncryptionOID;

  /// @brief Field recipientCerts, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___recipientCerts;

  /// @brief Field senderKeyPair, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* ___senderKeyPair;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator*, "Org.BouncyCastle.Cms", "KeyAgreeRecipientInfoGenerator");
