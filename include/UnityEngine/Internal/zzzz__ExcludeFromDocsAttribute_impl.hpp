#pragma once
// IWYU pragma private; include "UnityEngine/Internal/ExcludeFromDocsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Internal/zzzz__ExcludeFromDocsAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Internal::ExcludeFromDocsAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Internal::ExcludeFromDocsAttribute::*)()>(&::UnityEngine::Internal::ExcludeFromDocsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4830c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Internal::ExcludeFromDocsAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Internal::ExcludeFromDocsAttribute* UnityEngine::Internal::ExcludeFromDocsAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Internal::ExcludeFromDocsAttribute*>());
}
inline void UnityEngine::Internal::ExcludeFromDocsAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Internal::ExcludeFromDocsAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Internal::ExcludeFromDocsAttribute::ExcludeFromDocsAttribute()   {
}
