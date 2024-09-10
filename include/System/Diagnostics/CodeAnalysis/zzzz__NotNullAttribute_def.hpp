#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/NotNullAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NotNullAttribute)
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class NotNullAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::CodeAnalysis::NotNullAttribute);
// Type: System.Diagnostics.CodeAnalysis::NotNullAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// CS Name: ::System.Diagnostics.CodeAnalysis::NotNullAttribute*
class CORDL_TYPE NotNullAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::System::Diagnostics::CodeAnalysis::NotNullAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x3de66c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotNullAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotNullAttribute(NotNullAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotNullAttribute(NotNullAttribute const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::CodeAnalysis::NotNullAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Diagnostics::CodeAnalysis
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::NotNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::NotNullAttribute*, "System.Diagnostics.CodeAnalysis", "NotNullAttribute");
