#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleFloat)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleFloat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleFloat);
// Type: UnityEngine.UIElements::StyleFloat
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7297))
// CS Name: ::UnityEngine.UIElements::StyleFloat
struct CORDL_TYPE StyleFloat {
public:
  // Declarations
  __declspec(property(get = get_value)) float_t value;

  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<float_t>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<float_t>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFloat>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleFloat>*();

  /// @brief Method get_value addr 0x2e70994 size 0x18 virtual true final true
  inline float_t get_value();

  /// @brief Method get_keyword addr 0x2e709ac size 0x8 virtual true final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method .ctor addr 0x2e709b4 size 0xc virtual false final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor addr 0x2e709cc size 0x8 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor addr 0x2e709c0 size 0xc virtual false final false
  inline void _ctor(float_t v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Equality addr 0x2e709d4 size 0x28 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleFloat lhs, ::UnityEngine::UIElements::StyleFloat rhs);

  /// @brief Method op_Implicit addr 0x2e709fc size 0x8 virtual false final false
  static inline ::UnityEngine::UIElements::StyleFloat op_Implicit___UnityEngine__UIElements__StyleFloat(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit addr 0x2e70a04 size 0x8 virtual false final false
  static inline ::UnityEngine::UIElements::StyleFloat op_Implicit___UnityEngine__UIElements__StyleFloat(float_t v);

  /// @brief Method Equals addr 0x2e70a0c size 0x28 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::StyleFloat other);

  /// @brief Method Equals addr 0x2e70a34 size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e70ac0 size 0x28 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2e70ae8 size 0x78 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "",
  // def_value: None }]
  constexpr StyleFloat(float_t m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleFloat();

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_Keyword, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleFloat, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleFloat, "UnityEngine.UIElements", "StyleFloat");
