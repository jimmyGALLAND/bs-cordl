#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicTableCell)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
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
class BeatmapCharacteristicTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicTableCell);
// Type: ::BeatmapCharacteristicTableCell
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCharacteristicTableCell*
class CORDL_TYPE BeatmapCharacteristicTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _bgHighlightColor, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__bgHighlightColor, put = __cordl_internal_set__bgHighlightColor))::UnityEngine::Color _bgHighlightColor;

  /// @brief Field _bgImage, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage))::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _bgNormalColor, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__bgNormalColor, put = __cordl_internal_set__bgNormalColor))::UnityEngine::Color _bgNormalColor;

  /// @brief Field _iconImage, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__iconImage, put = __cordl_internal_set__iconImage))::UnityW<::UnityEngine::UI::Image> _iconImage;

  /// @brief Field _nameText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__nameText, put = __cordl_internal_set__nameText))::UnityW<::TMPro::TextMeshProUGUI> _nameText;

  /// @brief Field _selectionImage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__selectionImage, put = __cordl_internal_set__selectionImage))::UnityW<::UnityEngine::UI::Image> _selectionImage;

  /// @brief Method HighlightDidChange, addr 0x2636848, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  static inline ::GlobalNamespace::BeatmapCharacteristicTableCell* New_ctor();

  /// @brief Method RefreshVisuals, addr 0x26367cc, size 0x7c, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method SelectionDidChange, addr 0x26367c8, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method SetData, addr 0x2636768, size 0x60, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__bgHighlightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__bgHighlightColor();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__bgNormalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__bgNormalColor();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__iconImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__iconImage();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__nameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__nameText();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__selectionImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__selectionImage();

  constexpr void __cordl_internal_set__bgHighlightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__bgNormalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__iconImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__selectionImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x263684c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicTableCell(BeatmapCharacteristicTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicTableCell(BeatmapCharacteristicTableCell const&) = delete;

  /// @brief Field _nameText, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____nameText;

  /// @brief Field _iconImage, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____iconImage;

  /// @brief Field _bgImage, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _selectionImage, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____selectionImage;

  /// @brief Field _bgNormalColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____bgNormalColor;

  /// @brief Field _bgHighlightColor, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Color ____bgHighlightColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicTableCell, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicTableCell, ____nameText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicTableCell, ____iconImage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicTableCell, ____bgImage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicTableCell, ____selectionImage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicTableCell, ____bgNormalColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicTableCell, ____bgHighlightColor) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicTableCell*, "", "BeatmapCharacteristicTableCell");
