#pragma once
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IteratorStateMachineAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::IteratorStateMachineAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::IteratorStateMachineAttribute::*)(::System::Type*)>(
    &::System::Runtime::CompilerServices::IteratorStateMachineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24db218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::IteratorStateMachineAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::IteratorStateMachineAttribute* System::Runtime::CompilerServices::IteratorStateMachineAttribute::New_ctor(::System::Type* stateMachineType) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::IteratorStateMachineAttribute*>(stateMachineType));
}
inline void System::Runtime::CompilerServices::IteratorStateMachineAttribute::_ctor(::System::Type* stateMachineType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::IteratorStateMachineAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachineType);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::IteratorStateMachineAttribute::IteratorStateMachineAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
