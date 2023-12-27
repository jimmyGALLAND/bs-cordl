#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_string_def.hpp"
CORDL_MODULE_EXPORT(Datatype_normalizedString)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_normalizedString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_normalizedString);
// Type: System.Xml.Schema::Datatype_normalizedString
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11627))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11652))
// CS Name: ::System.Xml.Schema::Datatype_normalizedString*
class CORDL_TYPE Datatype_normalizedString : public ::System::Xml::Schema::Datatype_string {
public:
  // Declarations
  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  /// @brief Method get_TypeCode addr 0x28bb650 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_BuiltInWhitespaceFacet addr 0x28bb658 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  static inline ::System::Xml::Schema::Datatype_normalizedString* New_ctor();

  /// @brief Method .ctor addr 0x28bb660 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_normalizedString(Datatype_normalizedString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_normalizedString(Datatype_normalizedString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_normalizedString();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_normalizedString, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_normalizedString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_normalizedString*, "System.Xml.Schema", "Datatype_normalizedString");
