#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleType)
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeContent;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleType);
// Type: System.Xml.Schema::XmlSchemaSimpleType
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11742))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11737))
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleType*
class CORDL_TYPE XmlSchemaSimpleType : public ::System::Xml::Schema::XmlSchemaType {
public:
  // Declarations
  /// @brief Field content, offset 0x40, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::System::Xml::Schema::XmlSchemaSimpleTypeContent* content;

  __declspec(property(get = get_Content, put = set_Content))::System::Xml::Schema::XmlSchemaSimpleTypeContent* Content;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeContent*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleTypeContent*> const& __get_content() const;

  constexpr void __set_content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* value);

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* New_ctor();

  /// @brief Method .ctor addr 0x28c90e0 size 0x4 virtual false final false
  inline void _ctor();

  /// @brief Method get_Content addr 0x28c90e4 size 0x8 virtual false final false
  inline ::System::Xml::Schema::XmlSchemaSimpleTypeContent* get_Content();

  /// @brief Method set_Content addr 0x28c90ec size 0x8 virtual false final false
  inline void set_Content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* value);

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleType(XmlSchemaSimpleType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleType(XmlSchemaSimpleType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleType();

public:
  /// @brief Field content, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleTypeContent* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleType, 0x48>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleType*, "System.Xml.Schema", "XmlSchemaSimpleType");
