#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshSyncState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshSyncState)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct MeshSyncState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::MeshSyncState);
// Type: UnityEngine.ProBuilder::MeshSyncState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::MeshSyncState
struct CORDL_TYPE MeshSyncState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MeshSyncState_Unwrapped
enum struct __MeshSyncState_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_InstanceIDMismatch = static_cast<int32_t>(0x1),
__E_Lightmap = static_cast<int32_t>(0x2),
__E_InSync = static_cast<int32_t>(0x3),
__E_NeedsRebuild = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshSyncState_Unwrapped () const noexcept {
return static_cast<__MeshSyncState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MeshSyncState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshSyncState(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field InSync value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::MeshSyncState const InSync;

/// @brief Field InstanceIDMismatch value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::MeshSyncState const InstanceIDMismatch;

/// @brief Field Lightmap value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::MeshSyncState const Lightmap;

/// @brief Field NeedsRebuild value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::MeshSyncState const NeedsRebuild;

/// @brief Field Null value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::MeshSyncState const Null;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshSyncState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshSyncState, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshSyncState, "UnityEngine.ProBuilder", "MeshSyncState");
