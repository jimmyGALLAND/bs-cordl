#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemBakeMeshOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemBakeMeshOptions)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemBakeMeshOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemBakeMeshOptions);
// Type: UnityEngine::ParticleSystemBakeMeshOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ParticleSystemBakeMeshOptions
struct CORDL_TYPE ParticleSystemBakeMeshOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParticleSystemBakeMeshOptions_Unwrapped
enum struct __ParticleSystemBakeMeshOptions_Unwrapped : int32_t {
__E_BakeRotationAndScale = static_cast<int32_t>(0x1),
__E_BakePosition = static_cast<int32_t>(0x2),
__E_Default = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParticleSystemBakeMeshOptions_Unwrapped () const noexcept {
return static_cast<__ParticleSystemBakeMeshOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemBakeMeshOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParticleSystemBakeMeshOptions(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field BakePosition value: static_cast<int32_t>(0x2)
static ::UnityEngine::ParticleSystemBakeMeshOptions const BakePosition;

/// @brief Field BakeRotationAndScale value: static_cast<int32_t>(0x1)
static ::UnityEngine::ParticleSystemBakeMeshOptions const BakeRotationAndScale;

/// @brief Field Default value: static_cast<int32_t>(0x0)
static ::UnityEngine::ParticleSystemBakeMeshOptions const Default;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemBakeMeshOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemBakeMeshOptions, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemBakeMeshOptions, "UnityEngine", "ParticleSystemBakeMeshOptions");
