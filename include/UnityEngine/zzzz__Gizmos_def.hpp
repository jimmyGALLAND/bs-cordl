#pragma once
// IWYU pragma private; include "UnityEngine/Gizmos.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Gizmos)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Gizmos;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Gizmos);
// Type: UnityEngine::Gizmos
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Gizmos*
class CORDL_TYPE Gizmos : public ::System::Object {
public:
// Declarations
/// @brief Method DrawCube, addr 0x47e06e4, size 0x50, virtual false, abstract: false, final false
static inline void DrawCube(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size) ;

/// @brief Method DrawCube_Injected, addr 0x47e0734, size 0x44, virtual false, abstract: false, final false
static inline void DrawCube_Injected(ByRef<::UnityEngine::Vector3>  center, ByRef<::UnityEngine::Vector3>  size) ;

/// @brief Method DrawLine, addr 0x47e047c, size 0x50, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to) ;

/// @brief Method DrawLine_Injected, addr 0x47e04cc, size 0x44, virtual false, abstract: false, final false
static inline void DrawLine_Injected(ByRef<::UnityEngine::Vector3>  from, ByRef<::UnityEngine::Vector3>  to) ;

/// @brief Method DrawRay, addr 0x47e0870, size 0x10, virtual false, abstract: false, final false
static inline void DrawRay(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  direction) ;

/// @brief Method DrawSphere, addr 0x47e05b0, size 0x54, virtual false, abstract: false, final false
static inline void DrawSphere(::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method DrawSphere_Injected, addr 0x47e0604, size 0x4c, virtual false, abstract: false, final false
static inline void DrawSphere_Injected(ByRef<::UnityEngine::Vector3>  center, float_t  radius) ;

/// @brief Method DrawWireCube, addr 0x47e0650, size 0x50, virtual false, abstract: false, final false
static inline void DrawWireCube(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size) ;

/// @brief Method DrawWireCube_Injected, addr 0x47e06a0, size 0x44, virtual false, abstract: false, final false
static inline void DrawWireCube_Injected(ByRef<::UnityEngine::Vector3>  center, ByRef<::UnityEngine::Vector3>  size) ;

/// @brief Method DrawWireSphere, addr 0x47e0510, size 0x54, virtual false, abstract: false, final false
static inline void DrawWireSphere(::UnityEngine::Vector3  center, float_t  radius) ;

/// @brief Method DrawWireSphere_Injected, addr 0x47e0564, size 0x4c, virtual false, abstract: false, final false
static inline void DrawWireSphere_Injected(ByRef<::UnityEngine::Vector3>  center, float_t  radius) ;

/// @brief Method set_color, addr 0x47e0778, size 0x44, virtual false, abstract: false, final false
static inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0x47e07bc, size 0x3c, virtual false, abstract: false, final false
static inline void set_color_Injected(ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_matrix, addr 0x47e07f8, size 0x3c, virtual false, abstract: false, final false
static inline void set_matrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method set_matrix_Injected, addr 0x47e0834, size 0x3c, virtual false, abstract: false, final false
static inline void set_matrix_Injected(ByRef<::UnityEngine::Matrix4x4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gizmos(Gizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gizmos(Gizmos const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Gizmos, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Gizmos);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
