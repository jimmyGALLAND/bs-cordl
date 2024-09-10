#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BundleSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BundleSource)
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
struct BundleSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::BundleSource);
// Type: UnityEngine.ResourceManagement.Util::BundleSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: ::UnityEngine.ResourceManagement.Util::BundleSource
struct CORDL_TYPE BundleSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BundleSource_Unwrapped
enum struct __BundleSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_Cache = static_cast<int32_t>(0x2),
__E_Download = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BundleSource_Unwrapped () const noexcept {
return static_cast<__BundleSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BundleSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BundleSource(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Cache value: static_cast<int32_t>(0x2)
static ::UnityEngine::ResourceManagement::Util::BundleSource const Cache;

/// @brief Field Download value: static_cast<int32_t>(0x4)
static ::UnityEngine::ResourceManagement::Util::BundleSource const Download;

/// @brief Field Local value: static_cast<int32_t>(0x1)
static ::UnityEngine::ResourceManagement::Util::BundleSource const Local;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::ResourceManagement::Util::BundleSource const None;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::BundleSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::BundleSource, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BundleSource, "UnityEngine.ResourceManagement.Util", "BundleSource");
