#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMethodPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMethodPropertyAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspMethodPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspMethodPropertyAttribute::*)()>(&::JetBrains::Annotations::AspMethodPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a5d154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMethodPropertyAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::JetBrains::Annotations::AspMethodPropertyAttribute* JetBrains::Annotations::AspMethodPropertyAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::AspMethodPropertyAttribute*>());
}
inline void JetBrains::Annotations::AspMethodPropertyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMethodPropertyAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspMethodPropertyAttribute::AspMethodPropertyAttribute()   {
}
