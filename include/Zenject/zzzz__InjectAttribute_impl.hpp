#pragma once
// IWYU pragma private; include "Zenject/InjectAttribute.hpp"
#include "Zenject/zzzz__InjectAttributeBase_impl.hpp"
#include "Zenject/zzzz__InjectAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::InjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectAttribute::*)()>(&::Zenject::InjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a5c1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Zenject::InjectAttribute* Zenject::InjectAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::InjectAttribute*>());
}
inline void Zenject::InjectAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::InjectAttribute::InjectAttribute()   {
}
