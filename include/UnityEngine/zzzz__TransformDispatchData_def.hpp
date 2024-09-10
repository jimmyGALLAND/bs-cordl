#pragma once
// IWYU pragma private; include "UnityEngine/TransformDispatchData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformDispatchData)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct TransformDispatchData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TransformDispatchData);
// Type: UnityEngine::TransformDispatchData
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::TransformDispatchData
struct CORDL_TYPE TransformDispatchData {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x4812d7c, size 0xd0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformDispatchData() ;

// Ctor Parameters [CppParam { name: "transformedID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "parentID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "localToWorldMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None }, CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "rotations", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None }, CppParam { name: "scales", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }]
constexpr TransformDispatchData(::Unity::Collections::NativeArray_1<int32_t>  transformedID, ::Unity::Collections::NativeArray_1<int32_t>  parentID, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  rotations, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  scales) noexcept;

/// @brief Field transformedID, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  transformedID;

/// @brief Field parentID, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  parentID;

/// @brief Field localToWorldMatrices, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  localToWorldMatrices;

/// @brief Field positions, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions;

/// @brief Field rotations, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  rotations;

/// @brief Field scales, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  scales;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TransformDispatchData, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TransformDispatchData, transformedID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TransformDispatchData, parentID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TransformDispatchData, localToWorldMatrices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TransformDispatchData, positions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TransformDispatchData, rotations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TransformDispatchData, scales) == 0x50, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TransformDispatchData, "UnityEngine", "TransformDispatchData");
