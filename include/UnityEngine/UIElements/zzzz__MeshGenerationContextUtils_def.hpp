#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationContextUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationContextUtils)
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeBorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeRectParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshGenerationContextUtils;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshGenerationContextUtils);
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams);
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams);
// Type: ::BorderParams
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 200, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::MeshGenerationContextUtils::BorderParams
struct CORDL_TYPE __MeshGenerationContextUtils__BorderParams {
public:
// Declarations
/// @brief Method ToNativeParams, addr 0x49b4fe0, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams ToNativeParams() ;

// Ctor Parameters []
// @brief default ctor
constexpr __MeshGenerationContextUtils__BorderParams() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "topColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "bottomColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }]
constexpr __MeshGenerationContextUtils__BorderParams(::UnityEngine::Rect  rect, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Color  leftColor, ::UnityEngine::Color  topColor, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  bottomColor, float_t  leftWidth, float_t  topWidth, float_t  rightWidth, float_t  bottomWidth, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityW<::UnityEngine::Material>  material, ::UnityEngine::UIElements::ColorPage  leftColorPage, ::UnityEngine::UIElements::ColorPage  topColorPage, ::UnityEngine::UIElements::ColorPage  rightColorPage, ::UnityEngine::UIElements::ColorPage  bottomColorPage) noexcept;

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field playmodeTintColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  playmodeTintColor;

/// @brief Field leftColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  leftColor;

/// @brief Field topColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  topColor;

/// @brief Field rightColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  rightColor;

/// @brief Field bottomColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  bottomColor;

/// @brief Field leftWidth, offset: 0x60, size: 0x4, def value: None
 float_t  leftWidth;

/// @brief Field topWidth, offset: 0x64, size: 0x4, def value: None
 float_t  topWidth;

/// @brief Field rightWidth, offset: 0x68, size: 0x4, def value: None
 float_t  rightWidth;

/// @brief Field bottomWidth, offset: 0x6c, size: 0x4, def value: None
 float_t  bottomWidth;

/// @brief Field topLeftRadius, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  topLeftRadius;

/// @brief Field topRightRadius, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2  topRightRadius;

/// @brief Field bottomRightRadius, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomRightRadius;

/// @brief Field bottomLeftRadius, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomLeftRadius;

/// @brief Field material, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field leftColorPage, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  leftColorPage;

/// @brief Field topColorPage, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  topColorPage;

/// @brief Field rightColorPage, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  rightColorPage;

/// @brief Field bottomColorPage, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  bottomColorPage;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, playmodeTintColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, leftColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, rightColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, leftWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topWidth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, rightWidth) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomWidth) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topLeftRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topRightRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomRightRadius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomLeftRadius) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, material) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, leftColorPage) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, topColorPage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, rightColorPage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, bottomColorPage) == 0xb0, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::RectangleParams
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 300, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::MeshGenerationContextUtils::RectangleParams
struct CORDL_TYPE __MeshGenerationContextUtils__RectangleParams {
public:
// Declarations
/// @brief Method AdjustSpriteUVsForScaleMode, addr 0x49b5234, size 0x2e8, virtual false, abstract: false, final false
static inline void AdjustSpriteUVsForScaleMode(::UnityEngine::Rect  containerRect, ::UnityEngine::Rect  srcRect, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ByRef<::UnityEngine::Rect>  rectOut, ByRef<::UnityEngine::Rect>  uvOut) ;

/// @brief Method AdjustUVsForScaleMode, addr 0x49b5098, size 0x19c, virtual false, abstract: false, final false
static inline void AdjustUVsForScaleMode(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ByRef<::UnityEngine::Rect>  rectOut, ByRef<::UnityEngine::Rect>  uvOut) ;

/// @brief Method ApplyPackingRotation, addr 0x49b5754, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ApplyPackingRotation(::UnityEngine::Rect  uv, ::UnityEngine::SpritePackingRotation  rotation) ;

/// @brief Method ComputeGeomRect, addr 0x49b55f4, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ComputeGeomRect(::UnityEngine::Sprite*  sprite) ;

/// @brief Method ComputeUVRect, addr 0x49b56a4, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ComputeUVRect(::UnityEngine::Sprite*  sprite) ;

/// @brief Method HasRadius, addr 0x49b6618, size 0x74, virtual false, abstract: false, final false
inline bool HasRadius(float_t  epsilon) ;

/// @brief Method HasSlices, addr 0x49b668c, size 0x4c, virtual false, abstract: false, final false
inline bool HasSlices(float_t  epsilon) ;

/// @brief Method MakeSprite, addr 0x49b5960, size 0xb14, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeSprite(::UnityEngine::Rect  containerRect, ::UnityEngine::Rect  subRect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext, bool  hasRadius, ByRef<::UnityEngine::Vector4>  slices, bool  useForRepeat) ;

/// @brief Method MakeTextured, addr 0x49b57a4, size 0x1bc, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext) ;

/// @brief Method MakeVectorTextured, addr 0x49b6474, size 0x1a4, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams MakeVectorTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::UIElements::VectorImage*  vectorImage, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext) ;

/// @brief Method RectIntersection, addr 0x49b551c, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect RectIntersection(::UnityEngine::Rect  a, ::UnityEngine::Rect  b) ;

/// @brief Method ToNativeParams, addr 0x49b66d8, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams ToNativeParams(::UnityEngine::Rect  uvRegion) ;

// Ctor Parameters []
// @brief default ctor
constexpr __MeshGenerationContextUtils__RectangleParams() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "backgroundPositionX", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: None }, CppParam { name: "backgroundPositionY", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: None }, CppParam { name: "backgroundRepeat", ty: "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "", def_value: None }, CppParam { name: "backgroundSize", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "sprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "vectorImage", ty: "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "meshFlags", ty: "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers: "", def_value: None }]
constexpr __MeshGenerationContextUtils__RectangleParams(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Color  color, ::UnityEngine::Rect  subRect, ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionX, ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionY, ::UnityEngine::UIElements::BackgroundRepeat  backgroundRepeat, ::UnityEngine::UIElements::BackgroundSize  backgroundSize, ::UnityW<::UnityEngine::Texture>  texture, ::UnityW<::UnityEngine::Sprite>  sprite, ::UnityW<::UnityEngine::UIElements::VectorImage>  vectorImage, ::UnityW<::UnityEngine::Material>  material, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::Vector2  contentSize, ::UnityEngine::Vector2  textureSize, int32_t  leftSlice, int32_t  topSlice, int32_t  rightSlice, int32_t  bottomSlice, float_t  sliceScale, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Vector4  rectInset, ::UnityEngine::UIElements::ColorPage  colorPage, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  meshFlags) noexcept;

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field uv, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  uv;

/// @brief Field color, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field subRect, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rect  subRect;

/// @brief Field backgroundPositionX, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionX;

/// @brief Field backgroundPositionY, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionY;

/// @brief Field backgroundRepeat, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::UIElements::BackgroundRepeat  backgroundRepeat;

/// @brief Field backgroundSize, offset: 0x60, size: 0x14, def value: None
 ::UnityEngine::UIElements::BackgroundSize  backgroundSize;

/// @brief Field texture, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  texture;

/// @brief Field sprite, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  sprite;

/// @brief Field vectorImage, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VectorImage>  vectorImage;

/// @brief Field material, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field scaleMode, offset: 0x98, size: 0x4, def value: None
 ::UnityEngine::ScaleMode  scaleMode;

/// @brief Field playmodeTintColor, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  playmodeTintColor;

/// @brief Field topLeftRadius, offset: 0xac, size: 0x8, def value: None
 ::UnityEngine::Vector2  topLeftRadius;

/// @brief Field topRightRadius, offset: 0xb4, size: 0x8, def value: None
 ::UnityEngine::Vector2  topRightRadius;

/// @brief Field bottomRightRadius, offset: 0xbc, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomRightRadius;

/// @brief Field bottomLeftRadius, offset: 0xc4, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomLeftRadius;

/// @brief Field contentSize, offset: 0xcc, size: 0x8, def value: None
 ::UnityEngine::Vector2  contentSize;

/// @brief Field textureSize, offset: 0xd4, size: 0x8, def value: None
 ::UnityEngine::Vector2  textureSize;

/// @brief Field leftSlice, offset: 0xdc, size: 0x4, def value: None
 int32_t  leftSlice;

/// @brief Field topSlice, offset: 0xe0, size: 0x4, def value: None
 int32_t  topSlice;

/// @brief Field rightSlice, offset: 0xe4, size: 0x4, def value: None
 int32_t  rightSlice;

/// @brief Field bottomSlice, offset: 0xe8, size: 0x4, def value: None
 int32_t  bottomSlice;

/// @brief Field sliceScale, offset: 0xec, size: 0x4, def value: None
 float_t  sliceScale;

/// @brief Field spriteGeomRect, offset: 0xf0, size: 0x10, def value: None
 ::UnityEngine::Rect  spriteGeomRect;

/// @brief Field rectInset, offset: 0x100, size: 0x10, def value: None
 ::UnityEngine::Vector4  rectInset;

/// @brief Field colorPage, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  colorPage;

/// @brief Field meshFlags, offset: 0x118, size: 0x4, def value: None
 ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  meshFlags;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x120};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, uv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, subRect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, backgroundPositionX) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, backgroundPositionY) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, backgroundRepeat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, backgroundSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, texture) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, sprite) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, vectorImage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, material) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, scaleMode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, playmodeTintColor) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, topLeftRadius) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, topRightRadius) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, bottomRightRadius) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, bottomLeftRadius) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, contentSize) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, textureSize) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, leftSlice) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, topSlice) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, rightSlice) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, bottomSlice) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, sliceScale) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, spriteGeomRect) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, rectInset) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, colorPage) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, meshFlags) == 0x118, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MeshGenerationContextUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MeshGenerationContextUtils*
class CORDL_TYPE MeshGenerationContextUtils : public ::System::Object {
public:
// Declarations
using BorderParams = ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams;

using RectangleParams = ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams;

/// @brief Method AdjustBackgroundSizeForBorders, addr 0x49b4bc0, size 0x420, virtual false, abstract: false, final false
static inline void AdjustBackgroundSizeForBorders(::UnityEngine::UIElements::VisualElement*  visualElement, ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>  rectParams) ;

/// @brief Method ConvertBorderRadiusPercentToPoints, addr 0x49b48e8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ConvertBorderRadiusPercentToPoints(::UnityEngine::Vector2  borderRectSize, ::UnityEngine::UIElements::Length  length) ;

/// @brief Method GetVisualElementRadii, addr 0x49b4924, size 0x29c, virtual false, abstract: false, final false
static inline void GetVisualElementRadii(::UnityEngine::UIElements::VisualElement*  ve, ByRef<::UnityEngine::Vector2>  topLeft, ByRef<::UnityEngine::Vector2>  bottomLeft, ByRef<::UnityEngine::Vector2>  topRight, ByRef<::UnityEngine::Vector2>  bottomRight) ;

/// @brief Method Rectangle, addr 0x49b4720, size 0x100, virtual false, abstract: false, final false
static inline void Rectangle(::UnityEngine::UIElements::MeshGenerationContext*  mgc, ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams  rectParams) ;

/// @brief Method Text, addr 0x49b4820, size 0xc8, virtual false, abstract: false, final false
static inline void Text(::UnityEngine::UIElements::MeshGenerationContext*  mgc, ::UnityEngine::UIElements::TextElement*  te) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerationContextUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContextUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshGenerationContextUtils(MeshGenerationContextUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContextUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshGenerationContextUtils(MeshGenerationContextUtils const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationContextUtils, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationContextUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContextUtils*, "UnityEngine.UIElements", "MeshGenerationContextUtils");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/BorderParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/RectangleParams");
