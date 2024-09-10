#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningSceneSetup.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetup.InstallBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetup::*)()>(&::GlobalNamespace::HealthWarningSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3aaac0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetup::*)()>(&::GlobalNamespace::HealthWarningSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aaad60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HealthWarningSceneSetupData*& GlobalNamespace::HealthWarningSceneSetup::__cordl_internal_get__sceneSetupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningSceneSetupData*> const& GlobalNamespace::HealthWarningSceneSetup::__cordl_internal_get__sceneSetupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneSetupData;
}
constexpr void GlobalNamespace::HealthWarningSceneSetup::__cordl_internal_set__sceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HealthWarningSceneSetup::InstallBindings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningSceneSetup* GlobalNamespace::HealthWarningSceneSetup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HealthWarningSceneSetup*>());
}
inline void GlobalNamespace::HealthWarningSceneSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningSceneSetup::HealthWarningSceneSetup()   {
}
