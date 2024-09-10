#pragma once
// IWYU pragma private; include "UnityEngine/RotationOrder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RotationOrder)
// Forward declare root types
namespace UnityEngine {
struct RotationOrder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RotationOrder);
// Type: UnityEngine::RotationOrder
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::RotationOrder
struct CORDL_TYPE RotationOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RotationOrder_Unwrapped
enum struct __RotationOrder_Unwrapped : int32_t {
__E_OrderXYZ = static_cast<int32_t>(0x0),
__E_OrderXZY = static_cast<int32_t>(0x1),
__E_OrderYZX = static_cast<int32_t>(0x2),
__E_OrderYXZ = static_cast<int32_t>(0x3),
__E_OrderZXY = static_cast<int32_t>(0x4),
__E_OrderZYX = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotationOrder_Unwrapped () const noexcept {
return static_cast<__RotationOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RotationOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RotationOrder(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field OrderXYZ value: static_cast<int32_t>(0x0)
static ::UnityEngine::RotationOrder const OrderXYZ;

/// @brief Field OrderXZY value: static_cast<int32_t>(0x1)
static ::UnityEngine::RotationOrder const OrderXZY;

/// @brief Field OrderYXZ value: static_cast<int32_t>(0x3)
static ::UnityEngine::RotationOrder const OrderYXZ;

/// @brief Field OrderYZX value: static_cast<int32_t>(0x2)
static ::UnityEngine::RotationOrder const OrderYZX;

/// @brief Field OrderZXY value: static_cast<int32_t>(0x4)
static ::UnityEngine::RotationOrder const OrderZXY;

/// @brief Field OrderZYX value: static_cast<int32_t>(0x5)
static ::UnityEngine::RotationOrder const OrderZYX;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RotationOrder, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RotationOrder, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RotationOrder, "UnityEngine", "RotationOrder");
