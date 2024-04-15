#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(ExplicitContentWarningViewController)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class ExplicitContentWarningViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExplicitContentWarningViewController);
// Type: ::ExplicitContentWarningViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ExplicitContentWarningViewController*
class CORDL_TYPE ExplicitContentWarningViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _continueButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton))::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _playerDataModel, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _toggleExplicit, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleExplicit, put = __cordl_internal_set__toggleExplicit))::UnityW<::UnityEngine::UI::Toggle> _toggleExplicit;

  /// @brief Field didFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action* didFinishEvent;

  /// @brief Method DidActivate, addr 0x2541c08, size 0xa8, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2541cb0, size 0x30, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::GlobalNamespace::ExplicitContentWarningViewController* New_ctor();

  /// @brief Method <DidActivate>b__6_0, addr 0x2541ce8, size 0xe4, virtual false, abstract: false, final false
  inline void _DidActivate_b__6_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggleExplicit() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggleExplicit();

  constexpr ::System::Action*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__toggleExplicit(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2541ce0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x2541ad0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x2541b6c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExplicitContentWarningViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExplicitContentWarningViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExplicitContentWarningViewController(ExplicitContentWarningViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExplicitContentWarningViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExplicitContentWarningViewController(ExplicitContentWarningViewController const&) = delete;

  /// @brief Field _toggleExplicit, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____toggleExplicit;

  /// @brief Field _continueButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _playerDataModel, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field didFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExplicitContentWarningViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____toggleExplicit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____continueButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ____playerDataModel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExplicitContentWarningViewController, ___didFinishEvent) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExplicitContentWarningViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExplicitContentWarningViewController*, "", "ExplicitContentWarningViewController");
