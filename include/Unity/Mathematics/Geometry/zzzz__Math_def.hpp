#pragma once
// IWYU pragma private; include "Unity/Mathematics/Geometry/Math.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Math)
namespace Unity::Mathematics::Geometry {
struct MinMaxAABB;
}
namespace Unity::Mathematics {
struct RigidTransform;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4x4;
}
// Forward declare root types
namespace Unity::Mathematics::Geometry {
class Math;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::Geometry::Math);
// Type: Unity.Mathematics.Geometry::Math
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics::Geometry {
// Is value type: false
// CS Name: ::Unity.Mathematics.Geometry::Math*
class CORDL_TYPE Math : public ::System::Object {
public:
// Declarations
/// @brief Method Transform, addr 0x45ddea4, size 0x2e8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::Geometry::MinMaxAABB Transform(::Unity::Mathematics::RigidTransform  transform, ::Unity::Mathematics::Geometry::MinMaxAABB  aabb) ;

/// @brief Method Transform, addr 0x45de244, size 0x194, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::Geometry::MinMaxAABB Transform(::Unity::Mathematics::float3x3  transform, ::Unity::Mathematics::Geometry::MinMaxAABB  aabb) ;

/// @brief Method Transform, addr 0x45de18c, size 0xb8, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::Geometry::MinMaxAABB Transform(::Unity::Mathematics::float4x4  transform, ::Unity::Mathematics::Geometry::MinMaxAABB  aabb) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Math() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Math(Math && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Math(Math const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::Geometry::Math, 0x10>, "Size mismatch!");

} // namespace end def Unity::Mathematics::Geometry
NEED_NO_BOX(::Unity::Mathematics::Geometry::Math);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::Geometry::Math*, "Unity.Mathematics.Geometry", "Math");
