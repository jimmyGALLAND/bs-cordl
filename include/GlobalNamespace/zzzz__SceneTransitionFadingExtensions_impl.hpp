#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneTransitionFadingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneTransitionFadingExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneTransitionFadingExtensions.ShouldFadeOnSceneTransition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__GameScenesManager__SceneTransitionType)>(&::GlobalNamespace::SceneTransitionFadingExtensions::ShouldFadeOnSceneTransition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3ff3da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionFadingExtensions*>::get(),
                        "ShouldFadeOnSceneTransition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneTransitionType>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SceneTransitionFadingExtensions::ShouldFadeOnSceneTransition(::GlobalNamespace::__GameScenesManager__SceneTransitionType  sceneTransitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneTransitionFadingExtensions*>::get(),
                        "ShouldFadeOnSceneTransition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneTransitionType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sceneTransitionType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneTransitionFadingExtensions::SceneTransitionFadingExtensions()   {
}
