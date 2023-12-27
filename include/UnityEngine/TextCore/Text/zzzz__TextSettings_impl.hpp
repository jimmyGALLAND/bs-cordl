#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyleSheet_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__UnicodeLineBreakingRules_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap::*)(
    ::UnityEngine::Font*, ::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3fedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap::_ctor(::UnityEngine::Font* font, ::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, font, fontAsset);
}
// Ctor Parameters [CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*",
// modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap::__TextSettings__FontReferenceMap(::UnityEngine::Font* font, ::UnityEngine::TextCore::Text::FontAsset* fontAsset) noexcept {
  this->font = font;
  this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap::__TextSettings__FontReferenceMap() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_version",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultFontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_defaultFontAsset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultFontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultFontAsset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultFontAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_defaultFontAssetPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultFontAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultFontAssetPath",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_fallbackFontAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* (
    ::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_fallbackFontAssets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_fallbackFontAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*)>(&::UnityEngine::TextCore::Text::TextSettings::set_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_fallbackFontAssets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_matchMaterialPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_matchMaterialPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_matchMaterialPreset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_matchMaterialPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(bool)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_matchMaterialPreset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d3f8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_matchMaterialPreset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_missingCharacterUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_missingCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_missingCharacterUnicode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_missingCharacterUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_missingCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_missingCharacterUnicode",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_clearDynamicDataOnBuild", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_clearDynamicDataOnBuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(bool)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d3f8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_clearDynamicDataOnBuild",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultSpriteAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::SpriteAsset* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_defaultSpriteAsset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultSpriteAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::TextCore::Text::SpriteAsset*)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultSpriteAsset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::SpriteAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultSpriteAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_defaultSpriteAssetPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultSpriteAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultSpriteAssetPath",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_fallbackSpriteAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* (
    ::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::get_fallbackSpriteAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_fallbackSpriteAssets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_fallbackSpriteAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*)>(&::UnityEngine::TextCore::Text::TextSettings::set_fallbackSpriteAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_fallbackSpriteAssets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_missingSpriteCharacterUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_missingSpriteCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_missingSpriteCharacterUnicode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_missingSpriteCharacterUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(uint32_t)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_missingSpriteCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_missingSpriteCharacterUnicode",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultStyleSheet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextStyleSheet* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_defaultStyleSheet", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultStyleSheet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::TextCore::Text::TextStyleSheet*)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultStyleSheet", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextStyleSheet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_styleSheetsResourcePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_styleSheetsResourcePath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_styleSheetsResourcePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_styleSheetsResourcePath",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_defaultColorGradientPresetsPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_defaultColorGradientPresetsPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_defaultColorGradientPresetsPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultColorGradientPresetsPath",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_lineBreakingRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_lineBreakingRules)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d3f948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_lineBreakingRules", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_lineBreakingRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_lineBreakingRules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_lineBreakingRules", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.get_displayWarnings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::get_displayWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3f9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "get_displayWarnings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.set_displayWarnings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)(bool)>(
    &::UnityEngine::TextCore::Text::TextSettings::set_displayWarnings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d3f9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_displayWarnings",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.InitializeFontReferenceLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)()>(
    &::UnityEngine::TextCore::Text::TextSettings::InitializeFontReferenceLookup)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2d3f9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                               "InitializeFontReferenceLookup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings.GetCachedFontAssetInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset* (::UnityEngine::TextCore::Text::TextSettings::*)(::UnityEngine::Font*)>(
    &::UnityEngine::TextCore::Text::TextSettings::GetCachedFontAssetInternal)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2d3fbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "GetCachedFontAssetInternal",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextSettings::*)()>(&::UnityEngine::TextCore::Text::TextSettings::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2d3fee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Version;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_Version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset*& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultFontAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultFontAsset;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> const& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultFontAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultFontAsset;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultFontAsset(::UnityEngine::TextCore::Text::FontAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultFontAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultFontAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultFontAssetPath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultFontAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultFontAssetPath;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultFontAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultFontAssetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*& UnityEngine::TextCore::Text::TextSettings::__get_m_FallbackFontAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FallbackFontAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*> const&
UnityEngine::TextCore::Text::TextSettings::__get_m_FallbackFontAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FallbackFontAssets;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_FallbackFontAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FallbackFontAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextCore::Text::TextSettings::__get_m_MatchMaterialPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MatchMaterialPreset;
}
constexpr bool const& UnityEngine::TextCore::Text::TextSettings::__get_m_MatchMaterialPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MatchMaterialPreset;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_MatchMaterialPreset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MatchMaterialPreset = value;
}
constexpr int32_t& UnityEngine::TextCore::Text::TextSettings::__get_m_MissingCharacterUnicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MissingCharacterUnicode;
}
constexpr int32_t const& UnityEngine::TextCore::Text::TextSettings::__get_m_MissingCharacterUnicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MissingCharacterUnicode;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_MissingCharacterUnicode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MissingCharacterUnicode = value;
}
constexpr bool& UnityEngine::TextCore::Text::TextSettings::__get_m_ClearDynamicDataOnBuild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr bool const& UnityEngine::TextCore::Text::TextSettings::__get_m_ClearDynamicDataOnBuild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ClearDynamicDataOnBuild;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_ClearDynamicDataOnBuild(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ClearDynamicDataOnBuild = value;
}
constexpr ::UnityEngine::TextCore::Text::SpriteAsset*& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultSpriteAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultSpriteAsset;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> const& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultSpriteAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultSpriteAsset;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultSpriteAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultSpriteAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultSpriteAssetPath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultSpriteAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultSpriteAssetPath;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultSpriteAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultSpriteAssetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*& UnityEngine::TextCore::Text::TextSettings::__get_m_FallbackSpriteAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FallbackSpriteAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*> const&
UnityEngine::TextCore::Text::TextSettings::__get_m_FallbackSpriteAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FallbackSpriteAssets;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_FallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FallbackSpriteAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::TextCore::Text::TextSettings::__get_m_MissingSpriteCharacterUnicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MissingSpriteCharacterUnicode;
}
constexpr uint32_t const& UnityEngine::TextCore::Text::TextSettings::__get_m_MissingSpriteCharacterUnicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MissingSpriteCharacterUnicode;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_MissingSpriteCharacterUnicode(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MissingSpriteCharacterUnicode = value;
}
constexpr ::UnityEngine::TextCore::Text::TextStyleSheet*& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultStyleSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultStyleSheet;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextStyleSheet*> const& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultStyleSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultStyleSheet;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultStyleSheet(::UnityEngine::TextCore::Text::TextStyleSheet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultStyleSheet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__get_m_StyleSheetsResourcePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StyleSheetsResourcePath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__get_m_StyleSheetsResourcePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StyleSheetsResourcePath;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_StyleSheetsResourcePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StyleSheetsResourcePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultColorGradientPresetsPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultColorGradientPresetsPath;
}
constexpr ::StringW const& UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultColorGradientPresetsPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DefaultColorGradientPresetsPath;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultColorGradientPresetsPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultColorGradientPresetsPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*& UnityEngine::TextCore::Text::TextSettings::__get_m_UnicodeLineBreakingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UnicodeLineBreakingRules;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*> const& UnityEngine::TextCore::Text::TextSettings::__get_m_UnicodeLineBreakingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UnicodeLineBreakingRules;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_UnicodeLineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnicodeLineBreakingRules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextCore::Text::TextSettings::__get_m_DisplayWarnings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DisplayWarnings;
}
constexpr bool const& UnityEngine::TextCore::Text::TextSettings::__get_m_DisplayWarnings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DisplayWarnings;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DisplayWarnings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_DisplayWarnings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::FontAsset*>*& UnityEngine::TextCore::Text::TextSettings::__get_m_FontLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FontLookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::FontAsset*>*> const&
UnityEngine::TextCore::Text::TextSettings::__get_m_FontLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FontLookup;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_FontLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::FontAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>*& UnityEngine::TextCore::Text::TextSettings::__get_m_FontReferences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FontReferences;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>*> const&
UnityEngine::TextCore::Text::TextSettings::__get_m_FontReferences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FontReferences;
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_FontReferences(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::__TextSettings__FontReferenceMap>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontReferences)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "get_version",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_version(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_version", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::TextSettings::get_defaultFontAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_defaultFontAsset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultFontAsset(::UnityEngine::TextCore::Text::FontAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultFontAsset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultFontAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_defaultFontAssetPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultFontAssetPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultFontAssetPath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* UnityEngine::TextCore::Text::TextSettings::get_fallbackFontAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_fallbackFontAssets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_fallbackFontAssets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextSettings::get_matchMaterialPreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_matchMaterialPreset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_matchMaterialPreset(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_matchMaterialPreset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TextCore::Text::TextSettings::get_missingCharacterUnicode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_missingCharacterUnicode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_missingCharacterUnicode(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_missingCharacterUnicode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextSettings::get_clearDynamicDataOnBuild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_clearDynamicDataOnBuild", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_clearDynamicDataOnBuild(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_clearDynamicDataOnBuild",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::SpriteAsset* UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_defaultSpriteAsset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::SpriteAsset*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultSpriteAsset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::SpriteAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_defaultSpriteAssetPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAssetPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultSpriteAssetPath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* UnityEngine::TextCore::Text::TextSettings::get_fallbackSpriteAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_fallbackSpriteAssets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_fallbackSpriteAssets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::TextCore::Text::TextSettings::get_missingSpriteCharacterUnicode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_missingSpriteCharacterUnicode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_missingSpriteCharacterUnicode(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_missingSpriteCharacterUnicode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::TextStyleSheet* UnityEngine::TextCore::Text::TextSettings::get_defaultStyleSheet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_defaultStyleSheet", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextStyleSheet*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultStyleSheet(::UnityEngine::TextCore::Text::TextStyleSheet* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultStyleSheet", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextStyleSheet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_styleSheetsResourcePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_styleSheetsResourcePath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_styleSheetsResourcePath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_styleSheetsResourcePath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultColorGradientPresetsPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_defaultColorGradientPresetsPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_defaultColorGradientPresetsPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_defaultColorGradientPresetsPath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* UnityEngine::TextCore::Text::TextSettings::get_lineBreakingRules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_lineBreakingRules", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_lineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_lineBreakingRules", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::TextCore::Text::TextSettings::get_displayWarnings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "get_displayWarnings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextSettings::set_displayWarnings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "set_displayWarnings",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::TextCore::Text::TextSettings::InitializeFontReferenceLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(),
                                                                             "InitializeFontReferenceLookup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::FontAsset* UnityEngine::TextCore::Text::TextSettings::GetCachedFontAssetInternal(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), "GetCachedFontAssetInternal",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset*, false>(this, ___internal_method, font);
}
inline ::UnityEngine::TextCore::Text::TextSettings* UnityEngine::TextCore::Text::TextSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::TextSettings*>());
}
inline void UnityEngine::TextCore::Text::TextSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextSettings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextSettings::TextSettings() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
