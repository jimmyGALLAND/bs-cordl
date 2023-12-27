#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyleSheet_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyle_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.get_styles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* (
    ::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(&::UnityEngine::TextCore::Text::TextStyleSheet::get_styles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4c1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(),
                                                                               "get_styles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.GetStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextStyle* (::UnityEngine::TextCore::Text::TextStyleSheet::*)(int32_t)>(
    &::UnityEngine::TextCore::Text::TextStyleSheet::GetStyle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d4c1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(), "GetStyle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.GetStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextStyle* (::UnityEngine::TextCore::Text::TextStyleSheet::*)(::StringW)>(
    &::UnityEngine::TextCore::Text::TextStyleSheet::GetStyle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d4c41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(), "GetStyle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.RefreshStyles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(
    &::UnityEngine::TextCore::Text::TextStyleSheet::RefreshStyles)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d4c4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(),
                                                                               "RefreshStyles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet.LoadStyleDictionaryInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(
    &::UnityEngine::TextCore::Text::TextStyleSheet::LoadStyleDictionaryInternal)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2d4c258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(),
                                                                               "LoadStyleDictionaryInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextStyleSheet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextStyleSheet::*)()>(&::UnityEngine::TextCore::Text::TextStyleSheet::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d4c4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*& UnityEngine::TextCore::Text::TextStyleSheet::__get_m_StyleList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StyleList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*> const&
UnityEngine::TextCore::Text::TextStyleSheet::__get_m_StyleList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StyleList;
}
constexpr void UnityEngine::TextCore::Text::TextStyleSheet::__set_m_StyleList(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StyleList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>*& UnityEngine::TextCore::Text::TextStyleSheet::__get_m_StyleLookupDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StyleLookupDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>*> const&
UnityEngine::TextCore::Text::TextStyleSheet::__get_m_StyleLookupDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StyleLookupDictionary;
}
constexpr void UnityEngine::TextCore::Text::TextStyleSheet::__set_m_StyleLookupDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextStyle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StyleLookupDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>* UnityEngine::TextCore::Text::TextStyleSheet::get_styles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(),
                                                                             "get_styles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::TextStyle*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::Text::TextStyleSheet::GetStyle(int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(), "GetStyle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextStyle*, false>(this, ___internal_method, hashCode);
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::Text::TextStyleSheet::GetStyle(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(), "GetStyle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextStyle*, false>(this, ___internal_method, name);
}
inline void UnityEngine::TextCore::Text::TextStyleSheet::RefreshStyles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(),
                                                                             "RefreshStyles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::TextStyleSheet::LoadStyleDictionaryInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(),
                                                                             "LoadStyleDictionaryInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextStyleSheet* UnityEngine::TextCore::Text::TextStyleSheet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::TextStyleSheet*>());
}
inline void UnityEngine::TextCore::Text::TextStyleSheet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextStyleSheet*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextStyleSheet::TextStyleSheet() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
