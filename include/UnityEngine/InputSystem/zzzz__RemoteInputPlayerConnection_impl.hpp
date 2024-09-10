#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/RemoteInputPlayerConnection.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__RemoteInputPlayerConnection_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "UnityEngine/InputSystem/zzzz__RemoteInputPlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__IEditorPlayerConnection_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::*)()>(&::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x45351a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::*)()>(&::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4534ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection>& UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection> const& UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::__cordl_internal_set_owner(::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*& UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::__cordl_internal_get_observer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observer;
}
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*> const& UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::__cordl_internal_get_observer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observer;
}
constexpr void UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::__cordl_internal_set_observer(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___observer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber* UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>());
}
inline void UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber::__RemoteInputPlayerConnection__Subscriber()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.Bind
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*, bool)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::Bind)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x45341a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "Bind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.Subscribe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable* (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscribe)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x4534934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "Subscribe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnConnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(int32_t)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnConnected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x4534858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnDisconnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(int32_t)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnDisconnected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4534be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4534cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnNewDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewLayout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4534cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnNewLayout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnNewEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4534ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnNewEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnRemoveDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnRemoveDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4534cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnRemoveDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnChangeUsages
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnChangeUsages)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4534ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnChangeUsages",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnStartSending
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStartSending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4534cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnStartSending",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.OnStopSending
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStopSending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4534cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnStopSending",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.SendToSubscribers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::InputSystem::__InputRemoting__MessageType, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::SendToSubscribers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4534ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "SendToSubscribers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::UnityEngine::InputSystem::__InputRemoting__Message)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x4534d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)(::System::Exception*)>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4534fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)()>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4534fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::RemoteInputPlayerConnection._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::RemoteInputPlayerConnection::*)()>(&::UnityEngine::InputSystem::RemoteInputPlayerConnection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4534fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr  UnityEngine::InputSystem::RemoteInputPlayerConnection::operator ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept {
return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* UnityEngine::InputSystem::RemoteInputPlayerConnection::i___System__IObserver_1___UnityEngine__InputSystem____InputRemoting__Message_() noexcept {
return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr  UnityEngine::InputSystem::RemoteInputPlayerConnection::operator ::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept {
return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>* UnityEngine::InputSystem::RemoteInputPlayerConnection::i___System__IObservable_1___UnityEngine__InputSystem____InputRemoting__Message_() noexcept {
return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_Connection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Connection;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*> const& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_Connection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Connection;
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_set_m_Connection(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Connection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*,::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*>& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_Subscribers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Subscribers;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*,::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*> const& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_Subscribers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Subscribers;
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*,::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Subscribers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_ConnectedIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConnectedIds;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_get_m_ConnectedIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConnectedIds;
}
constexpr void UnityEngine::InputSystem::RemoteInputPlayerConnection::__cordl_internal_set_m_ConnectedIds(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ConnectedIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kNewDeviceMsg(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "kNewDeviceMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kNewDeviceMsg()  {
return ::cordl_internals::getStaticField<::System::Guid, "kNewDeviceMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kNewLayoutMsg(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "kNewLayoutMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kNewLayoutMsg()  {
return ::cordl_internals::getStaticField<::System::Guid, "kNewLayoutMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kNewEventsMsg(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "kNewEventsMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kNewEventsMsg()  {
return ::cordl_internals::getStaticField<::System::Guid, "kNewEventsMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kRemoveDeviceMsg(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "kRemoveDeviceMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kRemoveDeviceMsg()  {
return ::cordl_internals::getStaticField<::System::Guid, "kRemoveDeviceMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kChangeUsagesMsg(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "kChangeUsagesMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kChangeUsagesMsg()  {
return ::cordl_internals::getStaticField<::System::Guid, "kChangeUsagesMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kStartSendingMsg(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "kStartSendingMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kStartSendingMsg()  {
return ::cordl_internals::getStaticField<::System::Guid, "kStartSendingMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::setStaticF_kStopSendingMsg(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "kStopSendingMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>(std::forward<::System::Guid>(value));
}
inline ::System::Guid UnityEngine::InputSystem::RemoteInputPlayerConnection::getStaticF_kStopSendingMsg()  {
return ::cordl_internals::getStaticField<::System::Guid, "kStopSendingMsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get>();
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::Bind(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  connection, bool  isConnected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "Bind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection, isConnected);
}
inline ::System::IDisposable* UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "Subscribe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnConnected(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnDisconnected(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnNewDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewLayout(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnNewLayout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnNewEvents(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnNewEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnRemoveDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnRemoveDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnChangeUsages(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnChangeUsages",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStartSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnStartSending",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::OnStopSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "OnStopSending",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::SendToSubscribers(::UnityEngine::InputSystem::__InputRemoting__MessageType  type, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "SendToSubscribers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, args);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::__InputRemoting__Message  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputRemoting__Message>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::RemoteInputPlayerConnection* UnityEngine::InputSystem::RemoteInputPlayerConnection::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>());
}
inline void UnityEngine::InputSystem::RemoteInputPlayerConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::RemoteInputPlayerConnection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::RemoteInputPlayerConnection::RemoteInputPlayerConnection()   {
}
