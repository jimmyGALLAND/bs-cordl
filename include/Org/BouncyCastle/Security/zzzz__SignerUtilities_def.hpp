#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SignerUtilities)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class SignerUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::SignerUtilities);
// Type: Org.BouncyCastle.Security::SignerUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1759))
// CS Name: ::Org.BouncyCastle.Security::SignerUtilities*
class CORDL_TYPE SignerUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms))::System::Collections::IDictionary* algorithms;

  /// @brief Field oids, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_oids, put = setStaticF_oids))::System::Collections::IDictionary* oids;

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline void setStaticF_oids(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_oids();

  static inline ::Org::BouncyCastle::Security::SignerUtilities* New_ctor();

  /// @brief Method .ctor addr 0x1140fe4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method GetObjectIdentifier addr 0x114c0f0 size 0x25c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetObjectIdentifier(::StringW mechanism);

  /// @brief Method get_Algorithms addr 0x114c34c size 0xcc virtual false final false
  static inline ::System::Collections::ICollection* get_Algorithms();

  /// @brief Method GetDefaultX509Parameters addr 0x114c418 size 0x60 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetDefaultX509Parameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id);

  /// @brief Method GetDefaultX509Parameters addr 0x114c478 size 0x2a8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetDefaultX509Parameters(::StringW algorithm);

  /// @brief Method GetPssX509Parameters addr 0x114c720 size 0x244 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetPssX509Parameters(::StringW digestName);

  /// @brief Method GetSigner addr 0x114c964 size 0x60 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::ISigner* GetSigner(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id);

  /// @brief Method GetSigner addr 0x114c9c4 size 0x103c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::ISigner* GetSigner(::StringW algorithm);

  /// @brief Method GetEncodingName addr 0x114da00 size 0x108 virtual false final false
  static inline ::StringW GetEncodingName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method InitSigner addr 0x114db08 size 0x80 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::ISigner* InitSigner(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid, bool forSigning,
                                                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method InitSigner addr 0x114db88 size 0x138 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::ISigner* InitSigner(::StringW algorithm, bool forSigning, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                 ::Org::BouncyCastle::Security::SecureRandom* random);

  // Ctor Parameters [CppParam { name: "", ty: "SignerUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerUtilities(SignerUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerUtilities(SignerUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::SignerUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::SignerUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::SignerUtilities*, "Org.BouncyCastle.Security", "SignerUtilities");
