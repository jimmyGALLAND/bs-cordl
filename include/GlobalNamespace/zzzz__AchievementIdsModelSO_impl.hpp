#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AchievementIdsModelSO.get_achievementsIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* (
    ::GlobalNamespace::AchievementIdsModelSO::*)()>(&::GlobalNamespace::AchievementIdsModelSO::get_achievementsIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2231ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementIdsModelSO*>::get(),
                                                                               "get_achievementsIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementIdsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementIdsModelSO::*)()>(&::GlobalNamespace::AchievementIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2231acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementIdsModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*& GlobalNamespace::AchievementIdsModelSO::__get__achievementsIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____achievementsIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*> const&
GlobalNamespace::AchievementIdsModelSO::__get__achievementsIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____achievementsIds;
}
constexpr void GlobalNamespace::AchievementIdsModelSO::__set__achievementsIds(::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementsIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* GlobalNamespace::AchievementIdsModelSO::get_achievementsIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementIdsModelSO*>::get(),
                                                                             "get_achievementsIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AchievementIdsModelSO* GlobalNamespace::AchievementIdsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AchievementIdsModelSO*>());
}
inline void GlobalNamespace::AchievementIdsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementIdsModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AchievementIdsModelSO::AchievementIdsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
