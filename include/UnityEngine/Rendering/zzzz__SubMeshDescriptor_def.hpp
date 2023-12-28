#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubMeshDescriptor)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct MeshTopology;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SubMeshDescriptor);
// Type: UnityEngine.Rendering::SubMeshDescriptor
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10164)), TypeDefinitionIndex(TypeDefinitionIndex(10109))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10344))
// CS Name: ::UnityEngine.Rendering::SubMeshDescriptor
struct CORDL_TYPE SubMeshDescriptor {
public:
  // Declarations
  __declspec(property(get = get_bounds, put = set_bounds))::UnityEngine::Bounds bounds;

  __declspec(property(get = get_topology, put = set_topology))::UnityEngine::MeshTopology topology;

  __declspec(property(get = get_indexStart, put = set_indexStart)) int32_t indexStart;

  __declspec(property(get = get_indexCount, put = set_indexCount)) int32_t indexCount;

  __declspec(property(get = get_baseVertex, put = set_baseVertex)) int32_t baseVertex;

  __declspec(property(get = get_firstVertex, put = set_firstVertex)) int32_t firstVertex;

  __declspec(property(get = get_vertexCount, put = set_vertexCount)) int32_t vertexCount;

  /// @brief Method .ctor addr 0x2cebc98 size 0x18 virtual false final false
  inline void _ctor(int32_t indexStart, int32_t indexCount, ::UnityEngine::MeshTopology topology);

  /// @brief Method get_bounds addr 0x2cebcb0 size 0x14 virtual false final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method set_bounds addr 0x2cebcc4 size 0x14 virtual false final false
  inline void set_bounds(::UnityEngine::Bounds value);

  /// @brief Method get_topology addr 0x2cebcd8 size 0x8 virtual false final false
  inline ::UnityEngine::MeshTopology get_topology();

  /// @brief Method set_topology addr 0x2cebce0 size 0x8 virtual false final false
  inline void set_topology(::UnityEngine::MeshTopology value);

  /// @brief Method get_indexStart addr 0x2cebce8 size 0x8 virtual false final false
  inline int32_t get_indexStart();

  /// @brief Method set_indexStart addr 0x2cebcf0 size 0x8 virtual false final false
  inline void set_indexStart(int32_t value);

  /// @brief Method get_indexCount addr 0x2cebcf8 size 0x8 virtual false final false
  inline int32_t get_indexCount();

  /// @brief Method set_indexCount addr 0x2cebd00 size 0x8 virtual false final false
  inline void set_indexCount(int32_t value);

  /// @brief Method get_baseVertex addr 0x2cebd08 size 0x8 virtual false final false
  inline int32_t get_baseVertex();

  /// @brief Method set_baseVertex addr 0x2cebd10 size 0x8 virtual false final false
  inline void set_baseVertex(int32_t value);

  /// @brief Method get_firstVertex addr 0x2cebd18 size 0x8 virtual false final false
  inline int32_t get_firstVertex();

  /// @brief Method set_firstVertex addr 0x2cebd20 size 0x8 virtual false final false
  inline void set_firstVertex(int32_t value);

  /// @brief Method get_vertexCount addr 0x2cebd28 size 0x8 virtual false final false
  inline int32_t get_vertexCount();

  /// @brief Method set_vertexCount addr 0x2cebd30 size 0x8 virtual false final false
  inline void set_vertexCount(int32_t value);

  /// @brief Method ToString addr 0x2cebd38 size 0x29c virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "_bounds_k__BackingField", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "_topology_k__BackingField", ty:
  // "::UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "_indexStart_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_indexCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_baseVertex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_firstVertex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_vertexCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SubMeshDescriptor(::UnityEngine::Bounds _bounds_k__BackingField, ::UnityEngine::MeshTopology _topology_k__BackingField, int32_t _indexStart_k__BackingField,
                              int32_t _indexCount_k__BackingField, int32_t _baseVertex_k__BackingField, int32_t _firstVertex_k__BackingField, int32_t _vertexCount_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SubMeshDescriptor();

  /// @brief Field <bounds>k__BackingField, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Bounds _bounds_k__BackingField;

  /// @brief Field <topology>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::MeshTopology _topology_k__BackingField;

  /// @brief Field <indexStart>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t _indexStart_k__BackingField;

  /// @brief Field <indexCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t _indexCount_k__BackingField;

  /// @brief Field <baseVertex>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t _baseVertex_k__BackingField;

  /// @brief Field <firstVertex>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t _firstVertex_k__BackingField;

  /// @brief Field <vertexCount>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t _vertexCount_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SubMeshDescriptor, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SubMeshDescriptor, "UnityEngine.Rendering", "SubMeshDescriptor");
