#pragma once
// IWYU pragma private; include "HMUI/IconAndTextSegmentedControlCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IconAndTextSegmentedControlCell)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class IconAndTextSegmentedControlCell;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IconAndTextSegmentedControlCell);
// Type: HMUI::IconAndTextSegmentedControlCell
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::IconAndTextSegmentedControlCell*
class CORDL_TYPE IconAndTextSegmentedControlCell : public ::HMUI::SegmentedControlCell {
public:
// Declarations
/// @brief Field _icon, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__icon, put=__cordl_internal_set__icon)) ::UnityW<::UnityEngine::UI::Image>  _icon;

/// @brief Field _text, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI>  _text;

 __declspec(property(get=get_sprite, put=set_sprite)) ::UnityW<::UnityEngine::Sprite>  sprite;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

static inline ::HMUI::IconAndTextSegmentedControlCell* New_ctor() ;

/// @brief Method SetTextActive, addr 0x3ff7e4c, size 0x30, virtual false, abstract: false, final false
inline void SetTextActive(bool  active) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x3ff80d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_sprite, addr 0x3ff8090, size 0x1c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_sprite() ;

/// @brief Method get_text, addr 0x3ff80ac, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method set_sprite, addr 0x3ff7ae4, size 0x1c, virtual false, abstract: false, final false
inline void set_sprite(::UnityEngine::Sprite*  value) ;

/// @brief Method set_text, addr 0x3ff7b00, size 0x24, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IconAndTextSegmentedControlCell() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IconAndTextSegmentedControlCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IconAndTextSegmentedControlCell(IconAndTextSegmentedControlCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IconAndTextSegmentedControlCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IconAndTextSegmentedControlCell(IconAndTextSegmentedControlCell const& ) = delete;

/// @brief Field _icon, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____icon;

/// @brief Field _text, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::IconAndTextSegmentedControlCell, 0x70>, "Size mismatch!");

static_assert(offsetof(::HMUI::IconAndTextSegmentedControlCell, ____icon) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconAndTextSegmentedControlCell, ____text) == 0x68, "Offset mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::IconAndTextSegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconAndTextSegmentedControlCell*, "HMUI", "IconAndTextSegmentedControlCell");
