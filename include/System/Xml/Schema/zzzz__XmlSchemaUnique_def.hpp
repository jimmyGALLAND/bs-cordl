#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaUnique.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaUnique)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaUnique;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaUnique);
// Type: System.Xml.Schema::XmlSchemaUnique
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaUnique*
class CORDL_TYPE XmlSchemaUnique : public ::System::Xml::Schema::XmlSchemaIdentityConstraint {
public:
// Declarations
static inline ::System::Xml::Schema::XmlSchemaUnique* New_ctor() ;

/// @brief Method .ctor, addr 0x422d05c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaUnique() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaUnique", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaUnique(XmlSchemaUnique && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaUnique", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaUnique(XmlSchemaUnique const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaUnique, 0x78>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaUnique);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaUnique*, "System.Xml.Schema", "XmlSchemaUnique");
