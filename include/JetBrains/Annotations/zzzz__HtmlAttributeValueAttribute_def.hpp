#pragma once
// IWYU pragma private; include "JetBrains/Annotations/HtmlAttributeValueAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HtmlAttributeValueAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class HtmlAttributeValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::HtmlAttributeValueAttribute);
// Type: JetBrains.Annotations::HtmlAttributeValueAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::HtmlAttributeValueAttribute*
class CORDL_TYPE HtmlAttributeValueAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

static inline ::JetBrains::Annotations::HtmlAttributeValueAttribute* New_ctor(::StringW  name) ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x4a5d008, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_Name, addr 0x4a5d030, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method set_Name, addr 0x4a5d038, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HtmlAttributeValueAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HtmlAttributeValueAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HtmlAttributeValueAttribute(HtmlAttributeValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HtmlAttributeValueAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HtmlAttributeValueAttribute(HtmlAttributeValueAttribute const& ) = delete;

/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::HtmlAttributeValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::HtmlAttributeValueAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::HtmlAttributeValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::HtmlAttributeValueAttribute*, "JetBrains.Annotations", "HtmlAttributeValueAttribute");
