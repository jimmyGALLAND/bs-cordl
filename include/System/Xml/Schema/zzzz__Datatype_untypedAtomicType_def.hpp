#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_untypedAtomicType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anyAtomicType_def.hpp"
CORDL_MODULE_EXPORT(Datatype_untypedAtomicType)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_untypedAtomicType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_untypedAtomicType);
// Type: System.Xml.Schema::Datatype_untypedAtomicType
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_untypedAtomicType*
class CORDL_TYPE Datatype_untypedAtomicType : public ::System::Xml::Schema::Datatype_anyAtomicType {
public:
// Declarations
 __declspec(property(get=get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace  BuiltInWhitespaceFacet;

 __declspec(property(get=get_TypeCode)) ::System::Xml::Schema::XmlTypeCode  TypeCode;

/// @brief Method CreateValueConverter, addr 0x43180fc, size 0x58, virtual true, abstract: false, final false
inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

static inline ::System::Xml::Schema::Datatype_untypedAtomicType* New_ctor() ;

/// @brief Method .ctor, addr 0x4313f54, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BuiltInWhitespaceFacet, addr 0x4318154, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method get_TypeCode, addr 0x431815c, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Datatype_untypedAtomicType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Datatype_untypedAtomicType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_untypedAtomicType(Datatype_untypedAtomicType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_untypedAtomicType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_untypedAtomicType(Datatype_untypedAtomicType const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_untypedAtomicType, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_untypedAtomicType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_untypedAtomicType*, "System.Xml.Schema", "Datatype_untypedAtomicType");
