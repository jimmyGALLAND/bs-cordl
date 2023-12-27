#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextPageScrollView)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace HMUI {
class TextPageScrollView;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TextPageScrollView);
// Type: HMUI::TextPageScrollView
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13648))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13670))
// CS Name: ::HMUI::TextPageScrollView*
class CORDL_TYPE TextPageScrollView : public ::HMUI::ScrollView {
public:
  // Declarations
  /// @brief Field _text, offset 0xa0, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  /// @brief Method SetText addr 0x214aa2c size 0x68 virtual false final false
  inline void SetText(::StringW text);

  static inline ::HMUI::TextPageScrollView* New_ctor();

  /// @brief Method .ctor addr 0x214aa94 size 0x30 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextPageScrollView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextPageScrollView(TextPageScrollView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextPageScrollView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextPageScrollView(TextPageScrollView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextPageScrollView();

public:
  /// @brief Field _text, offset: 0xa0, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TextPageScrollView, 0xa8>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::TextPageScrollView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextPageScrollView*, "HMUI", "TextPageScrollView");
