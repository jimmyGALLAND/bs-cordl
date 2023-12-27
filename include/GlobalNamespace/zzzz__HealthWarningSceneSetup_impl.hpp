#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetup.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetup::*)()>(
    &::GlobalNamespace::HealthWarningSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2319d08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetup::*)()>(&::GlobalNamespace::HealthWarningSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2319e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HealthWarningSceneSetupData*& GlobalNamespace::HealthWarningSceneSetup::__get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningSceneSetupData*> const& GlobalNamespace::HealthWarningSceneSetup::__get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::HealthWarningSceneSetup::__set__sceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HealthWarningSceneSetup::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningSceneSetup* GlobalNamespace::HealthWarningSceneSetup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthWarningSceneSetup*>());
}
inline void GlobalNamespace::HealthWarningSceneSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningSceneSetup::HealthWarningSceneSetup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
