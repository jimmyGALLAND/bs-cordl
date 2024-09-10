#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationDriveType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArticulationDriveType)
// Forward declare root types
namespace UnityEngine {
struct ArticulationDriveType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ArticulationDriveType);
// Type: UnityEngine::ArticulationDriveType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ArticulationDriveType
struct CORDL_TYPE ArticulationDriveType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ArticulationDriveType_Unwrapped
enum struct __ArticulationDriveType_Unwrapped : int32_t {
__E_Force = static_cast<int32_t>(0x0),
__E_Acceleration = static_cast<int32_t>(0x1),
__E_Target = static_cast<int32_t>(0x2),
__E_Velocity = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArticulationDriveType_Unwrapped () const noexcept {
return static_cast<__ArticulationDriveType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArticulationDriveType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArticulationDriveType(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Acceleration value: static_cast<int32_t>(0x1)
static ::UnityEngine::ArticulationDriveType const Acceleration;

/// @brief Field Force value: static_cast<int32_t>(0x0)
static ::UnityEngine::ArticulationDriveType const Force;

/// @brief Field Target value: static_cast<int32_t>(0x2)
static ::UnityEngine::ArticulationDriveType const Target;

/// @brief Field Velocity value: static_cast<int32_t>(0x3)
static ::UnityEngine::ArticulationDriveType const Velocity;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationDriveType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationDriveType, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationDriveType, "UnityEngine", "ArticulationDriveType");
