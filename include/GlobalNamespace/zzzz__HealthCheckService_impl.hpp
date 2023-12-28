#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HealthCheckService_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__IHealthCheckService_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)(int32_t)>(&::GlobalNamespace::HealthCheckService::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xe3c368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe3c46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::PollUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe3c510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(), "PollUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::Run)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xe3c5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(), "Run",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IHealthCheckService"
constexpr GlobalNamespace::HealthCheckService::operator ::GlobalNamespace::IHealthCheckService*() noexcept {
  return static_cast<::GlobalNamespace::IHealthCheckService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::HealthCheckService::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::HealthCheckService::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::HealthCheckService::__get__port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____port;
}
constexpr int32_t const& GlobalNamespace::HealthCheckService::__get__port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____port;
}
constexpr void GlobalNamespace::HealthCheckService::__set__port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____port = value;
}
constexpr ::System::Threading::Thread*& GlobalNamespace::HealthCheckService::__get__runThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runThread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& GlobalNamespace::HealthCheckService::__get__runThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runThread;
}
constexpr void GlobalNamespace::HealthCheckService::__set__runThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____runThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::HealthCheckService::__get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& GlobalNamespace::HealthCheckService::__get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void GlobalNamespace::HealthCheckService::__set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::System::Threading::ManualResetEvent*& GlobalNamespace::HealthCheckService::__get__manualResetEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manualResetEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& GlobalNamespace::HealthCheckService::__get__manualResetEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manualResetEvent;
}
constexpr void GlobalNamespace::HealthCheckService::__set__manualResetEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____manualResetEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpListener*& GlobalNamespace::HealthCheckService::__get__listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listener;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> const& GlobalNamespace::HealthCheckService::__get__listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listener;
}
constexpr void GlobalNamespace::HealthCheckService::__set__listener(::System::Net::HttpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____listener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::HealthCheckService* GlobalNamespace::HealthCheckService::New_ctor(int32_t port) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthCheckService*>(port));
}
inline void GlobalNamespace::HealthCheckService::_ctor(int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, port);
}
inline void GlobalNamespace::HealthCheckService::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthCheckService::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(), "PollUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthCheckService::Run() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService*>::get(), "Run",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthCheckService::HealthCheckService() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
