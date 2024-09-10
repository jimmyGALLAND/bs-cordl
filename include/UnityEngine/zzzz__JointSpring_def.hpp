#pragma once
// IWYU pragma private; include "UnityEngine/JointSpring.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(JointSpring)
// Forward declare root types
namespace UnityEngine {
struct JointSpring;
}
// Write type traits
MARK_VAL_T(::UnityEngine::JointSpring);
// Type: UnityEngine::JointSpring
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::JointSpring
struct CORDL_TYPE JointSpring {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr JointSpring() ;

// Ctor Parameters [CppParam { name: "spring", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "damper", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "targetPosition", ty: "float_t", modifiers: "", def_value: None }]
constexpr JointSpring(float_t  spring, float_t  damper, float_t  targetPosition) noexcept;

/// @brief Field spring, offset: 0x0, size: 0x4, def value: None
 float_t  spring;

/// @brief Field damper, offset: 0x4, size: 0x4, def value: None
 float_t  damper;

/// @brief Field targetPosition, offset: 0x8, size: 0x4, def value: None
 float_t  targetPosition;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::JointSpring, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::JointSpring, spring) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointSpring, damper) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointSpring, targetPosition) == 0x8, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JointSpring, "UnityEngine", "JointSpring");
