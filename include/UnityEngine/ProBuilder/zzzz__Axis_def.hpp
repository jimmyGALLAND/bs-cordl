#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Axis.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Axis)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Axis;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Axis);
// Type: UnityEngine.ProBuilder::Axis
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::Axis
struct CORDL_TYPE Axis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Axis_Unwrapped
enum struct __Axis_Unwrapped : int32_t {
__E_Right = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Up = static_cast<int32_t>(0x2),
__E_Down = static_cast<int32_t>(0x3),
__E_Forward = static_cast<int32_t>(0x4),
__E_Backward = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Axis_Unwrapped () const noexcept {
return static_cast<__Axis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Axis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Axis(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Backward value: static_cast<int32_t>(0x5)
static ::UnityEngine::ProBuilder::Axis const Backward;

/// @brief Field Down value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::Axis const Down;

/// @brief Field Forward value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::Axis const Forward;

/// @brief Field Left value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::Axis const Left;

/// @brief Field Right value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::Axis const Right;

/// @brief Field Up value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::Axis const Up;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Axis, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Axis, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Axis, "UnityEngine.ProBuilder", "Axis");
