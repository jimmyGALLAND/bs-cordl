#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuilder)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__VertexClipEdge;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__ClipCounts;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace GlobalNamespace {
class __MeshBuilder__AllocMeshData__Allocator;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__VertexClipEdge;
}
namespace GlobalNamespace {
class __MeshBuilder__AllocMeshData__Allocator;
}
namespace UnityEngine::UIElements::UIR {
class MeshBuilder;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__ClipCounts;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge);
MARK_REF_PTR_T(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::MeshBuilder);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts);
// Type: ::Allocator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7403))
// CS Name: ::MeshBuilder::AllocMeshData::Allocator*
class CORDL_TYPE __MeshBuilder__AllocMeshData__Allocator : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2e99de0 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2e99ea4 size 0x14 virtual true final false
  inline ::UnityEngine::UIElements::MeshWriteData* Invoke(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData);

  // Ctor Parameters [CppParam { name: "", ty: "__MeshBuilder__AllocMeshData__Allocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshBuilder__AllocMeshData__Allocator(__MeshBuilder__AllocMeshData__Allocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshBuilder__AllocMeshData__Allocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshBuilder__AllocMeshData__Allocator(__MeshBuilder__AllocMeshData__Allocator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__AllocMeshData__Allocator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AllocMeshData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7337)), TypeDefinitionIndex(TypeDefinitionIndex(7339)), TypeDefinitionIndex(TypeDefinitionIndex(7374))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7404))
// CS Name: ::MeshBuilder::AllocMeshData
struct CORDL_TYPE __MeshBuilder__AllocMeshData {
public:
  // Declarations
  using Allocator = ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator;

  /// @brief Method Allocate addr 0x2e94d78 size 0x28 virtual false final false
  inline ::UnityEngine::UIElements::MeshWriteData* Allocate(uint32_t vertexCount, uint32_t indexCount);

  // Ctor Parameters [CppParam { name: "alloc", ty: "::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*", modifiers: "", def_value: None }, CppParam { name: "texture", ty:
  // "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "svgTexture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name:
  // "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers: "",
  // def_value: None }, CppParam { name: "colorAlloc", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }]
  constexpr __MeshBuilder__AllocMeshData(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* alloc, ::UnityEngine::Texture* texture, ::UnityEngine::UIElements::TextureId svgTexture,
                                         ::UnityEngine::Material* material, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags,
                                         ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__AllocMeshData();

  /// @brief Field alloc, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* alloc;

  /// @brief Field texture, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Texture* texture;

  /// @brief Field svgTexture, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId svgTexture;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Material* material;

  /// @brief Field flags, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags;

  /// @brief Field colorAlloc, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc colorAlloc;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::ClipCounts
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7405))
// CS Name: ::MeshBuilder::ClipCounts
struct CORDL_TYPE __MeshBuilder__ClipCounts {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "firstClippedIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstDegenerateIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "lastClippedIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clippedTriangles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "addedTriangles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "degenerateTriangles", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MeshBuilder__ClipCounts(int32_t firstClippedIndex, int32_t firstDegenerateIndex, int32_t lastClippedIndex, int32_t clippedTriangles, int32_t addedTriangles,
                                      int32_t degenerateTriangles) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__ClipCounts();

  /// @brief Field firstClippedIndex, offset: 0x0, size: 0x4, def value: None
  int32_t firstClippedIndex;

  /// @brief Field firstDegenerateIndex, offset: 0x4, size: 0x4, def value: None
  int32_t firstDegenerateIndex;

  /// @brief Field lastClippedIndex, offset: 0x8, size: 0x4, def value: None
  int32_t lastClippedIndex;

  /// @brief Field clippedTriangles, offset: 0xc, size: 0x4, def value: None
  int32_t clippedTriangles;

  /// @brief Field addedTriangles, offset: 0x10, size: 0x4, def value: None
  int32_t addedTriangles;

  /// @brief Field degenerateTriangles, offset: 0x14, size: 0x4, def value: None
  int32_t degenerateTriangles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::VertexClipEdge
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7406))
// CS Name: ::MeshBuilder::VertexClipEdge
struct CORDL_TYPE __MeshBuilder__VertexClipEdge {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MeshBuilder__VertexClipEdge_Unwrapped
  enum struct ____MeshBuilder__VertexClipEdge_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Top = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x4),
    __E_Bottom = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MeshBuilder__VertexClipEdge_Unwrapped() const noexcept {
    return static_cast<____MeshBuilder__VertexClipEdge_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MeshBuilder__VertexClipEdge(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshBuilder__VertexClipEdge();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const None;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const Left;

  /// @brief Field Top value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const Top;

  /// @brief Field Right value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const Right;

  /// @brief Field Bottom value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge const Bottom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::MeshBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7407))
// CS Name: ::UnityEngine.UIElements.UIR::MeshBuilder*
class CORDL_TYPE MeshBuilder : public ::System::Object {
public:
  // Declarations
  using VertexClipEdge = ::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge;

  using ClipCounts = ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts;

  using AllocMeshData = ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData;

  /// @brief Field s_VectorGraphics9Slice, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphics9Slice, put = setStaticF_s_VectorGraphics9Slice))::Unity::Profiling::ProfilerMarker s_VectorGraphics9Slice;

  /// @brief Field s_VectorGraphicsSplitTriangle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsSplitTriangle, put = setStaticF_s_VectorGraphicsSplitTriangle))::Unity::Profiling::ProfilerMarker s_VectorGraphicsSplitTriangle;

  /// @brief Field s_VectorGraphicsScaleTriangle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsScaleTriangle, put = setStaticF_s_VectorGraphicsScaleTriangle))::Unity::Profiling::ProfilerMarker s_VectorGraphicsScaleTriangle;

  /// @brief Field s_VectorGraphicsStretch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_VectorGraphicsStretch, put = setStaticF_s_VectorGraphicsStretch))::Unity::Profiling::ProfilerMarker s_VectorGraphicsStretch;

  /// @brief Field s_MaxTextMeshVertices, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_MaxTextMeshVertices, put = setStaticF_s_MaxTextMeshVertices)) int32_t s_MaxTextMeshVertices;

  /// @brief Field slicedQuadIndices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_slicedQuadIndices, put = setStaticF_slicedQuadIndices))::ArrayW<uint16_t, ::Array<uint16_t>*> slicedQuadIndices;

  /// @brief Field k_TexCoordSlicesX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TexCoordSlicesX, put = setStaticF_k_TexCoordSlicesX))::ArrayW<float_t, ::Array<float_t>*> k_TexCoordSlicesX;

  /// @brief Field k_TexCoordSlicesY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TexCoordSlicesY, put = setStaticF_k_TexCoordSlicesY))::ArrayW<float_t, ::Array<float_t>*> k_TexCoordSlicesY;

  /// @brief Field k_PositionSlicesX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_PositionSlicesX, put = setStaticF_k_PositionSlicesX))::ArrayW<float_t, ::Array<float_t>*> k_PositionSlicesX;

  /// @brief Field k_PositionSlicesY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_PositionSlicesY, put = setStaticF_k_PositionSlicesY))::ArrayW<float_t, ::Array<float_t>*> k_PositionSlicesY;

  /// @brief Field s_AllClipEdges, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_AllClipEdges,
      put = setStaticF_s_AllClipEdges))::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*> s_AllClipEdges;

  static inline void setStaticF_s_VectorGraphics9Slice(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphics9Slice();

  static inline void setStaticF_s_VectorGraphicsSplitTriangle(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsSplitTriangle();

  static inline void setStaticF_s_VectorGraphicsScaleTriangle(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsScaleTriangle();

  static inline void setStaticF_s_VectorGraphicsStretch(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_VectorGraphicsStretch();

  static inline void setStaticF_s_MaxTextMeshVertices(int32_t value);

  static inline int32_t getStaticF_s_MaxTextMeshVertices();

  static inline void setStaticF_slicedQuadIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  static inline ::ArrayW<uint16_t, ::Array<uint16_t>*> getStaticF_slicedQuadIndices();

  static inline void setStaticF_k_TexCoordSlicesX(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_TexCoordSlicesX();

  static inline void setStaticF_k_TexCoordSlicesY(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_TexCoordSlicesY();

  static inline void setStaticF_k_PositionSlicesX(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_PositionSlicesX();

  static inline void setStaticF_k_PositionSlicesY(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_k_PositionSlicesY();

  static inline void setStaticF_s_AllClipEdges(::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*> value);

  static inline ::ArrayW<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, ::Array<::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge>*> getStaticF_s_AllClipEdges();

  /// @brief Method MakeBorder addr 0x2e91e94 size 0xc0 virtual false final false
  static inline void MakeBorder(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams borderParams, float_t posZ,
                                ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method MakeSolidRect addr 0x2e921d0 size 0x154 virtual false final false
  static inline void MakeSolidRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                   ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method MakeTexturedRect addr 0x2e92db8 size 0x314 virtual false final false
  static inline void MakeTexturedRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ,
                                      ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ::UnityEngine::UIElements::ColorPage colorPage);

  /// @brief Method ConvertTextVertexToUIRVertex addr 0x2e947cc size 0x110 virtual false final false
  static inline ::UnityEngine::UIElements::Vertex ConvertTextVertexToUIRVertex(::UnityEngine::TextCore::Text::MeshInfo info, int32_t index, ::UnityEngine::Vector2 offset,
                                                                               ::UnityEngine::UIElements::UIR::VertexFlags flags, bool isDynamicColor);

  /// @brief Method ConvertTextVertexToUIRVertex addr 0x2e948dc size 0x38 virtual false final false
  static inline ::UnityEngine::UIElements::Vertex ConvertTextVertexToUIRVertex(::UnityEngine::UIElements::TextVertex textVertex, ::UnityEngine::Vector2 offset);

  /// @brief Method LimitTextVertices addr 0x2e94914 size 0x130 virtual false final false
  static inline int32_t LimitTextVertices(int32_t vertexCount, bool logTruncation);

  /// @brief Method MakeText addr 0x2e94a44 size 0x334 virtual false final false
  static inline void MakeText(::UnityEngine::TextCore::Text::MeshInfo meshInfo, ::UnityEngine::Vector2 offset, ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc,
                              ::UnityEngine::UIElements::UIR::VertexFlags flags, bool isDynamicColor);

  /// @brief Method MakeText addr 0x2e94da0 size 0x2c4 virtual false final false
  static inline void MakeText(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> uiVertices, ::UnityEngine::Vector2 offset,
                              ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method UpdateText addr 0x2e95064 size 0x1b8 virtual false final false
  static inline void UpdateText(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::TextVertex> uiVertices, ::UnityEngine::Vector2 offset, ::UnityEngine::Matrix4x4 transform,
                                ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids, ::UnityEngine::Color32 flags, ::UnityEngine::Color32 opacityPageSettingIndex,
                                ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices);

  /// @brief Method MakeQuad addr 0x2e930cc size 0xd58 virtual false final false
  static inline void MakeQuad(::UnityEngine::Rect rcPosition, ::UnityEngine::Rect rcTexCoord, ::UnityEngine::Color color, float_t posZ,
                              ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ::UnityEngine::UIElements::ColorPage colorPage);

  /// @brief Method MakeSlicedQuad addr 0x2e93e24 size 0x9a8 virtual false final false
  static inline void MakeSlicedQuad(ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams> rectParams, float_t posZ,
                                    ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method MakeVectorGraphics addr 0x2e9521c size 0x3b0 virtual false final false
  static inline void MakeVectorGraphics(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, int32_t settingIndexOffset,
                                        ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount);

  /// @brief Method MakeVectorGraphicsStretchBackground addr 0x2e955cc size 0xfec virtual false final false
  static inline void MakeVectorGraphicsStretchBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                         ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight, ::UnityEngine::Rect targetRect,
                                                         ::UnityEngine::Rect sourceUV, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color tint, int32_t settingIndexOffset,
                                                         ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc, ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount);

  /// @brief Method SplitTriangle addr 0x2e9774c size 0xc48 virtual false final false
  static inline void SplitTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vertices, ::cordl_internals::Ptr<uint16_t> indices, ByRef<int32_t> vertexCount, int32_t indexToProcess,
                                   ByRef<int32_t> indexCount, float_t svgWidth, float_t svgHeight, ::UnityEngine::Vector4 sliceLTRB, int32_t sliceIndex);

  /// @brief Method ScaleSplittedTriangles addr 0x2e98394 size 0x284 virtual false final false
  static inline void ScaleSplittedTriangles(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vertices, int32_t vertexCount, float_t svgWidth, float_t svgHeight,
                                            ::UnityEngine::Rect targetRect, ::UnityEngine::Vector4 sliceLTRB);

  /// @brief Method MakeVectorGraphics9SliceBackground addr 0x2e965b8 size 0xbac virtual false final false
  static inline void MakeVectorGraphics9SliceBackground(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices,
                                                        ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight, ::UnityEngine::Rect targetRect,
                                                        ::UnityEngine::Vector4 sliceLTRB, bool stretch, ::UnityEngine::Color tint, int32_t settingIndexOffset,
                                                        ::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData meshAlloc);

  /// @brief Method UpperBoundApproximateRectClippingResults addr 0x2e97164 size 0x1ac virtual false final false
  static inline ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts
  UpperBoundApproximateRectClippingResults(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> vertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> indices,
                                           ::UnityEngine::Vector4 clipRectMinMax);

  /// @brief Method RectClip addr 0x2e97310 size 0x43c virtual false final false
  static inline void RectClip(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> vertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> indices,
                              ::UnityEngine::Vector4 clipRectMinMax, ::UnityEngine::UIElements::MeshWriteData* mwd, ::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts cc,
                              ByRef<int32_t> newVertexCount);

  /// @brief Method RectClipTriangle addr 0x2e98618 size 0xb5c virtual false final false
  static inline void RectClipTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, ::cordl_internals::Ptr<uint16_t> it, ::UnityEngine::Vector4 clipRectMinMax,
                                      ::UnityEngine::UIElements::MeshWriteData* mwd, ByRef<uint16_t> nextNewVertex);

  /// @brief Method GetVertexBaryCentricCoordinates addr 0x2e99174 size 0xbc virtual false final false
  static inline ::UnityEngine::Vector3 GetVertexBaryCentricCoordinates(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, float_t x, float_t y);

  /// @brief Method InterpolateVertexInTriangle addr 0x2e99230 size 0x47c virtual false final false
  static inline ::UnityEngine::UIElements::Vertex InterpolateVertexInTriangle(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, float_t x, float_t y, ::UnityEngine::Vector3 uvw);

  /// @brief Method InterpolateVertexInTriangleEdge addr 0x2e99748 size 0x418 virtual false final false
  static inline ::UnityEngine::UIElements::Vertex InterpolateVertexInTriangleEdge(::cordl_internals::Ptr<::UnityEngine::UIElements::Vertex> vt, int32_t e0, int32_t e1, float_t t);

  /// @brief Method IntersectSegments addr 0x2e996ac size 0x9c virtual false final false
  static inline float_t IntersectSegments(float_t ax, float_t ay, float_t bx, float_t by, float_t cx, float_t cy, float_t dx, float_t dy);

  // Ctor Parameters [CppParam { name: "", ty: "MeshBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshBuilder(MeshBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshBuilder(MeshBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshBuilder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::MeshBuilder, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__MeshBuilder__VertexClipEdge, "UnityEngine.UIElements.UIR", "MeshBuilder/VertexClipEdge");
NEED_NO_BOX(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData/Allocator");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshBuilder*, "UnityEngine.UIElements.UIR", "MeshBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__MeshBuilder__ClipCounts, "UnityEngine.UIElements.UIR", "MeshBuilder/ClipCounts");
