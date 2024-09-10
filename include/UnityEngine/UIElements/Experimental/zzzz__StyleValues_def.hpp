#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/StyleValues.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(StyleValues)
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
class StyleValueCollection;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Experimental::StyleValues);
// Type: UnityEngine.UIElements.Experimental::StyleValues
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.Experimental::StyleValues
struct CORDL_TYPE StyleValues {
public:
// Declarations
 __declspec(property(put=set_backgroundColor)) ::UnityEngine::Color  backgroundColor;

 __declspec(property(put=set_borderBottomLeftRadius)) float_t  borderBottomLeftRadius;

 __declspec(property(put=set_borderBottomRightRadius)) float_t  borderBottomRightRadius;

 __declspec(property(put=set_borderBottomWidth)) float_t  borderBottomWidth;

 __declspec(property(put=set_borderColor)) ::UnityEngine::Color  borderColor;

 __declspec(property(put=set_borderLeftWidth)) float_t  borderLeftWidth;

 __declspec(property(put=set_borderRightWidth)) float_t  borderRightWidth;

 __declspec(property(put=set_borderTopLeftRadius)) float_t  borderTopLeftRadius;

 __declspec(property(put=set_borderTopRightRadius)) float_t  borderTopRightRadius;

 __declspec(property(put=set_borderTopWidth)) float_t  borderTopWidth;

 __declspec(property(put=set_bottom)) float_t  bottom;

 __declspec(property(put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(put=set_flexGrow)) float_t  flexGrow;

 __declspec(property(put=set_flexShrink)) float_t  flexShrink;

 __declspec(property(put=set_height)) float_t  height;

 __declspec(property(put=set_left)) float_t  left;

 __declspec(property(put=set_marginBottom)) float_t  marginBottom;

 __declspec(property(put=set_marginLeft)) float_t  marginLeft;

 __declspec(property(put=set_marginRight)) float_t  marginRight;

 __declspec(property(put=set_marginTop)) float_t  marginTop;

 __declspec(property(put=set_opacity)) float_t  opacity;

 __declspec(property(put=set_paddingBottom)) float_t  paddingBottom;

 __declspec(property(put=set_paddingLeft)) float_t  paddingLeft;

 __declspec(property(put=set_paddingRight)) float_t  paddingRight;

 __declspec(property(get=get_paddingTop, put=set_paddingTop)) float_t  paddingTop;

 __declspec(property(put=set_right)) float_t  right;

 __declspec(property(put=set_top)) float_t  top;

 __declspec(property(put=set_unityBackgroundImageTintColor)) ::UnityEngine::Color  unityBackgroundImageTintColor;

 __declspec(property(put=set_width)) float_t  width;

/// @brief Method SetValue, addr 0x494b93c, size 0x84, virtual false, abstract: false, final false
inline void SetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::Color  value) ;

/// @brief Method SetValue, addr 0x494b874, size 0x84, virtual false, abstract: false, final false
inline void SetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, float_t  value) ;

/// @brief Method Values, addr 0x494ba54, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleValueCollection* Values() ;

/// @brief Method get_paddingTop, addr 0x494ba1c, size 0x38, virtual false, abstract: false, final false
inline float_t get_paddingTop() ;

/// @brief Method set_backgroundColor, addr 0x494b9c0, size 0x8, virtual false, abstract: false, final false
inline void set_backgroundColor(::UnityEngine::Color  value) ;

/// @brief Method set_borderBottomLeftRadius, addr 0x494bb24, size 0x8, virtual false, abstract: false, final false
inline void set_borderBottomLeftRadius(float_t  value) ;

/// @brief Method set_borderBottomRightRadius, addr 0x494bb2c, size 0xc, virtual false, abstract: false, final false
inline void set_borderBottomRightRadius(float_t  value) ;

/// @brief Method set_borderBottomWidth, addr 0x494bb00, size 0xc, virtual false, abstract: false, final false
inline void set_borderBottomWidth(float_t  value) ;

/// @brief Method set_borderColor, addr 0x494b9d4, size 0xc, virtual false, abstract: false, final false
inline void set_borderColor(::UnityEngine::Color  value) ;

/// @brief Method set_borderLeftWidth, addr 0x494badc, size 0xc, virtual false, abstract: false, final false
inline void set_borderLeftWidth(float_t  value) ;

/// @brief Method set_borderRightWidth, addr 0x494bae8, size 0xc, virtual false, abstract: false, final false
inline void set_borderRightWidth(float_t  value) ;

/// @brief Method set_borderTopLeftRadius, addr 0x494bb0c, size 0xc, virtual false, abstract: false, final false
inline void set_borderTopLeftRadius(float_t  value) ;

/// @brief Method set_borderTopRightRadius, addr 0x494bb18, size 0xc, virtual false, abstract: false, final false
inline void set_borderTopRightRadius(float_t  value) ;

/// @brief Method set_borderTopWidth, addr 0x494baf4, size 0xc, virtual false, abstract: false, final false
inline void set_borderTopWidth(float_t  value) ;

/// @brief Method set_bottom, addr 0x494b928, size 0xc, virtual false, abstract: false, final false
inline void set_bottom(float_t  value) ;

/// @brief Method set_color, addr 0x494b934, size 0x8, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_flexGrow, addr 0x494bb44, size 0xc, virtual false, abstract: false, final false
inline void set_flexGrow(float_t  value) ;

/// @brief Method set_flexShrink, addr 0x494bb50, size 0xc, virtual false, abstract: false, final false
inline void set_flexShrink(float_t  value) ;

/// @brief Method set_height, addr 0x494b910, size 0xc, virtual false, abstract: false, final false
inline void set_height(float_t  value) ;

/// @brief Method set_left, addr 0x494b8f8, size 0xc, virtual false, abstract: false, final false
inline void set_left(float_t  value) ;

/// @brief Method set_marginBottom, addr 0x494ba04, size 0xc, virtual false, abstract: false, final false
inline void set_marginBottom(float_t  value) ;

/// @brief Method set_marginLeft, addr 0x494b9e0, size 0xc, virtual false, abstract: false, final false
inline void set_marginLeft(float_t  value) ;

/// @brief Method set_marginRight, addr 0x494b9f8, size 0xc, virtual false, abstract: false, final false
inline void set_marginRight(float_t  value) ;

/// @brief Method set_marginTop, addr 0x494b9ec, size 0xc, virtual false, abstract: false, final false
inline void set_marginTop(float_t  value) ;

/// @brief Method set_opacity, addr 0x494bb38, size 0xc, virtual false, abstract: false, final false
inline void set_opacity(float_t  value) ;

/// @brief Method set_paddingBottom, addr 0x494bad0, size 0xc, virtual false, abstract: false, final false
inline void set_paddingBottom(float_t  value) ;

/// @brief Method set_paddingLeft, addr 0x494ba10, size 0xc, virtual false, abstract: false, final false
inline void set_paddingLeft(float_t  value) ;

/// @brief Method set_paddingRight, addr 0x494bac4, size 0xc, virtual false, abstract: false, final false
inline void set_paddingRight(float_t  value) ;

/// @brief Method set_paddingTop, addr 0x494bab8, size 0xc, virtual false, abstract: false, final false
inline void set_paddingTop(float_t  value) ;

/// @brief Method set_right, addr 0x494b91c, size 0xc, virtual false, abstract: false, final false
inline void set_right(float_t  value) ;

/// @brief Method set_top, addr 0x494b868, size 0xc, virtual false, abstract: false, final false
inline void set_top(float_t  value) ;

/// @brief Method set_unityBackgroundImageTintColor, addr 0x494b9c8, size 0xc, virtual false, abstract: false, final false
inline void set_unityBackgroundImageTintColor(::UnityEngine::Color  value) ;

/// @brief Method set_width, addr 0x494b904, size 0xc, virtual false, abstract: false, final false
inline void set_width(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StyleValues() ;

// Ctor Parameters [CppParam { name: "m_StyleValues", ty: "::UnityEngine::UIElements::StyleValueCollection*", modifiers: "", def_value: None }]
constexpr StyleValues(::UnityEngine::UIElements::StyleValueCollection*  m_StyleValues) noexcept;

/// @brief Field m_StyleValues, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleValueCollection*  m_StyleValues;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::StyleValues, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::StyleValues, m_StyleValues) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements::Experimental
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::StyleValues, "UnityEngine.UIElements.Experimental", "StyleValues");
