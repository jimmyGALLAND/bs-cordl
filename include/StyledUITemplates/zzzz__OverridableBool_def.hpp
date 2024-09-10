#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableBool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "StyledUITemplates/zzzz__OverridableData_1_def.hpp"
CORDL_MODULE_EXPORT(OverridableBool)
// Forward declare root types
namespace StyledUITemplates {
class OverridableBool;
}
// Write type traits
MARK_REF_PTR_T(::StyledUITemplates::OverridableBool);
// Type: StyledUITemplates::OverridableBool
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, packing: None, specified_packing: None }
namespace StyledUITemplates {
// Is value type: false
// CS Name: ::StyledUITemplates::OverridableBool*
class CORDL_TYPE OverridableBool : public ::StyledUITemplates::OverridableData_1<bool> {
public:
// Declarations
static inline ::StyledUITemplates::OverridableBool* New_ctor() ;

/// @brief Method .ctor, addr 0x3fec7e0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverridableBool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverridableBool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OverridableBool(OverridableBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverridableBool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverridableBool(OverridableBool const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::StyledUITemplates::OverridableBool, 0x18>, "Size mismatch!");

} // namespace end def StyledUITemplates
NEED_NO_BOX(::StyledUITemplates::OverridableBool);
DEFINE_IL2CPP_ARG_TYPE(::StyledUITemplates::OverridableBool*, "StyledUITemplates", "OverridableBool");
