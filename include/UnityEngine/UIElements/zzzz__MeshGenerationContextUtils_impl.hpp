#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationContextUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams.ToNativeParams
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams (::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams::*)()>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams::ToNativeParams)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x49b4fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>::get(),
                        "ToNativeParams",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams::ToNativeParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams>::get(),
                        "ToNativeParams",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshBuilderNative__NativeBorderParams, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams::__MeshGenerationContextUtils__BorderParams(::UnityEngine::Rect  rect, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Color  leftColor, ::UnityEngine::Color  topColor, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  bottomColor, float_t  leftWidth, float_t  topWidth, float_t  rightWidth, float_t  bottomWidth, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityW<::UnityEngine::Material>  material, ::UnityEngine::UIElements::ColorPage  leftColorPage, ::UnityEngine::UIElements::ColorPage  topColorPage, ::UnityEngine::UIElements::ColorPage  rightColorPage, ::UnityEngine::UIElements::ColorPage  bottomColorPage) noexcept  {
this->rect = rect;
this->playmodeTintColor = playmodeTintColor;
this->leftColor = leftColor;
this->topColor = topColor;
this->rightColor = rightColor;
this->bottomColor = bottomColor;
this->leftWidth = leftWidth;
this->topWidth = topWidth;
this->rightWidth = rightWidth;
this->bottomWidth = bottomWidth;
this->topLeftRadius = topLeftRadius;
this->topRightRadius = topRightRadius;
this->bottomRightRadius = bottomRightRadius;
this->bottomLeftRadius = bottomLeftRadius;
this->material = material;
this->leftColorPage = leftColorPage;
this->topColorPage = topColorPage;
this->rightColorPage = rightColorPage;
this->bottomColorPage = bottomColorPage;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams::__MeshGenerationContextUtils__BorderParams()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.AdjustUVsForScaleMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::AdjustUVsForScaleMode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x49b5098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "AdjustUVsForScaleMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.AdjustSpriteUVsForScaleMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::AdjustSpriteUVsForScaleMode)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x49b5234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "AdjustSpriteUVsForScaleMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.RectIntersection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::RectIntersection)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x49b551c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "RectIntersection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.ComputeGeomRect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ComputeGeomRect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x49b55f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "ComputeGeomRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.ComputeUVRect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ComputeUVRect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x49b56a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "ComputeUVRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.ApplyPackingRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::SpritePackingRotation)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ApplyPackingRotation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x49b5754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "ApplyPackingRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpritePackingRotation>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.MakeTextured
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::UnityEngine::UIElements::ContextType)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeTextured)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x49b57a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "MakeTextured",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.MakeSprite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ::UnityEngine::UIElements::ContextType, bool, ByRef<::UnityEngine::Vector4>, bool)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeSprite)> {
  constexpr static std::size_t size = 0xb14;
  constexpr static std::size_t addrs = 0x49b5960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "MakeSprite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.MakeVectorTextured
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VectorImage*, ::UnityEngine::ScaleMode, ::UnityEngine::UIElements::ContextType)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeVectorTextured)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x49b6474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "MakeVectorTextured",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.HasRadius
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::*)(float_t)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::HasRadius)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x49b6618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "HasRadius",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.HasSlices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::*)(float_t)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::HasSlices)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x49b668c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "HasSlices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.ToNativeParams
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams (::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ToNativeParams)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x49b66d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "ToNativeParams",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::AdjustUVsForScaleMode(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ByRef<::UnityEngine::Rect>  rectOut, ByRef<::UnityEngine::Rect>  uvOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "AdjustUVsForScaleMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, uv, texture, scaleMode, rectOut, uvOut);
}
inline void UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::AdjustSpriteUVsForScaleMode(::UnityEngine::Rect  containerRect, ::UnityEngine::Rect  srcRect, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ByRef<::UnityEngine::Rect>  rectOut, ByRef<::UnityEngine::Rect>  uvOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "AdjustSpriteUVsForScaleMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, containerRect, srcRect, spriteGeomRect, sprite, scaleMode, rectOut, uvOut);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::RectIntersection(::UnityEngine::Rect  a, ::UnityEngine::Rect  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "RectIntersection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ComputeGeomRect(::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "ComputeGeomRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ComputeUVRect(::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "ComputeUVRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ApplyPackingRotation(::UnityEngine::Rect  uv, ::UnityEngine::SpritePackingRotation  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "ApplyPackingRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpritePackingRotation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, uv, rotation);
}
inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "MakeTextured",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, rect, uv, texture, scaleMode, panelContext);
}
/// @param useForRepeat: bool (default: false)
inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeSprite(::UnityEngine::Rect  containerRect, ::UnityEngine::Rect  subRect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext, bool  hasRadius, ByRef<::UnityEngine::Vector4>  slices, bool  useForRepeat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "MakeSprite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, containerRect, subRect, sprite, scaleMode, panelContext, hasRadius, slices, useForRepeat);
}
inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeVectorTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::UIElements::VectorImage*  vectorImage, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::UIElements::ContextType  panelContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "MakeVectorTextured",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, rect, uv, vectorImage, scaleMode, panelContext);
}
inline bool UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::HasRadius(float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "HasRadius",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, epsilon);
}
inline bool UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::HasSlices(float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "HasSlices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, epsilon);
}
inline ::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ToNativeParams(::UnityEngine::Rect  uvRegion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                        "ToNativeParams",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams, false>(this, ___internal_method, uvRegion);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundPositionX", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundPositionY", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeat", ty: "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundSize", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "vectorImage", ty: "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshFlags", ty: "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::__MeshGenerationContextUtils__RectangleParams(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Color  color, ::UnityEngine::Rect  subRect, ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionX, ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionY, ::UnityEngine::UIElements::BackgroundRepeat  backgroundRepeat, ::UnityEngine::UIElements::BackgroundSize  backgroundSize, ::UnityW<::UnityEngine::Texture>  texture, ::UnityW<::UnityEngine::Sprite>  sprite, ::UnityW<::UnityEngine::UIElements::VectorImage>  vectorImage, ::UnityW<::UnityEngine::Material>  material, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::Vector2  contentSize, ::UnityEngine::Vector2  textureSize, int32_t  leftSlice, int32_t  topSlice, int32_t  rightSlice, int32_t  bottomSlice, float_t  sliceScale, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Vector4  rectInset, ::UnityEngine::UIElements::ColorPage  colorPage, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags  meshFlags) noexcept  {
this->rect = rect;
this->uv = uv;
this->color = color;
this->subRect = subRect;
this->backgroundPositionX = backgroundPositionX;
this->backgroundPositionY = backgroundPositionY;
this->backgroundRepeat = backgroundRepeat;
this->backgroundSize = backgroundSize;
this->texture = texture;
this->sprite = sprite;
this->vectorImage = vectorImage;
this->material = material;
this->scaleMode = scaleMode;
this->playmodeTintColor = playmodeTintColor;
this->topLeftRadius = topLeftRadius;
this->topRightRadius = topRightRadius;
this->bottomRightRadius = bottomRightRadius;
this->bottomLeftRadius = bottomLeftRadius;
this->contentSize = contentSize;
this->textureSize = textureSize;
this->leftSlice = leftSlice;
this->topSlice = topSlice;
this->rightSlice = rightSlice;
this->bottomSlice = bottomSlice;
this->sliceScale = sliceScale;
this->spriteGeomRect = spriteGeomRect;
this->rectInset = rectInset;
this->colorPage = colorPage;
this->meshFlags = meshFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::__MeshGenerationContextUtils__RectangleParams()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.Rectangle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::MeshGenerationContext*, ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::MeshGenerationContextUtils::Rectangle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x49b4720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "Rectangle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.Text
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::MeshGenerationContext*, ::UnityEngine::UIElements::TextElement*)>(&::UnityEngine::UIElements::MeshGenerationContextUtils::Text)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x49b4820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "Text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.ConvertBorderRadiusPercentToPoints
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::UIElements::Length)>(&::UnityEngine::UIElements::MeshGenerationContextUtils::ConvertBorderRadiusPercentToPoints)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49b48e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "ConvertBorderRadiusPercentToPoints",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.GetVisualElementRadii
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>)>(&::UnityEngine::UIElements::MeshGenerationContextUtils::GetVisualElementRadii)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x49b4924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "GetVisualElementRadii",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.AdjustBackgroundSizeForBorders
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>)>(&::UnityEngine::UIElements::MeshGenerationContextUtils::AdjustBackgroundSizeForBorders)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x49b4bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "AdjustBackgroundSizeForBorders",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MeshGenerationContextUtils::Rectangle(::UnityEngine::UIElements::MeshGenerationContext*  mgc, ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams  rectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "Rectangle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mgc, rectParams);
}
inline void UnityEngine::UIElements::MeshGenerationContextUtils::Text(::UnityEngine::UIElements::MeshGenerationContext*  mgc, ::UnityEngine::UIElements::TextElement*  te)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "Text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mgc, te);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::MeshGenerationContextUtils::ConvertBorderRadiusPercentToPoints(::UnityEngine::Vector2  borderRectSize, ::UnityEngine::UIElements::Length  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "ConvertBorderRadiusPercentToPoints",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, borderRectSize, length);
}
inline void UnityEngine::UIElements::MeshGenerationContextUtils::GetVisualElementRadii(::UnityEngine::UIElements::VisualElement*  ve, ByRef<::UnityEngine::Vector2>  topLeft, ByRef<::UnityEngine::Vector2>  bottomLeft, ByRef<::UnityEngine::Vector2>  topRight, ByRef<::UnityEngine::Vector2>  bottomRight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "GetVisualElementRadii",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, topLeft, bottomLeft, topRight, bottomRight);
}
inline void UnityEngine::UIElements::MeshGenerationContextUtils::AdjustBackgroundSizeForBorders(::UnityEngine::UIElements::VisualElement*  visualElement, ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>  rectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                        "AdjustBackgroundSizeForBorders",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, visualElement, rectParams);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationContextUtils::MeshGenerationContextUtils()   {
}
