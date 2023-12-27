#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlEnumAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlEnumAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlEnumAttribute);
// Type: System.Xml.Serialization::XmlEnumAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11588))
// CS Name: ::System.Xml.Serialization::XmlEnumAttribute*
class CORDL_TYPE XmlEnumAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  static inline ::System::Xml::Serialization::XmlEnumAttribute* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x28abf2c size 0x28 virtual false final false
  inline void _ctor(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "XmlEnumAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlEnumAttribute(XmlEnumAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlEnumAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlEnumAttribute(XmlEnumAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlEnumAttribute();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlEnumAttribute, 0x18>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlEnumAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlEnumAttribute*, "System.Xml.Serialization", "XmlEnumAttribute");
