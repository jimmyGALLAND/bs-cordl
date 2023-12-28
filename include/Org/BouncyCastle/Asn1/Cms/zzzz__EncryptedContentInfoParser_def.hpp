#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptedContentInfoParser)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfoParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser);
// Type: Org.BouncyCastle.Asn1.Cms::EncryptedContentInfoParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(69))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::EncryptedContentInfoParser*
class CORDL_TYPE EncryptedContentInfoParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _contentType, offset 0x10, size 0x8
  __declspec(property(get = __get__contentType, put = __set__contentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _contentType;

  /// @brief Field _contentEncryptionAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __get__contentEncryptionAlgorithm, put = __set__contentEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _contentEncryptionAlgorithm;

  /// @brief Field _encryptedContent, offset 0x20, size 0x8
  __declspec(property(get = __get__encryptedContent, put = __set__encryptedContent))::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* _encryptedContent;

  __declspec(property(get = get_ContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  __declspec(property(get = get_ContentEncryptionAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ContentEncryptionAlgorithm;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get__contentType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get__contentType() const;

  constexpr void __set__contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get__contentEncryptionAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get__contentEncryptionAlgorithm() const;

  constexpr void __set__contentEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*& __get__encryptedContent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*> const& __get__encryptedContent() const;

  constexpr void __set__encryptedContent(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method .ctor addr 0xe74da4 size 0x2b8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_ContentType addr 0xe76668 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

  /// @brief Method get_ContentEncryptionAlgorithm addr 0xe76670 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_ContentEncryptionAlgorithm();

  /// @brief Method GetEncryptedContent addr 0xe76678 size 0xb0 virtual false final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* GetEncryptedContent(int32_t tag);

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfoParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedContentInfoParser(EncryptedContentInfoParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfoParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedContentInfoParser(EncryptedContentInfoParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedContentInfoParser();

public:
  /// @brief Field _contentType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ____contentType;

  /// @brief Field _contentEncryptionAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ____contentEncryptionAlgorithm;

  /// @brief Field _encryptedContent, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* ____encryptedContent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser*, "Org.BouncyCastle.Asn1.Cms", "EncryptedContentInfoParser");
