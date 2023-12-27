#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceTopology)
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __SurfaceTopology____c;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
namespace UnityEngine::ProBuilder {
struct WindingOrder;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class SurfaceTopology;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class __SurfaceTopology____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12281))
// CS Name: ::SurfaceTopology::<>c*
class CORDL_TYPE __SurfaceTopology____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* __9__0_0;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* __9__3_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c* value);

  static inline ::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c* getStaticF___9();

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* getStaticF___9__0_0();

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value);

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* getStaticF___9__3_0();

  static inline ::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c* New_ctor();

  /// @brief Method .ctor addr 0x2bc0fe8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ToTriangles>b__0_0 addr 0x2bc0ff0 size 0x18 virtual false final false
  inline ::UnityEngine::ProBuilder::Face* _ToTriangles_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* x);

  /// @brief Method <GetWindingOrder>b__3_0 addr 0x2bc1008 size 0x1c virtual false final false
  inline ::UnityEngine::Vector3 _GetWindingOrder_b__3_0(::UnityEngine::ProBuilder::Vertex* x);

  // Ctor Parameters [CppParam { name: "", ty: "__SurfaceTopology____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SurfaceTopology____c(__SurfaceTopology____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SurfaceTopology____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SurfaceTopology____c(__SurfaceTopology____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SurfaceTopology____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::SurfaceTopology
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12282))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::SurfaceTopology*
class CORDL_TYPE SurfaceTopology : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c;

  /// @brief Method ToTriangles addr 0x2bbf1f0 size 0x5bc virtual false final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::Face*, ::Array<::UnityEngine::ProBuilder::Face*>*> ToTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                   ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method BreakFaceIntoTris addr 0x2bbf7ac size 0x61c virtual false final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*
  BreakFaceIntoTris(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method GetWindingOrder addr 0x2bbfdc8 size 0x38 virtual false final false
  static inline ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method GetWindingOrder addr 0x2bc0084 size 0x1a0 virtual false final false
  static inline ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                        ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method GetWindingOrder addr 0x2bbfe00 size 0x284 virtual false final false
  static inline ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points);

  /// @brief Method FlipEdge addr 0x2bc0224 size 0x368 virtual false final false
  static inline bool FlipEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method ConformNormals addr 0x2bc058c size 0x51c virtual false final false
  static inline ::UnityEngine::ProBuilder::ActionResult* ConformNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                        ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);

  /// @brief Method GetWindingFlags addr 0x2bc0aa8 size 0xec virtual false final false
  static inline void GetWindingFlags(::UnityEngine::ProBuilder::WingedEdge* edge, bool flag, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, bool>* flags);

  /// @brief Method ConformOppositeNormal addr 0x2bc0cf0 size 0x120 virtual false final false
  static inline ::UnityEngine::ProBuilder::ActionResult* ConformOppositeNormal(::UnityEngine::ProBuilder::WingedEdge* source);

  /// @brief Method GetCommonEdgeInWindingOrder addr 0x2bc0b94 size 0x15c virtual false final false
  static inline ::UnityEngine::ProBuilder::Edge GetCommonEdgeInWindingOrder(::UnityEngine::ProBuilder::WingedEdge* wing);

  /// @brief Method MatchNormal addr 0x2bc0e10 size 0x174 virtual false final false
  static inline void MatchNormal(::UnityEngine::ProBuilder::Face* source, ::UnityEngine::ProBuilder::Face* target, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  // Ctor Parameters [CppParam { name: "", ty: "SurfaceTopology", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SurfaceTopology(SurfaceTopology&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SurfaceTopology", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SurfaceTopology(SurfaceTopology const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SurfaceTopology();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*, "UnityEngine.ProBuilder.MeshOperations", "SurfaceTopology");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::__SurfaceTopology____c*, "UnityEngine.ProBuilder.MeshOperations", "SurfaceTopology/<>c");
