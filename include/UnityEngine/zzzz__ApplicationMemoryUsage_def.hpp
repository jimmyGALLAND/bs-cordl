#pragma once
// IWYU pragma private; include "UnityEngine/ApplicationMemoryUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationMemoryUsage)
// Forward declare root types
namespace UnityEngine {
struct ApplicationMemoryUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ApplicationMemoryUsage);
// Type: UnityEngine::ApplicationMemoryUsage
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ApplicationMemoryUsage
struct CORDL_TYPE ApplicationMemoryUsage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ApplicationMemoryUsage_Unwrapped
enum struct __ApplicationMemoryUsage_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
__E_Critical = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ApplicationMemoryUsage_Unwrapped () const noexcept {
return static_cast<__ApplicationMemoryUsage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ApplicationMemoryUsage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ApplicationMemoryUsage(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Critical value: static_cast<int32_t>(0x4)
static ::UnityEngine::ApplicationMemoryUsage const Critical;

/// @brief Field High value: static_cast<int32_t>(0x3)
static ::UnityEngine::ApplicationMemoryUsage const High;

/// @brief Field Low value: static_cast<int32_t>(0x1)
static ::UnityEngine::ApplicationMemoryUsage const Low;

/// @brief Field Medium value: static_cast<int32_t>(0x2)
static ::UnityEngine::ApplicationMemoryUsage const Medium;

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::UnityEngine::ApplicationMemoryUsage const Unknown;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ApplicationMemoryUsage, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ApplicationMemoryUsage, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ApplicationMemoryUsage, "UnityEngine", "ApplicationMemoryUsage");
