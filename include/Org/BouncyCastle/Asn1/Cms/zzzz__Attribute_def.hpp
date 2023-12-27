#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Attribute)
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Attribute;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::Attribute);
// Type: Org.BouncyCastle.Asn1.Cms::Attribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(55))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::Attribute*
class CORDL_TYPE Attribute : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field attrType, offset 0x10, size 0x8
  __declspec(property(get = __get_attrType, put = __set_attrType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType;

  /// @brief Field attrValues, offset 0x18, size 0x8
  __declspec(property(get = __get_attrValues, put = __set_attrValues))::Org::BouncyCastle::Asn1::Asn1Set* attrValues;

  __declspec(property(get = get_AttrType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AttrType;

  __declspec(property(get = get_AttrValues))::Org::BouncyCastle::Asn1::Asn1Set* AttrValues;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_attrType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_attrType() const;

  constexpr void __set_attrType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_attrValues();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_attrValues() const;

  constexpr void __set_attrValues(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method GetInstance addr 0xe6fb54 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Attribute* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::Attribute* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe6fcdc size 0x14c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Cms::Attribute* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Set* attrValues);

  /// @brief Method .ctor addr 0xe6fe28 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Set* attrValues);

  /// @brief Method get_AttrType addr 0xe6fe54 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_AttrType();

  /// @brief Method get_AttrValues addr 0xe6fe5c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AttrValues();

  /// @brief Method ToAsn1Object addr 0xe6fe64 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Attribute(Attribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Attribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Attribute(Attribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Attribute();

public:
  /// @brief Field attrType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___attrType;

  /// @brief Field attrValues, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___attrValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::Attribute, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Attribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Attribute*, "Org.BouncyCastle.Asn1.Cms", "Attribute");
