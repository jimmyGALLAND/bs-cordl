#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/BezierTangentMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierTangentMode)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct BezierTangentMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::BezierTangentMode);
// Type: UnityEngine.ProBuilder::BezierTangentMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::BezierTangentMode
struct CORDL_TYPE BezierTangentMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BezierTangentMode_Unwrapped
enum struct __BezierTangentMode_Unwrapped : int32_t {
__E_Free = static_cast<int32_t>(0x0),
__E_Aligned = static_cast<int32_t>(0x1),
__E_Mirrored = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BezierTangentMode_Unwrapped () const noexcept {
return static_cast<__BezierTangentMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BezierTangentMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BezierTangentMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Aligned value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::BezierTangentMode const Aligned;

/// @brief Field Free value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::BezierTangentMode const Free;

/// @brief Field Mirrored value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::BezierTangentMode const Mirrored;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BezierTangentMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierTangentMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BezierTangentMode, "UnityEngine.ProBuilder", "BezierTangentMode");
