#pragma once
#include "System/Net/zzzz__WebConnectionStream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::System::Net::__WebRequestStream___FinishWriting_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___FinishWriting_d__31::*)()>(
    &::System::Net::__WebRequestStream___FinishWriting_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x29e51f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___FinishWriting_d__31>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequestStream___FinishWriting_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___FinishWriting_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebRequestStream___FinishWriting_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e54d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___FinishWriting_d__31>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebRequestStream___FinishWriting_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebRequestStream___FinishWriting_d__31::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___FinishWriting_d__31>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebRequestStream___FinishWriting_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___FinishWriting_d__31>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebRequestStream___FinishWriting_d__31::__WebRequestStream___FinishWriting_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequestStream___FinishWriting_d__31::__WebRequestStream___FinishWriting_d__31() {}
//  Writing Method size for method: ::System::Net::__WebRequestStream___WriteAsyncInner_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___WriteAsyncInner_d__33::*)()>(
    &::System::Net::__WebRequestStream___WriteAsyncInner_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x29e54dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteAsyncInner_d__33>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequestStream___WriteAsyncInner_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___WriteAsyncInner_d__33::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebRequestStream___WriteAsyncInner_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e5988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteAsyncInner_d__33>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebRequestStream___WriteAsyncInner_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebRequestStream___WriteAsyncInner_d__33::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteAsyncInner_d__33>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebRequestStream___WriteAsyncInner_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteAsyncInner_d__33>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "offset", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "completion", ty: "::System::Net::WebCompletionSource*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebRequestStream___WriteAsyncInner_d__33::__WebRequestStream___WriteAsyncInner_d__33(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer,
    int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebCompletionSource* completion,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->offset = offset;
  this->size = size;
  this->cancellationToken = cancellationToken;
  this->completion = completion;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequestStream___WriteAsyncInner_d__33::__WebRequestStream___WriteAsyncInner_d__33() {}
//  Writing Method size for method: ::System::Net::__WebRequestStream___ProcessWrite_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___ProcessWrite_d__34::*)()>(
    &::System::Net::__WebRequestStream___ProcessWrite_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x29e5994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___ProcessWrite_d__34>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequestStream___ProcessWrite_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___ProcessWrite_d__34::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebRequestStream___ProcessWrite_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e5ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___ProcessWrite_d__34>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebRequestStream___ProcessWrite_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebRequestStream___ProcessWrite_d__34::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___ProcessWrite_d__34>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebRequestStream___ProcessWrite_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___ProcessWrite_d__34>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "offset", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}")
// }]
constexpr ::System::Net::__WebRequestStream___ProcessWrite_d__34::__WebRequestStream___ProcessWrite_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    int32_t size, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->size = size;
  this->buffer = buffer;
  this->offset = offset;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequestStream___ProcessWrite_d__34::__WebRequestStream___ProcessWrite_d__34() {}
//  Writing Method size for method: ::System::Net::__WebRequestStream___Initialize_d__36.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___Initialize_d__36::*)()>(
    &::System::Net::__WebRequestStream___Initialize_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x29e5ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___Initialize_d__36>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequestStream___Initialize_d__36.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___Initialize_d__36::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebRequestStream___Initialize_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e61dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___Initialize_d__36>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebRequestStream___Initialize_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebRequestStream___Initialize_d__36::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___Initialize_d__36>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebRequestStream___Initialize_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___Initialize_d__36>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebRequestStream___Initialize_d__36::__WebRequestStream___Initialize_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                                      ::System::Net::WebRequestStream* __4__this,
                                                                                                      ::System::Threading::CancellationToken cancellationToken,
                                                                                                      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequestStream___Initialize_d__36::__WebRequestStream___Initialize_d__36() {}
//  Writing Method size for method: ::System::Net::__WebRequestStream___SetHeadersAsync_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___SetHeadersAsync_d__37::*)()>(
    &::System::Net::__WebRequestStream___SetHeadersAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x29e61e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___SetHeadersAsync_d__37>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequestStream___SetHeadersAsync_d__37.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___SetHeadersAsync_d__37::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebRequestStream___SetHeadersAsync_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e6884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___SetHeadersAsync_d__37>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebRequestStream___SetHeadersAsync_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebRequestStream___SetHeadersAsync_d__37::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___SetHeadersAsync_d__37>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebRequestStream___SetHeadersAsync_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___SetHeadersAsync_d__37>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "setInternalLength", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::__WebRequestStream___SetHeadersAsync_d__37::__WebRequestStream___SetHeadersAsync_d__37(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    bool setInternalLength, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->setInternalLength = setInternalLength;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequestStream___SetHeadersAsync_d__37::__WebRequestStream___SetHeadersAsync_d__37() {}
//  Writing Method size for method: ::System::Net::__WebRequestStream___WriteRequestAsync_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___WriteRequestAsync_d__38::*)()>(
    &::System::Net::__WebRequestStream___WriteRequestAsync_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x29e6890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteRequestAsync_d__38>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequestStream___WriteRequestAsync_d__38.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___WriteRequestAsync_d__38::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebRequestStream___WriteRequestAsync_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e6d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteRequestAsync_d__38>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebRequestStream___WriteRequestAsync_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebRequestStream___WriteRequestAsync_d__38::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteRequestAsync_d__38>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebRequestStream___WriteRequestAsync_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteRequestAsync_d__38>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty:
// "::System::Net::BufferOffsetSize*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebRequestStream___WriteRequestAsync_d__38::__WebRequestStream___WriteRequestAsync_d__38(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Net::BufferOffsetSize* _buffer_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_buffer_5__2 = _buffer_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequestStream___WriteRequestAsync_d__38::__WebRequestStream___WriteRequestAsync_d__38() {}
//  Writing Method size for method: ::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::*)()>(
    &::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x29e6d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e6f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::__WebRequestStream___WriteChunkTrailer_inner_d__39(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequestStream___WriteChunkTrailer_inner_d__39::__WebRequestStream___WriteChunkTrailer_inner_d__39() {}
//  Writing Method size for method: ::System::Net::__WebRequestStream___WriteChunkTrailer_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___WriteChunkTrailer_d__40::*)()>(
    &::System::Net::__WebRequestStream___WriteChunkTrailer_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x29e6f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteChunkTrailer_d__40>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__WebRequestStream___WriteChunkTrailer_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__WebRequestStream___WriteChunkTrailer_d__40::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__WebRequestStream___WriteChunkTrailer_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29e7654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteChunkTrailer_d__40>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__WebRequestStream___WriteChunkTrailer_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__WebRequestStream___WriteChunkTrailer_d__40::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteChunkTrailer_d__40>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__WebRequestStream___WriteChunkTrailer_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebRequestStream___WriteChunkTrailer_d__40>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_timeoutTask_5__3",
// ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__WebRequestStream___WriteChunkTrailer_d__40::__WebRequestStream___WriteChunkTrailer_d__40(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream* __4__this, ::System::Threading::CancellationTokenSource* _cts_5__2,
    ::System::Threading::Tasks::Task* _timeoutTask_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cts_5__2 = _cts_5__2;
  this->_timeoutTask_5__3 = _timeoutTask_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Net::__WebRequestStream___WriteChunkTrailer_d__40::__WebRequestStream___WriteChunkTrailer_d__40() {}
//  Writing Method size for method: ::System::Net::WebRequestStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestStream::*)(
    ::System::Net::WebConnection*, ::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::WebConnectionTunnel*)>(&::System::Net::WebRequestStream::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x29df4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_InnerStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_InnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e443c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_InnerStream",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_KeepAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e4444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_KeepAlive",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e444c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29e4454;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_HasWriteBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_HasWriteBuffer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29e445c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_HasWriteBuffer",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_WriteBufferLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_WriteBufferLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x29e4490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_WriteBufferLength",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.GetWriteBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::BufferOffsetSize* (::System::Net::WebRequestStream::*)()>(
    &::System::Net::WebRequestStream::GetWriteBuffer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29e44d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "GetWriteBuffer",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.FinishWriting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::FinishWriting)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29e45b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "FinishWriting", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebRequestStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteAsync)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x29e4688;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteAsyncInner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebRequestStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::WebCompletionSource*, ::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::WriteAsyncInner)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x29e48e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteAsyncInner", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebCompletionSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.ProcessWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::WebRequestStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::ProcessWrite)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29e49e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "ProcessWrite", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.CheckWriteOverflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestStream::*)(int64_t, int64_t, int64_t)>(
    &::System::Net::WebRequestStream::CheckWriteOverflow)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29e4ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "CheckWriteOverflow", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::Initialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29e3360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.SetHeadersAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(bool, ::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::SetHeadersAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x29e4b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "SetHeadersAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::WriteRequestAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29e4c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteRequestAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteChunkTrailer_inner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::WebRequestStream::WriteChunkTrailer_inner)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29e4d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteChunkTrailer_inner", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteChunkTrailer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebRequestStream::*)()>(
    &::System::Net::WebRequestStream::WriteChunkTrailer)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x29e4e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteChunkTrailer",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.KillBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::KillBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d1800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "KillBuffer",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::WebRequestStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::ReadAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29e4eec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.TryReadFromBufferedContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ByRef<int32_t>)>(
    &::System::Net::WebRequestStream::TryReadFromBufferedContent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29e4f9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.Close_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestStream::*)(ByRef<bool>)>(&::System::Net::WebRequestStream::Close_internal)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x29e4fdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), 43));
    return ___internal_method;
  }
};
constexpr ::System::IO::MemoryStream*& System::Net::WebRequestStream::__get_writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& System::Net::WebRequestStream::__get_writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeBuffer;
}
constexpr void System::Net::WebRequestStream::__set_writeBuffer(::System::IO::MemoryStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::WebRequestStream::__get_requestWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestWritten;
}
constexpr bool const& System::Net::WebRequestStream::__get_requestWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestWritten;
}
constexpr void System::Net::WebRequestStream::__set_requestWritten(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestWritten = value;
}
constexpr bool& System::Net::WebRequestStream::__get_allowBuffering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowBuffering;
}
constexpr bool const& System::Net::WebRequestStream::__get_allowBuffering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowBuffering;
}
constexpr void System::Net::WebRequestStream::__set_allowBuffering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowBuffering = value;
}
constexpr bool& System::Net::WebRequestStream::__get_sendChunked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendChunked;
}
constexpr bool const& System::Net::WebRequestStream::__get_sendChunked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendChunked;
}
constexpr void System::Net::WebRequestStream::__set_sendChunked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendChunked = value;
}
constexpr ::System::Net::WebCompletionSource*& System::Net::WebRequestStream::__get_pendingWrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingWrite;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource*> const& System::Net::WebRequestStream::__get_pendingWrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pendingWrite;
}
constexpr void System::Net::WebRequestStream::__set_pendingWrite(::System::Net::WebCompletionSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pendingWrite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::WebRequestStream::__get_totalWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalWritten;
}
constexpr int64_t const& System::Net::WebRequestStream::__get_totalWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalWritten;
}
constexpr void System::Net::WebRequestStream::__set_totalWritten(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalWritten = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::WebRequestStream::__get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::WebRequestStream::__get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::WebRequestStream::__set_headers(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::WebRequestStream::__get_headersSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headersSent;
}
constexpr bool const& System::Net::WebRequestStream::__get_headersSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headersSent;
}
constexpr void System::Net::WebRequestStream::__set_headersSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headersSent = value;
}
constexpr int32_t& System::Net::WebRequestStream::__get_completeRequestWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completeRequestWritten;
}
constexpr int32_t const& System::Net::WebRequestStream::__get_completeRequestWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completeRequestWritten;
}
constexpr void System::Net::WebRequestStream::__set_completeRequestWritten(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completeRequestWritten = value;
}
constexpr int32_t& System::Net::WebRequestStream::__get_chunkTrailerWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkTrailerWritten;
}
constexpr int32_t const& System::Net::WebRequestStream::__get_chunkTrailerWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkTrailerWritten;
}
constexpr void System::Net::WebRequestStream::__set_chunkTrailerWritten(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkTrailerWritten = value;
}
constexpr ::System::IO::Stream*& System::Net::WebRequestStream::__get__InnerStream_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::WebRequestStream::__get__InnerStream_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream_k__BackingField;
}
constexpr void System::Net::WebRequestStream::__set__InnerStream_k__BackingField(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InnerStream_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::WebRequestStream::__get__KeepAlive_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeepAlive_k__BackingField;
}
constexpr bool const& System::Net::WebRequestStream::__get__KeepAlive_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeepAlive_k__BackingField;
}
constexpr void System::Net::WebRequestStream::__set__KeepAlive_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____KeepAlive_k__BackingField = value;
}
inline void System::Net::WebRequestStream::setStaticF_crlf(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "crlf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Net::WebRequestStream::getStaticF_crlf() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "crlf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get>();
}
inline ::System::Net::WebRequestStream* System::Net::WebRequestStream::New_ctor(::System::Net::WebConnection* connection, ::System::Net::WebOperation* operation, ::System::IO::Stream* stream,
                                                                                ::System::Net::WebConnectionTunnel* tunnel) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebRequestStream*>(connection, operation, stream, tunnel));
}
inline void System::Net::WebRequestStream::_ctor(::System::Net::WebConnection* connection, ::System::Net::WebOperation* operation, ::System::IO::Stream* stream,
                                                 ::System::Net::WebConnectionTunnel* tunnel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection, operation, stream, tunnel);
}
inline ::System::IO::Stream* System::Net::WebRequestStream::get_InnerStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_InnerStream",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_KeepAlive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_KeepAlive",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_CanRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_CanRead",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_CanWrite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_CanWrite",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::WebRequestStream::get_HasWriteBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_HasWriteBuffer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Net::WebRequestStream::get_WriteBufferLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "get_WriteBufferLength",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Net::BufferOffsetSize* System::Net::WebRequestStream::GetWriteBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "GetWriteBuffer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::BufferOffsetSize*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::FinishWriting(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "FinishWriting", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteAsyncInner(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                                        ::System::Net::WebCompletionSource* completion, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteAsyncInner", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebCompletionSource*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, size, completion, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::ProcessWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "ProcessWrite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline void System::Net::WebRequestStream::CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "CheckWriteOverflow", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentLength, totalWritten, size);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::Initialize(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::SetHeadersAsync(bool setInternalLength, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "SetHeadersAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, setInternalLength, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteRequestAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteRequestAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteChunkTrailer_inner(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteChunkTrailer_inner", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebRequestStream::WriteChunkTrailer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "WriteChunkTrailer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void System::Net::WebRequestStream::KillBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "KillBuffer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::WebRequestStream::ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "ReadAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline bool System::Net::WebRequestStream::TryReadFromBufferedContent(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ByRef<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "TryReadFromBufferedContent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, buffer, offset, count, result);
}
inline void System::Net::WebRequestStream::Close_internal(ByRef<bool> disposed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream*>::get(), "Close_internal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposed);
}
// Ctor Parameters []
constexpr ::System::Net::WebRequestStream::WebRequestStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
