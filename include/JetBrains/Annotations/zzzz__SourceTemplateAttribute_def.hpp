#pragma once
// IWYU pragma private; include "JetBrains/Annotations/SourceTemplateAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SourceTemplateAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class SourceTemplateAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::SourceTemplateAttribute);
// Type: JetBrains.Annotations::SourceTemplateAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::SourceTemplateAttribute*
class CORDL_TYPE SourceTemplateAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::JetBrains::Annotations::SourceTemplateAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x4a5cd20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SourceTemplateAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SourceTemplateAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SourceTemplateAttribute(SourceTemplateAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SourceTemplateAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SourceTemplateAttribute(SourceTemplateAttribute const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::SourceTemplateAttribute, 0x10>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::SourceTemplateAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::SourceTemplateAttribute*, "JetBrains.Annotations", "SourceTemplateAttribute");
