#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClient_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceCommandPacket_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "IgnoranceThirdparty/zzzz__RingBuffer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceConnectionEvent_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceIncomingPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClient_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceOutgoingPacket_def.hpp"
// Ctor Parameters [CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PollTime", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Port", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Verbosity", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "UseSsl", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "ValidateCertificate", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "RootCertificatePath", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "RootCertificate", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__IgnoranceClient__ThreadParamInfo(int32_t Channels, int32_t PollTime, int32_t Port, int32_t PacketSizeLimit, int32_t Verbosity,
                                                                                                  ::StringW Address, bool UseSsl, bool ValidateCertificate, ::StringW RootCertificatePath,
                                                                                                  ::StringW RootCertificate) noexcept {
  this->Channels = Channels;
  this->PollTime = PollTime;
  this->Port = Port;
  this->PacketSizeLimit = PacketSizeLimit;
  this->Verbosity = Verbosity;
  this->Address = Address;
  this->UseSsl = UseSsl;
  this->ValidateCertificate = ValidateCertificate;
  this->RootCertificatePath = RootCertificatePath;
  this->RootCertificate = RootCertificate;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__IgnoranceClient__ThreadParamInfo() {}
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.get_IsAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::get_IsAlive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f4290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "get_IsAlive",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::Start)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x21f42a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::Stop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x21f4858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "Stop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.ThreadWorker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)(::System::Object*)>(&::IgnoranceCore::IgnoranceClient::ThreadWorker)> {
  constexpr static std::size_t size = 0xe90;
  constexpr static std::size_t addrs = 0x21f48e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "ThreadWorker", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.SetupRingBuffersIfNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::SetupRingBuffersIfNull)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x21f4614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                                                                               "SetupRingBuffersIfNull", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21f5778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& IgnoranceCore::IgnoranceClient::__get_ConnectAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectAddress;
}
constexpr ::StringW const& IgnoranceCore::IgnoranceClient::__get_ConnectAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectAddress;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ConnectAddress(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_ConnectPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectPort;
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_ConnectPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectPort;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ConnectPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ConnectPort = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_ExpectedChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ExpectedChannels;
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_ExpectedChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ExpectedChannels;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ExpectedChannels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ExpectedChannels = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_PollTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PollTime;
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_PollTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PollTime;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_PollTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PollTime = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_MaximumPacketSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___MaximumPacketSize;
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_MaximumPacketSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___MaximumPacketSize;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_MaximumPacketSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___MaximumPacketSize = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_Verbosity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Verbosity;
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_Verbosity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Verbosity;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_Verbosity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Verbosity = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_IncomingOutgoingBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___IncomingOutgoingBufferSize;
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_IncomingOutgoingBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___IncomingOutgoingBufferSize;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_IncomingOutgoingBufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___IncomingOutgoingBufferSize = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_ConnectionEventBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionEventBufferSize;
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_ConnectionEventBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionEventBufferSize;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ConnectionEventBufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ConnectionEventBufferSize = value;
}
constexpr bool& IgnoranceCore::IgnoranceClient::__get_UseSsl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___UseSsl;
}
constexpr bool const& IgnoranceCore::IgnoranceClient::__get_UseSsl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___UseSsl;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_UseSsl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___UseSsl = value;
}
constexpr bool& IgnoranceCore::IgnoranceClient::__get_ValidateCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ValidateCertificate;
}
constexpr bool const& IgnoranceCore::IgnoranceClient::__get_ValidateCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ValidateCertificate;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ValidateCertificate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ValidateCertificate = value;
}
constexpr ::StringW& IgnoranceCore::IgnoranceClient::__get_RootCertificatePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___RootCertificatePath;
}
constexpr ::StringW const& IgnoranceCore::IgnoranceClient::__get_RootCertificatePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___RootCertificatePath;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_RootCertificatePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RootCertificatePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& IgnoranceCore::IgnoranceClient::__get_RootCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___RootCertificate;
}
constexpr ::StringW const& IgnoranceCore::IgnoranceClient::__get_RootCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___RootCertificate;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_RootCertificate(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RootCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*& IgnoranceCore::IgnoranceClient::__get_Incoming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Incoming;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*> const& IgnoranceCore::IgnoranceClient::__get_Incoming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Incoming;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Incoming)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*& IgnoranceCore::IgnoranceClient::__get_Outgoing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Outgoing;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*> const& IgnoranceCore::IgnoranceClient::__get_Outgoing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Outgoing;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Outgoing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*& IgnoranceCore::IgnoranceClient::__get_Commands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Commands;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*> const& IgnoranceCore::IgnoranceClient::__get_Commands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Commands;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Commands)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& IgnoranceCore::IgnoranceClient::__get_ConnectionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionEvents;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> const& IgnoranceCore::IgnoranceClient::__get_ConnectionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionEvents;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectionEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& IgnoranceCore::IgnoranceClient::__get_DisconnectionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DisconnectionEvents;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> const&
IgnoranceCore::IgnoranceClient::__get_DisconnectionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DisconnectionEvents;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisconnectionEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*& IgnoranceCore::IgnoranceClient::__get_StatusUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___StatusUpdates;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*> const& IgnoranceCore::IgnoranceClient::__get_StatusUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___StatusUpdates;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StatusUpdates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& IgnoranceCore::IgnoranceClient::__get_CeaseOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CeaseOperation;
}
constexpr bool const& IgnoranceCore::IgnoranceClient::__get_CeaseOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CeaseOperation;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_CeaseOperation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___CeaseOperation = value;
}
constexpr ::System::Threading::Thread*& IgnoranceCore::IgnoranceClient::__get_WorkerThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___WorkerThread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& IgnoranceCore::IgnoranceClient::__get_WorkerThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___WorkerThread;
}
constexpr void IgnoranceCore::IgnoranceClient::__set_WorkerThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WorkerThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool IgnoranceCore::IgnoranceClient::get_IsAlive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "get_IsAlive",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceClient::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceClient::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "Stop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceClient::ThreadWorker(::System::Object* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "ThreadWorker", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void IgnoranceCore::IgnoranceClient::SetupRingBuffersIfNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), "SetupRingBuffersIfNull",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::IgnoranceCore::IgnoranceClient* IgnoranceCore::IgnoranceClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IgnoranceCore::IgnoranceClient*>());
}
inline void IgnoranceCore::IgnoranceClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceClient::IgnoranceClient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
