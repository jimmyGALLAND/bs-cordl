#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OriginatorInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo);
// Type: Org.BouncyCastle.Asn1.Cms::OriginatorInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(82))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::OriginatorInfo*
class CORDL_TYPE OriginatorInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certs, offset 0x10, size 0x8
  __declspec(property(get = __get_certs, put = __set_certs))::Org::BouncyCastle::Asn1::Asn1Set* certs;

  /// @brief Field crls, offset 0x18, size 0x8
  __declspec(property(get = __get_crls, put = __set_crls))::Org::BouncyCastle::Asn1::Asn1Set* crls;

  __declspec(property(get = get_Certificates))::Org::BouncyCastle::Asn1::Asn1Set* Certificates;

  __declspec(property(get = get_Crls))::Org::BouncyCastle::Asn1::Asn1Set* Crls;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_certs() const;

  constexpr void __set_certs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_crls();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_crls() const;

  constexpr void __set_crls(::Org::BouncyCastle::Asn1::Asn1Set* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* certs, ::Org::BouncyCastle::Asn1::Asn1Set* crls);

  /// @brief Method .ctor addr 0xe7b188 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* certs, ::Org::BouncyCastle::Asn1::Asn1Set* crls);

  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe7b1b4 size 0x2a0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe72860 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xe731c8 size 0x178 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* GetInstance(::System::Object* obj);

  /// @brief Method get_Certificates addr 0xe7b454 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Certificates();

  /// @brief Method get_Crls addr 0xe7b45c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Crls();

  /// @brief Method ToAsn1Object addr 0xe7b464 size 0xc0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorInfo(OriginatorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorInfo(OriginatorInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorInfo();

public:
  /// @brief Field certs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___certs;

  /// @brief Field crls, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___crls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, "Org.BouncyCastle.Asn1.Cms", "OriginatorInfo");
