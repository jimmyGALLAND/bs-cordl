#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelPackHeaderTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelPackHeaderTableCell)
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelPackHeaderTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelPackHeaderTableCell);
// Type: ::LevelPackHeaderTableCell
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelPackHeaderTableCell*
class CORDL_TYPE LevelPackHeaderTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief Field _backgroundImage, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__backgroundImage, put=__cordl_internal_set__backgroundImage)) ::UnityW<::UnityEngine::UI::Image>  _backgroundImage;

/// @brief Field _highlightBackgroundColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__highlightBackgroundColor, put=__cordl_internal_set__highlightBackgroundColor)) ::UnityEngine::Color  _highlightBackgroundColor;

/// @brief Field _nameText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameText, put=__cordl_internal_set__nameText)) ::UnityW<::TMPro::TextMeshProUGUI>  _nameText;

/// @brief Field _selectedAndHighlightedBackgroundColor, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectedAndHighlightedBackgroundColor, put=__cordl_internal_set__selectedAndHighlightedBackgroundColor)) ::UnityEngine::Color  _selectedAndHighlightedBackgroundColor;

/// @brief Field _selectedBackgroundColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectedBackgroundColor, put=__cordl_internal_set__selectedBackgroundColor)) ::UnityEngine::Color  _selectedBackgroundColor;

/// @brief Method HighlightDidChange, addr 0x3b68634, size 0x4, virtual true, abstract: false, final false
inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

static inline ::GlobalNamespace::LevelPackHeaderTableCell* New_ctor() ;

/// @brief Method RefreshVisuals, addr 0x3b68598, size 0x9c, virtual false, abstract: false, final false
inline void RefreshVisuals() ;

/// @brief Method SelectionDidChange, addr 0x3b68594, size 0x4, virtual true, abstract: false, final false
inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method SetData, addr 0x3b68570, size 0x24, virtual false, abstract: false, final false
inline void SetData(::StringW  headerText) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__backgroundImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__backgroundImage() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightBackgroundColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__highlightBackgroundColor() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedAndHighlightedBackgroundColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectedAndHighlightedBackgroundColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedBackgroundColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectedBackgroundColor() ;

constexpr void __cordl_internal_set__backgroundImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__highlightBackgroundColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__selectedBackgroundColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x3b68638, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LevelPackHeaderTableCell() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LevelPackHeaderTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelPackHeaderTableCell(LevelPackHeaderTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelPackHeaderTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelPackHeaderTableCell(LevelPackHeaderTableCell const& ) = delete;

/// @brief Field _nameText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____nameText;

/// @brief Field _backgroundImage, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____backgroundImage;

/// @brief Field _highlightBackgroundColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ____highlightBackgroundColor;

/// @brief Field _selectedBackgroundColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectedBackgroundColor;

/// @brief Field _selectedAndHighlightedBackgroundColor, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectedAndHighlightedBackgroundColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackHeaderTableCell, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackHeaderTableCell, ____nameText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackHeaderTableCell, ____backgroundImage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackHeaderTableCell, ____highlightBackgroundColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackHeaderTableCell, ____selectedBackgroundColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelPackHeaderTableCell, ____selectedAndHighlightedBackgroundColor) == 0x98, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelPackHeaderTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackHeaderTableCell*, "", "LevelPackHeaderTableCell");
