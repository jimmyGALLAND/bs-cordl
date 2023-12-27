#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hash128)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
// Forward declare root types
namespace UnityEngine {
struct Hash128;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Hash128);
// Type: UnityEngine::Hash128
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10261))
// CS Name: ::UnityEngine::Hash128
struct CORDL_TYPE Hash128 {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Hash128>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Hash128>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Hash128>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Hash128>*();

  /// @brief Method get_isValid addr 0x2cddc00 size 0x20 virtual false final false
  inline bool get_isValid();

  /// @brief Method CompareTo addr 0x2cddc20 size 0x38 virtual true final true
  inline int32_t CompareTo(::UnityEngine::Hash128 rhs);

  /// @brief Method ToString addr 0x2cddca4 size 0xc virtual true final false
  inline ::StringW ToString();

  /// @brief Method Parse addr 0x2cddcf0 size 0x54 virtual false final false
  static inline ::UnityEngine::Hash128 Parse(::StringW hashString);

  /// @brief Method Hash128ToStringImpl addr 0x2cddcb0 size 0x40 virtual false final false
  static inline ::StringW Hash128ToStringImpl(::UnityEngine::Hash128 hash);

  /// @brief Method ComputeFromString addr 0x2cdddc4 size 0x44 virtual false final false
  static inline void ComputeFromString(::StringW data, ByRef<::UnityEngine::Hash128> hash);

  /// @brief Method Compute addr 0x2cdde08 size 0x54 virtual false final false
  static inline ::UnityEngine::Hash128 Compute(::StringW data);

  /// @brief Method Equals addr 0x2cdde5c size 0x84 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2cddef8 size 0x1c virtual true final true
  inline bool Equals(::UnityEngine::Hash128 obj);

  /// @brief Method GetHashCode addr 0x2cddf14 size 0x34 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method CompareTo addr 0x2cddf48 size 0xa4 virtual true final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method op_Equality addr 0x2cddee0 size 0x18 virtual false final false
  static inline bool op_Equality(::UnityEngine::Hash128 hash1, ::UnityEngine::Hash128 hash2);

  /// @brief Method op_LessThan addr 0x2cddc58 size 0x18 virtual false final false
  static inline bool op_LessThan(::UnityEngine::Hash128 x, ::UnityEngine::Hash128 y);

  /// @brief Method op_GreaterThan addr 0x2cddc70 size 0x34 virtual false final false
  static inline bool op_GreaterThan(::UnityEngine::Hash128 x, ::UnityEngine::Hash128 y);

  /// @brief Method Parse_Injected addr 0x2cddd44 size 0x44 virtual false final false
  static inline void Parse_Injected(::StringW hashString, ByRef<::UnityEngine::Hash128> ret);

  /// @brief Method Hash128ToStringImpl_Injected addr 0x2cddd88 size 0x3c virtual false final false
  static inline ::StringW Hash128ToStringImpl_Injected(ByRef<::UnityEngine::Hash128> hash);

  // Ctor Parameters [CppParam { name: "u64_0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "u64_1", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr Hash128(uint64_t u64_0, uint64_t u64_1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hash128();

  /// @brief Field u64_0, offset: 0x0, size: 0x8, def value: None
  uint64_t u64_0;

  /// @brief Field u64_1, offset: 0x8, size: 0x8, def value: None
  uint64_t u64_1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Hash128, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Hash128, "UnityEngine", "Hash128");
