#pragma once
#include "Oculus/Platform/zzzz__NetSyncConnectionStatus_impl.hpp"
#include "Oculus/Platform/zzzz__NetSyncDisconnectReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncConnection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncConnection::*)(void*)>(
    &::Oculus::Platform::Models::NetSyncConnection::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27074e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncConnection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& Oculus::Platform::Models::NetSyncConnection::__get_ConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionId;
}
constexpr int64_t const& Oculus::Platform::Models::NetSyncConnection::__get_ConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionId;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_ConnectionId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ConnectionId = value;
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason& Oculus::Platform::Models::NetSyncConnection::__get_DisconnectReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DisconnectReason;
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason const& Oculus::Platform::Models::NetSyncConnection::__get_DisconnectReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DisconnectReason;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_DisconnectReason(::Oculus::Platform::NetSyncDisconnectReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DisconnectReason = value;
}
constexpr uint64_t& Oculus::Platform::Models::NetSyncConnection::__get_SessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SessionId;
}
constexpr uint64_t const& Oculus::Platform::Models::NetSyncConnection::__get_SessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SessionId;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_SessionId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SessionId = value;
}
constexpr ::Oculus::Platform::NetSyncConnectionStatus& Oculus::Platform::Models::NetSyncConnection::__get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Status;
}
constexpr ::Oculus::Platform::NetSyncConnectionStatus const& Oculus::Platform::Models::NetSyncConnection::__get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Status;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_Status(::Oculus::Platform::NetSyncConnectionStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Status = value;
}
constexpr ::StringW& Oculus::Platform::Models::NetSyncConnection::__get_ZoneId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ZoneId;
}
constexpr ::StringW const& Oculus::Platform::Models::NetSyncConnection::__get_ZoneId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ZoneId;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_ZoneId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ZoneId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::NetSyncConnection* Oculus::Platform::Models::NetSyncConnection::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::NetSyncConnection*>(o));
}
inline void Oculus::Platform::Models::NetSyncConnection::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncConnection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncConnection::NetSyncConnection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
