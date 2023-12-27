#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PolicyInformation)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::PolicyInformation);
// Type: Org.BouncyCastle.Asn1.X509::PolicyInformation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(374))
// CS Name: ::Org.BouncyCastle.Asn1.X509::PolicyInformation*
class CORDL_TYPE PolicyInformation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field policyIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_policyIdentifier, put = __set_policyIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyIdentifier;

  /// @brief Field policyQualifiers, offset 0x18, size 0x8
  __declspec(property(get = __get_policyQualifiers, put = __set_policyQualifiers))::Org::BouncyCastle::Asn1::Asn1Sequence* policyQualifiers;

  __declspec(property(get = get_PolicyIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PolicyIdentifier;

  __declspec(property(get = get_PolicyQualifiers))::Org::BouncyCastle::Asn1::Asn1Sequence* PolicyQualifiers;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_policyIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_policyIdentifier() const;

  constexpr void __set_policyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_policyQualifiers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_policyQualifiers() const;

  constexpr void __set_policyQualifiers(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyInformation* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1194180 size 0x1a4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyInformation* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyIdentifier);

  /// @brief Method .ctor addr 0x1194324 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyIdentifier);

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyInformation* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyIdentifier,
                                                                             ::Org::BouncyCastle::Asn1::Asn1Sequence* policyQualifiers);

  /// @brief Method .ctor addr 0x119434c size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyIdentifier, ::Org::BouncyCastle::Asn1::Asn1Sequence* policyQualifiers);

  /// @brief Method GetInstance addr 0x1194378 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::PolicyInformation* GetInstance(::System::Object* obj);

  /// @brief Method get_PolicyIdentifier addr 0x119441c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PolicyIdentifier();

  /// @brief Method get_PolicyQualifiers addr 0x1194424 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_PolicyQualifiers();

  /// @brief Method ToAsn1Object addr 0x119442c size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PolicyInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolicyInformation(PolicyInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolicyInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolicyInformation(PolicyInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolicyInformation();

public:
  /// @brief Field policyIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___policyIdentifier;

  /// @brief Field policyQualifiers, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___policyQualifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::PolicyInformation, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PolicyInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PolicyInformation*, "Org.BouncyCastle.Asn1.X509", "PolicyInformation");
