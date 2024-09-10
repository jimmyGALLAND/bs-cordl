#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackBindingFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackBindingFlags)
// Forward declare root types
namespace UnityEngine::Timeline {
struct TrackBindingFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::TrackBindingFlags);
// Type: UnityEngine.Timeline::TrackBindingFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::UnityEngine.Timeline::TrackBindingFlags
struct CORDL_TYPE TrackBindingFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TrackBindingFlags_Unwrapped
enum struct __TrackBindingFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AllowCreateComponent = static_cast<int32_t>(0x1),
__E_All = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackBindingFlags_Unwrapped () const noexcept {
return static_cast<__TrackBindingFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TrackBindingFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TrackBindingFlags(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field All value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::TrackBindingFlags const All;

/// @brief Field AllowCreateComponent value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::TrackBindingFlags const AllowCreateComponent;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::TrackBindingFlags const None;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackBindingFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackBindingFlags, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackBindingFlags, "UnityEngine.Timeline", "TrackBindingFlags");
