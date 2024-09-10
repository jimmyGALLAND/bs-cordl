#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaEdge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaEdge)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaEdge;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaEdge);
// Type: UnityEngine.Yoga::YogaEdge
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: ::UnityEngine.Yoga::YogaEdge
struct CORDL_TYPE YogaEdge {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __YogaEdge_Unwrapped
enum struct __YogaEdge_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Top = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Bottom = static_cast<int32_t>(0x3),
__E_Start = static_cast<int32_t>(0x4),
__E_End = static_cast<int32_t>(0x5),
__E_Horizontal = static_cast<int32_t>(0x6),
__E_Vertical = static_cast<int32_t>(0x7),
__E_All = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaEdge_Unwrapped () const noexcept {
return static_cast<__YogaEdge_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr YogaEdge() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaEdge(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field All value: static_cast<int32_t>(0x8)
static ::UnityEngine::Yoga::YogaEdge const All;

/// @brief Field Bottom value: static_cast<int32_t>(0x3)
static ::UnityEngine::Yoga::YogaEdge const Bottom;

/// @brief Field End value: static_cast<int32_t>(0x5)
static ::UnityEngine::Yoga::YogaEdge const End;

/// @brief Field Horizontal value: static_cast<int32_t>(0x6)
static ::UnityEngine::Yoga::YogaEdge const Horizontal;

/// @brief Field Left value: static_cast<int32_t>(0x0)
static ::UnityEngine::Yoga::YogaEdge const Left;

/// @brief Field Right value: static_cast<int32_t>(0x2)
static ::UnityEngine::Yoga::YogaEdge const Right;

/// @brief Field Start value: static_cast<int32_t>(0x4)
static ::UnityEngine::Yoga::YogaEdge const Start;

/// @brief Field Top value: static_cast<int32_t>(0x1)
static ::UnityEngine::Yoga::YogaEdge const Top;

/// @brief Field Vertical value: static_cast<int32_t>(0x7)
static ::UnityEngine::Yoga::YogaEdge const Vertical;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaEdge, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaEdge, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaEdge, "UnityEngine.Yoga", "YogaEdge");
