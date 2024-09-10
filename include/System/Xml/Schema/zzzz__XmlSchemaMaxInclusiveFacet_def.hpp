#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMaxInclusiveFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaMaxInclusiveFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaMaxInclusiveFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaMaxInclusiveFacet);
// Type: System.Xml.Schema::XmlSchemaMaxInclusiveFacet
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaMaxInclusiveFacet*
class CORDL_TYPE XmlSchemaMaxInclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
// Declarations
static inline ::System::Xml::Schema::XmlSchemaMaxInclusiveFacet* New_ctor() ;

/// @brief Method .ctor, addr 0x422cd3c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaMaxInclusiveFacet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMaxInclusiveFacet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaMaxInclusiveFacet(XmlSchemaMaxInclusiveFacet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMaxInclusiveFacet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaMaxInclusiveFacet(XmlSchemaMaxInclusiveFacet const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaMaxInclusiveFacet, 0x60>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaMaxInclusiveFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaMaxInclusiveFacet*, "System.Xml.Schema", "XmlSchemaMaxInclusiveFacet");
