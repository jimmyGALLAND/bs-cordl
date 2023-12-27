#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(LicensesDisplayViewController)
namespace UnityEngine {
class TextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
// Forward declare root types
namespace GlobalNamespace {
class LicensesDisplayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LicensesDisplayViewController);
// Type: ::LicensesDisplayViewController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5688))
// CS Name: ::LicensesDisplayViewController*
class CORDL_TYPE LicensesDisplayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _textPageScrollView, offset 0x70, size 0x8
  __declspec(property(get = __get__textPageScrollView, put = __set__textPageScrollView))::HMUI::TextPageScrollView* _textPageScrollView;

  /// @brief Field _textAsset, offset 0x78, size 0x8
  __declspec(property(get = __get__textAsset, put = __set__textAsset))::UnityEngine::TextAsset* _textAsset;

  constexpr ::HMUI::TextPageScrollView*& __get__textPageScrollView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> const& __get__textPageScrollView() const;

  constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView* value);

  constexpr ::UnityEngine::TextAsset*& __get__textAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get__textAsset() const;

  constexpr void __set__textAsset(::UnityEngine::TextAsset* value);

  /// @brief Method DidActivate addr 0x22c800c size 0x44 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::LicensesDisplayViewController* New_ctor();

  /// @brief Method .ctor addr 0x22c8050 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LicensesDisplayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicensesDisplayViewController(LicensesDisplayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicensesDisplayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicensesDisplayViewController(LicensesDisplayViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicensesDisplayViewController();

public:
  /// @brief Field _textPageScrollView, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TextPageScrollView* ____textPageScrollView;

  /// @brief Field _textAsset, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ____textAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LicensesDisplayViewController, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LicensesDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LicensesDisplayViewController*, "", "LicensesDisplayViewController");
