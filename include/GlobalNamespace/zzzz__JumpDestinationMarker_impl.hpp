#pragma once
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "GlobalNamespace/zzzz__JumpDestinationMarker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpDestinationMarker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpDestinationMarker::*)()>(&::GlobalNamespace::JumpDestinationMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpDestinationMarker*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::JumpDestinationMarker* GlobalNamespace::JumpDestinationMarker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::JumpDestinationMarker*>());
}
inline void GlobalNamespace::JumpDestinationMarker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpDestinationMarker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JumpDestinationMarker::JumpDestinationMarker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
