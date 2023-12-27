#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleScale)
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleScale;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleScale);
// Type: UnityEngine.UIElements::StyleScale
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7318)), TypeDefinitionIndex(TypeDefinitionIndex(7300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7283))
// CS Name: ::UnityEngine.UIElements::StyleScale
struct CORDL_TYPE StyleScale {
public:
  // Declarations
  __declspec(property(get = get_value))::UnityEngine::UIElements::Scale value;

  __declspec(property(get = get_keyword))::UnityEngine::UIElements::StyleKeyword keyword;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Scale>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Scale>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleScale>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleScale>*();

  /// @brief Method get_value addr 0x2e6ca58 size 0x34 virtual true final true
  inline ::UnityEngine::UIElements::Scale get_value();

  /// @brief Method get_keyword addr 0x2e6ca8c size 0x8 virtual true final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method .ctor addr 0x2e6ca94 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor addr 0x2e6caa0 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::UIElements::Scale v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Equality addr 0x2e6caac size 0x70 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleScale lhs, ::UnityEngine::UIElements::StyleScale rhs);

  /// @brief Method op_Implicit addr 0x2e6cb70 size 0xc virtual false final false
  static inline ::UnityEngine::UIElements::StyleScale op_Implicit___UnityEngine__UIElements__StyleScale(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method Equals addr 0x2e6cb7c size 0x74 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::StyleScale other);

  /// @brief Method Equals addr 0x2e6cbf0 size 0xd0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e6ccc0 size 0x24 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2e6cd34 size 0x88 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Scale", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword",
  // modifiers: "", def_value: None }]
  constexpr StyleScale(::UnityEngine::UIElements::Scale m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleScale();

  /// @brief Field m_Value, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::UIElements::Scale m_Value;

  /// @brief Field m_Keyword, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleScale, 0x14>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleScale, "UnityEngine.UIElements", "StyleScale");
