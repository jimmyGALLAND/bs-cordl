#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__DisallowMultipleComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::DisallowMultipleComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::DisallowMultipleComponent::*)()>(&::UnityEngine::DisallowMultipleComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd2764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DisallowMultipleComponent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::DisallowMultipleComponent* UnityEngine::DisallowMultipleComponent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::DisallowMultipleComponent*>());
}
inline void UnityEngine::DisallowMultipleComponent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DisallowMultipleComponent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::DisallowMultipleComponent::DisallowMultipleComponent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
