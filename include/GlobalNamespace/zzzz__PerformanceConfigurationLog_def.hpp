#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationLog.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PerformanceConfigurationLog)
namespace BeatSaber::Settings {
struct Settings;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
class PerformanceConfigurationStats;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceConfigurationLog;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceConfigurationLog);
// Type: ::PerformanceConfigurationLog
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceConfigurationLog*
class CORDL_TYPE PerformanceConfigurationLog : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x3a95a0c, size 0x238, virtual false, abstract: false, final false
static inline ::StringW Create(ByRef<::BeatSaber::Settings::Settings>  settings, ::GlobalNamespace::PlayerSpecificSettings*  playerSettings, ::GlobalNamespace::GameplayModifierMask  modifiers, ::GlobalNamespace::PerformanceConfigurationStats*  stats, ::StringW  warning) ;

/// @brief Method LogApplicationInfo, addr 0x3a960d4, size 0x4e0, virtual false, abstract: false, final false
static inline void LogApplicationInfo(::System::Text::StringBuilder*  sb) ;

/// @brief Method LogApplicationState, addr 0x3a965b4, size 0x208, virtual false, abstract: false, final false
static inline void LogApplicationState(::System::Text::StringBuilder*  sb) ;

/// @brief Method LogDynamicStates, addr 0x3a98564, size 0x260, virtual false, abstract: false, final false
static inline void LogDynamicStates(::System::Text::StringBuilder*  sb, ::GlobalNamespace::PerformanceConfigurationStats*  stats) ;

/// @brief Method LogEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogEntry(::System::Text::StringBuilder*  sb, ::StringW  category, ::StringW  name, T  value) ;

/// @brief Method LogLevelSettings, addr 0x3a984d4, size 0x90, virtual false, abstract: false, final false
static inline void LogLevelSettings(::System::Text::StringBuilder*  sb, ::GlobalNamespace::GameplayModifierMask  modifiers) ;

/// @brief Method LogOculusXrInfo, addr 0x3a974c0, size 0x13c, virtual false, abstract: false, final false
static inline void LogOculusXrInfo(::System::Text::StringBuilder*  sb) ;

/// @brief Method LogOpenXrInfo, addr 0x3a975fc, size 0x4, virtual false, abstract: false, final false
static inline void LogOpenXrInfo(::System::Text::StringBuilder*  sb) ;

/// @brief Method LogOvrInfo, addr 0x3a96ac0, size 0xa00, virtual false, abstract: false, final false
static inline void LogOvrInfo(::System::Text::StringBuilder*  sb) ;

/// @brief Method LogPlayerSettings, addr 0x3a98098, size 0x43c, virtual false, abstract: false, final false
static inline void LogPlayerSettings(::System::Text::StringBuilder*  sb, ::GlobalNamespace::PlayerSpecificSettings*  playerSettings) ;

/// @brief Method LogSettings, addr 0x3a97600, size 0xa98, virtual false, abstract: false, final false
static inline void LogSettings(::System::Text::StringBuilder*  sb, ByRef<::BeatSaber::Settings::Settings>  settings) ;

/// @brief Method LogSystemInfo, addr 0x3a95c44, size 0x490, virtual false, abstract: false, final false
static inline void LogSystemInfo(::System::Text::StringBuilder*  sb) ;

/// @brief Method LogXrInfo, addr 0x3a967bc, size 0x304, virtual false, abstract: false, final false
static inline void LogXrInfo(::System::Text::StringBuilder*  sb) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerformanceConfigurationLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationLog", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceConfigurationLog(PerformanceConfigurationLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationLog", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceConfigurationLog(PerformanceConfigurationLog const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationLog, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceConfigurationLog);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationLog*, "", "PerformanceConfigurationLog");
