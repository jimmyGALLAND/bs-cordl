#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TEventType> inline ::UnityEngine::UIElements::EventCallback_1<TEventType>* UnityEngine::UIElements::EventCallback_1<TEventType>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(object, method));
}
template <typename TEventType> inline void UnityEngine::UIElements::EventCallback_1<TEventType>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallback_1<TEventType>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TEventType> inline void UnityEngine::UIElements::EventCallback_1<TEventType>::Invoke(TEventType evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallback_1<TEventType>*>::get(), "Invoke",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
// Ctor Parameters []
template <typename TEventType> constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType>::EventCallback_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
