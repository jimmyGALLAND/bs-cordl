#pragma once
// IWYU pragma private; include "JetBrains/Annotations/InvokerParameterNameAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__InvokerParameterNameAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::InvokerParameterNameAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::InvokerParameterNameAttribute::*)()>(&::JetBrains::Annotations::InvokerParameterNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a5c94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::InvokerParameterNameAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::JetBrains::Annotations::InvokerParameterNameAttribute* JetBrains::Annotations::InvokerParameterNameAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::InvokerParameterNameAttribute*>());
}
inline void JetBrains::Annotations::InvokerParameterNameAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::InvokerParameterNameAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::InvokerParameterNameAttribute::InvokerParameterNameAttribute()   {
}
