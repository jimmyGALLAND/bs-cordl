#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T0, typename T1> inline ::UnityEngine::Events::UnityAction_2<T0, T1>* UnityEngine::Events::UnityAction_2<T0, T1>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityAction_2<T0, T1>*>(object, method));
}
template <typename T0, typename T1> inline void UnityEngine::Events::UnityAction_2<T0, T1>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityAction_2<T0, T1>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T0, typename T1> inline void UnityEngine::Events::UnityAction_2<T0, T1>::Invoke(T0 arg0, T1 arg1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityAction_2<T0, T1>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg0, arg1);
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::UnityEngine::Events::UnityAction_2<T0, T1>::UnityAction_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
