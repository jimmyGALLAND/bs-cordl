#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AutoSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutoSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutoSetupData::*)()>(&::GlobalNamespace::AutoSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a2eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoSetupData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AutoSetupData::__get_selectBasedOnSuggestions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectBasedOnSuggestions;
}
constexpr bool const& GlobalNamespace::AutoSetupData::__get_selectBasedOnSuggestions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectBasedOnSuggestions;
}
constexpr void GlobalNamespace::AutoSetupData::__set_selectBasedOnSuggestions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectBasedOnSuggestions = value;
}
constexpr bool& GlobalNamespace::AutoSetupData::__get_autoStartWhenAllReady() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoStartWhenAllReady;
}
constexpr bool const& GlobalNamespace::AutoSetupData::__get_autoStartWhenAllReady() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoStartWhenAllReady;
}
constexpr void GlobalNamespace::AutoSetupData::__set_autoStartWhenAllReady(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoStartWhenAllReady = value;
}
constexpr bool& GlobalNamespace::AutoSetupData::__get_forceAutoStartAfterSongSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceAutoStartAfterSongSelection;
}
constexpr bool const& GlobalNamespace::AutoSetupData::__get_forceAutoStartAfterSongSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceAutoStartAfterSongSelection;
}
constexpr void GlobalNamespace::AutoSetupData::__set_forceAutoStartAfterSongSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceAutoStartAfterSongSelection = value;
}
constexpr bool& GlobalNamespace::AutoSetupData::__get_randomSongIfNoneSuggested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomSongIfNoneSuggested;
}
constexpr bool const& GlobalNamespace::AutoSetupData::__get_randomSongIfNoneSuggested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomSongIfNoneSuggested;
}
constexpr void GlobalNamespace::AutoSetupData::__set_randomSongIfNoneSuggested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomSongIfNoneSuggested = value;
}
inline ::GlobalNamespace::AutoSetupData* GlobalNamespace::AutoSetupData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AutoSetupData*>());
}
inline void GlobalNamespace::AutoSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutoSetupData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoSetupData::AutoSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
