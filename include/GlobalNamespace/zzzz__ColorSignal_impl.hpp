#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSignal.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSignal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSignal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSignal::*)()>(&::GlobalNamespace::ColorSignal::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3943af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorSignal* GlobalNamespace::ColorSignal::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorSignal*>());
}
inline void GlobalNamespace::ColorSignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSignal::ColorSignal()   {
}
