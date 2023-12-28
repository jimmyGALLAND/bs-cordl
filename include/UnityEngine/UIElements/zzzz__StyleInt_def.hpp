#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleInt)
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleInt);
// Type: UnityEngine.UIElements::StyleInt
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7323))
// CS Name: ::UnityEngine.UIElements::StyleInt
struct CORDL_TYPE StyleInt {
public:
  // Declarations
  __declspec(property(get = get_value)) int32_t value;

  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<int32_t>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<int32_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleInt>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleInt>*();

  /// @brief Method get_value addr 0x2e746a4 size 0x18 virtual true final true
  inline int32_t get_value();

  /// @brief Method get_keyword addr 0x2e746bc size 0x8 virtual true final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method .ctor addr 0x2e76424 size 0x8 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor addr 0x2e71e14 size 0x8 virtual false final false
  inline void _ctor(int32_t v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Equality addr 0x2e7642c size 0x20 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleInt lhs, ::UnityEngine::UIElements::StyleInt rhs);

  /// @brief Method op_Implicit addr 0x2e71e1c size 0x8 virtual false final false
  static inline ::UnityEngine::UIElements::StyleInt op_Implicit___UnityEngine__UIElements__StyleInt(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method Equals addr 0x2e7644c size 0x20 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::StyleInt other);

  /// @brief Method Equals addr 0x2e7646c size 0x84 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e764f0 size 0x14 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2e76504 size 0x78 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "",
  // def_value: None }]
  constexpr StyleInt(int32_t m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleInt();

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  int32_t m_Value;

  /// @brief Field m_Keyword, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleInt, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleInt, "UnityEngine.UIElements", "StyleInt");
