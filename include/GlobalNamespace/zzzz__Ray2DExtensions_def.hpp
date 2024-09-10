#pragma once
// IWYU pragma private; include "GlobalNamespace/Ray2DExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Ray2DExtensions)
namespace UnityEngine {
struct Ray2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class Ray2DExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Ray2DExtensions);
// Type: ::Ray2DExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Ray2DExtensions*
class CORDL_TYPE Ray2DExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method CircleIntersections, addr 0x22693b4, size 0x120, virtual false, abstract: false, final false
static inline int32_t CircleIntersections(::UnityEngine::Ray2D  ray, ::UnityEngine::Vector2  circleCenter, float_t  radius, ::ArrayW<float_t,::Array<float_t>*>  distances) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ray2DExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ray2DExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ray2DExtensions(Ray2DExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ray2DExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ray2DExtensions(Ray2DExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Ray2DExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Ray2DExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Ray2DExtensions*, "", "Ray2DExtensions");
