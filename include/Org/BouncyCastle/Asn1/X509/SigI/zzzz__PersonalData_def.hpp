#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PersonalData)
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::X509::SigI {
class NameOrPseudonym;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::SigI {
class PersonalData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData);
// Type: Org.BouncyCastle.Asn1.X509.SigI::PersonalData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::SigI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(336))
// CS Name: ::Org.BouncyCastle.Asn1.X509.SigI::PersonalData*
class CORDL_TYPE PersonalData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field nameOrPseudonym, offset 0x10, size 0x8
  __declspec(property(get = __get_nameOrPseudonym, put = __set_nameOrPseudonym))::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym;

  /// @brief Field nameDistinguisher, offset 0x18, size 0x8
  __declspec(property(get = __get_nameDistinguisher, put = __set_nameDistinguisher))::Org::BouncyCastle::Math::BigInteger* nameDistinguisher;

  /// @brief Field dateOfBirth, offset 0x20, size 0x8
  __declspec(property(get = __get_dateOfBirth, put = __set_dateOfBirth))::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth;

  /// @brief Field placeOfBirth, offset 0x28, size 0x8
  __declspec(property(get = __get_placeOfBirth, put = __set_placeOfBirth))::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth;

  /// @brief Field gender, offset 0x30, size 0x8
  __declspec(property(get = __get_gender, put = __set_gender))::StringW gender;

  /// @brief Field postalAddress, offset 0x38, size 0x8
  __declspec(property(get = __get_postalAddress, put = __set_postalAddress))::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress;

  __declspec(property(get = get_NameOrPseudonym))::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* NameOrPseudonym;

  __declspec(property(get = get_NameDistinguisher))::Org::BouncyCastle::Math::BigInteger* NameDistinguisher;

  __declspec(property(get = get_DateOfBirth))::Org::BouncyCastle::Asn1::DerGeneralizedTime* DateOfBirth;

  __declspec(property(get = get_PlaceOfBirth))::Org::BouncyCastle::Asn1::X500::DirectoryString* PlaceOfBirth;

  __declspec(property(get = get_Gender))::StringW Gender;

  __declspec(property(get = get_PostalAddress))::Org::BouncyCastle::Asn1::X500::DirectoryString* PostalAddress;

  constexpr ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*& __get_nameOrPseudonym();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*> const& __get_nameOrPseudonym() const;

  constexpr void __set_nameOrPseudonym(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_nameDistinguisher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_nameDistinguisher() const;

  constexpr void __set_nameDistinguisher(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_dateOfBirth();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_dateOfBirth() const;

  constexpr void __set_dateOfBirth(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __get_placeOfBirth();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __get_placeOfBirth() const;

  constexpr void __set_placeOfBirth(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  constexpr ::StringW& __get_gender();

  constexpr ::StringW const& __get_gender() const;

  constexpr void __set_gender(::StringW value);

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __get_postalAddress();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __get_postalAddress() const;

  constexpr void __set_postalAddress(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  /// @brief Method GetInstance addr 0x1082cd0 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1082e58 size 0x36c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* New_ctor(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym,
                                                                              ::Org::BouncyCastle::Math::BigInteger* nameDistinguisher, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth,
                                                                              ::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth, ::StringW gender,
                                                                              ::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress);

  /// @brief Method .ctor addr 0x10831c4 size 0x54 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym, ::Org::BouncyCastle::Math::BigInteger* nameDistinguisher,
                    ::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth, ::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth, ::StringW gender,
                    ::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress);

  /// @brief Method get_NameOrPseudonym addr 0x1083218 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* get_NameOrPseudonym();

  /// @brief Method get_NameDistinguisher addr 0x1083220 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_NameDistinguisher();

  /// @brief Method get_DateOfBirth addr 0x1083228 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_DateOfBirth();

  /// @brief Method get_PlaceOfBirth addr 0x1083230 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_PlaceOfBirth();

  /// @brief Method get_Gender addr 0x1083238 size 0x8 virtual false final false
  inline ::StringW get_Gender();

  /// @brief Method get_PostalAddress addr 0x1083240 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_PostalAddress();

  /// @brief Method ToAsn1Object addr 0x1083248 size 0x234 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PersonalData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersonalData(PersonalData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersonalData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersonalData(PersonalData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersonalData();

public:
  /// @brief Field nameOrPseudonym, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* ___nameOrPseudonym;

  /// @brief Field nameDistinguisher, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___nameDistinguisher;

  /// @brief Field dateOfBirth, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___dateOfBirth;

  /// @brief Field placeOfBirth, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___placeOfBirth;

  /// @brief Field gender, offset: 0x30, size: 0x8, def value: None
  ::StringW ___gender;

  /// @brief Field postalAddress, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___postalAddress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::SigI
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*, "Org.BouncyCastle.Asn1.X509.SigI", "PersonalData");
