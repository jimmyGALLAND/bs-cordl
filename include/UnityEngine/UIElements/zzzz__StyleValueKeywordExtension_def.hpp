#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueKeywordExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StyleValueKeywordExtension)
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueKeywordExtension;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleValueKeywordExtension);
// Type: UnityEngine.UIElements::StyleValueKeywordExtension
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::StyleValueKeywordExtension*
class CORDL_TYPE StyleValueKeywordExtension : public ::System::Object {
public:
// Declarations
/// @brief Method ToUssString, addr 0x49f86fc, size 0x11c, virtual false, abstract: false, final false
static inline ::StringW ToUssString(::UnityEngine::UIElements::StyleValueKeyword  svk) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyleValueKeywordExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyleValueKeywordExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleValueKeywordExtension(StyleValueKeywordExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueKeywordExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleValueKeywordExtension(StyleValueKeywordExtension const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueKeywordExtension, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueKeywordExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueKeywordExtension*, "UnityEngine.UIElements", "StyleValueKeywordExtension");
