#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__UnicodeLineBreakingRules_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.get_leadingCharactersLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<uint32_t>* (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_leadingCharactersLookup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d4c538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(),
                                                                               "get_leadingCharactersLookup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.get_followingCharactersLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<uint32_t>* (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_followingCharactersLookup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d4c8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(),
                                                                               "get_followingCharactersLookup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.LoadLineBreakingRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::LoadLineBreakingRules)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2d4c5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(),
                                                                               "LoadLineBreakingRules", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules.GetCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<uint32_t>* (*)(::UnityEngine::TextAsset*)>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::GetCharacters)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2d4c95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(), "GetCharacters",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(
    &::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4ca44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextAsset*& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__get_m_UnicodeLineBreakingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UnicodeLineBreakingRules;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__get_m_UnicodeLineBreakingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UnicodeLineBreakingRules;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__set_m_UnicodeLineBreakingRules(::UnityEngine::TextAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnicodeLineBreakingRules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextAsset*& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__get_m_LeadingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LeadingCharacters;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__get_m_LeadingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LeadingCharacters;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__set_m_LeadingCharacters(::UnityEngine::TextAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LeadingCharacters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TextAsset*& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__get_m_FollowingCharacters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FollowingCharacters;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__get_m_FollowingCharacters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FollowingCharacters;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__set_m_FollowingCharacters(::UnityEngine::TextAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FollowingCharacters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__get_m_UseModernHangulLineBreakingRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UseModernHangulLineBreakingRules;
}
constexpr bool const& UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__get_m_UseModernHangulLineBreakingRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_UseModernHangulLineBreakingRules;
}
constexpr void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::__set_m_UseModernHangulLineBreakingRules(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_UseModernHangulLineBreakingRules = value;
}
inline void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::setStaticF_s_Instance(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*, "s_Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get>(
      std::forward<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>(value));
}
inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*, "s_Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get>();
}
inline void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::setStaticF_s_LeadingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<uint32_t>*, "s_LeadingCharactersLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<uint32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::getStaticF_s_LeadingCharactersLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<uint32_t>*, "s_LeadingCharactersLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get>();
}
inline void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::setStaticF_s_FollowingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<uint32_t>*, "s_FollowingCharactersLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<uint32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::getStaticF_s_FollowingCharactersLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<uint32_t>*, "s_FollowingCharactersLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get>();
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_leadingCharactersLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(),
                                                                             "get_leadingCharactersLookup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<uint32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_followingCharactersLookup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(),
                                                                             "get_followingCharactersLookup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<uint32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::LoadLineBreakingRules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(),
                                                                             "LoadLineBreakingRules", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<uint32_t>* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::GetCharacters(::UnityEngine::TextAsset* file) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(), "GetCharacters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<uint32_t>*, false>(nullptr, ___internal_method, file);
}
inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* UnityEngine::TextCore::Text::UnicodeLineBreakingRules::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>());
}
inline void UnityEngine::TextCore::Text::UnicodeLineBreakingRules::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::UnicodeLineBreakingRules() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
