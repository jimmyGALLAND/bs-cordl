#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/HideInMenuAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(HideInMenuAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class HideInMenuAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::HideInMenuAttribute);
// Type: UnityEngine.Timeline::HideInMenuAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::HideInMenuAttribute*
class CORDL_TYPE HideInMenuAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::UnityEngine::Timeline::HideInMenuAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x4798a60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HideInMenuAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HideInMenuAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HideInMenuAttribute(HideInMenuAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HideInMenuAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HideInMenuAttribute(HideInMenuAttribute const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::HideInMenuAttribute, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::HideInMenuAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::HideInMenuAttribute*, "UnityEngine.Timeline", "HideInMenuAttribute");
