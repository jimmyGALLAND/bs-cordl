#pragma once
// IWYU pragma private; include "UnityEngine/PenData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PenEventType_def.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PenData)
namespace UnityEngine {
struct PenEventType;
}
namespace UnityEngine {
struct PenStatus;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct PenData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PenData);
// Type: UnityEngine::PenData
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::PenData
struct CORDL_TYPE PenData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PenData() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "tilt", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "penStatus", ty: "::UnityEngine::PenStatus", modifiers: "", def_value: None }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "contactType", ty: "::UnityEngine::PenEventType", modifiers: "", def_value: None }, CppParam { name: "deltaPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr PenData(::UnityEngine::Vector2  position, ::UnityEngine::Vector2  tilt, ::UnityEngine::PenStatus  penStatus, float_t  twist, float_t  pressure, ::UnityEngine::PenEventType  contactType, ::UnityEngine::Vector2  deltaPos) noexcept;

/// @brief Field position, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  position;

/// @brief Field tilt, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  tilt;

/// @brief Field penStatus, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::PenStatus  penStatus;

/// @brief Field twist, offset: 0x14, size: 0x4, def value: None
 float_t  twist;

/// @brief Field pressure, offset: 0x18, size: 0x4, def value: None
 float_t  pressure;

/// @brief Field contactType, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::PenEventType  contactType;

/// @brief Field deltaPos, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  deltaPos;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PenData, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::PenData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PenData, tilt) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PenData, penStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PenData, twist) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PenData, pressure) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PenData, contactType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PenData, deltaPos) == 0x20, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PenData, "UnityEngine", "PenData");
