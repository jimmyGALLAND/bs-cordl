#pragma once
// IWYU pragma private; include "System/Net/Sockets/Socket.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_impl.hpp"
#include "System/Net/Sockets/zzzz__ProtocolType_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketType_impl.hpp"
#include "System/Net/Sockets/zzzz__Socket_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceComponent_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/Sockets/zzzz__IOControlCode_def.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
#include "System/Net/Sockets/zzzz__ProtocolType_def.hpp"
#include "System/Net/Sockets/zzzz__SafeSocketHandle_def.hpp"
#include "System/Net/Sockets/zzzz__SelectMode_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionLevel_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionName_def.hpp"
#include "System/Net/Sockets/zzzz__SocketShutdown_def.hpp"
#include "System/Net/Sockets/zzzz__SocketType_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IOAsyncCallback_def.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/zzzz__IOSelectorJob_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::__Socket__CachedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__CachedEventArgs::*)()>(&::System::Net::Sockets::__Socket__CachedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4369ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__CachedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_TaskAccept()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TaskAccept;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*> const& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_TaskAccept() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TaskAccept;
}
constexpr void System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_set_TaskAccept(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TaskAccept)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_TaskReceive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TaskReceive;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*> const& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_TaskReceive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TaskReceive;
}
constexpr void System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_set_TaskReceive(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TaskReceive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_TaskSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TaskSend;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*> const& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_TaskSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TaskSend;
}
constexpr void System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_set_TaskSend(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TaskSend)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_ValueTaskReceive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueTaskReceive;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*> const& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_ValueTaskReceive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueTaskReceive;
}
constexpr void System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_set_ValueTaskReceive(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ValueTaskReceive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_ValueTaskSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueTaskSend;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*> const& System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_get_ValueTaskSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ValueTaskSend;
}
constexpr void System::Net::Sockets::__Socket__CachedEventArgs::__cordl_internal_set_ValueTaskSend(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ValueTaskSend)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Sockets::__Socket__CachedEventArgs* System::Net::Sockets::__Socket__CachedEventArgs::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::__Socket__CachedEventArgs*>());
}
inline void System::Net::Sockets::__Socket__CachedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__CachedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__Socket__CachedEventArgs::__Socket__CachedEventArgs()   {
}
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>& System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_get__builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____builder;
}
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> const& System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_get__builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____builder;
}
template<typename TResult>
constexpr void System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_set__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____builder = value;
}
template<typename TResult>
constexpr bool& System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_get__accessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accessed;
}
template<typename TResult>
constexpr bool const& System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_get__accessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accessed;
}
template<typename TResult>
constexpr void System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_set__accessed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accessed = value;
}
template<typename TResult>
inline ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>* System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>*>());
}
template<typename TResult>
inline void System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::GetCompletionResponsibility(ByRef<bool>  responsibleForReturningToPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>*>::get(),
                        "GetCompletionResponsibility",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, false>(this, ___internal_method, responsibleForReturningToPool);
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>::__Socket__TaskSocketAsyncEventArgs_1()   {
}
//  Writing Method size for method: ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs::*)()>(&::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4369cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs::__cordl_internal_get__wrapExceptionsInIOExceptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wrapExceptionsInIOExceptions;
}
constexpr bool const& System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs::__cordl_internal_get__wrapExceptionsInIOExceptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wrapExceptionsInIOExceptions;
}
constexpr void System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs::__cordl_internal_set__wrapExceptionsInIOExceptions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wrapExceptionsInIOExceptions = value;
}
inline ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*>());
}
inline void System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs::__Socket__Int32TaskSocketAsyncEventArgs()   {
}
//  Writing Method size for method: ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::*)()>(&::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x436ac2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c._OnCompleted_b__14_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::*)(::System::Object*)>(&::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::_OnCompleted_b__14_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x436ac34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        "<OnCompleted>b__14_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c._InvokeContinuation_b__20_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::*)(::System::Object*)>(&::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::_InvokeContinuation_b__20_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x436ace4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        "<InvokeContinuation>b__20_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c.__cctor_b__27_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::*)(::System::Object*)>(&::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::__cctor_b__27_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x436ad90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        "<.cctor>b__27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c.__cctor_b__27_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::*)(::System::Object*)>(&::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::__cctor_b__27_1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x436addc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        "<.cctor>b__27_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::setStaticF___9(::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get>(std::forward<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>(value));
}
inline ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c* GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get>();
}
inline void GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::setStaticF___9__14_0(::System::Threading::ContextCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get>();
}
inline void GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::setStaticF___9__20_0(::System::Threading::SendOrPostCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get>(std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get>();
}
inline ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c* GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>());
}
inline void GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::_OnCompleted_b__14_0(::System::Object*  runState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        "<OnCompleted>b__14_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runState);
}
inline void GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::_InvokeContinuation_b__20_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        "<InvokeContinuation>b__20_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::__cctor_b__27_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        "<.cctor>b__27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::__cctor_b__27_1(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*>::get(),
                        "<.cctor>b__27_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c::__Socket__AwaitableSocketAsyncEventArgs____c()   {
}
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)()>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4369cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.get_WrapExceptionsInIOExceptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)()>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4369dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "get_WrapExceptionsInIOExceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.set_WrapExceptionsInIOExceptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(bool)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4369df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "set_WrapExceptionsInIOExceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.Reserve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)()>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::Reserve)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4369e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "Reserve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.Release
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)()>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::Release)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4369e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.OnCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x4369eec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.ReceiveAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::ReceiveAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x436a3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "ReceiveAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.SendAsyncForNetworkStream
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x436a5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "SendAsyncForNetworkStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.GetStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Sources::ValueTaskSourceStatus (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(int16_t)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::GetStatus)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x436a6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "GetStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.OnCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x436a784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "OnCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.InvokeContinuation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(::System::Action_1<::System::Object*>*, ::System::Object*, bool)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::InvokeContinuation)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x436a0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "InvokeContinuation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.GetResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(int16_t)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::GetResult)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x436a9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "GetResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.System_Threading_Tasks_Sources_IValueTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(int16_t)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x436aa4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "System.Threading.Tasks.Sources.IValueTaskSource.GetResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.ThrowIncorrectTokenException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)()>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x436a738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "ThrowIncorrectTokenException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.ThrowMultipleContinuationsException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)()>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x436a994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "ThrowMultipleContinuationsException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.ThrowException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::ThrowException)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x436aa28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "ThrowException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs.CreateException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::CreateException)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x436a4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "CreateException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>"
constexpr  System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>* System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::i___System__Threading__Tasks__Sources__IValueTaskSource_1_int32_t_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*>(static_cast<void*>(this));
}
constexpr ::System::Action_1<::System::Object*>*& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__continuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continuation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__continuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continuation;
}
constexpr void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_set__continuation(::System::Action_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__executionContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____executionContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__executionContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____executionContext;
}
constexpr void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_set__executionContext(::System::Threading::ExecutionContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____executionContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__scheduler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__scheduler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scheduler;
}
constexpr void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_set__scheduler(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scheduler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int16_t& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____token;
}
constexpr int16_t const& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____token;
}
constexpr void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_set__token(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____token = value;
}
constexpr bool& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__WrapExceptionsInIOExceptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WrapExceptionsInIOExceptions_k__BackingField;
}
constexpr bool const& System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_get__WrapExceptionsInIOExceptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WrapExceptionsInIOExceptions_k__BackingField;
}
constexpr void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__cordl_internal_set__WrapExceptionsInIOExceptions_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WrapExceptionsInIOExceptions_k__BackingField = value;
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::setStaticF_Reserved(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*  value)  {
::cordl_internals::setStaticField<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*, "Reserved", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get>(std::forward<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>(value));
}
inline ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::getStaticF_Reserved()  {
return ::cordl_internals::getStaticField<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*, "Reserved", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get>();
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::setStaticF_s_completedSentinel(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_completedSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::getStaticF_s_completedSentinel()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_completedSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get>();
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::setStaticF_s_availableSentinel(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_availableSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::getStaticF_s_availableSentinel()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_availableSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get>();
}
inline ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>());
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "get_WrapExceptionsInIOExceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "set_WrapExceptionsInIOExceptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::Reserve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "Reserve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs*  _)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::ReceiveAsync(::System::Net::Sockets::Socket*  socket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "ReceiveAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(this, ___internal_method, socket);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream(::System::Net::Sockets::Socket*  socket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "SendAsyncForNetworkStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, socket);
}
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "GetStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(this, ___internal_method, token);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "OnCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, token, flags);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::InvokeContinuation(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, bool  forceAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "InvokeContinuation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, forceAsync);
}
inline int32_t System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "GetResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, token);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "System.Threading.Tasks.Sources.IValueTaskSource.GetResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "ThrowIncorrectTokenException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "ThrowMultipleContinuationsException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::ThrowException(::System::Net::Sockets::SocketError  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "ThrowException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::System::Exception* System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::CreateException(::System::Net::Sockets::SocketError  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>::get(),
                        "CreateException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs::__Socket__AwaitableSocketAsyncEventArgs()   {
}
// Ctor Parameters [CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buf", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::__Socket__WSABUF::__Socket__WSABUF(int32_t  len, ::System::IntPtr  buf) noexcept  {
this->len = len;
this->buf = buf;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__Socket__WSABUF::__Socket__WSABUF()   {
}
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)()>(&::System::Net::Sockets::__Socket____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x436ae84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._ReceiveAsync_b__14_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::__Socket__CachedEventArgs* (::System::Net::Sockets::__Socket____c::*)()>(&::System::Net::Sockets::__Socket____c::_ReceiveAsync_b__14_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x436ae8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<ReceiveAsync>b__14_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._ReceiveAsync_b__14_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* (::System::Net::Sockets::__Socket____c::*)()>(&::System::Net::Sockets::__Socket____c::_ReceiveAsync_b__14_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x436aee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<ReceiveAsync>b__14_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._ReceiveAsyncApm_b__15_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::_ReceiveAsyncApm_b__15_0)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x436af30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<ReceiveAsyncApm>b__15_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._ReceiveAsyncApm_b__15_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::_ReceiveAsyncApm_b__15_1)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x436b168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<ReceiveAsyncApm>b__15_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._SendAsyncForNetworkStream_b__22_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::__Socket__CachedEventArgs* (::System::Net::Sockets::__Socket____c::*)()>(&::System::Net::Sockets::__Socket____c::_SendAsyncForNetworkStream_b__22_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x436b59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsyncForNetworkStream>b__22_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._SendAsyncForNetworkStream_b__22_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* (::System::Net::Sockets::__Socket____c::*)()>(&::System::Net::Sockets::__Socket____c::_SendAsyncForNetworkStream_b__22_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x436b5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsyncForNetworkStream>b__22_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._SendAsyncApm_b__23_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::_SendAsyncApm_b__23_0)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x436b640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsyncApm>b__23_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._SendAsyncApm_b__23_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::_SendAsyncApm_b__23_1)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x436b878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsyncApm>b__23_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._SendAsync_b__295_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::_SendAsync_b__295_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x436bb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsync>b__295_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c._BeginSend_b__297_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::_BeginSend_b__297_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x436bc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<BeginSend>b__297_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x436bca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_1)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x436bd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_2)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x436be7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_3)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x436bf5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_4
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_4)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x436c1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_5
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_5)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x436c318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_5",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_6
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_6)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x436c554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_6",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_7
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_7)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x436c7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_7",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_8
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_8)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x436cc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_8",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_9
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_9)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x436cee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_9",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_10
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_10)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x436cfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_10",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_11
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_11)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x436d284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_11",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_12
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_12)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x436d530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_12",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_13
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_13)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x436d63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_13",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_14
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_14)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x436d8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_14",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_15
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_15)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x436da68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_15",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_16
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_16)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x436dd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_16",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c.__cctor_b__367_17
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::__Socket____c::__cctor_b__367_17)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x436de0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_17",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::__Socket____c::setStaticF___9(::System::Net::Sockets::__Socket____c*  value)  {
::cordl_internals::setStaticField<::System::Net::Sockets::__Socket____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::Net::Sockets::__Socket____c*>(value));
}
inline ::System::Net::Sockets::__Socket____c* System::Net::Sockets::__Socket____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::Sockets::__Socket____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__14_0(::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>* System::Net::Sockets::__Socket____c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__14_1(::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>*, "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>* System::Net::Sockets::__Socket____c::getStaticF___9__14_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>*, "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__15_0(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::__Socket____c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__15_1(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::__Socket____c::getStaticF___9__15_1()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__22_0(::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>*, "<>9__22_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>* System::Net::Sockets::__Socket____c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>*, "<>9__22_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__22_1(::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>*, "<>9__22_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>* System::Net::Sockets::__Socket____c::getStaticF___9__22_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>*, "<>9__22_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__23_0(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::__Socket____c::getStaticF___9__23_0()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__23_1(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::__Socket____c::getStaticF___9__23_1()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__295_0(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "<>9__295_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::__Socket____c::getStaticF___9__295_0()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "<>9__295_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline void System::Net::Sockets::__Socket____c::setStaticF___9__297_0(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "<>9__297_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::__Socket____c::getStaticF___9__297_0()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "<>9__297_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get>();
}
inline ::System::Net::Sockets::__Socket____c* System::Net::Sockets::__Socket____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::__Socket____c*>());
}
inline void System::Net::Sockets::__Socket____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::__Socket__CachedEventArgs* System::Net::Sockets::__Socket____c::_ReceiveAsync_b__14_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<ReceiveAsync>b__14_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::__Socket__CachedEventArgs*, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* System::Net::Sockets::__Socket____c::_ReceiveAsync_b__14_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<ReceiveAsync>b__14_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket____c::_ReceiveAsyncApm_b__15_0(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<ReceiveAsyncApm>b__15_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::__Socket____c::_ReceiveAsyncApm_b__15_1(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<ReceiveAsyncApm>b__15_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
inline ::System::Net::Sockets::__Socket__CachedEventArgs* System::Net::Sockets::__Socket____c::_SendAsyncForNetworkStream_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsyncForNetworkStream>b__22_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::__Socket__CachedEventArgs*, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* System::Net::Sockets::__Socket____c::_SendAsyncForNetworkStream_b__22_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsyncForNetworkStream>b__22_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket____c::_SendAsyncApm_b__23_0(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsyncApm>b__23_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::__Socket____c::_SendAsyncApm_b__23_1(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsyncApm>b__23_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::__Socket____c::_SendAsync_b__295_0(::System::IOAsyncResult*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<SendAsync>b__295_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::Sockets::__Socket____c::_BeginSend_b__297_0(::System::IOAsyncResult*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<BeginSend>b__297_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_0(::System::Object*  s, ::System::Net::Sockets::SocketAsyncEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_1(::System::Object*  s, ::System::Net::Sockets::SocketAsyncEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_2(::System::Object*  s, ::System::Net::Sockets::SocketAsyncEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_3(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_4(::System::IOAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_5(::System::IOAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_5",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_6(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_6",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_7(::System::IOAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_7",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_8(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_8",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_9(::System::IOAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_9",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_10(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_10",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_11(::System::IOAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_11",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_12(::System::IOAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_12",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_13(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_13",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_14(::System::IOAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_14",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_15(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_15",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_16(::System::IOAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_16",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::__Socket____c::__cctor_b__367_17(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c*>::get(),
                        "<.cctor>b__367_17",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__Socket____c::__Socket____c()   {
}
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c__DisplayClass240_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c__DisplayClass240_0::*)()>(&::System::Net::Sockets::__Socket____c__DisplayClass240_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x436e0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass240_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c__DisplayClass240_0._BeginConnect_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c__DisplayClass240_0::*)(::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>*)>(&::System::Net::Sockets::__Socket____c__DisplayClass240_0::_BeginConnect_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x436e0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass240_0*>::get(),
                        "<BeginConnect>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::SocketAsyncResult*& System::Net::Sockets::__Socket____c__DisplayClass240_0::__cordl_internal_get_sockares()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sockares;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::SocketAsyncResult*> const& System::Net::Sockets::__Socket____c__DisplayClass240_0::__cordl_internal_get_sockares() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sockares;
}
constexpr void System::Net::Sockets::__Socket____c__DisplayClass240_0::__cordl_internal_set_sockares(::System::Net::Sockets::SocketAsyncResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sockares)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Sockets::__Socket____c__DisplayClass240_0* System::Net::Sockets::__Socket____c__DisplayClass240_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::__Socket____c__DisplayClass240_0*>());
}
inline void System::Net::Sockets::__Socket____c__DisplayClass240_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass240_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket____c__DisplayClass240_0::_BeginConnect_b__0(::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass240_0*>::get(),
                        "<BeginConnect>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*,::Array<::System::Net::IPAddress*>*>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__Socket____c__DisplayClass240_0::__Socket____c__DisplayClass240_0()   {
}
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c__DisplayClass298_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c__DisplayClass298_0::*)()>(&::System::Net::Sockets::__Socket____c__DisplayClass298_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x436e1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass298_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c__DisplayClass298_0._BeginSendCallback_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c__DisplayClass298_0::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::__Socket____c__DisplayClass298_0::_BeginSendCallback_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x436e1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass298_0*>::get(),
                        "<BeginSendCallback>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::Sockets::__Socket____c__DisplayClass298_0::__cordl_internal_get_sent_so_far()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sent_so_far;
}
constexpr int32_t const& System::Net::Sockets::__Socket____c__DisplayClass298_0::__cordl_internal_get_sent_so_far() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sent_so_far;
}
constexpr void System::Net::Sockets::__Socket____c__DisplayClass298_0::__cordl_internal_set_sent_so_far(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sent_so_far = value;
}
inline ::System::Net::Sockets::__Socket____c__DisplayClass298_0* System::Net::Sockets::__Socket____c__DisplayClass298_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::__Socket____c__DisplayClass298_0*>());
}
inline void System::Net::Sockets::__Socket____c__DisplayClass298_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass298_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket____c__DisplayClass298_0::_BeginSendCallback_b__0(::System::IOAsyncResult*  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass298_0*>::get(),
                        "<BeginSendCallback>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__Socket____c__DisplayClass298_0::__Socket____c__DisplayClass298_0()   {
}
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c__DisplayClass355_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c__DisplayClass355_0::*)()>(&::System::Net::Sockets::__Socket____c__DisplayClass355_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x436e274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass355_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::__Socket____c__DisplayClass355_0._QueueIOSelectorJob_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::__Socket____c__DisplayClass355_0::*)(::System::Threading::Tasks::Task*)>(&::System::Net::Sockets::__Socket____c__DisplayClass355_0::_QueueIOSelectorJob_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x436e27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass355_0*>::get(),
                        "<QueueIOSelectorJob>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_set___4__this(::System::Net::Sockets::Socket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IOSelectorJob*& System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_get_job()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr ::cordl_internals::to_const_pointer<::System::IOSelectorJob*> const& System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_get_job() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr void System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_set_job(::System::IOSelectorJob*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___job)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IntPtr& System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::System::IntPtr const& System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void System::Net::Sockets::__Socket____c__DisplayClass355_0::__cordl_internal_set_handle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
inline ::System::Net::Sockets::__Socket____c__DisplayClass355_0* System::Net::Sockets::__Socket____c__DisplayClass355_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::__Socket____c__DisplayClass355_0*>());
}
inline void System::Net::Sockets::__Socket____c__DisplayClass355_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass355_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::__Socket____c__DisplayClass355_0::_QueueIOSelectorJob_b__0(::System::Threading::Tasks::Task*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::__Socket____c__DisplayClass355_0*>::get(),
                        "<QueueIOSelectorJob>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::__Socket____c__DisplayClass355_0::__Socket____c__DisplayClass355_0()   {
}
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, ::System::Net::Sockets::SocketFlags, bool, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::Socket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x435fe04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsyncApm
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::ReceiveAsyncApm)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x4360e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveAsyncApm",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsyncForNetworkStream
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Sockets::Socket::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Net::Sockets::SocketFlags, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::Socket::SendAsyncForNetworkStream)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x43606b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendAsyncForNetworkStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsyncApm
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::Net::Sockets::Socket::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::SendAsyncApm)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x436126c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendAsyncApm",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CompleteAccept
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*)>(&::System::Net::Sockets::Socket::CompleteAccept)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x43616a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "CompleteAccept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CompleteSendReceive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*, bool)>(&::System::Net::Sockets::Socket::CompleteSendReceive)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x4361924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "CompleteSendReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Net::Sockets::SocketError, bool)>(&::System::Net::Sockets::Socket::GetException)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x436183c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "GetException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReturnSocketAsyncEventArgs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*, bool)>(&::System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4361aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReturnSocketAsyncEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReturnSocketAsyncEventArgs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*)>(&::System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x43617fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReturnSocketAsyncEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType)>(&::System::Net::Sockets::Socket::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x4361af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_OSSupportsIPv4
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Net::Sockets::Socket::get_OSSupportsIPv4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4362154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_OSSupportsIPv4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_OSSupportsIPv6
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Net::Sockets::Socket::get_OSSupportsIPv6)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x43621b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_OSSupportsIPv6",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Handle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Handle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x436221c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Handle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_AddressFamily
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_AddressFamily)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4362238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_AddressFamily",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_SocketType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketType (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_SocketType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4362240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_SocketType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_ProtocolType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::ProtocolType (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_ProtocolType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4362248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_ProtocolType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ExclusiveAddressUse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_ExclusiveAddressUse)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4362250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_ExclusiveAddressUse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ReceiveBufferSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_ReceiveBufferSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x43623e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_ReceiveBufferSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_SendBufferSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_SendBufferSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4362444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_SendBufferSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ReceiveTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_ReceiveTimeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x43624a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_ReceiveTimeout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_SendTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_SendTimeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x436250c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_SendTimeout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Ttl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Ttl)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4362574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Ttl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_Ttl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int16_t)>(&::System::Net::Sockets::Socket::set_Ttl)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4362664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_Ttl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_DontFragment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_DontFragment)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4362748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_DontFragment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_DualMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_DualMode)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x43627c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_DualMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_DualMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_DualMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x43628a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_DualMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_IsDualMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_IsDualMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4362924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_IsDualMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CanTryAddressFamily
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::AddressFamily)>(&::System::Net::Sockets::Socket::CanTryAddressFamily)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x436293c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "CanTryAddressFamily",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4362974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x435e920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x435e218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x43631e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::IOControlCode, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Net::Sockets::Socket::IOControl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x436379c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IOControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::IOControlCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetIPProtectionLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::IPProtectionLevel)>(&::System::Net::Sockets::Socket::SetIPProtectionLevel)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4361f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetIPProtectionLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::IPProtectionLevel>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSend
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginSend)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x435f7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginSend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSend
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndSend)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x435fa34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndSend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginReceive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginReceive)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x435f1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndReceive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x435f450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_InternalSyncObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Net::Sockets::Socket::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x4363e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_InternalSyncObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_CleanedUp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_CleanedUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4363f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_CleanedUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InitializeSockets
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::Sockets::Socket::InitializeSockets)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x4361d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "InitializeSockets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4363fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4364030;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InternalShutdown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketShutdown)>(&::System::Net::Sockets::Socket::InternalShutdown)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x435ed98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "InternalShutdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, int32_t, bool)>(&::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4360cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::System::Net::Sockets::SafeSocketHandle*)>(&::System::Net::Sockets::Socket::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4364348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SocketDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::SocketDefaults)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4362080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SocketDefaults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Socket_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Socket_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4361f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Socket_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Available
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Available)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x435dd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Available",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Available_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Available_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x43644fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Available_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Available_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Available_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4364634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Available_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_EnableBroadcast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_EnableBroadcast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4364638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_EnableBroadcast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_IsBound
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_IsBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43646ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_IsBound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_LocalEndPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x43646b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_LocalEndPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.LocalEndPoint_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::LocalEndPoint_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x43647a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "LocalEndPoint_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.LocalEndPoint_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (*)(::System::IntPtr, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::LocalEndPoint_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43648e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "LocalEndPoint_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Blocking
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Blocking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43648e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Blocking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_Blocking
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_Blocking)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x43648ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_Blocking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Blocking_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, bool, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Blocking_internal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x43649b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Blocking_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Blocking_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Blocking_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4364ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Blocking_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Connected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Connected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4364adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Connected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_NoDelay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_NoDelay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4364438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_NoDelay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_RemoteEndPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_RemoteEndPoint)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4364b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_RemoteEndPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemoteEndPoint_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::RemoteEndPoint_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4364c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "RemoteEndPoint_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemoteEndPoint_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (*)(::System::IntPtr, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::RemoteEndPoint_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4364d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "RemoteEndPoint_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(int32_t, ::System::Net::Sockets::SelectMode)>(&::System::Net::Sockets::Socket::Poll)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x4364d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Poll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SelectMode, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Poll_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4364f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Poll_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::Net::Sockets::SelectMode, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Poll_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4365050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Poll_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Accept)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x4365054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Accept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::Socket::Accept)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x43652d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Accept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.AcceptAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket::AcceptAsync)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x43653ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "AcceptAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginAccept
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginAccept)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x43657d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginAccept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndAccept
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndAccept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x436593c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndAccept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndAccept
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::Socket::*)(ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>, ByRef<int32_t>, ::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndAccept)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4365964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndAccept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SafeSocketHandle* (*)(::System::Net::Sockets::SafeSocketHandle*, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Accept_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4365188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Accept_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Accept_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4365b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Accept_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::Bind)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x4365b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Bind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Bind_internal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4365dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Bind_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::SocketAddress*, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Bind_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4365eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Bind_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::Listen)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4365ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Listen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Listen_internal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4365fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Listen_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Listen_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43660fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Listen_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::Sockets::Socket::Connect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4366100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::Connect)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x4366174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginConnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::StringW, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x43665f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginConnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x43668b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginMConnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Sockets::SocketAsyncResult*)>(&::System::Net::Sockets::Socket::BeginMConnect)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x4366e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginMConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSConnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Sockets::SocketAsyncResult*)>(&::System::Net::Sockets::Socket::BeginSConnect)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x43669e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginSConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndConnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndConnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4367024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Connect_internal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x43664d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Connect_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::SocketAddress*, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Connect_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43670d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Connect_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::Disconnect)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x43670dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Disconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndDisconnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndDisconnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x43672e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndDisconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, bool, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Disconnect_internal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x43671c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Disconnect_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Disconnect_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4367398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Disconnect_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x43630bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x4367658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x4363244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Span_1<uint8_t>, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x435e4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x435ebd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x43679a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginReceive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginReceive)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x4363c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::EndReceive)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4363da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Receive_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4367860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_array_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Receive_array_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4367b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive_array_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Receive_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4367518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Receive_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4367ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::EndPoint*>)>(&::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x4367ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::EndPoint*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::EndPoint*>, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x4367cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::EndPoint*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::EndPoint*>, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x4367f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::EndPoint*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceiveFrom_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncResult*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket::EndReceiveFrom_internal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x43681f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndReceiveFrom_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::SocketAddress*>, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::ReceiveFrom_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4367e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::SocketAddress*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::SocketAddress*>, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::ReceiveFrom_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43682c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::SocketAddress*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4362f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x43629d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket::SendAsync)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x4368548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSend
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<::System::Net::Sockets::SocketError>, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginSend)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x436391c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginSend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSendCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SocketAsyncResult*, int32_t)>(&::System::Net::Sockets::Socket::BeginSendCallback)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x4368810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginSendCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSend
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::EndSend)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4363b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndSend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Send_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4368408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_array_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Send_array_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4368ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send_array_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Send_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x43682c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Send_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4368ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::SendTo)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x4368bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSendTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndSendTo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4368e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndSendTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::SendTo_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4368d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendTo_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*, ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::SendTo_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4368f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendTo_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName)>(&::System::Net::Sockets::Socket::GetSocketOption)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x435d7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "GetSocketOption",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption_obj_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ByRef<::System::Object*>, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::GetSocketOption_obj_internal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x4368f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "GetSocketOption_obj_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption_obj_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ByRef<::System::Object*>, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::GetSocketOption_obj_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4369098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "GetSocketOption_obj_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, bool)>(&::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x436909c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, int32_t)>(&::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x43622c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::SetSocketOption_internal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x43641f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::SetSocketOption_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x43690a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Net::Sockets::Socket::IOControl)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x43637a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IOControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::IOControl_internal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x43690a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IOControl_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::IOControl_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4369200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IOControl_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4369204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x435ee20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Close_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x436920c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Close_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketShutdown)>(&::System::Net::Sockets::Socket::Shutdown)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4369210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Shutdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketShutdown, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Shutdown_internal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x43640d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Shutdown_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown_icall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketShutdown, ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Shutdown_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4369318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Shutdown_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x436931c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Linger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IntPtr)>(&::System::Net::Sockets::Socket::Linger)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x436937c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Linger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfDisposedAndClosed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::ThrowIfDisposedAndClosed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4364478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ThrowIfDisposedAndClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfBufferNull
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Net::Sockets::Socket::ThrowIfBufferNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x43673a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ThrowIfBufferNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfBufferOutOfRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Net::Sockets::Socket::ThrowIfBufferOutOfRange)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x43673f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ThrowIfBufferOutOfRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfUdp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::ThrowIfUdp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4364ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ThrowIfUdp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ValidateEndIAsyncResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketAsyncResult* (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::StringW, ::StringW)>(&::System::Net::Sockets::Socket::ValidateEndIAsyncResult)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x4365a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ValidateEndIAsyncResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.QueueIOSelectorJob
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Threading::SemaphoreSlim*, ::System::IntPtr, ::System::IOSelectorJob*)>(&::System::Net::Sockets::Socket::QueueIOSelectorJob)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x436569c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "QueueIOSelectorJob",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SemaphoreSlim*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOSelectorJob*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InitSocketAsyncEventArgs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::Socket::InitSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4365620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "InitSocketAsyncEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SocketOperationToSocketAsyncOperation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketAsyncOperation (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::Socket::SocketOperationToSocketAsyncOperation)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x43694e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SocketOperationToSocketAsyncOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemapIPEndPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::System::Net::Sockets::Socket::*)(::System::Net::IPEndPoint*)>(&::System::Net::Sockets::Socket::RemapIPEndPoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4365d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "RemapIPEndPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.cancel_blocking_socket_operation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Thread*)>(&::System::Net::Sockets::Socket::cancel_blocking_socket_operation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4369584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "cancel_blocking_socket_operation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_FamilyHint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Net::Sockets::Socket::get_FamilyHint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4369588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_FamilyHint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IsProtocolSupported_internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::NetworkInformation::NetworkInterfaceComponent)>(&::System::Net::Sockets::Socket::IsProtocolSupported_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x436960c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IsProtocolSupported_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceComponent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IsProtocolSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::NetworkInformation::NetworkInterfaceComponent)>(&::System::Net::Sockets::Socket::IsProtocolSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4363f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IsProtocolSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceComponent>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::Sockets::Socket::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Sockets::Socket::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Net::Sockets::__Socket__CachedEventArgs*& System::Net::Sockets::Socket::__cordl_internal_get__cachedTaskEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTaskEventArgs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__CachedEventArgs*> const& System::Net::Sockets::Socket::__cordl_internal_get__cachedTaskEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTaskEventArgs;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set__cachedTaskEventArgs(::System::Net::Sockets::__Socket__CachedEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedTaskEventArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_closed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_closed;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_closed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_closed;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_closed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___is_closed = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_listening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_listening;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_listening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_listening;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_listening(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___is_listening = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_useOverlappedIO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useOverlappedIO;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_useOverlappedIO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useOverlappedIO;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_useOverlappedIO(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useOverlappedIO = value;
}
constexpr int32_t& System::Net::Sockets::Socket::__cordl_internal_get_linger_timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linger_timeout;
}
constexpr int32_t const& System::Net::Sockets::Socket::__cordl_internal_get_linger_timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linger_timeout;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_linger_timeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linger_timeout = value;
}
constexpr ::System::Net::Sockets::AddressFamily& System::Net::Sockets::Socket::__cordl_internal_get_addressFamily()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addressFamily;
}
constexpr ::System::Net::Sockets::AddressFamily const& System::Net::Sockets::Socket::__cordl_internal_get_addressFamily() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addressFamily;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_addressFamily(::System::Net::Sockets::AddressFamily  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addressFamily = value;
}
constexpr ::System::Net::Sockets::SocketType& System::Net::Sockets::Socket::__cordl_internal_get_socketType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socketType;
}
constexpr ::System::Net::Sockets::SocketType const& System::Net::Sockets::Socket::__cordl_internal_get_socketType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___socketType;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_socketType(::System::Net::Sockets::SocketType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___socketType = value;
}
constexpr ::System::Net::Sockets::ProtocolType& System::Net::Sockets::Socket::__cordl_internal_get_protocolType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___protocolType;
}
constexpr ::System::Net::Sockets::ProtocolType const& System::Net::Sockets::Socket::__cordl_internal_get_protocolType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___protocolType;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_protocolType(::System::Net::Sockets::ProtocolType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___protocolType = value;
}
constexpr ::System::Net::Sockets::SafeSocketHandle*& System::Net::Sockets::Socket::__cordl_internal_get_m_Handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Handle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::SafeSocketHandle*> const& System::Net::Sockets::Socket::__cordl_internal_get_m_Handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Handle;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_m_Handle(::System::Net::Sockets::SafeSocketHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Handle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::EndPoint*& System::Net::Sockets::Socket::__cordl_internal_get_seed_endpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed_endpoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPoint*> const& System::Net::Sockets::Socket::__cordl_internal_get_seed_endpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seed_endpoint;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_seed_endpoint(::System::Net::EndPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seed_endpoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SemaphoreSlim*& System::Net::Sockets::Socket::__cordl_internal_get_ReadSem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadSem;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& System::Net::Sockets::Socket::__cordl_internal_get_ReadSem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReadSem;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_ReadSem(::System::Threading::SemaphoreSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReadSem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SemaphoreSlim*& System::Net::Sockets::Socket::__cordl_internal_get_WriteSem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WriteSem;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& System::Net::Sockets::Socket::__cordl_internal_get_WriteSem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WriteSem;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_WriteSem(::System::Threading::SemaphoreSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WriteSem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_blocking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_blocking;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_blocking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_blocking;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_blocking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___is_blocking = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_bound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_bound;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_bound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_bound;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_bound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___is_bound = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_connected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_connected;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_connected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___is_connected;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_connected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___is_connected = value;
}
constexpr int32_t& System::Net::Sockets::Socket::__cordl_internal_get_m_IntCleanedUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IntCleanedUp;
}
constexpr int32_t const& System::Net::Sockets::Socket::__cordl_internal_get_m_IntCleanedUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IntCleanedUp;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_m_IntCleanedUp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IntCleanedUp = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_connect_in_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connect_in_progress;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_connect_in_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connect_in_progress;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_connect_in_progress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connect_in_progress = value;
}
constexpr int32_t& System::Net::Sockets::Socket::__cordl_internal_get__cordl_ID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr int32_t const& System::Net::Sockets::Socket::__cordl_internal_get__cordl_ID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set__cordl_ID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_ID = value;
}
inline void System::Net::Sockets::Socket::setStaticF_AcceptCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "AcceptCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_AcceptCompletedHandler()  {
return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "AcceptCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "ReceiveCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_ReceiveCompletedHandler()  {
return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "ReceiveCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "SendCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_SendCompletedHandler()  {
return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "SendCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_rentedSocketSentinel(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*  value)  {
::cordl_internals::setStaticField<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*, "s_rentedSocketSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>(value));
}
inline ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* System::Net::Sockets::Socket::getStaticF_s_rentedSocketSentinel()  {
return ::cordl_internals::getStaticField<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*, "s_rentedSocketSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_rentedInt32Sentinel(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*  value)  {
::cordl_internals::setStaticField<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*, "s_rentedInt32Sentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*>(value));
}
inline ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* System::Net::Sockets::Socket::getStaticF_s_rentedInt32Sentinel()  {
return ::cordl_internals::getStaticField<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*, "s_rentedInt32Sentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_zeroTask(::System::Threading::Tasks::Task_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::getStaticF_s_zeroTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_InternalSyncObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::Sockets::Socket::getStaticF_s_InternalSyncObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_SupportsIPv4(bool  value)  {
::cordl_internals::setStaticField<bool, "s_SupportsIPv4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_SupportsIPv4()  {
return ::cordl_internals::getStaticField<bool, "s_SupportsIPv4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_SupportsIPv6(bool  value)  {
::cordl_internals::setStaticField<bool, "s_SupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_SupportsIPv6()  {
return ::cordl_internals::getStaticField<bool, "s_SupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_OSSupportsIPv6(bool  value)  {
::cordl_internals::setStaticField<bool, "s_OSSupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_OSSupportsIPv6()  {
return ::cordl_internals::getStaticField<bool, "s_OSSupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_Initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_Initialized()  {
return ::cordl_internals::getStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_LoggingEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "s_LoggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_LoggingEnabled()  {
return ::cordl_internals::getStaticField<bool, "s_LoggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_PerfCountersEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "s_PerfCountersEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_PerfCountersEnabled()  {
return ::cordl_internals::getStaticField<bool, "s_PerfCountersEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_AcceptAsyncCallback(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "AcceptAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_AcceptAsyncCallback()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "AcceptAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginAcceptCallback(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginAcceptCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginAcceptCallback()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginAcceptCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginAcceptReceiveCallback(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginAcceptReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginAcceptReceiveCallback()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginAcceptReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_ConnectAsyncCallback(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "ConnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ConnectAsyncCallback()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ConnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginConnectCallback(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginConnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginConnectCallback()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginConnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_DisconnectAsyncCallback(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "DisconnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_DisconnectAsyncCallback()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "DisconnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginDisconnectCallback(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginDisconnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginDisconnectCallback()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginDisconnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveAsyncCallback(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "ReceiveAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ReceiveAsyncCallback()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ReceiveAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveCallback(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveCallback()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveGenericCallback(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveGenericCallback()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveFromAsyncCallback(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "ReceiveFromAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ReceiveFromAsyncCallback()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ReceiveFromAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveFromCallback(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveFromCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveFromCallback()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveFromCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendAsyncCallback(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "SendAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_SendAsyncCallback()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "SendAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginSendGenericCallback(::System::IOAsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginSendGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginSendGenericCallback()  {
return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginSendGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendToAsyncCallback(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "SendToAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_SendToAsyncCallback()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "SendToAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::Socket::ReceiveAsync(::System::Memory_1<uint8_t>  buffer, ::System::Net::Sockets::SocketFlags  socketFlags, bool  fromNetworkStream, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(this, ___internal_method, buffer, socketFlags, fromNetworkStream, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::ReceiveAsyncApm(::System::Memory_1<uint8_t>  buffer, ::System::Net::Sockets::SocketFlags  socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveAsyncApm",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, socketFlags);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Sockets::Socket::SendAsyncForNetworkStream(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Net::Sockets::SocketFlags  socketFlags, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendAsyncForNetworkStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, buffer, socketFlags, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::SendAsyncApm(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Net::Sockets::SocketFlags  socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendAsyncApm",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, socketFlags);
}
inline void System::Net::Sockets::Socket::CompleteAccept(::System::Net::Sockets::Socket*  s, ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*  saea)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "CompleteAccept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s, saea);
}
inline void System::Net::Sockets::Socket::CompleteSendReceive(::System::Net::Sockets::Socket*  s, ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*  saea, bool  isReceive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "CompleteSendReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s, saea, isReceive);
}
/// @param wrapExceptionsInIOExceptions: bool (default: false)
inline ::System::Exception* System::Net::Sockets::Socket::GetException(::System::Net::Sockets::SocketError  error, bool  wrapExceptionsInIOExceptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "GetException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, error, wrapExceptionsInIOExceptions);
}
inline void System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*  saea, bool  isReceive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReturnSocketAsyncEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saea, isReceive);
}
inline void System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*  saea)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReturnSocketAsyncEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saea);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::New_ctor(::System::Net::Sockets::AddressFamily  addressFamily, ::System::Net::Sockets::SocketType  socketType, ::System::Net::Sockets::ProtocolType  protocolType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket*>(addressFamily, socketType, protocolType));
}
inline void System::Net::Sockets::Socket::_ctor(::System::Net::Sockets::AddressFamily  addressFamily, ::System::Net::Sockets::SocketType  socketType, ::System::Net::Sockets::ProtocolType  protocolType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, addressFamily, socketType, protocolType);
}
inline bool System::Net::Sockets::Socket::get_OSSupportsIPv4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_OSSupportsIPv4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::get_OSSupportsIPv6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_OSSupportsIPv6",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::Net::Sockets::Socket::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Handle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::AddressFamily System::Net::Sockets::Socket::get_AddressFamily()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_AddressFamily",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketType System::Net::Sockets::Socket::get_SocketType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_SocketType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketType, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::ProtocolType System::Net::Sockets::Socket::get_ProtocolType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_ProtocolType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::ProtocolType, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_ExclusiveAddressUse(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_ExclusiveAddressUse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_ReceiveBufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_ReceiveBufferSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_SendBufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_SendBufferSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_ReceiveTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_ReceiveTimeout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_SendTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_SendTimeout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int16_t System::Net::Sockets::Socket::get_Ttl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Ttl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_Ttl(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_Ttl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_DontFragment(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_DontFragment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_DualMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_DualMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_DualMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_DualMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_IsDualMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_IsDualMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::Sockets::Socket::CanTryAddressFamily(::System::Net::Sockets::AddressFamily  family)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "CanTryAddressFamily",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, family);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*  buffers, ::System::Net::Sockets::SocketFlags  socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffers, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Send(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Receive(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*  buffers, ::System::Net::Sockets::SocketFlags  socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffers, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::IOControl(::System::Net::Sockets::IOControlCode  ioControlCode, ::ArrayW<uint8_t,::Array<uint8_t>*>  optionInValue, ::ArrayW<uint8_t,::Array<uint8_t>*>  optionOutValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IOControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::IOControlCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ioControlCode, optionInValue, optionOutValue);
}
inline void System::Net::Sockets::Socket::SetIPProtectionLevel(::System::Net::Sockets::IPProtectionLevel  level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetIPProtectionLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::IPProtectionLevel>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginSend(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginSend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndSend(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndSend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginReceive(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndReceive(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::Object* System::Net::Sockets::Socket::get_InternalSyncObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_InternalSyncObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::get_CleanedUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_CleanedUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::InitializeSockets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "InitializeSockets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Net::Sockets::Socket::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::InternalShutdown(::System::Net::Sockets::SocketShutdown  how)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "InternalShutdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, how);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel  optionLevel, ::System::Net::Sockets::SocketOptionName  optionName, int32_t  optionValue, bool  silent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionLevel, optionName, optionValue, silent);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::New_ctor(::System::Net::Sockets::AddressFamily  family, ::System::Net::Sockets::SocketType  type, ::System::Net::Sockets::ProtocolType  proto, ::System::Net::Sockets::SafeSocketHandle*  safe_handle)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket*>(family, type, proto, safe_handle));
}
inline void System::Net::Sockets::Socket::_ctor(::System::Net::Sockets::AddressFamily  family, ::System::Net::Sockets::SocketType  type, ::System::Net::Sockets::ProtocolType  proto, ::System::Net::Sockets::SafeSocketHandle*  safe_handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, family, type, proto, safe_handle);
}
inline void System::Net::Sockets::Socket::SocketDefaults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SocketDefaults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IntPtr System::Net::Sockets::Socket::Socket_icall(::System::Net::Sockets::AddressFamily  family, ::System::Net::Sockets::SocketType  type, ::System::Net::Sockets::ProtocolType  proto, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Socket_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, family, type, proto, error);
}
inline int32_t System::Net::Sockets::Socket::get_Available()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Available",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Net::Sockets::Socket::Available_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Available_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, error);
}
inline int32_t System::Net::Sockets::Socket::Available_icall(::System::IntPtr  socket, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Available_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, socket, error);
}
inline void System::Net::Sockets::Socket::set_EnableBroadcast(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_EnableBroadcast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_IsBound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_IsBound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::EndPoint* System::Net::Sockets::Socket::get_LocalEndPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_LocalEndPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*, false>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::LocalEndPoint_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, int32_t  family, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "LocalEndPoint_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*, false>(nullptr, ___internal_method, safeHandle, family, error);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::LocalEndPoint_icall(::System::IntPtr  socket, int32_t  family, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "LocalEndPoint_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*, false>(nullptr, ___internal_method, socket, family, error);
}
inline bool System::Net::Sockets::Socket::get_Blocking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Blocking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_Blocking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_Blocking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::Blocking_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, bool  block, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Blocking_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, block, error);
}
inline void System::Net::Sockets::Socket::Blocking_icall(::System::IntPtr  socket, bool  block, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Blocking_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, block, error);
}
inline bool System::Net::Sockets::Socket::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_Connected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_NoDelay(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "set_NoDelay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::EndPoint* System::Net::Sockets::Socket::get_RemoteEndPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_RemoteEndPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*, false>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::RemoteEndPoint_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, int32_t  family, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "RemoteEndPoint_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*, false>(nullptr, ___internal_method, safeHandle, family, error);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::RemoteEndPoint_icall(::System::IntPtr  socket, int32_t  family, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "RemoteEndPoint_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*, false>(nullptr, ___internal_method, socket, family, error);
}
inline bool System::Net::Sockets::Socket::Poll(int32_t  microSeconds, ::System::Net::Sockets::SelectMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Poll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, microSeconds, mode);
}
inline bool System::Net::Sockets::Socket::Poll_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::System::Net::Sockets::SelectMode  mode, int32_t  timeout, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Poll_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, safeHandle, mode, timeout, error);
}
inline bool System::Net::Sockets::Socket::Poll_icall(::System::IntPtr  socket, ::System::Net::Sockets::SelectMode  mode, int32_t  timeout, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Poll_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, socket, mode, timeout, error);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::Accept()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Accept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Accept(::System::Net::Sockets::Socket*  acceptSocket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Accept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acceptSocket);
}
inline bool System::Net::Sockets::Socket::AcceptAsync(::System::Net::Sockets::SocketAsyncEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "AcceptAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginAccept(::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginAccept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::EndAccept(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndAccept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method, asyncResult);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::EndAccept(ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  buffer, ByRef<int32_t>  bytesTransferred, ::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndAccept",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method, buffer, bytesTransferred, asyncResult);
}
inline ::System::Net::Sockets::SafeSocketHandle* System::Net::Sockets::Socket::Accept_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Accept_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SafeSocketHandle*, false>(nullptr, ___internal_method, safeHandle, error, blocking);
}
inline ::System::IntPtr System::Net::Sockets::Socket::Accept_icall(::System::IntPtr  sock, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Accept_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, sock, error, blocking);
}
inline void System::Net::Sockets::Socket::Bind(::System::Net::EndPoint*  localEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Bind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localEP);
}
inline void System::Net::Sockets::Socket::Bind_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::System::Net::SocketAddress*  sa, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Bind_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, sa, error);
}
inline void System::Net::Sockets::Socket::Bind_icall(::System::IntPtr  sock, ::System::Net::SocketAddress*  sa, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Bind_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, sa, error);
}
inline void System::Net::Sockets::Socket::Listen(int32_t  backlog)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Listen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, backlog);
}
inline void System::Net::Sockets::Socket::Listen_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, int32_t  backlog, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Listen_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, backlog, error);
}
inline void System::Net::Sockets::Socket::Listen_icall(::System::IntPtr  sock, int32_t  backlog, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Listen_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, backlog, error);
}
inline void System::Net::Sockets::Socket::Connect(::System::Net::IPAddress*  address, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address, port);
}
inline void System::Net::Sockets::Socket::Connect(::System::Net::EndPoint*  remoteEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEP);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginConnect(::StringW  host, int32_t  port, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, host, port, callback, state);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginConnect(::System::Net::EndPoint*  remoteEP, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, remoteEP, callback, state);
}
inline bool System::Net::Sockets::Socket::BeginMConnect(::System::Net::Sockets::SocketAsyncResult*  sockares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginMConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sockares);
}
inline bool System::Net::Sockets::Socket::BeginSConnect(::System::Net::Sockets::SocketAsyncResult*  sockares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginSConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sockares);
}
inline void System::Net::Sockets::Socket::EndConnect(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndConnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline void System::Net::Sockets::Socket::Connect_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::System::Net::SocketAddress*  sa, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Connect_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, sa, error, blocking);
}
inline void System::Net::Sockets::Socket::Connect_icall(::System::IntPtr  sock, ::System::Net::SocketAddress*  sa, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Connect_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, sa, error, blocking);
}
inline void System::Net::Sockets::Socket::Disconnect(bool  reuseSocket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Disconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reuseSocket);
}
inline void System::Net::Sockets::Socket::EndDisconnect(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndDisconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline void System::Net::Sockets::Socket::Disconnect_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, bool  reuse, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Disconnect_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, reuse, error);
}
inline void System::Net::Sockets::Socket::Disconnect_icall(::System::IntPtr  sock, bool  reuse, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Disconnect_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, reuse, error);
}
inline int32_t System::Net::Sockets::Socket::Receive(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Memory_1<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*  buffers, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffers, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Span_1<uint8_t>  buffer, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::ReadOnlySpan_1<uint8_t>  buffer, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, socketFlags, errorCode);
}
inline bool System::Net::Sockets::Socket::ReceiveAsync(::System::Net::Sockets::SocketAsyncEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginReceive(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndReceive(::System::IAsyncResult*  asyncResult, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndReceive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>  bufarray, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_array_icall(::System::IntPtr  sock, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>  bufarray, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive_array_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::cordl_internals::Ptr<uint8_t>  buffer, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_icall(::System::IntPtr  sock, ::cordl_internals::Ptr<uint8_t>  buffer, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Receive_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::EndPoint*>  remoteEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::EndPoint*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::EndPoint*>  remoteEP, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::EndPoint*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, errorCode);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::System::Memory_1<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::EndPoint*>  remoteEP, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::EndPoint*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, errorCode);
}
inline int32_t System::Net::Sockets::Socket::EndReceiveFrom_internal(::System::Net::Sockets::SocketAsyncResult*  sockares, ::System::Net::Sockets::SocketAsyncEventArgs*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndReceiveFrom_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sockares, ares);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::cordl_internals::Ptr<uint8_t>  buffer, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<::System::Net::SocketAddress*>  sockaddr, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::SocketAddress*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, sockaddr, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom_icall(::System::IntPtr  sock, ::cordl_internals::Ptr<uint8_t>  buffer, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<::System::Net::SocketAddress*>  sockaddr, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ReceiveFrom_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::SocketAddress*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, sockaddr, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*  buffers, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffers, socketFlags, errorCode);
}
inline bool System::Net::Sockets::Socket::SendAsync(::System::Net::Sockets::SocketAsyncEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginSend(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ByRef<::System::Net::Sockets::SocketError>  errorCode, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginSend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode, callback, state);
}
inline void System::Net::Sockets::Socket::BeginSendCallback(::System::Net::Sockets::SocketAsyncResult*  sockares, int32_t  sent_so_far)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "BeginSendCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sockares, sent_so_far);
}
inline int32_t System::Net::Sockets::Socket::EndSend(::System::IAsyncResult*  asyncResult, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndSend",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>  bufarray, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_array_icall(::System::IntPtr  sock, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>  bufarray, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send_array_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::cordl_internals::Ptr<uint8_t>  buffer, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_icall(::System::IntPtr  sock, ::cordl_internals::Ptr<uint8_t>  buffer, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Send_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::SendTo(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::Net::Sockets::SocketFlags  socketFlags, ::System::Net::EndPoint*  remoteEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
inline int32_t System::Net::Sockets::Socket::EndSendTo(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "EndSendTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline int32_t System::Net::Sockets::Socket::SendTo_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::cordl_internals::Ptr<uint8_t>  buffer, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ::System::Net::SocketAddress*  sa, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendTo_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, sa, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::SendTo_icall(::System::IntPtr  sock, ::cordl_internals::Ptr<uint8_t>  buffer, int32_t  count, ::System::Net::Sockets::SocketFlags  flags, ::System::Net::SocketAddress*  sa, ByRef<int32_t>  error, bool  blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SendTo_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, sa, error, blocking);
}
inline ::System::Object* System::Net::Sockets::Socket::GetSocketOption(::System::Net::Sockets::SocketOptionLevel  optionLevel, ::System::Net::Sockets::SocketOptionName  optionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "GetSocketOption",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, optionLevel, optionName);
}
inline void System::Net::Sockets::Socket::GetSocketOption_obj_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::System::Net::Sockets::SocketOptionLevel  level, ::System::Net::Sockets::SocketOptionName  name, ByRef<::System::Object*>  obj_val, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "GetSocketOption_obj_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, level, name, obj_val, error);
}
inline void System::Net::Sockets::Socket::GetSocketOption_obj_icall(::System::IntPtr  socket, ::System::Net::Sockets::SocketOptionLevel  level, ::System::Net::Sockets::SocketOptionName  name, ByRef<::System::Object*>  obj_val, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "GetSocketOption_obj_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, level, name, obj_val, error);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel  optionLevel, ::System::Net::Sockets::SocketOptionName  optionName, bool  optionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionLevel, optionName, optionValue);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel  optionLevel, ::System::Net::Sockets::SocketOptionName  optionName, int32_t  optionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionLevel, optionName, optionValue);
}
inline void System::Net::Sockets::Socket::SetSocketOption_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::System::Net::Sockets::SocketOptionLevel  level, ::System::Net::Sockets::SocketOptionName  name, ::System::Object*  obj_val, ::ArrayW<uint8_t,::Array<uint8_t>*>  byte_val, int32_t  int_val, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, level, name, obj_val, byte_val, int_val, error);
}
inline void System::Net::Sockets::Socket::SetSocketOption_icall(::System::IntPtr  socket, ::System::Net::Sockets::SocketOptionLevel  level, ::System::Net::Sockets::SocketOptionName  name, ::System::Object*  obj_val, ::ArrayW<uint8_t,::Array<uint8_t>*>  byte_val, int32_t  int_val, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SetSocketOption_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, level, name, obj_val, byte_val, int_val, error);
}
inline int32_t System::Net::Sockets::Socket::IOControl(int32_t  ioControlCode, ::ArrayW<uint8_t,::Array<uint8_t>*>  optionInValue, ::ArrayW<uint8_t,::Array<uint8_t>*>  optionOutValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IOControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ioControlCode, optionInValue, optionOutValue);
}
inline int32_t System::Net::Sockets::Socket::IOControl_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, int32_t  ioctl_code, ::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IOControl_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, ioctl_code, input, output, error);
}
inline int32_t System::Net::Sockets::Socket::IOControl_icall(::System::IntPtr  sock, int32_t  ioctl_code, ::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IOControl_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, ioctl_code, input, output, error);
}
inline void System::Net::Sockets::Socket::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Close(int32_t  timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeout);
}
inline void System::Net::Sockets::Socket::Close_icall(::System::IntPtr  socket, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Close_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, error);
}
inline void System::Net::Sockets::Socket::Shutdown(::System::Net::Sockets::SocketShutdown  how)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Shutdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, how);
}
inline void System::Net::Sockets::Socket::Shutdown_internal(::System::Net::Sockets::SafeSocketHandle*  safeHandle, ::System::Net::Sockets::SocketShutdown  how, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Shutdown_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, how, error);
}
inline void System::Net::Sockets::Socket::Shutdown_icall(::System::IntPtr  socket, ::System::Net::Sockets::SocketShutdown  how, ByRef<int32_t>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Shutdown_icall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, how, error);
}
inline void System::Net::Sockets::Socket::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::Sockets::Socket::Linger(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "Linger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void System::Net::Sockets::Socket::ThrowIfDisposedAndClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ThrowIfDisposedAndClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::ThrowIfBufferNull(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ThrowIfBufferNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void System::Net::Sockets::Socket::ThrowIfBufferOutOfRange(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ThrowIfBufferOutOfRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::Sockets::Socket::ThrowIfUdp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ThrowIfUdp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::Socket::ValidateEndIAsyncResult(::System::IAsyncResult*  ares, ::StringW  methodName, ::StringW  argName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "ValidateEndIAsyncResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketAsyncResult*, false>(this, ___internal_method, ares, methodName, argName);
}
inline void System::Net::Sockets::Socket::QueueIOSelectorJob(::System::Threading::SemaphoreSlim*  sem, ::System::IntPtr  handle, ::System::IOSelectorJob*  job)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "QueueIOSelectorJob",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SemaphoreSlim*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOSelectorJob*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sem, handle, job);
}
inline void System::Net::Sockets::Socket::InitSocketAsyncEventArgs(::System::Net::Sockets::SocketAsyncEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  state, ::System::Net::Sockets::SocketOperation  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "InitSocketAsyncEventArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, callback, state, operation);
}
inline ::System::Net::Sockets::SocketAsyncOperation System::Net::Sockets::Socket::SocketOperationToSocketAsyncOperation(::System::Net::Sockets::SocketOperation  op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "SocketOperationToSocketAsyncOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketAsyncOperation, false>(this, ___internal_method, op);
}
inline ::System::Net::IPEndPoint* System::Net::Sockets::Socket::RemapIPEndPoint(::System::Net::IPEndPoint*  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "RemapIPEndPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method, input);
}
inline void System::Net::Sockets::Socket::cancel_blocking_socket_operation(::System::Threading::Thread*  thread)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "cancel_blocking_socket_operation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread);
}
inline int32_t System::Net::Sockets::Socket::get_FamilyHint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "get_FamilyHint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::IsProtocolSupported_internal(::System::Net::NetworkInformation::NetworkInterfaceComponent  networkInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IsProtocolSupported_internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceComponent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, networkInterface);
}
inline bool System::Net::Sockets::Socket::IsProtocolSupported(::System::Net::NetworkInformation::NetworkInterfaceComponent  networkInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                        "IsProtocolSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceComponent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, networkInterface);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket::Socket()   {
}
