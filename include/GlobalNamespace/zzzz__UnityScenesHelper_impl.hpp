#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityScenesHelper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityScenesHelper.SetActiveRootObjectsInScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, bool)>(
    &::GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xe28724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityScenesHelper*>::get(), "SetActiveRootObjectsInScene", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene(::UnityEngine::SceneManagement::Scene scene, bool active) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityScenesHelper*>::get(), "SetActiveRootObjectsInScene", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scene, active);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityScenesHelper::UnityScenesHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
