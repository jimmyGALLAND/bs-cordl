#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexPickerEntry)
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct VertexPickerEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::VertexPickerEntry);
// Type: UnityEngine.ProBuilder::VertexPickerEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12192))
// CS Name: ::UnityEngine.ProBuilder::VertexPickerEntry
struct CORDL_TYPE VertexPickerEntry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh*", modifiers: "", def_value: None }, CppParam { name: "vertex", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "screenDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr VertexPickerEntry(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t vertex, float_t screenDistance, ::UnityEngine::Vector3 worldPosition) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexPickerEntry();

  /// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh* mesh;

  /// @brief Field vertex, offset: 0x8, size: 0x4, def value: None
  int32_t vertex;

  /// @brief Field screenDistance, offset: 0xc, size: 0x4, def value: None
  float_t screenDistance;

  /// @brief Field worldPosition, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 worldPosition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::VertexPickerEntry, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::VertexPickerEntry, "UnityEngine.ProBuilder", "VertexPickerEntry");
