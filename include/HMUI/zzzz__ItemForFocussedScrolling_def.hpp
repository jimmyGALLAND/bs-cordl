#pragma once
// IWYU pragma private; include "HMUI/ItemForFocussedScrolling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ItemForFocussedScrolling)
// Forward declare root types
namespace HMUI {
class ItemForFocussedScrolling;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ItemForFocussedScrolling);
// Type: HMUI::ItemForFocussedScrolling
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ItemForFocussedScrolling*
class CORDL_TYPE ItemForFocussedScrolling : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::HMUI::ItemForFocussedScrolling* New_ctor() ;

/// @brief Method .ctor, addr 0x397696c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ItemForFocussedScrolling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ItemForFocussedScrolling", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ItemForFocussedScrolling(ItemForFocussedScrolling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ItemForFocussedScrolling", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ItemForFocussedScrolling(ItemForFocussedScrolling const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ItemForFocussedScrolling, 0x20>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ItemForFocussedScrolling);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ItemForFocussedScrolling*, "HMUI", "ItemForFocussedScrolling");
