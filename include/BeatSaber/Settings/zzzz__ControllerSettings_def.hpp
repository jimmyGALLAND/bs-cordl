#pragma once
// IWYU pragma private; include "BeatSaber/Settings/ControllerSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControllerSettings)
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct ControllerSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::ControllerSettings);
// Type: BeatSaber.Settings::ControllerSettings
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 41, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::BeatSaber.Settings::ControllerSettings
struct CORDL_TYPE ControllerSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ControllerSettings() ;

// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "hapticFeedback", ty: "bool", modifiers: "", def_value: None }]
constexpr ControllerSettings(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  rotation, bool  hapticFeedback) noexcept;

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  position;

/// @brief Field rotation, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  rotation;

/// @brief Field hapticFeedback, offset: 0x18, size: 0x1, def value: None
 bool  hapticFeedback;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::ControllerSettings, 0x1c>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::ControllerSettings, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::ControllerSettings, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::ControllerSettings, hapticFeedback) == 0x18, "Offset mismatch!");

} // namespace end def BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::ControllerSettings, "BeatSaber.Settings", "ControllerSettings");
