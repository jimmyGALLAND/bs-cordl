#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServersFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServersFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServersFilter::*)()>(&::GlobalNamespace::GameServersFilter::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a5690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GameServersFilter::__get_filterByDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filterByDifficulty;
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_filterByDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filterByDifficulty;
}
constexpr void GlobalNamespace::GameServersFilter::__set_filterByDifficulty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___filterByDifficulty = value;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::GameServersFilter::__get_filteredDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filteredDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::GameServersFilter::__get_filteredDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filteredDifficulty;
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredDifficulty(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___filteredDifficulty = value;
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_filterByModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filterByModifiers;
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_filterByModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filterByModifiers;
}
constexpr void GlobalNamespace::GameServersFilter::__set_filterByModifiers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___filterByModifiers = value;
}
constexpr ::GlobalNamespace::GameplayModifierMask& GlobalNamespace::GameServersFilter::__get_filteredModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filteredModifiers;
}
constexpr ::GlobalNamespace::GameplayModifierMask const& GlobalNamespace::GameServersFilter::__get_filteredModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filteredModifiers;
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredModifiers(::GlobalNamespace::GameplayModifierMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___filteredModifiers = value;
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_filterBySongPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filterBySongPacks;
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_filterBySongPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filterBySongPacks;
}
constexpr void GlobalNamespace::GameServersFilter::__set_filterBySongPacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___filterBySongPacks = value;
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::GameServersFilter::__get_filteredSongPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filteredSongPacks;
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::GameServersFilter::__get_filteredSongPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___filteredSongPacks;
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredSongPacks(::GlobalNamespace::SongPackMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___filteredSongPacks = value;
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_showFull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___showFull;
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_showFull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___showFull;
}
constexpr void GlobalNamespace::GameServersFilter::__set_showFull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___showFull = value;
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_showProtected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___showProtected;
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_showProtected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___showProtected;
}
constexpr void GlobalNamespace::GameServersFilter::__set_showProtected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___showProtected = value;
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_showInternetGames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___showInternetGames;
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_showInternetGames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___showInternetGames;
}
constexpr void GlobalNamespace::GameServersFilter::__set_showInternetGames(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___showInternetGames = value;
}
inline ::GlobalNamespace::GameServersFilter* GlobalNamespace::GameServersFilter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServersFilter*>());
}
inline void GlobalNamespace::GameServersFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServersFilter::GameServersFilter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
