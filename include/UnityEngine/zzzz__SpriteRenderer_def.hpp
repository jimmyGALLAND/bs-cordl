#pragma once
// IWYU pragma private; include "UnityEngine/SpriteRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct SpriteDrawMode;
}
namespace UnityEngine {
struct SpriteMaskInteraction;
}
namespace UnityEngine {
struct SpriteSortPoint;
}
namespace UnityEngine {
struct SpriteTileMode;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct __Mesh__MeshDataArray;
}
// Forward declare root types
namespace UnityEngine {
class SpriteRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpriteRenderer);
// Type: UnityEngine::SpriteRenderer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SpriteRenderer*
class CORDL_TYPE SpriteRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_adaptiveModeThreshold, put=set_adaptiveModeThreshold)) float_t  adaptiveModeThreshold;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_drawMode, put=set_drawMode)) ::UnityEngine::SpriteDrawMode  drawMode;

 __declspec(property(get=get_flipX, put=set_flipX)) bool  flipX;

 __declspec(property(get=get_flipY, put=set_flipY)) bool  flipY;

/// @brief Field m_SpriteChangeEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SpriteChangeEvent, put=__cordl_internal_set_m_SpriteChangeEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  m_SpriteChangeEvent;

 __declspec(property(get=get_maskInteraction, put=set_maskInteraction)) ::UnityEngine::SpriteMaskInteraction  maskInteraction;

 __declspec(property(get=get_shouldSupportTiling)) bool  shouldSupportTiling;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector2  size;

 __declspec(property(get=get_sprite, put=set_sprite)) ::UnityW<::UnityEngine::Sprite>  sprite;

 __declspec(property(get=get_spriteSortPoint, put=set_spriteSortPoint)) ::UnityEngine::SpriteSortPoint  spriteSortPoint;

 __declspec(property(get=get_tileMode, put=set_tileMode)) ::UnityEngine::SpriteTileMode  tileMode;

/// @brief Method GetCurrentMeshData, addr 0x4828274, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::__Mesh__MeshDataArray GetCurrentMeshData() ;

/// @brief Method GetCurrentMeshDataPtr, addr 0x4828238, size 0x3c, virtual false, abstract: false, final false
inline ::System::IntPtr GetCurrentMeshDataPtr() ;

/// @brief Method GetSecondaryTextureProperties, addr 0x48283d0, size 0x44, virtual false, abstract: false, final false
inline void GetSecondaryTextureProperties(::UnityEngine::MaterialPropertyBlock*  mbp) ;

/// @brief Method GetSpriteBounds, addr 0x4828414, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetSpriteBounds() ;

/// @brief Method Internal_GetSpriteBounds, addr 0x482830c, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds Internal_GetSpriteBounds(::UnityEngine::SpriteDrawMode  mode) ;

/// @brief Method Internal_GetSpriteBounds_Injected, addr 0x482837c, size 0x54, virtual false, abstract: false, final false
inline void Internal_GetSpriteBounds_Injected(::UnityEngine::SpriteDrawMode  mode, ByRef<::UnityEngine::Bounds>  ret) ;

/// @brief Method InvokeSpriteChanged, addr 0x4827ab0, size 0xf4, virtual false, abstract: false, final false
inline void InvokeSpriteChanged() ;

static inline ::UnityEngine::SpriteRenderer* New_ctor() ;

/// @brief Method RegisterSpriteChangeCallback, addr 0x48279b0, size 0xa0, virtual false, abstract: false, final false
inline void RegisterSpriteChangeCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::SpriteRenderer>>*  callback) ;

/// @brief Method UnregisterSpriteChangeCallback, addr 0x4827a50, size 0x60, virtual false, abstract: false, final false
inline void UnregisterSpriteChangeCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::SpriteRenderer>>*  callback) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*& __cordl_internal_get_m_SpriteChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*> const& __cordl_internal_get_m_SpriteChangeEvent() const;

constexpr void __cordl_internal_set_m_SpriteChangeEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  value) ;

/// @brief Method .ctor, addr 0x48284b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_adaptiveModeThreshold, addr 0x4827dfc, size 0x3c, virtual false, abstract: false, final false
inline float_t get_adaptiveModeThreshold() ;

/// @brief Method get_color, addr 0x4827f04, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_color_Injected, addr 0x4827f5c, size 0x44, virtual false, abstract: false, final false
inline void get_color_Injected(ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method get_drawMode, addr 0x4827c60, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::SpriteDrawMode get_drawMode() ;

/// @brief Method get_flipX, addr 0x48280b8, size 0x3c, virtual false, abstract: false, final false
inline bool get_flipX() ;

/// @brief Method get_flipY, addr 0x4828138, size 0x3c, virtual false, abstract: false, final false
inline bool get_flipY() ;

/// @brief Method get_maskInteraction, addr 0x4828038, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction() ;

/// @brief Method get_shouldSupportTiling, addr 0x4827ba4, size 0x3c, virtual false, abstract: false, final false
inline bool get_shouldSupportTiling() ;

/// @brief Method get_size, addr 0x4827ce0, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_size() ;

/// @brief Method get_size_Injected, addr 0x4827d2c, size 0x44, virtual false, abstract: false, final false
inline void get_size_Injected(ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_sprite, addr 0x4827be0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_sprite() ;

/// @brief Method get_spriteSortPoint, addr 0x48281b8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::SpriteSortPoint get_spriteSortPoint() ;

/// @brief Method get_tileMode, addr 0x4827e84, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::SpriteTileMode get_tileMode() ;

/// @brief Method set_adaptiveModeThreshold, addr 0x4827e38, size 0x4c, virtual false, abstract: false, final false
inline void set_adaptiveModeThreshold(float_t  value) ;

/// @brief Method set_color, addr 0x4827fa0, size 0x54, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0x4827ff4, size 0x44, virtual false, abstract: false, final false
inline void set_color_Injected(ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_drawMode, addr 0x4827c9c, size 0x44, virtual false, abstract: false, final false
inline void set_drawMode(::UnityEngine::SpriteDrawMode  value) ;

/// @brief Method set_flipX, addr 0x48280f4, size 0x44, virtual false, abstract: false, final false
inline void set_flipX(bool  value) ;

/// @brief Method set_flipY, addr 0x4828174, size 0x44, virtual false, abstract: false, final false
inline void set_flipY(bool  value) ;

/// @brief Method set_maskInteraction, addr 0x4828074, size 0x44, virtual false, abstract: false, final false
inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction  value) ;

/// @brief Method set_size, addr 0x4827d70, size 0x48, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector2  value) ;

/// @brief Method set_size_Injected, addr 0x4827db8, size 0x44, virtual false, abstract: false, final false
inline void set_size_Injected(ByRef<::UnityEngine::Vector2>  value) ;

/// @brief Method set_sprite, addr 0x4827c1c, size 0x44, virtual false, abstract: false, final false
inline void set_sprite(::UnityEngine::Sprite*  value) ;

/// @brief Method set_spriteSortPoint, addr 0x48281f4, size 0x44, virtual false, abstract: false, final false
inline void set_spriteSortPoint(::UnityEngine::SpriteSortPoint  value) ;

/// @brief Method set_tileMode, addr 0x4827ec0, size 0x44, virtual false, abstract: false, final false
inline void set_tileMode(::UnityEngine::SpriteTileMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteRenderer(SpriteRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteRenderer(SpriteRenderer const& ) = delete;

/// @brief Field m_SpriteChangeEvent, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  ___m_SpriteChangeEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpriteRenderer, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SpriteRenderer, ___m_SpriteChangeEvent) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
