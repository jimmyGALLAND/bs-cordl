#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycasterManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycasterManager.AddRaycaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::BaseRaycaster*)>(
    &::UnityEngine::EventSystems::RaycasterManager::AddRaycaster)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2d9fdc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycasterManager*>::get(), "AddRaycaster", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseRaycaster*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycasterManager.GetRaycasters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* (*)()>(
    &::UnityEngine::EventSystems::RaycasterManager::GetRaycasters)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d9fed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycasterManager*>::get(),
                                                                               "GetRaycasters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycasterManager.RemoveRaycasters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::BaseRaycaster*)>(
    &::UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d9ff30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycasterManager*>::get(), "RemoveRaycasters", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseRaycaster*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::EventSystems::RaycasterManager::setStaticF_s_Raycasters(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*, "s_Raycasters",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycasterManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* UnityEngine::EventSystems::RaycasterManager::getStaticF_s_Raycasters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*, "s_Raycasters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycasterManager*>::get>();
}
inline void UnityEngine::EventSystems::RaycasterManager::AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycasterManager*>::get(), "AddRaycaster", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseRaycaster*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseRaycaster);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* UnityEngine::EventSystems::RaycasterManager::GetRaycasters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycasterManager*>::get(),
                                                                             "GetRaycasters", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycasterManager*>::get(), "RemoveRaycasters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseRaycaster*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseRaycaster);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::RaycasterManager::RaycasterManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
