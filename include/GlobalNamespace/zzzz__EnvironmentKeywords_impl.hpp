#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords.get_environmentKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::EnvironmentKeywords::*)()>(
    &::GlobalNamespace::EnvironmentKeywords::get_environmentKeywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22403a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                                                               "get_environmentKeywords", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentKeywords::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(
    &::GlobalNamespace::EnvironmentKeywords::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22403ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords.HasKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentKeywords::*)(::StringW)>(&::GlobalNamespace::EnvironmentKeywords::HasKeyword)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22404b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(), "HasKeyword", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& GlobalNamespace::EnvironmentKeywords::__get__environmentKeywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentKeywords;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> const& GlobalNamespace::EnvironmentKeywords::__get__environmentKeywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentKeywords;
}
constexpr void GlobalNamespace::EnvironmentKeywords::__set__environmentKeywords(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentKeywords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::EnvironmentKeywords::__get__environmentKeywordsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentKeywordsSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& GlobalNamespace::EnvironmentKeywords::__get__environmentKeywordsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentKeywordsSet;
}
constexpr void GlobalNamespace::EnvironmentKeywords::__set__environmentKeywordsSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentKeywordsSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::EnvironmentKeywords::get_environmentKeywords() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                                                             "get_environmentKeywords", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentKeywords* GlobalNamespace::EnvironmentKeywords::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnvironmentKeywords*>(environmentKeywords));
}
inline void GlobalNamespace::EnvironmentKeywords::_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environmentKeywords);
}
inline bool GlobalNamespace::EnvironmentKeywords::HasKeyword(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(), "HasKeyword", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, keyword);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentKeywords::EnvironmentKeywords() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
