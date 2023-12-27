#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshInfo)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
struct VertexSortingOrder;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MeshInfo);
// Type: UnityEngine.TextCore.Text::MeshInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10250))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13730))
// CS Name: ::UnityEngine.TextCore.Text::MeshInfo
struct CORDL_TYPE MeshInfo {
public:
  // Declarations
  /// @brief Field k_DefaultColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DefaultColor, put = setStaticF_k_DefaultColor))::UnityEngine::Color32 k_DefaultColor;

  static inline void setStaticF_k_DefaultColor(::UnityEngine::Color32 value);

  static inline ::UnityEngine::Color32 getStaticF_k_DefaultColor();

  /// @brief Method .ctor addr 0x2d4b52c size 0x354 virtual false final false
  inline void _ctor(int32_t size);

  /// @brief Method ResizeMeshInfo addr 0x2d4b880 size 0x1e8 virtual false final false
  inline void ResizeMeshInfo(int32_t size);

  /// @brief Method Clear addr 0x2d481b8 size 0x2c virtual false final false
  inline void Clear(bool uploadChanges);

  /// @brief Method ClearUnusedVertices addr 0x2d4ba68 size 0x3c virtual false final false
  inline void ClearUnusedVertices();

  /// @brief Method SortGeometry addr 0x2d4baa4 size 0x7c virtual false final false
  inline void SortGeometry(::UnityEngine::TextCore::Text::VertexSortingOrder order);

  /// @brief Method SwapVertexData addr 0x2d4bb20 size 0x58c virtual false final false
  inline void SwapVertexData(int32_t src, int32_t dst);

  // Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertices", ty:
  // "::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>", modifiers: "", def_value: None }, CppParam { name: "uvs0", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty:
  // "::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty:
  // "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }]
  constexpr MeshInfo(int32_t vertexCount, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs0,
                     ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2, ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32,
                     ::ArrayW<int32_t, ::Array<int32_t>*> triangles, ::UnityEngine::Material* material) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshInfo();

  /// @brief Field vertexCount, offset: 0x0, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field vertices, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices;

  /// @brief Field uvs0, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs0;

  /// @brief Field uvs2, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> uvs2;

  /// @brief Field colors32, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors32;

  /// @brief Field triangles, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> triangles;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Material* material;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MeshInfo, 0x38>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MeshInfo, "UnityEngine.TextCore.Text", "MeshInfo");
