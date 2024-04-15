#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsViewController)
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace HMUI {
class TextPageScrollView;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsViewController);
// Type: ::RecordingToolSettingsViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolSettingsViewController*
class CORDL_TYPE RecordingToolSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _continueButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton))::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _recordingToolManager, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolManager, put = __cordl_internal_set__recordingToolManager))::GlobalNamespace::RecordingToolManager* _recordingToolManager;

  /// @brief Field _textPageScrollView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__textPageScrollView, put = __cordl_internal_set__textPageScrollView))::UnityW<::HMUI::TextPageScrollView> _textPageScrollView;

  /// @brief Field didFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action* didFinishEvent;

  /// @brief Method DidActivate, addr 0x2565240, size 0x120, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::RecordingToolSettingsViewController* New_ctor();

  /// @brief Method <DidActivate>b__6_0, addr 0x2565368, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__6_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::GlobalNamespace::RecordingToolManager*& __cordl_internal_get__recordingToolManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> const& __cordl_internal_get__recordingToolManager() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView> const& __cordl_internal_get__textPageScrollView() const;

  constexpr ::UnityW<::HMUI::TextPageScrollView>& __cordl_internal_get__textPageScrollView();

  constexpr ::System::Action*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value);

  constexpr void __cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2565360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x2565108, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x25651a4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettingsViewController(RecordingToolSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettingsViewController(RecordingToolSettingsViewController const&) = delete;

  /// @brief Field _continueButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _textPageScrollView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TextPageScrollView> ____textPageScrollView;

  /// @brief Field _recordingToolManager, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* ____recordingToolManager;

  /// @brief Field didFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsViewController, ____continueButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsViewController, ____textPageScrollView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsViewController, ____recordingToolManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsViewController, ___didFinishEvent) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsViewController*, "", "RecordingToolSettingsViewController");
