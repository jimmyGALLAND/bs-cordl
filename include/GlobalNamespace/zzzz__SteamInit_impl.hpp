#pragma once
#include "GlobalNamespace/zzzz__BasePlatformInit_impl.hpp"
#include "GlobalNamespace/zzzz__SteamInit_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SteamInit.InitializeInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::SteamInit::*)()>(
    &::GlobalNamespace::SteamInit::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x222ab48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamInit*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamInit::*)()>(&::GlobalNamespace::SteamInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222abb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamInit*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::SteamInit::InitializeInternalAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamInit*>::get(), "InitializeInternalAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SteamInit* GlobalNamespace::SteamInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SteamInit*>());
}
inline void GlobalNamespace::SteamInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamInit*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamInit::SteamInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
