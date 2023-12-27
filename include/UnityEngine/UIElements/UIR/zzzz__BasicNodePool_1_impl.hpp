#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNodePool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
template <typename T> inline void UnityEngine::UIElements::UIR::BasicNodePool_1<T>::Reset(::UnityEngine::UIElements::UIR::BasicNode_1<T>* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BasicNodePool_1<T>*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node);
}
template <typename T> inline ::UnityEngine::UIElements::UIR::BasicNode_1<T>* UnityEngine::UIElements::UIR::BasicNodePool_1<T>::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BasicNodePool_1<T>*>::get(),
                                                                             "Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BasicNode_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UIR::BasicNodePool_1<T>* UnityEngine::UIElements::UIR::BasicNodePool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::BasicNodePool_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::UIR::BasicNodePool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BasicNodePool_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<T>::BasicNodePool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
