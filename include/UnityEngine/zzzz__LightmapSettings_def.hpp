#pragma once
// IWYU pragma private; include "UnityEngine/LightmapSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LightmapSettings)
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
class LightProbes;
}
namespace UnityEngine {
class LightmapData;
}
namespace UnityEngine {
struct LightmapsModeLegacy;
}
namespace UnityEngine {
struct LightmapsMode;
}
// Forward declare root types
namespace UnityEngine {
class LightmapSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LightmapSettings);
// Type: UnityEngine::LightmapSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::LightmapSettings*
class CORDL_TYPE LightmapSettings : public ::UnityEngine::Object {
public:
// Declarations
static inline ::UnityEngine::LightmapSettings* New_ctor() ;

/// @brief Method Reset, addr 0x47e3a90, size 0x28, virtual false, abstract: false, final false
static inline void Reset() ;

/// @brief Method .ctor, addr 0x47e390c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bakedColorSpace, addr 0x47e3ac4, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::ColorSpace get_bakedColorSpace() ;

/// @brief Method get_lightProbes, addr 0x47e3a2c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::LightProbes> get_lightProbes() ;

/// @brief Method get_lightmaps, addr 0x47e3964, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::LightmapData*,::Array<::UnityEngine::LightmapData*>*> get_lightmaps() ;

/// @brief Method get_lightmapsMode, addr 0x47e39c8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::LightmapsMode get_lightmapsMode() ;

/// @brief Method get_lightmapsModeLegacy, addr 0x47e3ab8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::LightmapsModeLegacy get_lightmapsModeLegacy() ;

/// @brief Method set_bakedColorSpace, addr 0x47e3b14, size 0x4, virtual false, abstract: false, final false
static inline void set_bakedColorSpace(::UnityEngine::ColorSpace  value) ;

/// @brief Method set_lightProbes, addr 0x47e3a54, size 0x3c, virtual false, abstract: false, final false
static inline void set_lightProbes(::UnityEngine::LightProbes*  value) ;

/// @brief Method set_lightmaps, addr 0x47e398c, size 0x3c, virtual false, abstract: false, final false
static inline void set_lightmaps(::ArrayW<::UnityEngine::LightmapData*,::Array<::UnityEngine::LightmapData*>*>  value) ;

/// @brief Method set_lightmapsMode, addr 0x47e39f0, size 0x3c, virtual false, abstract: false, final false
static inline void set_lightmapsMode(::UnityEngine::LightmapsMode  value) ;

/// @brief Method set_lightmapsModeLegacy, addr 0x47e3ac0, size 0x4, virtual false, abstract: false, final false
static inline void set_lightmapsModeLegacy(::UnityEngine::LightmapsModeLegacy  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightmapSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmapSettings(LightmapSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmapSettings(LightmapSettings const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightmapSettings, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::LightmapSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightmapSettings*, "UnityEngine", "LightmapSettings");
