#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScalableImage)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::ScalableImage);
// Type: UnityEngine.UIElements.StyleSheets::ScalableImage
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7473))
// CS Name: ::UnityEngine.UIElements.StyleSheets::ScalableImage
struct CORDL_TYPE ScalableImage {
public:
  // Declarations
  /// @brief Method ToString addr 0x2de5e24 size 0x164 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "normalImage", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: None }, CppParam { name: "highResolutionImage", ty: "::UnityEngine::Texture2D*",
  // modifiers: "", def_value: None }]
  constexpr ScalableImage(::UnityEngine::Texture2D* normalImage, ::UnityEngine::Texture2D* highResolutionImage) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScalableImage();

  /// @brief Field normalImage, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Texture2D* normalImage;

  /// @brief Field highResolutionImage, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Texture2D* highResolutionImage;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::ScalableImage, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::ScalableImage, "UnityEngine.UIElements.StyleSheets", "ScalableImage");
