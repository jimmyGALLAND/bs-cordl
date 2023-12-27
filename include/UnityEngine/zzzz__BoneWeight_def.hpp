#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoneWeight)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct BoneWeight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoneWeight);
// Type: UnityEngine::BoneWeight
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10134))
// CS Name: ::UnityEngine::BoneWeight
struct CORDL_TYPE BoneWeight {
public:
  // Declarations
  __declspec(property(get = get_weight0, put = set_weight0)) float_t weight0;

  __declspec(property(get = get_weight1, put = set_weight1)) float_t weight1;

  __declspec(property(get = get_weight2, put = set_weight2)) float_t weight2;

  __declspec(property(get = get_weight3, put = set_weight3)) float_t weight3;

  __declspec(property(get = get_boneIndex0, put = set_boneIndex0)) int32_t boneIndex0;

  __declspec(property(get = get_boneIndex1, put = set_boneIndex1)) int32_t boneIndex1;

  __declspec(property(get = get_boneIndex2, put = set_boneIndex2)) int32_t boneIndex2;

  __declspec(property(get = get_boneIndex3, put = set_boneIndex3)) int32_t boneIndex3;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoneWeight>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::BoneWeight>*();

  /// @brief Method get_weight0 addr 0x2cc425c size 0x8 virtual false final false
  inline float_t get_weight0();

  /// @brief Method set_weight0 addr 0x2cc4264 size 0x8 virtual false final false
  inline void set_weight0(float_t value);

  /// @brief Method get_weight1 addr 0x2cc426c size 0x8 virtual false final false
  inline float_t get_weight1();

  /// @brief Method set_weight1 addr 0x2cc4274 size 0x8 virtual false final false
  inline void set_weight1(float_t value);

  /// @brief Method get_weight2 addr 0x2cc427c size 0x8 virtual false final false
  inline float_t get_weight2();

  /// @brief Method set_weight2 addr 0x2cc4284 size 0x8 virtual false final false
  inline void set_weight2(float_t value);

  /// @brief Method get_weight3 addr 0x2cc428c size 0x8 virtual false final false
  inline float_t get_weight3();

  /// @brief Method set_weight3 addr 0x2cc4294 size 0x8 virtual false final false
  inline void set_weight3(float_t value);

  /// @brief Method get_boneIndex0 addr 0x2cc429c size 0x8 virtual false final false
  inline int32_t get_boneIndex0();

  /// @brief Method set_boneIndex0 addr 0x2cc42a4 size 0x8 virtual false final false
  inline void set_boneIndex0(int32_t value);

  /// @brief Method get_boneIndex1 addr 0x2cc42ac size 0x8 virtual false final false
  inline int32_t get_boneIndex1();

  /// @brief Method set_boneIndex1 addr 0x2cc42b4 size 0x8 virtual false final false
  inline void set_boneIndex1(int32_t value);

  /// @brief Method get_boneIndex2 addr 0x2cc42bc size 0x8 virtual false final false
  inline int32_t get_boneIndex2();

  /// @brief Method set_boneIndex2 addr 0x2cc42c4 size 0x8 virtual false final false
  inline void set_boneIndex2(int32_t value);

  /// @brief Method get_boneIndex3 addr 0x2cc42cc size 0x8 virtual false final false
  inline int32_t get_boneIndex3();

  /// @brief Method set_boneIndex3 addr 0x2cc42d4 size 0x8 virtual false final false
  inline void set_boneIndex3(int32_t value);

  /// @brief Method GetHashCode addr 0x2cc42dc size 0x108 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2cc43e4 size 0x88 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals addr 0x2cc446c size 0xd8 virtual true final true
  inline bool Equals(::UnityEngine::BoneWeight other);

  // Ctor Parameters [CppParam { name: "m_Weight0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Weight2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Weight3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex0", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BoneIndex2", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_BoneIndex3", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BoneWeight(float_t m_Weight0, float_t m_Weight1, float_t m_Weight2, float_t m_Weight3, int32_t m_BoneIndex0, int32_t m_BoneIndex1, int32_t m_BoneIndex2, int32_t m_BoneIndex3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BoneWeight();

  /// @brief Field m_Weight0, offset: 0x0, size: 0x4, def value: None
  float_t m_Weight0;

  /// @brief Field m_Weight1, offset: 0x4, size: 0x4, def value: None
  float_t m_Weight1;

  /// @brief Field m_Weight2, offset: 0x8, size: 0x4, def value: None
  float_t m_Weight2;

  /// @brief Field m_Weight3, offset: 0xc, size: 0x4, def value: None
  float_t m_Weight3;

  /// @brief Field m_BoneIndex0, offset: 0x10, size: 0x4, def value: None
  int32_t m_BoneIndex0;

  /// @brief Field m_BoneIndex1, offset: 0x14, size: 0x4, def value: None
  int32_t m_BoneIndex1;

  /// @brief Field m_BoneIndex2, offset: 0x18, size: 0x4, def value: None
  int32_t m_BoneIndex2;

  /// @brief Field m_BoneIndex3, offset: 0x1c, size: 0x4, def value: None
  int32_t m_BoneIndex3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::BoneWeight, 0x20>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoneWeight, "UnityEngine", "BoneWeight");
