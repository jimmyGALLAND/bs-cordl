#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadTimes_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ProcessThreadTimes.get_TotalProcessorTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Diagnostics::ProcessThreadTimes::*)()>(
    &::System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2970134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessThreadTimes*>::get(),
                                                                               "get_TotalProcessorTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessThreadTimes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessThreadTimes::*)()>(&::System::Diagnostics::ProcessThreadTimes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296fd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessThreadTimes*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__get_create() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___create;
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__get_create() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___create;
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_create(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___create = value;
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__get_exit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___exit;
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__get_exit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___exit;
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_exit(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___exit = value;
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__get_kernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___kernel;
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__get_kernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___kernel;
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_kernel(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___kernel = value;
}
constexpr int64_t& System::Diagnostics::ProcessThreadTimes::__get_user() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___user;
}
constexpr int64_t const& System::Diagnostics::ProcessThreadTimes::__get_user() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___user;
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_user(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___user = value;
}
inline ::System::TimeSpan System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessThreadTimes*>::get(),
                                                                             "get_TotalProcessorTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::Diagnostics::ProcessThreadTimes* System::Diagnostics::ProcessThreadTimes::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::ProcessThreadTimes*>());
}
inline void System::Diagnostics::ProcessThreadTimes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessThreadTimes*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::ProcessThreadTimes::ProcessThreadTimes() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
