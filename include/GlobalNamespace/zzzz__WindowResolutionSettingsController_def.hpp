#pragma once
// IWYU pragma private; include "GlobalNamespace/WindowResolutionSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowResolutionSettingsController)
namespace GlobalNamespace {
class SettingsManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Mathematics {
struct int2;
}
// Forward declare root types
namespace GlobalNamespace {
class WindowResolutionSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WindowResolutionSettingsController);
// Type: ::WindowResolutionSettingsController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WindowResolutionSettingsController*
class CORDL_TYPE WindowResolutionSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
// Declarations
/// @brief Field _settingsManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

/// @brief Field _windowResolutions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__windowResolutions, put=__cordl_internal_set__windowResolutions)) ::System::Collections::Generic::List_1<::Unity::Mathematics::int2>*  _windowResolutions;

/// @brief Method ApplyValue, addr 0x3b7e42c, size 0x68, virtual true, abstract: false, final false
inline void ApplyValue(int32_t  idx) ;

/// @brief Method GetInitValues, addr 0x3b7e0f0, size 0x33c, virtual true, abstract: false, final false
inline bool GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements) ;

static inline ::GlobalNamespace::WindowResolutionSettingsController* New_ctor() ;

/// @brief Method TextForValue, addr 0x3b7e494, size 0xcc, virtual true, abstract: false, final false
inline ::StringW TextForValue(int32_t  idx) ;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int2>*& __cordl_internal_get__windowResolutions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Mathematics::int2>*> const& __cordl_internal_get__windowResolutions() const;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

constexpr void __cordl_internal_set__windowResolutions(::System::Collections::Generic::List_1<::Unity::Mathematics::int2>*  value) ;

/// @brief Method .ctor, addr 0x3b7e560, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowResolutionSettingsController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowResolutionSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowResolutionSettingsController(WindowResolutionSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowResolutionSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowResolutionSettingsController(WindowResolutionSettingsController const& ) = delete;

/// @brief Field _settingsManager, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

/// @brief Field _windowResolutions, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::int2>*  ____windowResolutions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WindowResolutionSettingsController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WindowResolutionSettingsController, ____settingsManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WindowResolutionSettingsController, ____windowResolutions) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WindowResolutionSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WindowResolutionSettingsController*, "", "WindowResolutionSettingsController");
