#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DuplicateMirrorForReflectionProbe_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DuplicateMirrorForReflectionProbe._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DuplicateMirrorForReflectionProbe::*)()>(
    &::GlobalNamespace::DuplicateMirrorForReflectionProbe::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25885a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::DuplicateMirrorForReflectionProbe* GlobalNamespace::DuplicateMirrorForReflectionProbe::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>());
}
inline void GlobalNamespace::DuplicateMirrorForReflectionProbe::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DuplicateMirrorForReflectionProbe::DuplicateMirrorForReflectionProbe() {}
