#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SettingsManager)
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
struct HardwareCategory;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SettingsManager);
// Type: ::SettingsManager
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsManager*
class CORDL_TYPE SettingsManager : public ::System::Object {
public:
// Declarations
/// @brief Field settings, offset 0x10, size 0xe8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::BeatSaber::Settings::Settings  settings;

/// @brief Field skipValidation, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_skipValidation, put=setStaticF_skipValidation)) bool  skipValidation;

/// @brief Method AdjustPlatformSettings, addr 0x26b075c, size 0x144, virtual false, abstract: false, final false
static inline void AdjustPlatformSettings(ByRef<::BeatSaber::Settings::Settings>  settings, ::GlobalNamespace::HardwareCategory  platform) ;

/// @brief Method CreateInstanceWithCurrentPlatformPreset, addr 0x26b3350, size 0x8c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SettingsManager* CreateInstanceWithCurrentPlatformPreset() ;

/// @brief Method CreateUninitialized, addr 0x26b32fc, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SettingsManager* CreateUninitialized() ;

/// @brief Method GetCurrentPlatformPreset, addr 0x26b33dc, size 0x10, virtual false, abstract: false, final false
static inline ByRef<::BeatSaber::Settings::Settings> GetCurrentPlatformPreset() ;

/// @brief Method GetPlatformPreset, addr 0x26b04f0, size 0x194, virtual false, abstract: false, final false
static inline ByRef<::BeatSaber::Settings::Settings> GetPlatformPreset(::GlobalNamespace::HardwareCategory  platform) ;

static inline ::GlobalNamespace::SettingsManager* New_ctor() ;

constexpr ::BeatSaber::Settings::Settings const& __cordl_internal_get_settings() const;

constexpr ::BeatSaber::Settings::Settings& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_settings(::BeatSaber::Settings::Settings  value) ;

/// @brief Method .ctor, addr 0x26b32f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_skipValidation() ;

static inline void setStaticF_skipValidation(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsManager(SettingsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsManager(SettingsManager const& ) = delete;

/// @brief Field settings, offset: 0x10, size: 0xe8, def value: None
 ::BeatSaber::Settings::Settings  ___settings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsManager, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsManager, ___settings) == 0x10, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SettingsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsManager*, "", "SettingsManager");
