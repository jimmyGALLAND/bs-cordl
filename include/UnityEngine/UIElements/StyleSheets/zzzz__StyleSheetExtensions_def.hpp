#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StyleSheetExtensions)
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions);
// Type: UnityEngine.UIElements.StyleSheets::StyleSheetExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7461))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleSheetExtensions*
class CORDL_TYPE StyleSheetExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadAsString addr 0x2de5a18 size 0x2dc virtual false final false
  static inline ::StringW ReadAsString(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleValueHandle handle);

  /// @brief Method IsVarFunction addr 0x2de5f88 size 0x34 virtual false final false
  static inline bool IsVarFunction(::UnityEngine::UIElements::StyleValueHandle handle);

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheetExtensions(StyleSheetExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheetExtensions(StyleSheetExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheetExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*, "UnityEngine.UIElements.StyleSheets", "StyleSheetExtensions");
