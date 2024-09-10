#pragma once
// IWYU pragma private; include "GlobalNamespace/IReadOnlyColorStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IReadOnlyColorStyle)
namespace GlobalNamespace {
struct GradientDirection;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadOnlyColorStyle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IReadOnlyColorStyle);
// Type: ::IReadOnlyColorStyle
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IReadOnlyColorStyle*
class CORDL_TYPE IReadOnlyColorStyle {
public:
// Declarations
 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_color0)) ::UnityEngine::Color  color0;

 __declspec(property(get=get_color1)) ::UnityEngine::Color  color1;

 __declspec(property(get=get_flipGradientColors)) bool  flipGradientColors;

 __declspec(property(get=get_globalLightTintIntensity)) float_t  globalLightTintIntensity;

 __declspec(property(get=get_gradient)) bool  gradient;

 __declspec(property(get=get_gradientDirection)) ::GlobalNamespace::GradientDirection  gradientDirection;

 __declspec(property(get=get_useScriptableObjectColor)) bool  useScriptableObjectColor;

/// @brief Method get_color, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_color0, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Color get_color0() ;

/// @brief Method get_color1, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Color get_color1() ;

/// @brief Method get_flipGradientColors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_flipGradientColors() ;

/// @brief Method get_globalLightTintIntensity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_globalLightTintIntensity() ;

/// @brief Method get_gradient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_gradient() ;

/// @brief Method get_gradientDirection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::GradientDirection get_gradientDirection() ;

/// @brief Method get_useScriptableObjectColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_useScriptableObjectColor() ;

// Ctor Parameters [CppParam { name: "", ty: "IReadOnlyColorStyle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IReadOnlyColorStyle(IReadOnlyColorStyle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IReadOnlyColorStyle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReadOnlyColorStyle(IReadOnlyColorStyle const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReadOnlyColorStyle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadOnlyColorStyle*, "", "IReadOnlyColorStyle");
