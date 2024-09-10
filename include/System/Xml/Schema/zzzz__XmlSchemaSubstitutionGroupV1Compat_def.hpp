#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSubstitutionGroupV1Compat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSubstitutionGroupV1Compat)
namespace System::Xml::Schema {
class XmlSchemaChoice;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroupV1Compat;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat);
// Type: System.Xml.Schema::XmlSchemaSubstitutionGroupV1Compat
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaSubstitutionGroupV1Compat*
class CORDL_TYPE XmlSchemaSubstitutionGroupV1Compat : public ::System::Xml::Schema::XmlSchemaSubstitutionGroup {
public:
// Declarations
 __declspec(property(get=get_Choice)) ::System::Xml::Schema::XmlSchemaChoice*  Choice;

/// @brief Field choice, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_choice, put=__cordl_internal_set_choice)) ::System::Xml::Schema::XmlSchemaChoice*  choice;

static inline ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* New_ctor() ;

constexpr ::System::Xml::Schema::XmlSchemaChoice*& __cordl_internal_get_choice() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaChoice*> const& __cordl_internal_get_choice() const;

constexpr void __cordl_internal_set_choice(::System::Xml::Schema::XmlSchemaChoice*  value) ;

/// @brief Method .ctor, addr 0x4237fd8, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Choice, addr 0x4237fd0, size 0x8, virtual false, abstract: false, final false
inline ::System::Xml::Schema::XmlSchemaChoice* get_Choice() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSchemaSubstitutionGroupV1Compat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSubstitutionGroupV1Compat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaSubstitutionGroupV1Compat(XmlSchemaSubstitutionGroupV1Compat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSubstitutionGroupV1Compat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaSubstitutionGroupV1Compat(XmlSchemaSubstitutionGroupV1Compat const& ) = delete;

/// @brief Field choice, offset: 0x48, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaChoice*  ___choice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat, ___choice) == 0x48, "Offset mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*, "System.Xml.Schema", "XmlSchemaSubstitutionGroupV1Compat");
