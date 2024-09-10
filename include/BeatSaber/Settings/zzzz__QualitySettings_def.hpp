#pragma once
// IWYU pragma private; include "BeatSaber/Settings/QualitySettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettings)
namespace BeatSaber::Settings {
struct __QualitySettings__BloomQuality;
}
namespace BeatSaber::Settings {
struct __QualitySettings__MainEffectOption;
}
namespace BeatSaber::Settings {
struct __QualitySettings__MirrorQuality;
}
namespace BeatSaber::Settings {
struct __QualitySettings__ObstacleQuality;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct __QualitySettings__BloomQuality;
}
namespace BeatSaber::Settings {
struct __QualitySettings__MainEffectOption;
}
namespace BeatSaber::Settings {
struct __QualitySettings__MirrorQuality;
}
namespace BeatSaber::Settings {
struct __QualitySettings__ObstacleQuality;
}
namespace BeatSaber::Settings {
struct QualitySettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::__QualitySettings__BloomQuality);
MARK_VAL_T(::BeatSaber::Settings::__QualitySettings__MainEffectOption);
MARK_VAL_T(::BeatSaber::Settings::__QualitySettings__MirrorQuality);
MARK_VAL_T(::BeatSaber::Settings::__QualitySettings__ObstacleQuality);
MARK_VAL_T(::BeatSaber::Settings::QualitySettings);
// Type: ::MainEffectOption
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::QualitySettings::MainEffectOption
struct CORDL_TYPE __QualitySettings__MainEffectOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____QualitySettings__MainEffectOption_Unwrapped
enum struct ____QualitySettings__MainEffectOption_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Game = static_cast<int32_t>(0x1),
__E_LightBaking = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____QualitySettings__MainEffectOption_Unwrapped () const noexcept {
return static_cast<____QualitySettings__MainEffectOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __QualitySettings__MainEffectOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __QualitySettings__MainEffectOption(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Game value: static_cast<int32_t>(0x1)
static ::BeatSaber::Settings::__QualitySettings__MainEffectOption const Game;

/// @brief Field LightBaking value: static_cast<int32_t>(0x2)
static ::BeatSaber::Settings::__QualitySettings__MainEffectOption const LightBaking;

/// @brief Field Off value: static_cast<int32_t>(0x0)
static ::BeatSaber::Settings::__QualitySettings__MainEffectOption const Off;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__QualitySettings__MainEffectOption, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__QualitySettings__MainEffectOption, value__) == 0x0, "Offset mismatch!");

} // namespace end def BeatSaber::Settings
// Type: ::BloomQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::QualitySettings::BloomQuality
struct CORDL_TYPE __QualitySettings__BloomQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____QualitySettings__BloomQuality_Unwrapped
enum struct ____QualitySettings__BloomQuality_Unwrapped : int32_t {
__E_Game = static_cast<int32_t>(0x0),
__E_LightBaking = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____QualitySettings__BloomQuality_Unwrapped () const noexcept {
return static_cast<____QualitySettings__BloomQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __QualitySettings__BloomQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __QualitySettings__BloomQuality(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Game value: static_cast<int32_t>(0x0)
static ::BeatSaber::Settings::__QualitySettings__BloomQuality const Game;

/// @brief Field LightBaking value: static_cast<int32_t>(0x1)
static ::BeatSaber::Settings::__QualitySettings__BloomQuality const LightBaking;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__QualitySettings__BloomQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__QualitySettings__BloomQuality, value__) == 0x0, "Offset mismatch!");

} // namespace end def BeatSaber::Settings
// Type: ::MirrorQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::QualitySettings::MirrorQuality
struct CORDL_TYPE __QualitySettings__MirrorQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____QualitySettings__MirrorQuality_Unwrapped
enum struct ____QualitySettings__MirrorQuality_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____QualitySettings__MirrorQuality_Unwrapped () const noexcept {
return static_cast<____QualitySettings__MirrorQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __QualitySettings__MirrorQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __QualitySettings__MirrorQuality(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field High value: static_cast<int32_t>(0x3)
static ::BeatSaber::Settings::__QualitySettings__MirrorQuality const High;

/// @brief Field Low value: static_cast<int32_t>(0x1)
static ::BeatSaber::Settings::__QualitySettings__MirrorQuality const Low;

/// @brief Field Medium value: static_cast<int32_t>(0x2)
static ::BeatSaber::Settings::__QualitySettings__MirrorQuality const Medium;

/// @brief Field Off value: static_cast<int32_t>(0x0)
static ::BeatSaber::Settings::__QualitySettings__MirrorQuality const Off;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__QualitySettings__MirrorQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__QualitySettings__MirrorQuality, value__) == 0x0, "Offset mismatch!");

} // namespace end def BeatSaber::Settings
// Type: ::ObstacleQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::QualitySettings::ObstacleQuality
struct CORDL_TYPE __QualitySettings__ObstacleQuality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____QualitySettings__ObstacleQuality_Unwrapped
enum struct ____QualitySettings__ObstacleQuality_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____QualitySettings__ObstacleQuality_Unwrapped () const noexcept {
return static_cast<____QualitySettings__ObstacleQuality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __QualitySettings__ObstacleQuality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __QualitySettings__ObstacleQuality(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field High value: static_cast<int32_t>(0x2)
static ::BeatSaber::Settings::__QualitySettings__ObstacleQuality const High;

/// @brief Field Low value: static_cast<int32_t>(0x0)
static ::BeatSaber::Settings::__QualitySettings__ObstacleQuality const Low;

/// @brief Field Medium value: static_cast<int32_t>(0x1)
static ::BeatSaber::Settings::__QualitySettings__ObstacleQuality const Medium;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::__QualitySettings__ObstacleQuality, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::__QualitySettings__ObstacleQuality, value__) == 0x0, "Offset mismatch!");

} // namespace end def BeatSaber::Settings
// Type: BeatSaber.Settings::QualitySettings
// SizeInfo { instance_size: 56, native_size: 68, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::BeatSaber.Settings::QualitySettings
struct CORDL_TYPE QualitySettings {
public:
// Declarations
using BloomQuality = ::BeatSaber::Settings::__QualitySettings__BloomQuality;

using MainEffectOption = ::BeatSaber::Settings::__QualitySettings__MainEffectOption;

using MirrorQuality = ::BeatSaber::Settings::__QualitySettings__MirrorQuality;

using ObstacleQuality = ::BeatSaber::Settings::__QualitySettings__ObstacleQuality;

// Ctor Parameters []
// @brief default ctor
constexpr QualitySettings() ;

// Ctor Parameters [CppParam { name: "renderViewportScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vrResolutionScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "menuVRResolutionScaleMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "antiAliasingLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "targetFramerate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vSyncCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxQueuedFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mainEffect", ty: "::BeatSaber::Settings::__QualitySettings__MainEffectOption", modifiers: "", def_value: None }, CppParam { name: "bloom", ty: "::BeatSaber::Settings::__QualitySettings__BloomQuality", modifiers: "", def_value: None }, CppParam { name: "mirror", ty: "::BeatSaber::Settings::__QualitySettings__MirrorQuality", modifiers: "", def_value: None }, CppParam { name: "obstacles", ty: "::BeatSaber::Settings::__QualitySettings__ObstacleQuality", modifiers: "", def_value: None }, CppParam { name: "screenDisplacementEffects", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "smokeGraphics", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "depthTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "burnMarkTrails", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "maxShockwaveParticles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxNumberOfCutSoundEffects", ty: "int32_t", modifiers: "", def_value: None }]
constexpr QualitySettings(float_t  renderViewportScale, float_t  vrResolutionScale, float_t  menuVRResolutionScaleMultiplier, int32_t  antiAliasingLevel, int32_t  targetFramerate, int32_t  vSyncCount, int32_t  maxQueuedFrames, ::BeatSaber::Settings::__QualitySettings__MainEffectOption  mainEffect, ::BeatSaber::Settings::__QualitySettings__BloomQuality  bloom, ::BeatSaber::Settings::__QualitySettings__MirrorQuality  mirror, ::BeatSaber::Settings::__QualitySettings__ObstacleQuality  obstacles, bool  screenDisplacementEffects, bool  smokeGraphics, bool  depthTexture, bool  burnMarkTrails, int32_t  maxShockwaveParticles, int32_t  maxNumberOfCutSoundEffects) noexcept;

/// @brief Field renderViewportScale, offset: 0x0, size: 0x4, def value: None
 float_t  renderViewportScale;

/// @brief Field vrResolutionScale, offset: 0x4, size: 0x4, def value: None
 float_t  vrResolutionScale;

/// @brief Field menuVRResolutionScaleMultiplier, offset: 0x8, size: 0x4, def value: None
 float_t  menuVRResolutionScaleMultiplier;

/// @brief Field antiAliasingLevel, offset: 0xc, size: 0x4, def value: None
 int32_t  antiAliasingLevel;

/// @brief Field targetFramerate, offset: 0x10, size: 0x4, def value: None
 int32_t  targetFramerate;

/// @brief Field vSyncCount, offset: 0x14, size: 0x4, def value: None
 int32_t  vSyncCount;

/// @brief Field maxQueuedFrames, offset: 0x18, size: 0x4, def value: None
 int32_t  maxQueuedFrames;

/// @brief Field mainEffect, offset: 0x1c, size: 0x4, def value: None
 ::BeatSaber::Settings::__QualitySettings__MainEffectOption  mainEffect;

/// @brief Field bloom, offset: 0x20, size: 0x4, def value: None
 ::BeatSaber::Settings::__QualitySettings__BloomQuality  bloom;

/// @brief Field mirror, offset: 0x24, size: 0x4, def value: None
 ::BeatSaber::Settings::__QualitySettings__MirrorQuality  mirror;

/// @brief Field obstacles, offset: 0x28, size: 0x4, def value: None
 ::BeatSaber::Settings::__QualitySettings__ObstacleQuality  obstacles;

/// @brief Field screenDisplacementEffects, offset: 0x2c, size: 0x1, def value: None
 bool  screenDisplacementEffects;

/// @brief Field smokeGraphics, offset: 0x2d, size: 0x1, def value: None
 bool  smokeGraphics;

/// @brief Field depthTexture, offset: 0x2e, size: 0x1, def value: None
 bool  depthTexture;

/// @brief Field burnMarkTrails, offset: 0x2f, size: 0x1, def value: None
 bool  burnMarkTrails;

/// @brief Field maxShockwaveParticles, offset: 0x30, size: 0x4, def value: None
 int32_t  maxShockwaveParticles;

/// @brief Field maxNumberOfCutSoundEffects, offset: 0x34, size: 0x4, def value: None
 int32_t  maxNumberOfCutSoundEffects;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::QualitySettings, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, renderViewportScale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, vrResolutionScale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, menuVRResolutionScaleMultiplier) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, antiAliasingLevel) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, targetFramerate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, vSyncCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, maxQueuedFrames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, mainEffect) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, bloom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, mirror) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, obstacles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, screenDisplacementEffects) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, smokeGraphics) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, depthTexture) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, burnMarkTrails) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, maxShockwaveParticles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::QualitySettings, maxNumberOfCutSoundEffects) == 0x34, "Offset mismatch!");

} // namespace end def BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__QualitySettings__BloomQuality, "BeatSaber.Settings", "QualitySettings/BloomQuality");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__QualitySettings__MainEffectOption, "BeatSaber.Settings", "QualitySettings/MainEffectOption");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__QualitySettings__MirrorQuality, "BeatSaber.Settings", "QualitySettings/MirrorQuality");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::__QualitySettings__ObstacleQuality, "BeatSaber.Settings", "QualitySettings/ObstacleQuality");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::QualitySettings, "BeatSaber.Settings", "QualitySettings");
