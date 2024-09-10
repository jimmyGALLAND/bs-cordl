#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcViewComponentViewAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspMvcViewComponentViewAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcViewComponentViewAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcViewComponentViewAttribute);
// Type: JetBrains.Annotations::AspMvcViewComponentViewAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcViewComponentViewAttribute*
class CORDL_TYPE AspMvcViewComponentViewAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::JetBrains::Annotations::AspMvcViewComponentViewAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x4a5cfb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AspMvcViewComponentViewAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentViewAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AspMvcViewComponentViewAttribute(AspMvcViewComponentViewAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcViewComponentViewAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspMvcViewComponentViewAttribute(AspMvcViewComponentViewAttribute const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcViewComponentViewAttribute, 0x10>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcViewComponentViewAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcViewComponentViewAttribute*, "JetBrains.Annotations", "AspMvcViewComponentViewAttribute");
