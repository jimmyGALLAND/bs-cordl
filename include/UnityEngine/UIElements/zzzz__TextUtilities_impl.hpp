#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextUtilities_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelTextSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.ComputeTextScaling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Matrix4x4, float_t)>(&::UnityEngine::UIElements::TextUtilities::ComputeTextScaling)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2e468dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "ComputeTextScaling", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.MeasureVisualElementTextSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(
    ::UnityEngine::UIElements::VisualElement*, ::StringW, float_t, ::UnityEngine::UIElements::__VisualElement__MeasureMode, float_t, ::UnityEngine::UIElements::__VisualElement__MeasureMode,
    ::UnityEngine::UIElements::ITextHandle*)>(&::UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x2e469d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "MeasureVisualElementTextSize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElement__MeasureMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElement__MeasureMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams)>(
    &::UnityEngine::UIElements::TextUtilities::GetFontAsset)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2e46220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFontAsset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetFontAsset)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2e46f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFontAsset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetFont
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Font* (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams)>(
    &::UnityEngine::UIElements::TextUtilities::GetFont)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2e4713c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFont", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetFont
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Font* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetFont)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2e4722c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFont", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.IsFontAssigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::TextUtilities::IsFontAssigned)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2e46e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "IsFontAssigned", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.IsFontAssigned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams)>(
    &::UnityEngine::UIElements::TextUtilities::IsFontAssigned)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e47388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "IsFontAssigned", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetTextSettingsFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PanelTextSettings* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e47078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextSettingsFrom", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetTextSettingsFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::UIElements::PanelTextSettings* (*)(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams)>(&::UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e46168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextSettingsFrom", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextUtilities.GetTextCoreSettingsForElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::TextCoreSettings (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2e47540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextCoreSettingsForElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::UIElements::TextUtilities::ComputeTextScaling(::UnityEngine::Matrix4x4 worldMatrix, float_t pixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "ComputeTextScaling", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, worldMatrix, pixelsPerPoint);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::TextUtilities::MeasureVisualElementTextSize(::UnityEngine::UIElements::VisualElement* ve, ::StringW textToMeasure, float_t width,
                                                                                                   ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t height,
                                                                                                   ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode,
                                                                                                   ::UnityEngine::UIElements::ITextHandle* textHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "MeasureVisualElementTextSize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElement__MeasureMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualElement__MeasureMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, ve, textToMeasure, width, widthMode, height, heightMode, textHandle);
}
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::UIElements::TextUtilities::GetFontAsset(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFontAsset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(nullptr, ___internal_method, textParam);
}
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::UIElements::TextUtilities::GetFontAsset(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFontAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::Font* UnityEngine::UIElements::TextUtilities::GetFont(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFont", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Font*, false>(nullptr, ___internal_method, textParam);
}
inline ::UnityEngine::Font* UnityEngine::UIElements::TextUtilities::GetFont(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetFont", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Font*, false>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::TextUtilities::IsFontAssigned(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "IsFontAssigned", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::TextUtilities::IsFontAssigned(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "IsFontAssigned", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, textParams);
}
inline ::UnityEngine::UIElements::PanelTextSettings* UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextSettingsFrom", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelTextSettings*, false>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::PanelTextSettings* UnityEngine::UIElements::TextUtilities::GetTextSettingsFrom(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextSettingsFrom", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelTextSettings*, false>(nullptr, ___internal_method, textParam);
}
inline ::UnityEngine::UIElements::UIR::TextCoreSettings UnityEngine::UIElements::TextUtilities::GetTextCoreSettingsForElement(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextUtilities*>::get(), "GetTextCoreSettingsForElement", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::TextCoreSettings, false>(nullptr, ___internal_method, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextUtilities::TextUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
