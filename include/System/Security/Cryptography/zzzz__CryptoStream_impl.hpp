#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_impl.hpp"
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::*)()>(
    &::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x245873c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2458b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_semaphore_5__2", ty: "::System::Threading::SemaphoreSlim*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::__CryptoStream___ReadAsyncInternal_d__37(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Security::Cryptography::CryptoStream* __4__this,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::SemaphoreSlim* _semaphore_5__2,
    ::System::Threading::Tasks::ForceAsyncAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->offset = offset;
  this->count = count;
  this->cancellationToken = cancellationToken;
  this->_semaphore_5__2 = _semaphore_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::__CryptoStream___ReadAsyncInternal_d__37::__CryptoStream___ReadAsyncInternal_d__37() {}
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::*)()>(
    &::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x1100;
  constexpr static std::size_t addrs = 0x2458b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2459cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "useAsync", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bytesToDeliver_5__2", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_currentOutputIndex_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_numWholeBlocksInBytes_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tempInputBuffer_5__5", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::__CryptoStream___ReadAsyncCore_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, int32_t count, int32_t offset, ::System::Security::Cryptography::CryptoStream* __4__this,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool useAsync, ::System::Threading::CancellationToken cancellationToken, int32_t _bytesToDeliver_5__2, int32_t _currentOutputIndex_5__3,
    int32_t _numWholeBlocksInBytes_5__4, ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempInputBuffer_5__5, ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempOutputBuffer_5__6,
    ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<int32_t> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->count = count;
  this->offset = offset;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->useAsync = useAsync;
  this->cancellationToken = cancellationToken;
  this->_bytesToDeliver_5__2 = _bytesToDeliver_5__2;
  this->_currentOutputIndex_5__3 = _currentOutputIndex_5__3;
  this->_numWholeBlocksInBytes_5__4 = _numWholeBlocksInBytes_5__4;
  this->_tempInputBuffer_5__5 = _tempInputBuffer_5__5;
  this->_tempOutputBuffer_5__6 = _tempOutputBuffer_5__6;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::__CryptoStream___ReadAsyncCore_d__42::__CryptoStream___ReadAsyncCore_d__42() {}
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::*)()>(
    &::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2459d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x245a038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "offset", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_semaphore_5__2", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::__CryptoStream___WriteAsyncInternal_d__46(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Security::Cryptography::CryptoStream* __4__this,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::SemaphoreSlim* _semaphore_5__2,
    ::System::Threading::Tasks::ForceAsyncAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->offset = offset;
  this->count = count;
  this->cancellationToken = cancellationToken;
  this->_semaphore_5__2 = _semaphore_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::__CryptoStream___WriteAsyncInternal_d__46::__CryptoStream___WriteAsyncInternal_d__46() {}
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::*)()>(
    &::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::MoveNext)> {
  constexpr static std::size_t size = 0x11cc;
  constexpr static std::size_t addrs = 0x245a044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x245b210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bytesToWrite_5__2", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_currentInputIndex_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numOutputBytes_5__4", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_numWholeBlocksInBytes_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::__CryptoStream___WriteAsyncCore_d__49(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, int32_t count, int32_t offset, ::System::Security::Cryptography::CryptoStream* __4__this,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool useAsync, ::System::Threading::CancellationToken cancellationToken, int32_t _bytesToWrite_5__2, int32_t _currentInputIndex_5__3,
    int32_t _numOutputBytes_5__4, ::System::Runtime::CompilerServices::ValueTaskAwaiter __u__1, int32_t _numWholeBlocksInBytes_5__5,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> _tempOutputBuffer_5__6) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->count = count;
  this->offset = offset;
  this->__4__this = __4__this;
  this->buffer = buffer;
  this->useAsync = useAsync;
  this->cancellationToken = cancellationToken;
  this->_bytesToWrite_5__2 = _bytesToWrite_5__2;
  this->_currentInputIndex_5__3 = _currentInputIndex_5__3;
  this->_numOutputBytes_5__4 = _numOutputBytes_5__4;
  this->__u__1 = __u__1;
  this->_numWholeBlocksInBytes_5__5 = _numWholeBlocksInBytes_5__5;
  this->_tempOutputBuffer_5__6 = _tempOutputBuffer_5__6;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::__CryptoStream___WriteAsyncCore_d__49::__CryptoStream___WriteAsyncCore_d__49() {}
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::__CryptoStream____c::*)()>(
    &::System::Security::Cryptography::__CryptoStream____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245b280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::__CryptoStream____c._get_AsyncActiveSemaphore_b__54_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SemaphoreSlim* (::System::Security::Cryptography::__CryptoStream____c::*)()>(
    &::System::Security::Cryptography::__CryptoStream____c::_get_AsyncActiveSemaphore_b__54_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x245b288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream____c*>::get(),
                                                                               "<get_AsyncActiveSemaphore>b__54_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::__CryptoStream____c::setStaticF___9(::System::Security::Cryptography::__CryptoStream____c* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::__CryptoStream____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream____c*>::get>(
      std::forward<::System::Security::Cryptography::__CryptoStream____c*>(value));
}
inline ::System::Security::Cryptography::__CryptoStream____c* System::Security::Cryptography::__CryptoStream____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::__CryptoStream____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream____c*>::get>();
}
inline void System::Security::Cryptography::__CryptoStream____c::setStaticF___9__54_0(::System::Func_1<::System::Threading::SemaphoreSlim*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__54_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream____c*>::get>(
      std::forward<::System::Func_1<::System::Threading::SemaphoreSlim*>*>(value));
}
inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* System::Security::Cryptography::__CryptoStream____c::getStaticF___9__54_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__54_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream____c*>::get>();
}
inline ::System::Security::Cryptography::__CryptoStream____c* System::Security::Cryptography::__CryptoStream____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::__CryptoStream____c*>());
}
inline void System::Security::Cryptography::__CryptoStream____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::Security::Cryptography::__CryptoStream____c::_get_AsyncActiveSemaphore_b__54_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::__CryptoStream____c*>::get(),
                                                                             "<get_AsyncActiveSemaphore>b__54_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::__CryptoStream____c::__CryptoStream____c() {}
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(
    ::System::IO::Stream*, ::System::Security::Cryptography::ICryptoTransform*, ::System::Security::Cryptography::CryptoStreamMode)>(&::System::Security::Cryptography::CryptoStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24571bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::ICryptoTransform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CryptoStreamMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(
    ::System::IO::Stream*, ::System::Security::Cryptography::ICryptoTransform*, ::System::Security::Cryptography::CryptoStreamMode, bool)>(&::System::Security::Cryptography::CryptoStream::_ctor)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x24571c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::ICryptoTransform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CryptoStreamMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24574d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24574e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24574e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::get_Length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24574f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2457540;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.set_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(int64_t)>(
    &::System::Security::Cryptography::CryptoStream::set_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2457590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_HasFlushedFinalBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24575e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                               "get_HasFlushedFinalBlock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.FlushFinalBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::FlushFinalBlock)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x24575e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                               "FlushFinalBlock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2457818;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.FlushAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Security::Cryptography::CryptoStream::*)(::System::Threading::CancellationToken)>(&::System::Security::Cryptography::CryptoStream::FlushAsync)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x245781c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Security::Cryptography::CryptoStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::System::Security::Cryptography::CryptoStream::Seek)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2457984;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(int64_t)>(
    &::System::Security::Cryptography::CryptoStream::SetLength)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24579d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::System::Security::Cryptography::CryptoStream::ReadAsync)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2457a24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.BeginRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::System::Security::Cryptography::CryptoStream::BeginRead)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2457cd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.EndRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::CryptoStream::*)(::System::IAsyncResult*)>(
    &::System::Security::Cryptography::CryptoStream::EndRead)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2457d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.ReadAsyncInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::System::Security::Cryptography::CryptoStream::ReadAsyncInternal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2457bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "ReadAsyncInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::ReadByte)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2457dd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(uint8_t)>(
    &::System::Security::Cryptography::CryptoStream::WriteByte)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2457e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Security::Cryptography::CryptoStream::Read)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2457ea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.CheckReadArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Security::Cryptography::CryptoStream::CheckReadArguments)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2457a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "CheckReadArguments", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.ReadAsyncCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken, bool)>(
    &::System::Security::Cryptography::CryptoStream::ReadAsyncCore)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2457f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "ReadAsyncCore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.WriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
        &::System::Security::Cryptography::CryptoStream::WriteAsync)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24580ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.BeginWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::System::Security::Cryptography::CryptoStream::BeginWrite)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2458338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.EndWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::System::IAsyncResult*)>(
    &::System::Security::Cryptography::CryptoStream::EndWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24583ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.WriteAsyncInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
        &::System::Security::Cryptography::CryptoStream::WriteAsyncInternal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x245823c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "WriteAsyncInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Security::Cryptography::CryptoStream::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24583f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.CheckWriteArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Security::Cryptography::CryptoStream::CheckWriteArguments)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x24580f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "CheckWriteArguments", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.WriteAsyncCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Security::Cryptography::CryptoStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken, bool)>(
    &::System::Security::Cryptography::CryptoStream::WriteAsyncCore)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2458468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "WriteAsyncCore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)()>(&::System::Security::Cryptography::CryptoStream::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2458584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)(bool)>(
    &::System::Security::Cryptography::CryptoStream::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2458594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.InitializeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::InitializeBuffer)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x245738c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                               "InitializeBuffer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::CryptoStream.get_AsyncActiveSemaphore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SemaphoreSlim* (::System::Security::Cryptography::CryptoStream::*)()>(
    &::System::Security::Cryptography::CryptoStream::get_AsyncActiveSemaphore)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2458644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                               "get_AsyncActiveSemaphore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Security::Cryptography::CryptoStream::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::IO::Stream*& System::Security::Cryptography::CryptoStream::__get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Security::Cryptography::CryptoStream::__get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____stream;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::ICryptoTransform*& System::Security::Cryptography::CryptoStream::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> const& System::Security::Cryptography::CryptoStream::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__transform(::System::Security::Cryptography::ICryptoTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::CryptoStreamMode& System::Security::Cryptography::CryptoStream::__get__transformMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transformMode;
}
constexpr ::System::Security::Cryptography::CryptoStreamMode const& System::Security::Cryptography::CryptoStream::__get__transformMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transformMode;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__transformMode(::System::Security::Cryptography::CryptoStreamMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____transformMode = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Cryptography::CryptoStream::__get__inputBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inputBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Cryptography::CryptoStream::__get__inputBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inputBuffer;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__inputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Cryptography::CryptoStream::__get__inputBufferIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inputBufferIndex;
}
constexpr int32_t const& System::Security::Cryptography::CryptoStream::__get__inputBufferIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inputBufferIndex;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__inputBufferIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____inputBufferIndex = value;
}
constexpr int32_t& System::Security::Cryptography::CryptoStream::__get__inputBlockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inputBlockSize;
}
constexpr int32_t const& System::Security::Cryptography::CryptoStream::__get__inputBlockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inputBlockSize;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__inputBlockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____inputBlockSize = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Cryptography::CryptoStream::__get__outputBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____outputBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Cryptography::CryptoStream::__get__outputBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____outputBuffer;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__outputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Cryptography::CryptoStream::__get__outputBufferIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____outputBufferIndex;
}
constexpr int32_t const& System::Security::Cryptography::CryptoStream::__get__outputBufferIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____outputBufferIndex;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__outputBufferIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____outputBufferIndex = value;
}
constexpr int32_t& System::Security::Cryptography::CryptoStream::__get__outputBlockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____outputBlockSize;
}
constexpr int32_t const& System::Security::Cryptography::CryptoStream::__get__outputBlockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____outputBlockSize;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__outputBlockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____outputBlockSize = value;
}
constexpr bool& System::Security::Cryptography::CryptoStream::__get__canRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____canRead;
}
constexpr bool const& System::Security::Cryptography::CryptoStream::__get__canRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____canRead;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__canRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____canRead = value;
}
constexpr bool& System::Security::Cryptography::CryptoStream::__get__canWrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____canWrite;
}
constexpr bool const& System::Security::Cryptography::CryptoStream::__get__canWrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____canWrite;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__canWrite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____canWrite = value;
}
constexpr bool& System::Security::Cryptography::CryptoStream::__get__finalBlockTransformed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____finalBlockTransformed;
}
constexpr bool const& System::Security::Cryptography::CryptoStream::__get__finalBlockTransformed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____finalBlockTransformed;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__finalBlockTransformed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____finalBlockTransformed = value;
}
constexpr ::System::Threading::SemaphoreSlim*& System::Security::Cryptography::CryptoStream::__get__lazyAsyncActiveSemaphore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lazyAsyncActiveSemaphore;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& System::Security::Cryptography::CryptoStream::__get__lazyAsyncActiveSemaphore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lazyAsyncActiveSemaphore;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__lazyAsyncActiveSemaphore(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lazyAsyncActiveSemaphore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Security::Cryptography::CryptoStream::__get__leaveOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____leaveOpen;
}
constexpr bool const& System::Security::Cryptography::CryptoStream::__get__leaveOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____leaveOpen;
}
constexpr void System::Security::Cryptography::CryptoStream::__set__leaveOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____leaveOpen = value;
}
inline ::System::Security::Cryptography::CryptoStream* System::Security::Cryptography::CryptoStream::New_ctor(::System::IO::Stream* stream,
                                                                                                              ::System::Security::Cryptography::ICryptoTransform* transform,
                                                                                                              ::System::Security::Cryptography::CryptoStreamMode mode) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::CryptoStream*>(stream, transform, mode));
}
inline void System::Security::Cryptography::CryptoStream::_ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::ICryptoTransform* transform,
                                                                ::System::Security::Cryptography::CryptoStreamMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::ICryptoTransform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CryptoStreamMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, transform, mode);
}
inline ::System::Security::Cryptography::CryptoStream* System::Security::Cryptography::CryptoStream::New_ctor(::System::IO::Stream* stream,
                                                                                                              ::System::Security::Cryptography::ICryptoTransform* transform,
                                                                                                              ::System::Security::Cryptography::CryptoStreamMode mode, bool leaveOpen) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::CryptoStream*>(stream, transform, mode, leaveOpen));
}
inline void System::Security::Cryptography::CryptoStream::_ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::ICryptoTransform* transform,
                                                                ::System::Security::Cryptography::CryptoStreamMode mode, bool leaveOpen) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::ICryptoTransform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CryptoStreamMode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, transform, mode, leaveOpen);
}
inline bool System::Security::Cryptography::CryptoStream::get_CanRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "get_CanRead", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CryptoStream::get_CanSeek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "get_CanSeek", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::CryptoStream::get_CanWrite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "get_CanWrite", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::Security::Cryptography::CryptoStream::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::Security::Cryptography::CryptoStream::get_Position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "get_Position", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::set_Position(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "set_Position",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Security::Cryptography::CryptoStream::get_HasFlushedFinalBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "get_HasFlushedFinalBlock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::FlushFinalBlock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "FlushFinalBlock", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "Flush",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Security::Cryptography::CryptoStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "FlushAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline int64_t System::Security::Cryptography::CryptoStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "Seek", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline void System::Security::Cryptography::CryptoStream::SetLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "SetLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Security::Cryptography::CryptoStream::ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                            ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "ReadAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::IAsyncResult* System::Security::Cryptography::CryptoStream::BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback,
                                                                                       ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "BeginRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::Security::Cryptography::CryptoStream::EndRead(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "EndRead", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Security::Cryptography::CryptoStream::ReadAsyncInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "ReadAsyncInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline int32_t System::Security::Cryptography::CryptoStream::ReadByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "ReadByte",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::WriteByte(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "WriteByte", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Security::Cryptography::CryptoStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline void System::Security::Cryptography::CryptoStream::CheckReadArguments(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "CheckReadArguments", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Security::Cryptography::CryptoStream::ReadAsyncCore(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                                ::System::Threading::CancellationToken cancellationToken, bool useAsync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "ReadAsyncCore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count, cancellationToken, useAsync);
}
inline ::System::Threading::Tasks::Task* System::Security::Cryptography::CryptoStream::WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                  ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "WriteAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::IAsyncResult* System::Security::Cryptography::CryptoStream::BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "BeginWrite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::Security::Cryptography::CryptoStream::EndWrite(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "EndWrite", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task* System::Security::Cryptography::CryptoStream::WriteAsyncInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "WriteAsyncInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline void System::Security::Cryptography::CryptoStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline void System::Security::Cryptography::CryptoStream::CheckWriteArguments(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "CheckWriteArguments", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task* System::Security::Cryptography::CryptoStream::WriteAsyncCore(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                      ::System::Threading::CancellationToken cancellationToken, bool useAsync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "WriteAsyncCore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken, useAsync);
}
inline void System::Security::Cryptography::CryptoStream::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::CryptoStream::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::CryptoStream::InitializeBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "InitializeBuffer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::Security::Cryptography::CryptoStream::get_AsyncActiveSemaphore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::CryptoStream*>::get(),
                                                                             "get_AsyncActiveSemaphore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::CryptoStream::CryptoStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
