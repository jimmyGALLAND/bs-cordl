#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__MeshGenerationStatus_def.hpp"
#include "UnityEngine/XR/zzzz__MeshId_def.hpp"
#include "UnityEngine/XR/zzzz__MeshVertexAttributes_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationResult)
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct MeshId;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine::XR {
struct MeshGenerationStatus;
}
namespace UnityEngine::XR {
struct MeshVertexAttributes;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::MeshGenerationResult);
// Type: UnityEngine.XR::MeshGenerationResult
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(15634)), TypeDefinitionIndex(TypeDefinitionIndex(10249)),
// TypeDefinitionIndex(TypeDefinitionIndex(15637)), TypeDefinitionIndex(TypeDefinitionIndex(15633))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15636)) CS Name:
// ::UnityEngine.XR::MeshGenerationResult
struct CORDL_TYPE MeshGenerationResult {
public:
  // Declarations
  __declspec(property(get = get_MeshId))::UnityEngine::XR::MeshId MeshId;

  __declspec(property(get = get_Mesh))::UnityEngine::Mesh* Mesh;

  __declspec(property(get = get_MeshCollider))::UnityEngine::MeshCollider* MeshCollider;

  __declspec(property(get = get_Status))::UnityEngine::XR::MeshGenerationStatus Status;

  __declspec(property(get = get_Attributes))::UnityEngine::XR::MeshVertexAttributes Attributes;

  __declspec(property(get = get_Position))::UnityEngine::Vector3 Position;

  __declspec(property(get = get_Rotation))::UnityEngine::Quaternion Rotation;

  __declspec(property(get = get_Scale))::UnityEngine::Vector3 Scale;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>*();

  /// @brief Method get_MeshId addr 0x2eb3928 size 0xc virtual false final false
  inline ::UnityEngine::XR::MeshId get_MeshId();

  /// @brief Method get_Mesh addr 0x2eb3934 size 0x8 virtual false final false
  inline ::UnityEngine::Mesh* get_Mesh();

  /// @brief Method get_MeshCollider addr 0x2eb393c size 0x8 virtual false final false
  inline ::UnityEngine::MeshCollider* get_MeshCollider();

  /// @brief Method get_Status addr 0x2eb3944 size 0x8 virtual false final false
  inline ::UnityEngine::XR::MeshGenerationStatus get_Status();

  /// @brief Method get_Attributes addr 0x2eb394c size 0x8 virtual false final false
  inline ::UnityEngine::XR::MeshVertexAttributes get_Attributes();

  /// @brief Method get_Position addr 0x2eb3954 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_Position();

  /// @brief Method get_Rotation addr 0x2eb3960 size 0xc virtual false final false
  inline ::UnityEngine::Quaternion get_Rotation();

  /// @brief Method get_Scale addr 0x2eb396c size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_Scale();

  /// @brief Method Equals addr 0x2eb3978 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2eb3a08 size 0x184 virtual true final true
  inline bool Equals(::UnityEngine::XR::MeshGenerationResult other);

  /// @brief Method GetHashCode addr 0x2eb3b8c size 0x208 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "_MeshId_k__BackingField", ty: "::UnityEngine::XR::MeshId", modifiers: "", def_value: None }, CppParam { name: "_Mesh_k__BackingField", ty:
  // "::UnityEngine::Mesh*", modifiers: "", def_value: None }, CppParam { name: "_MeshCollider_k__BackingField", ty: "::UnityEngine::MeshCollider*", modifiers: "", def_value: None }, CppParam { name:
  // "_Status_k__BackingField", ty: "::UnityEngine::XR::MeshGenerationStatus", modifiers: "", def_value: None }, CppParam { name: "_Attributes_k__BackingField", ty:
  // "::UnityEngine::XR::MeshVertexAttributes", modifiers: "", def_value: None }, CppParam { name: "_Timestamp_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "_Position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "_Scale_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr MeshGenerationResult(::UnityEngine::XR::MeshId _MeshId_k__BackingField, ::UnityEngine::Mesh* _Mesh_k__BackingField, ::UnityEngine::MeshCollider* _MeshCollider_k__BackingField,
                                 ::UnityEngine::XR::MeshGenerationStatus _Status_k__BackingField, ::UnityEngine::XR::MeshVertexAttributes _Attributes_k__BackingField,
                                 uint64_t _Timestamp_k__BackingField, ::UnityEngine::Vector3 _Position_k__BackingField, ::UnityEngine::Quaternion _Rotation_k__BackingField,
                                 ::UnityEngine::Vector3 _Scale_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationResult();

  /// @brief Field <MeshId>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::XR::MeshId _MeshId_k__BackingField;

  /// @brief Field <Mesh>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Mesh* _Mesh_k__BackingField;

  /// @brief Field <MeshCollider>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::MeshCollider* _MeshCollider_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::MeshGenerationStatus _Status_k__BackingField;

  /// @brief Field <Attributes>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::XR::MeshVertexAttributes _Attributes_k__BackingField;

  /// @brief Field <Timestamp>k__BackingField, offset: 0x28, size: 0x8, def value: None
  uint64_t _Timestamp_k__BackingField;

  /// @brief Field <Position>k__BackingField, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 _Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion _Rotation_k__BackingField;

  /// @brief Field <Scale>k__BackingField, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 _Scale_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::MeshGenerationResult, 0x58>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshGenerationResult, "UnityEngine.XR", "MeshGenerationResult");
