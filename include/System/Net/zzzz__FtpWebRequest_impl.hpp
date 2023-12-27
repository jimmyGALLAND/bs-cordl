#pragma once
#include "System/Net/zzzz__FtpWebRequest_impl.hpp"
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__FtpWebRequest_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Net/zzzz__FtpWebRequest_def.hpp"
#include "System/Net/zzzz__ContextAwareResult_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Net/zzzz__FtpControlStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__FtpMethodInfo_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__FtpWebRequest__RequestStage::__FtpWebRequest__RequestStage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__FtpWebRequest__RequestStage::__FtpWebRequest__RequestStage() {}
constexpr ::System::Net::__FtpWebRequest__RequestStage System::Net::__FtpWebRequest__RequestStage::CheckForError{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::__FtpWebRequest__RequestStage System::Net::__FtpWebRequest__RequestStage::RequestStarted{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::__FtpWebRequest__RequestStage System::Net::__FtpWebRequest__RequestStage::WriteReady{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::__FtpWebRequest__RequestStage System::Net::__FtpWebRequest__RequestStage::ReadReady{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::__FtpWebRequest__RequestStage System::Net::__FtpWebRequest__RequestStage::ReleaseConnection{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::*)()>(
    &::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x299a83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x299ab48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::FtpWebRequest*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_client_5__2", ty: "::System::Net::Sockets::TcpClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::__FtpWebRequest___CreateConnectionAsync_d__86(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Net::FtpWebRequest* __4__this, ::System::Net::Sockets::TcpClient* _client_5__2,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_client_5__2 = _client_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::Net::__FtpWebRequest___CreateConnectionAsync_d__86::__FtpWebRequest___CreateConnectionAsync_d__86() {}
//  Writing Method size for method: ::System::Net::__FtpWebRequest____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FtpWebRequest____c::*)()>(&::System::Net::__FtpWebRequest____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299abb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__FtpWebRequest____c._get_ClientCertificates_b__114_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (
    ::System::Net::__FtpWebRequest____c::*)()>(&::System::Net::__FtpWebRequest____c::_get_ClientCertificates_b__114_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x299abc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest____c*>::get(),
                                                                               "<get_ClientCertificates>b__114_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Net::__FtpWebRequest____c::setStaticF___9(::System::Net::__FtpWebRequest____c* value) {
  ::cordl_internals::setStaticField<::System::Net::__FtpWebRequest____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest____c*>::get>(
      std::forward<::System::Net::__FtpWebRequest____c*>(value));
}
inline ::System::Net::__FtpWebRequest____c* System::Net::__FtpWebRequest____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::__FtpWebRequest____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest____c*>::get>();
}
inline void System::Net::__FtpWebRequest____c::setStaticF___9__114_0(::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>*, "<>9__114_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest____c*>::get>(
      std::forward<::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>*>(value));
}
inline ::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>* System::Net::__FtpWebRequest____c::getStaticF___9__114_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>*, "<>9__114_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest____c*>::get>();
}
inline ::System::Net::__FtpWebRequest____c* System::Net::__FtpWebRequest____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__FtpWebRequest____c*>());
}
inline void System::Net::__FtpWebRequest____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::__FtpWebRequest____c::_get_ClientCertificates_b__114_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebRequest____c*>::get(),
                                                                             "<get_ClientCertificates>b__114_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__FtpWebRequest____c::__FtpWebRequest____c() {}
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_MethodInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::FtpMethodInfo* (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_MethodInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2994f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_MethodInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_Method)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2994f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.set_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::StringW)>(&::System::Net::FtpWebRequest::set_Method)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2994f30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_RenameTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_RenameTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29950f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_RenameTo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29950fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Net::ICredentials*)>(
    &::System::Net::FtpWebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2995104;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_RequestUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2995254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299525c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(int32_t)>(&::System::Net::FtpWebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2995264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_RemainingTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_RemainingTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299533c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_RemainingTimeout",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_ReadWriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_ReadWriteTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2995344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_ReadWriteTimeout",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_ContentOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_ContentOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299534c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_ContentOffset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2995354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.set_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(int64_t)>(&::System::Net::FtpWebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299535c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2995364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.set_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Net::IWebProxy*)>(&::System::Net::FtpWebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x299536c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.set_ConnectionGroupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::StringW)>(&::System::Net::FtpWebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29953d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_Aborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_Aborted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2995440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_Aborted",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Uri*)>(&::System::Net::FtpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2995448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.GetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x2995808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.BeginGetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::FtpWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::FtpWebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x299711c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.EndGetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::FtpWebRequest::*)(::System::IAsyncResult*)>(
    &::System::Net::FtpWebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x29977dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.BeginGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::FtpWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::FtpWebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x2997be8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.EndGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::FtpWebRequest::*)(::System::IAsyncResult*)>(
    &::System::Net::FtpWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x2998124;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.SubmitRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(bool)>(&::System::Net::FtpWebRequest::SubmitRequest)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x29963fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "SubmitRequest", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.TranslateConnectException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Net::FtpWebRequest::*)(::System::Exception*)>(
    &::System::Net::FtpWebRequest::TranslateConnectException)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2998e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "TranslateConnectException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.CreateConnectionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::CreateConnectionAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2998594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "CreateConnectionAsync",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.CreateConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::FtpControlStream* (::System::Net::FtpWebRequest::*)()>(
    &::System::Net::FtpWebRequest::CreateConnection)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2998628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "CreateConnection",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.TimedSubmitRequestHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::FtpWebRequest::*)(bool)>(
    &::System::Net::FtpWebRequest::TimedSubmitRequestHelper)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x29987dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "TimedSubmitRequestHelper", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.TimerCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Net::__TimerThread__Timer*, int32_t, ::System::Object*)>(
    &::System::Net::FtpWebRequest::TimerCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2998ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "TimerCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Timer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_TimerQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Queue* (::System::Net::FtpWebRequest::*)()>(
    &::System::Net::FtpWebRequest::get_TimerQueue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2998f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_TimerQueue",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.AttemptedRecovery
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpWebRequest::*)(::System::Exception*)>(&::System::Net::FtpWebRequest::AttemptedRecovery)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2998c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "AttemptedRecovery", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.SetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Exception*)>(&::System::Net::FtpWebRequest::SetException)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2996dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "SetException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.CheckError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::CheckError)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2995fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "CheckError",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.RequestCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Object*)>(&::System::Net::FtpWebRequest::RequestCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x298d048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "RequestCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.SyncRequestCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Object*)>(&::System::Net::FtpWebRequest::SyncRequestCallback)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2999b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "SyncRequestCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.AsyncRequestCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Object*)>(&::System::Net::FtpWebRequest::AsyncRequestCallback)> {
  constexpr static std::size_t size = 0xa60;
  constexpr static std::size_t addrs = 0x2999100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "AsyncRequestCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.FinishRequestStage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::__FtpWebRequest__RequestStage (::System::Net::FtpWebRequest::*)(::System::Net::__FtpWebRequest__RequestStage)>(&::System::Net::FtpWebRequest::FinishRequestStage)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2995fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "FinishRequestStage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__FtpWebRequest__RequestStage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::Abort)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x2999f30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.set_CachePolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Net::Cache::RequestCachePolicy*)>(
    &::System::Net::FtpWebRequest::set_CachePolicy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x299a3bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_UseBinary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_UseBinary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299a424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_UseBinary",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_UsePassive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_UsePassive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299a42c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_UsePassive",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (::System::Net::FtpWebRequest::*)()>(
    &::System::Net::FtpWebRequest::get_ClientCertificates)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x298fb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_ClientCertificates",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_EnableSsl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_EnableSsl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299a434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_EnableSsl",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::FtpWebRequest::*)()>(
    &::System::Net::FtpWebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x299a43c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_UseDefaultCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x299a4a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.set_PreAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(bool)>(&::System::Net::FtpWebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x299a4d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.get_InUse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpWebRequest::*)()>(&::System::Net::FtpWebRequest::get_InUse)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29950dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_InUse",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.EnsureFtpWebResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Exception*)>(&::System::Net::FtpWebRequest::EnsureFtpWebResponse)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x29968e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "EnsureFtpWebResponse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebRequest.DataStreamClosed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebRequest::*)(::System::Net::CloseExState)>(
    &::System::Net::FtpWebRequest::DataStreamClosed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x299a6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "DataStreamClosed", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CloseExState>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Net::FtpWebRequest::__get__syncObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____syncObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::FtpWebRequest::__get__syncObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____syncObject;
}
constexpr void System::Net::FtpWebRequest::__set__syncObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::ICredentials*& System::Net::FtpWebRequest::__get__authInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____authInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& System::Net::FtpWebRequest::__get__authInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____authInfo;
}
constexpr void System::Net::FtpWebRequest::__set__authInfo(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____authInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Net::FtpWebRequest::__get__uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::FtpWebRequest::__get__uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uri;
}
constexpr void System::Net::FtpWebRequest::__set__uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::FtpMethodInfo*& System::Net::FtpWebRequest::__get__methodInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____methodInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpMethodInfo*> const& System::Net::FtpWebRequest::__get__methodInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____methodInfo;
}
constexpr void System::Net::FtpWebRequest::__set__methodInfo(::System::Net::FtpMethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____methodInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FtpWebRequest::__get__renameTo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renameTo;
}
constexpr ::StringW const& System::Net::FtpWebRequest::__get__renameTo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renameTo;
}
constexpr void System::Net::FtpWebRequest::__set__renameTo(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renameTo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FtpWebRequest::__get__getRequestStreamStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____getRequestStreamStarted;
}
constexpr bool const& System::Net::FtpWebRequest::__get__getRequestStreamStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____getRequestStreamStarted;
}
constexpr void System::Net::FtpWebRequest::__set__getRequestStreamStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____getRequestStreamStarted = value;
}
constexpr bool& System::Net::FtpWebRequest::__get__getResponseStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____getResponseStarted;
}
constexpr bool const& System::Net::FtpWebRequest::__get__getResponseStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____getResponseStarted;
}
constexpr void System::Net::FtpWebRequest::__set__getResponseStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____getResponseStarted = value;
}
constexpr ::System::DateTime& System::Net::FtpWebRequest::__get__startTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startTime;
}
constexpr ::System::DateTime const& System::Net::FtpWebRequest::__get__startTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startTime;
}
constexpr void System::Net::FtpWebRequest::__set__startTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____startTime = value;
}
constexpr int32_t& System::Net::FtpWebRequest::__get__timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeout;
}
constexpr int32_t const& System::Net::FtpWebRequest::__get__timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeout;
}
constexpr void System::Net::FtpWebRequest::__set__timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____timeout = value;
}
constexpr int32_t& System::Net::FtpWebRequest::__get__remainingTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____remainingTimeout;
}
constexpr int32_t const& System::Net::FtpWebRequest::__get__remainingTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____remainingTimeout;
}
constexpr void System::Net::FtpWebRequest::__set__remainingTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____remainingTimeout = value;
}
constexpr int64_t& System::Net::FtpWebRequest::__get__contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____contentLength;
}
constexpr int64_t const& System::Net::FtpWebRequest::__get__contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____contentLength;
}
constexpr void System::Net::FtpWebRequest::__set__contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____contentLength = value;
}
constexpr int64_t& System::Net::FtpWebRequest::__get__contentOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____contentOffset;
}
constexpr int64_t const& System::Net::FtpWebRequest::__get__contentOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____contentOffset;
}
constexpr void System::Net::FtpWebRequest::__set__contentOffset(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____contentOffset = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& System::Net::FtpWebRequest::__get__clientCertificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clientCertificates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> const& System::Net::FtpWebRequest::__get__clientCertificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clientCertificates;
}
constexpr void System::Net::FtpWebRequest::__set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientCertificates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FtpWebRequest::__get__passive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____passive;
}
constexpr bool const& System::Net::FtpWebRequest::__get__passive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____passive;
}
constexpr void System::Net::FtpWebRequest::__set__passive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____passive = value;
}
constexpr bool& System::Net::FtpWebRequest::__get__binary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____binary;
}
constexpr bool const& System::Net::FtpWebRequest::__get__binary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____binary;
}
constexpr void System::Net::FtpWebRequest::__set__binary(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____binary = value;
}
constexpr ::StringW& System::Net::FtpWebRequest::__get__connectionGroupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectionGroupName;
}
constexpr ::StringW const& System::Net::FtpWebRequest::__get__connectionGroupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectionGroupName;
}
constexpr void System::Net::FtpWebRequest::__set__connectionGroupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionGroupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FtpWebRequest::__get__async() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____async;
}
constexpr bool const& System::Net::FtpWebRequest::__get__async() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____async;
}
constexpr void System::Net::FtpWebRequest::__set__async(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____async = value;
}
constexpr bool& System::Net::FtpWebRequest::__get__aborted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____aborted;
}
constexpr bool const& System::Net::FtpWebRequest::__get__aborted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____aborted;
}
constexpr void System::Net::FtpWebRequest::__set__aborted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____aborted = value;
}
constexpr bool& System::Net::FtpWebRequest::__get__timedOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timedOut;
}
constexpr bool const& System::Net::FtpWebRequest::__get__timedOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timedOut;
}
constexpr void System::Net::FtpWebRequest::__set__timedOut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____timedOut = value;
}
constexpr ::System::Exception*& System::Net::FtpWebRequest::__get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____exception;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& System::Net::FtpWebRequest::__get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____exception;
}
constexpr void System::Net::FtpWebRequest::__set__exception(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::__TimerThread__Queue*& System::Net::FtpWebRequest::__get__timerQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timerQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__Queue*> const& System::Net::FtpWebRequest::__get__timerQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timerQueue;
}
constexpr void System::Net::FtpWebRequest::__set__timerQueue(::System::Net::__TimerThread__Queue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timerQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::__TimerThread__Callback*& System::Net::FtpWebRequest::__get__timerCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timerCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__Callback*> const& System::Net::FtpWebRequest::__get__timerCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timerCallback;
}
constexpr void System::Net::FtpWebRequest::__set__timerCallback(::System::Net::__TimerThread__Callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timerCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FtpWebRequest::__get__enableSsl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enableSsl;
}
constexpr bool const& System::Net::FtpWebRequest::__get__enableSsl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enableSsl;
}
constexpr void System::Net::FtpWebRequest::__set__enableSsl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____enableSsl = value;
}
constexpr ::System::Net::FtpControlStream*& System::Net::FtpWebRequest::__get__connection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpControlStream*> const& System::Net::FtpWebRequest::__get__connection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connection;
}
constexpr void System::Net::FtpWebRequest::__set__connection(::System::Net::FtpControlStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& System::Net::FtpWebRequest::__get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::FtpWebRequest::__get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____stream;
}
constexpr void System::Net::FtpWebRequest::__set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::__FtpWebRequest__RequestStage& System::Net::FtpWebRequest::__get__requestStage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____requestStage;
}
constexpr ::System::Net::__FtpWebRequest__RequestStage const& System::Net::FtpWebRequest::__get__requestStage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____requestStage;
}
constexpr void System::Net::FtpWebRequest::__set__requestStage(::System::Net::__FtpWebRequest__RequestStage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____requestStage = value;
}
constexpr bool& System::Net::FtpWebRequest::__get__onceFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____onceFailed;
}
constexpr bool const& System::Net::FtpWebRequest::__get__onceFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____onceFailed;
}
constexpr void System::Net::FtpWebRequest::__set__onceFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____onceFailed = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::FtpWebRequest::__get__ftpRequestHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ftpRequestHeaders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::FtpWebRequest::__get__ftpRequestHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ftpRequestHeaders;
}
constexpr void System::Net::FtpWebRequest::__set__ftpRequestHeaders(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ftpRequestHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::FtpWebResponse*& System::Net::FtpWebRequest::__get__ftpWebResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ftpWebResponse;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpWebResponse*> const& System::Net::FtpWebRequest::__get__ftpWebResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ftpWebResponse;
}
constexpr void System::Net::FtpWebRequest::__set__ftpWebResponse(::System::Net::FtpWebResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ftpWebResponse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::FtpWebRequest::__get__readWriteTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____readWriteTimeout;
}
constexpr int32_t const& System::Net::FtpWebRequest::__get__readWriteTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____readWriteTimeout;
}
constexpr void System::Net::FtpWebRequest::__set__readWriteTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____readWriteTimeout = value;
}
constexpr ::System::Net::ContextAwareResult*& System::Net::FtpWebRequest::__get__writeAsyncResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____writeAsyncResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ContextAwareResult*> const& System::Net::FtpWebRequest::__get__writeAsyncResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____writeAsyncResult;
}
constexpr void System::Net::FtpWebRequest::__set__writeAsyncResult(::System::Net::ContextAwareResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writeAsyncResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::LazyAsyncResult*& System::Net::FtpWebRequest::__get__readAsyncResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____readAsyncResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::LazyAsyncResult*> const& System::Net::FtpWebRequest::__get__readAsyncResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____readAsyncResult;
}
constexpr void System::Net::FtpWebRequest::__set__readAsyncResult(::System::Net::LazyAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____readAsyncResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::LazyAsyncResult*& System::Net::FtpWebRequest::__get__requestCompleteAsyncResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____requestCompleteAsyncResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::LazyAsyncResult*> const& System::Net::FtpWebRequest::__get__requestCompleteAsyncResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____requestCompleteAsyncResult;
}
constexpr void System::Net::FtpWebRequest::__set__requestCompleteAsyncResult(::System::Net::LazyAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requestCompleteAsyncResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::FtpWebRequest::setStaticF_s_defaultFtpNetworkCredential(::System::Net::NetworkCredential* value) {
  ::cordl_internals::setStaticField<::System::Net::NetworkCredential*, "s_defaultFtpNetworkCredential", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get>(
      std::forward<::System::Net::NetworkCredential*>(value));
}
inline ::System::Net::NetworkCredential* System::Net::FtpWebRequest::getStaticF_s_defaultFtpNetworkCredential() {
  return ::cordl_internals::getStaticField<::System::Net::NetworkCredential*, "s_defaultFtpNetworkCredential",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get>();
}
inline void System::Net::FtpWebRequest::setStaticF_s_DefaultTimerQueue(::System::Net::__TimerThread__Queue* value) {
  ::cordl_internals::setStaticField<::System::Net::__TimerThread__Queue*, "s_DefaultTimerQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get>(
      std::forward<::System::Net::__TimerThread__Queue*>(value));
}
inline ::System::Net::__TimerThread__Queue* System::Net::FtpWebRequest::getStaticF_s_DefaultTimerQueue() {
  return ::cordl_internals::getStaticField<::System::Net::__TimerThread__Queue*, "s_DefaultTimerQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get>();
}
inline ::System::Net::FtpMethodInfo* System::Net::FtpWebRequest::get_MethodInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_MethodInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::FtpMethodInfo*, false>(this, ___internal_method);
}
inline ::StringW System::Net::FtpWebRequest::get_Method() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_Method",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::set_Method(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "set_Method", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Net::FtpWebRequest::get_RenameTo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_RenameTo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::ICredentials* System::Net::FtpWebRequest::get_Credentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_Credentials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::set_Credentials(::System::Net::ICredentials* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "set_Credentials", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::FtpWebRequest::get_RequestUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_RequestUri",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline int32_t System::Net::FtpWebRequest::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_Timeout",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::set_Timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "set_Timeout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::FtpWebRequest::get_RemainingTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_RemainingTimeout",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Net::FtpWebRequest::get_ReadWriteTimeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_ReadWriteTimeout",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::Net::FtpWebRequest::get_ContentOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_ContentOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::Net::FtpWebRequest::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_ContentLength",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::set_ContentLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "set_ContentLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::FtpWebRequest::get_Proxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_Proxy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::set_Proxy(::System::Net::IWebProxy* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "set_Proxy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::FtpWebRequest::set_ConnectionGroupName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "set_ConnectionGroupName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::FtpWebRequest::get_Aborted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_Aborted",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::FtpWebRequest* System::Net::FtpWebRequest::New_ctor(::System::Uri* uri) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::FtpWebRequest*>(uri));
}
inline void System::Net::FtpWebRequest::_ctor(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri);
}
inline ::System::Net::WebResponse* System::Net::FtpWebRequest::GetResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "GetResponse",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::FtpWebRequest::BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "BeginGetResponse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::Net::WebResponse* System::Net::FtpWebRequest::EndGetResponse(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "EndGetResponse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::FtpWebRequest::BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "BeginGetRequestStream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::IO::Stream* System::Net::FtpWebRequest::EndGetRequestStream(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "EndGetRequestStream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, asyncResult);
}
inline void System::Net::FtpWebRequest::SubmitRequest(bool isAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "SubmitRequest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isAsync);
}
inline ::System::Exception* System::Net::FtpWebRequest::TranslateConnectException(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "TranslateConnectException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, e);
}
inline void System::Net::FtpWebRequest::CreateConnectionAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "CreateConnectionAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::FtpControlStream* System::Net::FtpWebRequest::CreateConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "CreateConnection",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::FtpControlStream*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::FtpWebRequest::TimedSubmitRequestHelper(bool isAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "TimedSubmitRequestHelper", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, isAsync);
}
inline void System::Net::FtpWebRequest::TimerCallback(::System::Net::__TimerThread__Timer* timer, int32_t timeNoticed, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "TimerCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Timer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer, timeNoticed, context);
}
inline ::System::Net::__TimerThread__Queue* System::Net::FtpWebRequest::get_TimerQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_TimerQueue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Queue*, false>(this, ___internal_method);
}
inline bool System::Net::FtpWebRequest::AttemptedRecovery(::System::Exception* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "AttemptedRecovery", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline void System::Net::FtpWebRequest::SetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "SetException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline void System::Net::FtpWebRequest::CheckError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "CheckError",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::RequestCallback(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "RequestCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Net::FtpWebRequest::SyncRequestCallback(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "SyncRequestCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void System::Net::FtpWebRequest::AsyncRequestCallback(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "AsyncRequestCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline ::System::Net::__FtpWebRequest__RequestStage System::Net::FtpWebRequest::FinishRequestStage(::System::Net::__FtpWebRequest__RequestStage stage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "FinishRequestStage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__FtpWebRequest__RequestStage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__FtpWebRequest__RequestStage, false>(this, ___internal_method, stage);
}
inline void System::Net::FtpWebRequest::Abort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "Abort",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::set_CachePolicy(::System::Net::Cache::RequestCachePolicy* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "set_CachePolicy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::FtpWebRequest::get_UseBinary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_UseBinary",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::FtpWebRequest::get_UsePassive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_UsePassive",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::FtpWebRequest::get_ClientCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_ClientCertificates",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, false>(this, ___internal_method);
}
inline bool System::Net::FtpWebRequest::get_EnableSsl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_EnableSsl",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::FtpWebRequest::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline bool System::Net::FtpWebRequest::get_UseDefaultCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_UseDefaultCredentials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::set_PreAuthenticate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "set_PreAuthenticate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::FtpWebRequest::get_InUse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "get_InUse",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::FtpWebRequest::EnsureFtpWebResponse(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "EnsureFtpWebResponse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline void System::Net::FtpWebRequest::DataStreamClosed(::System::Net::CloseExState closeState) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebRequest*>::get(), "DataStreamClosed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CloseExState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, closeState);
}
// Ctor Parameters []
constexpr ::System::Net::FtpWebRequest::FtpWebRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
