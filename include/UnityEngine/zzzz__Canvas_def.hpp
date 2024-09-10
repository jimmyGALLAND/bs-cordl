#pragma once
// IWYU pragma private; include "UnityEngine/Canvas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Canvas)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderMode;
}
namespace UnityEngine {
struct StandaloneRenderResize;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class __Canvas__WillRenderCanvases;
}
// Forward declare root types
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class __Canvas__WillRenderCanvases;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Canvas);
MARK_REF_PTR_T(::UnityEngine::__Canvas__WillRenderCanvases);
// Type: ::WillRenderCanvases
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Canvas::WillRenderCanvases*
class CORDL_TYPE __Canvas__WillRenderCanvases : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x4a16fc0, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::__Canvas__WillRenderCanvases* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x4a16f38, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Canvas__WillRenderCanvases() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Canvas__WillRenderCanvases", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Canvas__WillRenderCanvases(__Canvas__WillRenderCanvases && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Canvas__WillRenderCanvases", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Canvas__WillRenderCanvases(__Canvas__WillRenderCanvases const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Canvas__WillRenderCanvases, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::Canvas
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Canvas*
class CORDL_TYPE Canvas : public ::UnityEngine::Behaviour {
public:
// Declarations
using WillRenderCanvases = ::UnityEngine::__Canvas__WillRenderCanvases;

/// @brief Field <externBeginRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__externBeginRenderOverlays_k__BackingField, put=setStaticF__externBeginRenderOverlays_k__BackingField)) ::System::Action_1<int32_t>*  _externBeginRenderOverlays_k__BackingField;

/// @brief Field <externEndRenderOverlays>k__BackingField, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__externEndRenderOverlays_k__BackingField, put=setStaticF__externEndRenderOverlays_k__BackingField)) ::System::Action_1<int32_t>*  _externEndRenderOverlays_k__BackingField;

/// @brief Field <externRenderOverlaysBefore>k__BackingField, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__externRenderOverlaysBefore_k__BackingField, put=setStaticF__externRenderOverlaysBefore_k__BackingField)) ::System::Action_2<int32_t,int32_t>*  _externRenderOverlaysBefore_k__BackingField;

 __declspec(property(get=get_additionalShaderChannels, put=set_additionalShaderChannels)) ::UnityEngine::AdditionalCanvasShaderChannels  additionalShaderChannels;

 __declspec(property(get=get_cachedSortingLayerValue)) int32_t  cachedSortingLayerValue;

 __declspec(property(get=get_isRootCanvas)) bool  isRootCanvas;

 __declspec(property(get=get_normalizedSortingGridSize, put=set_normalizedSortingGridSize)) float_t  normalizedSortingGridSize;

 __declspec(property(get=get_overridePixelPerfect, put=set_overridePixelPerfect)) bool  overridePixelPerfect;

 __declspec(property(get=get_overrideSorting, put=set_overrideSorting)) bool  overrideSorting;

 __declspec(property(get=get_pixelPerfect, put=set_pixelPerfect)) bool  pixelPerfect;

 __declspec(property(get=get_pixelRect)) ::UnityEngine::Rect  pixelRect;

 __declspec(property(get=get_planeDistance, put=set_planeDistance)) float_t  planeDistance;

/// @brief Field preWillRenderCanvases, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_preWillRenderCanvases, put=setStaticF_preWillRenderCanvases)) ::UnityEngine::__Canvas__WillRenderCanvases*  preWillRenderCanvases;

 __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit)) float_t  referencePixelsPerUnit;

 __declspec(property(get=get_renderMode, put=set_renderMode)) ::UnityEngine::RenderMode  renderMode;

 __declspec(property(get=get_renderOrder)) int32_t  renderOrder;

 __declspec(property(get=get_renderingDisplaySize)) ::UnityEngine::Vector2  renderingDisplaySize;

 __declspec(property(get=get_rootCanvas)) ::UnityW<::UnityEngine::Canvas>  rootCanvas;

 __declspec(property(get=get_scaleFactor, put=set_scaleFactor)) float_t  scaleFactor;

 __declspec(property(get=get_sortingGridNormalizedSize, put=set_sortingGridNormalizedSize)) int32_t  sortingGridNormalizedSize;

 __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingLayerName, put=set_sortingLayerName)) ::StringW  sortingLayerName;

 __declspec(property(get=get_sortingOrder, put=set_sortingOrder)) int32_t  sortingOrder;

 __declspec(property(get=get_targetDisplay, put=set_targetDisplay)) int32_t  targetDisplay;

 __declspec(property(get=get_updateRectTransformForStandalone, put=set_updateRectTransformForStandalone)) ::UnityEngine::StandaloneRenderResize  updateRectTransformForStandalone;

 __declspec(property(get=get_vertexColorAlwaysGammaSpace, put=set_vertexColorAlwaysGammaSpace)) bool  vertexColorAlwaysGammaSpace;

/// @brief Field willRenderCanvases, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_willRenderCanvases, put=setStaticF_willRenderCanvases)) ::UnityEngine::__Canvas__WillRenderCanvases*  willRenderCanvases;

 __declspec(property(get=get_worldCamera, put=set_worldCamera)) ::UnityW<::UnityEngine::Camera>  worldCamera;

/// @brief Method BeginRenderExtraOverlays, addr 0x4a16de4, size 0x6c, virtual false, abstract: false, final false
static inline void BeginRenderExtraOverlays(int32_t  displayIndex) ;

/// @brief Method EndRenderExtraOverlays, addr 0x4a16ec4, size 0x6c, virtual false, abstract: false, final false
static inline void EndRenderExtraOverlays(int32_t  displayIndex) ;

/// @brief Method ForceUpdateCanvases, addr 0x4a16d0c, size 0x10, virtual false, abstract: false, final false
static inline void ForceUpdateCanvases() ;

/// @brief Method GetDefaultCanvasMaterial, addr 0x4a16c78, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetDefaultCanvasMaterial() ;

/// @brief Method GetDefaultCanvasTextMaterial, addr 0x4a16c50, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetDefaultCanvasTextMaterial() ;

/// @brief Method GetETC1SupportedCanvasMaterial, addr 0x4a16ca0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetETC1SupportedCanvasMaterial() ;

static inline ::UnityEngine::Canvas* New_ctor() ;

/// @brief Method RenderExtraOverlaysBefore, addr 0x4a16e50, size 0x74, virtual false, abstract: false, final false
static inline void RenderExtraOverlaysBefore(int32_t  displayIndex, int32_t  sortingOrder) ;

/// @brief Method SendPreWillRenderCanvases, addr 0x4a16d1c, size 0x64, virtual false, abstract: false, final false
static inline void SendPreWillRenderCanvases() ;

/// @brief Method SendWillRenderCanvases, addr 0x4a16d80, size 0x64, virtual false, abstract: false, final false
static inline void SendWillRenderCanvases() ;

/// @brief Method SetExternalCanvasEnabled, addr 0x4a16a8c, size 0x3c, virtual false, abstract: false, final false
static inline void SetExternalCanvasEnabled(bool  enabled) ;

/// @brief Method UpdateCanvasRectTransform, addr 0x4a16cc8, size 0x44, virtual false, abstract: false, final false
inline void UpdateCanvasRectTransform(bool  alignWithCamera) ;

/// @brief Method .ctor, addr 0x4a16f30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_preWillRenderCanvases, addr 0x4a15cb4, size 0xb8, virtual false, abstract: false, final false
static inline void add_preWillRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases*  value) ;

/// @brief Method add_willRenderCanvases, addr 0x4a15e24, size 0xbc, virtual false, abstract: false, final false
static inline void add_willRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases*  value) ;

static inline ::System::Action_1<int32_t>* getStaticF__externBeginRenderOverlays_k__BackingField() ;

static inline ::System::Action_1<int32_t>* getStaticF__externEndRenderOverlays_k__BackingField() ;

static inline ::System::Action_2<int32_t,int32_t>* getStaticF__externRenderOverlaysBefore_k__BackingField() ;

static inline ::UnityEngine::__Canvas__WillRenderCanvases* getStaticF_preWillRenderCanvases() ;

static inline ::UnityEngine::__Canvas__WillRenderCanvases* getStaticF_willRenderCanvases() ;

/// @brief Method get_additionalShaderChannels, addr 0x4a16684, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels() ;

/// @brief Method get_cachedSortingLayerValue, addr 0x4a16648, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_cachedSortingLayerValue() ;

/// @brief Method get_externBeginRenderOverlays, addr 0x4a168d0, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_1<int32_t>* get_externBeginRenderOverlays() ;

/// @brief Method get_externEndRenderOverlays, addr 0x4a169f8, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_1<int32_t>* get_externEndRenderOverlays() ;

/// @brief Method get_externRenderOverlaysBefore, addr 0x4a16964, size 0x48, virtual false, abstract: false, final false
static inline ::System::Action_2<int32_t,int32_t>* get_externRenderOverlaysBefore() ;

/// @brief Method get_isRootCanvas, addr 0x4a1601c, size 0x3c, virtual false, abstract: false, final false
inline bool get_isRootCanvas() ;

/// @brief Method get_normalizedSortingGridSize, addr 0x4a16b48, size 0x3c, virtual false, abstract: false, final false
inline float_t get_normalizedSortingGridSize() ;

/// @brief Method get_overridePixelPerfect, addr 0x4a16204, size 0x3c, virtual false, abstract: false, final false
inline bool get_overridePixelPerfect() ;

/// @brief Method get_overrideSorting, addr 0x4a16448, size 0x3c, virtual false, abstract: false, final false
inline bool get_overrideSorting() ;

/// @brief Method get_pixelPerfect, addr 0x4a16304, size 0x3c, virtual false, abstract: false, final false
inline bool get_pixelPerfect() ;

/// @brief Method get_pixelRect, addr 0x4a16058, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_pixelRect_Injected, addr 0x4a160b0, size 0x44, virtual false, abstract: false, final false
inline void get_pixelRect_Injected(ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method get_planeDistance, addr 0x4a16384, size 0x3c, virtual false, abstract: false, final false
inline float_t get_planeDistance() ;

/// @brief Method get_referencePixelsPerUnit, addr 0x4a1617c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_referencePixelsPerUnit() ;

/// @brief Method get_renderMode, addr 0x4a15f9c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::RenderMode get_renderMode() ;

/// @brief Method get_renderOrder, addr 0x4a1640c, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_renderOrder() ;

/// @brief Method get_renderingDisplaySize, addr 0x4a167c0, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_renderingDisplaySize() ;

/// @brief Method get_renderingDisplaySize_Injected, addr 0x4a1680c, size 0x44, virtual false, abstract: false, final false
inline void get_renderingDisplaySize_Injected(ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rootCanvas, addr 0x4a16784, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Canvas> get_rootCanvas() ;

/// @brief Method get_scaleFactor, addr 0x4a160f4, size 0x3c, virtual false, abstract: false, final false
inline float_t get_scaleFactor() ;

/// @brief Method get_sortingGridNormalizedSize, addr 0x4a16bd0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingGridNormalizedSize() ;

/// @brief Method get_sortingLayerID, addr 0x4a165c8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingLayerName, addr 0x4a16704, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_sortingLayerName() ;

/// @brief Method get_sortingOrder, addr 0x4a164c8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

/// @brief Method get_targetDisplay, addr 0x4a16548, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_targetDisplay() ;

/// @brief Method get_updateRectTransformForStandalone, addr 0x4a16850, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::StandaloneRenderResize get_updateRectTransformForStandalone() ;

/// @brief Method get_vertexColorAlwaysGammaSpace, addr 0x4a16284, size 0x3c, virtual false, abstract: false, final false
inline bool get_vertexColorAlwaysGammaSpace() ;

/// @brief Method get_worldCamera, addr 0x4a16ac8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_worldCamera() ;

/// @brief Method remove_preWillRenderCanvases, addr 0x4a15d6c, size 0xb8, virtual false, abstract: false, final false
static inline void remove_preWillRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases*  value) ;

/// @brief Method remove_willRenderCanvases, addr 0x4a15ee0, size 0xbc, virtual false, abstract: false, final false
static inline void remove_willRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases*  value) ;

static inline void setStaticF__externBeginRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__externEndRenderOverlays_k__BackingField(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__externRenderOverlaysBefore_k__BackingField(::System::Action_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_preWillRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases*  value) ;

static inline void setStaticF_willRenderCanvases(::UnityEngine::__Canvas__WillRenderCanvases*  value) ;

/// @brief Method set_additionalShaderChannels, addr 0x4a166c0, size 0x44, virtual false, abstract: false, final false
inline void set_additionalShaderChannels(::UnityEngine::AdditionalCanvasShaderChannels  value) ;

/// @brief Method set_externBeginRenderOverlays, addr 0x4a16918, size 0x4c, virtual false, abstract: false, final false
static inline void set_externBeginRenderOverlays(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_externEndRenderOverlays, addr 0x4a16a40, size 0x4c, virtual false, abstract: false, final false
static inline void set_externEndRenderOverlays(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_externRenderOverlaysBefore, addr 0x4a169ac, size 0x4c, virtual false, abstract: false, final false
static inline void set_externRenderOverlaysBefore(::System::Action_2<int32_t,int32_t>*  value) ;

/// @brief Method set_normalizedSortingGridSize, addr 0x4a16b84, size 0x4c, virtual false, abstract: false, final false
inline void set_normalizedSortingGridSize(float_t  value) ;

/// @brief Method set_overridePixelPerfect, addr 0x4a16240, size 0x44, virtual false, abstract: false, final false
inline void set_overridePixelPerfect(bool  value) ;

/// @brief Method set_overrideSorting, addr 0x4a16484, size 0x44, virtual false, abstract: false, final false
inline void set_overrideSorting(bool  value) ;

/// @brief Method set_pixelPerfect, addr 0x4a16340, size 0x44, virtual false, abstract: false, final false
inline void set_pixelPerfect(bool  value) ;

/// @brief Method set_planeDistance, addr 0x4a163c0, size 0x4c, virtual false, abstract: false, final false
inline void set_planeDistance(float_t  value) ;

/// @brief Method set_referencePixelsPerUnit, addr 0x4a161b8, size 0x4c, virtual false, abstract: false, final false
inline void set_referencePixelsPerUnit(float_t  value) ;

/// @brief Method set_renderMode, addr 0x4a15fd8, size 0x44, virtual false, abstract: false, final false
inline void set_renderMode(::UnityEngine::RenderMode  value) ;

/// @brief Method set_scaleFactor, addr 0x4a16130, size 0x4c, virtual false, abstract: false, final false
inline void set_scaleFactor(float_t  value) ;

/// @brief Method set_sortingGridNormalizedSize, addr 0x4a16c0c, size 0x44, virtual false, abstract: false, final false
inline void set_sortingGridNormalizedSize(int32_t  value) ;

/// @brief Method set_sortingLayerID, addr 0x4a16604, size 0x44, virtual false, abstract: false, final false
inline void set_sortingLayerID(int32_t  value) ;

/// @brief Method set_sortingLayerName, addr 0x4a16740, size 0x44, virtual false, abstract: false, final false
inline void set_sortingLayerName(::StringW  value) ;

/// @brief Method set_sortingOrder, addr 0x4a16504, size 0x44, virtual false, abstract: false, final false
inline void set_sortingOrder(int32_t  value) ;

/// @brief Method set_targetDisplay, addr 0x4a16584, size 0x44, virtual false, abstract: false, final false
inline void set_targetDisplay(int32_t  value) ;

/// @brief Method set_updateRectTransformForStandalone, addr 0x4a1688c, size 0x44, virtual false, abstract: false, final false
inline void set_updateRectTransformForStandalone(::UnityEngine::StandaloneRenderResize  value) ;

/// @brief Method set_vertexColorAlwaysGammaSpace, addr 0x4a162c0, size 0x44, virtual false, abstract: false, final false
inline void set_vertexColorAlwaysGammaSpace(bool  value) ;

/// @brief Method set_worldCamera, addr 0x4a16b04, size 0x44, virtual false, abstract: false, final false
inline void set_worldCamera(::UnityEngine::Camera*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Canvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Canvas(Canvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Canvas(Canvas const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Canvas, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Canvas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Canvas*, "UnityEngine", "Canvas");
NEED_NO_BOX(::UnityEngine::__Canvas__WillRenderCanvases);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Canvas__WillRenderCanvases*, "UnityEngine", "Canvas/WillRenderCanvases");
