#pragma once
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextClickEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ContextClickEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ContextClickEvent::*)()>(&::UnityEngine::UIElements::ContextClickEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e51368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextClickEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ContextClickEvent* UnityEngine::UIElements::ContextClickEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ContextClickEvent*>());
}
inline void UnityEngine::UIElements::ContextClickEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ContextClickEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ContextClickEvent::ContextClickEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
