#pragma once
// IWYU pragma private; include "UnityEngine/RenderingPath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingPath)
// Forward declare root types
namespace UnityEngine {
struct RenderingPath;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderingPath);
// Type: UnityEngine::RenderingPath
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::RenderingPath
struct CORDL_TYPE RenderingPath {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderingPath_Unwrapped
enum struct __RenderingPath_Unwrapped : int32_t {
__E_UsePlayerSettings = static_cast<int32_t>(0xffffffff),
__E_VertexLit = static_cast<int32_t>(0x0),
__E_Forward = static_cast<int32_t>(0x1),
__E_DeferredLighting = static_cast<int32_t>(0x2),
__E_DeferredShading = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderingPath_Unwrapped () const noexcept {
return static_cast<__RenderingPath_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderingPath() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderingPath(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field DeferredLighting value: static_cast<int32_t>(0x2)
static ::UnityEngine::RenderingPath const DeferredLighting;

/// @brief Field DeferredShading value: static_cast<int32_t>(0x3)
static ::UnityEngine::RenderingPath const DeferredShading;

/// @brief Field Forward value: static_cast<int32_t>(0x1)
static ::UnityEngine::RenderingPath const Forward;

/// @brief Field UsePlayerSettings value: static_cast<int32_t>(0xffffffff)
static ::UnityEngine::RenderingPath const UsePlayerSettings;

/// @brief Field VertexLit value: static_cast<int32_t>(0x0)
static ::UnityEngine::RenderingPath const VertexLit;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderingPath, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RenderingPath, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderingPath, "UnityEngine", "RenderingPath");
