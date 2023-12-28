#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SinglePubInfo)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class SinglePubInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo);
// Type: Org.BouncyCastle.Asn1.Crmf::SinglePubInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(122))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::SinglePubInfo*
class CORDL_TYPE SinglePubInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field pubMethod, offset 0x10, size 0x8
  __declspec(property(get = __get_pubMethod, put = __set_pubMethod))::Org::BouncyCastle::Asn1::DerInteger* pubMethod;

  /// @brief Field pubLocation, offset 0x18, size 0x8
  __declspec(property(get = __get_pubLocation, put = __set_pubLocation))::Org::BouncyCastle::Asn1::X509::GeneralName* pubLocation;

  __declspec(property(get = get_PubLocation))::Org::BouncyCastle::Asn1::X509::GeneralName* PubLocation;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_pubMethod();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_pubMethod() const;

  constexpr void __set_pubMethod(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_pubLocation();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_pubLocation() const;

  constexpr void __set_pubLocation(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe88958 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe87308 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo* GetInstance(::System::Object* obj);

  /// @brief Method get_PubLocation addr 0xe889dc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_PubLocation();

  /// @brief Method ToAsn1Object addr 0xe889e4 size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SinglePubInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinglePubInfo(SinglePubInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinglePubInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinglePubInfo(SinglePubInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinglePubInfo();

public:
  /// @brief Field pubMethod, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___pubMethod;

  /// @brief Field pubLocation, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___pubLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*, "Org.BouncyCastle.Asn1.Crmf", "SinglePubInfo");
