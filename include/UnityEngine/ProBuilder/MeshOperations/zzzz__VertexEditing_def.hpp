#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/VertexEditing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexEditing)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class VertexEditing;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::VertexEditing);
// Type: UnityEngine.ProBuilder.MeshOperations::VertexEditing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::VertexEditing*
class CORDL_TYPE VertexEditing : public ::System::Object {
public:
// Declarations
/// @brief Method AlignEdgeWithDirection, addr 0x46f99dc, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Edge AlignEdgeWithDirection(::UnityEngine::ProBuilder::EdgeLookup  edge, int32_t  commonIndex) ;

/// @brief Method ExplodeVertex, addr 0x46f8e50, size 0xb8c, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::FaceRebuildData* ExplodeVertex(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*  vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*,int32_t>>*  edgeAndCommonIndex, float_t  distance, ByRef<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*>  appendedVertices) ;

/// @brief Method MergeVertices, addr 0x46f79b4, size 0x310, virtual false, abstract: false, final false
static inline int32_t MergeVertices(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::ArrayW<int32_t,::Array<int32_t>*>  indexes, bool  collapseToFirst) ;

/// @brief Method SplitVertices, addr 0x46f7cc4, size 0x88, virtual false, abstract: false, final false
static inline void SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Edge  edge) ;

/// @brief Method SplitVertices, addr 0x46f7d4c, size 0x410, virtual false, abstract: false, final false
static inline void SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>*  vertices) ;

/// @brief Method WeldVertices, addr 0x46f815c, size 0xcf4, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> WeldVertices(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>*  indexes, float_t  neighborRadius) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VertexEditing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VertexEditing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VertexEditing(VertexEditing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VertexEditing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VertexEditing(VertexEditing const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::VertexEditing, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::VertexEditing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::VertexEditing*, "UnityEngine.ProBuilder.MeshOperations", "VertexEditing");
