#pragma once
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerOutEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerOutEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerOutEvent::*)()>(&::UnityEngine::UIElements::PointerOutEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e508b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerOutEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::PointerOutEvent* UnityEngine::UIElements::PointerOutEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::PointerOutEvent*>());
}
inline void UnityEngine::UIElements::PointerOutEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerOutEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerOutEvent::PointerOutEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
