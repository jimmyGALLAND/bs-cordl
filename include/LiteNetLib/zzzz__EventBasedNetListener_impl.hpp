#pragma once
// IWYU pragma private; include "LiteNetLib/EventBasedNetListener.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__EventBasedNetListener_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__EventBasedNetListener_def.hpp"
#include "LiteNetLib/zzzz__IDeliveryEventListener_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerConnected._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerConnected::*)(::System::Object*, ::System::IntPtr)>(&::LiteNetLib::__EventBasedNetListener__OnPeerConnected::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3a29958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerConnected.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerConnected::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::__EventBasedNetListener__OnPeerConnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a29a58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerConnected.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnPeerConnected::*)(::LiteNetLib::NetPeer*, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnPeerConnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a29a6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerConnected.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerConnected::*)(::System::IAsyncResult*)>(&::LiteNetLib::__EventBasedNetListener__OnPeerConnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a29a8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnPeerConnected* LiteNetLib::__EventBasedNetListener__OnPeerConnected::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerConnected::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerConnected::Invoke(::LiteNetLib::NetPeer*  peer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnPeerConnected::BeginInvoke(::LiteNetLib::NetPeer*  peer, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerConnected::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerConnected::__EventBasedNetListener__OnPeerConnected()   {
}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::*)(::System::Object*, ::System::IntPtr)>(&::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a29a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(&::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a29b9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a29bb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::*)(::System::IAsyncResult*)>(&::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a29c44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::Invoke(::LiteNetLib::NetPeer*  peer, ::LiteNetLib::DisconnectInfo  disconnectInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, disconnectInfo);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::BeginInvoke(::LiteNetLib::NetPeer*  peer, ::LiteNetLib::DisconnectInfo  disconnectInfo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, disconnectInfo, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::__EventBasedNetListener__OnPeerDisconnected()   {
}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkError._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkError::*)(::System::Object*, ::System::IntPtr)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkError::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a29c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkError.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkError::*)(::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkError::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a29d54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkError.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnNetworkError::*)(::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkError::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a29d68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkError.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkError::*)(::System::IAsyncResult*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkError::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a29dfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnNetworkError* LiteNetLib::__EventBasedNetListener__OnNetworkError::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkError::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkError::Invoke(::System::Net::IPEndPoint*  endPoint, ::System::Net::Sockets::SocketError  socketError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, socketError);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnNetworkError::BeginInvoke(::System::Net::IPEndPoint*  endPoint, ::System::Net::Sockets::SocketError  socketError, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, endPoint, socketError, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkError::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkError::__EventBasedNetListener__OnNetworkError()   {
}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::*)(::System::Object*, ::System::IntPtr)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a29e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a29f0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3a29f20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::*)(::System::IAsyncResult*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a29fb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* LiteNetLib::__EventBasedNetListener__OnNetworkReceive::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceive::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceive::Invoke(::LiteNetLib::NetPeer*  peer, ::LiteNetLib::NetPacketReader*  reader, ::LiteNetLib::DeliveryMethod  deliveryMethod)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnNetworkReceive::BeginInvoke(::LiteNetLib::NetPeer*  peer, ::LiteNetLib::NetPacketReader*  reader, ::LiteNetLib::DeliveryMethod  deliveryMethod, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, reader, deliveryMethod, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceive::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::__EventBasedNetListener__OnNetworkReceive()   {
}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(::System::Object*, ::System::IntPtr)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a29fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a2a0c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3a2a0dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(::System::IAsyncResult*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a2a174;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::Invoke(::System::Net::IPEndPoint*  remoteEndPoint, ::LiteNetLib::NetPacketReader*  reader, ::LiteNetLib::UnconnectedMessageType  messageType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::BeginInvoke(::System::Net::IPEndPoint*  remoteEndPoint, ::LiteNetLib::NetPacketReader*  reader, ::LiteNetLib::UnconnectedMessageType  messageType, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, remoteEndPoint, reader, messageType, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::__EventBasedNetListener__OnNetworkReceiveUnconnected()   {
}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::System::Object*, ::System::IntPtr)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a2a180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::LiteNetLib::NetPeer*, int32_t)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a2a284;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::LiteNetLib::NetPeer*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a2a298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::System::IAsyncResult*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a2a32c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::Invoke(::LiteNetLib::NetPeer*  peer, int32_t  latency)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, latency);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::BeginInvoke(::LiteNetLib::NetPeer*  peer, int32_t  latency, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, latency, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::__EventBasedNetListener__OnNetworkLatencyUpdate()   {
}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::*)(::System::Object*, ::System::IntPtr)>(&::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3a2a338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::*)(::LiteNetLib::ConnectionRequest*)>(&::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a2a438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::*)(::LiteNetLib::ConnectionRequest*, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a2a44c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::*)(::System::IAsyncResult*)>(&::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a2a46c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* LiteNetLib::__EventBasedNetListener__OnConnectionRequest::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnConnectionRequest::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnConnectionRequest::Invoke(::LiteNetLib::ConnectionRequest*  request)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnConnectionRequest::BeginInvoke(::LiteNetLib::ConnectionRequest*  request, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, request, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnConnectionRequest::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::__EventBasedNetListener__OnConnectionRequest()   {
}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::*)(::System::Object*, ::System::IntPtr)>(&::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a2a478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::*)(::LiteNetLib::NetPeer*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3a2a57c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::*)(::LiteNetLib::NetPeer*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3a2a590;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::*)(::System::IAsyncResult*)>(&::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a2a5b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::Invoke(::LiteNetLib::NetPeer*  peer, ::System::Object*  userData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, userData);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::BeginInvoke(::LiteNetLib::NetPeer*  peer, ::System::Object*  userData, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, userData, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::__EventBasedNetListener__OnDeliveryEvent()   {
}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_PeerConnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnPeerConnected*)>(&::LiteNetLib::EventBasedNetListener::add_PeerConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a28e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_PeerConnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_PeerConnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnPeerConnected*)>(&::LiteNetLib::EventBasedNetListener::remove_PeerConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a28f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_PeerConnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_PeerDisconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*)>(&::LiteNetLib::EventBasedNetListener::add_PeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a28fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_PeerDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_PeerDisconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*)>(&::LiteNetLib::EventBasedNetListener::remove_PeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a29044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_PeerDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkErrorEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkError*)>(&::LiteNetLib::EventBasedNetListener::add_NetworkErrorEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a290e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_NetworkErrorEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkErrorEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkError*)>(&::LiteNetLib::EventBasedNetListener::remove_NetworkErrorEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a2917c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_NetworkErrorEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkReceiveEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*)>(&::LiteNetLib::EventBasedNetListener::add_NetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a29218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_NetworkReceiveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkReceiveEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*)>(&::LiteNetLib::EventBasedNetListener::remove_NetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a292b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_NetworkReceiveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkReceiveUnconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*)>(&::LiteNetLib::EventBasedNetListener::add_NetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a29350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_NetworkReceiveUnconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkReceiveUnconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*)>(&::LiteNetLib::EventBasedNetListener::remove_NetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a293ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_NetworkReceiveUnconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkLatencyUpdateEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*)>(&::LiteNetLib::EventBasedNetListener::add_NetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a29488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_NetworkLatencyUpdateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkLatencyUpdateEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*)>(&::LiteNetLib::EventBasedNetListener::remove_NetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a29524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_NetworkLatencyUpdateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_ConnectionRequestEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*)>(&::LiteNetLib::EventBasedNetListener::add_ConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a295c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_ConnectionRequestEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_ConnectionRequestEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*)>(&::LiteNetLib::EventBasedNetListener::remove_ConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a2965c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_ConnectionRequestEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_DeliveryEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*)>(&::LiteNetLib::EventBasedNetListener::add_DeliveryEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a296f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_DeliveryEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_DeliveryEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*)>(&::LiteNetLib::EventBasedNetListener::remove_DeliveryEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a29794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_DeliveryEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearPeerConnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearPeerConnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearPeerConnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearPeerDisconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearPeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearPeerDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkErrorEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearNetworkErrorEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearNetworkErrorEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkReceiveEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearNetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearNetworkReceiveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkReceiveUnconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearNetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearNetworkReceiveUnconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkLatencyUpdateEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearNetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearNetworkLatencyUpdateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearConnectionRequestEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearConnectionRequestEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearDeliveryEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearDeliveryEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearDeliveryEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnPeerConnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a29870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnPeerConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnPeerDisconnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a2988c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnPeerDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a298a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnNetworkError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkReceive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a298c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnNetworkReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a298e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkLatencyUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, int32_t)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a298fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnConnectionRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::ConnectionRequest*)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a29918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnConnectionRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_IDeliveryEventListener_OnMessageDelivered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, ::System::Object*)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_IDeliveryEventListener_OnMessageDelivered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a29934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.IDeliveryEventListener.OnMessageDelivered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a29950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::INetEventListener"
constexpr  LiteNetLib::EventBasedNetListener::operator ::LiteNetLib::INetEventListener*() noexcept {
return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetEventListener"
constexpr ::LiteNetLib::INetEventListener* LiteNetLib::EventBasedNetListener::i___LiteNetLib__INetEventListener() noexcept {
return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::IDeliveryEventListener"
constexpr  LiteNetLib::EventBasedNetListener::operator ::LiteNetLib::IDeliveryEventListener*() noexcept {
return static_cast<::LiteNetLib::IDeliveryEventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::IDeliveryEventListener"
constexpr ::LiteNetLib::IDeliveryEventListener* LiteNetLib::EventBasedNetListener::i___LiteNetLib__IDeliveryEventListener() noexcept {
return static_cast<::LiteNetLib::IDeliveryEventListener*>(static_cast<void*>(this));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerConnected*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_PeerConnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerConnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*> const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_PeerConnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerConnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PeerConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_PeerDisconnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*> const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_PeerDisconnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerDisconnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PeerDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkError*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkErrorEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkErrorEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkError*> const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkErrorEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkErrorEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkErrorEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkReceiveEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkReceiveEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*> const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkReceiveEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkReceiveEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkReceiveEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkReceiveUnconnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkReceiveUnconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*> const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkReceiveUnconnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkReceiveUnconnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkReceiveUnconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkLatencyUpdateEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkLatencyUpdateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*> const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkLatencyUpdateEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkLatencyUpdateEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkLatencyUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_ConnectionRequestEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionRequestEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*> const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_ConnectionRequestEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionRequestEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectionRequestEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_DeliveryEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeliveryEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*> const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_DeliveryEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeliveryEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeliveryEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void LiteNetLib::EventBasedNetListener::add_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_PeerConnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_PeerConnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_PeerDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_PeerDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_NetworkErrorEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_NetworkErrorEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_NetworkReceiveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_NetworkReceiveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_NetworkReceiveUnconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_NetworkReceiveUnconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_NetworkLatencyUpdateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_NetworkLatencyUpdateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_ConnectionRequestEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_ConnectionRequestEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "add_DeliveryEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "remove_DeliveryEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::ClearPeerConnectedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearPeerConnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearPeerDisconnectedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearPeerDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkErrorEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearNetworkErrorEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkReceiveEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearNetworkReceiveEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkReceiveUnconnectedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearNetworkReceiveUnconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkLatencyUpdateEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearNetworkLatencyUpdateEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearConnectionRequestEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearConnectionRequestEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearDeliveryEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "ClearDeliveryEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer*  peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnPeerConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer*  peer, ::LiteNetLib::DisconnectInfo  disconnectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnPeerDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, disconnectInfo);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint*  endPoint, ::System::Net::Sockets::SocketError  socketErrorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnNetworkError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, socketErrorCode);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer*  peer, ::LiteNetLib::NetPacketReader*  reader, ::LiteNetLib::DeliveryMethod  deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnNetworkReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint*  remoteEndPoint, ::LiteNetLib::NetPacketReader*  reader, ::LiteNetLib::UnconnectedMessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer*  peer, int32_t  latency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, latency);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.INetEventListener.OnConnectionRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_IDeliveryEventListener_OnMessageDelivered(::LiteNetLib::NetPeer*  peer, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        "LiteNetLib.IDeliveryEventListener.OnMessageDelivered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, userData);
}
inline ::LiteNetLib::EventBasedNetListener* LiteNetLib::EventBasedNetListener::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener*>());
}
inline void LiteNetLib::EventBasedNetListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener::EventBasedNetListener()   {
}
