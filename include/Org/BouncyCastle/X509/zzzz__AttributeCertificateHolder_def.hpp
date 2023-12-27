#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCertificateHolder)
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::AttributeCertificateHolder);
// Type: Org.BouncyCastle.X509::AttributeCertificateHolder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1852))
// CS Name: ::Org.BouncyCastle.X509::AttributeCertificateHolder*
class CORDL_TYPE AttributeCertificateHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field holder, offset 0x10, size 0x8
  __declspec(property(get = __get_holder, put = __set_holder))::Org::BouncyCastle::Asn1::X509::Holder* holder;

  __declspec(property(get = get_DigestedObjectType)) int32_t DigestedObjectType;

  __declspec(property(get = get_DigestAlgorithm))::StringW DigestAlgorithm;

  __declspec(property(get = get_OtherObjectTypeID))::StringW OtherObjectTypeID;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Math::BigInteger* SerialNumber;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::Holder*& __get_holder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Holder*> const& __get_holder() const;

  constexpr void __set_holder(::Org::BouncyCastle::Asn1::X509::Holder* value);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1172e38 size 0x34 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* issuerName, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method .ctor addr 0x1172e6c size 0xf4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* issuerName, ::Org::BouncyCastle::Math::BigInteger* serialNumber);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method .ctor addr 0x1172ff4 size 0x1e4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  /// @brief Method .ctor addr 0x11731d8 size 0x8c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* New_ctor(int32_t digestedObjectType, ::StringW digestAlgorithm, ::StringW otherObjectTypeID,
                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> objectDigest);

  /// @brief Method .ctor addr 0x1173264 size 0x168 virtual false final false
  inline void _ctor(int32_t digestedObjectType, ::StringW digestAlgorithm, ::StringW otherObjectTypeID, ::ArrayW<uint8_t, ::Array<uint8_t>*> objectDigest);

  /// @brief Method get_DigestedObjectType addr 0x11733cc size 0x38 virtual false final false
  inline int32_t get_DigestedObjectType();

  /// @brief Method get_DigestAlgorithm addr 0x1173404 size 0x44 virtual false final false
  inline ::StringW get_DigestAlgorithm();

  /// @brief Method GetObjectDigest addr 0x1173448 size 0x3c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetObjectDigest();

  /// @brief Method get_OtherObjectTypeID addr 0x1173484 size 0x34 virtual false final false
  inline ::StringW get_OtherObjectTypeID();

  /// @brief Method GenerateGeneralNames addr 0x1172f60 size 0x94 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* GenerateGeneralNames(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  /// @brief Method MatchesDN addr 0x11734b8 size 0x180 virtual false final false
  inline bool MatchesDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Asn1::X509::GeneralNames* targets);

  /// @brief Method GetNames addr 0x1173638 size 0x160 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetNames(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> names);

  /// @brief Method GetPrincipals addr 0x1173798 size 0x1d0 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> GetPrincipals(::Org::BouncyCastle::Asn1::X509::GeneralNames* names);

  /// @brief Method GetEntityNames addr 0x1173968 size 0x2c virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> GetEntityNames();

  /// @brief Method GetIssuer addr 0x1173994 size 0x30 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> GetIssuer();

  /// @brief Method get_SerialNumber addr 0x11739c4 size 0x38 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();

  /// @brief Method Clone addr 0x11739fc size 0xdc virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method Match addr 0x1173ad8 size 0x4b8 virtual false final false
  inline bool Match(::Org::BouncyCastle::X509::X509Certificate* x509Cert);

  /// @brief Method Equals addr 0x1173f90 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x1174038 size 0x1c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Match addr 0x1174054 size 0x8c virtual true final true
  inline bool Match(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCertificateHolder(AttributeCertificateHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCertificateHolder(AttributeCertificateHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCertificateHolder();

public:
  /// @brief Field holder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Holder* ___holder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::AttributeCertificateHolder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::AttributeCertificateHolder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::AttributeCertificateHolder*, "Org.BouncyCastle.X509", "AttributeCertificateHolder");
