#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerCounterOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerCounterOptions)
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerCounterOptions;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerCounterOptions);
// Type: Unity.Profiling::ProfilerCounterOptions
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, packing: None, specified_packing: None }
namespace Unity::Profiling {
// Is value type: true
// CS Name: ::Unity.Profiling::ProfilerCounterOptions
struct CORDL_TYPE ProfilerCounterOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __ProfilerCounterOptions_Unwrapped
enum struct __ProfilerCounterOptions_Unwrapped : uint16_t {
__E_None = static_cast<uint16_t>(0x0u),
__E_FlushOnEndOfFrame = static_cast<uint16_t>(0x2u),
__E_ResetToZeroOnFlush = static_cast<uint16_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProfilerCounterOptions_Unwrapped () const noexcept {
return static_cast<__ProfilerCounterOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerCounterOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr ProfilerCounterOptions(uint16_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

/// @brief Field FlushOnEndOfFrame value: static_cast<uint16_t>(0x2u)
static ::Unity::Profiling::ProfilerCounterOptions const FlushOnEndOfFrame;

/// @brief Field None value: static_cast<uint16_t>(0x0u)
static ::Unity::Profiling::ProfilerCounterOptions const None;

/// @brief Field ResetToZeroOnFlush value: static_cast<uint16_t>(0x4u)
static ::Unity::Profiling::ProfilerCounterOptions const ResetToZeroOnFlush;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerCounterOptions, 0x2>, "Size mismatch!");

static_assert(offsetof(::Unity::Profiling::ProfilerCounterOptions, value__) == 0x0, "Offset mismatch!");

} // namespace end def Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerCounterOptions, "Unity.Profiling", "ProfilerCounterOptions");
