#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OtherSigningCertificate)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherCertID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherSigningCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate);
// Type: Org.BouncyCastle.Asn1.Esf::OtherSigningCertificate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(153))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OtherSigningCertificate*
class CORDL_TYPE OtherSigningCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certs, offset 0x10, size 0x8
  __declspec(property(get = __get_certs, put = __set_certs))::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  /// @brief Field policies, offset 0x18, size 0x8
  __declspec(property(get = __get_policies, put = __set_policies))::Org::BouncyCastle::Asn1::Asn1Sequence* policies;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_certs() const;

  constexpr void __set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_policies();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_policies() const;

  constexpr void __set_policies(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xe95ccc size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe95e54 size 0x1d0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> certs);

  /// @brief Method .ctor addr 0xe96024 size 0x8 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> certs);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> certs,
           ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policies);

  /// @brief Method .ctor addr 0xe9602c size 0xf4 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> certs,
                    ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> policies);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* New_ctor(::System::Collections::IEnumerable* certs);

  /// @brief Method .ctor addr 0xe96120 size 0x8 virtual false final false
  inline void _ctor(::System::Collections::IEnumerable* certs);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate* New_ctor(::System::Collections::IEnumerable* certs, ::System::Collections::IEnumerable* policies);

  /// @brief Method .ctor addr 0xe96128 size 0x27c virtual false final false
  inline void _ctor(::System::Collections::IEnumerable* certs, ::System::Collections::IEnumerable* policies);

  /// @brief Method GetCerts addr 0xe963a4 size 0x120 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OtherCertID*, ::Array<::Org::BouncyCastle::Asn1::Esf::OtherCertID*>*> GetCerts();

  /// @brief Method GetPolicies addr 0xe964c4 size 0x128 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*, ::Array<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*> GetPolicies();

  /// @brief Method ToAsn1Object addr 0xe965ec size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherSigningCertificate(OtherSigningCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherSigningCertificate(OtherSigningCertificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherSigningCertificate();

public:
  /// @brief Field certs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  /// @brief Field policies, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___policies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate*, "Org.BouncyCastle.Asn1.Esf", "OtherSigningCertificate");
