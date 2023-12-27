#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_token_def.hpp"
CORDL_MODULE_EXPORT(Datatype_language)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_language;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_language);
// Type: System.Xml.Schema::Datatype_language
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11654))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11656))
// CS Name: ::System.Xml.Schema::Datatype_language*
class CORDL_TYPE Datatype_language : public ::System::Xml::Schema::Datatype_token {
public:
  // Declarations
  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  /// @brief Method get_TypeCode addr 0x28bb690 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  static inline ::System::Xml::Schema::Datatype_language* New_ctor();

  /// @brief Method .ctor addr 0x28bb698 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_language", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_language(Datatype_language&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_language", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_language(Datatype_language const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_language();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_language, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_language);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_language*, "System.Xml.Schema", "Datatype_language");
