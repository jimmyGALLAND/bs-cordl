#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSimpleContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContentModel_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleContent)
namespace System::Xml::Schema {
class XmlSchemaContent;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleContent);
// Type: System.Xml.Schema::XmlSchemaSimpleContent
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleContent*
class CORDL_TYPE XmlSchemaSimpleContent : public ::System::Xml::Schema::XmlSchemaContentModel {
public:
// Declarations
 __declspec(property(get=get_Content, put=set_Content)) ::System::Xml::Schema::XmlSchemaContent*  Content;

/// @brief Field content, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_content, put=__cordl_internal_set_content)) ::System::Xml::Schema::XmlSchemaContent*  content;

static inline ::System::Xml::Schema::XmlSchemaSimpleContent* New_ctor() ;

constexpr ::System::Xml::Schema::XmlSchemaContent*& __cordl_internal_get_content() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaContent*> const& __cordl_internal_get_content() const;

constexpr void __cordl_internal_set_content(::System::Xml::Schema::XmlSchemaContent*  value) ;

/// @brief Method .ctor, addr 0x42374ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Content, addr 0x42374dc, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaContent* get_Content() ;

/// @brief Method set_Content, addr 0x42374e4, size 0x8, virtual true, abstract: false, final false
inline void set_Content(::System::Xml::Schema::XmlSchemaContent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaSimpleContent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaSimpleContent(XmlSchemaSimpleContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaSimpleContent(XmlSchemaSimpleContent const& ) = delete;

/// @brief Field content, offset: 0x50, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaContent*  ___content;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleContent, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContent, ___content) == 0x50, "Offset mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleContent*, "System.Xml.Schema", "XmlSchemaSimpleContent");
