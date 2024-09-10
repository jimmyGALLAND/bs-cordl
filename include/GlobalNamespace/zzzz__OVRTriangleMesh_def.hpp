#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh)
namespace GlobalNamespace {
template<typename T>
class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__GetMeshJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__NegateXJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__Triangle;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__GetMeshJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__NegateXJob;
}
namespace GlobalNamespace {
struct __OVRTriangleMesh__Triangle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__NegateXJob);
MARK_VAL_T(::GlobalNamespace::__OVRTriangleMesh__Triangle);
// Type: ::GetMeshJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTriangleMesh::GetMeshJob
struct CORDL_TYPE __OVRTriangleMesh__GetMeshJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x3f1142c, size 0xd4, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr __OVRTriangleMesh__GetMeshJob() ;

// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr __OVRTriangleMesh__GetMeshJob(uint64_t  Space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions, ::Unity::Collections::NativeArray_1<int32_t>  Indices) noexcept;

/// @brief Field Space, offset: 0x0, size: 0x8, def value: None
 uint64_t  Space;

/// @brief Field Positions, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions;

/// @brief Field Indices, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  Indices;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, Space) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, Positions) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, Indices) == 0x18, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Triangle
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTriangleMesh::Triangle
struct CORDL_TYPE __OVRTriangleMesh__Triangle {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __OVRTriangleMesh__Triangle() ;

// Ctor Parameters [CppParam { name: "A", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "B", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "C", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRTriangleMesh__Triangle(int32_t  A, int32_t  B, int32_t  C) noexcept;

/// @brief Field A, offset: 0x0, size: 0x4, def value: None
 int32_t  A;

/// @brief Field B, offset: 0x4, size: 0x4, def value: None
 int32_t  B;

/// @brief Field C, offset: 0x8, size: 0x4, def value: None
 int32_t  C;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__Triangle, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTriangleMesh__Triangle, A) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTriangleMesh__Triangle, B) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTriangleMesh__Triangle, C) == 0x8, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FlipTriangleWindingJob
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTriangleMesh::FlipTriangleWindingJob
struct CORDL_TYPE __OVRTriangleMesh__FlipTriangleWindingJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x3f11500, size 0x1c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr __OVRTriangleMesh__FlipTriangleWindingJob() ;

// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>", modifiers: "", def_value: None }]
constexpr __OVRTriangleMesh__FlipTriangleWindingJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  Triangles) noexcept;

/// @brief Field Triangles, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRTriangleMesh__Triangle>  Triangles;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob, Triangles) == 0x0, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NegateXJob
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTriangleMesh::NegateXJob
struct CORDL_TYPE __OVRTriangleMesh__NegateXJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x3f1151c, size 0x1c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr __OVRTriangleMesh__NegateXJob() ;

// Ctor Parameters [CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }]
constexpr __OVRTriangleMesh__NegateXJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions) noexcept;

/// @brief Field Positions, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Positions;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTriangleMesh__NegateXJob, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTriangleMesh__NegateXJob, Positions) == 0x0, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRTriangleMesh
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTriangleMesh
struct CORDL_TYPE OVRTriangleMesh {
public:
// Declarations
using FlipTriangleWindingJob = ::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob;

using GetMeshJob = ::GlobalNamespace::__OVRTriangleMesh__GetMeshJob;

using NegateXJob = ::GlobalNamespace::__OVRTriangleMesh__NegateXJob;

using Triangle = ::GlobalNamespace::__OVRTriangleMesh__Triangle;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRTriangleMesh__get_Handle)) uint64_t  IOVRAnchorComponent_OVRTriangleMesh__Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRTriangleMesh__get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  IOVRAnchorComponent_OVRTriangleMesh__Type;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field Null, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::GlobalNamespace::OVRTriangleMesh  Null;

 __declspec(property(get=get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType  Type;

/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr operator  ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*() ;

/// @brief Method Equals, addr 0x3f10e74, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x3f10d30, size 0x68, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRTriangleMesh  other) ;

/// @brief Method GetHashCode, addr 0x3f10f04, size 0x98, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor, addr 0x3f10b04, size 0x30, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRTriangleMesh IOVRAnchorComponent_OVRTriangleMesh__FromAnchor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync, addr 0x3f10ce4, size 0x4c, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync(bool  enabled, double_t  timeout) ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Handle, addr 0x3f10ab0, size 0x54, virtual true, abstract: false, final true
inline uint64_t IOVRAnchorComponent_OVRTriangleMesh__get_Handle() ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Type, addr 0x3f10a50, size 0x54, virtual true, abstract: false, final true
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRTriangleMesh__get_Type() ;

/// @brief Method ScheduleGetMeshJob, addr 0x3f112a4, size 0x184, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleGetMeshJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Jobs::JobHandle  dependencies) ;

/// @brief Method ToString, addr 0x3f10f9c, size 0xa8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetCounts, addr 0x3f1104c, size 0x98, virtual false, abstract: false, final false
inline bool TryGetCounts(ByRef<int32_t>  vertexCount, ByRef<int32_t>  triangleCount) ;

/// @brief Method TryGetMesh, addr 0x3f11194, size 0x110, virtual false, abstract: false, final false
inline bool TryGetMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method TryGetMeshRawUntransformed, addr 0x3f110e4, size 0xb0, virtual false, abstract: false, final false
inline bool TryGetMeshRawUntransformed(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method .ctor, addr 0x3f10b34, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRAnchor  anchor) ;

static inline ::GlobalNamespace::OVRTriangleMesh getStaticF_Null() ;

/// @brief Method get_Handle, addr 0x3f11044, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Handle() ;

/// @brief Method get_IsEnabled, addr 0x3f10bf4, size 0xf0, virtual true, abstract: false, final true
inline bool get_IsEnabled() ;

/// @brief Method get_IsNull, addr 0x3f10b98, size 0x5c, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_Type, addr 0x3f10aa4, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type() ;

/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRTriangleMesh_() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>* i___System__IEquatable_1___GlobalNamespace__OVRTriangleMesh_() ;

/// @brief Method op_Equality, addr 0x3f10d98, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRTriangleMesh  lhs, ::GlobalNamespace::OVRTriangleMesh  rhs) ;

/// @brief Method op_Inequality, addr 0x3f10e04, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRTriangleMesh  lhs, ::GlobalNamespace::OVRTriangleMesh  rhs) ;

static inline void setStaticF_Null(::GlobalNamespace::OVRTriangleMesh  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTriangleMesh() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr OVRTriangleMesh(uint64_t  _Handle_k__BackingField) noexcept;

/// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _Handle_k__BackingField;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTriangleMesh, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh, "", "OVRTriangleMesh");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob, "", "OVRTriangleMesh/FlipTriangleWindingJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__GetMeshJob, "", "OVRTriangleMesh/GetMeshJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__NegateXJob, "", "OVRTriangleMesh/NegateXJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTriangleMesh__Triangle, "", "OVRTriangleMesh/Triangle");
