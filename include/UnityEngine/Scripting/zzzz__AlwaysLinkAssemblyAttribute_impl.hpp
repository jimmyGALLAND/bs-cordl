#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/AlwaysLinkAssemblyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Scripting/zzzz__AlwaysLinkAssemblyAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::*)()>(&::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x482cfec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute* UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute*>());
}
inline void UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::AlwaysLinkAssemblyAttribute::AlwaysLinkAssemblyAttribute()   {
}
