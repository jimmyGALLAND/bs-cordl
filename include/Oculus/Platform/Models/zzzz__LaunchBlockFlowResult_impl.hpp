#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchBlockFlowResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchBlockFlowResult::*)(void*)>(
    &::Oculus::Platform::Models::LaunchBlockFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2706404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchBlockFlowResult*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LaunchBlockFlowResult::__get_DidBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DidBlock;
}
constexpr bool const& Oculus::Platform::Models::LaunchBlockFlowResult::__get_DidBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DidBlock;
}
constexpr void Oculus::Platform::Models::LaunchBlockFlowResult::__set_DidBlock(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DidBlock = value;
}
constexpr bool& Oculus::Platform::Models::LaunchBlockFlowResult::__get_DidCancel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DidCancel;
}
constexpr bool const& Oculus::Platform::Models::LaunchBlockFlowResult::__get_DidCancel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DidCancel;
}
constexpr void Oculus::Platform::Models::LaunchBlockFlowResult::__set_DidCancel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DidCancel = value;
}
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* Oculus::Platform::Models::LaunchBlockFlowResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LaunchBlockFlowResult*>(o));
}
inline void Oculus::Platform::Models::LaunchBlockFlowResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchBlockFlowResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchBlockFlowResult::LaunchBlockFlowResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
