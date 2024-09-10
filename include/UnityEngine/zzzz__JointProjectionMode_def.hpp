#pragma once
// IWYU pragma private; include "UnityEngine/JointProjectionMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointProjectionMode)
// Forward declare root types
namespace UnityEngine {
struct JointProjectionMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::JointProjectionMode);
// Type: UnityEngine::JointProjectionMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::JointProjectionMode
struct CORDL_TYPE JointProjectionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JointProjectionMode_Unwrapped
enum struct __JointProjectionMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PositionAndRotation = static_cast<int32_t>(0x1),
__E_PositionOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JointProjectionMode_Unwrapped () const noexcept {
return static_cast<__JointProjectionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JointProjectionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JointProjectionMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::JointProjectionMode const None;

/// @brief Field PositionAndRotation value: static_cast<int32_t>(0x1)
static ::UnityEngine::JointProjectionMode const PositionAndRotation;

/// @brief Field PositionOnly value: static_cast<int32_t>(0x2)
static ::UnityEngine::JointProjectionMode const PositionOnly;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::JointProjectionMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::JointProjectionMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JointProjectionMode, "UnityEngine", "JointProjectionMode");
