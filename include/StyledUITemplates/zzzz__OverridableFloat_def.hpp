#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableFloat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "StyledUITemplates/zzzz__OverridableData_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OverridableFloat)
// Forward declare root types
namespace StyledUITemplates {
class OverridableFloat;
}
// Write type traits
MARK_REF_PTR_T(::StyledUITemplates::OverridableFloat);
// Type: StyledUITemplates::OverridableFloat
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace StyledUITemplates {
// Is value type: false
// CS Name: ::StyledUITemplates::OverridableFloat*
class CORDL_TYPE OverridableFloat : public ::StyledUITemplates::OverridableData_1<float_t> {
public:
// Declarations
static inline ::StyledUITemplates::OverridableFloat* New_ctor() ;

/// @brief Method .ctor, addr 0x3fec828, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverridableFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverridableFloat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OverridableFloat(OverridableFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverridableFloat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverridableFloat(OverridableFloat const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::StyledUITemplates::OverridableFloat, 0x18>, "Size mismatch!");

} // namespace end def StyledUITemplates
NEED_NO_BOX(::StyledUITemplates::OverridableFloat);
DEFINE_IL2CPP_ARG_TYPE(::StyledUITemplates::OverridableFloat*, "StyledUITemplates", "OverridableFloat");
