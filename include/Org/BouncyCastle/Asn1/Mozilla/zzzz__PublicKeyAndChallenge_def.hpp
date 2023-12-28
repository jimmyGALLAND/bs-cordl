#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PublicKeyAndChallenge)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Mozilla {
class PublicKeyAndChallenge;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge);
// Type: Org.BouncyCastle.Asn1.Mozilla::PublicKeyAndChallenge
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Mozilla {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(202))
// CS Name: ::Org.BouncyCastle.Asn1.Mozilla::PublicKeyAndChallenge*
class CORDL_TYPE PublicKeyAndChallenge : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field pkacSeq, offset 0x10, size 0x8
  __declspec(property(get = __get_pkacSeq, put = __set_pkacSeq))::Org::BouncyCastle::Asn1::Asn1Sequence* pkacSeq;

  /// @brief Field spki, offset 0x18, size 0x8
  __declspec(property(get = __get_spki, put = __set_spki))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* spki;

  /// @brief Field challenge, offset 0x20, size 0x8
  __declspec(property(get = __get_challenge, put = __set_challenge))::Org::BouncyCastle::Asn1::DerIA5String* challenge;

  __declspec(property(get = get_SubjectPublicKeyInfo))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* SubjectPublicKeyInfo;

  __declspec(property(get = get_Challenge))::Org::BouncyCastle::Asn1::DerIA5String* Challenge;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_pkacSeq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_pkacSeq() const;

  constexpr void __set_pkacSeq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __get_spki();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& __get_spki() const;

  constexpr void __set_spki(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __get_challenge();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerIA5String*> const& __get_challenge() const;

  constexpr void __set_challenge(::Org::BouncyCastle::Asn1::DerIA5String* value);

  /// @brief Method GetInstance addr 0xf7d530 size 0x190 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf7d6c0 size 0x6c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object addr 0xf7d72c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method get_SubjectPublicKeyInfo addr 0xf7d734 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();

  /// @brief Method get_Challenge addr 0xf7d73c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_Challenge();

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyAndChallenge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicKeyAndChallenge(PublicKeyAndChallenge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicKeyAndChallenge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicKeyAndChallenge(PublicKeyAndChallenge const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicKeyAndChallenge();

public:
  /// @brief Field pkacSeq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___pkacSeq;

  /// @brief Field spki, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___spki;

  /// @brief Field challenge, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerIA5String* ___challenge;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Mozilla
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*, "Org.BouncyCastle.Asn1.Mozilla", "PublicKeyAndChallenge");
