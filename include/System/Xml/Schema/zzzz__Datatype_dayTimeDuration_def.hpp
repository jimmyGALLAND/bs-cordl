#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_duration_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_dayTimeDuration)
namespace System {
class Object;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Exception;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dayTimeDuration;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_dayTimeDuration);
// Type: System.Xml.Schema::Datatype_dayTimeDuration
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11632))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11634))
// CS Name: ::System.Xml.Schema::Datatype_dayTimeDuration*
class CORDL_TYPE Datatype_dayTimeDuration : public ::System::Xml::Schema::Datatype_duration {
public:
  // Declarations
  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  /// @brief Method TryParseValue addr 0x28b94e4 size 0x1c4 virtual true final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  /// @brief Method get_TypeCode addr 0x28b96a8 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  static inline ::System::Xml::Schema::Datatype_dayTimeDuration* New_ctor();

  /// @brief Method .ctor addr 0x28b96b0 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_dayTimeDuration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_dayTimeDuration(Datatype_dayTimeDuration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_dayTimeDuration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_dayTimeDuration(Datatype_dayTimeDuration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_dayTimeDuration();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_dayTimeDuration, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_dayTimeDuration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_dayTimeDuration*, "System.Xml.Schema", "Datatype_dayTimeDuration");
