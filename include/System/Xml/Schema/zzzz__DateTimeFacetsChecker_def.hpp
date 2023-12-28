#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
CORDL_MODULE_EXPORT(DateTimeFacetsChecker)
namespace System {
class Object;
}
namespace System {
class Exception;
}
namespace System {
struct DateTime;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Xml::Schema {
class DateTimeFacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DateTimeFacetsChecker);
// Type: System.Xml.Schema::DateTimeFacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11690))
// CS Name: ::System.Xml.Schema::DateTimeFacetsChecker*
class CORDL_TYPE DateTimeFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Method CheckValueFacets addr 0x28c2210 size 0x64 virtual true final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets addr 0x28c2274 size 0x3a4 virtual true final false
  inline ::System::Exception* CheckValueFacets(::System::DateTime value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration addr 0x28c2750 size 0x5c virtual true final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration addr 0x28c2618 size 0x138 virtual false final false
  inline bool MatchEnumeration(::System::DateTime value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  static inline ::System::Xml::Schema::DateTimeFacetsChecker* New_ctor();

  /// @brief Method .ctor addr 0x28c27ac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeFacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeFacetsChecker(DateTimeFacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeFacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeFacetsChecker(DateTimeFacetsChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeFacetsChecker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DateTimeFacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DateTimeFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DateTimeFacetsChecker*, "System.Xml.Schema", "DateTimeFacetsChecker");
