#pragma once
// IWYU pragma private; include "UnityEngine/MeshFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(MeshFilter)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MeshFilter);
// Type: UnityEngine::MeshFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::MeshFilter*
class CORDL_TYPE MeshFilter : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_mesh, put=set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

 __declspec(property(get=get_sharedMesh, put=set_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

/// @brief Method DontStripMeshFilter, addr 0x47f36ac, size 0x4, virtual false, abstract: false, final false
inline void DontStripMeshFilter() ;

static inline ::UnityEngine::MeshFilter* New_ctor() ;

/// @brief Method .ctor, addr 0x47f37b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_mesh, addr 0x47f3730, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_mesh() ;

/// @brief Method get_sharedMesh, addr 0x47f36b0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh() ;

/// @brief Method set_mesh, addr 0x47f376c, size 0x44, virtual false, abstract: false, final false
inline void set_mesh(::UnityEngine::Mesh*  value) ;

/// @brief Method set_sharedMesh, addr 0x47f36ec, size 0x44, virtual false, abstract: false, final false
inline void set_sharedMesh(::UnityEngine::Mesh*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshFilter(MeshFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshFilter(MeshFilter const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MeshFilter, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshFilter*, "UnityEngine", "MeshFilter");
