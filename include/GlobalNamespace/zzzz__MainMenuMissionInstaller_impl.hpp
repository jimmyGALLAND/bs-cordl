#pragma once
// IWYU pragma private; include "GlobalNamespace/MainMenuMissionInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuMissionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainMenuMissionInstaller.InstallBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuMissionInstaller::*)()>(&::GlobalNamespace::MainMenuMissionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3b5f48c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuMissionInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuMissionInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuMissionInstaller._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuMissionInstaller::*)()>(&::GlobalNamespace::MainMenuMissionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b5f50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuMissionInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& GlobalNamespace::MainMenuMissionInstaller::__cordl_internal_get__missionNodesManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionNodesManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& GlobalNamespace::MainMenuMissionInstaller::__cordl_internal_get__missionNodesManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionNodesManager;
}
constexpr void GlobalNamespace::MainMenuMissionInstaller::__cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MainMenuMissionInstaller::InstallBindings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuMissionInstaller*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainMenuMissionInstaller* GlobalNamespace::MainMenuMissionInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainMenuMissionInstaller*>());
}
inline void GlobalNamespace::MainMenuMissionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuMissionInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuMissionInstaller::MainMenuMissionInstaller()   {
}
