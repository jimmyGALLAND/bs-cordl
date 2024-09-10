#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/CustomSignalEventDrawer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(CustomSignalEventDrawer)
// Forward declare root types
namespace UnityEngine::Timeline {
class CustomSignalEventDrawer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::CustomSignalEventDrawer);
// Type: UnityEngine.Timeline::CustomSignalEventDrawer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::CustomSignalEventDrawer*
class CORDL_TYPE CustomSignalEventDrawer : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
static inline ::UnityEngine::Timeline::CustomSignalEventDrawer* New_ctor() ;

/// @brief Method .ctor, addr 0x4794004, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomSignalEventDrawer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomSignalEventDrawer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomSignalEventDrawer(CustomSignalEventDrawer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomSignalEventDrawer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomSignalEventDrawer(CustomSignalEventDrawer const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::CustomSignalEventDrawer, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::CustomSignalEventDrawer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::CustomSignalEventDrawer*, "UnityEngine.Timeline", "CustomSignalEventDrawer");
