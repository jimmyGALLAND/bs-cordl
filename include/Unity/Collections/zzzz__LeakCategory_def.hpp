#pragma once
// IWYU pragma private; include "Unity/Collections/LeakCategory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeakCategory)
// Forward declare root types
namespace Unity::Collections {
struct LeakCategory;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LeakCategory);
// Type: Unity.Collections::LeakCategory
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: true
// CS Name: ::Unity.Collections::LeakCategory
struct CORDL_TYPE LeakCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LeakCategory_Unwrapped
enum struct __LeakCategory_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_Malloc = static_cast<int32_t>(0x1),
__E_TempJob = static_cast<int32_t>(0x2),
__E_Persistent = static_cast<int32_t>(0x3),
__E_LightProbesQuery = static_cast<int32_t>(0x4),
__E_NativeTest = static_cast<int32_t>(0x5),
__E_MeshDataArray = static_cast<int32_t>(0x6),
__E_TransformAccessArray = static_cast<int32_t>(0x7),
__E_NavMeshQuery = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LeakCategory_Unwrapped () const noexcept {
return static_cast<__LeakCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LeakCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeakCategory(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Invalid value: static_cast<int32_t>(0x0)
static ::Unity::Collections::LeakCategory const Invalid;

/// @brief Field LightProbesQuery value: static_cast<int32_t>(0x4)
static ::Unity::Collections::LeakCategory const LightProbesQuery;

/// @brief Field Malloc value: static_cast<int32_t>(0x1)
static ::Unity::Collections::LeakCategory const Malloc;

/// @brief Field MeshDataArray value: static_cast<int32_t>(0x6)
static ::Unity::Collections::LeakCategory const MeshDataArray;

/// @brief Field NativeTest value: static_cast<int32_t>(0x5)
static ::Unity::Collections::LeakCategory const NativeTest;

/// @brief Field NavMeshQuery value: static_cast<int32_t>(0x8)
static ::Unity::Collections::LeakCategory const NavMeshQuery;

/// @brief Field Persistent value: static_cast<int32_t>(0x3)
static ::Unity::Collections::LeakCategory const Persistent;

/// @brief Field TempJob value: static_cast<int32_t>(0x2)
static ::Unity::Collections::LeakCategory const TempJob;

/// @brief Field TransformAccessArray value: static_cast<int32_t>(0x7)
static ::Unity::Collections::LeakCategory const TransformAccessArray;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LeakCategory, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Collections::LeakCategory, value__) == 0x0, "Offset mismatch!");

} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LeakCategory, "Unity.Collections", "LeakCategory");
