#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::RejoinDialogResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::RejoinDialogResult::*)(void*)>(
    &::Oculus::Platform::Models::RejoinDialogResult::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2708ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::RejoinDialogResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::RejoinDialogResult::__get_RejoinSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___RejoinSelected;
}
constexpr bool const& Oculus::Platform::Models::RejoinDialogResult::__get_RejoinSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___RejoinSelected;
}
constexpr void Oculus::Platform::Models::RejoinDialogResult::__set_RejoinSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___RejoinSelected = value;
}
inline ::Oculus::Platform::Models::RejoinDialogResult* Oculus::Platform::Models::RejoinDialogResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::RejoinDialogResult*>(o));
}
inline void Oculus::Platform::Models::RejoinDialogResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::RejoinDialogResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::RejoinDialogResult::RejoinDialogResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
