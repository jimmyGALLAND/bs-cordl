#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerStepThroughAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerStepThroughAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggerStepThroughAttribute::*)()>(
    &::System::Diagnostics::DebuggerStepThroughAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2579c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerStepThroughAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::DebuggerStepThroughAttribute* System::Diagnostics::DebuggerStepThroughAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::DebuggerStepThroughAttribute*>());
}
inline void System::Diagnostics::DebuggerStepThroughAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerStepThroughAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerStepThroughAttribute::DebuggerStepThroughAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
