#pragma once
// IWYU pragma private; include "UnityEngine/ColorGamut.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorGamut)
// Forward declare root types
namespace UnityEngine {
struct ColorGamut;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ColorGamut);
// Type: UnityEngine::ColorGamut
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ColorGamut
struct CORDL_TYPE ColorGamut {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColorGamut_Unwrapped
enum struct __ColorGamut_Unwrapped : int32_t {
__E_sRGB = static_cast<int32_t>(0x0),
__E_Rec709 = static_cast<int32_t>(0x1),
__E_Rec2020 = static_cast<int32_t>(0x2),
__E_DisplayP3 = static_cast<int32_t>(0x3),
__E_HDR10 = static_cast<int32_t>(0x4),
__E_DolbyHDR = static_cast<int32_t>(0x5),
__E_P3D65G22 = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorGamut_Unwrapped () const noexcept {
return static_cast<__ColorGamut_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColorGamut() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColorGamut(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field DisplayP3 value: static_cast<int32_t>(0x3)
static ::UnityEngine::ColorGamut const DisplayP3;

/// @brief Field DolbyHDR value: static_cast<int32_t>(0x5)
static ::UnityEngine::ColorGamut const DolbyHDR;

/// @brief Field HDR10 value: static_cast<int32_t>(0x4)
static ::UnityEngine::ColorGamut const HDR10;

/// @brief Field P3D65G22 value: static_cast<int32_t>(0x6)
static ::UnityEngine::ColorGamut const P3D65G22;

/// @brief Field Rec2020 value: static_cast<int32_t>(0x2)
static ::UnityEngine::ColorGamut const Rec2020;

/// @brief Field Rec709 value: static_cast<int32_t>(0x1)
static ::UnityEngine::ColorGamut const Rec709;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field sRGB value: static_cast<int32_t>(0x0)
static ::UnityEngine::ColorGamut const sRGB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ColorGamut, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ColorGamut, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorGamut, "UnityEngine", "ColorGamut");
