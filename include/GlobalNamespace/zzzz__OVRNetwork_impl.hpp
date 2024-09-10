#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNetwork.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__FrameHeader.ToBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::GlobalNamespace::__OVRNetwork__FrameHeader::*)()>(&::GlobalNamespace::__OVRNetwork__FrameHeader::ToBytes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3faa490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__FrameHeader>::get(),
                        "ToBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__FrameHeader.FromBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRNetwork__FrameHeader (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRNetwork__FrameHeader::FromBytes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3faa5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__FrameHeader>::get(),
                        "FromBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GlobalNamespace::__OVRNetwork__FrameHeader::ToBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__FrameHeader>::get(),
                        "ToBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRNetwork__FrameHeader GlobalNamespace::__OVRNetwork__FrameHeader::FromBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  arr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__FrameHeader>::get(),
                        "FromBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRNetwork__FrameHeader, false>(nullptr, ___internal_method, arr);
}
// Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRNetwork__FrameHeader::__OVRNetwork__FrameHeader(uint32_t  protocolIdentifier, int32_t  payloadType, int32_t  payloadLength) noexcept  {
this->protocolIdentifier = protocolIdentifier;
this->payloadType = payloadType;
this->payloadLength = payloadLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRNetwork__FrameHeader::__OVRNetwork__FrameHeader()   {
}
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.StartListening
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)(int32_t)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::StartListening)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x3faa6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "StartListening",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.StopListening
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::StopListening)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3faac00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "StopListening",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.DoAcceptTcpClientCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::DoAcceptTcpClientCallback)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x3faadbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "DoAcceptTcpClientCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.HasConnectedClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::HasConnectedClient)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3fab2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "HasConnectedClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.Broadcast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)(int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::Broadcast)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x3fab564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "Broadcast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.DoWriteDataCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::DoWriteDataCallback)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fabafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "DoWriteDataCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3fabbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::TcpListener*& GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_get_tcpListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcpListener;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::TcpListener*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_get_tcpListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcpListener;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_set_tcpListener(::System::Net::Sockets::TcpListener*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcpListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_get_clientsLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientsLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_get_clientsLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientsLock;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_set_clientsLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientsLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*& GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_get_clients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clients;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_get_clients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clients;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__cordl_internal_set_clients(::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clients)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::StartListening(int32_t  listeningPort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "StartListening",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listeningPort);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::StopListening()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "StopListening",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::DoAcceptTcpClientCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "DoAcceptTcpClientCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline bool GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::HasConnectedClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "HasConnectedClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::Broadcast(int32_t  payloadType, ::ArrayW<uint8_t,::Array<uint8_t>*>  payload)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "Broadcast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, payloadType, payload);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::DoWriteDataCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        "DoWriteDataCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>());
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__OVRNetwork__OVRNetworkTcpServer()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::__OVRNetwork__OVRNetworkTcpClient__ConnectionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::__OVRNetwork__OVRNetworkTcpClient__ConnectionState()   {
}
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Connected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Connecting{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.get_connectionState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::get_connectionState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3fabc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "get_connectionState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.get_Connected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::get_Connected)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3fabcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "get_Connected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.Connect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)(int32_t)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Connect)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3fabcd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.ConnectCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::ConnectCallback)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x3fabe4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "ConnectCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.Disconnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Disconnect)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3fac14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "Disconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Tick)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x3fac384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.OnReadDataCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::OnReadDataCallback)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x3fac598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "OnReadDataCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3faca6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_connectionStateChangedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionStateChangedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_connectionStateChangedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionStateChangedCallback;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_set_connectionStateChangedCallback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionStateChangedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_payloadReceivedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payloadReceivedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_payloadReceivedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payloadReceivedCallback;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_set_payloadReceivedCallback(::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___payloadReceivedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::TcpClient*& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_tcpClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcpClient;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::TcpClient*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_tcpClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcpClient;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_set_tcpClient(::System::Net::Sockets::TcpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_receivedBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedBuffers;
}
constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_receivedBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedBuffers;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_set_receivedBuffers(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___receivedBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_receivedBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedBufferIndex;
}
constexpr int32_t const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_receivedBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedBufferIndex;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_set_receivedBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivedBufferIndex = value;
}
constexpr int32_t& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_receivedBufferDataSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedBufferDataSize;
}
constexpr int32_t const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_receivedBufferDataSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedBufferDataSize;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_set_receivedBufferDataSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivedBufferDataSize = value;
}
constexpr ::System::Threading::ManualResetEvent*& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_readyReceiveDataEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyReceiveDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_get_readyReceiveDataEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyReceiveDataEvent;
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__cordl_internal_set_readyReceiveDataEvent(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readyReceiveDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::get_connectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "get_connectionState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "get_Connected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Connect(int32_t  listeningPort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listeningPort);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::ConnectCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "ConnectCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "Disconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::OnReadDataCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        "OnReadDataCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient* GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>());
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__OVRNetwork__OVRNetworkTcpClient()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork::*)()>(&::GlobalNamespace::OVRNetwork::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3faa488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRNetwork* GlobalNamespace::OVRNetwork::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRNetwork*>());
}
inline void GlobalNamespace::OVRNetwork::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRNetwork::OVRNetwork()   {
}
