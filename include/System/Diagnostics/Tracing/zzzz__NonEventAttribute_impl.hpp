#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/NonEventAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__NonEventAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Tracing::NonEventAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::NonEventAttribute::*)()>(&::System::Diagnostics::Tracing::NonEventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d27f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::NonEventAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::Tracing::NonEventAttribute* System::Diagnostics::Tracing::NonEventAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::Tracing::NonEventAttribute*>());
}
inline void System::Diagnostics::Tracing::NonEventAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::NonEventAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::NonEventAttribute::NonEventAttribute()   {
}
