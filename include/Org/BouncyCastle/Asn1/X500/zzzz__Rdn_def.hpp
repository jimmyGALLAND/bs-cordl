#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rdn)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::X500 {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500 {
class Rdn;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X500::Rdn);
// Type: Org.BouncyCastle.Asn1.X500::Rdn
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X500 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(326))
// CS Name: ::Org.BouncyCastle.Asn1.X500::Rdn*
class CORDL_TYPE Rdn : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field values, offset 0x10, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::Org::BouncyCastle::Asn1::Asn1Set* values;

  __declspec(property(get = get_IsMultiValued)) bool IsMultiValued;

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_values();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_values() const;

  constexpr void __set_values(::Org::BouncyCastle::Asn1::Asn1Set* value);

  static inline ::Org::BouncyCastle::Asn1::X500::Rdn* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* values);

  /// @brief Method .ctor addr 0x107fd3c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* values);

  /// @brief Method GetInstance addr 0x107fd64 size 0xa8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X500::Rdn* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X500::Rdn* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor addr 0x107fe0c size 0x134 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::X500::Rdn* New_ctor(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* attrTAndV);

  /// @brief Method .ctor addr 0x107ff40 size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* attrTAndV);

  static inline ::Org::BouncyCastle::Asn1::X500::Rdn*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>*> aAndVs);

  /// @brief Method .ctor addr 0x107ffbc size 0x7c virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>*> aAndVs);

  /// @brief Method get_IsMultiValued addr 0x1080038 size 0x2c virtual true final false
  inline bool get_IsMultiValued();

  /// @brief Method get_Count addr 0x1080064 size 0x20 virtual true final false
  inline int32_t get_Count();

  /// @brief Method GetFirst addr 0x1080084 size 0x50 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* GetFirst();

  /// @brief Method GetTypesAndValues addr 0x10800d4 size 0xf4 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>*> GetTypesAndValues();

  /// @brief Method ToAsn1Object addr 0x10801c8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Rdn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rdn(Rdn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rdn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rdn(Rdn const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rdn();

public:
  /// @brief Field values, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X500::Rdn, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X500
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X500::Rdn);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X500::Rdn*, "Org.BouncyCastle.Asn1.X500", "Rdn");
