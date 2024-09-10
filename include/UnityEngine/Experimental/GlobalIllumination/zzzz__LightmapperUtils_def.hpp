#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightmapperUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightmapperUtils)
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DirectionalLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct PointLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct RectangleLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct LightmapBakeType;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
class LightmapperUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils);
// Type: UnityEngine.Experimental.GlobalIllumination::LightmapperUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::LightmapperUtils*
class CORDL_TYPE LightmapperUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ApplyColorTemperature, addr 0x483ca5c, size 0x48, virtual false, abstract: false, final false
static inline void ApplyColorTemperature(::UnityEngine::Color  cct, ByRef<::UnityEngine::Experimental::GlobalIllumination::LinearColor>  lightColor) ;

/// @brief Method Extract, addr 0x483c8d8, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::GlobalIllumination::LightMode Extract(::UnityEngine::LightmapBakeType  baketype) ;

/// @brief Method Extract, addr 0x483d310, size 0x144, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie>  cookie) ;

/// @brief Method Extract, addr 0x483caa4, size 0x194, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ByRef<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight>  dir) ;

/// @brief Method Extract, addr 0x483d164, size 0x1ac, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ByRef<::UnityEngine::Experimental::GlobalIllumination::DiscLight>  disc) ;

/// @brief Method Extract, addr 0x483cc38, size 0x1ac, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ByRef<::UnityEngine::Experimental::GlobalIllumination::PointLight>  point) ;

/// @brief Method Extract, addr 0x483cfb8, size 0x1ac, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ByRef<::UnityEngine::Experimental::GlobalIllumination::RectangleLight>  rect) ;

/// @brief Method Extract, addr 0x483cde4, size 0x1d4, virtual false, abstract: false, final false
static inline void Extract(::UnityEngine::Light*  l, ByRef<::UnityEngine::Experimental::GlobalIllumination::SpotLight>  spot) ;

/// @brief Method ExtractColorTemperature, addr 0x483c9c4, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ExtractColorTemperature(::UnityEngine::Light*  l) ;

/// @brief Method ExtractIndirect, addr 0x483c8f8, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(::UnityEngine::Light*  l) ;

/// @brief Method ExtractInnerCone, addr 0x483c970, size 0x54, virtual false, abstract: false, final false
static inline float_t ExtractInnerCone(::UnityEngine::Light*  l) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightmapperUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmapperUtils(LightmapperUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmapperUtils(LightmapperUtils const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*, "UnityEngine.Experimental.GlobalIllumination", "LightmapperUtils");
