#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mesh)
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine {
struct CombineInstance;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct __Mesh__MeshDataArray;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct __Mesh__MeshData;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct BoneWeight1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace System {
class Array;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine {
struct __GraphicsBuffer__Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Bounds;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct __Mesh__MeshData;
}
namespace UnityEngine {
struct __Mesh__MeshDataArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Mesh);
MARK_VAL_T(::UnityEngine::__Mesh__MeshData);
MARK_VAL_T(::UnityEngine::__Mesh__MeshDataArray);
// Type: ::MeshDataArray
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10068))
// CS Name: ::Mesh::MeshDataArray
struct CORDL_TYPE __Mesh__MeshDataArray {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Item))::UnityEngine::__Mesh__MeshData Item[];

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method get_Length addr 0x2cace50 size 0x8 virtual false final false
  inline int32_t get_Length();

  /// @brief Method get_Item addr 0x2cace58 size 0xc virtual false final false
  inline ::UnityEngine::__Mesh__MeshData get_Item(int32_t index);

  /// @brief Method Dispose addr 0x2cace64 size 0x90 virtual true final true
  inline void Dispose();

  /// @brief Method ApplyToMeshAndDispose addr 0x2ca9790 size 0x124 virtual false final false
  inline void ApplyToMeshAndDispose(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshesAndDispose addr 0x2ca9a14 size 0x244 virtual false final false
  inline void ApplyToMeshesAndDispose(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method .ctor addr 0x2ca8d7c size 0x248 virtual false final false
  inline void _ctor(::UnityEngine::Mesh* mesh, bool checkReadWrite);

  /// @brief Method .ctor addr 0x2ca9060 size 0x338 virtual false final false
  inline void _ctor(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, int32_t meshesCount, bool checkReadWrite);

  /// @brief Method .ctor addr 0x2ca94a0 size 0x168 virtual false final false
  inline void _ctor(int32_t meshesCount);

  /// @brief Method AcquireReadOnlyMeshData addr 0x2cacfe8 size 0x44 virtual false final false
  static inline void AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh, ::cordl_internals::Ptr<void*> datas);

  /// @brief Method AcquireReadOnlyMeshDatas addr 0x2cad02c size 0x54 virtual false final false
  static inline void AcquireReadOnlyMeshDatas(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::cordl_internals::Ptr<void*> datas, int32_t count);

  /// @brief Method ReleaseMeshDatas addr 0x2cacef4 size 0x44 virtual false final false
  static inline void ReleaseMeshDatas(::cordl_internals::Ptr<void*> datas, int32_t count);

  /// @brief Method CreateNewMeshDatas addr 0x2cad080 size 0x44 virtual false final false
  static inline void CreateNewMeshDatas(::cordl_internals::Ptr<void*> datas, int32_t count);

  /// @brief Method ApplyToMeshesImpl addr 0x2cacf8c size 0x5c virtual false final false
  static inline void ApplyToMeshesImpl(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::cordl_internals::Ptr<void*> datas, int32_t count,
                                       ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyToMeshImpl addr 0x2cacf38 size 0x54 virtual false final false
  static inline void ApplyToMeshImpl(::UnityEngine::Mesh* mesh, void* data, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  // Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::cordl_internals::Ptr<void*>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Mesh__MeshDataArray(::cordl_internals::Ptr<void*> m_Ptrs, int32_t m_Length) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Mesh__MeshDataArray();

  /// @brief Field m_Ptrs, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void*> m_Ptrs;

  /// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
  int32_t m_Length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Mesh__MeshDataArray, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::MeshData
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10069))
// CS Name: ::Mesh::MeshData
struct CORDL_TYPE __Mesh__MeshData {
public:
  // Declarations
  __declspec(property(get = get_vertexBufferCount)) int32_t vertexBufferCount;

  __declspec(property(put = set_subMeshCount)) int32_t subMeshCount;

  /// @brief Method get_vertexBufferCount addr 0x2cad0c4 size 0x3c virtual false final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method GetVertexData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetVertexData(int32_t stream);

  /// @brief Method SetVertexBufferParams addr 0x2cad13c size 0x54 virtual false final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetIndexBufferParams addr 0x2cad1e4 size 0x54 virtual false final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method GetIndexData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetIndexData();

  /// @brief Method set_subMeshCount addr 0x2cad28c size 0x44 virtual false final false
  inline void set_subMeshCount(int32_t value);

  /// @brief Method SetSubMesh addr 0x2cad314 size 0x74 virtual false final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetVertexBufferCount addr 0x2cad100 size 0x3c virtual false final false
  static inline int32_t GetVertexBufferCount(void* self);

  /// @brief Method GetVertexDataPtr addr 0x2cad3e4 size 0x44 virtual false final false
  static inline void* GetVertexDataPtr(void* self, int32_t stream);

  /// @brief Method GetVertexDataSize addr 0x2cad428 size 0x44 virtual false final false
  static inline uint64_t GetVertexDataSize(void* self, int32_t stream);

  /// @brief Method GetIndexDataPtr addr 0x2cad46c size 0x3c virtual false final false
  static inline void* GetIndexDataPtr(void* self);

  /// @brief Method GetIndexDataSize addr 0x2cad4a8 size 0x3c virtual false final false
  static inline uint64_t GetIndexDataSize(void* self);

  /// @brief Method SetVertexBufferParamsFromArray addr 0x2cad190 size 0x54 virtual false final false
  static inline void SetVertexBufferParamsFromArray(void* self, int32_t vertexCount,
                                                    ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetIndexBufferParamsImpl addr 0x2cad238 size 0x54 virtual false final false
  static inline void SetIndexBufferParamsImpl(void* self, int32_t indexCount, ::UnityEngine::Rendering::IndexFormat indexFormat);

  /// @brief Method SetSubMeshCount addr 0x2cad2d0 size 0x44 virtual false final false
  static inline void SetSubMeshCount(void* self, int32_t count);

  /// @brief Method SetSubMeshImpl addr 0x2cad388 size 0x5c virtual false final false
  static inline void SetSubMeshImpl(void* self, int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshImpl_Injected addr 0x2cad4e4 size 0x5c virtual false final false
  static inline void SetSubMeshImpl_Injected(void* self, int32_t index, ByRef<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: None }]
  constexpr __Mesh__MeshData(void* m_Ptr) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Mesh__MeshData();

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  void* m_Ptr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Mesh__MeshData, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Mesh
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10070))
// CS Name: ::UnityEngine::Mesh*
class CORDL_TYPE Mesh : public ::UnityEngine::Object {
public:
  // Declarations
  using MeshData = ::UnityEngine::__Mesh__MeshData;

  using MeshDataArray = ::UnityEngine::__Mesh__MeshDataArray;

  __declspec(property(get = get_indexFormat, put = set_indexFormat))::UnityEngine::Rendering::IndexFormat indexFormat;

  __declspec(property(get = get_vertexBufferCount)) int32_t vertexBufferCount;

  __declspec(property(get = get_vertexBufferTarget, put = set_vertexBufferTarget))::UnityEngine::__GraphicsBuffer__Target vertexBufferTarget;

  __declspec(property(get = get_indexBufferTarget, put = set_indexBufferTarget))::UnityEngine::__GraphicsBuffer__Target indexBufferTarget;

  __declspec(property(get = get_blendShapeCount)) int32_t blendShapeCount;

  __declspec(property(get = get_bindposes, put = set_bindposes))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> bindposes;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_canAccess)) bool canAccess;

  __declspec(property(get = get_vertexCount)) int32_t vertexCount;

  __declspec(property(get = get_subMeshCount, put = set_subMeshCount)) int32_t subMeshCount;

  __declspec(property(get = get_bounds, put = set_bounds))::UnityEngine::Bounds bounds;

  __declspec(property(get = get_vertices, put = set_vertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  __declspec(property(get = get_normals, put = set_normals))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals;

  __declspec(property(get = get_tangents, put = set_tangents))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> tangents;

  __declspec(property(get = get_uv, put = set_uv))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv;

  __declspec(property(get = get_uv2, put = set_uv2))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv2;

  __declspec(property(get = get_uv3, put = set_uv3))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv3;

  __declspec(property(get = get_uv4, put = set_uv4))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv4;

  __declspec(property(get = get_uv5, put = set_uv5))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv5;

  __declspec(property(get = get_uv6, put = set_uv6))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv6;

  __declspec(property(get = get_uv7, put = set_uv7))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv7;

  __declspec(property(get = get_uv8, put = set_uv8))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uv8;

  __declspec(property(get = get_colors, put = set_colors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors;

  __declspec(property(get = get_colors32, put = set_colors32))::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32;

  __declspec(property(get = get_vertexAttributeCount)) int32_t vertexAttributeCount;

  __declspec(property(get = get_triangles, put = set_triangles))::ArrayW<int32_t, ::Array<int32_t>*> triangles;

  __declspec(property(get = get_boneWeights, put = set_boneWeights))::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> boneWeights;

  /// @brief Method Internal_Create addr 0x2ca437c size 0x3c virtual false final false
  static inline void Internal_Create(::UnityEngine::Mesh* mono);

  static inline ::UnityEngine::Mesh* New_ctor();

  /// @brief Method .ctor addr 0x2ca43b8 size 0x80 virtual false final false
  inline void _ctor();

  /// @brief Method FromInstanceID addr 0x2ca4438 size 0x3c virtual false final false
  static inline ::UnityEngine::Mesh* FromInstanceID(int32_t id);

  /// @brief Method get_indexFormat addr 0x2ca4474 size 0x3c virtual false final false
  inline ::UnityEngine::Rendering::IndexFormat get_indexFormat();

  /// @brief Method set_indexFormat addr 0x2ca44b0 size 0x44 virtual false final false
  inline void set_indexFormat(::UnityEngine::Rendering::IndexFormat value);

  /// @brief Method GetTotalIndexCount addr 0x2ca44f4 size 0x3c virtual false final false
  inline uint32_t GetTotalIndexCount();

  /// @brief Method SetIndexBufferParams addr 0x2ca4530 size 0x54 virtual false final false
  inline void SetIndexBufferParams(int32_t indexCount, ::UnityEngine::Rendering::IndexFormat format);

  /// @brief Method InternalSetIndexBufferData addr 0x2ca4584 size 0x84 virtual false final false
  inline void InternalSetIndexBufferData(void* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetIndexBufferDataFromArray addr 0x2ca4608 size 0x84 virtual false final false
  inline void InternalSetIndexBufferDataFromArray(::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferParamsFromPtr addr 0x2ca468c size 0x5c virtual false final false
  inline void SetVertexBufferParamsFromPtr(int32_t vertexCount, void* attributesPtr, int32_t attributesCount);

  /// @brief Method SetVertexBufferParamsFromArray addr 0x2ca46e8 size 0x54 virtual false final false
  inline void SetVertexBufferParamsFromArray(int32_t vertexCount,
                                             ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method InternalSetVertexBufferData addr 0x2ca473c size 0x8c virtual false final false
  inline void InternalSetVertexBufferData(int32_t stream, void* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method InternalSetVertexBufferDataFromArray addr 0x2ca47c8 size 0x8c virtual false final false
  inline void InternalSetVertexBufferDataFromArray(int32_t stream, ::System::Array* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize,
                                                   ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetVertexAttributesAlloc addr 0x2ca4854 size 0x3c virtual false final false
  inline ::System::Array* GetVertexAttributesAlloc();

  /// @brief Method GetVertexAttributesArray addr 0x2ca4890 size 0x44 virtual false final false
  inline int32_t GetVertexAttributesArray(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method GetVertexAttributesList addr 0x2ca48d4 size 0x44 virtual false final false
  inline int32_t GetVertexAttributesList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method GetVertexAttributeCountImpl addr 0x2ca4918 size 0x3c virtual false final false
  inline int32_t GetVertexAttributeCountImpl();

  /// @brief Method GetVertexAttribute addr 0x2ca4954 size 0x5c virtual false final false
  inline ::UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index);

  /// @brief Method GetIndexStartImpl addr 0x2ca4a04 size 0x44 virtual false final false
  inline uint32_t GetIndexStartImpl(int32_t submesh);

  /// @brief Method GetIndexCountImpl addr 0x2ca4a48 size 0x44 virtual false final false
  inline uint32_t GetIndexCountImpl(int32_t submesh);

  /// @brief Method GetTrianglesCountImpl addr 0x2ca4a8c size 0x44 virtual false final false
  inline uint32_t GetTrianglesCountImpl(int32_t submesh);

  /// @brief Method GetBaseVertexImpl addr 0x2ca4ad0 size 0x44 virtual false final false
  inline uint32_t GetBaseVertexImpl(int32_t submesh);

  /// @brief Method GetTrianglesImpl addr 0x2ca4b14 size 0x54 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTrianglesImpl(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesImpl addr 0x2ca4b68 size 0x54 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndicesImpl(int32_t submesh, bool applyBaseVertex);

  /// @brief Method SetIndicesImpl addr 0x2ca4bbc size 0x9c virtual false final false
  inline void SetIndicesImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* indices, int32_t arrayStart,
                             int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndicesNativeArrayImpl addr 0x2ca4c58 size 0x9c virtual false final false
  inline void SetIndicesNativeArrayImpl(int32_t submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, void* indices, int32_t arrayStart,
                                        int32_t arraySize, bool calculateBounds, int32_t baseVertex);

  /// @brief Method GetTrianglesNonAllocImpl addr 0x2ca4cf4 size 0x5c virtual false final false
  inline void GetTrianglesNonAllocImpl(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTrianglesNonAllocImpl16 addr 0x2ca4d50 size 0x5c virtual false final false
  inline void GetTrianglesNonAllocImpl16(ByRef<::ArrayW<uint16_t, ::Array<uint16_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl addr 0x2ca4dac size 0x5c virtual false final false
  inline void GetIndicesNonAllocImpl(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndicesNonAllocImpl16 addr 0x2ca4e08 size 0x5c virtual false final false
  inline void GetIndicesNonAllocImpl16(ByRef<::ArrayW<uint16_t, ::Array<uint16_t>*>> values, int32_t submesh, bool applyBaseVertex);

  /// @brief Method PrintErrorCantAccessChannel addr 0x2ca4e64 size 0x44 virtual false final false
  inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute ch);

  /// @brief Method HasVertexAttribute addr 0x2ca4ea8 size 0x44 virtual false final false
  inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeDimension addr 0x2ca4eec size 0x44 virtual false final false
  inline int32_t GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeFormat addr 0x2ca4f30 size 0x44 virtual false final false
  inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeStream addr 0x2ca4f74 size 0x44 virtual false final false
  inline int32_t GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method GetVertexAttributeOffset addr 0x2ca4fb8 size 0x44 virtual false final false
  inline int32_t GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute attr);

  /// @brief Method SetArrayForChannelImpl addr 0x2ca4ffc size 0x9c virtual false final false
  inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values, int32_t arraySize,
                                     int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNativeArrayForChannelImpl addr 0x2ca5098 size 0x9c virtual false final false
  inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, void* values, int32_t arraySize,
                                           int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetAllocArrayFromChannelImpl addr 0x2ca5134 size 0x5c virtual false final false
  inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetArrayFromChannelImpl addr 0x2ca5190 size 0x6c virtual false final false
  inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values);

  /// @brief Method get_vertexBufferCount addr 0x2ca51fc size 0x3c virtual false final false
  inline int32_t get_vertexBufferCount();

  /// @brief Method GetVertexBufferStride addr 0x2ca5238 size 0x44 virtual false final false
  inline int32_t GetVertexBufferStride(int32_t stream);

  /// @brief Method GetNativeVertexBufferPtr addr 0x2ca527c size 0x44 virtual false final false
  inline void* GetNativeVertexBufferPtr(int32_t index);

  /// @brief Method GetNativeIndexBufferPtr addr 0x2ca52c0 size 0x3c virtual false final false
  inline void* GetNativeIndexBufferPtr();

  /// @brief Method GetVertexBufferImpl addr 0x2ca52fc size 0x44 virtual false final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl(int32_t index);

  /// @brief Method GetIndexBufferImpl addr 0x2ca5340 size 0x3c virtual false final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBufferImpl();

  /// @brief Method get_vertexBufferTarget addr 0x2ca537c size 0x3c virtual false final false
  inline ::UnityEngine::__GraphicsBuffer__Target get_vertexBufferTarget();

  /// @brief Method set_vertexBufferTarget addr 0x2ca53b8 size 0x44 virtual false final false
  inline void set_vertexBufferTarget(::UnityEngine::__GraphicsBuffer__Target value);

  /// @brief Method get_indexBufferTarget addr 0x2ca53fc size 0x3c virtual false final false
  inline ::UnityEngine::__GraphicsBuffer__Target get_indexBufferTarget();

  /// @brief Method set_indexBufferTarget addr 0x2ca5438 size 0x44 virtual false final false
  inline void set_indexBufferTarget(::UnityEngine::__GraphicsBuffer__Target value);

  /// @brief Method get_blendShapeCount addr 0x2ca547c size 0x3c virtual false final false
  inline int32_t get_blendShapeCount();

  /// @brief Method ClearBlendShapes addr 0x2ca54b8 size 0x3c virtual false final false
  inline void ClearBlendShapes();

  /// @brief Method GetBlendShapeName addr 0x2ca54f4 size 0x44 virtual false final false
  inline ::StringW GetBlendShapeName(int32_t shapeIndex);

  /// @brief Method GetBlendShapeIndex addr 0x2ca5538 size 0x44 virtual false final false
  inline int32_t GetBlendShapeIndex(::StringW blendShapeName);

  /// @brief Method GetBlendShapeFrameCount addr 0x2ca557c size 0x44 virtual false final false
  inline int32_t GetBlendShapeFrameCount(int32_t shapeIndex);

  /// @brief Method GetBlendShapeFrameWeight addr 0x2ca55c0 size 0x54 virtual false final false
  inline float_t GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex);

  /// @brief Method GetBlendShapeFrameVertices addr 0x2ca5614 size 0x74 virtual false final false
  inline void GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaVertices,
                                         ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaNormals,
                                         ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaTangents);

  /// @brief Method AddBlendShapeFrame addr 0x2ca5688 size 0x7c virtual false final false
  inline void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaVertices,
                                 ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaNormals, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> deltaTangents);

  /// @brief Method HasBoneWeights addr 0x2ca5704 size 0x3c virtual false final false
  inline bool HasBoneWeights();

  /// @brief Method GetBoneWeightsImpl addr 0x2ca5740 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> GetBoneWeightsImpl();

  /// @brief Method SetBoneWeightsImpl addr 0x2ca577c size 0x44 virtual false final false
  inline void SetBoneWeightsImpl(::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> weights);

  /// @brief Method SetBoneWeights addr 0x2ca57c0 size 0xe8 virtual false final false
  inline void SetBoneWeights(::Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> weights);

  /// @brief Method InternalSetBoneWeights addr 0x2ca58a8 size 0x6c virtual false final false
  inline void InternalSetBoneWeights(void* bonesPerVertex, int32_t bonesPerVertexSize, void* weights, int32_t weightsSize);

  /// @brief Method GetAllBoneWeights addr 0x2ca5914 size 0xb4 virtual false final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1> GetAllBoneWeights();

  /// @brief Method GetBonesPerVertex addr 0x2ca5a40 size 0xe4 virtual false final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex();

  /// @brief Method GetAllBoneWeightsArraySize addr 0x2ca5a04 size 0x3c virtual false final false
  inline int32_t GetAllBoneWeightsArraySize();

  /// @brief Method GetAllBoneWeightsArray addr 0x2ca59c8 size 0x3c virtual false final false
  inline void* GetAllBoneWeightsArray();

  /// @brief Method GetBonesPerVertexArray addr 0x2ca5b60 size 0x3c virtual false final false
  inline void* GetBonesPerVertexArray();

  /// @brief Method GetBindposeCount addr 0x2ca5b9c size 0x3c virtual false final false
  inline int32_t GetBindposeCount();

  /// @brief Method get_bindposes addr 0x2ca5bd8 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_bindposes();

  /// @brief Method set_bindposes addr 0x2ca5c14 size 0x44 virtual false final false
  inline void set_bindposes(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method GetBoneWeightsNonAllocImpl addr 0x2ca5c58 size 0x44 virtual false final false
  inline void GetBoneWeightsNonAllocImpl(ByRef<::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*>> values);

  /// @brief Method GetBindposesNonAllocImpl addr 0x2ca5c9c size 0x44 virtual false final false
  inline void GetBindposesNonAllocImpl(ByRef<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>> values);

  /// @brief Method get_isReadable addr 0x2ca5ce0 size 0x3c virtual false final false
  inline bool get_isReadable();

  /// @brief Method get_canAccess addr 0x2ca5d1c size 0x3c virtual false final false
  inline bool get_canAccess();

  /// @brief Method get_vertexCount addr 0x2ca5b24 size 0x3c virtual false final false
  inline int32_t get_vertexCount();

  /// @brief Method get_subMeshCount addr 0x2ca5d58 size 0x3c virtual false final false
  inline int32_t get_subMeshCount();

  /// @brief Method set_subMeshCount addr 0x2ca5d94 size 0x44 virtual false final false
  inline void set_subMeshCount(int32_t value);

  /// @brief Method SetSubMesh addr 0x2ca5dd8 size 0x5c virtual false final false
  inline void SetSubMesh(int32_t index, ::UnityEngine::Rendering::SubMeshDescriptor desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetSubMesh addr 0x2ca5e90 size 0x7c virtual false final false
  inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index);

  /// @brief Method SetAllSubMeshesAtOnceFromArray addr 0x2ca5f60 size 0x6c virtual false final false
  inline void SetAllSubMeshesAtOnceFromArray(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, int32_t start, int32_t count,
                                             ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetAllSubMeshesAtOnceFromNativeArray addr 0x2ca5fcc size 0x6c virtual false final false
  inline void SetAllSubMeshesAtOnceFromNativeArray(void* desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method get_bounds addr 0x2ca6038 size 0x68 virtual false final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method set_bounds addr 0x2ca60e4 size 0x44 virtual false final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method ClearImpl addr 0x2ca616c size 0x44 virtual false final false
  inline void ClearImpl(bool keepVertexLayout);

  /// @brief Method RecalculateBoundsImpl addr 0x2ca61b0 size 0x44 virtual false final false
  inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormalsImpl addr 0x2ca61f4 size 0x44 virtual false final false
  inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangentsImpl addr 0x2ca6238 size 0x44 virtual false final false
  inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method MarkDynamicImpl addr 0x2ca627c size 0x3c virtual false final false
  inline void MarkDynamicImpl();

  /// @brief Method MarkModified addr 0x2ca62b8 size 0x3c virtual false final false
  inline void MarkModified();

  /// @brief Method UploadMeshDataImpl addr 0x2ca62f4 size 0x44 virtual false final false
  inline void UploadMeshDataImpl(bool markNoLongerReadable);

  /// @brief Method GetTopologyImpl addr 0x2ca6338 size 0x44 virtual false final false
  inline ::UnityEngine::MeshTopology GetTopologyImpl(int32_t submesh);

  /// @brief Method RecalculateUVDistributionMetricImpl addr 0x2ca637c size 0x54 virtual false final false
  inline void RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetricsImpl addr 0x2ca63d0 size 0x4c virtual false final false
  inline void RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold);

  /// @brief Method GetUVDistributionMetric addr 0x2ca641c size 0x44 virtual false final false
  inline float_t GetUVDistributionMetric(int32_t uvSetIndex);

  /// @brief Method CombineMeshesImpl addr 0x2ca6460 size 0x6c virtual false final false
  inline void CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method OptimizeImpl addr 0x2ca64cc size 0x3c virtual false final false
  inline void OptimizeImpl();

  /// @brief Method OptimizeIndexBuffersImpl addr 0x2ca6508 size 0x3c virtual false final false
  inline void OptimizeIndexBuffersImpl();

  /// @brief Method OptimizeReorderVertexBufferImpl addr 0x2ca6544 size 0x3c virtual false final false
  inline void OptimizeReorderVertexBufferImpl();

  /// @brief Method GetUVChannel addr 0x2ca6580 size 0x78 virtual false final false
  static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex);

  /// @brief Method DefaultDimensionForChannel addr 0x2ca65f8 size 0xa0 virtual false final false
  static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method GetAllocArrayFromChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline ::ArrayW<T, ::Array<T>*> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim);

  /// @brief Method GetAllocArrayFromChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute channel);

  /// @brief Method SetSizedArrayForChannel addr 0x2ca6698 size 0x2a4 virtual false final false
  inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::System::Array* values,
                                      int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSizedNativeArrayForChannel addr 0x2ca693c size 0x29c virtual false final false
  inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, void* values,
                                            int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T, ::Array<T>*> values,
                                 ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetArrayForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T, ::Array<T>*> values, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim,
                                ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::System::Collections::Generic::List_1<T>* values, int32_t start, int32_t length,
                                ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim);

  /// @brief Method GetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void GetListForChannel(::System::Collections::Generic::List_1<T>* buffer, int32_t capacity, ::UnityEngine::Rendering::VertexAttribute channel, int32_t dim,
                                ::UnityEngine::Rendering::VertexAttributeFormat channelType);

  /// @brief Method get_vertices addr 0x2ca6bd8 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_vertices();

  /// @brief Method set_vertices addr 0x2ca6c24 size 0x60 virtual false final false
  inline void set_vertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method get_normals addr 0x2ca6c84 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> get_normals();

  /// @brief Method set_normals addr 0x2ca6cd0 size 0x60 virtual false final false
  inline void set_normals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method get_tangents addr 0x2ca6d30 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> get_tangents();

  /// @brief Method set_tangents addr 0x2ca6d7c size 0x60 virtual false final false
  inline void set_tangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method get_uv addr 0x2ca6ddc size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv();

  /// @brief Method set_uv addr 0x2ca6e28 size 0x60 virtual false final false
  inline void set_uv(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_uv2 addr 0x2ca6e88 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv2();

  /// @brief Method set_uv2 addr 0x2ca6ed4 size 0x60 virtual false final false
  inline void set_uv2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_uv3 addr 0x2ca6f34 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv3();

  /// @brief Method set_uv3 addr 0x2ca6f80 size 0x60 virtual false final false
  inline void set_uv3(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_uv4 addr 0x2ca6fe0 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv4();

  /// @brief Method set_uv4 addr 0x2ca702c size 0x60 virtual false final false
  inline void set_uv4(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_uv5 addr 0x2ca708c size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv5();

  /// @brief Method set_uv5 addr 0x2ca70d8 size 0x60 virtual false final false
  inline void set_uv5(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_uv6 addr 0x2ca7138 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv6();

  /// @brief Method set_uv6 addr 0x2ca7184 size 0x60 virtual false final false
  inline void set_uv6(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_uv7 addr 0x2ca71e4 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv7();

  /// @brief Method set_uv7 addr 0x2ca7230 size 0x60 virtual false final false
  inline void set_uv7(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_uv8 addr 0x2ca7290 size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> get_uv8();

  /// @brief Method set_uv8 addr 0x2ca72dc size 0x60 virtual false final false
  inline void set_uv8(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  /// @brief Method get_colors addr 0x2ca733c size 0x4c virtual false final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_colors();

  /// @brief Method set_colors addr 0x2ca7388 size 0x60 virtual false final false
  inline void set_colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  /// @brief Method get_colors32 addr 0x2ca73e8 size 0x54 virtual false final false
  inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> get_colors32();

  /// @brief Method set_colors32 addr 0x2ca743c size 0x68 virtual false final false
  inline void set_colors32(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value);

  /// @brief Method GetVertices addr 0x2ca74a4 size 0xf0 virtual false final false
  inline void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices);

  /// @brief Method SetVertices addr 0x2ca7594 size 0x6c virtual false final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices);

  /// @brief Method SetVertices addr 0x2ca7600 size 0x8 virtual false final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices addr 0x2ca7608 size 0x7c virtual false final false
  inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices addr 0x2ca7684 size 0x68 virtual false final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices);

  /// @brief Method SetVertices addr 0x2ca76ec size 0x68 virtual false final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices addr 0x2ca7754 size 0x6c virtual false final false
  inline void SetVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices);

  /// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length);

  /// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetVertices(::Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetNormals addr 0x2ca77c0 size 0xf0 virtual false final false
  inline void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals);

  /// @brief Method SetNormals addr 0x2ca78b0 size 0x6c virtual false final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals);

  /// @brief Method SetNormals addr 0x2ca791c size 0x8 virtual false final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals addr 0x2ca7924 size 0x7c virtual false final false
  inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals addr 0x2ca79a0 size 0x68 virtual false final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals);

  /// @brief Method SetNormals addr 0x2ca7a08 size 0x68 virtual false final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals addr 0x2ca7a70 size 0x6c virtual false final false
  inline void SetNormals(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals);

  /// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length);

  /// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetNormals(::Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetTangents addr 0x2ca7adc size 0xf0 virtual false final false
  inline void GetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method SetTangents addr 0x2ca7bcc size 0x6c virtual false final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents);

  /// @brief Method SetTangents addr 0x2ca7c38 size 0x8 virtual false final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents addr 0x2ca7c40 size 0x7c virtual false final false
  inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents addr 0x2ca7cbc size 0x68 virtual false final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents);

  /// @brief Method SetTangents addr 0x2ca7d24 size 0x68 virtual false final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents addr 0x2ca7d8c size 0x6c virtual false final false
  inline void SetTangents(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents);

  /// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length);

  /// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetTangents(::Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetColors addr 0x2ca7df8 size 0xf0 virtual false final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* colors);

  /// @brief Method SetColors addr 0x2ca7ee8 size 0x6c virtual false final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors);

  /// @brief Method SetColors addr 0x2ca7f54 size 0x8 virtual false final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors addr 0x2ca7f5c size 0x7c virtual false final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors addr 0x2ca7fd8 size 0x68 virtual false final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors);

  /// @brief Method SetColors addr 0x2ca8040 size 0x68 virtual false final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors addr 0x2ca80a8 size 0x6c virtual false final false
  inline void SetColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetColors addr 0x2ca8114 size 0xf4 virtual false final false
  inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors);

  /// @brief Method SetColors addr 0x2ca8208 size 0x6c virtual false final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors);

  /// @brief Method SetColors addr 0x2ca8274 size 0x8 virtual false final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length);

  /// @brief Method SetColors addr 0x2ca827c size 0x94 virtual false final false
  inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors addr 0x2ca8310 size 0x68 virtual false final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors);

  /// @brief Method SetColors addr 0x2ca8378 size 0x68 virtual false final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors addr 0x2ca83e0 size 0x6c virtual false final false
  inline void SetColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors);

  /// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length);

  /// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetColors(::Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Collections::Generic::List_1<T>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs addr 0x2ca844c size 0x74 virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method SetUVs addr 0x2ca84c8 size 0x74 virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method SetUVs addr 0x2ca8544 size 0x74 virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method SetUVs addr 0x2ca84c0 size 0x8 virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs addr 0x2ca85c0 size 0x8c virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs addr 0x2ca853c size 0x8 virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs addr 0x2ca864c size 0x8c virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs addr 0x2ca85b8 size 0x8 virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs addr 0x2ca86d8 size 0x8c virtual false final false
  inline void SetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUvsImpl addr 0x2ca8764 size 0x10c virtual false final false
  inline void SetUvsImpl(int32_t uvIndex, int32_t dim, ::System::Array* uvs, int32_t arrayStart, int32_t arraySize, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs addr 0x2ca8870 size 0x48 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs);

  /// @brief Method SetUVs addr 0x2ca88d0 size 0x48 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs);

  /// @brief Method SetUVs addr 0x2ca8930 size 0x48 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs);

  /// @brief Method SetUVs addr 0x2ca88b8 size 0x18 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs addr 0x2ca8990 size 0x18 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs addr 0x2ca8918 size 0x18 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs addr 0x2ca89a8 size 0x18 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs addr 0x2ca8978 size 0x18 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs addr 0x2ca89c0 size 0x18 virtual false final false
  inline void SetUVs(int32_t channel, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs);

  /// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length);

  /// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetUVs(int32_t channel, ::Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetUVsImpl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void GetUVsImpl(int32_t uvIndex, ::System::Collections::Generic::List_1<T>* uvs, int32_t dim);

  /// @brief Method GetUVs addr 0x2ca89d8 size 0x64 virtual false final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs);

  /// @brief Method GetUVs addr 0x2ca8a3c size 0x64 virtual false final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs);

  /// @brief Method GetUVs addr 0x2ca8aa0 size 0x64 virtual false final false
  inline void GetUVs(int32_t channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs);

  /// @brief Method get_vertexAttributeCount addr 0x2ca8b04 size 0x3c virtual false final false
  inline int32_t get_vertexAttributeCount();

  /// @brief Method GetVertexAttributes addr 0x2ca8b40 size 0x8c virtual false final false
  inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> GetVertexAttributes();

  /// @brief Method GetVertexAttributes addr 0x2ca8bcc size 0x44 virtual false final false
  inline int32_t GetVertexAttributes(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method GetVertexAttributes addr 0x2ca8c10 size 0x44 virtual false final false
  inline int32_t GetVertexAttributes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes);

  /// @brief Method SetVertexBufferParams addr 0x2ca8c54 size 0x54 virtual false final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor, ::Array<::UnityEngine::Rendering::VertexAttributeDescriptor>*> attributes);

  /// @brief Method SetVertexBufferParams addr 0x2ca8ca8 size 0xa8 virtual false final false
  inline void SetVertexBufferParams(int32_t vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor> attributes);

  /// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetVertexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetVertexBufferData(::ArrayW<T, ::Array<T>*> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetVertexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream,
                                  ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method AcquireReadOnlyMeshData addr 0x2ca8d50 size 0x2c virtual false final false
  static inline ::UnityEngine::__Mesh__MeshDataArray AcquireReadOnlyMeshData(::UnityEngine::Mesh* mesh);

  /// @brief Method AcquireReadOnlyMeshData addr 0x2ca8fc4 size 0x9c virtual false final false
  static inline ::UnityEngine::__Mesh__MeshDataArray AcquireReadOnlyMeshData(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes);

  /// @brief Method AcquireReadOnlyMeshData addr 0x2ca9398 size 0xe0 virtual false final false
  static inline ::UnityEngine::__Mesh__MeshDataArray AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* meshes);

  /// @brief Method AllocateWritableMeshData addr 0x2ca9478 size 0x28 virtual false final false
  static inline ::UnityEngine::__Mesh__MeshDataArray AllocateWritableMeshData(int32_t meshCount);

  /// @brief Method ApplyAndDisposeWritableMeshData addr 0x2ca9608 size 0x188 virtual false final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::__Mesh__MeshDataArray data, ::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData addr 0x2ca98b4 size 0x160 virtual false final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::__Mesh__MeshDataArray data, ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method ApplyAndDisposeWritableMeshData addr 0x2ca9c58 size 0x1bc virtual false final false
  static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::__Mesh__MeshDataArray data, ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* meshes,
                                                     ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetVertexBuffer addr 0x2ca9e14 size 0xd4 virtual false final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer(int32_t index);

  /// @brief Method GetIndexBuffer addr 0x2ca9ee8 size 0xc4 virtual false final false
  inline ::UnityEngine::GraphicsBuffer* GetIndexBuffer();

  /// @brief Method PrintErrorCantAccessIndices addr 0x2ca9fac size 0x98 virtual false final false
  inline void PrintErrorCantAccessIndices();

  /// @brief Method CheckCanAccessSubmesh addr 0x2caa044 size 0x140 virtual false final false
  inline bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles);

  /// @brief Method CheckCanAccessSubmeshTriangles addr 0x2caa184 size 0x8 virtual false final false
  inline bool CheckCanAccessSubmeshTriangles(int32_t submesh);

  /// @brief Method CheckCanAccessSubmeshIndices addr 0x2caa18c size 0x8 virtual false final false
  inline bool CheckCanAccessSubmeshIndices(int32_t submesh);

  /// @brief Method get_triangles addr 0x2caa194 size 0xb4 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_triangles();

  /// @brief Method set_triangles addr 0x2caa248 size 0xa8 virtual false final false
  inline void set_triangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method GetTriangles addr 0x2caa390 size 0x8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTriangles(int32_t submesh);

  /// @brief Method GetTriangles addr 0x2caa398 size 0xa8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetTriangles(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles addr 0x2caa440 size 0x8 virtual false final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method GetTriangles addr 0x2caa448 size 0x1bc virtual false final false
  inline void GetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetTriangles addr 0x2caa604 size 0x1bc virtual false final false
  inline void GetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices addr 0x2caa7c0 size 0x8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndices(int32_t submesh);

  /// @brief Method GetIndices addr 0x2caa7c8 size 0xa8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetIndices(int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices addr 0x2caa870 size 0x8 virtual false final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh);

  /// @brief Method GetIndices addr 0x2caa878 size 0x19c virtual false final false
  inline void GetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method GetIndices addr 0x2caaad8 size 0x19c virtual false final false
  inline void GetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t submesh, bool applyBaseVertex);

  /// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetIndexBufferData(::Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetIndexBufferData(::ArrayW<T, ::Array<T>*> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetIndexBufferData(::System::Collections::Generic::List_1<T>* data, int32_t dataStart, int32_t meshBufferStart, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetIndexStart addr 0x2caac74 size 0xc4 virtual false final false
  inline uint32_t GetIndexStart(int32_t submesh);

  /// @brief Method GetIndexCount addr 0x2caaa14 size 0xc4 virtual false final false
  inline uint32_t GetIndexCount(int32_t submesh);

  /// @brief Method GetBaseVertex addr 0x2caad38 size 0xc4 virtual false final false
  inline uint32_t GetBaseVertex(int32_t submesh);

  /// @brief Method CheckIndicesArrayRange addr 0x2caadfc size 0x1ac virtual false final false
  inline void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length);

  /// @brief Method SetTrianglesImpl addr 0x2caa2f0 size 0xa0 virtual false final false
  inline void SetTrianglesImpl(int32_t submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* triangles, int32_t trianglesArrayLength, int32_t start, int32_t length,
                               bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles addr 0x2caafa8 size 0x48 virtual false final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh);

  /// @brief Method SetTriangles addr 0x2cab048 size 0x54 virtual false final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles addr 0x2caaff0 size 0x58 virtual false final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles addr 0x2cab09c size 0x8c virtual false final false
  inline void SetTriangles(::ArrayW<int32_t, ::Array<int32_t>*> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles addr 0x2cab128 size 0x58 virtual false final false
  inline void SetTriangles(::ArrayW<uint16_t, ::Array<uint16_t>*> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles addr 0x2cab180 size 0x8c virtual false final false
  inline void SetTriangles(::ArrayW<uint16_t, ::Array<uint16_t>*> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles addr 0x2cab20c size 0xc virtual false final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh);

  /// @brief Method SetTriangles addr 0x2cab2a0 size 0xc virtual false final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds);

  /// @brief Method SetTriangles addr 0x2cab218 size 0x88 virtual false final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles addr 0x2cab2ac size 0xd0 virtual false final false
  inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles addr 0x2cab37c size 0x88 virtual false final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetTriangles addr 0x2cab404 size 0xd0 virtual false final false
  inline void SetTriangles(::System::Collections::Generic::List_1<uint16_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices addr 0x2cab4d4 size 0x64 virtual false final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh);

  /// @brief Method SetIndices addr 0x2cab5ac size 0x68 virtual false final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds);

  /// @brief Method SetIndices addr 0x2cab538 size 0x74 virtual false final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices addr 0x2cab614 size 0xd4 virtual false final false
  inline void SetIndices(::ArrayW<int32_t, ::Array<int32_t>*> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices addr 0x2cab6e8 size 0x74 virtual false final false
  inline void SetIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices addr 0x2cab75c size 0xd4 virtual false final false
  inline void SetIndices(::ArrayW<uint16_t, ::Array<uint16_t>*> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T>
  inline void SetIndices(::Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds,
                         int32_t baseVertex);

  /// @brief Method SetIndices addr 0x2cab830 size 0xa4 virtual false final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices addr 0x2cab8d4 size 0x110 virtual false final false
  inline void SetIndices(::System::Collections::Generic::List_1<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices addr 0x2cab9e4 size 0xa4 virtual false final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, ::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetIndices addr 0x2caba88 size 0x110 virtual false final false
  inline void SetIndices(::System::Collections::Generic::List_1<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, ::UnityEngine::MeshTopology topology, int32_t submesh,
                         bool calculateBounds, int32_t baseVertex);

  /// @brief Method SetSubMeshes addr 0x2cabb98 size 0x2dc virtual false final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, int32_t start, int32_t count,
                           ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes addr 0x2cabe74 size 0x2c virtual false final false
  inline void SetSubMeshes(::ArrayW<::UnityEngine::Rendering::SubMeshDescriptor, ::Array<::UnityEngine::Rendering::SubMeshDescriptor>*> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes addr 0x2cabea0 size 0x80 virtual false final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes addr 0x2cabf20 size 0x90 virtual false final false
  inline void SetSubMeshes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SubMeshDescriptor>* desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method SetSubMeshes addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetSubMeshes(::Unity::Collections::NativeArray_1<T> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetBindposes addr 0x2cabfb0 size 0x134 virtual false final false
  inline void GetBindposes(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* bindposes);

  /// @brief Method GetBoneWeights addr 0x2cac0e4 size 0x160 virtual false final false
  inline void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* boneWeights);

  /// @brief Method get_boneWeights addr 0x2cac244 size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> get_boneWeights();

  /// @brief Method set_boneWeights addr 0x2cac280 size 0x44 virtual false final false
  inline void set_boneWeights(::ArrayW<::UnityEngine::BoneWeight, ::Array<::UnityEngine::BoneWeight>*> value);

  /// @brief Method Clear addr 0x2cac2c4 size 0x44 virtual false final false
  inline void Clear(bool keepVertexLayout);

  /// @brief Method Clear addr 0x2cac308 size 0x40 virtual false final false
  inline void Clear();

  /// @brief Method RecalculateBounds addr 0x2cac348 size 0x8 virtual false final false
  inline void RecalculateBounds();

  /// @brief Method RecalculateNormals addr 0x2cac444 size 0x8 virtual false final false
  inline void RecalculateNormals();

  /// @brief Method RecalculateTangents addr 0x2cac540 size 0x8 virtual false final false
  inline void RecalculateTangents();

  /// @brief Method RecalculateBounds addr 0x2cac350 size 0xf4 virtual false final false
  inline void RecalculateBounds(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateNormals addr 0x2cac44c size 0xf4 virtual false final false
  inline void RecalculateNormals(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateTangents addr 0x2cac548 size 0xf4 virtual false final false
  inline void RecalculateTangents(::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method RecalculateUVDistributionMetric addr 0x2cac63c size 0x108 virtual false final false
  inline void RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold);

  /// @brief Method RecalculateUVDistributionMetrics addr 0x2cac744 size 0x100 virtual false final false
  inline void RecalculateUVDistributionMetrics(float_t uvAreaThreshold);

  /// @brief Method MarkDynamic addr 0x2cac844 size 0x74 virtual false final false
  inline void MarkDynamic();

  /// @brief Method UploadMeshData addr 0x2cac8b8 size 0x7c virtual false final false
  inline void UploadMeshData(bool markNoLongerReadable);

  /// @brief Method Optimize addr 0x2cac934 size 0xec virtual false final false
  inline void Optimize();

  /// @brief Method OptimizeIndexBuffers addr 0x2caca20 size 0xec virtual false final false
  inline void OptimizeIndexBuffers();

  /// @brief Method OptimizeReorderVertexBuffer addr 0x2cacb0c size 0xec virtual false final false
  inline void OptimizeReorderVertexBuffer();

  /// @brief Method GetTopology addr 0x2cacbf8 size 0xe0 virtual false final false
  inline ::UnityEngine::MeshTopology GetTopology(int32_t submesh);

  /// @brief Method CombineMeshes addr 0x2caccd8 size 0x6c virtual false final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData);

  /// @brief Method CombineMeshes addr 0x2cacd44 size 0x60 virtual false final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes, bool useMatrices);

  /// @brief Method CombineMeshes addr 0x2cacda4 size 0x5c virtual false final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine, bool mergeSubMeshes);

  /// @brief Method CombineMeshes addr 0x2cace00 size 0x50 virtual false final false
  inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance, ::Array<::UnityEngine::CombineInstance>*> combine);

  /// @brief Method GetVertexAttribute_Injected addr 0x2ca49b0 size 0x54 virtual false final false
  inline void GetVertexAttribute_Injected(int32_t index, ByRef<::UnityEngine::Rendering::VertexAttributeDescriptor> ret);

  /// @brief Method SetSubMesh_Injected addr 0x2ca5e34 size 0x5c virtual false final false
  inline void SetSubMesh_Injected(int32_t index, ByRef<::UnityEngine::Rendering::SubMeshDescriptor> desc, ::UnityEngine::Rendering::MeshUpdateFlags flags);

  /// @brief Method GetSubMesh_Injected addr 0x2ca5f0c size 0x54 virtual false final false
  inline void GetSubMesh_Injected(int32_t index, ByRef<::UnityEngine::Rendering::SubMeshDescriptor> ret);

  /// @brief Method get_bounds_Injected addr 0x2ca60a0 size 0x44 virtual false final false
  inline void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method set_bounds_Injected addr 0x2ca6128 size 0x44 virtual false final false
  inline void set_bounds_Injected(ByRef<::UnityEngine::Bounds> value);

  // Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mesh(Mesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mesh(Mesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Mesh, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Mesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mesh*, "UnityEngine", "Mesh");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Mesh__MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Mesh__MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
