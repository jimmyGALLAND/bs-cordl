#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsSignedGenerator)
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedGenerator);
// Type: Org.BouncyCastle.Cms::CmsSignedGenerator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(649))
// CS Name: ::Org.BouncyCastle.Cms::CmsSignedGenerator*
class CORDL_TYPE CmsSignedGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _certs, offset 0x10, size 0x8
  __declspec(property(get = __get__certs, put = __set__certs))::System::Collections::IList* _certs;

  /// @brief Field _crls, offset 0x18, size 0x8
  __declspec(property(get = __get__crls, put = __set__crls))::System::Collections::IList* _crls;

  /// @brief Field _signers, offset 0x20, size 0x8
  __declspec(property(get = __get__signers, put = __set__signers))::System::Collections::IList* _signers;

  /// @brief Field _digests, offset 0x28, size 0x8
  __declspec(property(get = __get__digests, put = __set__digests))::System::Collections::IDictionary* _digests;

  /// @brief Field _useDerForCerts, offset 0x30, size 0x1
  __declspec(property(get = __get__useDerForCerts, put = __set__useDerForCerts)) bool _useDerForCerts;

  /// @brief Field _useDerForCrls, offset 0x31, size 0x1
  __declspec(property(get = __get__useDerForCrls, put = __set__useDerForCrls)) bool _useDerForCrls;

  /// @brief Field rand, offset 0x38, size 0x8
  __declspec(property(get = __get_rand, put = __set_rand))::Org::BouncyCastle::Security::SecureRandom* rand;

  /// @brief Field Data, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Data, put = setStaticF_Data))::StringW Data;

  /// @brief Field DigestSha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestSha1, put = setStaticF_DigestSha1))::StringW DigestSha1;

  /// @brief Field DigestSha224, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestSha224, put = setStaticF_DigestSha224))::StringW DigestSha224;

  /// @brief Field DigestSha256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestSha256, put = setStaticF_DigestSha256))::StringW DigestSha256;

  /// @brief Field DigestSha384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestSha384, put = setStaticF_DigestSha384))::StringW DigestSha384;

  /// @brief Field DigestSha512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestSha512, put = setStaticF_DigestSha512))::StringW DigestSha512;

  /// @brief Field DigestMD5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestMD5, put = setStaticF_DigestMD5))::StringW DigestMD5;

  /// @brief Field DigestGost3411, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestGost3411, put = setStaticF_DigestGost3411))::StringW DigestGost3411;

  /// @brief Field DigestRipeMD128, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestRipeMD128, put = setStaticF_DigestRipeMD128))::StringW DigestRipeMD128;

  /// @brief Field DigestRipeMD160, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestRipeMD160, put = setStaticF_DigestRipeMD160))::StringW DigestRipeMD160;

  /// @brief Field DigestRipeMD256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DigestRipeMD256, put = setStaticF_DigestRipeMD256))::StringW DigestRipeMD256;

  /// @brief Field EncryptionRsa, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptionRsa, put = setStaticF_EncryptionRsa))::StringW EncryptionRsa;

  /// @brief Field EncryptionDsa, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptionDsa, put = setStaticF_EncryptionDsa))::StringW EncryptionDsa;

  /// @brief Field EncryptionECDsa, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptionECDsa, put = setStaticF_EncryptionECDsa))::StringW EncryptionECDsa;

  /// @brief Field EncryptionRsaPss, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptionRsaPss, put = setStaticF_EncryptionRsaPss))::StringW EncryptionRsaPss;

  /// @brief Field EncryptionGost3410, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptionGost3410, put = setStaticF_EncryptionGost3410))::StringW EncryptionGost3410;

  /// @brief Field EncryptionECGost3410, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncryptionECGost3410, put = setStaticF_EncryptionECGost3410))::StringW EncryptionECGost3410;

  __declspec(property(get = get_UseDerForCerts, put = set_UseDerForCerts)) bool UseDerForCerts;

  __declspec(property(get = get_UseDerForCrls, put = set_UseDerForCrls)) bool UseDerForCrls;

  constexpr ::System::Collections::IList*& __get__certs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__certs() const;

  constexpr void __set__certs(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get__crls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__crls() const;

  constexpr void __set__crls(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get__signers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__signers() const;

  constexpr void __set__signers(::System::Collections::IList* value);

  constexpr ::System::Collections::IDictionary*& __get__digests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get__digests() const;

  constexpr void __set__digests(::System::Collections::IDictionary* value);

  constexpr bool& __get__useDerForCerts();

  constexpr bool const& __get__useDerForCerts() const;

  constexpr void __set__useDerForCerts(bool value);

  constexpr bool& __get__useDerForCrls();

  constexpr bool const& __get__useDerForCrls() const;

  constexpr void __set__useDerForCrls(bool value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_rand();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_rand() const;

  constexpr void __set_rand(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline void setStaticF_Data(::StringW value);

  static inline ::StringW getStaticF_Data();

  static inline void setStaticF_DigestSha1(::StringW value);

  static inline ::StringW getStaticF_DigestSha1();

  static inline void setStaticF_DigestSha224(::StringW value);

  static inline ::StringW getStaticF_DigestSha224();

  static inline void setStaticF_DigestSha256(::StringW value);

  static inline ::StringW getStaticF_DigestSha256();

  static inline void setStaticF_DigestSha384(::StringW value);

  static inline ::StringW getStaticF_DigestSha384();

  static inline void setStaticF_DigestSha512(::StringW value);

  static inline ::StringW getStaticF_DigestSha512();

  static inline void setStaticF_DigestMD5(::StringW value);

  static inline ::StringW getStaticF_DigestMD5();

  static inline void setStaticF_DigestGost3411(::StringW value);

  static inline ::StringW getStaticF_DigestGost3411();

  static inline void setStaticF_DigestRipeMD128(::StringW value);

  static inline ::StringW getStaticF_DigestRipeMD128();

  static inline void setStaticF_DigestRipeMD160(::StringW value);

  static inline ::StringW getStaticF_DigestRipeMD160();

  static inline void setStaticF_DigestRipeMD256(::StringW value);

  static inline ::StringW getStaticF_DigestRipeMD256();

  static inline void setStaticF_EncryptionRsa(::StringW value);

  static inline ::StringW getStaticF_EncryptionRsa();

  static inline void setStaticF_EncryptionDsa(::StringW value);

  static inline ::StringW getStaticF_EncryptionDsa();

  static inline void setStaticF_EncryptionECDsa(::StringW value);

  static inline ::StringW getStaticF_EncryptionECDsa();

  static inline void setStaticF_EncryptionRsaPss(::StringW value);

  static inline ::StringW getStaticF_EncryptionRsaPss();

  static inline void setStaticF_EncryptionGost3410(::StringW value);

  static inline ::StringW getStaticF_EncryptionGost3410();

  static inline void setStaticF_EncryptionECGost3410(::StringW value);

  static inline ::StringW getStaticF_EncryptionECGost3410();

  static inline ::Org::BouncyCastle::Cms::CmsSignedGenerator* New_ctor();

  /// @brief Method .ctor addr 0x11e8814 size 0x64 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::CmsSignedGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x11e8878 size 0xa0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method GetBaseParameters addr 0x11e8918 size 0x23c virtual true final false
  inline ::System::Collections::IDictionary* GetBaseParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digAlgId,
                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method GetAttributeSet addr 0x11e8b54 size 0x7c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* GetAttributeSet(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attr);

  /// @brief Method AddCertificates addr 0x11e8bd0 size 0x24 virtual false final false
  inline void AddCertificates(::Org::BouncyCastle::X509::Store::IX509Store* certStore);

  /// @brief Method AddCrls addr 0x11e8bf4 size 0x24 virtual false final false
  inline void AddCrls(::Org::BouncyCastle::X509::Store::IX509Store* crlStore);

  /// @brief Method AddAttributeCertificates addr 0x11e8c18 size 0x5cc virtual false final false
  inline void AddAttributeCertificates(::Org::BouncyCastle::X509::Store::IX509Store* store);

  /// @brief Method AddSigners addr 0x11e91e4 size 0x3e4 virtual false final false
  inline void AddSigners(::Org::BouncyCastle::Cms::SignerInformationStore* signerStore);

  /// @brief Method GetGeneratedDigests addr 0x11e95c8 size 0x5c virtual false final false
  inline ::System::Collections::IDictionary* GetGeneratedDigests();

  /// @brief Method get_UseDerForCerts addr 0x11e9624 size 0x8 virtual false final false
  inline bool get_UseDerForCerts();

  /// @brief Method set_UseDerForCerts addr 0x11e962c size 0xc virtual false final false
  inline void set_UseDerForCerts(bool value);

  /// @brief Method get_UseDerForCrls addr 0x11e9638 size 0x8 virtual false final false
  inline bool get_UseDerForCrls();

  /// @brief Method set_UseDerForCrls addr 0x11e9640 size 0xc virtual false final false
  inline void set_UseDerForCrls(bool value);

  /// @brief Method AddSignerCallback addr 0x11e964c size 0x4 virtual true final false
  inline void AddSignerCallback(::Org::BouncyCastle::Cms::SignerInformation* si);

  /// @brief Method GetSignerIdentifier addr 0x11e9650 size 0x74 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* GetSignerIdentifier(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method GetSignerIdentifier addr 0x11e9758 size 0x94 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* GetSignerIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> subjectKeyIdentifier);

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedGenerator(CmsSignedGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedGenerator(CmsSignedGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedGenerator();

public:
  /// @brief Field _certs, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ____certs;

  /// @brief Field _crls, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ____crls;

  /// @brief Field _signers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ____signers;

  /// @brief Field _digests, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____digests;

  /// @brief Field _useDerForCerts, offset: 0x30, size: 0x1, def value: None
  bool ____useDerForCerts;

  /// @brief Field _useDerForCrls, offset: 0x31, size: 0x1, def value: None
  bool ____useDerForCrls;

  /// @brief Field rand, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___rand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedGenerator, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedGenerator*, "Org.BouncyCastle.Cms", "CmsSignedGenerator");
