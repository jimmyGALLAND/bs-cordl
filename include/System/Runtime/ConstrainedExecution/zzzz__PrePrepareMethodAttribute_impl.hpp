#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/PrePrepareMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__PrePrepareMethodAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::*)()>(&::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c8745c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute* System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute*>());
}
inline void System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::PrePrepareMethodAttribute()   {
}
