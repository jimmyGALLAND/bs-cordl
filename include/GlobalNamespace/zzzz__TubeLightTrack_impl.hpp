#pragma once
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightTrack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeLightTrack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightTrack::*)()>(&::GlobalNamespace::TubeLightTrack::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23188c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightTrack*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::TubeLightTrack* GlobalNamespace::TubeLightTrack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeLightTrack*>());
}
inline void GlobalNamespace::TubeLightTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightTrack*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightTrack::TubeLightTrack() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
