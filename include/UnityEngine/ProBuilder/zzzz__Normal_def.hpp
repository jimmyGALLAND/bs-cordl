#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Normal)
namespace UnityEngine {
struct Vector4;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Normal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Normal);
// Type: UnityEngine.ProBuilder::Normal
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10246)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12145))
// CS Name: ::UnityEngine.ProBuilder::Normal
struct CORDL_TYPE Normal {
public:
  // Declarations
  __declspec(property(get = get_normal, put = set_normal))::UnityEngine::Vector3 normal;

  __declspec(property(get = get_tangent, put = set_tangent))::UnityEngine::Vector4 tangent;

  __declspec(property(get = get_bitangent, put = set_bitangent))::UnityEngine::Vector3 bitangent;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Normal>*();

  /// @brief Method get_normal addr 0x2b54a9c size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Method set_normal addr 0x2b54aa8 size 0xc virtual false final false
  inline void set_normal(::UnityEngine::Vector3 value);

  /// @brief Method get_tangent addr 0x2b54ab4 size 0xc virtual false final false
  inline ::UnityEngine::Vector4 get_tangent();

  /// @brief Method set_tangent addr 0x2b54ac0 size 0xc virtual false final false
  inline void set_tangent(::UnityEngine::Vector4 value);

  /// @brief Method get_bitangent addr 0x2b54acc size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_bitangent();

  /// @brief Method set_bitangent addr 0x2b54ad8 size 0xc virtual false final false
  inline void set_bitangent(::UnityEngine::Vector3 value);

  /// @brief Method Equals addr 0x2b54ae4 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2b54c0c size 0x64 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2b54b74 size 0x98 virtual true final true
  inline bool Equals(::UnityEngine::ProBuilder::Normal other);

  /// @brief Method op_Equality addr 0x2b54c70 size 0x30 virtual false final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b);

  /// @brief Method op_Inequality addr 0x2b54ca0 size 0x48 virtual false final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b);

  // Ctor Parameters [CppParam { name: "_normal_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_tangent_k__BackingField", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_bitangent_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr Normal(::UnityEngine::Vector3 _normal_k__BackingField, ::UnityEngine::Vector4 _tangent_k__BackingField, ::UnityEngine::Vector3 _bitangent_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Normal();

  /// @brief Field <normal>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _normal_k__BackingField;

  /// @brief Field <tangent>k__BackingField, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Vector4 _tangent_k__BackingField;

  /// @brief Field <bitangent>k__BackingField, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 _bitangent_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Normal, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Normal, "UnityEngine.ProBuilder", "Normal");
