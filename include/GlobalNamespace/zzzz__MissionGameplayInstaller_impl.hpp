#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MissionGameplayInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MissionGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionGameplayInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionGameplayInstaller::*)()>(
    &::GlobalNamespace::MissionGameplayInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x2272134;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionGameplayInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionGameplayInstaller::*)()>(&::GlobalNamespace::MissionGameplayInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22725c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MissionGameplaySceneSetupData*& GlobalNamespace::MissionGameplayInstaller::__get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionGameplaySceneSetupData*> const& GlobalNamespace::MissionGameplayInstaller::__get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::MissionGameplayInstaller::__set__sceneSetupData(::GlobalNamespace::MissionGameplaySceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionGameplayInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionGameplayInstaller* GlobalNamespace::MissionGameplayInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionGameplayInstaller*>());
}
inline void GlobalNamespace::MissionGameplayInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionGameplayInstaller::MissionGameplayInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
