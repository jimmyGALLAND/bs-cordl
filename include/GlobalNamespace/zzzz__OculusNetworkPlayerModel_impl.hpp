#pragma once
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__OculusNetworkPlayerModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusNetworkPlayerModel::*)()>(&::GlobalNamespace::OculusNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2637d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OculusNetworkPlayerModel* GlobalNamespace::OculusNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OculusNetworkPlayerModel*>());
}
inline void GlobalNamespace::OculusNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusNetworkPlayerModel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayerModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
