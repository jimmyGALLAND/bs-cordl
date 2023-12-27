#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Attributes)
namespace Org::BouncyCastle::Asn1::Cms {
class Attribute;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::Attributes);
// Type: Org.BouncyCastle.Asn1.Cms::Attributes
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(56))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::Attributes*
class CORDL_TYPE Attributes : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field attributes, offset 0x10, size 0x8
  __declspec(property(get = __get_attributes, put = __set_attributes))::Org::BouncyCastle::Asn1::Asn1Set* attributes;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_attributes() const;

  constexpr void __set_attributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::Attributes* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  /// @brief Method .ctor addr 0xe6ff54 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  static inline ::Org::BouncyCastle::Asn1::Cms::Attributes* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method .ctor addr 0xe6ff7c size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method GetInstance addr 0xe6fff8 size 0xa8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::Attributes* GetInstance(::System::Object* obj);

  /// @brief Method GetAttributes addr 0xe700a0 size 0xf0 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cms::Attribute*, ::Array<::Org::BouncyCastle::Asn1::Cms::Attribute*>*> GetAttributes();

  /// @brief Method ToAsn1Object addr 0xe70190 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Attributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Attributes(Attributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Attributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Attributes(Attributes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Attributes();

public:
  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::Attributes, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Attributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Attributes*, "Org.BouncyCastle.Asn1.Cms", "Attributes");
