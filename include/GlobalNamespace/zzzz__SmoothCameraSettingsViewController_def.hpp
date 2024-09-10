#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothCameraSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmoothCameraSettingsViewController)
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCameraSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmoothCameraSettingsViewController);
// Type: ::SmoothCameraSettingsViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SmoothCameraSettingsViewController*
class CORDL_TYPE SmoothCameraSettingsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief Field _enabledToggle, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__enabledToggle, put=__cordl_internal_set__enabledToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _enabledToggle;

/// @brief Field _fovSettingsList, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__fovSettingsList, put=__cordl_internal_set__fovSettingsList)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>  _fovSettingsList;

/// @brief Field _settingsManager, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

/// @brief Method DidActivate, addr 0x3a70bc8, size 0x150, virtual true, abstract: false, final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate, addr 0x3a70d18, size 0xa8, virtual true, abstract: false, final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method HandleEnabledChanged, addr 0x3a70dc0, size 0x20, virtual false, abstract: false, final false
inline void HandleEnabledChanged(bool  newValue) ;

/// @brief Method HandleFovChanged, addr 0x3a70de0, size 0x1c, virtual false, abstract: false, final false
inline void HandleFovChanged(::GlobalNamespace::FormattedFloatListSettingsController*  controller, float_t  newValue) ;

static inline ::GlobalNamespace::SmoothCameraSettingsViewController* New_ctor() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__enabledToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__enabledToggle() ;

constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__fovSettingsList() const;

constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__fovSettingsList() ;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

constexpr void __cordl_internal_set__enabledToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__fovSettingsList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>  value) ;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

/// @brief Method .ctor, addr 0x3a70dfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmoothCameraSettingsViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmoothCameraSettingsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmoothCameraSettingsViewController(SmoothCameraSettingsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCameraSettingsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmoothCameraSettingsViewController(SmoothCameraSettingsViewController const& ) = delete;

/// @brief Field _enabledToggle, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____enabledToggle;

/// @brief Field _fovSettingsList, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>  ____fovSettingsList;

/// @brief Field _settingsManager, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothCameraSettingsViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraSettingsViewController, ____enabledToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraSettingsViewController, ____fovSettingsList) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmoothCameraSettingsViewController, ____settingsManager) == 0x88, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothCameraSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCameraSettingsViewController*, "", "SmoothCameraSettingsViewController");
