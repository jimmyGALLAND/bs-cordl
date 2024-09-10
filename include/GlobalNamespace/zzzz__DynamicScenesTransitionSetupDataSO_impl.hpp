#pragma once
// IWYU pragma private; include "GlobalNamespace/DynamicScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DynamicScenesTransitionSetupDataSO.SetScenes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicScenesTransitionSetupDataSO::*)(::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>, ::ArrayW<::GlobalNamespace::SceneSetupData*,::Array<::GlobalNamespace::SceneSetupData*>*>)>(&::GlobalNamespace::DynamicScenesTransitionSetupDataSO::SetScenes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22504e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>::get(),
                        "SetScenes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneSetupData*,::Array<::GlobalNamespace::SceneSetupData*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicScenesTransitionSetupDataSO._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::DynamicScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22504f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DynamicScenesTransitionSetupDataSO::SetScenes(::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>  scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*,::Array<::GlobalNamespace::SceneSetupData*>*>  sceneSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>::get(),
                        "SetScenes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneInfo*,::Array<::GlobalNamespace::SceneInfo*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::SceneSetupData*,::Array<::GlobalNamespace::SceneSetupData*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenes, sceneSetupData);
}
inline ::GlobalNamespace::DynamicScenesTransitionSetupDataSO* GlobalNamespace::DynamicScenesTransitionSetupDataSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::DynamicScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicScenesTransitionSetupDataSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicScenesTransitionSetupDataSO::DynamicScenesTransitionSetupDataSO()   {
}
