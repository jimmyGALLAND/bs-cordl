#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServer_def.hpp"
#include "IgnoranceThirdparty/zzzz__RingBuffer_1_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceIncomingPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceCommandPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServer_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServerStats_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceOutgoingPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceConnectionEvent_def.hpp"
// Ctor Parameters [CppParam { name: "IsFruityDevice", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "BindAllInterfaces", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Peers", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PollTime", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Port", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Verbosity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "UseSsl", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "CertificatePath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "Certificate", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "PrivateKeyPath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "PrivateKey", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__IgnoranceServer__ThreadParamInfo(bool IsFruityDevice, bool BindAllInterfaces, int32_t Channels, int32_t Peers, int32_t PollTime,
                                                                                                  int32_t Port, int32_t PacketSizeLimit, int32_t Verbosity, ::StringW Address, bool UseSsl,
                                                                                                  ::StringW CertificatePath, ::StringW Certificate, ::StringW PrivateKeyPath,
                                                                                                  ::StringW PrivateKey) noexcept {
  this->IsFruityDevice = IsFruityDevice;
  this->BindAllInterfaces = BindAllInterfaces;
  this->Channels = Channels;
  this->Peers = Peers;
  this->PollTime = PollTime;
  this->Port = Port;
  this->PacketSizeLimit = PacketSizeLimit;
  this->Verbosity = Verbosity;
  this->Address = Address;
  this->UseSsl = UseSsl;
  this->CertificatePath = CertificatePath;
  this->Certificate = Certificate;
  this->PrivateKeyPath = PrivateKeyPath;
  this->PrivateKey = PrivateKey;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__IgnoranceServer__ThreadParamInfo() {}
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.get_IsAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::get_IsAlive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f57f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "get_IsAlive",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::Start)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x21f5804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::Stop)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f5e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "Stop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.ThreadWorker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)(::System::Object*)>(&::IgnoranceCore::IgnoranceServer::ThreadWorker)> {
  constexpr static std::size_t size = 0x1180;
  constexpr static std::size_t addrs = 0x21f5e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "ThreadWorker", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.SetupRingBuffersIfNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::SetupRingBuffersIfNull)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x21f5bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                                                                               "SetupRingBuffersIfNull", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x21f701c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_BindAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindAddress;
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_BindAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindAddress;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_BindAddress(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BindAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_BindPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindPort;
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_BindPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindPort;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_BindPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BindPort = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_MaximumChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaximumChannels;
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_MaximumChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaximumChannels;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_MaximumChannels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaximumChannels = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_MaximumPeers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaximumPeers;
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_MaximumPeers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaximumPeers;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_MaximumPeers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaximumPeers = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_MaximumPacketSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaximumPacketSize;
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_MaximumPacketSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaximumPacketSize;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_MaximumPacketSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaximumPacketSize = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_PollTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PollTime;
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_PollTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PollTime;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_PollTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PollTime = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_Verbosity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Verbosity;
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_Verbosity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Verbosity;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Verbosity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Verbosity = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_IncomingOutgoingBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IncomingOutgoingBufferSize;
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_IncomingOutgoingBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IncomingOutgoingBufferSize;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_IncomingOutgoingBufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IncomingOutgoingBufferSize = value;
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_ConnectionEventBufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionEventBufferSize;
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_ConnectionEventBufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionEventBufferSize;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_ConnectionEventBufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionEventBufferSize = value;
}
constexpr bool& IgnoranceCore::IgnoranceServer::__get_IsFruityDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFruityDevice;
}
constexpr bool const& IgnoranceCore::IgnoranceServer::__get_IsFruityDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsFruityDevice;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_IsFruityDevice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsFruityDevice = value;
}
constexpr bool& IgnoranceCore::IgnoranceServer::__get_BindAllInterfaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindAllInterfaces;
}
constexpr bool const& IgnoranceCore::IgnoranceServer::__get_BindAllInterfaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindAllInterfaces;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_BindAllInterfaces(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BindAllInterfaces = value;
}
constexpr bool& IgnoranceCore::IgnoranceServer::__get_UseSsl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseSsl;
}
constexpr bool const& IgnoranceCore::IgnoranceServer::__get_UseSsl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseSsl;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_UseSsl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseSsl = value;
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_CertificatePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CertificatePath;
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_CertificatePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CertificatePath;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_CertificatePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CertificatePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_Certificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Certificate;
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_Certificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Certificate;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Certificate(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Certificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_PrivateKeyPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrivateKeyPath;
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_PrivateKeyPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrivateKeyPath;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_PrivateKeyPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PrivateKeyPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_PrivateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrivateKey;
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_PrivateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrivateKey;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_PrivateKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PrivateKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& IgnoranceCore::IgnoranceServer::__get_CeaseOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CeaseOperation;
}
constexpr bool const& IgnoranceCore::IgnoranceServer::__get_CeaseOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CeaseOperation;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_CeaseOperation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CeaseOperation = value;
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*& IgnoranceCore::IgnoranceServer::__get_Incoming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Incoming;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*> const& IgnoranceCore::IgnoranceServer::__get_Incoming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Incoming;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Incoming)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*& IgnoranceCore::IgnoranceServer::__get_Outgoing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Outgoing;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*> const& IgnoranceCore::IgnoranceServer::__get_Outgoing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Outgoing;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Outgoing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*& IgnoranceCore::IgnoranceServer::__get_Commands() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Commands;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*> const& IgnoranceCore::IgnoranceServer::__get_Commands() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Commands;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Commands)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& IgnoranceCore::IgnoranceServer::__get_ConnectionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionEvents;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> const& IgnoranceCore::IgnoranceServer::__get_ConnectionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionEvents;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectionEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*& IgnoranceCore::IgnoranceServer::__get_DisconnectionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisconnectionEvents;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> const&
IgnoranceCore::IgnoranceServer::__get_DisconnectionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisconnectionEvents;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisconnectionEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*& IgnoranceCore::IgnoranceServer::__get_StatusUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusUpdates;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*> const& IgnoranceCore::IgnoranceServer::__get_StatusUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusUpdates;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StatusUpdates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*& IgnoranceCore::IgnoranceServer::__get_RecycledServerStatBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecycledServerStatBlocks;
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*> const&
IgnoranceCore::IgnoranceServer::__get_RecycledServerStatBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecycledServerStatBlocks;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_RecycledServerStatBlocks(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecycledServerStatBlocks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Thread*& IgnoranceCore::IgnoranceServer::__get_WorkerThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WorkerThread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& IgnoranceCore::IgnoranceServer::__get_WorkerThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WorkerThread;
}
constexpr void IgnoranceCore::IgnoranceServer::__set_WorkerThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WorkerThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool IgnoranceCore::IgnoranceServer::get_IsAlive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "get_IsAlive",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceServer::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceServer::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "Stop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceServer::ThreadWorker(::System::Object* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "ThreadWorker", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void IgnoranceCore::IgnoranceServer::SetupRingBuffersIfNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), "SetupRingBuffersIfNull",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::IgnoranceCore::IgnoranceServer* IgnoranceCore::IgnoranceServer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::IgnoranceCore::IgnoranceServer*>());
}
inline void IgnoranceCore::IgnoranceServer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceServer::IgnoranceServer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
