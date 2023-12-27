#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectorMatchRecord)
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct SelectorMatchRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord);
// Type: UnityEngine.UIElements.StyleSheets::SelectorMatchRecord
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7469))
// CS Name: ::UnityEngine.UIElements.StyleSheets::SelectorMatchRecord
struct CORDL_TYPE SelectorMatchRecord {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2de9884 size 0x14 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheet* sheet, int32_t styleSheetIndexInStack);

  /// @brief Method Compare addr 0x2de9898 size 0xe8 virtual false final false
  static inline int32_t Compare(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b);

  // Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: None }, CppParam { name: "styleSheetIndexInStack", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: None }]
  constexpr SelectorMatchRecord(::UnityEngine::UIElements::StyleSheet* sheet, int32_t styleSheetIndexInStack, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectorMatchRecord();

  /// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* sheet;

  /// @brief Field styleSheetIndexInStack, offset: 0x8, size: 0x4, def value: None
  int32_t styleSheetIndexInStack;

  /// @brief Field complexSelector, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleComplexSelector* complexSelector;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord, "UnityEngine.UIElements.StyleSheets", "SelectorMatchRecord");
