#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Pid_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Pid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Pid::*)(void*)>(&::Oculus::Platform::Models::Pid::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2708080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Pid*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::Pid::__get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Id;
}
constexpr ::StringW const& Oculus::Platform::Models::Pid::__get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Id;
}
constexpr void Oculus::Platform::Models::Pid::__set_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::Pid* Oculus::Platform::Models::Pid::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Pid*>(o));
}
inline void Oculus::Platform::Models::Pid::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Pid*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Pid::Pid() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
