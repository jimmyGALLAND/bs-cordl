#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Substring)
namespace System {
class Object;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct StringComparison;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::Substring);
// Type: UnityEngine.InputSystem.Utilities::Substring
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6709))
// CS Name: ::UnityEngine.InputSystem.Utilities::Substring
struct CORDL_TYPE Substring {
public:
  // Declarations
  __declspec(property(get = get_isEmpty)) bool isEmpty;

  __declspec(property(get = get_length)) int32_t length;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_Item)) char16_t Item[];

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr operator ::System::IComparable_1<::UnityEngine::InputSystem::Utilities::Substring>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::Substring>*();

  /// @brief Method get_isEmpty addr 0x2a593c0 size 0x10 virtual false final false
  inline bool get_isEmpty();

  /// @brief Method .ctor addr 0x2a593d0 size 0x20 virtual false final false
  inline void _ctor(::StringW str);

  /// @brief Method .ctor addr 0x2a593f0 size 0xc virtual false final false
  inline void _ctor(::StringW str, int32_t index, int32_t length);

  /// @brief Method .ctor addr 0x2a593fc size 0x28 virtual false final false
  inline void _ctor(::StringW str, int32_t index);

  /// @brief Method Equals addr 0x2a59424 size 0xb4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2a59508 size 0xc0 virtual false final false
  inline bool Equals(::StringW other);

  /// @brief Method Equals addr 0x2a594d8 size 0x30 virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::Substring other);

  /// @brief Method Equals addr 0x2a595e4 size 0x80 virtual false final false
  inline bool Equals(::UnityEngine::InputSystem::Utilities::InternedString other);

  /// @brief Method CompareTo addr 0x2a595c8 size 0x1c virtual true final true
  inline int32_t CompareTo(::UnityEngine::InputSystem::Utilities::Substring other);

  /// @brief Method Compare addr 0x2a59664 size 0x28 virtual false final false
  static inline int32_t Compare(::UnityEngine::InputSystem::Utilities::Substring left, ::UnityEngine::InputSystem::Utilities::Substring right, ::System::StringComparison comparison);

  /// @brief Method StartsWith addr 0x2a5968c size 0x98 virtual false final false
  inline bool StartsWith(::StringW str);

  /// @brief Method Substr addr 0x2a59724 size 0x34 virtual false final false
  inline ::StringW Substr(int32_t index, int32_t length);

  /// @brief Method ToString addr 0x2a59758 size 0x68 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetHashCode addr 0x2a597c0 size 0x50 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2a59810 size 0x1c virtual false final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::Substring b);

  /// @brief Method op_Inequality addr 0x2a5982c size 0x1c virtual false final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::Substring b);

  /// @brief Method op_Equality addr 0x2a59848 size 0x2c virtual false final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::InternedString b);

  /// @brief Method op_Inequality addr 0x2a59874 size 0x30 virtual false final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::InternedString b);

  /// @brief Method op_Equality addr 0x2a598a4 size 0x30 virtual false final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::Substring b);

  /// @brief Method op_Inequality addr 0x2a598d4 size 0x34 virtual false final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::Substring b);

  /// @brief Method op_Implicit addr 0x2a59908 size 0x18 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::Substring op_Implicit___UnityEngine__InputSystem__Utilities__Substring(::StringW s);

  /// @brief Method get_length addr 0x2a59920 size 0x8 virtual false final false
  inline int32_t get_length();

  /// @brief Method get_index addr 0x2a59928 size 0x8 virtual false final false
  inline int32_t get_index();

  /// @brief Method get_Item addr 0x2a59930 size 0x84 virtual false final false
  inline char16_t get_Item(int32_t index);

  // Ctor Parameters [CppParam { name: "m_String", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Substring(::StringW m_String, int32_t m_Index, int32_t m_Length) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Substring();

  /// @brief Field m_String, offset: 0x0, size: 0x8, def value: None
  ::StringW m_String;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_Length, offset: 0xc, size: 0x4, def value: None
  int32_t m_Length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::Substring, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::Substring, "UnityEngine.InputSystem.Utilities", "Substring");
