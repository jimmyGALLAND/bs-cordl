#pragma once
// IWYU pragma private; include "Zenject/Internal/PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/Internal/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::PreserveAttribute::*)()>(&::Zenject::Internal::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a5c198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::PreserveAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Zenject::Internal::PreserveAttribute* Zenject::Internal::PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::PreserveAttribute*>());
}
inline void Zenject::Internal::PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::PreserveAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::PreserveAttribute::PreserveAttribute()   {
}
