#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__CustomSignalEventDrawer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::CustomSignalEventDrawer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::CustomSignalEventDrawer::*)()>(
    &::UnityEngine::Timeline::CustomSignalEventDrawer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c68d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::CustomSignalEventDrawer*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::CustomSignalEventDrawer* UnityEngine::Timeline::CustomSignalEventDrawer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::CustomSignalEventDrawer*>());
}
inline void UnityEngine::Timeline::CustomSignalEventDrawer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::CustomSignalEventDrawer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::CustomSignalEventDrawer::CustomSignalEventDrawer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
