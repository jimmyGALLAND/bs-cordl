#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Changelog_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ChangelogEntry_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Changelog.get_entries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>* (
    ::UnityEngine::ProBuilder::Changelog::*)()>(&::UnityEngine::ProBuilder::Changelog::get_entries)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b3bd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Changelog*>::get(), "get_entries",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Changelog._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Changelog::*)(::StringW)>(&::UnityEngine::ProBuilder::Changelog::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2b3bd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Changelog*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Changelog.CreateEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ChangelogEntry* (::UnityEngine::ProBuilder::Changelog::*)(::StringW, ::StringW)>(
    &::UnityEngine::ProBuilder::Changelog::CreateEntry)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2b3c0a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Changelog*>::get(), "CreateEntry", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>*& UnityEngine::ProBuilder::Changelog::__get_m_Entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>*> const& UnityEngine::ProBuilder::Changelog::__get_m_Entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Entries;
}
constexpr void UnityEngine::ProBuilder::Changelog::__set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>* UnityEngine::ProBuilder::Changelog::get_entries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Changelog*>::get(), "get_entries",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Changelog* UnityEngine::ProBuilder::Changelog::New_ctor(::StringW log) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Changelog*>(log));
}
inline void UnityEngine::ProBuilder::Changelog::_ctor(::StringW log) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Changelog*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, log);
}
inline ::UnityEngine::ProBuilder::ChangelogEntry* UnityEngine::ProBuilder::Changelog::CreateEntry(::StringW version, ::StringW contents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Changelog*>::get(), "CreateEntry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ChangelogEntry*, false>(this, ___internal_method, version, contents);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Changelog::Changelog() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
