#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AppliedOffsetMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppliedOffsetMode)
// Forward declare root types
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::AppliedOffsetMode);
// Type: UnityEngine.Timeline::AppliedOffsetMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::UnityEngine.Timeline::AppliedOffsetMode
struct CORDL_TYPE AppliedOffsetMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AppliedOffsetMode_Unwrapped
enum struct __AppliedOffsetMode_Unwrapped : int32_t {
__E_NoRootTransform = static_cast<int32_t>(0x0),
__E_TransformOffset = static_cast<int32_t>(0x1),
__E_SceneOffset = static_cast<int32_t>(0x2),
__E_TransformOffsetLegacy = static_cast<int32_t>(0x3),
__E_SceneOffsetLegacy = static_cast<int32_t>(0x4),
__E_SceneOffsetEditor = static_cast<int32_t>(0x5),
__E_SceneOffsetLegacyEditor = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AppliedOffsetMode_Unwrapped () const noexcept {
return static_cast<__AppliedOffsetMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AppliedOffsetMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AppliedOffsetMode(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field NoRootTransform value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::AppliedOffsetMode const NoRootTransform;

/// @brief Field SceneOffset value: static_cast<int32_t>(0x2)
static ::UnityEngine::Timeline::AppliedOffsetMode const SceneOffset;

/// @brief Field SceneOffsetEditor value: static_cast<int32_t>(0x5)
static ::UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetEditor;

/// @brief Field SceneOffsetLegacy value: static_cast<int32_t>(0x4)
static ::UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetLegacy;

/// @brief Field SceneOffsetLegacyEditor value: static_cast<int32_t>(0x6)
static ::UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetLegacyEditor;

/// @brief Field TransformOffset value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::AppliedOffsetMode const TransformOffset;

/// @brief Field TransformOffsetLegacy value: static_cast<int32_t>(0x3)
static ::UnityEngine::Timeline::AppliedOffsetMode const TransformOffsetLegacy;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AppliedOffsetMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AppliedOffsetMode, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AppliedOffsetMode, "UnityEngine.Timeline", "AppliedOffsetMode");
