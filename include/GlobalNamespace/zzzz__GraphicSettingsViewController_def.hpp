#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphicSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GraphicSettingsViewController)
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphicSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GraphicSettingsViewController);
// Type: ::GraphicSettingsViewController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GraphicSettingsViewController*
class CORDL_TYPE GraphicSettingsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief Field _settingsManager, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

static inline ::GlobalNamespace::GraphicSettingsViewController* New_ctor() ;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

/// @brief Method .ctor, addr 0x3a6ecec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicSettingsViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicSettingsViewController(GraphicSettingsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicSettingsViewController(GraphicSettingsViewController const& ) = delete;

/// @brief Field _settingsManager, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphicSettingsViewController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsViewController, ____settingsManager) == 0x78, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphicSettingsViewController*, "", "GraphicSettingsViewController");
