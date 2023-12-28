#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(IssuerAndSerialNumber)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
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
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class IssuerAndSerialNumber;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber);
// Type: Org.BouncyCastle.Asn1.Pkcs::IssuerAndSerialNumber
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(237))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::IssuerAndSerialNumber*
class CORDL_TYPE IssuerAndSerialNumber : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::Org::BouncyCastle::Asn1::X509::X509Name* name;

  /// @brief Field certSerialNumber, offset 0x18, size 0x8
  __declspec(property(get = __get_certSerialNumber, put = __set_certSerialNumber))::Org::BouncyCastle::Asn1::DerInteger* certSerialNumber;

  __declspec(property(get = get_Name))::Org::BouncyCastle::Asn1::X509::X509Name* Name;

  __declspec(property(get = get_CertificateSerialNumber))::Org::BouncyCastle::Asn1::DerInteger* CertificateSerialNumber;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_name() const;

  constexpr void __set_name(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_certSerialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_certSerialNumber() const;

  constexpr void __set_certSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetInstance addr 0xf88a48 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf88bd0 size 0x130 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name, ::Org::BouncyCastle::Math::BigInteger* certSerialNumber);

  /// @brief Method .ctor addr 0xf88d00 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name, ::Org::BouncyCastle::Math::BigInteger* certSerialNumber);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name, ::Org::BouncyCastle::Asn1::DerInteger* certSerialNumber);

  /// @brief Method .ctor addr 0xf88d84 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* name, ::Org::BouncyCastle::Asn1::DerInteger* certSerialNumber);

  /// @brief Method get_Name addr 0xf88db0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Name();

  /// @brief Method get_CertificateSerialNumber addr 0xf88db8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertificateSerialNumber();

  /// @brief Method ToAsn1Object addr 0xf88dc0 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "IssuerAndSerialNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IssuerAndSerialNumber(IssuerAndSerialNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IssuerAndSerialNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IssuerAndSerialNumber(IssuerAndSerialNumber const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IssuerAndSerialNumber();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___name;

  /// @brief Field certSerialNumber, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___certSerialNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber*, "Org.BouncyCastle.Asn1.Pkcs", "IssuerAndSerialNumber");
