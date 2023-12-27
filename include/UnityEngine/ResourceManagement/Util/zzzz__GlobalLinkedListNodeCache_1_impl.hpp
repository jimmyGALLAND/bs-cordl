#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__GlobalLinkedListNodeCache_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LinkedListNodeCache_1_def.hpp"
template <typename T>
inline void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::setStaticF_m_globalCache(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*, "m_globalCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>::get>(
      std::forward<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::getStaticF_m_globalCache() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*, "m_globalCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>::get>();
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::Acquire(T val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>::get(), "Acquire",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(nullptr, ___internal_method, val);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::Release(::System::Collections::Generic::LinkedListNode_1<T>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>::get(), "Release", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::GlobalLinkedListNodeCache_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
