#pragma once
// IWYU pragma private; include "GlobalNamespace/DuplicateMirrorForReflectionProbe.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DuplicateMirrorForReflectionProbe_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DuplicateMirrorForReflectionProbe._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DuplicateMirrorForReflectionProbe::*)()>(&::GlobalNamespace::DuplicateMirrorForReflectionProbe::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a8b974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::DuplicateMirrorForReflectionProbe* GlobalNamespace::DuplicateMirrorForReflectionProbe::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>());
}
inline void GlobalNamespace::DuplicateMirrorForReflectionProbe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DuplicateMirrorForReflectionProbe::DuplicateMirrorForReflectionProbe()   {
}
